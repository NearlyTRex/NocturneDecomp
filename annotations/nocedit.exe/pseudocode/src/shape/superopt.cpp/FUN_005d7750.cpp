// Name: shape_superopt.cpp_FUN_005d7750
// Address: 005d7750
// Address Range: [[005d7750, 005d7792]]
// Convention: unknown
// Signature: int shape_superopt_cpp_FUN_005d7750(void)

#include "nocturne.h"

int shape_superopt_cpp_FUN_005d7750(void)

{
  int iVar1;
  int iVar2;
  char *str1;
  char *in_stack_00000004;
  
  iVar2 = 0;
  if (0 < DAT_03f6bbe8) {
    str1 = &DAT_03f6bbf0;
    do {
      iVar1 = stricmp(str1,in_stack_00000004);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      str1 = str1 + 0x50;
    } while (iVar2 < DAT_03f6bbe8);
  }
  return -1;
}
