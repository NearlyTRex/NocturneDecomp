// Name: core_charactr.cpp_CCharacter_setActorNameMaybe_FUN_0042faf0
// Address: 0042faf0
// Address Range: [[0042faf0, 0042fafe]]
// Convention: __cdecl
// Signature: CCharacter * __cdecl core_charactr_cpp_CCharacter_setActorNameMaybe_FUN_0042faf0(CCharacter *this_ptr,char **actor_name)

#include "nocturne.h"

CCharacter * __cdecl
core_charactr_cpp_CCharacter_setActorNameMaybe_FUN_0042faf0(CCharacter *this_ptr,char **actor_name)

{
  *(char **)(this_ptr->base).actor_name = *actor_name;
  return this_ptr;
}
