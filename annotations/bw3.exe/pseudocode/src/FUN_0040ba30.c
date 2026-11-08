// Name: FUN_0040ba30
// Address: 0040ba30
// Address Range: [[0040ba30, 0040baaa]]
// Convention: unknown
// Signature: void FUN_0040ba30(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_0040ba30(int param_1,uint param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char local_d0 [200];
  
  pcVar3 = local_d0;
  if (DAT_007df9b8 == 1) {
    FUN_0040b680(local_d0,param_2);
    FUN_0054eae0(param_1,local_d0);
    return;
  }
  pcVar2 = (char *)(param_1 + 0x2350);
  do {
    cVar1 = *pcVar2;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  FUN_0040b680(local_d0,param_2);
  return;
}
