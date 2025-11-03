// Decrypting the cipher


#include <iostream>
#include <vector>
#include <map>
#include <cmath>

using namespace std;

int main()
{
	string input;
	input = "GKYBEEYDYQVONNRBSNFPLBVRBCOGRSBNKIOEQCYVYEYBNYQUVILZBREBSQFEBJYQISKIONYBVVYNGKYVBGGIVSYPNBVDOYQRSBJIOVGURERSDUVRQBPGKBGNYYTNGIFBRSGKYVBNBKOLCEYNGOQYSGAKINYRSGYVBJGRISNARGKBLYVRJBSNBSQVONNRBSNBVYIWYVCEIASCPFVINYJOGIVNAKIRSQRJGYQKYVUIVBJGRSDREEYDBEEPBNBUIVYRDSBDYSGNFYJRURJBEEPCOGRSBQYUYSNYGYBLQYNJVRCYNKYVVYEBGRISNKRFGIVONNRBSCREERISBRVYBEYHBSQYVGIVNKRSAKIBEEYDYQEPLYSGIVYQKYVRSBGGYLFGNGIRSUREGVBGYVYFOCERJBSFIERGRJNBNBJGOBEEPZONGBUVRYSQKYVEBAPYVNBENIRSJEOQYQBGYHGLYNNBDYJKBRSRSAKRJKBLBVVRYQDOSVRDKGNBQWIJBGYAKILCOGRSBBEEYDYQEPIUUYVYQGINEYYFARGKRSBSBGGYLFGGIDBRSFIERGRJBERSUEOYSJYNBRQKYAIOEQSYWYVNEYYFARGKBVYQKYBQERTYCOGRSBCOGRSBKBNCYYSRSZBREURVNGRSABNKRSDGISSIARSBEYHBSQVRBWRVDRSRBNRSJYZOEPURUGYYSAKYSNKYFEYBQYQSIGDOREGPGIGKYUIVYRDSBDYSGJKBVDYNRSQJUYQYVBEJIOVGCOGRSBNKIONYBVVYNGVYMOYNGAREECYQRNJONNYQBGBJIOVGKYBVRSDISNYFGYSGKYZOQDYNBRQGKYNRCYVRBSCIVSUIVLYVBLYVRJBSOSRWYVNRGPDVBQOBGYNGOQYSGBEEYDYQEPCOREGVYFOCERJBSFBVGPJISSYJGRISNGKVIODKDOSVRDKGNDVIOFNRSJEOQRSDGKYSVBBSQGKVIODKGKYSBGRISBEFVBPYVCVYBTUBNGBNBABPGIFONKFVIVONNRBSRSGYVYNGNFVINYJOGIVNJKBVDY";
	map<char, double> letter_map;
	cout << "The input size is: " << input.length() << endl;

// mapping the text and adding the number of occurences
	cout << "Cipher     # of times apeared          percent appeared" << endl;
	for (char c : input)
	{
		letter_map[c]++;
	}
	letter_map['X'];

// cout the letters and the percent that it appears
	double percent;
	for (auto c : letter_map)
	{
		percent = round((c.second / input.size()) * 100.0 * 100.0) / 100.0;

		cout << c.first << "             " << c.second << "                         " << percent << "%" << endl;
	}

	cout << "\nFrom examining the occurrence percentages of the letters, I conclude that: \n"
	     << "1. 'Y' = 'E' because 'E' is the most common letter in the English language.\n"
	     << "2. Bigrams: There are common pairs: 'YV', 'YN', 'YQ' that appear frequently, which can be something like 'er', 'en', or 'ed'.\n"
	     << "3. Bigrams: When looking for 'TH' patterns, the most frequent was 'GK', so 'G' must = 'T' and 'K' must = 'H'.\n"
	     << "4. Trigrams: For the trigrams: 'GKY' can be replaced with 'that'."
	     << endl;

	vector<char> rel_letter = {
// Plaintext
		 'w', 'a', 'b', 'g', 'l', 'p', 't', 'x', 'o', 'c', 'h', 'm', 'q', 's', 'u', 'y', 'd', 'i', 'n', 'k', 'f', 'r', 'v', 'z', 'e', 'j'
	};
//   A.   B.   C.   D.   E.   F.   G.   H.   I.   J    K.   L.   M.   N.   O.   P.   Q.   R.   S.   T.   U.   V.   W.   X.   Y    Z

	// creates the matching letters map
	int i =0;
	map<char, char> matching_letters;
	for (auto c : letter_map)
	{
		matching_letters[c.first] = rel_letter[i];
		i++;
	}

	cout << "\nMapping the letters:" << endl;
	string first[matching_letters.size()];
	string second[matching_letters.size()];
	for (const auto &c : matching_letters)
	{
		cout << c.first << "   ";
	}
	cout << endl;

	for (const auto &c : matching_letters)
	{
		cout << c.second << "   ";
	}
	cout << endl << endl;

	string decoded;
	for (char c : input) {
		decoded += matching_letters[c];
	}

	cout << decoded;
	return 0;
}