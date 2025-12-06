// Name: core_actor.cpp_CActorPropertyList_FUN_0040e4a0
// Address: 0040e4a0
// Address Range: [[0040e4a0, 0040e4cb]]
// Convention: __cdecl
// Signature: void core_actor.cpp_CActorPropertyList_FUN_0040e4a0(CActorPropertyList * this_ptr)

#include "nocturne.h"

void __cdecl core_actor_cpp_CActorPropertyList_FUN_0040e4a0(CActorPropertyList *this_ptr)

{
  int iVar1;
  char *in_stack_00000008;
  void *in_stack_0000000c;
  uint in_stack_00000014;
  
  iVar1 = core_actor_cpp_CActorPropertyList_snag_FUN_0040e6c0
                    (this_ptr,7,in_stack_00000008,in_stack_0000000c,(void *)0x0);
  *(uint *)(iVar1 + 0x58) = 1;
  *(uint *)(iVar1 + 0x5c) = in_stack_00000014;
  return;
}
