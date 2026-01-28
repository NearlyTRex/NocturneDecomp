// Name: wincore_windll.cpp_unlockFrame_FUN_005b7250
// Address: 005b7250
// Address Range: [[005b7250, 005b727b]]
// Convention: __cdecl
// Signature: void __cdecl wincore_windll_cpp_unlockFrame_FUN_005b7250(int clear_lock_flag)

#include "nocturne.h"

void __cdecl wincore_windll_cpp_unlockFrame_FUN_005b7250(int clear_lock_flag)

{
  if (g_UseExternalRenderer != 0) {
    g_BitsPerPixel = g_SavedBitsPerPixel;
    if (clear_lock_flag != 0) {
      g_ExternalFrameLocked = 0;
    }
    (*g_APIDLL_unlockFrame)();
    return;
  }
  return;
}
