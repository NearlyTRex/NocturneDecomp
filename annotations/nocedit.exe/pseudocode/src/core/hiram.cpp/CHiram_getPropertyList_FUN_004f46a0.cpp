// Name: core_hiram.cpp_CHiram_getPropertyList_FUN_004f46a0
// Address: 004f46a0
// Address Range: [[004f46a0, 004f46d0]]
// Convention: __cdecl
// Signature: void __cdecl core_hiram_cpp_CHiram_getPropertyList_FUN_004f46a0 (CHiram *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl
core_hiram_cpp_CHiram_getPropertyList_FUN_004f46a0
          (CHiram *this_ptr,CActorPropertyList *property_list)

{
  core_npc_cpp_CNPC_getPropertyList_FUN_00544e40(&this_ptr->base,property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e460(property_list);
  return;
}
