// Name: FUN_00422ab0
// Address: 00422ab0
// Address Range: [[00422ab0, 00422c24]]
// Convention: unknown
// Signature: void FUN_00422ab0(int param_1,undefined4 param_2,float *param_3)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00422ab0(int param_1,uint param_2,float *param_3)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  float afStackY_1058 [1000];
  float *pfVar5;
  uint auStack_a0 [6];
  uint local_88 [6];
  float local_70;
  float local_6c [2];
  byte auStack_64 [12];
  float local_58;
  float afStack_54 [4];
  float local_44;
  float local_40;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  bVar4 = 0;
  FUN_00408bb0(param_1,param_2);
  afStack_54[2] = local_58;
  afStack_54[(uint)bVar4 * -2 + 3] = afStack_54[(uint)bVar4 * -2];
  pfVar5 = param_3;
  afStack_54[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
       afStack_54[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  FUN_00408b00(param_1,pfVar5);
  local_70 = local_40;
  *(float *)((int)local_6c + (uint)bVar4 * 0xfffffff8) = afStack_54[(uint)bVar4 * -2 + 6];
  *(float *)(auStack_64 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + -4) =
       afStack_54[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
  if (local_6c[1] * local_44 + local_70 * afStack_54[2] + local_6c[0] * afStack_54[3] < 0.0) {
    (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1);
    puVar2 = local_88;
    puVar3 = auStack_a0;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    }
    fStack_18 = (float)FUN_00420ee0(auStack_a0,afStack_54 + 2,&local_70,auStack_64);
    if ((0.0 <= fStack_18) && (fStack_18 < 1.0)) {
      fStack_1c = (float)_DAT_005d4d60 - fStack_18;
      fStack_28 = *param_3 * fStack_1c;
      fStack_24 = param_3[1] * fStack_1c;
      fStack_20 = param_3[2] * fStack_1c;
      fStack_34 = *param_3 * fStack_1c;
      afStack_54[(uint)bVar4 * -2 + 9] = afStack_54[(uint)bVar4 * -2 + 0xc];
      afStack_54[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10] =
           afStack_54[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd];
      *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0x20) + fStack_34;
      *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) + fStack_30;
      *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + fStack_2c;
      FUN_00421e80(param_1);
      FUN_00422d10(param_1);
      return;
    }
  }
  return;
}
