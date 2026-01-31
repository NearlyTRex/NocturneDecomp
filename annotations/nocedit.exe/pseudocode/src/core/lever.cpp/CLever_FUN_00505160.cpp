// Name: core_lever.cpp_CLever_FUN_00505160
// Address: 00505160
// Address Range: [[00505160, 00505192]]
// Convention: __cdecl
// Signature: int __cdecl core_lever_cpp_CLever_FUN_00505160(CLever *this_ptr)

#include "nocturne.h"

int __cdecl core_lever_cpp_CLever_FUN_00505160(CLever *this_ptr)

{
  CDemonActor *pCVar1;
  
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790(&this_ptr->base,g_CLeverClassInfo.name_hash);
  pCVar1[2].location.position.z = (float)(uint)(pCVar1[2].location.position.z == 0.0);
  return 1;
}
