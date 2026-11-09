// Name: core_boxactor.cpp_FUN_0041f1e0
// Address: 0041f1e0
// Address Range: [[0041f1e0, 0041f357]]
// Convention: unknown
// Signature: void core_boxactor_cpp_FUN_0041f1e0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_boxactor_cpp_FUN_0041f1e0(int param_1)

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
  CVector3f CStack_40;
  float fStack_34;
  float afStack_30 [5];
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  bVar4 = 0;
  *(uint *)(param_1 + 0x5e8) = 0;
  if ((0.0 < *(float *)(param_1 + 0x390)) && (*(byte **)(param_1 + 0x68) == &DAT_0078a123)) {
    if (*(int *)(param_1 + 0x2d0) != 0) {
      (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1);
      puVar2 = (uint *)&stack0xffffff6c;
      puVar3 = &stack0xffffff84;
      for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
        puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
      }
      fStack_10 = local_7c + fStack_70;
      fStack_c = fStack_78 + fStack_6c;
      fStack_8 = fStack_74 + fStack_68;
      fStack_1c = local_7c + fStack_70;
      afStack_30[(uint)bVar4 * -2 + 6] = afStack_30[(uint)bVar4 * -2 + 9];
      afStack_30[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
           afStack_30[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10];
      fStack_34 = fStack_1c * _DAT_005b74ed;
      afStack_30[0] = fStack_18 * _DAT_005b74ed;
      afStack_30[1] = fStack_14 * _DAT_005b74ed;
      afStack_30[2] = fStack_1c * _DAT_005b74ed;
      afStack_30[(uint)bVar4 * -2 + 3] = afStack_30[(uint)bVar4 * -2];
      afStack_30[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
           afStack_30[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
      core_actor_cpp_FUN_00408b80(param_1,afStack_30 + 2);
      CStack_4c._0_4_ = CStack_40._0_4_;
      *(uint *)((int)&CStack_4c + (uint)bVar4 * -8 + 4) =
           *(uint *)((int)&CStack_40 + (uint)bVar4 * -8 + 4);
      *(uint *)((int)&CStack_4c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
           *(uint *)((int)&CStack_40 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
      fStack_64 = fStack_70 - local_7c;
      fStack_60 = fStack_6c - fStack_78;
      fStack_5c = fStack_68 - fStack_74;
      CStack_58._0_4_ = fStack_70 - local_7c;
      *(uint *)((int)&CStack_58 + (uint)bVar4 * -8 + 4) =
           *(uint *)((int)&stack0xffffffa0 + (uint)bVar4 * -8);
      *(uint *)((int)&CStack_58 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
           *(uint *)((int)&stack0xffffffa4 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
      core_box_cpp_CBox_setupCorners_FUN_0041ae00
                ((CBox *)(param_1 + 0x394),&CStack_4c,(CVector3f *)(param_1 + 0x30),&CStack_58,
                 *(float *)(param_1 + 0x390));
      return;
    }
    *(uint *)(param_1 + 0x5e8) = 0xffffffff;
  }
  return;
}
