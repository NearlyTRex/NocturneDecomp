// Name: core_door.cpp_CDoor_propertyDisplayCallback_FUN_00481250
// Address: 00481250
// Address Range: [[00481250, 004812a8]]
// Convention: __cdecl
// Signature: void __cdecl core_door_cpp_CDoor_propertyDisplayCallback_FUN_00481250 (CDoor *this_ptr,CActorPropertyList *property,char *output_buffer)

#include "nocturne.h"

void __cdecl
core_door_cpp_CDoor_propertyDisplayCallback_FUN_00481250
          (CDoor *this_ptr,CActorPropertyList *property,char *output_buffer)

{
  char cVar1;
  CDoor *pCVar3;
  char *pcVar2;
  
  pCVar3 = (CDoor *)core_actor_cpp_castToClassHash_FUN_0040c790
                              (&this_ptr->base,g_CDoorClassInfo.name_hash);
  if (pCVar3->door_state == 0) {
    pcVar2 = "Closed";
  }
  else if (pCVar3->door_state == 2) {
    pcVar2 = "Open";
  }
  else {
    pcVar2 = "Unknown";
  }
  do {
    cVar1 = *pcVar2;
    *output_buffer = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    output_buffer[1] = cVar1;
    output_buffer = output_buffer + 2;
  } while (cVar1 != '\0');
  return;
}
