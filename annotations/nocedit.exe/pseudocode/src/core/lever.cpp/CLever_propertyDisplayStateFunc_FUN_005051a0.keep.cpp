// Name: core_lever.cpp_CLever_propertyDisplayStateFunc_FUN_005051a0
// Address: 005051a0
// MANUAL RECONSTRUCTION
// Address Range: [[005051a0, 0050520e]]
// Convention: __cdecl
// Signature: void __cdecl core_lever_cpp_CLever_propertyDisplayStateFunc_FUN_005051a0(CLever *this_ptr,CActorProperty *property,char *output_buffer)

#include "nocturne.h"

void __cdecl core_lever_cpp_CLever_propertyDisplayStateFunc_FUN_005051a0(CLever *this_ptr,CActorProperty *property,char *output_buffer)

{
  CLever *this_ptr_00;
  char *pcVar2;

  this_ptr_00 = (CLever *)
                core_actor_cpp_castToClassHash_FUN_0040c790
                          (&this_ptr->base,g_CLeverClassInfo.name_hash);
  if ((float)0.5 <= this_ptr_00->param) {
    core_lever_cpp_CLever_setState_FUN_00504b20(this_ptr_00,1.0);
    pcVar2 = "On";
  }
  else {
    core_lever_cpp_CLever_setState_FUN_00504b20(this_ptr_00,0.0);
    pcVar2 = "Off";
  }
  strcpy(output_buffer, pcVar2);
  return;
}
