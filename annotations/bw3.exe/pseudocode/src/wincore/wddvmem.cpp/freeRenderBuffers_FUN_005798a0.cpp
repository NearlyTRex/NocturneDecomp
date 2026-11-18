// Name: wincore_wddvmem.cpp_freeRenderBuffers_FUN_005798a0
// Address: 005798a0
// Address Range: [[005798a0, 005798ec]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_freeRenderBuffers_FUN_005798a0(void)

#include "nocturne.h"

void __cdecl wincore_wddvmem_cpp_freeRenderBuffers_FUN_005798a0(void)

{
  if (g_PTR_0060b010 == (byte *)0x0) {
    if (g_PTR_02d0bcf0 == (byte *)0x0) {
      return;
    }
  }
  else {
    debugFree(g_PTR_0060b010);
    g_PTR_0060b010 = (byte *)0x0;
    if (g_PTR_02d0bcf0 == (byte *)0x0) {
      return;
    }
  }
  debugFree(g_PTR_02d0bcf0);
  g_SoftwareZBuffer = (byte *)0x0;
  return;
}
