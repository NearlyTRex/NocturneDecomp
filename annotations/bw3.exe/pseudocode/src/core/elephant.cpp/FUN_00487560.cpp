// Name: core_elephant.cpp_FUN_00487560
// Address: 00487560
// Address Range: [[00487560, 00487682]]
// Convention: unknown
// Signature: void core_elephant_cpp_FUN_00487560(int param_1)

#include "nocturne.h"

void core_elephant_cpp_FUN_00487560(int param_1)

{
  CKeyFramedModel *model_ptr;
  byte bVar1;
  uint auStackY_1044 [1003];
  uint *puVar2;
  CMatrix3x3f aCStack_84 [40];
  uint uStack_5c;
  uint auStack_58 [2];
  CVector3f CStack_50;
  CVector3f CStack_44;
  CVector3f CStack_38;
  CVector3f CStack_2c;
  uint uStack_20;
  uint auStack_1c [3];
  
  bVar1 = 0;
  CStack_50._0_4_ = 0x40a00000;
  CStack_50._4_4_ = 0x40c00000;
  CStack_50._8_4_ = 0xc0c00000;
  CStack_44._0_4_ = core_actor_cpp_FUN_0040ce40(0xbec90fdb,0x3ec90fdb);
  auStack_1c[2] = CStack_44._0_4_;
  CStack_44._4_4_ = core_actor_cpp_FUN_0040ce40(0xbec90fdb,0x3ec90fdb);
  CStack_44._8_4_ = 0;
  auStack_1c[2] = CStack_44._4_4_;
  core_dirmat_cpp_FUN_0045b550(aCStack_84,&CStack_44);
  core_dirmat_cpp_FUN_0045b800(aCStack_84,&CStack_50);
  puVar2 = &uStack_20;
  uStack_20 = uStack_5c;
  auStack_1c[(uint)bVar1 * -2] = auStack_58[(uint)bVar1 * -2];
  auStack_1c[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1] =
       auStack_58[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1];
  core_actor_cpp_FUN_00408b00(param_1,puVar2);
  CStack_2c._0_4_ = CStack_38._0_4_;
  *(uint *)((int)&CStack_2c + (uint)bVar1 * -8 + 4) =
       *(uint *)((int)&CStack_38 + (uint)bVar1 * -8 + 4);
  *(uint *)((int)&CStack_2c + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       *(uint *)((int)&CStack_38 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
  if (&CStack_50 != &CStack_2c) {
    CStack_50._0_4_ = CStack_2c._0_4_;
    CStack_50._4_4_ = CStack_2c._4_4_;
    CStack_50._8_4_ = CStack_2c._8_4_;
  }
  model_ptr = (CKeyFramedModel *)core_dmodel_cpp_loadModel_FUN_00462420("shell.kfm");
  core_fire_cpp_CFireEffect_createShell_FUN_004a3e70
            (0x01C73654,(CVector3f *)(param_1 + 0x20),(CVector3f *)(param_1 + 0x30),&CStack_50,
             model_ptr);
  (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"sh-cock.wav");
  return;
}
