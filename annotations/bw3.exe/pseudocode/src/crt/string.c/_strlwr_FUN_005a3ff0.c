// Name: crt_string.c__strlwr_FUN_005a3ff0
// Address: 005a3ff0
// Address Range: [[005a3ff0, 005a400d]]
// Convention: __cdecl
// Signature: char * __cdecl crt_string_c__strlwr_FUN_005a3ff0(char *str)

#include "nocturne.h"

char * __cdecl _strlwr(char *str)

{
  char cVar1;
  char *pcVar2;
  
  for (pcVar2 = str; cVar1 = *pcVar2, cVar1 != '\0'; pcVar2 = pcVar2 + 1) {
    if ((byte)(cVar1 + 0xbfU) < 0x1a) {
      *pcVar2 = cVar1 + ' ';
    }
  }
  return str;
}
