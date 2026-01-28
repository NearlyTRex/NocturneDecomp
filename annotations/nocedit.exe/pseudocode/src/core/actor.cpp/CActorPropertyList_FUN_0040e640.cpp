// Name: core_actor.cpp_CActorPropertyList_FUN_0040e640
// Address: 0040e640
// Address Range: [[0040e640, 0040e66b]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CActorPropertyList_FUN_0040e640(CActorPropertyList *this_ptr)

#include "nocturne.h"

void __cdecl core_actor_cpp_CActorPropertyList_FUN_0040e640(CActorPropertyList *this_ptr)

{
  int iVar1;
  char *in_stack_00000008;
  uint in_stack_0000000c;
  uint in_stack_00000010;
  void *in_stack_00000014;
  
  iVar1 = core_actor_cpp_CActorPropertyList_snag_FUN_0040e6c0
                    (this_ptr,0xf,in_stack_00000008,in_stack_00000014,(void *)0x0);
  *(uint *)(iVar1 + 0x5c) = in_stack_0000000c;
  *(uint *)(iVar1 + 0x60) = in_stack_00000010;
  return;
}
