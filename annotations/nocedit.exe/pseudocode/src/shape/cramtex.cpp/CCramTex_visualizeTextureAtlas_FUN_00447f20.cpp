// Name: shape_cramtex.cpp_CCramTex_visualizeTextureAtlas_FUN_00447f20
// Address: 00447f20
// Address Range: [[00447f20, 004481c8]]
// Convention: __cdecl
// Signature: void __cdecl shape_cramtex_cpp_CCramTex_visualizeTextureAtlas_FUN_00447f20(CCramTex *this_ptr,int visualization_mode,int completion_mode,int display_mode)

#include "nocturne.h"

void __cdecl shape_cramtex_cpp_CCramTex_visualizeTextureAtlas_FUN_00447f20(CCramTex *this_ptr,int visualization_mode,int completion_mode,int display_mode)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  CCramTex *pCVar5;
  char *pcVar6;
  int iVar7;
  SCramRectangle *pSVar8;
  int y;
  char local_100 [200];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  CCramTex *local_1c;
  int local_18;
  int local_14;
  
  __STK();
  g_CramMapNumber = g_CramMapNumber % g_CramTotalMaps;
  local_14 = 0;
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
      local_14 = local_14 +
                 ((*piVar4 - *piVar3) - g_CramPaddingCalculation) *
                 ((*piVar1 - *piVar2) - g_CramPaddingCalculation);
    } while (iVar7 < g_CramTextureCount);
  }
  local_18 = g_CramCurrentAcceptableSize * g_CramCurrentAcceptableSize * g_CramTotalMaps;
  if (visualization_mode == 0) {
    pcVar6 = "progress";
  }
  else {
    pcVar6 = "result";
  }
  _sprintf
            (local_100,"CramTex II %s:  N=%d  Map %d/%d  Coverage: %4.1f%%  Shrink: %4.1f%%  Size: %u (%u)\n",pcVar6,g_CramTextureCount,
             g_CramMapNumber + 1,g_CramTotalMaps,
             ((double)local_14 * 100) / (double)local_18,
             ((double)g_CramAtlasDimension * 100) /
             (double)g_CramCurrentAcceptableSize,g_CramCurrentAcceptableSize,g_CramAcceptableSize);
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_drawText_FUN_00401fd0(local_100,0,0);
  if (visualization_mode == 0) {
    pcVar6 = "Hit <Esc> when you've had enough...";
  }
  else {
    pcVar6 = "Done.  Press a key...";
  }
  engine_2d_c_drawText_FUN_00401fd0(pcVar6,0,0x16);
  local_20 = g_WindowWidth + -10;
  local_2c = g_WindowHeight + -10;
  local_28 = 10;
  local_24 = 0x36;
  if (g_CramVisualizationFlag != 0) {
    engine_2d_c_fillRectColor_FUN_00403170(10,0x36,g_WindowWidth + -0xb,g_WindowHeight + -0xb,1);
    local_34 = g_CramPlacedTextureCount;
    if (this_ptr != (CCramTex *)0x0) {
      local_34 = g_CramTextureCount;
    }
    iVar7 = 0;
    if (0 < local_34) {
      pCVar5 = g_CramSortedTextureEntries;
      do {
        iVar7 = iVar7 + 1;
        shape_cramtex_cpp_CCramTex_renderTextureEntry_FUN_00447c20
                  (pCVar5,(int)this_ptr,local_28,local_24,local_20,local_2c);
        pCVar5 = pCVar5 + 1;
      } while (iVar7 < local_34);
    }
    if ((this_ptr == (CCramTex *)0x0) && (local_1c = this_ptr, 0 < g_CramRectangleCount)) {
      local_38 = local_20 - local_28;
      local_30 = local_2c - local_24;
      pSVar8 = g_CramRectangles;
      do {
        if ((g_CramMapNumber == pSVar8->map_id) && (-1 < pSVar8->active_flag)) {
          iVar7 = local_28 + (pSVar8->start_x * local_38) / g_CramCurrentAcceptableSize;
          y = local_24 + (pSVar8->start_y * local_30) / g_CramCurrentAcceptableSize;
          if ((iVar7 < local_20) && (y < local_2c)) {
            g_ActiveRenderColor = pSVar8->active_flag;
            engine_2d_c_plotPixel_FUN_00401140(iVar7,y);
            engine_2d_c_plotPixel_FUN_00401140(iVar7 + 1,y);
            engine_2d_c_plotPixel_FUN_00401140(iVar7,y + 1);
          }
        }
        local_1c = (CCramTex *)((int)&local_1c->width + 1);
        pSVar8 = pSVar8 + 1;
      } while ((int)local_1c < g_CramRectangleCount);
    }
  }
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  return;
}
