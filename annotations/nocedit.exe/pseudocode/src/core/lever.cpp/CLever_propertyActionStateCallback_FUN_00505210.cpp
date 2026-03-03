// Name: core_lever.cpp_CLever_propertyActionStateCallback_FUN_00505210
// Address: 00505210
// Address Range: [[00505210, 00505232]]
// Convention: __cdecl
// Signature: int __cdecl core_lever_cpp_CLever_propertyActionStateCallback_FUN_00505210(CLever *this_ptr,CActorProperty *property)

#include "nocturne.h"

int __cdecl core_lever_cpp_CLever_propertyActionStateCallback_FUN_00505210(CLever *this_ptr,CActorProperty *property)

{
  CLever *this_ptr_00;
  
  this_ptr_00 = (CLever *)
                core_actor_cpp_castToClassHash_FUN_0040c790
                          (&this_ptr->base,g_CLeverClassInfo.name_hash);
  core_lever_cpp_CLever_activate_FUN_00504c90(this_ptr_00);
  return 1;
}
