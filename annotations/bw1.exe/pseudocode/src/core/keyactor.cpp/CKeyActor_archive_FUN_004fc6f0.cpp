// Name: core_keyactor.cpp_CKeyActor_archive_FUN_004fc6f0
// Address: 004fc6f0
// Address Range: [[004fc6f0, 004fc75b]]
// Convention: __cdecl
// Signature: void __cdecl core_keyactor_cpp_CKeyActor_archive_FUN_004fc6f0(CKeyActor *this_ptr)

#include "nocturne.h"

void __cdecl core_keyactor_cpp_CKeyActor_archive_FUN_004fc6f0(CKeyActor *this_ptr)

{
  char acStack_104 [256];
  
  core_actor_cpp_CDemonActor_archive_FUN_0040c040((CDemonActor *)this_ptr);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040b770
            (&this_ptr->field_0x158,"modelName");
  core_actor_cpp_archiveInteger_FUN_0040b670((int *)&this_ptr->field_0x2d4,"keyMask");
  if (g_CKeyActorClassVersion != 2) {
    return;
  }
  core_actor_cpp_archiveLocalizedString_FUN_0040b560(acStack_104,"descriptiveName");
  return;
}
