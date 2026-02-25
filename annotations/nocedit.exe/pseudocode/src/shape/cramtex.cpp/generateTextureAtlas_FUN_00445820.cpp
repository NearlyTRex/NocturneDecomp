// Name: shape_cramtex.cpp_generateTextureAtlas_FUN_00445820
// Address: 00445820
// Address Range: [[00445820, 004460ff]]
// Convention: __cdecl
// Signature: void __cdecl shape_cramtex_cpp_generateTextureAtlas_FUN_00445820(int acceptable_coverage)

#include "nocturne.h"

void __cdecl shape_cramtex_cpp_generateTextureAtlas_FUN_00445820(int acceptable_coverage)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  uint seed;
  CCramTex *pCVar9;
  int iVar10;
  _FILE *p_Var11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int local_3c;
  int local_34;
  int local_2c;
  int local_24;
  SCramRectangle *local_20;
  SCramRectangle *local_1c;
  SCramRectangle *local_18;
  int local_14;
  
  remove("..\\shape\\cramlog.txt");
  seed = rand();
  srand(0x16);
  _qsort
            (g_CramSortedTextureEntries,g_CramTextureCount,0x4c,
             shape_cramtex_cpp_qsortByLargestDimension_FUN_004457f0);
  iVar12 = 0;
  g_CramTotalPixelArea = 0;
  if (0 < g_CramTextureCount) {
    pCVar9 = g_CramSortedTextureEntries;
    do {
      piVar7 = &pCVar9->width;
      piVar1 = &pCVar9->height;
      pCVar9 = pCVar9 + 1;
      g_CramTotalPixelArea = g_CramTotalPixelArea + *piVar7 * *piVar1;
      iVar12 = iVar12 + 1;
    } while (iVar12 < g_CramTextureCount);
  }
  iVar12 = (g_CramTotalPixelArea * 100) / acceptable_coverage;
  for (; iVar10 = g_CramAcceptableSize * g_CramAcceptableSize * g_CramTotalMaps,
      iVar10 - iVar12 == 0 || iVar10 < iVar12; g_CramAcceptableSize = g_CramAcceptableSize + 1) {
  }
  g_CramPaddingCalculation =
       (g_CramAtlasDimension + -1 + g_CramPaddingSize * g_CramAcceptableSize) / g_CramAtlasDimension
  ;
  p_Var11 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                      ("..\\shape\\cramlog.txt",(char *)0x0,"at",
                       "..\\shape\\cramtex.cpp",0x1e3);
  if (p_Var11 != (_FILE *)0x0) {
    _fprintf(p_Var11,"initial pad guess = %d\n",g_CramPaddingCalculation);
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var11,"..\\shape\\cramtex.cpp",0x1e6);
  }
  local_3c = -1;
  do {
    iVar12 = 0;
    g_CramCandidateWriteCursor = g_CramCandidateRectangles;
    do {
      iVar12 = iVar12 + 1;
      iVar10 = 0;
      if (0 < g_CramTextureCount) {
        pCVar9 = g_CramSortedTextureEntries;
        do {
          iVar13 = pCVar9->width + g_CramPaddingCalculation;
          if (g_CramAcceptableSize < iVar13) {
            g_CramAcceptableSize = iVar13;
          }
          iVar13 = pCVar9->height + g_CramPaddingCalculation;
          if (g_CramAcceptableSize < iVar13) {
            g_CramAcceptableSize = iVar13;
          }
          iVar10 = iVar10 + 1;
          pCVar9 = pCVar9 + 1;
        } while (iVar10 < g_CramTextureCount);
      }
      iVar10 = g_CramAcceptableSize * 5 >> 0x1f;
      iVar10 = (g_CramAtlasDimension + -1 +
               ((int)((g_CramAcceptableSize * 5 + iVar10 * -4) - (uint)(iVar10 << 1 < 0)) >> 2) *
               g_CramPaddingSize) / g_CramAtlasDimension;
      if (iVar10 <= local_3c) {
        iVar10 = local_3c + 1;
      }
      p_Var11 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                          ("..\\shape\\cramlog.txt",(char *)0x0,"at",
                           "..\\shape\\cramtex.cpp",0x206);
      if (p_Var11 != (_FILE *)0x0) {
        _fprintf(p_Var11,"Guess #%d\n",iVar12);
        _fprintf(p_Var11,"  acceptableSize = %d\n",g_CramAcceptableSize);
        _fprintf(p_Var11,"  estimated pad = %d\n",iVar10);
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var11,"..\\shape\\cramtex.cpp",0x20b);
      }
    } while ((iVar10 != g_CramPaddingCalculation) &&
            (g_CramPaddingCalculation = iVar10, iVar12 < 10));
    iVar12 = 0;
    local_3c = g_CramPaddingCalculation;
    g_CramRectangleCount = 0;
    g_CramBestSolutionMetric2 = 999999;
    g_CramBestSolutionMetric1 = 999999;
    g_CramMinPlacementX = 999999;
    g_CramMinPlacementY = 999999;
    g_CramCurrentAcceptableSize = g_CramAcceptableSize;
    if (0 < g_CramTextureCount) {
      pCVar9 = g_CramSortedTextureEntries;
      do {
        iVar10 = g_CramPaddingCalculation;
        pCVar9->padded_width = pCVar9->width + g_CramPaddingCalculation;
        pCVar9->padded_height = pCVar9->height + iVar10;
        if (pCVar9->padded_width < g_CramMinPlacementX) {
          g_CramMinPlacementX = pCVar9->padded_width;
        }
        if (pCVar9->padded_height < g_CramMinPlacementY) {
          g_CramMinPlacementY = pCVar9->padded_height;
        }
        iVar12 = iVar12 + 1;
        pCVar9 = pCVar9 + 1;
      } while (iVar12 < g_CramTextureCount);
    }
    iVar12 = g_CramSortedTextureEntries[0].padded_height;
    g_CramOptimalPlacement = g_CramMinPlacementY;
    if (g_CramMinPlacementX < g_CramMinPlacementY) {
      g_CramOptimalPlacement = g_CramMinPlacementX;
    }
    g_CramSortedTextureEntries[0].placement_flags = 0;
    g_CramSortedTextureEntries[0].assigned_map_number = 0;
    g_CramSortedTextureEntries[0].placement_bottom = 0;
    g_CramSortedTextureEntries[0].working_right = 0;
    g_CramSortedTextureEntries[0].effective_width = g_CramSortedTextureEntries[0].padded_width;
    g_CramPlacedTextureCount = 1;
    g_CramSortedTextureEntries[0].effective_height = g_CramSortedTextureEntries[0].padded_height;
    g_CramSortedTextureEntries[0].working_top = g_CramSortedTextureEntries[0].padded_width;
    g_CramSortedTextureEntries[0].working_width = g_CramSortedTextureEntries[0].padded_height;
    if (0 < g_CramRectangleCount) {
      iVar10 = 0;
      do {
        if (((*(int *)((int)&g_CramRectangles[0].map_id + iVar10) == 0) &&
            (*(int *)((int)&g_CramRectangles[0].start_x + iVar10) == 0)) &&
           (g_CramSortedTextureEntries[0].padded_height ==
            *(int *)((int)&g_CramRectangles[0].start_y + iVar10))) goto LAB_00445b8a;
        iVar10 = iVar10 + 0x28;
      } while (iVar10 < g_CramRectangleCount * 0x28);
    }
    local_34 = 0;
    local_20 = g_CramRectangles + g_CramRectangleCount;
    do {
      iVar10 = g_CramMinPlacementY;
      iVar13 = g_CramMinPlacementX;
      if (local_34 != 0) {
        iVar10 = g_CramMinPlacementX;
        iVar13 = g_CramMinPlacementY;
      }
      iVar14 = g_CramPlacedTextureCount + -1;
      if (-1 < iVar14) {
        pCVar9 = g_CramSortedTextureEntries + iVar14;
        do {
          if (((pCVar9->assigned_map_number == 0) && (0 < pCVar9->working_top)) &&
             ((iVar12 < pCVar9->working_width &&
              ((pCVar9->placement_bottom < iVar13 && (pCVar9->working_right < iVar10 + iVar12))))))
          break;
          iVar14 = iVar14 + -1;
          pCVar9 = pCVar9 + -1;
        } while (-1 < iVar14);
      }
      if (iVar14 < 0) {
        local_20->occupant = 0;
        local_20->active_flag = 1;
        local_20->map_id = 0;
        local_20->start_x = 0;
        local_20->start_y = iVar12;
        local_20->end_x = iVar13;
        local_20->orientation = local_34;
        local_20->end_y = iVar10 + iVar12;
        g_CramRectangleCount = g_CramRectangleCount + 1;
        local_20 = local_20 + 1;
      }
      local_34 = local_34 + 1;
    } while (local_34 < 2);
