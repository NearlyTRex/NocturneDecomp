// Name: core_actor.cpp_FUN_00408870
// Address: 00408870
// Address Range: [[00408870, 00408884]]
// Convention: __cdecl
// Signature: char * __cdecl core_actor_cpp_FUN_00408870(CDemonActor *this_ptr)

#include "nocturne.h"

char * __cdecl core_actor_cpp_FUN_00408870(CDemonActor *this_ptr)

{
  char *pcVar1;
  
  pcVar1 = (char *)(**(code **)(*(int *)&this_ptr->field_0x154 + 0xcc))(this_ptr);
  return pcVar1;
}
