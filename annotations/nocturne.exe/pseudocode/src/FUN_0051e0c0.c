// Name: FUN_0051e0c0
// Address: 0051e0c0
// Address Range: [[0051e0c0, 0051e114]]
// Convention: unknown
// Signature: void FUN_0051e0c0(int param_1,char *param_2)

#include "nocturne.h"

void FUN_0051e0c0(int param_1,char *param_2)

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
  FUN_0051dc90(param_1);
  FUN_0051dcb0(param_1);
  *(uint *)(param_1 + 0x2230) = 0xffffffff;
  return;
}