LAB_00445b8a:
    iVar10 = g_CramSortedTextureEntries[0].working_top;
    iVar12 = g_CramSortedTextureEntries[0].working_right;
    if (0 < g_CramRectangleCount) {
      iVar13 = 0;
      do {
        if (((*(int *)((int)&g_CramRectangles[0].map_id + iVar13) == 0) &&
            (g_CramSortedTextureEntries[0].working_top ==
             *(int *)((int)&g_CramRectangles[0].start_x + iVar13))) &&
           (g_CramSortedTextureEntries[0].working_right ==
            *(int *)((int)&g_CramRectangles[0].start_y + iVar13))) goto LAB_00445bd9;
        iVar13 = iVar13 + 0x28;
      } while (iVar13 < g_CramRectangleCount * 0x28);
    }
    local_1c = g_CramRectangles + g_CramRectangleCount;
    local_2c = 0;
    do {
      iVar13 = g_CramMinPlacementX;
      iVar14 = g_CramMinPlacementY;
      if (local_2c != 0) {
        iVar13 = g_CramMinPlacementY;
        iVar14 = g_CramMinPlacementX;
      }
      iVar15 = g_CramPlacedTextureCount + -1;
      if (-1 < iVar15) {
        pCVar9 = g_CramSortedTextureEntries + iVar15;
        do {
          if (((pCVar9->assigned_map_number == 0) && (iVar10 < pCVar9->working_top)) &&
             ((iVar12 < pCVar9->working_width &&
              ((pCVar9->placement_bottom < iVar13 + iVar10 &&
               (pCVar9->working_right < iVar14 + iVar12)))))) break;
          iVar15 = iVar15 + -1;
          pCVar9 = pCVar9 + -1;
        } while (-1 < iVar15);
      }
      if (iVar15 < 0) {
        local_1c->occupant = 0;
        local_1c->active_flag = 1;
        local_1c->map_id = 0;
        local_1c->start_x = iVar10;
        local_1c->start_y = iVar12;
        local_1c->end_x = iVar13 + iVar10;
        local_1c->orientation = local_2c;
        local_1c->end_y = iVar14 + iVar12;
        g_CramRectangleCount = g_CramRectangleCount + 1;
        local_1c = local_1c + 1;
      }
      local_2c = local_2c + 1;
    } while (local_2c < 2);
