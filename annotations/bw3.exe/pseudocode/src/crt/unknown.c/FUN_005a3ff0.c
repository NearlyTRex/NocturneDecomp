// Name: crt_unknown.c_FUN_005a3ff0
// Address: 005a3ff0
// Address Range: [[005a3ff0, 005a400d]]
// Convention: unknown
// Signature: char * crt_unknown_c_FUN_005a3ff0(char *param_1)

#include "nocturne.h"

char * FUN_005a3ff0(char *param_1)

{
  char cVar1;
  char *pcVar2;
  
  for (pcVar2 = param_1; cVar1 = *pcVar2, cVar1 != '\0'; pcVar2 = pcVar2 + 1) {
    if ((byte)(cVar1 + 0xbfU) < 0x1a) {
      *pcVar2 = cVar1 + ' ';
    }
  }
  return param_1;
}
