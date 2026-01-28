// Name: core_dest.cpp_FUN_0046fd50
// Address: 0046fd50
// Address Range: [[0046fd50, 0046fda2]]
// Convention: unknown
// Signature: undefined4 core_dest_cpp_FUN_0046fd50(void)

#include "nocturne.h"

/* Signature: byte actors_other_dest.cpp_FUN_0046fd50(uint param_1, uint param_2)
    */

uint core_dest_cpp_FUN_0046fd50(void)

{
  int iVar1;
  int in_stack_00000004;
  CDemonActor *in_stack_00000008;
  
  if (*(int *)(in_stack_00000004 + 0x184) == 0) {
    if (*(char *)(in_stack_00000004 + 0x15c) == '\0') {
      if (in_stack_00000008 == *(CDemonActor **)(in_stack_00000004 + 0x158)) {
        return 1;
      }
    }
    else {
      iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0
                        (in_stack_00000008,(char *)(in_stack_00000004 + 0x15c));
      if (iVar1 != 0) {
        *(CDemonActor **)(in_stack_00000004 + 0x158) = in_stack_00000008;
        return 1;
      }
    }
  }
  return 0;
}
