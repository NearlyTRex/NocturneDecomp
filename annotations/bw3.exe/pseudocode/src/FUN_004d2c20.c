// Name: FUN_004d2c20
// Address: 004d2c20
// Address Range: [[004d2c20, 004d2cce]]
// Convention: unknown
// Signature: void FUN_004d2c20(int param_1)

#include "nocturne.h"

void FUN_004d2c20(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  
  if (*(int *)(param_1 + 0x26fc) != 0) {
    FUN_00441ff0(PTR_DAT_005f1690,"CHero::stopGettingGrabbed by %s, type %d\n",*(int *)(param_1 + 0x26fc),
                 *(uint *)(param_1 + 0x2700));
  }
  if ((*(byte **)(param_1 + 0x68) == &DAT_0078a123) && (*(int *)(param_1 + 0x24f8) != 0)) {
    iVar1 = param_1 + 0x158;
    uVar2 = FUN_004fc310(iVar1,"GETGRABBED",0);
    iVar3 = FUN_004fba50(uVar2);
    if (-1 < iVar3) {
      fVar4 = (float)FUN_004fc350(iVar1,iVar3);
      if (0.0 < fVar4) {
        FUN_004fc160(iVar1,"STAND",1);
      }
    }
  }
  FUN_004307c0(param_1);
  return;
}
