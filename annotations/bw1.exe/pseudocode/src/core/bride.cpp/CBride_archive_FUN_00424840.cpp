// Name: core_bride.cpp_CBride_archive_FUN_00424840
// Address: 00424840
// Address Range: [[00424840, 004248c7]]
// Convention: __cdecl
// Signature: void __cdecl core_bride_cpp_CBride_archive_FUN_00424840(CBride *this_ptr)

#include "nocturne.h"

void __cdecl core_bride_cpp_CBride_archive_FUN_00424840(CBride *this_ptr)

{
  core_enemy_cpp_CEnemy_archive_FUN_004a0520(&this_ptr->base);
  if (g_CBrideClassVersion < 2) {
    core_actor_cpp_archiveFloat_FUN_0040b5f0(&(this_ptr->base).speed,"@speed" + 1);
  }
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040b7f0
            (&(this_ptr->base).base.model,"modelName");
  if ((1 < g_CBrideClassVersion) && (g_CBrideClassVersion < 4)) {
    core_actor_cpp_archiveFloat_FUN_0040b5f0
              (&(this_ptr->base).guard_distance,"guardDistance");
  }
  if (g_CBrideClassVersion < 3) {
    return;
  }
  core_actor_cpp_archiveMotionState_FUN_0040b870(&(this_ptr->base).base.model.base,"state")
  ;
  return;
}
