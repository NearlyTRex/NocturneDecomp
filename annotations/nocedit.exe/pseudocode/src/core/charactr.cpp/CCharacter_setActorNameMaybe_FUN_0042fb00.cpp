// Name: core_charactr.cpp_CCharacter_setActorNameMaybe_FUN_0042fb00
// Address: 0042fb00
// Address Range: [[0042fb00, 0042fb0e]]
// Convention: __cdecl
// Signature: CCharacter * core_charactr.cpp_CCharacter_setActorNameMaybe_FUN_0042fb00(CCharacter * this_ptr, char * * actor_name)

#include "nocturne.h"

CCharacter * __cdecl
core_charactr_cpp_CCharacter_setActorNameMaybe_FUN_0042fb00(CCharacter *this_ptr,char **actor_name)

{
  *(char **)(this_ptr->base).actor_name = *actor_name;
  return this_ptr;
}
