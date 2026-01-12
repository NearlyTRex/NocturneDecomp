// Name: shape_cramtex.cpp_visualizeTextureAtlas_FUN_00447f20
// Address: 00447f20
// Address Range: [[00447f20, 004481c8]]
// Convention: __cdecl
// Signature: void shape_cramtex.cpp_visualizeTextureAtlas_FUN_00447f20(int visualization_mode, int completion_mode, int display_mode)

#include "nocturne.h"

void __cdecl
shape_cramtex_cpp_visualizeTextureAtlas_FUN_00447f20
          (int visualization_mode,int completion_mode,int display_mode)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  SCramWorkingEntry *pSVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  SCramRectangle *pSVar9;
  BADSPACEBASE *in_ESP;
  char acStack_f8 [200];
  int local_30;
  uint local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int iStack_c;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x134);
  g_CramMapNumber = g_CramMapNumber % g_CramTotalMaps;
  iStack_c = 0;
  iVar7 = 0;
  if (0 < (int)g_CramTextureCount) {
    pSVar5 = g_CramSortedTextureEntries;
    do {
      piVar1 = &pSVar5->final_right;
      piVar2 = &pSVar5->final_left;
      piVar3 = &pSVar5->final_top;
      piVar4 = &pSVar5->final_bottom;
      pSVar5 = pSVar5 + 1;
      iVar7 = iVar7 + 1;
      iStack_c = iStack_c +
                 ((*piVar4 - *piVar3) - g_CramPaddingCalculation) *
                 ((*piVar1 - *piVar2) - g_CramPaddingCalculation);
    } while (iVar7 < (int)g_CramTextureCount);
  }
  local_10 = g_CramCurrentAcceptableSize * g_CramCurrentAcceptableSize * g_CramTotalMaps;
  if (display_mode == 0) {
    pcVar6 = "progress";
  }
  else {
    pcVar6 = "result";
  }
  crt_stdio_c_sprintf_FUN_005fdbd0
            (acStack_f8,"CramTex II %s:  N=%d  Map %d/%d  Coverage: %4.1f%%  Shrink: %4.1f%%  Size: %u (%u)\n",pcVar6,g_CramTextureCount,
             g_CramMapNumber + 1,g_CramTotalMaps,
             ((double)iStack_c * 100) / (double)local_10,
             ((double)g_CramAtlasWidth * 100) /
             (double)g_CramCurrentAcceptableSize,g_CramCurrentAcceptableSize,g_CramAcceptableSize);
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  iVar7 = 0;
  engine_2d_c_drawText_FUN_00401fd0(acStack_f8,0,0);
  if (display_mode == 0) {
    pcVar6 = "Hit <Esc> when you've had enough...";
  }
  else {
    pcVar6 = "Done.  Press a key...";
  }
  engine_2d_c_drawText_FUN_00401fd0(pcVar6,0,0x16);
  local_18 = g_WindowWidth + -10;
  local_24 = g_WindowHeight + -10;
  local_20 = 10;
  local_1c = 0x36;
  if (g_CramVisualizationFlag != 0) {
    engine_2d_c_fillRectColor_FUN_00403170(10,0x36,g_WindowWidth + -0xb,g_WindowHeight + -0xb,1);
    local_2c = g_CramPlacedTextureCount;
    if (completion_mode != 0) {
      local_2c = g_CramTextureCount;
    }
    iVar8 = 0;
    if (0 < (int)local_2c) {
      do {
        iVar8 = iVar8 + 1;
        shape_cramtex_cpp_renderTextureEntry_FUN_00447c20
                  ((SCramWorkingEntry *)completion_mode,local_20,local_1c,local_18,local_24,iVar7);
      } while (iVar8 < (int)local_2c);
    }
    if ((completion_mode == 0) && (local_14 = completion_mode, 0 < g_CramRectangleCount)) {
      local_30 = local_18 - local_20;
      local_28 = local_24 - local_1c;
      pSVar9 = g_CramRectangles;
      do {
        if ((g_CramMapNumber == pSVar9->left) && (-1 < pSVar9->active_flag)) {
          iVar7 = local_20 + (pSVar9->top * local_30) / g_CramCurrentAcceptableSize;
          iVar8 = local_1c + (pSVar9->right * local_28) / g_CramCurrentAcceptableSize;
          if ((iVar7 < local_18) && (iVar8 < local_24)) {
            g_ActiveRenderColor = pSVar9->active_flag;
            engine_2d_c_plotPixel_FUN_00401140(iVar7,iVar8);
            engine_2d_c_plotPixel_FUN_00401140(iVar7 + 1,iVar8);
            engine_2d_c_plotPixel_FUN_00401140(iVar7,iVar8 + 1);
          }
        }
        local_14 = local_14 + 1;
        pSVar9 = pSVar9 + 1;
      } while (local_14 < g_CramRectangleCount);
    }
  }
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  return;
}
