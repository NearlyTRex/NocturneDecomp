// Name: core_actor.cpp_CDemonActor_processFootstepAt_FUN_0040d9f0
// Address: 0040d9f0
// Address Range: [[0040d9f0, 0040db08]]
// Convention: __cdecl
// Signature: int __cdecl core_actor_cpp_CDemonActor_processFootstepAt_FUN_0040d9f0(CDemonActor *this_ptr,CVector3f *location,float volume)

#include "nocturne.h"

int __cdecl core_actor_cpp_CDemonActor_processFootstepAt_FUN_0040d9f0(CDemonActor *this_ptr,CVector3f *location,float volume)

{
  uint uVar1;
  EGroundType ground_type;
  CVector3f local_34;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_8;
  
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(this_ptr,&local_34,location);
  local_28 = g_CDemonCamera_01fb8508.position.x;
  local_24 = g_CDemonCamera_01fb8508.position.y;
  local_20 = g_CDemonCamera_01fb8508.position.z;
  if (10000.0f <
      (local_34.z - g_CDemonCamera_01fb8508.position.z) *
      (local_34.z - g_CDemonCamera_01fb8508.position.z) +
      (local_34.y - g_CDemonCamera_01fb8508.position.y) *
      (local_34.y - g_CDemonCamera_01fb8508.position.y) +
      (local_34.x - g_CDemonCamera_01fb8508.position.x) *
      (local_34.x - g_CDemonCamera_01fb8508.position.x)) {
    return 0;
  }
  core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(g_CDemonSet_PTR_005be368,this_ptr);
  local_1c = core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_0050ec80
                       (g_CDemonSet_PTR_005be368,&local_34,0.0);
  ground_type = g_CDemonSet_PTR_005be368->ground_type;
  local_8 = local_1c;
  local_18 = core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_0050ec80
                       (g_CDemonSet_PTR_005be368,&(this_ptr->location).position,0.0);
  local_8 = local_18;
  core_setcolid_cpp_CDemonSet_init_FUN_00511750(g_CDemonSet_PTR_005be368);
  if (local_1c < local_18 + (float)-1) {
    ground_type = g_CDemonSet_PTR_005be368->ground_type;
  }
  uVar1 = (*((this_ptr->vtable)._ub)->handleFootstep)(this_ptr,&local_34,ground_type,volume);
  return uVar1;
}
