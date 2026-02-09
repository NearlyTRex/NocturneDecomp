// Name: shape_cramtex.cpp_CCramTex_renderAllTexturesAndRectangles_FUN_00447ab0
// Address: 00447ab0
// Address Range: [[00447ab0, 00447c15]]
// Convention: __cdecl
// Signature: void __cdecl shape_cramtex_cpp_CCramTex_renderAllTexturesAndRectangles_FUN_00447ab0 (CCramTex *this_ptr,int x,int y,int width,int height,int render_mode)

#include "nocturne.h"

void __cdecl
shape_cramtex_cpp_CCramTex_renderAllTexturesAndRectangles_FUN_00447ab0
          (CCramTex *this_ptr,int x,int y,int width,int height,int render_mode)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  SCramRectangle *pSVar4;
  int x_00;
  int y_00;
  int in_stack_ffffffe8;
  
  __STK();
  if (g_CramVisualizationFlag != 0) {
    engine_2d_c_fillRectColor_FUN_00403170(x,y,width + -1,height + -1,1);
    uVar1 = g_CramPlacedTextureCount;
    if (this_ptr != (CCramTex *)0x0) {
      uVar1 = g_CramTextureCount;
    }
    iVar3 = 0;
    if (0 < (int)uVar1) {
      do {
        iVar3 = iVar3 + 1;
        shape_cramtex_cpp_CCramTex_renderTextureEntry_FUN_00447c20
                  (this_ptr,x,y,width,height,in_stack_ffffffe8);
      } while (iVar3 < (int)uVar1);
    }
    if ((this_ptr == (CCramTex *)0x0) && (iVar3 = 0, 0 < g_CramRectangleCount)) {
      iVar2 = width - x;
      pSVar4 = g_CramRectangles;
      do {
        if ((g_CramMapNumber == pSVar4->left) && (-1 < pSVar4->active_flag)) {
          x_00 = x + (pSVar4->top * iVar2) / g_CramCurrentAcceptableSize;
          y_00 = y + (pSVar4->right * (height - y)) / g_CramCurrentAcceptableSize;
          if ((x_00 < width) && (y_00 < height)) {
            g_ActiveRenderColor = pSVar4->active_flag;
            engine_2d_c_plotPixel_FUN_00401140(x_00,y_00);
            engine_2d_c_plotPixel_FUN_00401140(x_00 + 1,y_00);
            engine_2d_c_plotPixel_FUN_00401140(x_00,y_00 + 1);
          }
        }
        iVar3 = iVar3 + 1;
        pSVar4 = pSVar4 + 1;
      } while (iVar3 < g_CramRectangleCount);
    }
  }
  return;
}
