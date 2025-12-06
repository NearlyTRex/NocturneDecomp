// Name: core_dog.cpp_CZombieDog_serialize_FUN_0047f7b0
// Address: 0047f7b0
// Address Range: [[0047f7b0, 0047f81c]]
// Convention: __cdecl
// Signature: void core_dog.cpp_CZombieDog_serialize_FUN_0047f7b0(CZombieDog * this_ptr)

#include "nocturne.h"

void __cdecl core_dog_cpp_CZombieDog_serialize_FUN_0047f7b0(CZombieDog *this_ptr)

{
  core_enemy_cpp_CEnemy_serialize_FUN_004a9660(&this_ptr->base_enemy);
  core_actor_cpp_serializeFloat_FUN_0040b770(&(this_ptr->base_enemy).speed,"speed");
  core_actor_cpp_serializedDeformableModelInstance_FUN_0040b970
            (&(this_ptr->base_enemy).base_character.model,"modelName");
  if (g_CZombieDogClassVersion < 2) {
    core_actor_cpp_serializeFloat_FUN_0040b770
              (&(this_ptr->base_enemy).guard_distance,"guardDistance");
  }
  core_actor_cpp_serializeMotionState_FUN_0040b9f0
            (&(this_ptr->base_enemy).base_character.model.motion_controller,"motion state")
  ;
  return;
}
