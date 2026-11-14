// Name: core_event.cpp_parseVectorLocation_FUN_0048ba80
// Address: 0048ba80
// Address Range: [[0048ba80, 0048bb93]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_parseVectorLocation_FUN_0048ba80(char *buffer,int *offset,CVector3f *out_position)

#include "nocturne.h"

int __cdecl core_event_cpp_parseVectorLocation_FUN_0048ba80(char *buffer,int *offset,CVector3f *out_position)

{
  CDemonActor *pCVar1;
  char local_78 [100];
  int local_14;
  
  local_14 = -1;
  sscanf(buffer + *offset," { %f, %f, %f }%n");
  if (6 < local_14) {
    *offset = *offset + local_14;
    return 1;
  }
  sscanf(buffer + *offset," %[^ ,(){}]%n");
  if (local_14 < 0) {
    _sprintf(&DAT_01c734b0,"Error parsing vector location");
    return -1;
  }
  pCVar1 = core_event_cpp_resolveActorByName_FUN_0048b950
                     (local_78,g_CDemonActorClassInfo.name_hash,g_CDemonActorClassInfo.class_name);
  if (pCVar1 == (CDemonActor *)0x0) {
    return -1;
  }
  *offset = *offset + local_14;
  if (pCVar1 != 0x0FFFFFFF) {
    if ((CLocation *)out_position != &pCVar1->location) {
      out_position->x = (pCVar1->location).position.x;
      out_position->y = (pCVar1->location).position.y;
      out_position->z = (pCVar1->location).position.z;
    }
    return 1;
  }
  return 0;
}
