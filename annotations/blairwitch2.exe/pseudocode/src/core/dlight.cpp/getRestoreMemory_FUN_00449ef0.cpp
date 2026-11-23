// Name: core_dlight.cpp_getRestoreMemory_FUN_00449ef0
// Address: 00449ef0
// Address Range: [[00449ef0, 00449f57]]
// Convention: __cdecl
// Signature: void * __cdecl core_dlight_cpp_getRestoreMemory_FUN_00449ef0(int pixel_count)

#include "nocturne.h"

void * __cdecl core_dlight_cpp_getRestoreMemory_FUN_00449ef0(int pixel_count)

{
  int iVar1;
  
  if (0x300060U - pixel_count < g_ShadowRestoreAllocator) {
    g_CurrentFilename = "..\\core\\dlight.cpp";
    g_CurrentLineNumber = 164;
    core_main_c_displayErrorAndQuit_FUN_004e4500("getRestoreMemory - Need more static memory");
  }
  iVar1 = g_ShadowRestoreAllocator * 2;
  g_ShadowRestoreAllocator = g_ShadowRestoreAllocator + pixel_count + 8;
  return (void *)((uint)(g_ShadowRestoreBuffer + iVar1 + 0x10) & 0xfffffff0);
}
