// Name: core_simbox.cpp_CSimBox_archive_FUN_00517010
// Address: 00517010
// Address Range: [[00517010, 005170b8]]
// Convention: __cdecl
// Signature: void __cdecl core_simbox_cpp_CSimBox_archive_FUN_00517010(CSimBox *this_ptr)

#include "nocturne.h"

void __cdecl core_simbox_cpp_CSimBox_archive_FUN_00517010(CSimBox *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(&this_ptr->base);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ca00(&this_ptr->model,"modelName");
  core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->weight,"weight");
  if (g_INT_005be964 < 2) {
    if (g_INT_005be964 < 3) {
      return;
    }
  }
  else {
    core_actor_cpp_archiveVector_FUN_0040c450
              (&this_ptr->initial_velocity,"initialVelocity");
    core_actor_cpp_archiveVector_FUN_0040c450(&this_ptr->init_rot_vel,"initRotVel");
    core_actor_cpp_archiveString_FUN_0040c6d0(this_ptr->trigger_event,"triggerEvent");
    if (g_INT_005be964 < 3) {
      return;
    }
  }
  core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->type,"type");
  return;
}
