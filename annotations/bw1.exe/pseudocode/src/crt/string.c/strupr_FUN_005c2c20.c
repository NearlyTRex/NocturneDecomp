// Name: crt_string.c_strupr_FUN_005c2c20
// Address: 005c2c20
// Address Range: [[005c2c20, 005c2c3d]]
// Convention: __cdecl
// Signature: char * __cdecl crt_string_c_strupr_FUN_005c2c20(char *string)

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
