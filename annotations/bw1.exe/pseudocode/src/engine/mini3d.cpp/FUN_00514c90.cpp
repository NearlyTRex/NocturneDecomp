// Name: engine_mini3d.cpp_FUN_00514c90
// Address: 00514c90
// Address Range: [[00514c90, 00514cef]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_00514c90(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_00514c90(int param_1)

{
  void *pvVar1;
  uint uVar2;
  
  pvVar1 = malloc(param_1 * 0x20 + 0x20);
  if (pvVar1 != (void *)0x0) {
    uVar2 = (int)pvVar1 + 0x20U & 0xffffffe0;
    *(char *)(uVar2 - 1) = (char)uVar2 - (char)pvVar1;
    return;
  }
  _DAT_01d1d400 = "..\\engine\\mini3d.cpp";
  _DAT_01d1d404 = 0xddf;
  core_main_c_FUN_005030e0("CMini3D::allocVertexBuffer - Allocation of %d vertex failed",param_1);
  uRam0000001f = 0x20;
  return;
}
