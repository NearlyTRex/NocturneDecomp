// Name: core_lever.cpp_CLever_FUN_005051a0
// Address: 005051a0
// Address Range: [[005051a0, 0050520e]]
// Convention: __cdecl
// Signature: void __cdecl core_lever_cpp_CLever_FUN_005051a0(CLever *this_ptr)

#include "nocturne.h"

void __cdecl core_lever_cpp_CLever_FUN_005051a0(CLever *this_ptr)

{
  char cVar1;
  CLever *this_ptr_00;
  char *pcVar2;
  char *in_stack_0000000c;
  
  this_ptr_00 = (CLever *)
                core_actor_cpp_castToClassHash_FUN_0040c790
                          (&this_ptr->base,g_CLeverClassInfo.name_hash);
  if ((float)0.5 <= this_ptr_00->param) {
    core_lever_cpp_CLever_FUN_00504b20(this_ptr_00);
    pcVar2 = "On";
  }
  else {
    core_lever_cpp_CLever_FUN_00504b20(this_ptr_00);
    pcVar2 = "Off";
  }
  do {
    cVar1 = *pcVar2;
    *in_stack_0000000c = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    in_stack_0000000c[1] = cVar1;
    in_stack_0000000c = in_stack_0000000c + 2;
  } while (cVar1 != '\0');
  return;
}
