// Name: core_actor.cpp_CDemonActor_handleFootstep_FUN_0040ca10
// Address: 0040ca10
// Address Range: [[0040ca10, 0040cb82]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CDemonActor_handleFootstep_FUN_0040ca10(CDemonActor *this_ptr,CVector3f *position,int surface_type,float volume)

#include "nocturne.h"

void __cdecl core_actor_cpp_CDemonActor_handleFootstep_FUN_0040ca10(CDemonActor *this_ptr,CVector3f *position,int surface_type,float volume)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  char *pcVar5;
  double dVar6;
  char local_8c [100];
  int local_28;
  int local_24;
  int local_20;
  
  local_28 = g_CDemonCameraInstance.base.position.x;
  local_24 = g_CDemonCameraInstance.base.position.y;
  local_20 = g_CDemonCameraInstance.base.position.z;
  fVar1 = position->x - (float)g_CDemonCameraInstance.base.position.x;
  fVar3 = position->y - (float)g_CDemonCameraInstance.base.position.y;
  fVar2 = position->z - (float)g_CDemonCameraInstance.base.position.z;
  if (10000.0f < fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1) {
    return;
  }
  iVar4 = core_setcolid_cpp_CDemonSet_isPointInWater_FUN_00574580(g_CDemonSetPtr,position);
  if (iVar4 != 0) {
    surface_type = 6;
  }
  iVar4 = core_gore_cpp_CGore_findBloodTypeAtPosition_FUN_004ee0f0
                    (g_CGorePtr,position,(int *)&this_ptr->blood_effect_color);
  if (iVar4 == 0) {
    if (this_ptr->blood_effect_timer < 1) {
      if (surface_type == 3) {
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
  iVar4 = this_ptr->blood_effect_timer + -0x2000;
  this_ptr->blood_effect_timer = iVar4;
  if (iVar4 < 0) {
    this_ptr->blood_effect_timer = 0;
  }
LAB_0040cb07:
  dVar6 = (double)volume;
  pcVar5 = core_ground_cpp_getGroundTypeCode_FUN_004eece0(surface_type);
  _sprintf
            (local_8c,"footstep-%s-!-%s-?.wav @ %f",this_ptr->footstep_sound_code,pcVar5,dVar6);
  core_sound_cpp_CSound_playActorSound_FUN_005b3a40(g_CSoundPtr,this_ptr,local_8c,position);
  return;
}
