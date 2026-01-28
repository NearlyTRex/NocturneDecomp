// Name: core_tentacle.cpp_CTentacle_serialize_FUN_005db880
// Address: 005db880
// Address Range: [[005db880, 005db8fc]]
// Convention: __cdecl
// Signature: void __cdecl core_tentacle_cpp_CTentacle_serialize_FUN_005db880(CTentacle *this_ptr)

#include "nocturne.h"

void __cdecl core_tentacle_cpp_CTentacle_serialize_FUN_005db880(CTentacle *this_ptr)

{
  CDeformableModelInstance *motion_controller;
  
  core_enemy_cpp_CEnemy_serialize_FUN_004a9660(&this_ptr->base);
  core_actor_cpp_serializedDeformableModelInstance_FUN_0040b970
            (&(this_ptr->base).base.model,"modelName");
  if (g_CTentacleClassVersion < 2) {
    core_actor_cpp_serializeFloat_FUN_0040b770
              (&(this_ptr->base).guard_distance,"guardDistance");
  }
  motion_controller = &(this_ptr->base).base.model;
  core_actor_cpp_serializeMotionState_FUN_0040b9f0
            (&motion_controller->motion_controller,"motion state");
  core_actor_cpp_serializePartStatus_FUN_0040bae0(motion_controller,"partStatus");
  core_actor_cpp_serializeActor_FUN_0040b870
            ((CDemonActor *)(this_ptr->unk + 0x10),"graveActor");
  return;
}
