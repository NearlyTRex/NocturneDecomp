// Name: core_msnedit.cpp_FUN_00538ea0
// Address: 00538ea0
// Address Range: [[00538ea0, 00538f3a]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_FUN_00538ea0()

#include "nocturne.h"

/* Signature: byte core_msnedit.cpp_FUN_00538ea0(uint param_1, uint param_2) */

void core_msnedit_cpp_FUN_00538ea0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  int in_stack_00000004;
  int in_stack_00000008;
  int iStack_250c;
  int aiStack_2508 [26];
  uint auStack_24a0 [2341];
  
  for (iVar1 = *(int *)(in_stack_00000004 + 0x548); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x14c)) {
    if (iVar1 != in_stack_00000008) {
      (**(code **)(*(int *)(iVar1 + 0x154) + 0xcc))();
      core_actor_cpp_FUN_0040e130();
      (**(code **)(*(int *)(iVar1 + 0x154) + 0xd4))();
      iVar3 = 0;
      if (0 < iStack_250c) {
        iVar2 = 0;
        do {
          if ((*(int *)((int)aiStack_2508 + iVar2) == 5) &&
             (in_stack_00000008 == **(int **)((int)auStack_24a0 + iVar2))) {
            **(int **)((int)auStack_24a0 + iVar2) = 0;
          }
          iVar3 = iVar3 + 1;
          iVar2 = iVar2 + 0xec;
        } while (iVar3 < iStack_250c);
      }
    }
  }
  return;
}
