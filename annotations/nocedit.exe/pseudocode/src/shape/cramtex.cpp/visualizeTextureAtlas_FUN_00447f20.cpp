// Name: shape_cramtex.cpp_visualizeTextureAtlas_FUN_00447f20
// Address: 00447f20
// Address Range: [[00447f20, 004481c8]]
// Convention: __cdecl
// Signature: void __cdecl shape_cramtex_cpp_visualizeTextureAtlas_FUN_00447f20(int show_textures,int is_complete)

#include "nocturne.h"

void __cdecl shape_cramtex_cpp_visualizeTextureAtlas_FUN_00447f20(int show_textures,int is_complete)

{
  int iVar1;
  CCramTex *pCVar5;
  char *pcVar6;
  int draw_bottom;
  int iVar2;
  int draw_right;
  int iVar7;
  int iVar3;
  SCramRectangle *pSVar8;
  int iVar4;
  CCramTex *this_ptr;
  int x;
  int y;
  char *text;
  char local_100 [200];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int *piVar2;
  int *piVar3;
  int *piVar1;
  int *piVar4;
  
  __STK();
  g_CramMapNumber = g_CramMapNumber % g_CramTotalMaps;
  iVar4 = 0;
  iVar7 = 0;
  if (0 < g_CramTextureCount) {
    pCVar5 = g_CramSortedTextureEntries;
    do {
      piVar1 = &pCVar5->final_right;
      piVar2 = &pCVar5->final_left;
      piVar3 = &pCVar5->final_top;
      piVar4 = &pCVar5->final_bottom;
      pCVar5 = pCVar5 + 1;
      iVar7 = iVar7 + 1;
      iVar4 = iVar4 + ((*piVar4 - *piVar3) - g_CramPaddingCalculation) *
                      ((*piVar1 - *piVar2) - g_CramPaddingCalculation);
    } while (iVar7 < g_CramTextureCount);
  }
  if (is_complete == 0) {
    pcVar6 = "progress";
  }
  else {
    pcVar6 = "result";
  }
  _sprintf
            (local_100,"CramTex II %s:  N=%d  Map %d/%d  Coverage: %4.1f%%  Shrink: %4.1f%%  Size: %u (%u)\n",pcVar6,g_CramTextureCount,
             g_CramMapNumber + 1,g_CramTotalMaps,
             ((double)iVar4 * 100) /
             (double)(g_CramCurrentAcceptableSize * g_CramCurrentAcceptableSize * g_CramTotalMaps),
             ((double)g_CramAtlasDimension * 100) /
             (double)g_CramCurrentAcceptableSize,g_CramCurrentAcceptableSize,g_CramAcceptableSize);
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_drawText_FUN_00401fd0(local_100,0,0);
  if (is_complete == 0) {
    text = "Hit <Esc> when you've had enough...";
  }
  else {
    text = "Done.  Press a key...";
  }
  engine_2d_c_drawText_FUN_00401fd0(text,0,0x16);
  iVar1 = g_WindowHeight;
  iVar4 = g_WindowWidth;
  draw_right = g_WindowWidth + -10;
  draw_bottom = g_WindowHeight + -10;
  if (g_CramVisualizationFlag != 0) {
    engine_2d_c_fillRectColor_FUN_00403170(10,0x36,g_WindowWidth + -0xb,g_WindowHeight + -0xb,1);
    iVar2 = g_CramPlacedTextureCount;
    if (show_textures != 0) {
      iVar2 = g_CramTextureCount;
    }
    iVar3 = 0;
    if (0 < iVar2) {
      this_ptr = g_CramSortedTextureEntries;
      do {
        iVar3 = iVar3 + 1;
        shape_cramtex_cpp_CCramTex_renderTextureEntry_FUN_00447c20
                  (this_ptr,show_textures,10,0x36,draw_right,draw_bottom);
        this_ptr = this_ptr + 1;
      } while (iVar3 < iVar2);
    }
    if ((show_textures == 0) && (local_1c = show_textures, 0 < g_CramRectangleCount)) {
      pSVar8 = g_CramRectangles;
      do {
        if ((g_CramMapNumber == pSVar8->map_id) && (-1 < pSVar8->active_flag)) {
          iVar2 = (pSVar8->start_x * (iVar4 + -0x14)) / g_CramCurrentAcceptableSize;
          x = iVar2 + 10;
          iVar3 = (pSVar8->start_y * (iVar1 + -0x40)) / g_CramCurrentAcceptableSize;
          y = iVar3 + 0x36;
          if ((x < draw_right) && (y < draw_bottom)) {
            g_ActiveRenderColor = pSVar8->active_flag;
            engine_2d_c_plotPixel_FUN_00401140(x,y);
            engine_2d_c_plotPixel_FUN_00401140(iVar2 + 0xb,y);
            engine_2d_c_plotPixel_FUN_00401140(x,iVar3 + 0x37);
          }
        }
        local_1c = local_1c + 1;
        pSVar8 = pSVar8 + 1;
      } while (local_1c < g_CramRectangleCount);
    }
  }
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  return;
}
