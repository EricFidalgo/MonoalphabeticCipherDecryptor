# Monoalphabetic Cipher Decryptor

**[→ View Project Page](https://www.google.com/search?q=https://ericfidalgo.github.io/portfolio/projects/Monoalphabetic-Cipher-Decryptor)**

## Project Description

This project is a C++ program designed to decrypt a monoalphabetic substitution cipher. The program takes a hardcoded ciphertext and performs a detailed letter frequency analysis, calculating and displaying the count and occurrence percentage for each letter.

Based on this frequency analysis (e.g., identifying 'Y' as 'e') and assumptions about common English bigrams and trigrams (like 'GKY' as 'that'), a complete substitution map was manually deduced. This map is hardcoded into the program to translate the ciphertext into the final plaintext, which is then printed to the console.

## Technologies Used

  * **Language:** C++
  * **Core Libraries:** `iostream`, `vector`, `map`, `cmath`
  * **Tools:** C++ Compiler (g++/Clang), Git

## How to Run

1.  **Prerequisites**

      * A C++ compiler, such as `g++` or `Clang`.

2.  **Compilation**

    ```bash
    # Using g++
    g++ decrypt.cpp -o decrypt
    ```

3.  **Execution**

    ```bash
    # This will run the compiled program
    ./decrypt
    ```

## Project Output

The program first outputs the size of the ciphertext, followed by a complete frequency analysis table for each letter. Finally, it prints the decrypted plaintext.

### Frequency Analysis (Example Output)

```
The input size is: 1050
Cipher     # of times apeared          percent appeared
A             16                         1.52%
B             102                         9.71%
C             20                         1.9%
D             30                         2.86%
E             55                         5.24%
... (remaining letters) ...
Y             121                         11.52%
Z             5                         0.48%
```

### Decrypted Plaintext (Output)

```
theallegedrussianspymariabutinashouldbereleasedfromjailandplacedonhousearrestherattorneysarguedinacourtfilingfridaythatseekstopaintherasahumblestudentwhoseinteractionswithamericansandrussiansareoverblownbyprosecutorswhoindictedherforactingillegallyasaforeignagentspecificallybutinadefenseteamdescribesherrelationshiptorussianbillionairealexandertorshinwhoallegedlymentoredherinattemptstoinfiltraterepublicanpoliticsasactuallyjustafriendherlawyersalsoincludedatextmessagechaininwhichamarriedgunrightsadvocatewhombutinaallegedlyofferedtosleepwithinanattempttogainpoliticalinfluencesaidhewouldneversleepwitharedheadlikebutinabutinahasbeeninjailfirstinwashingtonnowinalexandriavirginiasincejulyfifteenwhenshepleadednotguiltytotheforeignagentchargesindcfederalcourtbutinashousearrestrequestwillbediscussedatacourthearingonseptenthejudgesaidthesiberianbornformeramericanuniversitygraduatestudentallegedlybuiltrepublicanpartyconnectionsthroughgunrightsgroupsincludingthenraandthroughthenationalprayerbreakfastasawaytopushprorussianinterestsprosecutorscharge
```