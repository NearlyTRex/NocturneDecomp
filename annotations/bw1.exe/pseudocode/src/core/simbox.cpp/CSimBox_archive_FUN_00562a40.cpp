// Name: core_simbox.cpp_CSimBox_archive_FUN_00562a40
// Address: 00562a40
// Address Range: [[00562a40, 00562ae8]]
// Convention: __cdecl
// Signature: void __cdecl core_simbox_cpp_CSimBox_archive_FUN_00562a40(CSimBox *this_ptr)

#include "nocturne.h"

void __cdecl core_simbox_cpp_CSimBox_archive_FUN_00562a40(CSimBox *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c040((CDemonActor *)this_ptr);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040b770
            (&this_ptr->field_0x158,"@modelName" + 1);
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0x2d8,"weight");
  if (g_CSimBoxClassVersion < 2) {
    if (g_CSimBoxClassVersion < 3) {
      return;
    }
  }
  else {
    core_actor_cpp_archiveVector_FUN_0040b1c0(&this_ptr->field_0x340,"initialVelocity");
    core_actor_cpp_archiveVector_FUN_0040b1c0(&this_ptr->field_0x34c,"initRotVel");
    core_actor_cpp_archiveString_FUN_0040b440(&this_ptr->field_0x2dc,"triggerEvent");
    if (g_CSimBoxClassVersion < 3) {
      return;
    }
  }
  core_actor_cpp_archiveInteger_FUN_0040b670((int *)&this_ptr->field_0x2d4,&DAT_005f1ac4);
  return;
}
