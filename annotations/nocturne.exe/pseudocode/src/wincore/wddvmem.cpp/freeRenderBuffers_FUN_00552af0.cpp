// Name: wincore_wddvmem.cpp_freeRenderBuffers_FUN_00552af0
// Address: 00552af0
// Address Range: [[00552af0, 00552b3c]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_freeRenderBuffers_FUN_00552af0(void)

#include "nocturne.h"

void __cdecl wincore_wddvmem_cpp_freeRenderBuffers_FUN_00552af0(void)

{
  if (g_BackBuffer == (void *)0x0) {
    if (g_SoftwareFrameBuffer == (void *)0x0) {
      return;
    }
  }
  else {
    free(g_BackBuffer);
    g_BackBuffer = (void *)0x0;
    if (g_SoftwareFrameBuffer == (void *)0x0) {
      return;
    }
  }
  free(g_SoftwareFrameBuffer);
  g_SoftwareZBuffer = (void *)0x0;
  return;
}
