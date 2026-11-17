// Name: wincore_wddvmem.cpp_allocateRenderBuffers_FUN_00588670
// Address: 00588670
// Address Range: [[00588670, 00588735]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_allocateRenderBuffers_FUN_00588670(void)

#include "nocturne.h"

void __cdecl wincore_wddvmem_cpp_allocateRenderBuffers_FUN_00588670(void)

{
  g_PTR_00622010 =
       malloc
                 (((int)((g_INT_006141c0 + (g_INT_006141c0 >> 0x1f) * -8) -
                        (uint)((g_INT_006141c0 >> 0x1f) << 2 < 0)) >> 3) *
                  g_INT_006141b8 * g_INT_006141bc);
  if (g_PTR_00622010 == (byte *)0x0) {
    g_CHAR_PTR_01d046a0 = "..\\wincore\\wddvmem.cpp";
    g_INT_01d046a4 = 0xea;
    core_main_c_displayErrorAndQuit_FUN_004e4500("WDDVMEM: Fatal - out of frame buffer memory");
  }
  g_PTR_02661af0 = malloc(g_INT_006141b8 * g_INT_006141bc * 4 + 0x40);
  if (g_PTR_02661af0 != (byte *)0x0) {
    g_PTR_0070c62c = (byte *)((uint)(g_PTR_02661af0 + 0x10) & 0xfffffff0);
    return;
  }
  g_CHAR_PTR_01d046a0 = "..\\wincore\\wddvmem.cpp";
  g_INT_01d046a4 = 0xef;
  core_main_c_displayErrorAndQuit_FUN_004e4500("WDDVMEM: Fatal - out of Z buffer memory");
  g_PTR_0070c62c = (byte *)((uint)(g_PTR_02661af0 + 0x10) & 0xfffffff0);
  return;
}
