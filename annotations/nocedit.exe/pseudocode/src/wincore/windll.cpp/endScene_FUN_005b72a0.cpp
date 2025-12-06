// Name: wincore_windll.cpp_endScene_FUN_005b72a0
// Address: 005b72a0
// Address Range: [[005b72a0, 005b72b2]]
// Convention: __cdecl
// Signature: int wincore_windll.cpp_endScene_FUN_005b72a0(void)

#include "nocturne.h"

int __cdecl wincore_windll_cpp_endScene_FUN_005b72a0(void)

{
  int iVar1;
  
  if (g_UseExternalRenderer == 0) {
    return 0;
  }
  iVar1 = (*g_APIDLL_endScene)();
  return iVar1;
}
