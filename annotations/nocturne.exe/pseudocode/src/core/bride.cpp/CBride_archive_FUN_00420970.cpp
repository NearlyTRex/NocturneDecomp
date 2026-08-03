// Name: core_bride.cpp_CBride_archive_FUN_00420970
// Address: 00420970
// Address Range: [[00420970, 004209f7]]
// Convention: __cdecl
// Signature: void __cdecl core_bride_cpp_CBride_archive_FUN_00420970(CBride *this_ptr)

#include "nocturne.h"

void __cdecl core_bride_cpp_CBride_archive_FUN_00420970(CBride *this_ptr)

{
  core_enemy_cpp_CEnemy_archive_FUN_004796c0(&this_ptr->base);
  if (g_INT_005ad0e0 < 2) {
    core_actor_cpp_archiveFloat_FUN_0040c880(&(this_ptr->base).speed,"speed");
  }
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ca80
            (&(this_ptr->base).base.model,"modelName");
  if ((1 < g_INT_005ad0e0) && (g_INT_005ad0e0 < 4)) {
    core_actor_cpp_archiveFloat_FUN_0040c880
              (&(this_ptr->base).guard_distance,"guardDistance");
  }
  if (g_INT_005ad0e0 < 3) {
    return;
  }
  core_actor_cpp_archiveMotionState_FUN_0040cb00
            (&(this_ptr->base).base.model.motion_controller,"state");
  return;
}
