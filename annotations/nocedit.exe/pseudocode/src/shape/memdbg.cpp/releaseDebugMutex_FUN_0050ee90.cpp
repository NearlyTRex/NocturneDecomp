// Name: shape_memdbg.cpp_releaseDebugMutex_FUN_0050ee90
// Address: 0050ee90
// Address Range: [[0050ee90, 0050ee9f]]
// Convention: __cdecl
// Signature: void __cdecl shape_memdbg_cpp_releaseDebugMutex_FUN_0050ee90(void)

#include "nocturne.h"

void __cdecl shape_memdbg_cpp_releaseDebugMutex_FUN_0050ee90(void)

{
  wincore_winrun_cpp_releaseMutex_FUN_005f4050(g_FileMutex);
  return;
}
