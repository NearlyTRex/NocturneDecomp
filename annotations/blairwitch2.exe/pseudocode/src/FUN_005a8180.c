// Name: FUN_005a8180
// Address: 005a8180
// Address Range: [[005a8180, 005a8212]]
// Convention: unknown
// Signature: void FUN_005a8180(int param_1,float param_2)

#include "nocturne.h"

void FUN_005a8180(int param_1,float param_2)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if ((*(int *)(param_1 + 0x38) == 0) && (*(int *)(param_1 + 0x14) == 0)) {
    return;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    if (((0.0 < *(float *)(param_1 + 0x30)) &&
        (fVar1 = *(float *)(param_1 + 0x30) - param_2, *(float *)(param_1 + 0x30) = fVar1,
        fVar1 <= 0.0)) && (*(int *)(param_1 + 0x34) != 0)) {
      FUN_005a8100(param_1,0);
    }
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 0x18)) {
      iVar3 = 0;
      do {
        while (piVar2 = (int *)(*(int *)(param_1 + 0x3c) + iVar3), *piVar2 != 0) {
          FUN_005a85c0(piVar2,param_2);
          iVar4 = iVar4 + 1;
          iVar3 = iVar3 + 0x60;
          if (*(int *)(param_1 + 0x18) <= iVar4) {
            return;
          }
        }
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 0x60;
      } while (iVar4 < *(int *)(param_1 + 0x18));
    }
  }
  return;
}
