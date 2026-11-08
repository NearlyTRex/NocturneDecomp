// Name: FUN_00461210
// Address: 00461210
// Address Range: [[00461210, 00461253]]
// Convention: unknown
// Signature: undefined4 FUN_00461210(char *param_1,char *param_2)

#include "nocturne.h"

uint FUN_00461210(char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = (char *)FUN_005ba120(param_1,param_2,0x100);
  if (pcVar2 == param_1) {
    return 1;
  }
  do {
    cVar1 = *param_2;
    *param_1 = cVar1;
    if (cVar1 == '\0') {
      return 0;
    }
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    param_1[1] = cVar1;
    param_1 = param_1 + 2;
  } while (cVar1 != '\0');
  return 0;
}
