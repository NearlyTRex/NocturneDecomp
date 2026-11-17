// Name: wincore_wddvmem.cpp_freeRenderBuffers_FUN_005abff0
// Address: 005abff0
// Address Range: [[005abff0, 005ac03c]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_freeRenderBuffers_FUN_005abff0(void)

#include "nocturne.h"

void __cdecl wincore_wddvmem_cpp_freeRenderBuffers_FUN_005abff0(void)

{
  if (g_PTR_00629010 == (byte *)0x0) {
    if (g_PTR_02c99310 == (byte *)0x0) {
      return;
    }
  }
  else {
    debugFree(g_PTR_00629010);
    g_PTR_00629010 = (byte *)0x0;
    if (g_PTR_02c99310 == (byte *)0x0) {
      return;
    }
  }
  debugFree(g_PTR_02c99310);
  g_PTR_0071362c = (byte *)0x0;
  return;
}
