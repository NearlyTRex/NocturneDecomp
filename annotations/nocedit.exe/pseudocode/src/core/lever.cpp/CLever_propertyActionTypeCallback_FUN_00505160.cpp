// Name: core_lever.cpp_CLever_propertyActionTypeCallback_FUN_00505160
// Address: 00505160
// Address Range: [[00505160, 00505192]]
// Convention: __cdecl
// Signature: int __cdecl core_lever_cpp_CLever_propertyActionTypeCallback_FUN_00505160(CLever *this_ptr,CActorProperty *property)

#include "nocturne.h"

int __cdecl core_lever_cpp_CLever_propertyActionTypeCallback_FUN_00505160(CLever *this_ptr,CActorProperty *property)

{
  CLever *pCVar1;
  
  pCVar1 = (CLever *)
           core_actor_cpp_castToClassHash_FUN_0040c790(&this_ptr->base,g_CLeverClassInfo.name_hash);
  pCVar1->lever_type = (uint)(pCVar1->lever_type == LEVER_TYPE_GROUND);
  return 1;
}
