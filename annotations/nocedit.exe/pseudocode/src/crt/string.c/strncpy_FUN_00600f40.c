// Name: crt_string.c_strncpy_FUN_00600f40
// Address: 00600f40
// Address Range: [[00600f40, 00600f74]]
// Convention: __cdecl
// Signature: char * crt_string.c_strncpy_FUN_00600f40(char * dest, char * src, SIZE_T count)

#include "nocturne.h"

char * __cdecl crt_string_c_strncpy_FUN_00600f40(char *dest,char *src,SIZE_T count)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar3 = dest;
  pcVar2 = dest;
  if (count != 0) {
    do {
      pcVar3 = pcVar2;
      if (*src == '\0') break;
      pcVar3 = pcVar2 + 1;
      cVar1 = *src;
      src = src + 1;
      *pcVar2 = cVar1;
      count = count - 1;
      pcVar2 = pcVar3;
    } while (count != 0);
  }
  for (; count != 0; count = count - 1) {
    *pcVar3 = '\0';
    pcVar3 = pcVar3 + 1;
  }
  return dest;
}
