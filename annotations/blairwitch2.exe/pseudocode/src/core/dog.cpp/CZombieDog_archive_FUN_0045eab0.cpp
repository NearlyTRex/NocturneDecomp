// Name: core_dog.cpp_CZombieDog_archive_FUN_0045eab0
// Address: 0045eab0
// Address Range: [[0045eab0, 0045eb1c]]
// Convention: __cdecl
// Signature: void __cdecl core_dog_cpp_CZombieDog_archive_FUN_0045eab0(CZombieDog *this_ptr)

#include "nocturne.h"

void __cdecl core_dog_cpp_CZombieDog_archive_FUN_0045eab0(CZombieDog *this_ptr)

{
  core_enemy_cpp_CEnemy_archive_FUN_00487ec0(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&(this_ptr->base).speed,"?speed" + 1);
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040bae0
            (&(this_ptr->base).base.model,"modelName");
  if (g_CZombieDogClassVersion < 2) {
    core_actor_cpp_archiveFloat_FUN_0040b8e0
              (&(this_ptr->base).guard_distance,"guardDistance");
  }
  core_actor_cpp_archiveMotionState_FUN_0040bb60
            (&(this_ptr->base).base.model.base,"motion state");
  return;
}
