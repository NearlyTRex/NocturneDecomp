// Name: core_morph.cpp_FUN_0052bb80
// Address: 0052bb80
// Address Range: [[0052bb80, 0052bcaa]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_FUN_0052bb80(void)

#include "nocturne.h"

/* Signature: byte core_morph.cpp_FUN_0052bb80(uint param_1, uint param_2) */

void __cdecl core_morph_cpp_FUN_0052bb80(void)

{
  int y;
  int iVar1;
  int x;
  int y_00;
  int x_00;
  int in_stack_00000004;
  int in_stack_00000008;
  
  if ((*(byte *)(in_stack_00000004 + 0x13) & 0x80) == 0) {
    y = *(int *)(in_stack_00000004 + 0x14) >> 0x10;
    x = *(int *)(in_stack_00000004 + 0x10) >> 0x10;
    if ((((-1 < x) && (x < g_WindowWidth)) && (-1 < y)) && (y < g_WindowHeight)) {
      engine_2d_c_plotPixel_FUN_00401140(x,y);
    }
    if (0 < in_stack_00000008) {
      iVar1 = y + in_stack_00000008;
      y_00 = y + 1;
      x_00 = x;
      do {
        y = y + -1;
        x_00 = x_00 + -1;
        x = x + 1;
        if (((-1 < x_00) && (x_00 < g_WindowWidth)) && ((-1 < y && (y < g_WindowHeight)))) {
          engine_2d_c_plotPixel_FUN_00401140(x_00,y);
        }
        if (((-1 < x_00) && (x_00 < g_WindowWidth)) && ((-1 < y_00 && (y_00 < g_WindowHeight)))) {
          engine_2d_c_plotPixel_FUN_00401140(x_00,y_00);
        }
        if ((((-1 < x) && (x < g_WindowWidth)) && (-1 < y)) && (y < g_WindowHeight)) {
          engine_2d_c_plotPixel_FUN_00401140(x,y);
        }
        if (((-1 < x) && (x < g_WindowWidth)) && ((-1 < y_00 && (y_00 < g_WindowHeight)))) {
          engine_2d_c_plotPixel_FUN_00401140(x,y_00);
        }
        y_00 = y_00 + 1;
      } while (y_00 <= iVar1);
    }
  }
  return;
}
