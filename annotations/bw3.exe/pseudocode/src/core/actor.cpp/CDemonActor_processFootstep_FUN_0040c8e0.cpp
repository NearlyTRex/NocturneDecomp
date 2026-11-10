// Name: core_actor.cpp_CDemonActor_processFootstep_FUN_0040c8e0
// Address: 0040c8e0
// Address Range: [[0040c8e0, 0040c98d]]
// Convention: __cdecl
// Signature: uint __cdecl core_actor_cpp_CDemonActor_processFootstep_FUN_0040c8e0(CDemonActor *this_ptr,float volume)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl core_actor_cpp_CDemonActor_processFootstep_FUN_0040c8e0(CDemonActor *this_ptr,float volume)

{
  CLocation *position;
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  
  position = &this_ptr->location;
  fVar1 = (position->position).x - g_CDemonCameraInstance.base.position.f.x;
  fVar3 = (this_ptr->location).position.y - g_CDemonCameraInstance.base.position.f.y;
  fVar2 = (this_ptr->location).position.z - g_CDemonCameraInstance.base.position.f.z;
  if (_DAT_005b5e85 < fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1) {
    return 0;
  }
  core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,this_ptr);
  core_setcolid_cpp_FUN_0053bc80(g_CDemonSetPtr,position,0);
  core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
  uVar4 = (*((this_ptr->vtable)._ub)->handleFootstep)
                    (this_ptr,&position->position,g_CDemonSetPtr->ground_type,volume);
  return uVar4;
}
