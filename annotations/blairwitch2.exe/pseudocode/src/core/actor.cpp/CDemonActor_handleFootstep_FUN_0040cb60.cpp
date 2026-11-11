// Name: core_actor.cpp_CDemonActor_handleFootstep_FUN_0040cb60
// Address: 0040cb60
// Address Range: [[0040cb60, 0040ce3b]]
// Convention: __cdecl
// Signature: uint __cdecl core_actor_cpp_CDemonActor_handleFootstep_FUN_0040cb60(CDemonActor *this_ptr,CVector3f *position,EGroundType ground_type,float volume)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl core_actor_cpp_CDemonActor_handleFootstep_FUN_0040cb60(CDemonActor *this_ptr,CVector3f *position,EGroundType ground_type,float volume)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  int max_value;
  char acStack_d0 [100];
  CVector3f CStack_6c;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float afStack_48 [11];
  uint uStack_1c;
  float fStack_18;
  float fStack_14;
  
  fStack_54 = g_CDemonCameraInstance.base.position.f.x;
  fStack_50 = g_CDemonCameraInstance.base.position.f.y;
  fStack_4c = g_CDemonCameraInstance.base.position.f.z;
  fStack_60 = g_CDemonCameraInstance.base.position.f.x;
  fStack_5c = g_CDemonCameraInstance.base.position.f.y;
  fStack_58 = g_CDemonCameraInstance.base.position.f.z;
  fVar1 = position->x - g_CDemonCameraInstance.base.position.f.x;
  fVar3 = position->y - g_CDemonCameraInstance.base.position.f.y;
  fVar2 = position->z - g_CDemonCameraInstance.base.position.f.z;
  if (_DAT_005caf0e < fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1) {
    return 0;
  }
  iVar4 = core_setcolid_cpp_CDemonSet_isPointInWater_FUN_00538180(g_CDemonSetPtr,position);
  if (iVar4 != 0) {
    ground_type = GROUND_TYPE_WATER;
    iVar4 = core_actor_cpp_isOfClass_FUN_0040c840(this_ptr,"CHero");
    if (iVar4 != 0) {
      core_event_cpp_CEventList_executeCommands_FUN_004894f0(0x01C38BC0,"FeetAreWet");
    }
  }
  iVar4 = core_gore_cpp_CGore_findBloodTypeAtPosition_FUN_004c9d80
                    (g_CGorePtr,position,(int *)&this_ptr->blood_effect_color);
  if ((iVar4 == 0) || (this_ptr->footstep_effects_enabled == 0)) {
    if (this_ptr->blood_effect_timer < 1) {
      if (ground_type == GROUND_TYPE_DIRT) {
        core_gore_cpp_CGore_createFootstep_FUN_004c9d00
                  (g_CGorePtr,position,&this_ptr->orient,3,0x4000,BLOOD_TYPE_RED);
      }
      goto LAB_0040cc81;
    }
  }
  else {
    this_ptr->blood_effect_timer = 0xffff;
  }
  core_gore_cpp_CGore_createFootstep_FUN_004c9d00
            (g_CGorePtr,position,&this_ptr->orient,0xb,this_ptr->blood_effect_timer,
             this_ptr->blood_effect_color);
  iVar4 = this_ptr->blood_effect_timer + -0x2000;
  this_ptr->blood_effect_timer = iVar4;
  if (iVar4 < 0) {
    this_ptr->blood_effect_timer = 0;
  }
LAB_0040cc81:
  if (ground_type == (GROUND_TYPE_GLASS|GROUND_TYPE_CONCRETE)) {
    iVar4 = core_actor_cpp_isOfClass_FUN_0040c840(this_ptr,"CShadow");
    if (iVar4 == 0) {
      max_value = 3;
      iVar4 = 1;
    }
    else {
      max_value = 9;
      iVar4 = 3;
    }
    iVar4 = core_actor_cpp_getRandomInt_FUN_0040cfc0(iVar4,max_value);
    this_ptr->footstep_particle_count = iVar4;
    iVar4 = 0;
    if (0 < this_ptr->footstep_particle_count) {
      do {
        fStack_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.7853982,1.5707964);
        fStack_14 = fStack_18;
        fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
        fVar6 = (float10)fcos((float10)fStack_18);
        fVar7 = (float10)fcos((float10)fStack_14);
        fVar8 = (float10)fsin((float10)fStack_14);
        afStack_48[1] = 0.0;
        uStack_1c = 0x41700000;
        afStack_48[0] = (float)(fVar7 * fVar6);
        afStack_48[2] = (float)(fVar8 * fVar6);
        if (&CStack_6c != position) {
          CStack_6c.x = position->x;
          CStack_6c.y = position->y;
          CStack_6c.z = position->z;
        }
        iVar4 = iVar4 + 1;
        core_fire_cpp_CFireEffect_createLeaf_FUN_0049d600
                  (0x01C3DEB4,position,afStack_48,(CKeyFramedModel *)0x0,0x41700000);
      } while (iVar4 < this_ptr->footstep_particle_count);
    }
  }
  core_ground_cpp_FUN_004ca7c0(ground_type,(double)volume);
  _sprintf(acStack_d0,"footstep%s0?");
  uVar5 = core_sound_cpp_CSound_playActorSound_FUN_0055ae50
                    (0x0264B290,this_ptr,acStack_d0,position);
  return uVar5;
}
