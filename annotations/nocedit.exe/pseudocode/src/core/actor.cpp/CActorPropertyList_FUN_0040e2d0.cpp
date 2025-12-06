// Name: core_actor.cpp_CActorPropertyList_FUN_0040e2d0
// Address: 0040e2d0
// Address Range: [[0040e2d0, 0040e2f4]]
// Convention: __cdecl
// Signature: void core_actor.cpp_CActorPropertyList_FUN_0040e2d0(CActorPropertyList * this_ptr)

#include "nocturne.h"

void __cdecl core_actor_cpp_CActorPropertyList_FUN_0040e2d0(CActorPropertyList *this_ptr)

{
  int iVar1;
  char *in_stack_00000008;
  void *in_stack_0000000c;
  
  iVar1 = core_actor_cpp_CActorPropertyList_snag_FUN_0040e6c0
                    (this_ptr,8,in_stack_00000008,in_stack_0000000c,(void *)0x0);
  *(uint *)(iVar1 + 0x5c) = 0;
  return;
}
