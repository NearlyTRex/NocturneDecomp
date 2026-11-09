// Name: core_weapon.cpp_FUN_0057ba10
// Address: 0057ba10
// Address Range: [[0057ba10, 0057bb5e]]
// Convention: unknown
// Signature: void core_weapon_cpp_FUN_0057ba10(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_weapon_cpp_FUN_0057ba10(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  float afStackY_104c [999];
  float local_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  CVector3f CStack_58;
  CVector3f CStack_4c;
  float fStack_40;
  float afStack_3c [2];
  CVector3f CStack_34;
  float fStack_28;
  float afStack_24 [4];
  float fStack_14;
  float afStack_10 [3];
  
  bVar4 = 0;
  if ((*(int *)(param_1 + 0x2d0) != 0) && (*(byte **)(param_1 + 0x68) == &DAT_0078a123)) {
    (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1);
    puVar2 = (uint *)&stack0xffffff6c;
    puVar3 = &stack0xffffff84;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    }
    fStack_40 = local_7c + fStack_70;
    afStack_3c[0] = fStack_78 + fStack_6c;
    afStack_3c[1] = fStack_74 + fStack_68;
    afStack_24[2] = local_7c + fStack_70;
    afStack_24[(uint)bVar4 * -2 + 3] = afStack_3c[(uint)bVar4 * -2];
    afStack_24[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
         afStack_3c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    fStack_28 = afStack_24[2] * _DAT_005d78ef;
    afStack_24[0] = afStack_24[3] * _DAT_005d78ef;
    afStack_24[1] = fStack_14 * _DAT_005d78ef;
    afStack_10[0] = afStack_24[2] * _DAT_005d78ef;
    afStack_24[(uint)bVar4 * -2 + 6] = afStack_24[(uint)bVar4 * -2];
    afStack_24[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
         afStack_24[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    core_actor_cpp_FUN_00408b80(param_1,afStack_24 + 5);
    CStack_34._0_4_ = CStack_4c._0_4_;
    *(uint *)((int)&CStack_34 + (uint)bVar4 * -8 + 4) =
         *(uint *)((int)&CStack_4c + (uint)bVar4 * -8 + 4);
    *(uint *)((int)&CStack_34 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
         *(uint *)((int)&CStack_4c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    fStack_64 = fStack_70 - local_7c;
    fStack_60 = fStack_6c - fStack_78;
    fStack_5c = fStack_68 - fStack_74;
    CStack_58._0_4_ = fStack_70 - local_7c;
    *(uint *)((int)&CStack_58 + (uint)bVar4 * -8 + 4) =
         *(uint *)((int)&stack0xffffffa0 + (uint)bVar4 * -8);
    *(uint *)((int)&CStack_58 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
         *(uint *)((int)&stack0xffffffa4 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
    core_box_cpp_CBox_setupCorners_FUN_0041ae00
              ((CBox *)(param_1 + 0x308),&CStack_34,(CVector3f *)(param_1 + 0x30),&CStack_58,
               *(float *)(param_1 + 0x564));
    return;
  }
  return;
}
