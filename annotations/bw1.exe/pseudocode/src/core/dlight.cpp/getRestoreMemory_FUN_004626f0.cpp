// Name: core_dlight.cpp_getRestoreMemory_FUN_004626f0
// Address: 004626f0
// Address Range: [[004626f0, 00462757]]
// Convention: __cdecl
// Signature: void * __cdecl core_dlight_cpp_getRestoreMemory_FUN_004626f0(int pixel_count)

#include "nocturne.h"

void * __cdecl core_dlight_cpp_getRestoreMemory_FUN_004626f0(int pixel_count)

{
  int iVar1;
  
  if (0x300060U - pixel_count < g_ShadowRestoreAllocator) {
    g_CurrentFilename = "..\\core\\dlight.cpp";
    g_CurrentLineNumber = 163;
    core_main_c_displayErrorAndQuit_FUN_005030e0("getRestoreMemory - Need more static memory");
  }
  iVar1 = g_ShadowRestoreAllocator * 2;
  g_ShadowRestoreAllocator = g_ShadowRestoreAllocator + pixel_count + 8;
  return (void *)((uint)(g_ShadowRestoreBuffer + iVar1 + 0x10) & 0xfffffff0);
}
