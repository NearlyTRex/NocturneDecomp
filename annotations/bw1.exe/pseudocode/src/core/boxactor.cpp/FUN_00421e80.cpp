// Name: core_boxactor.cpp_FUN_00421e80
// Address: 00421e80
// Address Range: [[00421e80, 00421ff7]]
// Convention: unknown
// Signature: void core_boxactor_cpp_FUN_00421e80(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_boxactor_cpp_FUN_00421e80(int param_1)

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
  float afStack_3c [4];
  float fStack_2c;
  float afStack_28 [3];
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
      afStack_3c[(uint)bVar4 * -2 + 9] = afStack_3c[(uint)bVar4 * -2 + 0xc];
      afStack_3c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10] =
           afStack_3c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd];
      afStack_3c[2] = fStack_1c * _DAT_005d4c04;
      afStack_3c[3] = fStack_18 * _DAT_005d4c04;
      fStack_2c = fStack_14 * _DAT_005d4c04;
      afStack_28[0] = fStack_1c * _DAT_005d4c04;
      afStack_3c[(uint)bVar4 * -2 + 6] = afStack_3c[(uint)bVar4 * -2 + 3];
      afStack_3c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
           afStack_3c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
      core_actor_cpp_FUN_00408b40(param_1,afStack_3c + 5);
      CStack_4c.x = fStack_40;
      *(float *)((int)&CStack_4c + (uint)bVar4 * -8 + 4) = afStack_3c[(uint)bVar4 * -2];
      *(float *)((int)&CStack_4c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
           afStack_3c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
      fStack_64 = fStack_70 - local_7c;
      fStack_60 = fStack_6c - fStack_78;
      fStack_5c = fStack_68 - fStack_74;
      CStack_58.x = fStack_70 - local_7c;
      *(uint *)((int)&CStack_58 + (uint)bVar4 * -8 + 4) =
           *(uint *)((int)&stack0xffffffa0 + (uint)bVar4 * -8);
      *(uint *)((int)&CStack_58 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
           *(uint *)((int)&stack0xffffffa4 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
      core_box_cpp_CBox_setupCorners_FUN_0041dac0
                ((CBox *)(param_1 + 0x394),&CStack_4c,(CVector3f *)(param_1 + 0x30),&CStack_58,
                 *(float *)(param_1 + 0x390));
      return;
    }
    *(uint *)(param_1 + 0x5e8) = 0xffffffff;
  }
  return;
}
