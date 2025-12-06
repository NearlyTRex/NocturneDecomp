// Name: shape_memdbg.cpp_acquireDebugMutex_FUN_0050ee5e
// Address: 0050ee5e
// Address Range: [[0050ee5e, 0050ee8d]]
// Convention: __cdecl
// Signature: void shape_memdbg.cpp_acquireDebugMutex_FUN_0050ee5e(void)

#include "nocturne.h"

void __cdecl shape_memdbg_cpp_acquireDebugMutex_FUN_0050ee5e(void)

{
  if (g_RecursiveCallFlag == 0) {
    if (g_FileMutex == (HANDLE)0x0) {
      g_FileMutex = wincore_winrun_cpp_createMutex_FUN_005f3fe0();
    }
    wincore_winrun_cpp_waitForMutex_FUN_005f3ff0(g_FileMutex);
  }
  return;
}
