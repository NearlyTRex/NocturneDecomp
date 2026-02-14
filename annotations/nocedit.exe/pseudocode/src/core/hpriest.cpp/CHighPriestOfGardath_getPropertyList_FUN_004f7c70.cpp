// Name: core_hpriest.cpp_CHighPriestOfGardath_getPropertyList_FUN_004f7c70
// Address: 004f7c70
// Address Range: [[004f7c70, 004f7ca0]]
// Convention: __cdecl
// Signature: void __cdecl core_hpriest_cpp_CHighPriestOfGardath_getPropertyList_FUN_004f7c70(CHighPriestOfGardath *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl core_hpriest_cpp_CHighPriestOfGardath_getPropertyList_FUN_004f7c70(CHighPriestOfGardath *this_ptr,CActorPropertyList *property_list)

{
  core_npc_cpp_CNPC_getPropertyList_FUN_00544e40(&this_ptr->base,property_list);
  core_actor_cpp_CActorPropertyList_addEvent_FUN_0040e460
            (property_list,"Kill me event",this_ptr->unk);
  return;
}
