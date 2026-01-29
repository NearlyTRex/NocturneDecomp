// Name: core_msnedit.cpp_FUN_00538f40
// Address: 00538f40
// Address Range: [[00538f40, 00538f8d]]
// Convention: unknown
// Signature: int core_msnedit_cpp_FUN_00538f40(void)

#include "nocturne.h"

/* Signature: byte core_msnedit.cpp_FUN_00538f40(uint param_1, uint param_2) */

int core_msnedit_cpp_FUN_00538f40(void)

{
  int iVar1;
  int iVar2;
  char *str1;
  int in_stack_00000004;
  char *in_stack_00000008;
  
  iVar2 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0x144)) {
    str1 = (char *)(in_stack_00000004 + 0x148);
    do {
      iVar1 = stricmp(str1,in_stack_00000008);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      str1 = str1 + 0x100;
    } while (iVar2 < *(int *)(in_stack_00000004 + 0x144));
  }
  return -1;
}
