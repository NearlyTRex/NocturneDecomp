// Name: core_charactr.cpp_CCharacter_setActorNameMaybe_FUN_0042fae0
// Address: 0042fae0
// Address Range: [[0042fae0, 0042faee]]
// Convention: __cdecl
// Signature: CCharacter * __cdecl core_charactr_cpp_CCharacter_setActorNameMaybe_FUN_0042fae0(CCharacter *this_ptr,char **actor_name)

#include "nocturne.h"

CCharacter * __cdecl
core_charactr_cpp_CCharacter_setActorNameMaybe_FUN_0042fae0(CCharacter *this_ptr,char **actor_name)

{
  *(char **)(this_ptr->base).actor_name = *actor_name;
  return this_ptr;
}
