// Name: core_batcreat.cpp_FUN_00412760
// Address: 00412760
// Address Range: [[00412760, 0041298c]]
// Convention: unknown
// Signature: void core_batcreat_cpp_FUN_00412760(CBatCreature *param_1,SDamageInfo *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_batcreat_cpp_FUN_00412760(CBatCreature *param_1,SDamageInfo *param_2)

{
  byte *this_ptr;
  uint uVar1;
  byte bVar2;
  uint auStackY_1048 [1011];
  CBatCreature *this_ptr_00;
  CVector3f *position;
  int iVar3;
  int flame_type;
  float fVar4;
  uint *puVar5;
  int include_hero;
  CVector3f CStack_60;
  uint uStack_54;
  uint auStack_50 [2];
  CVector3f CStack_48;
  CVector3f CStack_3c;
  CVector3f CStack_30;
  uint uStack_24;
  uint auStack_20 [4];
  
  bVar2 = 0;
  sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)&param_1->field_0x10b38);
  sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)&param_1->field_0x10b30);
  if (*(int *)(param_2 + 0x28) == 7) {
    *(float *)(param_2 + 4) = *(float *)(param_2 + 4) * (float)_DAT_005cb956;
    core_actor_cpp_FUN_00408d70(param_1,param_2 + 0x1c);
    iVar3 = 0;
    CStack_60._0_4_ = CStack_3c._0_4_;
    *(uint *)((int)&CStack_60 + (uint)bVar2 * -8 + 4) =
         *(uint *)((int)&CStack_3c + (uint)bVar2 * -8 + 4);
    *(uint *)((int)&CStack_60 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
         *(uint *)((int)&CStack_3c + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
    do {
      iVar3 = iVar3 + 1;
      core_fire_cpp_FUN_0049d090(0x01C3DEB4,&CStack_60,(CVector3f *)0x0,0x4000,0x4000,0,0xffff);
    } while (iVar3 < 5);
  }
  if (*(int *)(param_2 + 0x30) == 0x6c) {
    core_skeleton_cpp_FUN_00546a90(&param_1->field_0x2b4,0);
    puVar5 = &uStack_24;
    uStack_24 = uStack_54;
    auStack_20[(uint)bVar2 * -2] = auStack_50[(uint)bVar2 * -2];
    auStack_20[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
         auStack_50[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
    core_actor_cpp_FUN_00408d70(param_1,puVar5);
    include_hero = 0;
    fVar4 = 10.0;
    flame_type = 0;
    iVar3 = 0;
    position = &CStack_30;
    CStack_30._0_4_ = CStack_48._0_4_;
    *(uint *)((int)&CStack_30 + (uint)bVar2 * -8 + 4) =
         *(uint *)((int)&CStack_48 + (uint)bVar2 * -8 + 4);
    this_ptr_00 = param_1;
    *(uint *)((int)&CStack_30 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
         *(uint *)((int)&CStack_48 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
    core_charactr_cpp_CCharacter_igniteBone_FUN_00426e70
              ((CCharacter *)this_ptr_00,position,iVar3,flame_type,fVar4,include_hero);
  }
  core_batcreat_cpp_FUN_00412500(param_1,param_2);
  fVar4 = *(float *)&param_1->field_0x25a8 - *(float *)(param_2 + 4);
  this_ptr = &param_1->field_0x2b4;
  *(float *)&param_1->field_0x25a8 = fVar4;
  if (fVar4 <= 0.0) {
    *(uint *)&param_1->field_0x25a8 = 0;
    iVar3 = core_motion_cpp_FUN_005035c0(this_ptr);
    if ((*(int *)(iVar3 + 0x24) != 7) && (*(int *)(iVar3 + 0x24) != 8)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)this_ptr,7,1);
      sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)&param_1->field_0x10b34);
      uVar1 = (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))
                        (param_1,"@batman-die.wav" + 1);
      *(uint *)&param_1->field_0x10b34 = uVar1;
    }
  }
  else {
    iVar3 = core_actor_cpp_FUN_0040cfc0(0,2);
    if (iVar3 == 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)this_ptr,4,1);
    }
    if (iVar3 == 1) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)&param_1->field_0x2b4,5,1);
    }
    if (iVar3 == 2) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)&param_1->field_0x2b4,6,1);
    }
    iVar3 = sound_sndmain_cpp_FUN_00550b70(*(uint *)&param_1->field_0x10b34);
    if (iVar3 == 0) {
      uVar1 = (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))
                        (param_1,"batman-hurt?.wav");
      *(uint *)&param_1->field_0x10b34 = uVar1;
    }
  }
  core_enemy_cpp_FUN_00488890(param_1,param_2);
  return;
}
