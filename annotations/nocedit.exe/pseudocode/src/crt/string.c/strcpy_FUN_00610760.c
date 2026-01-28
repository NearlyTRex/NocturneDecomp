// Name: crt_string.c_strcpy_FUN_00610760
// Address: 00610760
// Address Range: [[00610760, 00610784]]
// Convention: __cdecl
// Signature: char * __cdecl crt_string_c_strcpy_FUN_00610760(char *dest,char *src)

#include "nocturne.h"

char * __cdecl crt_string_c_strcpy_FUN_00610760(char *dest,char *src)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = dest;
  do {
    cVar1 = *src;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') {
      return dest;
    }
    cVar1 = src[1];
    src = src + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  return dest;
}
