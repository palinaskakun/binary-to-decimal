/**
 * Program that converts a binary representation 
 * of a number to an unsigned integer
 * @author Palina Skakun
 */


#include "bin2dec.h"

/**
 * Convert a binary representation of a 
 * number to an unsigned integer. 
 * 
 * For this function, the values Y and N represent 
 * true (1) and false (0) respectfully. So, the string:
 * 
 * YYNY is equal to 1101 binary, which is equal to 13.
 *
 * Unexpected characters are ignored. Only Y's and N's are
 * considered to be valid. Stop converting when you get
 * to a space character or the end of the string. The 
 * representation is case-sensitive (only Y/N are valid 
 * true and false values).
 *
 * 'aYNcY YY' should convert to 5
 * 'NYNYny' should convert to 5
 *
 * @param binary Binary number as a string of 'Y's and 'N's
 * and other characters.
 * @returns unsigned int result
 */
unsigned int bin2dec(const char *binary)
{
	unsigned int ret =0;
  //for loop that goes through all the chars of the string
  //until the null character or space 
  for ( ; *binary!= '\0' && *binary != ' ' ; binary++)
  {
    if (*binary=='Y')
    {
      ret=ret*2+1;//comverts to decimal
    
    }
    if (*binary =='N')
    {
      ret=ret*2; // converts to decimal
    }


  }

  
  return ret;
}
