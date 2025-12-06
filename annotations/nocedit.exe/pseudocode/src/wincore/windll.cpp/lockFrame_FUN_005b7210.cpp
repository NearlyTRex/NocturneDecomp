// Name: wincore_windll.cpp_lockFrame_FUN_005b7210
// Address: 005b7210
// Address Range: [[005b7210, 005b7247]]
// Convention: __cdecl
// Signature: int wincore_windll.cpp_lockFrame_FUN_005b7210(void)

#include "nocturne.h"

int __cdecl wincore_windll_cpp_lockFrame_FUN_005b7210(void)

{
  int iVar1;
  
  if (g_UseExternalRenderer == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*g_APIDLL_lockFrame)();
    if (iVar1 != 0) {
      g_SavedBitsPerPixel = g_BitsPerPixel;
      g_ExternalFrameLocked = 1;
      g_BitsPerPixel = g_ExternalBitsPerPixel;
      return 1;
    }
  }
  return iVar1;
}
