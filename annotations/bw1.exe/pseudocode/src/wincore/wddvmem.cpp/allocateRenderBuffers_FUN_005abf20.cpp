// Name: wincore_wddvmem.cpp_allocateRenderBuffers_FUN_005abf20
// Address: 005abf20
// Address Range: [[005abf20, 005abfe5]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_allocateRenderBuffers_FUN_005abf20(void)

#include "nocturne.h"

void __cdecl wincore_wddvmem_cpp_allocateRenderBuffers_FUN_005abf20(void)

{
  g_PTR_00629010 =
       malloc
                 (((int)((g_INT_0061b4a0 + (g_INT_0061b4a0 >> 0x1f) * -8) -
                        (uint)((g_INT_0061b4a0 >> 0x1f) << 2 < 0)) >> 3) *
                  g_INT_0061b498 * g_INT_0061b49c);
  if (g_PTR_00629010 == (byte *)0x0) {
    g_CurrentFilename = "..\\wincore\\wddvmem.cpp";
    g_CurrentLineNumber = 237;
    core_main_c_displayErrorAndQuit_FUN_005030e0("WDDVMEM: Fatal - out of frame buffer memory");
  }
  g_PTR_02c99310 = malloc(g_INT_0061b498 * g_INT_0061b49c * 4 + 0x40);
  if (g_PTR_02c99310 != (byte *)0x0) {
    g_SoftwareZBuffer = (byte *)((uint)(g_PTR_02c99310 + 0x10) & 0xfffffff0);
    return;
  }
  g_CurrentFilename = "..\\wincore\\wddvmem.cpp";
  g_CurrentLineNumber = 242;
  core_main_c_displayErrorAndQuit_FUN_005030e0("WDDVMEM: Fatal - out of Z buffer memory");
  g_SoftwareZBuffer = (byte *)((uint)(g_PTR_02c99310 + 0x10) & 0xfffffff0);
  return;
}
