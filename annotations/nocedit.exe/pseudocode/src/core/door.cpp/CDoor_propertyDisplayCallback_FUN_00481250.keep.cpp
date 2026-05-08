// Name: core_door.cpp_CDoor_propertyDisplayCallback_FUN_00481250
// Address: 00481250
// MANUAL RECONSTRUCTION
// Address Range: [[00481250, 004812a8]]
// Convention: __cdecl
// Signature: void __cdecl core_door_cpp_CDoor_propertyDisplayCallback_FUN_00481250(CDoor *this_ptr,CActorPropertyList *property,char *output_buffer)

#include "nocturne.h"

void __cdecl core_door_cpp_CDoor_propertyDisplayCallback_FUN_00481250(CDoor *this_ptr,CActorPropertyList *property,char *output_buffer)

{
  CDoor *pCVar3;
  char *pcVar2;

  pCVar3 = (CDoor *)core_actor_cpp_castToClassHash_FUN_0040c790
                              (&this_ptr->base,g_CDoorClassInfo.name_hash);
  if (pCVar3->door_state == DOOR_STATE_CLOSED) {
    pcVar2 = "Closed";
  }
  else if (pCVar3->door_state == DOOR_STATE_OPEN) {
    pcVar2 = "Open";
  }
  else {
    pcVar2 = "Unknown";
  }
  strcpy(output_buffer, pcVar2);
  return;
}