LAB_00445bd9:
    local_14 = 1;
    if (1 < g_CramTotalMaps) {
      do {
        if (0 < g_CramRectangleCount) {
          iVar12 = 0;
          do {
            if (((local_14 == *(int *)((int)&g_CramRectangles[0].map_id + iVar12)) &&
                (*(int *)((int)&g_CramRectangles[0].start_x + iVar12) == 0)) &&
               (*(int *)((int)&g_CramRectangles[0].start_y + iVar12) == 0)) goto LAB_00445c34;
            iVar12 = iVar12 + 0x28;
          } while (iVar12 < g_CramRectangleCount * 0x28);
        }
        local_18 = g_CramRectangles + g_CramRectangleCount;
        local_24 = 0;
        do {
          iVar12 = g_CramMinPlacementY;
          iVar10 = g_CramMinPlacementX;
          if (local_24 != 0) {
            iVar12 = g_CramMinPlacementX;
            iVar10 = g_CramMinPlacementY;
          }
          iVar13 = g_CramPlacedTextureCount + -1;
          if (-1 < iVar13) {
            pCVar9 = g_CramSortedTextureEntries + iVar13;
            do {
              if (((pCVar9->assigned_map_number == local_14) && (0 < pCVar9->working_top)) &&
                 ((0 < pCVar9->working_width &&
                  ((pCVar9->placement_bottom < iVar10 && (pCVar9->working_right < iVar12))))))
              break;
              iVar13 = iVar13 + -1;
              pCVar9 = pCVar9 + -1;
            } while (-1 < iVar13);
          }
          if (iVar13 < 0) {
            local_18->occupant = 0;
            local_18->active_flag = 1;
            local_18->map_id = local_14;
            local_18->start_x = 0;
            local_18->start_y = 0;
            local_18->end_x = iVar10;
            local_18->orientation = local_24;
            local_18->end_y = iVar12;
            g_CramRectangleCount = g_CramRectangleCount + 1;
            local_18 = local_18 + 1;
          }
          local_24 = local_24 + 1;
        } while (local_24 < 2);
LAB_00445c34:
        local_14 = local_14 + 1;
      } while (local_14 < g_CramTotalMaps);
    }
    shape_cramtex_cpp_CCramTex_runInteractiveAtlasGeneration_FUN_00446160
              (g_CramSortedTextureEntries + g_CramPlacedTextureCount);
    if ((g_CramAtlasDimension + -1 + g_CramPaddingSize * g_CramCurrentAcceptableSize) /
        g_CramAtlasDimension <= g_CramPaddingCalculation) {
      iVar12 = 0;
      shape_cramtex_cpp_CCramTex_visualizeTextureAtlas_FUN_00447f20((CCramTex *)0x1,1,0,seed);
      if (0 < g_CramTextureCount) {
        pCVar9 = g_CramSortedTextureEntries;
        do {
          iVar13 = g_CramPaddingCalculation / 2;
          iVar12 = iVar12 + 1;
          pCVar9->final_top = pCVar9->final_top + iVar13;
          pCVar9->final_right = pCVar9->final_right + iVar13;
          pCVar9->final_bottom = pCVar9->final_bottom + iVar13;
          iVar10 = g_CramTextureCount;
          pCVar9->final_left = pCVar9->final_left + iVar13;
          pCVar9 = pCVar9 + 1;
        } while (iVar12 < iVar10);
      }
      p_Var11 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                          ("..\\shape\\CramTex.txt",(char *)0x0,"wt",
                           "..\\shape\\cramtex.cpp",0x271);
      if (p_Var11 != (_FILE *)0x0) {
        if (0 < g_CramTextureCount) {
          pCVar9 = g_CramSortedTextureEntries;
          iVar12 = 0;
          do {
            piVar1 = &pCVar9->rotation_applied;
            piVar7 = &pCVar9->final_bottom;
            piVar2 = &pCVar9->final_right;
            piVar3 = &pCVar9->final_top;
            piVar4 = &pCVar9->final_left;
            piVar5 = &pCVar9->working_map_id;
            piVar6 = &pCVar9->height;
            piVar8 = &pCVar9->width;
            pCVar9 = pCVar9 + 1;
            iVar10 = iVar12 + 1;
            _fprintf(p_Var11,"%2d: %5dx%-5d  Page %d (%5d,%-5d)-(%5d,%-5d)    Rotated: %d\n",iVar12,*piVar8,*piVar6,*piVar5,
                       *piVar4,*piVar3,*piVar2,*piVar7,*piVar1);
            iVar12 = iVar10;
          } while (iVar10 < g_CramTextureCount);
        }
        _fprintf(p_Var11,"%ux%u square found using %u padding.\n",g_CramCurrentAcceptableSize,
                   g_CramCurrentAcceptableSize,g_CramPaddingCalculation);
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var11,"..\\shape\\cramtex.cpp",0x274);
      }
      srand(seed);
      return;
    }
    if (g_CramAcceptableSize < g_CramCurrentAcceptableSize) {
      g_CramAcceptableSize = g_CramCurrentAcceptableSize;
    }
    g_CramAcceptableSize = g_CramAcceptableSize + 1;
    p_Var11 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                        ("..\\shape\\cramlog.txt",(char *)0x0,"at",
                         "..\\shape\\cramtex.cpp",0x24f);
    if (p_Var11 != (_FILE *)0x0) {
      _fprintf(p_Var11,"UNDERESTIMATED PAD!!\n");
      _fprintf(p_Var11,"acceptableSize now adjusted to %d\n",g_CramAcceptableSize);
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var11,"..\\shape\\cramtex.cpp",0x253);
    }
  } while( true );
}
