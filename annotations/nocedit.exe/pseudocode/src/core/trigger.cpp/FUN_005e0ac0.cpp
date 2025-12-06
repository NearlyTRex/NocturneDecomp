// Name: core_trigger.cpp_FUN_005e0ac0
// Address: 005e0ac0
// Address Range: [[005e0ac0, 005e0af8]]
// Convention: unknown
// Signature: undefined core_trigger.cpp_FUN_005e0ac0()

#include "nocturne.h"

/* Signature: byte actors_other_trigger.cpp_FUN_005e0ac0(uint param_1, uint
   param_2) */

int core_trigger_cpp_FUN_005e0ac0(void)

{
  int iVar1;
  int in_stack_00000004;
  char *in_stack_00000008;
  
  if ((in_stack_00000008 != (char *)0x0) && (*(int *)(in_stack_00000004 + 0x174) == 7)) {
    if (*(char *)(in_stack_00000004 + 0x304) == '\0') {
      return 1;
    }
    iVar1 = shape_edittool_cpp_wildcardStringMatch_FUN_004a6e20
                      ((char *)(in_stack_00000004 + 0x304),in_stack_00000008,0);
    return iVar1;
  }
  return 0;
}
