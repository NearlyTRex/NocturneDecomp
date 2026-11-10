// Name: core_dog.cpp_CZombieDog_archive_FUN_00463460
// Address: 00463460
// Address Range: [[00463460, 004634cc]]
// Convention: __cdecl
// Signature: void __cdecl core_dog_cpp_CZombieDog_archive_FUN_00463460(CZombieDog *this_ptr)

#include "nocturne.h"

void __cdecl core_dog_cpp_CZombieDog_archive_FUN_00463460(CZombieDog *this_ptr)

{
  core_enemy_cpp_CEnemy_archive_FUN_00489120(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040b830(&(this_ptr->base).field_0xcdcc,"@speed" + 1);
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ba30
            (&(this_ptr->base).base.model,"modelName");
  if (g_CZombieDogClassVersion < 2) {
    core_actor_cpp_archiveFloat_FUN_0040b830
              (&(this_ptr->base).guard_distance,"guardDistance");
  }
  core_actor_cpp_archiveMotionState_FUN_0040bab0
            (&(this_ptr->base).base.model.base,"motion state");
  return;
}
