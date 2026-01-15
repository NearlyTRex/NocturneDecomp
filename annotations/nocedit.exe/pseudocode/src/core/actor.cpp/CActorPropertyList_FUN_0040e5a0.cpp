// Name: core_actor.cpp_CActorPropertyList_FUN_0040e5a0
// Address: 0040e5a0
// Address Range: [[0040e5a0, 0040e631]]
// Convention: __cdecl
// Signature: int core_actor.cpp_CActorPropertyList_FUN_0040e5a0(CActorPropertyList * this_ptr)

#include "nocturne.h"

int __cdecl core_actor_cpp_CActorPropertyList_FUN_0040e5a0(CActorPropertyList *this_ptr)

{
  int in_EAX;
  int iVar1;
  int *in_stack_0000000c;
  int in_stack_00000010;
  char local_d8 [200];
  
  if (in_stack_00000010 < 0) {
    in_stack_00000010 = 5;
  }
  if (*in_stack_0000000c <= in_stack_00000010) {
    in_stack_00000010 = *in_stack_0000000c + 1;
  }
  if (5 < in_stack_00000010) {
    in_stack_00000010 = 5;
  }
  iVar1 = 0;
  if (0 < in_stack_00000010) {
    do {
      crt_stdio_c_sprintf_FUN_005fdbd0(local_d8,"%s %d");
      in_EAX = core_actor_cpp_CActorPropertyList_snag_FUN_0040e6c0
                         (this_ptr,0x10,local_d8,in_stack_0000000c,(void *)0x0);
      *(int *)(in_EAX + 0x5c) = iVar1;
      iVar1 = iVar1 + 1;
    } while (iVar1 < in_stack_00000010);
  }
  return in_EAX;
}
