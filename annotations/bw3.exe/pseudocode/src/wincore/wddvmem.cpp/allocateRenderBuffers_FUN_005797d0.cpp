// Name: wincore_wddvmem.cpp_allocateRenderBuffers_FUN_005797d0
// Address: 005797d0
// Address Range: [[005797d0, 00579895]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_allocateRenderBuffers_FUN_005797d0(void)

#include "nocturne.h"

void __cdecl wincore_wddvmem_cpp_allocateRenderBuffers_FUN_005797d0(void)

{
  g_PTR_0060b010 =
       malloc
                 (((int)((g_INT_005fba20 + (g_INT_005fba20 >> 0x1f) * -8) -
                        (uint)((g_INT_005fba20 >> 0x1f) << 2 < 0)) >> 3) *
                  g_INT_005fba18 * g_INT_005fba1c);
  if (g_PTR_0060b010 == (byte *)0x0) {
    g_CurrentFilename = "..\\wincore\\wddvmem.cpp";
    g_CurrentLineNumber = 237;
    core_main_c_displayErrorAndQuit_FUN_004e4330("WDDVMEM: Fatal - out of frame buffer memory");
  }
  g_PTR_02d0bcf0 = malloc(g_INT_005fba18 * g_INT_005fba1c * 4 + 0x40);
  if (g_PTR_02d0bcf0 != (byte *)0x0) {
    g_SoftwareZBuffer = (byte *)((uint)(g_PTR_02d0bcf0 + 0x10) & 0xfffffff0);
    return;
  }
  g_CurrentFilename = "..\\wincore\\wddvmem.cpp";
  g_CurrentLineNumber = 242;
  core_main_c_displayErrorAndQuit_FUN_004e4330("WDDVMEM: Fatal - out of Z buffer memory");
  g_SoftwareZBuffer = (byte *)((uint)(g_PTR_02d0bcf0 + 0x10) & 0xfffffff0);
  return;
}
