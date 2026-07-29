// Name: engine_special.cpp_beginScene_FUN_005b7280
// Address: 005b7280
// Address Range: [[005b7280, 005b7292]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_beginScene_FUN_005b7280(void)

#include "nocturne.h"

int __cdecl engine_special_cpp_beginScene_FUN_005b7280(void)

{
  int iVar1;
  
  if (g_UseExternalRenderer == 0) {
    return 0;
  }
  iVar1 = (*g_APIDLL_beginScene)();
  return iVar1;
}
