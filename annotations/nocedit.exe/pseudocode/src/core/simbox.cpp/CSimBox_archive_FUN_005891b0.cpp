// Name: core_simbox.cpp_CSimBox_archive_FUN_005891b0
// Address: 005891b0
// Address Range: [[005891b0, 00589258]]
// Convention: __cdecl
// Signature: void __cdecl core_simbox_cpp_CSimBox_archive_FUN_005891b0(CSimBox *this_ptr)

#include "nocturne.h"

void __cdecl core_simbox_cpp_CSimBox_archive_FUN_005891b0(CSimBox *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c1c0(&this_ptr->base);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040b8f0(&this_ptr->model,"modelName");
  core_actor_cpp_archiveFloat_FUN_0040b770(&this_ptr->weight,"weight");
  if (g_CSimBoxClassVersion < 2) {
    if (g_CSimBoxClassVersion < 3) {
      return;
    }
  }
  else {
    core_actor_cpp_archiveVector_FUN_0040b340
              (&this_ptr->initial_velocity,"initialVelocity");
    core_actor_cpp_archiveVector_FUN_0040b340(&this_ptr->init_rot_vel,"initRotVel");
    core_actor_cpp_archiveString_FUN_0040b5c0(this_ptr->trigger_event,"triggerEvent");
    if (g_CSimBoxClassVersion < 3) {
      return;
    }
  }
  core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->type,"type");
  return;
}
