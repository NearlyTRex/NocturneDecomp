// Name: core_actor.cpp_CDemonActor_handleFootstep_FUN_0040ca10
// Address: 0040ca10
// Address Range: [[0040ca10, 0040cb82]]
// Convention: __cdecl
// Signature: int __cdecl core_actor_cpp_CDemonActor_handleFootstep_FUN_0040ca10(CDemonActor *this_ptr,CVector3f *position,EGroundType ground_type,float volume)

#include "nocturne.h"

int __cdecl core_actor_cpp_CDemonActor_handleFootstep_FUN_0040ca10(CDemonActor *this_ptr,CVector3f *position,EGroundType ground_type,float volume)

{
  int iVar4;
  int iVar1;
  char *pcVar5;
  uint uVar2;
  char local_8c [100];
  float local_28;
  float local_24;
  float local_20;
  float fVar3;
  float fVar2;
  float fVar1;
  double dVar6;
  
  fVar1 = position->x - g_CDemonCameraInstance.base.position.f.x;
  fVar3 = position->y - g_CDemonCameraInstance.base.position.f.y;
  fVar2 = position->z - g_CDemonCameraInstance.base.position.f.z;
  if (10000.0f < fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1) {
    return 0;
  }
  iVar4 = core_setcolid_cpp_CDemonSet_isPointInWater_FUN_00574580(g_CDemonSetPtr,position);
  if (iVar4 != 0) {
    ground_type = GROUND_TYPE_WATER;
  }
  iVar1 = core_gore_cpp_CGore_findBloodTypeAtPosition_FUN_004ee0f0
                    (g_CGorePtr,position,(int *)&this_ptr->blood_effect_color);
  if (iVar1 == 0) {
    if (this_ptr->blood_effect_timer < 1) {
      if (ground_type == GROUND_TYPE_DIRT) {
        core_gore_cpp_CGore_createFootstep_FUN_004ee070
                  (g_CGorePtr,position,&this_ptr->orient,3,0x4000,0);
      }
      goto LAB_0040cb07;
    }
  }
  else {
    this_ptr->blood_effect_timer = 0xffff;
  }
  core_gore_cpp_CGore_createFootstep_FUN_004ee070
            (g_CGorePtr,position,&this_ptr->orient,0xb,this_ptr->blood_effect_timer,
             this_ptr->blood_effect_color);
  iVar1 = this_ptr->blood_effect_timer + -0x2000;
  this_ptr->blood_effect_timer = iVar1;
  if (iVar1 < 0) {
    this_ptr->blood_effect_timer = 0;
  }
LAB_0040cb07:
  dVar6 = (double)volume;
  pcVar5 = core_ground_cpp_getGroundTypeCode_FUN_004eece0(ground_type);
  _sprintf
            (local_8c,"footstep-%s-!-%s-?.wav @ %f",this_ptr->footstep_sound_code,pcVar5,dVar6);
  uVar2 = core_sound_cpp_CSound_playActorSound_FUN_005b3a40(g_CSoundPtr,this_ptr,local_8c,position);
  return uVar2;
}
