// Name: crt_string.c_strchr_FUN_0060f890
// Address: 0060f890
// Address Range: [[0060f890, 0060f8b1]]
// Convention: __cdecl
// Signature: char * crt_string.c_strchr_FUN_0060f890(char * str, int ch)

#include "nocturne.h"

char * __cdecl crt_string_c_strchr_FUN_0060f890(char *str,int ch)

{
  char cVar1;
  
  cVar1 = *str;
  while( true ) {
    if ((char)ch == cVar1) {
      return str;
    }
    cVar1 = *str;
    str = str + 1;
    if (cVar1 == '\0') break;
    cVar1 = *str;
  }
  return (char *)0x0;
}
