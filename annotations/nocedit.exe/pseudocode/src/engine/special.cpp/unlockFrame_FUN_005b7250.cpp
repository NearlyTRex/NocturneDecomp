// Name: engine_special.cpp_unlockFrame_FUN_005b7250
// Address: 005b7250
// Address Range: [[005b7250, 005b727b]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_unlockFrame_FUN_005b7250(int clear_lock_flag)

#include "nocturne.h"

int __cdecl engine_special_cpp_unlockFrame_FUN_005b7250(int clear_lock_flag)

{
  int iVar1;
  
  if (g_UseExternalRenderer != 0) {
    g_BitsPerPixel = g_SavedBitsPerPixel;
    if (clear_lock_flag != 0) {
      g_ExternalFrameLocked = 0;
    }
    iVar1 = (*g_APIDLL_unlockFrame)();
    return iVar1;
  }
  return 0;
}
