// Name: FUN_0054bea0
// Address: 0054bea0
// Address Range: [[0054bea0, 0054beee]]
// Convention: unknown
// Signature: int FUN_0054bea0(int *param_1)

#include "nocturne.h"

int FUN_0054bea0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  piVar1 = param_1;
  if (0 < *param_1) {
    do {
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + (piVar1[0x1a] + piVar1[0x15]) * 0x16 + piVar1[0x1a] * 4 + piVar1[0xb] * 0x34;
      piVar1 = piVar1 + 1;
    } while (iVar3 < *param_1);
  }
  return iVar2;
}
