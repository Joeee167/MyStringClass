# MyStringClass
- This is a string class that I created to use as a library including many c++ string functions.

# Contribution
- Please feel free to create a pull request if you want to add any functions or find and solve any bugs :)))

# Sample Function

 A function used to change the first letter of each word in the string to upper case.

     static string  UpperFirstLetterOfEachWord(string S1)
      {  
       bool isFirstLetter = true;

      for (short i = 0; i < S1.length(); i++)
      {

          if (S1[i] != ' ' && isFirstLetter)
          {
              S1[i] = toupper(S1[i]);

          }

          // If the current char is space so the next will be the first letter of a new word
          isFirstLetter = (S1[i] == ' ' ? true : false);

      }

      return S1;
    }
