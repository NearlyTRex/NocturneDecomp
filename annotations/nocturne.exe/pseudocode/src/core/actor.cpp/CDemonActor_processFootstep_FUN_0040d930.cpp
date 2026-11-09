// Name: core_actor.cpp_CDemonActor_processFootstep_FUN_0040d930
// Address: 0040d930
// Address Range: [[0040d930, 0040d9e7]]
// Convention: __cdecl
// Signature: uint __cdecl core_actor_cpp_CDemonActor_processFootstep_FUN_0040d930(CDemonActor *this_ptr,float volume)

#include "nocturne.h"

uint __cdecl core_actor_cpp_CDemonActor_processFootstep_FUN_0040d930(CDemonActor *this_ptr,float volume)

{
  CLocation *position;
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  
  position = &this_ptr->location;
  fVar1 = (position->position).x - g_CDemonCameraInstance.position.x;
  fVar3 = (this_ptr->location).position.y - g_CDemonCameraInstance.position.y;
  fVar2 = (this_ptr->location).position.z - g_CDemonCameraInstance.position.z;
  if (10000.0f < fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1) {
    return 0;
  }
  core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(g_CDemonSetPtr,this_ptr);
  core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_0050ec80
            (g_CDemonSetPtr,&position->position,0.0);
  core_setcolid_cpp_CDemonSet_init_FUN_00511750(g_CDemonSetPtr);
  uVar4 = (*((this_ptr->vtable)._ub)->handleFootstep)
                    (this_ptr,&position->position,g_CDemonSetPtr->ground_type,volume);
  return uVar4;
}
