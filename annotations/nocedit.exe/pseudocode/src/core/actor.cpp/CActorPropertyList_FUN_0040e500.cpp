// Name: core_actor.cpp_CActorPropertyList_FUN_0040e500
// Address: 0040e500
// Address Range: [[0040e500, 0040e591]]
// Convention: __cdecl
// Signature: void core_actor.cpp_CActorPropertyList_FUN_0040e500(void)

#include "nocturne.h"

void __cdecl core_actor_cpp_CActorPropertyList_FUN_0040e500(void)

{
  int iVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  CActorPropertyList *in_stack_00000008;
  int *in_stack_0000000c;
  int in_stack_00000010;
  char acStack_d4 [196];
  
  if (in_stack_00000010 < 0) {
    in_stack_00000010 = 10;
  }
  if (*in_stack_0000000c <= in_stack_00000010) {
    in_stack_00000010 = *in_stack_0000000c + 1;
  }
  if (10 < in_stack_00000010) {
    in_stack_00000010 = 10;
  }
  iVar2 = 0;
  if (0 < in_stack_00000010) {
    do {
      crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff28,"%s %d");
      iVar1 = core_actor_cpp_CActorPropertyList_snag_FUN_0040e6c0
                        (in_stack_00000008,0xe,acStack_d4,in_stack_0000000c,(void *)0x0);
      *(int *)(iVar1 + 0x5c) = iVar2;
      iVar2 = iVar2 + 1;
      *(uint *)(iVar1 + 0x58) = 1;
    } while (iVar2 < in_stack_00000010);
  }
  return;
}
