// Name: core_rifle.cpp_FUN_005407e0
// Address: 005407e0
// Address Range: [[005407e0, 0054092f]]
// Convention: unknown
// Signature: void core_rifle_cpp_FUN_005407e0(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_rifle_cpp_FUN_005407e0(CDemonActor *param_1)

{
  CKeyFramedModel *model_ptr;
  byte bVar1;
  uint auStackY_103c [1001];
  uint *puVar2;
  CMatrix3x3f aCStack_7c [40];
  CVector3f CStack_54;
  CVector3f CStack_48;
  uint uStack_3c;
  uint auStack_38 [5];
  CVector3f CStack_24;
  CVector3f CStack_18;
  uint uStack_c;
  
  bVar1 = 0;
  if (*(int *)&param_1[4].field_0x8 < 1) {
    return;
  }
  CStack_48._0_4_ = 0x40a00000;
  CStack_48._4_4_ = 0x40c00000;
  CStack_48._8_4_ = 0xc0c00000;
  CStack_24._0_4_ = core_actor_cpp_FUN_0040cc00(0xbec90fdb,0x3ec90fdb);
  uStack_c = CStack_24._0_4_;
  CStack_24._4_4_ = core_actor_cpp_FUN_0040cc00(0xbec90fdb,0x3ec90fdb);
  CStack_24._8_4_ = 0;
  uStack_c = CStack_24._4_4_;
  core_dirmat_cpp_FUN_0045f3e0(aCStack_7c,&CStack_24);
  core_dirmat_cpp_FUN_0045f690(aCStack_7c,&CStack_48);
  puVar2 = auStack_38 + 2;
  auStack_38[2] = uStack_3c;
  auStack_38[(uint)bVar1 * -2 + 3] = auStack_38[(uint)bVar1 * -2];
  auStack_38[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 4] =
       auStack_38[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1];
  core_actor_cpp_FUN_00408ac0(param_1,puVar2);
  CStack_18._0_4_ = CStack_54._0_4_;
  *(uint *)((int)&CStack_18 + (uint)bVar1 * -8 + 4) =
       *(uint *)((int)&CStack_54 + (uint)bVar1 * -8 + 4);
  *(uint *)((int)&CStack_18 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       *(uint *)((int)&CStack_54 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
  if (&CStack_48 != &CStack_18) {
    CStack_48._0_4_ = CStack_18._0_4_;
    CStack_48._4_4_ = CStack_18._4_4_;
    CStack_48._8_4_ = CStack_18._8_4_;
  }
  model_ptr = (CKeyFramedModel *)
              core_dmodel_cpp_loadModel_FUN_00468780("$@rifbullet.kfm" + 2);
  core_fire_cpp_FUN_004b7270
            (0x01C57074,(CVector3f *)&param_1->field_0x20,(CVector3f *)&param_1->field_0x30,
             &CStack_48,model_ptr);
  core_sound_cpp_CSound_playActorSound_FUN_0057d8a0
            (0x02C82A60,param_1,"shotgun-cock.wav @ .3",
             (CVector3f *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x20));
  return;
}
