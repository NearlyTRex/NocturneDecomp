// Name: core_elephant.cpp_FUN_00486360
// Address: 00486360
// Address Range: [[00486360, 00486482]]
// Convention: unknown
// Signature: void core_elephant_cpp_FUN_00486360(int param_1)

#include "nocturne.h"

void core_elephant_cpp_FUN_00486360(int param_1)

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
  CStack_44._0_4_ = core_actor_cpp_FUN_0040cf60(0xbec90fdb,0x3ec90fdb);
  auStack_1c[2] = CStack_44._0_4_;
  CStack_44._4_4_ = core_actor_cpp_FUN_0040cf60(0xbec90fdb,0x3ec90fdb);
  CStack_44._8_4_ = 0;
  auStack_1c[2] = CStack_44._4_4_;
  core_dirmat_cpp_FUN_00449280(aCStack_84,&CStack_44);
  core_dirmat_cpp_FUN_00449530(aCStack_84,&CStack_50);
  puVar2 = &uStack_20;
  uStack_20 = uStack_5c;
  auStack_1c[(uint)bVar1 * -2] = auStack_58[(uint)bVar1 * -2];
  auStack_1c[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1] =
       auStack_58[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1];
  core_actor_cpp_FUN_00408cf0(param_1,puVar2);
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
  model_ptr = (CKeyFramedModel *)core_dmodel_cpp_loadModel_FUN_0044fba0("shell.kfm");
  core_fire_cpp_FUN_0049e970
            (0x01C3DEB4,(CVector3f *)(param_1 + 0x20),(CVector3f *)(param_1 + 0x30),&CStack_50,
             model_ptr);
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,"sh-cock.wav");
  return;
}
