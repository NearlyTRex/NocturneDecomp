// Name: core_simbox.cpp_CSimBox_archive_FUN_00547660
// Address: 00547660
// Address Range: [[00547660, 00547708]]
// Convention: __cdecl
// Signature: void __cdecl core_simbox_cpp_CSimBox_archive_FUN_00547660(CSimBox *this_ptr)

#include "nocturne.h"

void __cdecl core_simbox_cpp_CSimBox_archive_FUN_00547660(CSimBox *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c280((CDemonActor *)this_ptr);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040b9b0
            (&this_ptr->field_0x158,"@modelName" + 1);
  core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->field_0x2d8,"weight");
  if (g_CSimBoxClassVersion < 2) {
    if (g_CSimBoxClassVersion < 3) {
      return;
    }
  }
  else {
    core_actor_cpp_archiveVector_FUN_0040b400(&this_ptr->field_0x340,"initialVelocity");
    core_actor_cpp_archiveVector_FUN_0040b400(&this_ptr->field_0x34c,"initRotVel");
    core_actor_cpp_archiveString_FUN_0040b680(&this_ptr->field_0x2dc,"triggerEvent");
    if (g_CSimBoxClassVersion < 3) {
      return;
    }
  }
  core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&this_ptr->field_0x2d4,&DAT_005d15ef);
  return;
}
