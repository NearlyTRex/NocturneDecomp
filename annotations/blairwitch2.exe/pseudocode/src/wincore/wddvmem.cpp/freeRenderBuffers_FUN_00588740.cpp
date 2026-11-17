// Name: wincore_wddvmem.cpp_freeRenderBuffers_FUN_00588740
// Address: 00588740
// Address Range: [[00588740, 0058878c]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_freeRenderBuffers_FUN_00588740(void)

#include "nocturne.h"

void __cdecl wincore_wddvmem_cpp_freeRenderBuffers_FUN_00588740(void)

{
  if (g_PTR_00622010 == (byte *)0x0) {
    if (g_PTR_02661af0 == (byte *)0x0) {
      return;
    }
  }
  else {
    debugFree(g_PTR_00622010);
    g_PTR_00622010 = (byte *)0x0;
    if (g_PTR_02661af0 == (byte *)0x0) {
      return;
    }
  }
  debugFree(g_PTR_02661af0);
  g_PTR_0070c62c = (byte *)0x0;
  return;
}
