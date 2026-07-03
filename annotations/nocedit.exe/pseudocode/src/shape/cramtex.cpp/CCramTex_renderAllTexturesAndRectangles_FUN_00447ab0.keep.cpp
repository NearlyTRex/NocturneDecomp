// Name: shape_cramtex.cpp_CCramTex_renderAllTexturesAndRectangles_FUN_00447ab0
// Address: 00447ab0
// MANUAL RECONSTRUCTION
// Address Range: [[00447ab0, 00447c15]]
// Convention: __cdecl
// Signature: void __cdecl shape_cramtex_cpp_CCramTex_renderAllTexturesAndRectangles_FUN_00447ab0(CCramTex *this_ptr,int x,int y,int width,int height,int render_mode)

#include "nocturne.h"

void __cdecl shape_cramtex_cpp_CCramTex_renderAllTexturesAndRectangles_FUN_00447ab0(CCramTex *this_ptr,int x,int y,int width,int height,int render_mode)

{
  int iVar1;
  SCramRectangle *pSVar2;
  CCramTex *this_ptr_00;
  int iVar3;
  int iVar2;
  int y_00;
  
  if (g_CramVisualizationFlag != 0) {
    engine_2d_c_fillRectColor_FUN_00403170(x,y,width + -1,height + -1,1);
    iVar2 = g_CramPlacedTextureCount;
    if (this_ptr != (CCramTex *)0x0) {
      iVar2 = g_CramTextureCount;
    }
    iVar1 = 0;
    if (0 < iVar2) {
      this_ptr_00 = g_CramSortedTextureEntries;
      do {
        iVar1 = iVar1 + 1;
        shape_cramtex_cpp_CCramTex_renderTextureEntry_FUN_00447c20
                  (this_ptr_00,1,x,y,width,height);
        this_ptr_00 = this_ptr_00 + 1;
      } while (iVar1 < iVar2);
    }
    if ((this_ptr == (CCramTex *)0x0) && (iVar3 = 0, 0 < g_CramRectangleCount)) {
      pSVar2 = g_CramRectangles;
      do {
        if ((g_CramMapNumber == pSVar2->map_id) && (-1 < pSVar2->active_flag)) {
          iVar2 = x + (pSVar2->start_x * (width - x)) / g_CramCurrentAcceptableSize;
          y_00 = y + (pSVar2->start_y * (height - y)) / g_CramCurrentAcceptableSize;
          if ((iVar2 < width) && (y_00 < height)) {
            g_ActiveRenderColor = pSVar2->active_flag;
            engine_2d_c_plotPixel_FUN_00401140(iVar2,y_00);
            engine_2d_c_plotPixel_FUN_00401140(iVar2 + 1,y_00);
            engine_2d_c_plotPixel_FUN_00401140(iVar2,y_00 + 1);
          }
        }
        iVar3 = iVar3 + 1;
        pSVar2 = pSVar2 + 1;
      } while (iVar3 < g_CramRectangleCount);
    }
  }
  return;
}
