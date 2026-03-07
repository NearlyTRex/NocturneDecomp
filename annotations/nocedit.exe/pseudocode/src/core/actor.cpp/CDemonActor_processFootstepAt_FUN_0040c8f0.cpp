// Name: core_actor.cpp_CDemonActor_processFootstepAt_FUN_0040c8f0
// Address: 0040c8f0
// Address Range: [[0040c8f0, 0040ca08]]
// Convention: __cdecl
// Signature: int __cdecl core_actor_cpp_CDemonActor_processFootstepAt_FUN_0040c8f0(CDemonActor *this_ptr,CVector3f *location,float volume)

#include "nocturne.h"

int __cdecl core_actor_cpp_CDemonActor_processFootstepAt_FUN_0040c8f0(CDemonActor *this_ptr,CVector3f *location,float volume)

{
  int iVar1;
  CVector3f local_34;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_8;
  
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(this_ptr,&local_34,location);
  local_28 = g_CDemonCameraInstance.base.position.f.x;
  local_24 = g_CDemonCameraInstance.base.position.f.y;
  local_20 = g_CDemonCameraInstance.base.position.f.z;
  if (10000.0f <
      (local_34.z - g_CDemonCameraInstance.base.position.f.z) *
      (local_34.z - g_CDemonCameraInstance.base.position.f.z) +
      (local_34.y - g_CDemonCameraInstance.base.position.f.y) *
      (local_34.y - g_CDemonCameraInstance.base.position.f.y) +
      (local_34.x - g_CDemonCameraInstance.base.position.f.x) *
      (local_34.x - g_CDemonCameraInstance.base.position.f.x)) {
    return 0;
  }
  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,this_ptr);
  local_1c = core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_005716b0
                       (g_CDemonSetPtr,&local_34,0.0);
  iVar1 = g_CDemonSetPtr->ground_type;
  local_8 = local_1c;
  local_18 = core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_005716b0
                       (g_CDemonSetPtr,&(this_ptr->location).position,0.0);
  local_8 = local_18;
  core_setcolid_cpp_CDemonSet_init_FUN_00574180(g_CDemonSetPtr);
  if (local_1c < local_18 + (float)-1) {
    iVar1 = g_CDemonSetPtr->ground_type;
  }
  iVar1 = (*((this_ptr->vtable)._ub)->handleFootstep)(this_ptr,&local_34,iVar1,volume);
  return iVar1;
}
