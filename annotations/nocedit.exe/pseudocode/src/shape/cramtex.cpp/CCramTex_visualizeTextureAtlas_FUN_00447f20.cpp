// Name: shape_cramtex.cpp_CCramTex_visualizeTextureAtlas_FUN_00447f20
// Address: 00447f20
// Address Range: [[00447f20, 004481c8]]
// Convention: __cdecl
// Signature: void __cdecl shape_cramtex_cpp_CCramTex_visualizeTextureAtlas_FUN_00447f20 (CCramTex *this_ptr,int visualization_mode,int completion_mode,int display_mode)

#include "nocturne.h"

void __cdecl
shape_cramtex_cpp_CCramTex_visualizeTextureAtlas_FUN_00447f20
          (CCramTex *this_ptr,int visualization_mode,int completion_mode,int display_mode)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  CCramTex *pCVar5;
  char *pcVar6;
  int draw_width;
  uint uVar7;
  int iVar8;
  int draw_y;
  int iVar9;
  int iVar10;
  SCramRectangle *pSVar11;
  int iVar12;
  int x;
  int y;
  int in_stack_ffffff00;
  CCramTex *local_1c;
  
  __STK();
  g_CramMapNumber = g_CramMapNumber % g_CramTotalMaps;
  iVar12 = 0;
  iVar9 = 0;
  if (0 < (int)g_CramTextureCount) {
    pCVar5 = g_CramSortedTextureEntries;
    do {
      piVar1 = &pCVar5->final_right;
      piVar2 = &pCVar5->final_left;
      piVar3 = &pCVar5->final_top;
      piVar4 = &pCVar5->final_bottom;
      pCVar5 = pCVar5 + 1;
      iVar9 = iVar9 + 1;
      iVar12 = iVar12 + ((*piVar4 - *piVar3) - g_CramPaddingCalculation) *
                        ((*piVar1 - *piVar2) - g_CramPaddingCalculation);
    } while (iVar9 < (int)g_CramTextureCount);
  }
  if (visualization_mode == 0) {
    pcVar6 = "progress";
  }
  else {
    pcVar6 = "result";
  }
  _sprintf
            (&stack0xffffff00,"CramTex II %s:  N=%d  Map %d/%d  Coverage: %4.1f%%  Shrink: %4.1f%%  Size: %u (%u)\n",pcVar6,g_CramTextureCount,
             g_CramMapNumber + 1,g_CramTotalMaps,
             ((double)iVar12 * 100) /
             (double)(g_CramCurrentAcceptableSize * g_CramCurrentAcceptableSize * g_CramTotalMaps),
             ((double)g_CramAtlasWidth * 100) /
             (double)g_CramCurrentAcceptableSize,g_CramCurrentAcceptableSize,g_CramAcceptableSize);
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_drawText_FUN_00401fd0(&stack0xffffff00,0,0);
  if (visualization_mode == 0) {
    pcVar6 = "Hit <Esc> when you've had enough...";
  }
  else {
    pcVar6 = "Done.  Press a key...";
  }
  engine_2d_c_drawText_FUN_00401fd0(pcVar6,0,0x16);
  iVar12 = g_WindowHeight;
  iVar9 = g_WindowWidth;
  draw_y = g_WindowWidth + -10;
  draw_width = g_WindowHeight + -10;
  if (g_CramVisualizationFlag != 0) {
    engine_2d_c_fillRectColor_FUN_00403170(10,0x36,g_WindowWidth + -0xb,g_WindowHeight + -0xb,1);
    uVar7 = g_CramPlacedTextureCount;
    if (this_ptr != (CCramTex *)0x0) {
      uVar7 = g_CramTextureCount;
    }
    iVar10 = 0;
    if (0 < (int)uVar7) {
      do {
        iVar10 = iVar10 + 1;
        shape_cramtex_cpp_CCramTex_renderTextureEntry_FUN_00447c20
                  (this_ptr,10,0x36,draw_y,draw_width,in_stack_ffffff00);
      } while (iVar10 < (int)uVar7);
    }
    if ((this_ptr == (CCramTex *)0x0) && (local_1c = this_ptr, 0 < g_CramRectangleCount)) {
      pSVar11 = g_CramRectangles;
      do {
        if ((g_CramMapNumber == pSVar11->left) && (-1 < pSVar11->active_flag)) {
          iVar10 = (pSVar11->top * (iVar9 + -0x14)) / g_CramCurrentAcceptableSize;
          x = iVar10 + 10;
          iVar8 = (pSVar11->right * (iVar12 + -0x40)) / g_CramCurrentAcceptableSize;
          y = iVar8 + 0x36;
          if ((x < draw_y) && (y < draw_width)) {
            g_ActiveRenderColor = pSVar11->active_flag;
            engine_2d_c_plotPixel_FUN_00401140(x,y);
            engine_2d_c_plotPixel_FUN_00401140(iVar10 + 0xb,y);
            engine_2d_c_plotPixel_FUN_00401140(x,iVar8 + 0x37);
          }
        }
        local_1c = (CCramTex *)((int)&local_1c->width + 1);
        pSVar11 = pSVar11 + 1;
      } while ((int)local_1c < g_CramRectangleCount);
    }
  }
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  return;
}
