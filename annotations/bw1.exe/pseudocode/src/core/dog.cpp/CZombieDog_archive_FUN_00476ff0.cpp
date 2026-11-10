// Name: core_dog.cpp_CZombieDog_archive_FUN_00476ff0
// Address: 00476ff0
// Address Range: [[00476ff0, 0047705c]]
// Convention: __cdecl
// Signature: void __cdecl core_dog_cpp_CZombieDog_archive_FUN_00476ff0(CZombieDog *this_ptr)

#include "nocturne.h"

void __cdecl core_dog_cpp_CZombieDog_archive_FUN_00476ff0(CZombieDog *this_ptr)

{
  core_enemy_cpp_CEnemy_archive_FUN_004a0520(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&(this_ptr->base).speed,"?speed" + 1);
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040b7f0
            (&(this_ptr->base).base.model,"modelName");
  if (g_CZombieDogClassVersion < 2) {
    core_actor_cpp_archiveFloat_FUN_0040b5f0
              (&(this_ptr->base).guard_distance,"guardDistance");
  }
  core_actor_cpp_archiveMotionState_FUN_0040b870
            (&(this_ptr->base).base.model.base,"motion state");
  return;
}
