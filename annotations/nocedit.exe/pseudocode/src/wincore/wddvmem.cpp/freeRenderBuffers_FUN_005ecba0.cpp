// Name: wincore_wddvmem.cpp_freeRenderBuffers_FUN_005ecba0
// Address: 005ecba0
// Address Range: [[005ecba0, 005ecc00]]
// Convention: __cdecl
// Signature: void wincore_wddvmem.cpp_freeRenderBuffers_FUN_005ecba0(void)

#include "nocturne.h"

void __cdecl wincore_wddvmem_cpp_freeRenderBuffers_FUN_005ecba0(void)

{
  if (g_BackBuffer == (void *)0x0) {
    if (g_SoftwareFrameBuffer == (void *)0x0) {
      return;
    }
  }
  else {
    shape_memdbg_cpp_debugFree_FUN_0050f460(g_BackBuffer,"..\\wincore\\wddvmem.cpp",0xff);
    g_BackBuffer = (void *)0x0;
    if (g_SoftwareFrameBuffer == (void *)0x0) {
      return;
    }
  }
  shape_memdbg_cpp_debugFree_FUN_0050f460
            (g_SoftwareFrameBuffer,"..\\wincore\\wddvmem.cpp",0x107);
  g_SoftwareZBuffer = (void *)0x0;
  return;
}
