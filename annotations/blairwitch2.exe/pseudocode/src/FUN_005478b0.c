// Name: FUN_005478b0
// Address: 005478b0
// Address Range: [[005478b0, 00547904]]
// Convention: unknown
// Signature: void FUN_005478b0(int param_1,char *param_2)

#include "nocturne.h"

void FUN_005478b0(int param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(param_1 + 0x2260);
  do {
    cVar1 = *param_2;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  *(uint *)(param_1 + 0x22b0) = 0;
  FUN_00547440(param_1);
  FUN_00547460(param_1);
  *(uint *)(param_1 + 0x2230) = 0xffffffff;
  return;
}
