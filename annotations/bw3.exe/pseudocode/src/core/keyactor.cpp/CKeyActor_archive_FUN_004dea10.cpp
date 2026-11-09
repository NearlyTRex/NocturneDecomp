// Name: core_keyactor.cpp_CKeyActor_archive_FUN_004dea10
// Address: 004dea10
// Address Range: [[004dea10, 004dea7b]]
// Convention: __cdecl
// Signature: void __cdecl core_keyactor_cpp_CKeyActor_archive_FUN_004dea10(CKeyActor *this_ptr)

#include "nocturne.h"

void __cdecl core_keyactor_cpp_CKeyActor_archive_FUN_004dea10(CKeyActor *this_ptr)

{
  char acStack_104 [256];
  
  core_actor_cpp_CDemonActor_archive_FUN_0040c280((CDemonActor *)this_ptr);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040b9b0
            (&this_ptr->field_0x158,"@modelName" + 1);
  core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&this_ptr->field_0x2d4,"keyMask");
  if (g_CKeyActorClassVersion != 2) {
    return;
  }
  core_actor_cpp_archiveLocalizedString_FUN_0040b7a0(acStack_104,"descriptiveName");
  return;
}
