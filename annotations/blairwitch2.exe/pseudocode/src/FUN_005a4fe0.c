// Name: FUN_005a4fe0
// Address: 005a4fe0
// Address Range: [[005a4fe0, 005a5123]]
// Convention: unknown
// Signature: void FUN_005a4fe0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005a4fe0(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  uint uVar5;
  uint unaff_EDI;
  
  iVar2 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x17c))(param_1);
  if (iVar2 != 0) {
    iVar2 = *(int *)(param_1 + 0x10a78);
    fVar4 = *(float *)(iVar2 + 0x20) - *(float *)(param_1 + 0x20);
    fVar1 = *(float *)(iVar2 + 0x28) - *(float *)(param_1 + 0x28);
    if (_DAT_005ff8f4 < SQRT(fVar1 * fVar1 + fVar4 * fVar4)) {
      FUN_0059dcb0(param_1 + 0x10af8,0x3f800000);
      FUN_0059d8e0(param_1 + 0x10af8,"BChasing" + 1);
    }
    else {
      FUN_00423850(param_1,iVar2 + 0x20);
      if (*(int *)(param_1 + 0x11860) == 0) {
        unaff_EDI = 5;
      }
      else if (*(int *)(param_1 + 0x11860) == 1) {
        unaff_EDI = 9;
      }
      iVar2 = param_1 + 0x2b4;
      FUN_00503620(iVar2,unaff_EDI,1);
      iVar3 = FUN_005035c0(iVar2);
      if (*(int *)(iVar3 + 0x24) == 5) {
        fVar4 = (float)FUN_00503e60(iVar2);
        if ((float)_DAT_005f0562 < fVar4) {
          uVar5 = FUN_0040cfc0(0,1);
          *(uint *)(param_1 + 0x11860) = uVar5;
        }
      }
      iVar2 = FUN_005035c0(param_1 + 0x2b4);
      if (*(int *)(iVar2 + 0x24) == 9) {
        fVar4 = (float)FUN_00503e60(param_1 + 0x2b4);
        if ((float)_DAT_005f0562 < fVar4) {
          uVar5 = FUN_0040cfc0(0,1);
          *(uint *)(param_1 + 0x11860) = uVar5;
          return;
        }
      }
    }
  }
  return;
}
