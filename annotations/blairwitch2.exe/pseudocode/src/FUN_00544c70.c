// Name: FUN_00544c70
// Address: 00544c70
// Address Range: [[00544c70, 00544cb0]]
// Convention: unknown
// Signature: int FUN_00544c70(int *param_1)

#include "nocturne.h"

int FUN_00544c70(int *param_1)

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
