// Name: core_skeledit.cpp_FUN_0058ac30
// Address: 0058ac30
// Address Range: [[0058ac30, 0058ac7c]]
// Convention: unknown
// Signature: int core_skeledit_cpp_FUN_0058ac30(void)

#include "nocturne.h"

int core_skeledit_cpp_FUN_0058ac30(void)

{
  int iVar1;
  int iVar2;
  int *str1;
  int *in_stack_00000004;
  char *in_stack_00000008;
  
  __STK(0x1c);
  iVar2 = 0;
  if (0 < *in_stack_00000004) {
    str1 = in_stack_00000004 + 1;
    do {
      iVar1 = stricmp((char *)str1,in_stack_00000008);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      str1 = str1 + 0x21;
    } while (iVar2 < *in_stack_00000004);
  }
  return -1;
}
