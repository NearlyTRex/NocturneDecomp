// Name: wincore_wddvmem.cpp_allocateRenderBuffers_FUN_005ecac0
// Address: 005ecac0
// MANUAL RECONSTRUCTION
// Address Range: [[005ecac0, 005ecb99]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_allocateRenderBuffers_FUN_005ecac0(void)

#include "nocturne.h"

void __cdecl wincore_wddvmem_cpp_allocateRenderBuffers_FUN_005ecac0(void)

{
  g_BackBuffer = shape_memdbg_cpp_debugMalloc_FUN_0050f250
                           (g_BitsPerPixel / 8 *
                            g_WindowWidth * g_WindowHeight,"..\\wincore\\wddvmem.cpp",233);
  if (g_BackBuffer == (void *)0x0) {
    g_CurrentFilename = "..\\wincore\\wddvmem.cpp";
    g_CurrentLineNumber = 234;
    core_main_c_displayErrorAndQuit_FUN_00506f10("WDDVMEM: Fatal - out of frame buffer memory");
  }
  g_SoftwareFrameBuffer =
       shape_memdbg_cpp_debugMalloc_FUN_0050f250
                 (g_WindowWidth * g_WindowHeight * 4 + 0x40,"..\\wincore\\wddvmem.cpp",238);
  if (g_SoftwareFrameBuffer == (void *)0x0) {
    g_CurrentFilename = "..\\wincore\\wddvmem.cpp";
    g_CurrentLineNumber = 239;
    core_main_c_displayErrorAndQuit_FUN_00506f10("WDDVMEM: Fatal - out of Z buffer memory");
  }
  g_SoftwareZBuffer = (void *)(((uintptr_t)g_SoftwareFrameBuffer + 0x10) & ~(uintptr_t)0xf);
  return;
}
