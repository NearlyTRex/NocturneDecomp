// Name: core_actor.cpp_CActorPropertyList_FUN_0040e220
// Address: 0040e220
// Address Range: [[0040e220, 0040e25e]]
// Convention: __cdecl
// Signature: void core_actor.cpp_CActorPropertyList_FUN_0040e220(CActorPropertyList * this_ptr)

#include "nocturne.h"

void __cdecl core_actor_cpp_CActorPropertyList_FUN_0040e220(CActorPropertyList *this_ptr)

{
  int iVar1;
  char *in_stack_00000008;
  void *in_stack_0000000c;
  uint in_stack_00000014;
  void *in_stack_00000018;
  
  iVar1 = core_actor_cpp_CActorPropertyList_snag_FUN_0040e6c0
                    (this_ptr,0,in_stack_00000008,in_stack_0000000c,in_stack_00000018);
  *(uint *)(iVar1 + 0x5c) = 1;
  *(uint *)(iVar1 + 0x6c) = 1;
  *(uint *)(iVar1 + 0x60) = in_stack_00000014;
  *(void **)(iVar1 + 100) = in_stack_00000018;
  return;
}
