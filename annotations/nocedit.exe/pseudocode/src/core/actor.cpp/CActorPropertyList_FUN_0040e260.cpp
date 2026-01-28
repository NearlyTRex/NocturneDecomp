// Name: core_actor.cpp_CActorPropertyList_FUN_0040e260
// Address: 0040e260
// Address Range: [[0040e260, 0040e289]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CActorPropertyList_FUN_0040e260(CActorPropertyList *this_ptr)

#include "nocturne.h"

void __cdecl core_actor_cpp_CActorPropertyList_FUN_0040e260(CActorPropertyList *this_ptr)

{
  int iVar1;
  char *in_stack_00000008;
  void *in_stack_0000000c;
  void *in_stack_00000010;
  
  iVar1 = core_actor_cpp_CActorPropertyList_snag_FUN_0040e6c0
                    (this_ptr,2,in_stack_00000008,in_stack_0000000c,in_stack_00000010);
  *(uint *)(iVar1 + 0x5c) = 0;
  return;
}
