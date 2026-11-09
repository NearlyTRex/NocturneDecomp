// Name: core_dracbrid.cpp_FUN_00464f60
// Address: 00464f60
// Address Range: [[00464f60, 00465200]]
// Convention: unknown
// Signature: void core_dracbrid_cpp_FUN_00464f60(CDraculaBride *param_1,SDamageInfo *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dracbrid_cpp_FUN_00464f60(CDraculaBride *param_1,SDamageInfo *param_2)

{
  byte *this_ptr;
  byte bVar1;
  int aiStackY_104c [1011];
  CDraculaBride *this_ptr_00;
  CVector3f *position;
  int iVar2;
  int flame_type;
  float fVar3;
  uint *puVar4;
  int include_hero;
  uint uStack_64;
  CVector3f CStack_58;
  CVector3f CStack_4c;
  CVector3f CStack_40;
  CVector3f CStack_34;
  uint uStack_28;
  int aiStack_24 [4];
  int iStack_14;
  
  bVar1 = 0;
  iStack_14 = 0;
  if (*(int *)(param_2 + 0x28) == 7) {
    *(float *)(param_2 + 4) = *(float *)(param_2 + 4) * (float)_DAT_005d11d4;
    core_actor_cpp_FUN_00408d70(param_1,param_2 + 0x1c);
    iVar2 = 0;
    CStack_4c._0_4_ = CStack_40._0_4_;
    *(uint *)((int)&CStack_4c + (uint)bVar1 * -8 + 4) =
         *(uint *)((int)&CStack_40 + (uint)bVar1 * -8 + 4);
    *(uint *)((int)&CStack_4c + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
         *(uint *)((int)&CStack_40 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
    do {
      iVar2 = iVar2 + 1;
      core_fire_cpp_FUN_0049d090(0x01C3DEB4,&CStack_4c,(CVector3f *)0x0,0x4000,0x4000,0,0xffff);
    } while (iVar2 < 5);
    iStack_14 = 1;
  }
  if (*(int *)(param_2 + 0x30) == 0x68) {
    iStack_14 = 1;
  }
  if (*(int *)(param_2 + 0x30) == 0x6c) {
    core_skeleton_cpp_FUN_00546a90(&param_1->field_0x2b4,0);
    puVar4 = &uStack_28;
    uStack_28 = uStack_64;
    aiStack_24[(uint)bVar1 * -2] = *(int *)(&stack0xffffffa0 + (uint)bVar1 * -8);
    aiStack_24[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1] =
         *(int *)(&stack0xffffffa4 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
    core_actor_cpp_FUN_00408d70(param_1,puVar4);
    include_hero = 0;
    fVar3 = 10.0;
    flame_type = 0;
    iVar2 = 0;
    position = &CStack_34;
    CStack_34._0_4_ = CStack_58._0_4_;
    *(uint *)((int)&CStack_34 + (uint)bVar1 * -8 + 4) =
         *(uint *)((int)&CStack_58 + (uint)bVar1 * -8 + 4);
    this_ptr_00 = param_1;
    *(uint *)((int)&CStack_34 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
         *(uint *)((int)&CStack_58 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
    core_charactr_cpp_CCharacter_igniteBone_FUN_00426e70
              ((CCharacter *)this_ptr_00,position,iVar2,flame_type,fVar3,include_hero);
  }
  core_dracbrid_cpp_FUN_00464f10(param_1,param_2);
  fVar3 = *(float *)&param_1->field_0x25a8 - *(float *)(param_2 + 4);
  this_ptr = &param_1->field_0x2b4;
  *(float *)&param_1->field_0x25a8 = fVar3;
  if (fVar3 <= 0.0) {
    *(uint *)&param_1->field_0x25a8 = 0;
    iVar2 = core_motion_cpp_FUN_005035c0(this_ptr);
    iVar2 = *(int *)(iVar2 + 0x24);
    if ((((iVar2 != 0x11) && (iVar2 != 0x10)) && (iVar2 != 10)) && (iVar2 != 7)) {
      if (iStack_14 == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)this_ptr,10,1);
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)this_ptr,7,1);
        (**(code **)(*(int *)&param_1->field_0x2b0 + 0x38))
                  (param_1,"4@bride-launch.wav" + 2);
      }
    }
    iVar2 = core_actor_cpp_FUN_0040d060(0.4);
    if (iVar2 != 0) {
      core_dracbrid_cpp_FUN_00465400(param_1,"bride-die?.wav",2.0);
    }
    goto LAB_0046508c;
  }
  iVar2 = core_motion_cpp_FUN_005035c0(this_ptr);
  iVar2 = *(int *)(iVar2 + 0x24);
  if (((iVar2 == 8) || (iVar2 == 9)) || (iVar2 == 2)) {
    iVar2 = 1;
LAB_00465146:
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)&param_1->field_0x2b4,iVar2,1);
  }
  else if (((iVar2 == 0) || (iVar2 == 0xe)) ||
          (((iVar2 == 0x13 || (((iVar2 == 0xc || (iVar2 == 0x12)) || (iVar2 == 0x14)))) ||
           (iVar2 == 0x15)))) {
    iVar2 = core_actor_cpp_FUN_0040cfc0(0,2);
    if (iVar2 == 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)&param_1->field_0x2b4,4,1);
    }
    if (iVar2 == 1) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)&param_1->field_0x2b4,5,1);
    }
    if (iVar2 == 2) {
      iVar2 = 6;
      goto LAB_00465146;
    }
  }
  iVar2 = core_actor_cpp_FUN_0040d060(0.4);
  if (iVar2 != 0) {
    core_dracbrid_cpp_FUN_00465400(param_1,"bride-hurt?.wav",2.0);
  }
LAB_0046508c:
  core_enemy_cpp_FUN_00488890(param_1,param_2);
  return;
}
