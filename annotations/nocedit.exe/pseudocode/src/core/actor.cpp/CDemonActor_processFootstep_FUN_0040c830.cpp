// Name: core_actor.cpp_CDemonActor_processFootstep_FUN_0040c830
// Address: 0040c830
// Address Range: [[0040c830, 0040c8e7]]
// Convention: __cdecl
// Signature: int __cdecl core_actor_cpp_CDemonActor_processFootstep_FUN_0040c830(CDemonActor *this_ptr,float volume)

#include "nocturne.h"

int __cdecl
core_actor_cpp_CDemonActor_processFootstep_FUN_0040c830(CDemonActor *this_ptr,float volume)

{
  CLocation *position;
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  
  position = &this_ptr->location;
  fVar1 = (position->position).x - (float)g_CDemonCameraInstance.base.position.x;
  fVar3 = (this_ptr->location).position.y - (float)g_CDemonCameraInstance.base.position.y;
  fVar2 = (this_ptr->location).position.z - (float)g_CDemonCameraInstance.base.position.z;
  if (10000.0f < fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1) {
    return 0;
  }
  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,this_ptr);
  core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_005716b0
            (g_CDemonSetPtr,&position->position,0.0);
  core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
  iVar4 = (*((this_ptr->vtable)._ub)->handleFootstep)
                    (this_ptr,&position->position,g_CDemonSetPtr->ground_type,volume);
  return iVar4;
}
