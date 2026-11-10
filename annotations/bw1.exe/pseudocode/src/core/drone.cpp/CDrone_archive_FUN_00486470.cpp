// Name: core_drone.cpp_CDrone_archive_FUN_00486470
// Address: 00486470
// Address Range: [[00486470, 004864dc]]
// Convention: __cdecl
// Signature: void __cdecl core_drone_cpp_CDrone_archive_FUN_00486470(CDrone *this_ptr)

#include "nocturne.h"

void __cdecl core_drone_cpp_CDrone_archive_FUN_00486470(CDrone *this_ptr)

{
  core_enemy_cpp_CEnemy_archive_FUN_004a0520(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&(this_ptr->base).speed,"@speed" + 1);
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040b7f0
            (&(this_ptr->base).base.model,"modelName");
  if (g_CDroneClassVersion < 2) {
    core_actor_cpp_archiveFloat_FUN_0040b5f0
              (&(this_ptr->base).guard_distance,"guardDistance");
  }
  core_actor_cpp_archiveMotionState_FUN_0040b870
            (&(this_ptr->base).base.model.base,"motion state");
  return;
}
