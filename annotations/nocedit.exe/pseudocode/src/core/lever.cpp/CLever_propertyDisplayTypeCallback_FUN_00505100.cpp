// Name: core_lever.cpp_CLever_propertyDisplayTypeCallback_FUN_00505100
// Address: 00505100
// Address Range: [[00505100, 00505158]]
// Convention: __cdecl
// Signature: void __cdecl core_lever_cpp_CLever_propertyDisplayTypeCallback_FUN_00505100 (CLever *this_ptr,CActorProperty *property,char *output_buffer)

#include "nocturne.h"

void __cdecl
core_lever_cpp_CLever_propertyDisplayTypeCallback_FUN_00505100
          (CLever *this_ptr,CActorProperty *property,char *output_buffer)

{
  char cVar1;
  CLever *pCVar3;
  char *pcVar2;
  
  pCVar3 = (CLever *)
           core_actor_cpp_castToClassHash_FUN_0040c790(&this_ptr->base,g_CLeverClassInfo.name_hash);
  if (pCVar3->lever_type == LEVER_TYPE_GROUND) {
    pcVar2 = "Ground lever";
  }
  else if (pCVar3->lever_type == LEVER_TYPE_WALL) {
    pcVar2 = "Wall lever";
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
