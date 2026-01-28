// Name: core_actor.cpp_CActorPropertyList_FUN_0040e160
// Address: 0040e160
// Address Range: [[0040e160, 0040e190]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CActorPropertyList_FUN_0040e160(CActorPropertyList *this_ptr)

#include "nocturne.h"

void __cdecl core_actor_cpp_CActorPropertyList_FUN_0040e160(CActorPropertyList *this_ptr)

{
  int iVar1;
  char *in_stack_00000008;
  void *in_stack_0000000c;
  void *in_stack_00000010;
  
  iVar1 = core_actor_cpp_CActorPropertyList_snag_FUN_0040e6c0
                    (this_ptr,1,in_stack_00000008,in_stack_0000000c,in_stack_00000010);
  *(uint *)(iVar1 + 0x5c) = 0;
  *(uint *)(iVar1 + 0x6c) = 0x3f800000;
  return;
}
