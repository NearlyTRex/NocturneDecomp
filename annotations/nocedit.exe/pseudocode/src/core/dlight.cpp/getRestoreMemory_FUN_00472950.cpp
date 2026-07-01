// Name: core_dlight.cpp_getRestoreMemory_FUN_00472950
// Address: 00472950
// Address Range: [[00472950, 004729b7]]
// Convention: __cdecl
// Signature: int __cdecl core_dlight_cpp_getRestoreMemory_FUN_00472950(int pixel_count)

#include "nocturne.h"

int __cdecl core_dlight_cpp_getRestoreMemory_FUN_00472950(int pixel_count)

{
  int iVar1;
  
  if (0x300060U - pixel_count < g_ShadowRestoreAllocator) {
    g_CurrentFilename = "..\\core\\dlight.cpp";
    g_CurrentLineNumber = 163;
    core_main_c_displayErrorAndQuit_FUN_00506f10("getRestoreMemory - Need more static memory");
  }
  iVar1 = g_ShadowRestoreAllocator * 2;
  g_ShadowRestoreAllocator = g_ShadowRestoreAllocator + pixel_count + 8;
  return (uint)(g_ShadowRestoreBuffer + iVar1 + 0x10) & 0xfffffff0;
}
