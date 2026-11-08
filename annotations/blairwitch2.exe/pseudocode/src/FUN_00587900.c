// Name: FUN_00587900
// Address: 00587900
// Address Range: [[00587900, 00587b57]]
// Convention: unknown
// Signature: float FUN_00587900(int param_1,undefined4 param_2,undefined4 param_3,float *param_4)

#include "nocturne.h"

float FUN_00587900(int param_1,uint param_2,uint param_3,float *param_4)

{
  float fVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  float afStackY_1024 [979];
  float fStack_b4;
  byte auStack_b0 [36];
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  uint auStack_78 [6];
  uint auStack_60 [6];
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float afStack_38 [4];
  float fStack_28;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar5 = 0;
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0x24))(param_1,param_2,param_3,0);
  puVar3 = auStack_60;
  puVar4 = auStack_78;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  fStack_14 = (float)FUN_0041af70(auStack_78);
  if ((0.0 <= fStack_14) && (fStack_14 <= 1.0)) {
    iStack_20 = *(int *)(param_1 + 0x2b390);
    iVar2 = param_1 + 0x8104;
    iStack_1c = 0;
    fStack_b4 = 2.0;
    if (0 < iStack_20) {
      iStack_18 = param_1 + 0x3f8;
      do {
        FUN_004779e0(auStack_b0,*(int *)(iVar2 + 0x18) * 0x20 + iStack_18,
                     *(int *)(iVar2 + 0x24) * 0x20 + iStack_18,
                     *(int *)(iVar2 + 0x30) * 0x20 + iStack_18);
        fVar1 = (float)FUN_00477a50(auStack_b0,param_2,param_3);
        fStack_14 = fVar1;
        if (((fVar1 < fStack_b4) && (0.0 <= fVar1)) && (fVar1 <= 1.0)) {
          fStack_3c = -fStack_8c;
          afStack_38[0] = -fStack_88;
          afStack_38[1] = -fStack_84;
          afStack_38[2] = -fStack_8c;
          afStack_38[(uint)bVar5 * -2 + 3] = afStack_38[(uint)bVar5 * -2];
          afStack_38[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
               afStack_38[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
          fStack_b4 = fVar1;
          if (&fStack_48 != afStack_38 + 2) {
            fStack_48 = afStack_38[2];
            fStack_44 = afStack_38[3];
            fStack_40 = fStack_28;
          }
        }
        iStack_1c = iStack_1c + 1;
        iVar2 = iVar2 + 0x48;
      } while (iStack_1c < iStack_20);
    }
    if ((fStack_b4 < 1.0) && (&fStack_48 != param_4)) {
      *param_4 = fStack_48;
      param_4[1] = fStack_44;
      param_4[2] = fStack_40;
    }
    return fStack_b4;
  }
  return 2.0;
}
