// Name: FUN_005ba840
// Address: 005ba840
// Address Range: [[005ba840, 005ba85d]]
// Convention: unknown
// Signature: char * FUN_005ba840(char *param_1)

#include "nocturne.h"

char * FUN_005ba840(char *param_1)

{
  char cVar1;
  char *pcVar2;
  
  for (pcVar2 = param_1; cVar1 = *pcVar2, cVar1 != '\0'; pcVar2 = pcVar2 + 1) {
    if ((byte)(cVar1 + 0x9fU) < 0x1a) {
      *pcVar2 = cVar1 + -0x20;
    }
  }
  return param_1;
}
