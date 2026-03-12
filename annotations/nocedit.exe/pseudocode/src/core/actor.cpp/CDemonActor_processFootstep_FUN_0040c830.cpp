// Name: core_actor.cpp_CDemonActor_processFootstep_FUN_0040c830
// Address: 0040c830
// Address Range: [[0040c830, 0040c8e7]]
// Convention: __cdecl
// Signature: int __cdecl core_actor_cpp_CDemonActor_processFootstep_FUN_0040c830(CDemonActor *this_ptr,float volume)

#include "nocturne.h"

int __cdecl core_actor_cpp_CDemonActor_processFootstep_FUN_0040c830(CDemonActor *this_ptr,float volume)

{
  CLocation *position_00;
  int iVar4;
  CLocation *position;
  float fVar1;
  float fVar2;
  float fVar3;
  
  position_00 = &this_ptr->location;
  fVar1 = (position_00->position).x - g_CDemonCameraInstance.base.position.f.x;
  fVar3 = (this_ptr->location).position.y - g_CDemonCameraInstance.base.position.f.y;
  fVar2 = (this_ptr->location).position.z - g_CDemonCameraInstance.base.position.f.z;
  if (10000.0f < fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1) {
    return 0;
  }
  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,this_ptr);
  core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_005716b0
            (g_CDemonSetPtr,&position_00->position,0.0);
  core_setcolid_cpp_CDemonSet_init_FUN_00574180(g_CDemonSetPtr);
  iVar4 = (*((this_ptr->vtable)._ub)->handleFootstep)
                    (this_ptr,&position_00->position,g_CDemonSetPtr->ground_type,volume);
  return iVar4;
}
