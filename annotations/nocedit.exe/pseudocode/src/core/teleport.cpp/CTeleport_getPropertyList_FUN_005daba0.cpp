// Name: core_teleport.cpp_CTeleport_getPropertyList_FUN_005daba0
// Address: 005daba0
// Address Range: [[005daba0, 005dabd9]]
// Convention: __cdecl
// Signature: void __cdecl core_teleport_cpp_CTeleport_getPropertyList_FUN_005daba0(CTeleport *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl core_teleport_cpp_CTeleport_getPropertyList_FUN_005daba0(CTeleport *this_ptr,CActorPropertyList *property_list)

{
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(&this_ptr->base,property_list);
  core_actor_cpp_CActorPropertyList_addChoice_FUN_0040e350
            (property_list,"Destination",&this_ptr->destination,0,"CTeleportDest",
             (CActorPropertyValidatorFunc *)0x0);
  return;
}
