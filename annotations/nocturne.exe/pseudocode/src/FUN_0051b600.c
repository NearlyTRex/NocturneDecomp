// Name: FUN_0051b600
// Address: 0051b600
// Address Range: [[0051b600, 0051b640]]
// Convention: unknown
// Signature: int FUN_0051b600(int *param_1)

#include "nocturne.h"

int FUN_0051b600(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = 0;
  piVar2 = param_1;
  if (0 < *param_1) {
    do {
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + (piVar2[0x15] + piVar2[0x1a]) * 0x16 + piVar2[0x1a] * 4 + piVar2[0xb] * 0x34;
      piVar2 = piVar2 + 1;
    } while (iVar3 < *param_1);
  }
  return iVar1;
}
