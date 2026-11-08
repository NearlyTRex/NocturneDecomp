// Name: FUN_004b4230
// Address: 004b4230
// Address Range: [[004b4230, 004b4353]]
// Convention: unknown
// Signature: undefined4 FUN_004b4230(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004b4230(int param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  float fStack_18;
  
  fStack_18 = (float)(4 - *(int *)(param_1 + 0x58)) * (float)_DAT_005df5a4;
  if (fStack_18 < 0.0) {
    fStack_18 = 0.0;
  }
  fVar1 = (float)FUN_0040cc00(0xc0c90fdb,0x40c90fdb);
  *(float *)(param_1 + 0x4c) = fVar1 * fStack_18;
  fVar1 = (float)FUN_0040cc00(0xc0490fdb,0x40490fdb);
  *(float *)(param_1 + 0x50) = fVar1 * fStack_18;
  if (*(int *)(param_1 + 0x58) == 0) {
    iVar5 = 0;
    iVar4 = 0;
    do {
      iVar2 = FUN_005735a0(*(uint *)(iVar4 + 0x1c58a90));
      if (iVar2 == 0) break;
      iVar4 = iVar4 + 4;
      iVar5 = iVar5 + 1;
    } while (iVar4 < 0xc);
    if (iVar5 != 3) {
      iVar4 = FUN_005c04e0(*(uint *)(param_1 + 0x5c),"shell.kfm");
      if (iVar4 == 0) {
        uVar3 = FUN_0057d8a0(0x02C82A60,0x01C57074,"sh-sh?c @ .15",param_1);
        *(uint *)(iVar5 * 4 + 0x1c58a90) = uVar3;
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
        return 0;
      }
      uVar3 = FUN_0057d8a0(0x02C82A60,0x01C57074,"44-sh?c @ .2",param_1);
      *(uint *)(iVar5 * 4 + 0x1c58a90) = uVar3;
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
      return 0;
    }
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
  return 0;
}
