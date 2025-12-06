// Name: core_morph.cpp_FUN_0052bb80
// Address: 0052bb80
// Address Range: [[0052bb80, 0052bcaa]]
// Convention: unknown
// Signature: undefined core_morph.cpp_FUN_0052bb80()

#include "nocturne.h"

/* Signature: byte core_morph.cpp_FUN_0052bb80(uint param_1, uint param_2) */

void core_morph_cpp_FUN_0052bb80(void)

{
  int iVar1;
  int x;
  int y;
  int in_stack_00000004;
  int in_stack_0000000c;
  uint local_14;
  
  if ((*(byte *)(in_stack_00000004 + 0x13) & 0x80) == 0) {
    iVar1 = *(int *)(in_stack_00000004 + 0x14) >> 0x10;
    x = *(int *)(in_stack_00000004 + 0x10) >> 0x10;
    if ((((-1 < x) && (x < g_WindowWidth)) && (-1 < iVar1)) && (iVar1 < g_WindowHeight)) {
      engine_2d_c_plotPixel_FUN_00401140(x,iVar1);
    }
    if (0 < in_stack_0000000c) {
      in_stack_0000000c = local_14 + in_stack_0000000c;
      y = local_14 + 1;
      iVar1 = x;
      do {
        local_14 = local_14 + -1;
        iVar1 = iVar1 + -1;
        x = x + 1;
        if (((-1 < iVar1) && (iVar1 < g_WindowWidth)) &&
           ((-1 < local_14 && (local_14 < g_WindowHeight)))) {
          engine_2d_c_plotPixel_FUN_00401140(iVar1,local_14);
        }
        if (((-1 < iVar1) && (iVar1 < g_WindowWidth)) && ((-1 < y && (y < g_WindowHeight)))) {
          engine_2d_c_plotPixel_FUN_00401140(iVar1,y);
        }
        if ((((-1 < x) && (x < g_WindowWidth)) && (-1 < local_14)) && (local_14 < g_WindowHeight)) {
          engine_2d_c_plotPixel_FUN_00401140(x,local_14);
        }
        if (((-1 < x) && (x < g_WindowWidth)) && ((-1 < y && (y < g_WindowHeight)))) {
          engine_2d_c_plotPixel_FUN_00401140(x,y);
        }
        y = y + 1;
      } while (y <= in_stack_0000000c);
    }
  }
  return;
}
