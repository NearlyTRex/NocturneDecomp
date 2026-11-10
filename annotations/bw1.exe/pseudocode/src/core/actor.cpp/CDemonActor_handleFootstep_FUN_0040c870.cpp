// Name: core_actor.cpp_CDemonActor_handleFootstep_FUN_0040c870
// Address: 0040c870
// Address Range: [[0040c870, 0040cb71]]
// Convention: __cdecl
// Signature: uint __cdecl core_actor_cpp_CDemonActor_handleFootstep_FUN_0040c870(CDemonActor *this_ptr,CVector3f *position,EGroundType ground_type,float volume)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl core_actor_cpp_CDemonActor_handleFootstep_FUN_0040c870(CDemonActor *this_ptr,CVector3f *position,EGroundType ground_type,float volume)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  char acStack_d0 [100];
  CVector3f CStack_6c;
  float afStack_60 [3];
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_30;
  uint uStack_18;
  float fStack_14;
  
  fStack_48 = g_CDemonCameraInstance.base.position.f.x;
  fStack_44 = g_CDemonCameraInstance.base.position.f.y;
  fStack_40 = g_CDemonCameraInstance.base.position.f.z;
  fStack_54 = g_CDemonCameraInstance.base.position.f.x;
  fStack_50 = g_CDemonCameraInstance.base.position.f.y;
  fStack_4c = g_CDemonCameraInstance.base.position.f.z;
  fVar1 = position->x - g_CDemonCameraInstance.base.position.f.x;
  fVar3 = position->y - g_CDemonCameraInstance.base.position.f.y;
  fVar2 = position->z - g_CDemonCameraInstance.base.position.f.z;
  if (_DAT_005d2e89 < fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1) {
    return 0;
  }
  iVar4 = core_setcolid_cpp_CDemonSet_isPointInWater_FUN_005595a0(g_CDemonSetPtr,position);
  if (iVar4 != 0) {
    ground_type = GROUND_TYPE_WATER;
    iVar4 = core_actor_cpp_isOfClass_FUN_0040c550(this_ptr,"CHero");
    if (iVar4 != 0) {
      core_event_cpp_CEventList_executeCommands_FUN_004a1b70(0x01C51D80,"FeetAreWet");
    }
  }
  iVar4 = core_gore_cpp_CGore_findBloodTypeAtPosition_FUN_004e6590
                    (g_CGorePtr,position,(int *)&this_ptr->blood_effect_color);
  if (iVar4 == 0) {
    if (this_ptr->blood_effect_timer < 1) {
      if (ground_type == GROUND_TYPE_DIRT) {
        core_gore_cpp_CGore_createFootstep_FUN_004e6510
                  (g_CGorePtr,position,&this_ptr->orient,3,0x4000,BLOOD_TYPE_RED);
      }
      goto LAB_0040c98f;
    }
  }
  else {
    this_ptr->blood_effect_timer = 0xffff;
  }
  core_gore_cpp_CGore_createFootstep_FUN_004e6510
            (g_CGorePtr,position,&this_ptr->orient,0xb,this_ptr->blood_effect_timer,
             this_ptr->blood_effect_color);
  iVar4 = this_ptr->blood_effect_timer + -0x2000;
  this_ptr->blood_effect_timer = iVar4;
  if (iVar4 < 0) {
    this_ptr->blood_effect_timer = 0;
  }
LAB_0040c98f:
  if (ground_type == (GROUND_TYPE_GLASS|GROUND_TYPE_CONCRETE)) {
    iVar4 = core_actor_cpp_randomChance_FUN_0040cd00(0.01);
    if (iVar4 != 0) {
      core_sound_cpp_CSound_playActorSound_FUN_0057d8a0
                (0x02C82A60,this_ptr,"twig?.wav",position);
    }
    iVar4 = core_actor_cpp_isOfClass_FUN_0040c550(this_ptr,"CShadow");
    if (iVar4 == 0) {
      iVar4 = core_actor_cpp_getRandomInt_FUN_0040cc60(1,3);
      *(int *)this_ptr->footstep_sound_code = iVar4;
    }
    else {
      this_ptr->footstep_sound_code[0] = '\x01';
      this_ptr->footstep_sound_code[1] = '\0';
      this_ptr->footstep_sound_code[2] = '\0';
      this_ptr->footstep_sound_code[3] = '\0';
    }
    iVar4 = 0;
    if (0 < *(int *)this_ptr->footstep_sound_code) {
      do {
        fStack_30 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.7853982,1.5707964);
        fStack_14 = fStack_30;
        fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.0,6.2831855);
        fVar6 = (float10)fcos((float10)fStack_30);
        fVar7 = (float10)fcos((float10)fStack_14);
        fVar8 = (float10)fsin((float10)fStack_14);
        afStack_60[1] = 0.0;
        uStack_18 = 0x41700000;
        afStack_60[0] = (float)(fVar7 * fVar6);
        afStack_60[2] = (float)(fVar8 * fVar6);
        if (&CStack_6c != position) {
          CStack_6c.x = position->x;
          CStack_6c.y = position->y;
          CStack_6c.z = position->z;
        }
        iVar4 = iVar4 + 1;
        core_fire_cpp_FUN_004b5f00(0x01C57074,position,afStack_60,0);
      } while (iVar4 < *(int *)this_ptr->footstep_sound_code);
    }
  }
  core_ground_cpp_getGroundTypeCode_FUN_004e7010(ground_type);
  _sprintf(acStack_d0,"footstep-%s-!-%s-?.wav @ %f");
  uVar5 = core_sound_cpp_CSound_playActorSound_FUN_0057d8a0
                    (0x02C82A60,this_ptr,acStack_d0,position);
  return uVar5;
}
