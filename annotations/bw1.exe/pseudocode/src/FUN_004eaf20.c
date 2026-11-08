// Name: FUN_004eaf20
// Address: 004eaf20
// Address Range: [[004eaf20, 004eafce]]
// Convention: unknown
// Signature: void FUN_004eaf20(int param_1)

#include "nocturne.h"

void FUN_004eaf20(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  
  if (*(int *)(param_1 + 0x26fc) != 0) {
    FUN_00445430(PTR_DAT_00611100,"CHero::stopGettingGrabbed by %s, type %d\n",*(int *)(param_1 + 0x26fc),
                 *(uint *)(param_1 + 0x2700));
  }
  if ((*(byte **)(param_1 + 0x68) == &DAT_0078a123) && (*(int *)(param_1 + 0x24f8) != 0)) {
    iVar1 = param_1 + 0x158;
    uVar2 = FUN_00524a00(iVar1,"GETGRABBED",0);
    iVar3 = FUN_00524150(uVar2);
    if (-1 < iVar3) {
      fVar4 = (float)FUN_00524a40(iVar1,iVar3);
      if (0.0 < fVar4) {
        FUN_00524850(iVar1,"STAND",1);
      }
    }
  }
  FUN_00431440(param_1);
  return;
}
