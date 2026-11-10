// Name: core_bride.cpp_CBride_archive_FUN_0041e800
// Address: 0041e800
// Address Range: [[0041e800, 0041e887]]
// Convention: __cdecl
// Signature: void __cdecl core_bride_cpp_CBride_archive_FUN_0041e800(CBride *this_ptr)

#include "nocturne.h"

void __cdecl core_bride_cpp_CBride_archive_FUN_0041e800(CBride *this_ptr)

{
  core_enemy_cpp_CEnemy_archive_FUN_00487ec0(&this_ptr->base);
  if (g_CBrideClassVersion < 2) {
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&(this_ptr->base).speed,"@speed" + 1);
  }
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040bae0
            (&(this_ptr->base).base.model,"modelName");
  if ((1 < g_CBrideClassVersion) && (g_CBrideClassVersion < 4)) {
    core_actor_cpp_archiveFloat_FUN_0040b8e0
              (&(this_ptr->base).guard_distance,"guardDistance");
  }
  if (g_CBrideClassVersion < 3) {
    return;
  }
  core_actor_cpp_archiveMotionState_FUN_0040bb60(&(this_ptr->base).base.model,"state");
  return;
}
