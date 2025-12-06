// Name: core_actor.cpp_CActorPropertyList_FUN_0040e670
// Address: 0040e670
// Address Range: [[0040e670, 0040e699]]
// Convention: __cdecl
// Signature: void core_actor.cpp_CActorPropertyList_FUN_0040e670(CActorPropertyList * this_ptr)

#include "nocturne.h"

void __cdecl core_actor_cpp_CActorPropertyList_FUN_0040e670(CActorPropertyList *this_ptr)

{
  int iVar1;
  char *in_stack_00000008;
  uint in_stack_00000010;
  uint in_stack_00000014;
  
  iVar1 = core_actor_cpp_CActorPropertyList_snag_FUN_0040e6c0
                    (this_ptr,0x11,in_stack_00000008,(void *)0x0,(void *)0x0);
  *(uint *)(iVar1 + 0x68) = in_stack_00000010;
  *(uint *)(iVar1 + 0xe8) = in_stack_00000014;
  return;
}
