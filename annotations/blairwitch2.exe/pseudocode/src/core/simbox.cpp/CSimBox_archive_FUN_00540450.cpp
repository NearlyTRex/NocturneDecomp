// Name: core_simbox.cpp_CSimBox_archive_FUN_00540450
// Address: 00540450
// Address Range: [[00540450, 005404f8]]
// Convention: __cdecl
// Signature: void __cdecl core_simbox_cpp_CSimBox_archive_FUN_00540450(CSimBox *this_ptr)

#include "nocturne.h"

void __cdecl core_simbox_cpp_CSimBox_archive_FUN_00540450(CSimBox *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c330(&this_ptr->base);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ba60
            (&this_ptr->model,"@modelName" + 1);
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->weight,"weight");
  if (g_CSimBoxClassVersion < 2) {
    if (g_CSimBoxClassVersion < 3) {
      return;
    }
  }
  else {
    core_actor_cpp_archiveVector_FUN_0040b4b0
              (&this_ptr->initial_velocity,"initialVelocity");
    core_actor_cpp_archiveVector_FUN_0040b4b0(&this_ptr->init_rot_vel,"initRotVel");
    core_actor_cpp_archiveString_FUN_0040b730(this_ptr->trigger_event,"triggerEvent");
    if (g_CSimBoxClassVersion < 3) {
      return;
    }
  }
  core_actor_cpp_archiveInteger_FUN_0040b960(&this_ptr->type,&DAT_005e68f2);
  return;
}
