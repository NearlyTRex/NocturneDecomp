// Name: core_bride.cpp_FUN_0041ead0
// Address: 0041ead0
// Address Range: [[0041ead0, 0041ed11]]
// Convention: unknown
// Signature: void core_bride_cpp_FUN_0041ead0(CBride *param_1,SDamageInfo *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_bride_cpp_FUN_0041ead0(CBride *param_1,SDamageInfo *param_2)

{
  byte *this_ptr;
  uint uVar1;
  byte bVar2;
  uint auStackY_1048 [1011];
  CBride *this_ptr_00;
  CVector3f *position;
  int iVar3;
  int iVar4;
  float flame_scale;
  uint *puVar5;
  int include_hero;
  CVector3f CStack_60;
  CVector3f CStack_54;
  uint uStack_48;
  uint auStack_44 [2];
  CVector3f CStack_3c;
  uint uStack_30;
  uint auStack_2c [2];
  CVector3f CStack_24;
  
  bVar2 = 0;
  sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)&param_1->field_0x10b24);
  if (*(int *)(param_2 + 0x28) == 7) {
    *(float *)(param_2 + 4) = *(float *)(param_2 + 4) * (float)_DAT_005cc8f9;
    core_actor_cpp_FUN_00408d70(param_1,param_2 + 0x1c);
    iVar3 = 0;
    CStack_24._0_4_ = CStack_60._0_4_;
    *(uint *)((int)&CStack_24 + (uint)bVar2 * -8 + 4) =
         *(uint *)((int)&CStack_60 + (uint)bVar2 * -8 + 4);
    *(uint *)((int)&CStack_24 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
         *(uint *)((int)&CStack_60 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
    do {
      iVar3 = iVar3 + 1;
      core_fire_cpp_FUN_0049d090(0x01C3DEB4,&CStack_24,(CVector3f *)0x0,0x4000,0x4000,0,0xffff);
    } while (iVar3 < 5);
  }
  if (*(int *)(param_2 + 0x30) == 0x6c) {
    core_skeleton_cpp_FUN_00546a90(&param_1->field_0x2b4,0);
    puVar5 = &uStack_48;
    uStack_48 = uStack_30;
    auStack_44[(uint)bVar2 * -2] = auStack_2c[(uint)bVar2 * -2];
    auStack_44[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
         auStack_2c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
    core_actor_cpp_FUN_00408d70(param_1,puVar5);
    include_hero = 0;
    flame_scale = 10.0;
    iVar4 = 0;
    iVar3 = 0;
    position = &CStack_54;
    CStack_54._0_4_ = CStack_3c._0_4_;
    *(uint *)((int)&CStack_54 + (uint)bVar2 * -8 + 4) =
         *(uint *)((int)&CStack_3c + (uint)bVar2 * -8 + 4);
    this_ptr_00 = param_1;
    *(uint *)((int)&CStack_54 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
         *(uint *)((int)&CStack_3c + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
    core_charactr_cpp_CCharacter_igniteBone_FUN_00426e70
              ((CCharacter *)this_ptr_00,position,iVar3,iVar4,flame_scale,include_hero);
  }
  core_bride_cpp_CBride_processDismemberment_FUN_0041e8a0(param_1,param_2);
  *(float *)&param_1->field_0x25a8 = *(float *)&param_1->field_0x25a8 - *(float *)(param_2 + 4);
  if (*(int *)(&param_1->field_0x23f4 + *(int *)&param_1->field_0x10b18 * 4) == 0) {
    *(uint *)&param_1->field_0x25a8 = 0;
  }
  this_ptr = &param_1->field_0x2b4;
  if (0.0 < *(float *)&param_1->field_0x25a8) {
    iVar4 = 1;
    iVar3 = core_actor_cpp_FUN_0040d060(0.5);
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)this_ptr,(iVar3 == 0) + 7,iVar4);
    iVar3 = sound_sndmain_cpp_FUN_00550b70(*(uint *)&param_1->field_0x10b20);
    if (iVar3 == 0) {
      uVar1 = (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))(param_1,"ub-hurt?.wav");
      *(uint *)&param_1->field_0x10b20 = uVar1;
    }
  }
  else {
    *(uint *)&param_1->field_0x25a8 = 0;
    iVar3 = core_motion_cpp_FUN_005035c0(this_ptr);
    if ((*(int *)(iVar3 + 0x24) != 0xe) && (*(int *)(iVar3 + 0x24) != 0xd)) {
      iVar4 = 1;
      iVar3 = core_actor_cpp_FUN_0040d060(0.5);
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)this_ptr,(iVar3 == 0) + 0xb,iVar4);
      sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)&param_1->field_0x10b20);
      uVar1 = (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))(param_1,"ub-die?.wav");
      *(uint *)&param_1->field_0x10b20 = uVar1;
    }
  }
  core_enemy_cpp_FUN_00488890(param_1,param_2);
  return;
}
