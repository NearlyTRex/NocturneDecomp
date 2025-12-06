// Name: core_actor.cpp_CActorPropertyList_FUN_0040e4d0
// Address: 0040e4d0
// Address Range: [[0040e4d0, 0040e4f4]]
// Convention: __cdecl
// Signature: void core_actor.cpp_CActorPropertyList_FUN_0040e4d0(CActorPropertyList * this_ptr)

#include "nocturne.h"

void __cdecl core_actor_cpp_CActorPropertyList_FUN_0040e4d0(CActorPropertyList *this_ptr)

{
  int iVar1;
  char *in_stack_00000008;
  void *in_stack_0000000c;
  
  iVar1 = core_actor_cpp_CActorPropertyList_snag_FUN_0040e6c0
                    (this_ptr,0xd,in_stack_00000008,in_stack_0000000c,(void *)0x0);
  *(uint *)(iVar1 + 0x58) = 1;
  return;
}
