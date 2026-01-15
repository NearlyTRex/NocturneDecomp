// Name: core_actor.cpp_CActorPropertyList_FUN_0040e3b0
// Address: 0040e3b0
// Address Range: [[0040e3b0, 0040e3db]]
// Convention: __cdecl
// Signature: void core_actor.cpp_CActorPropertyList_FUN_0040e3b0(CActorPropertyList * this_ptr)

#include "nocturne.h"

void __cdecl core_actor_cpp_CActorPropertyList_FUN_0040e3b0(CActorPropertyList *this_ptr)

{
  int iVar1;
  char *in_stack_00000008;
  void *in_stack_0000000c;
  uint in_stack_00000010;
  
  iVar1 = core_actor_cpp_CActorPropertyList_snag_FUN_0040e6c0
                    (this_ptr,6,in_stack_00000008,in_stack_0000000c,(void *)0x0);
  *(uint *)(iVar1 + 0x58) = 1;
  *(uint *)(iVar1 + 0x5c) = in_stack_00000010;
  return;
}
