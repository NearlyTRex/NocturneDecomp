// Name: engine_special.cpp_clear_FUN_005329a0
// Address: 005329a0
// Address Range: [[005329a0, 005329b2]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_clear_FUN_005329a0(void)

#include "nocturne.h"

int __cdecl engine_special_cpp_clear_FUN_005329a0(void)

{
  int iVar1;
  
  if (g_UseExternalRenderer == 0) {
    return 0;
  }
  iVar1 = (*g_APIDLL_clear)();
  return iVar1;
}
