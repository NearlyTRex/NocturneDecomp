// Name: core_shotgun.cpp_FUN_00561f80
// Address: 00561f80
// Address Range: [[00561f80, 005620bc]]
// Convention: unknown
// Signature: void core_shotgun_cpp_FUN_00561f80(int param_1)

#include "nocturne.h"

void core_shotgun_cpp_FUN_00561f80(int param_1)

{
  CKeyFramedModel *model_ptr;
  byte bVar1;
  uint auStackY_103c [1001];
  uint *puVar2;
  CMatrix3x3f aCStack_7c [40];
  uint uStack_54;
  uint auStack_50 [2];
  CVector3f CStack_48;
  CVector3f CStack_3c;
  CVector3f CStack_30;
  CVector3f CStack_24;
  uint uStack_18;
  uint auStack_14 [3];
  
  bVar1 = 0;
  if (*(int *)(param_1 + 0x568) < 1) {
    return;
  }
  CStack_48._0_4_ = 0x40a00000;
  CStack_48._4_4_ = 0x40c00000;
  CStack_48._8_4_ = 0xc0c00000;
  CStack_3c._0_4_ = core_actor_cpp_FUN_0040cc00(0xbec90fdb,0x3ec90fdb);
  auStack_14[2] = CStack_3c._0_4_;
  CStack_3c._4_4_ = core_actor_cpp_FUN_0040cc00(0xbec90fdb,0x3ec90fdb);
  CStack_3c._8_4_ = 0;
  auStack_14[2] = CStack_3c._4_4_;
  core_dirmat_cpp_FUN_0045f3e0(aCStack_7c,&CStack_3c);
  core_dirmat_cpp_FUN_0045f690(aCStack_7c,&CStack_48);
  puVar2 = &uStack_18;
  uStack_18 = uStack_54;
  auStack_14[(uint)bVar1 * -2] = auStack_50[(uint)bVar1 * -2];
  auStack_14[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1] =
       auStack_50[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1];
  core_actor_cpp_FUN_00408ac0(param_1,puVar2);
  CStack_24._0_4_ = CStack_30._0_4_;
  *(uint *)((int)&CStack_24 + (uint)bVar1 * -8 + 4) =
       *(uint *)((int)&CStack_30 + (uint)bVar1 * -8 + 4);
  *(uint *)((int)&CStack_24 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       *(uint *)((int)&CStack_30 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
  if (&CStack_48 != &CStack_24) {
    CStack_48._0_4_ = CStack_24._0_4_;
    CStack_48._4_4_ = CStack_24._4_4_;
    CStack_48._8_4_ = CStack_24._8_4_;
  }
  model_ptr = (CKeyFramedModel *)core_dmodel_cpp_loadModel_FUN_00468780("shell.kfm");
  core_fire_cpp_FUN_004b7270
            (0x01C57074,(CVector3f *)(param_1 + 0x20),(CVector3f *)(param_1 + 0x30),&CStack_48,
             model_ptr);
  (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"shotgun-cock.wav");
  return;
}
