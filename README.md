# MyStringClass
- This is a string class that I created to use as a library including many c++ string functions.

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

   A function to count all string letters or just upper or lower case letters depending on enum value
   
       static short CountLetters(string S1, enWhatToCount WhatToCount = enWhatToCount::All)
    {
       // if enum value is all count all letters

       if (WhatToCount == enWhatToCount::All)
       {
           return S1.length();
       }

       short Counter = 0;

       // otherwise , count upper or lower case letters depending on enum value

       for (short i = 0; i < S1.length(); i++)
       {

           if (WhatToCount == enWhatToCount::CapitalLetters && isupper(S1[i]))
               Counter++;


           if (WhatToCount == enWhatToCount::SmallLetters && islower(S1[i]))
               Counter++;


       }

       return Counter;

    }


# Contribution
- Please feel free to create a pull request if you want to add any functions or find and solve any bugs :)))
