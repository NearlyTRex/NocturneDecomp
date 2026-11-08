// Name: FUN_005b19b0
// Address: 005b19b0
// Address Range: [[005b19b0, 005b1b00]]
// Convention: unknown
// Signature: void FUN_005b19b0(int param_1,float *param_2)

#include "nocturne.h"

void FUN_005b19b0(int param_1,float *param_2)

{
  float *pfVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  float afStackY_1048 [1006];
  byte auStack_88 [40];
  uint uStack_60;
  uint auStack_5c [4];
  uint uStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  uint uStack_3c;
  float afStack_38 [4];
  float fStack_28;
  uint uStack_24;
  float afStack_20 [2];
  int iStack_18;
  int iStack_14;
  
  bVar4 = 0;
  pfVar1 = (float *)(param_1 + 0x3ab14);
  fStack_48 = *param_2 - *pfVar1;
  fStack_44 = param_2[1] - *(float *)(param_1 + 0x3ab18);
  fStack_40 = param_2[2] - *(float *)(param_1 + 0x3ab1c);
  if (pfVar1 != param_2) {
    *pfVar1 = *param_2;
    *(float *)(param_1 + 0x3ab18) = param_2[1];
    *(float *)(param_1 + 0x3ab1c) = param_2[2];
  }
  afStack_38[2] = fStack_48;
  afStack_38[3] = fStack_44;
  fStack_28 = fStack_40;
  FUN_00449280(auStack_88,auStack_5c + 5);
  iStack_14 = 0;
  if (0 < *(int *)(param_1 + 0x104)) {
    iStack_18 = param_1 + 0x398;
    puVar2 = (uint *)(param_1 + 0x3bc);
    do {
      puVar3 = (uint *)(iStack_14 * 0x11c + iStack_18);
      FUN_004495a0(auStack_88,puVar3);
      uStack_3c = uStack_24;
      afStack_38[(uint)bVar4 * -2] = afStack_20[(uint)bVar4 * -2];
      afStack_38[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
           afStack_20[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
      if (puVar3 != &uStack_3c) {
        *puVar3 = uStack_3c;
        puVar3[1] = afStack_38[0];
        puVar3[2] = afStack_38[1];
      }
      FUN_004495a0(auStack_88,iStack_14 * 0x11c + iStack_18);
      auStack_5c[2] = uStack_60;
      auStack_5c[(uint)bVar4 * -2 + 3] = auStack_5c[(uint)bVar4 * -2];
      auStack_5c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
           auStack_5c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
      if (puVar2 != auStack_5c + 2) {
        *puVar2 = auStack_5c[2];
        puVar2[1] = auStack_5c[3];
        puVar2[2] = uStack_4c;
      }
      iStack_14 = iStack_14 + 1;
      puVar2 = puVar2 + 0x47;
    } while (iStack_14 < *(int *)(param_1 + 0x104));
  }
  return;
}
