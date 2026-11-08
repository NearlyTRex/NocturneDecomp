// Name: FUN_004ceb80
// Address: 004ceb80
// Address Range: [[004ceb80, 004cec2e]]
// Convention: unknown
// Signature: void FUN_004ceb80(int param_1)

#include "nocturne.h"

void FUN_004ceb80(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  
  if (*(int *)(param_1 + 0x276c) != 0) {
    FUN_00436710(PTR_DAT_00609ed0,"CHero::stopGettingGrabbed by %s, type %d\n",*(int *)(param_1 + 0x276c),
                 *(uint *)(param_1 + 0x2770));
  }
  if ((*(byte **)(param_1 + 0x68) == &DAT_0078a123) && (*(int *)(param_1 + 0x2564) != 0)) {
    iVar1 = param_1 + 0x2b4;
    uVar2 = FUN_00503860(iVar1,"GETGRABBED",0);
    iVar3 = FUN_00502fa0(uVar2);
    if (-1 < iVar3) {
      fVar4 = (float)FUN_005038a0(iVar1,iVar3);
      if (0.0 < fVar4) {
        FUN_005036b0(iVar1,"STAND",1);
      }
    }
  }
  FUN_00427a10(param_1);
  return;
}
