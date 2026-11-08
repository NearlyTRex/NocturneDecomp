// Name: FUN_005b1550
// Address: 005b1550
// Address Range: [[005b1550, 005b15b8]]
// Convention: unknown
// Signature: void FUN_005b1550(int *param_1)

#include "nocturne.h"

void FUN_005b1550(int *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  piVar3 = param_1;
  if (0 < *param_1) {
    do {
      if (piVar3[0x65] != 0) {
        uVar1 = FUN_005ade00(piVar3[0x65],0);
        FUN_005b7fdc(uVar1);
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < *param_1);
  }
  *param_1 = 0;
  FUN_005b77c0(param_1 + 1,0,400);
  FUN_005b77c0(param_1 + 0x65,0,0x28);
  return;
}
