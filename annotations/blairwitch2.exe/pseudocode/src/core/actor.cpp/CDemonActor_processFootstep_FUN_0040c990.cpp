// Name: core_actor.cpp_CDemonActor_processFootstep_FUN_0040c990
// Address: 0040c990
// Address Range: [[0040c990, 0040ca3d]]
// Convention: __cdecl
// Signature: uint __cdecl core_actor_cpp_CDemonActor_processFootstep_FUN_0040c990(CDemonActor *this_ptr,float volume)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl core_actor_cpp_CDemonActor_processFootstep_FUN_0040c990(CDemonActor *this_ptr,float volume)

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
  if (_DAT_005caed6 < fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1) {
    return 0;
  }
  core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,this_ptr);
  core_setcolid_cpp_FUN_00534ea0(g_CDemonSetPtr,position,0);
  core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
  uVar4 = (*((this_ptr->vtable)._ub)->handleFootstep)
                    (this_ptr,&position->position,g_CDemonSetPtr->ground_type,volume);
  return uVar4;
}
