// Name: wincore_wddvmem.cpp_FUN_00552a20
// Address: 00552a20
// Address Range: [[00552a20, 00552ae5]]
// Convention: unknown
// Signature: void wincore_wddvmem_cpp_FUN_00552a20(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void wincore_wddvmem_cpp_FUN_00552a20(void)

{
  g_BackBuffer = malloc
                           (((int)((g_BitsPerPixel + (g_BitsPerPixel >> 0x1f) * -8) -
                                  (uint)((g_BitsPerPixel >> 0x1f) << 2 < 0)) >> 3) *
                            g_WindowWidth * g_WindowHeight);
  if (g_BackBuffer == (void *)0x0) {
    g_CurrentFilename = "..\\wincore\\wddvmem.cpp";
    g_CurrentLineNumber = 234;
    core_main_c_displayErrorAndQuit_FUN_004c8440("WDDVMEM: Fatal - out of frame buffer memory");
  }
  g_SoftwareFrameBuffer =
       malloc(g_WindowWidth * g_WindowHeight * 4 + 0x40);
  if (g_SoftwareFrameBuffer != (void *)0x0) {
    g_SoftwareZBuffer = (void *)((int)g_SoftwareFrameBuffer + 0x10U & 0xfffffff0);
    return;
  }
  g_CurrentFilename = "..\\wincore\\wddvmem.cpp";
  g_CurrentLineNumber = 239;
  core_main_c_displayErrorAndQuit_FUN_004c8440("WDDVMEM: Fatal - out of Z buffer memory");
  g_SoftwareZBuffer = (void *)((int)g_SoftwareFrameBuffer + 0x10U & 0xfffffff0);
  return;
}
