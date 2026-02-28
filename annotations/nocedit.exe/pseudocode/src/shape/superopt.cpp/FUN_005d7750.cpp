// Name: shape_superopt.cpp_FUN_005d7750
// Address: 005d7750
// Address Range: [[005d7750, 005d7792]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_FUN_005d7750(void)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_FUN_005d7750(void)

{
  int iVar1;
  int iVar2;
  char (*str1) [80];
  char *in_stack_00000004;
  
  iVar2 = 0;
  if (0 < g_TriListTextureCount) {
    str1 = g_TriListTextureNames;
    do {
      iVar1 = _stricmp(*str1,in_stack_00000004);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      str1 = str1 + 1;
    } while (iVar2 < g_TriListTextureCount);
  }
  return -1;
}
