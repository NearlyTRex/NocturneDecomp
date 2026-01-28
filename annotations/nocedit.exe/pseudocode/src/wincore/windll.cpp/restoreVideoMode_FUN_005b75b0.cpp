// Name: wincore_windll.cpp_restoreVideoMode_FUN_005b75b0
// Address: 005b75b0
// Address Range: [[005b75b0, 005b75d7]]
// Convention: __cdecl
// Signature: int __cdecl wincore_windll_cpp_restoreVideoMode_FUN_005b75b0(void)

#include "nocturne.h"

int __cdecl wincore_windll_cpp_restoreVideoMode_FUN_005b75b0(void)

{
  int iVar1;
  
  if ((g_UseExternalRenderer != 0) &&
     (g_UseExternalRenderer = 0, g_APIDLL_restoreVideoMode != (APIDLL_restoreVideoMode *)0x0)) {
    iVar1 = (*g_APIDLL_restoreVideoMode)();
    return iVar1;
  }
  return 0;
}
