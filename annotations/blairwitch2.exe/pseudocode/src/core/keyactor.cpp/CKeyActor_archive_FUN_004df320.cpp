// Name: core_keyactor.cpp_CKeyActor_archive_FUN_004df320
// Address: 004df320
// Address Range: [[004df320, 004df38b]]
// Convention: __cdecl
// Signature: void __cdecl core_keyactor_cpp_CKeyActor_archive_FUN_004df320(CKeyActor *this_ptr)

#include "nocturne.h"

void __cdecl core_keyactor_cpp_CKeyActor_archive_FUN_004df320(CKeyActor *this_ptr)

{
  char acStack_104 [256];
  
  core_actor_cpp_CDemonActor_archive_FUN_0040c330(&this_ptr->base);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ba60
            (&this_ptr->model,"@modelName" + 1);
  core_actor_cpp_archiveInteger_FUN_0040b960(&this_ptr->key_mask,"keyMask");
  if (g_CKeyActorClassVersion != 2) {
    return;
  }
  core_actor_cpp_archiveLocalizedString_FUN_0040b850(acStack_104,"descriptiveName");
  return;
}
