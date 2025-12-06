// Name: core_skeledit.cpp_FUN_0058ac30
// Address: 0058ac30
// Address Range: [[0058ac30, 0058ac7c]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_0058ac30()

#include "nocturne.h"

int core_skeledit_cpp_FUN_0058ac30(void)

{
  int iVar1;
  int iVar2;
  int *str1;
  int *in_stack_0000000c;
  char *in_stack_00000010;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x1c);
  iVar2 = 0;
  if (0 < *in_stack_0000000c) {
    str1 = in_stack_0000000c + 1;
    do {
      iVar1 = crt_string_c_stricmp_FUN_005fe7f0((char *)str1,in_stack_00000010);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      str1 = str1 + 0x21;
    } while (iVar2 < *in_stack_0000000c);
  }
  return -1;
}
