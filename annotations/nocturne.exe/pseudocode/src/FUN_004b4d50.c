// Name: FUN_004b4d50
// Address: 004b4d50
// Address Range: [[004b4d50, 004b4dcd]]
// Convention: unknown
// Signature: void FUN_004b4d50(int param_1)

#include "nocturne.h"

void FUN_004b4d50(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  
  if ((*(byte **)(param_1 + 0x68) == &DAT_0078a123) && (*(int *)(param_1 + 0x2400) != 0)) {
    iVar1 = param_1 + 0x150;
    uVar2 = FUN_004e1890(iVar1,"GETGRABBED",0);
    iVar3 = FUN_004e10a0(uVar2);
    if (-1 < iVar3) {
      fVar4 = (float)FUN_004e18d0(iVar1,iVar3);
      if (0.0 < fVar4) {
        FUN_004e1740(iVar1,"STAND",1);
      }
    }
  }
  FUN_004280b0(param_1);
  return;
}
