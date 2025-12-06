// Name: shape_cramtex.cpp_renderAllTexturesAndRectangles_FUN_00447ab0
// Address: 00447ab0
// Address Range: [[00447ab0, 00447c15]]
// Convention: __cdecl
// Signature: void shape_cramtex.cpp_renderAllTexturesAndRectangles_FUN_00447ab0(int x, int y, int width, int height, int render_mode)

#include "nocturne.h"

void __cdecl
shape_cramtex_cpp_renderAllTexturesAndRectangles_FUN_00447ab0
          (int x,int y,int width,int height,int render_mode)

{
  uint uVar1;
  int iVar2;
  int y_00;
  int iVar3;
  SCramRectangle *pSVar4;
  int x_00;
  int y_01;
  int in_stack_0000001c;
  int in_stack_00000020;
  int in_stack_fffffff4;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x34);
  if (g_CramVisualizationFlag != 0) {
    engine_2d_c_fillRectColor_FUN_00403170(width,height,render_mode + -1,in_stack_0000001c + -1,1);
    uVar1 = g_CramPlacedTextureCount;
    if (y != 0) {
      uVar1 = g_CramTextureCount;
    }
    iVar3 = 0;
    if (0 < (int)uVar1) {
      do {
        iVar3 = iVar3 + 1;
        shape_cramtex_cpp_renderTextureEntry_FUN_00447c20
                  ((SCramWorkingEntry *)y,height,render_mode,in_stack_0000001c,in_stack_00000020,
                   in_stack_fffffff4);
      } while (iVar3 < (int)uVar1);
    }
    if ((y == 0) && (iVar3 = 0, 0 < g_CramRectangleCount)) {
      iVar2 = in_stack_0000001c - height;
      y_00 = in_stack_00000020 - render_mode;
      pSVar4 = g_CramRectangles;
      do {
        if ((g_CramMapNumber == pSVar4->left) && (-1 < pSVar4->active_flag)) {
          x_00 = height + (pSVar4->top * iVar2) / g_CramCurrentAcceptableSize;
          y_01 = render_mode + (pSVar4->right * y_00) / g_CramCurrentAcceptableSize;
          if ((x_00 < in_stack_0000001c) && (y_01 < in_stack_00000020)) {
            g_ActiveRenderColor = pSVar4->active_flag;
            engine_2d_c_plotPixel_FUN_00401140(x_00,y_01);
            engine_2d_c_plotPixel_FUN_00401140(x_00 + 1,y_01);
            y_00 = y_01 + 1;
            engine_2d_c_plotPixel_FUN_00401140(x_00,y_00);
            iVar2 = x_00;
          }
        }
        iVar3 = iVar3 + 1;
        pSVar4 = pSVar4 + 1;
      } while (iVar3 < g_CramRectangleCount);
    }
  }
  return;
}
