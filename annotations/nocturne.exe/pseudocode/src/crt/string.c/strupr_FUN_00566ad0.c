// Name: crt_string.c_strupr_FUN_00566ad0
// Address: 00566ad0
// Address Range: [[00566ad0, 00566aed]]
// Convention: __cdecl
// Signature: char * __cdecl crt_string_c_strupr_FUN_00566ad0(char *string)

#include "nocturne.h"

char * __cdecl strupr(char *string)

{
  char cVar1;
  char *pcVar2;
  
  for (pcVar2 = string; cVar1 = *pcVar2, cVar1 != '\0'; pcVar2 = pcVar2 + 1) {
    if ((byte)(cVar1 + 0x9fU) < 0x1a) {
      *pcVar2 = cVar1 + -0x20;
    }
  }
  return string;
}
