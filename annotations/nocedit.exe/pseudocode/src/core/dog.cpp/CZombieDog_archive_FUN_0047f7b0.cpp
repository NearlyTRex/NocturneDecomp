// Name: core_dog.cpp_CZombieDog_archive_FUN_0047f7b0
// Address: 0047f7b0
// Address Range: [[0047f7b0, 0047f81c]]
// Convention: __cdecl
// Signature: void __cdecl core_dog_cpp_CZombieDog_archive_FUN_0047f7b0(CZombieDog *this_ptr)

#include "nocturne.h"

void __cdecl core_dog_cpp_CZombieDog_archive_FUN_0047f7b0(CZombieDog *this_ptr)

{
  core_enemy_cpp_CEnemy_archive_FUN_004a9660(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040b770(&(this_ptr->base).speed,"speed");
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040b970
            (&(this_ptr->base).base.model,"modelName");
  if (g_CZombieDogClassVersion < 2) {
    core_actor_cpp_archiveFloat_FUN_0040b770
              (&(this_ptr->base).guard_distance,"guardDistance");
  }
  core_actor_cpp_archiveMotionState_FUN_0040b9f0
            (&(this_ptr->base).base.model.motion_controller,"motion state");
  return;
}
