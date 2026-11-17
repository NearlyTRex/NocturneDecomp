// Name: engine_special.cpp_clear_FUN_00566060
// Address: 00566060
// Address Range: [[00566060, 00566072]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_clear_FUN_00566060(void)

#include "nocturne.h"

int __cdecl engine_special_cpp_clear_FUN_00566060(void)

{
  int iVar1;
  
  if (g_INT_01c6cee8 == 0) {
    return 0;
  }
  iVar1 = (*(code *)g_APIDLL_clear)();
  return iVar1;
}
