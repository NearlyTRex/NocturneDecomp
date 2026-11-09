// Name: core_actor.cpp_FUN_00408830
// Address: 00408830
// Address Range: [[00408830, 00408844]]
// Convention: __cdecl
// Signature: char * __cdecl core_actor_cpp_FUN_00408830(CDemonActor *this_ptr)

#include "nocturne.h"

char * __cdecl core_actor_cpp_FUN_00408830(CDemonActor *this_ptr)

{
  char *pcVar1;
  
  pcVar1 = (char *)(**(code **)(*(int *)&this_ptr->field_0x154 + 0xcc))(this_ptr);
  return pcVar1;
}
