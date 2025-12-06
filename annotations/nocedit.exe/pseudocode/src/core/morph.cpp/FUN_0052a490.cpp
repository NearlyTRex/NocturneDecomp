// Name: core_morph.cpp_FUN_0052a490
// Address: 0052a490
// Address Range: [[0052a490, 0052a4b7]]
// Convention: unknown
// Signature: undefined core_morph.cpp_FUN_0052a490()

#include "nocturne.h"

int core_morph_cpp_FUN_0052a490(void)

{
  int *piVar1;
  int iVar2;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  
  iVar2 = 0;
  if (0 < in_stack_00000004) {
    do {
      piVar1 = (int *)(in_stack_00000008 + 4);
      in_stack_00000004 = in_stack_00000004 + -1;
      in_stack_00000008 = in_stack_00000008 + in_stack_0000000c;
      iVar2 = iVar2 + *piVar1 + -2;
    } while (0 < in_stack_00000004);
  }
  return iVar2;
}
