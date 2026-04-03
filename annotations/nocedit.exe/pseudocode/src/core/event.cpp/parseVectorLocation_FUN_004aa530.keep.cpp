// Name: core_event.cpp_parseVectorLocation_FUN_004aa530
// Address: 004aa530
// MANUAL RECONSTRUCTION
// Address Range: [[004aa530, 004aa643]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_parseVectorLocation_FUN_004aa530(char *buffer,int *offset,CVector3f *out_position)

#include "nocturne.h"

int __cdecl core_event_cpp_parseVectorLocation_FUN_004aa530(char *buffer,int *offset,CVector3f *out_position)

{
  CDemonActor *pCVar1;
  char local_78 [100];
  int local_14;
  
  local_14 = -1;
  sscanf
            (buffer + *offset," { %f, %f, %f }%n",&out_position->x,&out_position->y,&out_position->z,
             &local_14);
  if (6 < local_14) {
    *offset = *offset + local_14;
    return 1;
  }
  sscanf(buffer + *offset," %[^ ,(){}]%n",local_78,&local_14);
  if (local_14 < 0) {
    _sprintf(g_EventErrorMessageBuffer,"Error parsing vector location")
    ;
    return -1;
  }
  pCVar1 = core_event_cpp_resolveActorByName_FUN_004aa400
                     (local_78,g_CDemonActorClassInfo.name_hash,g_CDemonActorClassInfo.class_name);
  if (pCVar1 == (CDemonActor *)0x0) {
    return -1;
  }
  *offset = *offset + local_14;
  if (pCVar1 != g_ActorNameSentinel) {
    if ((CLocation *)out_position != &pCVar1->location) {
      out_position->x = (pCVar1->location).position.x;
      out_position->y = (pCVar1->location).position.y;
      out_position->z = (pCVar1->location).position.z;
    }
    return 1;
  }
  return 0;
}
