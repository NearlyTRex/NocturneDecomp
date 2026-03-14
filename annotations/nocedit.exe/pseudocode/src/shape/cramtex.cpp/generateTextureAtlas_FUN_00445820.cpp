// Name: shape_cramtex.cpp_generateTextureAtlas_FUN_00445820
// Address: 00445820
// Address Range: [[00445820, 004460ff]]
// Convention: __cdecl
// Signature: void __cdecl shape_cramtex_cpp_generateTextureAtlas_FUN_00445820(int acceptable_coverage)

#include "nocturne.h"

void __cdecl shape_cramtex_cpp_generateTextureAtlas_FUN_00445820(int acceptable_coverage)

{
  int *piVar9;
  int *piVar10;
  uint seed;
  CCramTex *pCVar9;
  int iVar11;
  int iVar10;
  _FILE *p_Var11;
  CCramTex *pCVar12;
  _FILE *p_Var13;
  int iVar12;
  int iVar16;
  int iVar13;
  int iVar17;
  int iVar14;
  int iVar15;
  int iVar18;
  int local_3c;
  int local_34;
  int local_2c;
  int local_24;
  SCramRectangle *local_20;
  SCramRectangle *local_1c;
  SCramRectangle *local_18;
  int local_14;
  int *piVar2;
  int *piVar1;
  int *piVar8;
  int *piVar7;
  int *piVar6;
  int *piVar5;
  int *piVar4;
  int *piVar3;
  
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
  iVar11 = (g_CramTotalPixelArea * 100) / acceptable_coverage;
  for (; iVar10 = g_CramAcceptableSize * g_CramAcceptableSize * g_CramTotalMaps,
      iVar10 - iVar11 == 0 || iVar10 < iVar11; g_CramAcceptableSize = g_CramAcceptableSize + 1) {
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
    iVar11 = 0;
    g_CramCandidateWriteCursor = g_CramCandidateRectangles;
    do {
      iVar11 = iVar11 + 1;
      iVar16 = 0;
      if (0 < g_CramTextureCount) {
        pCVar12 = g_CramSortedTextureEntries;
        do {
          iVar13 = pCVar12->width + g_CramPaddingCalculation;
          if (g_CramAcceptableSize < iVar13) {
            g_CramAcceptableSize = iVar13;
          }
          iVar17 = pCVar12->height + g_CramPaddingCalculation;
          if (g_CramAcceptableSize < iVar17) {
            g_CramAcceptableSize = iVar17;
          }
          iVar16 = iVar16 + 1;
          pCVar12 = pCVar12 + 1;
        } while (iVar16 < g_CramTextureCount);
      }
      iVar16 = g_CramAcceptableSize * 5 >> 0x1f;
      iVar16 = (g_CramAtlasDimension + -1 +
               ((int)((g_CramAcceptableSize * 5 + iVar16 * -4) - (uint)(iVar16 << 1 < 0)) >> 2) *
               g_CramPaddingSize) / g_CramAtlasDimension;
      if (iVar16 <= local_3c) {
        iVar16 = local_3c + 1;
      }
      p_Var13 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                          ("..\\shape\\cramlog.txt",(char *)0x0,"at",
                           "..\\shape\\cramtex.cpp",0x206);
      if (p_Var13 != (_FILE *)0x0) {
        _fprintf(p_Var13,"Guess #%d\n",iVar11);
        _fprintf(p_Var13,"  acceptableSize = %d\n",g_CramAcceptableSize);
        _fprintf(p_Var13,"  estimated pad = %d\n",iVar16);
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var13,"..\\shape\\cramtex.cpp",0x20b);
      }
    } while ((iVar16 != g_CramPaddingCalculation) &&
            (g_CramPaddingCalculation = iVar16, iVar11 < 10));
    iVar11 = 0;
    local_3c = g_CramPaddingCalculation;
    g_CramRectangleCount = 0;
    g_CramBestSolutionMetric2 = 999999;
    g_CramBestSolutionMetric1 = 999999;
    g_CramMinPlacementX = 999999;
    g_CramMinPlacementY = 999999;
    g_CramCurrentAcceptableSize = g_CramAcceptableSize;
    if (0 < g_CramTextureCount) {
      pCVar12 = g_CramSortedTextureEntries;
      do {
        iVar16 = g_CramPaddingCalculation;
        pCVar12->padded_width = pCVar12->width + g_CramPaddingCalculation;
        pCVar12->padded_height = pCVar12->height + iVar16;
        if (pCVar12->padded_width < g_CramMinPlacementX) {
          g_CramMinPlacementX = pCVar12->padded_width;
        }
        if (pCVar12->padded_height < g_CramMinPlacementY) {
          g_CramMinPlacementY = pCVar12->padded_height;
        }
        iVar11 = iVar11 + 1;
        pCVar12 = pCVar12 + 1;
      } while (iVar11 < g_CramTextureCount);
    }
    iVar11 = g_CramSortedTextureEntries[0].padded_height;
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
      iVar16 = 0;
      do {
        if (((*(int *)((int)&g_CramRectangles[0].map_id + iVar16) == 0) &&
            (*(int *)((int)&g_CramRectangles[0].start_x + iVar16) == 0)) &&
           (g_CramSortedTextureEntries[0].padded_height ==
            *(int *)((int)&g_CramRectangles[0].start_y + iVar16))) goto LAB_00445b8a;
        iVar16 = iVar16 + 0x28;
      } while (iVar16 < g_CramRectangleCount * 0x28);
    }
    local_34 = 0;
    local_20 = g_CramRectangles + g_CramRectangleCount;
    do {
      iVar16 = g_CramMinPlacementY;
      iVar17 = g_CramMinPlacementX;
      if (local_34 != 0) {
        iVar16 = g_CramMinPlacementX;
        iVar17 = g_CramMinPlacementY;
      }
      iVar14 = g_CramPlacedTextureCount + -1;
      if (-1 < iVar14) {
        pCVar12 = g_CramSortedTextureEntries + iVar14;
        do {
          if (((pCVar12->assigned_map_number == 0) && (0 < pCVar12->working_top)) &&
             ((iVar11 < pCVar12->working_width &&
              ((pCVar12->placement_bottom < iVar17 && (pCVar12->working_right < iVar16 + iVar11)))))
             ) break;
          iVar14 = iVar14 + -1;
          pCVar12 = pCVar12 + -1;
        } while (-1 < iVar14);
      }
      if (iVar14 < 0) {
        local_20->occupant = 0;
        local_20->active_flag = 1;
        local_20->map_id = 0;
        local_20->start_x = 0;
        local_20->start_y = iVar11;
        local_20->end_x = iVar17;
        local_20->orientation = local_34;
        local_20->end_y = iVar16 + iVar11;
        g_CramRectangleCount = g_CramRectangleCount + 1;
        local_20 = local_20 + 1;
      }
      local_34 = local_34 + 1;
    } while (local_34 < 2);
LAB_00445b8a:
    iVar16 = g_CramSortedTextureEntries[0].working_top;
    iVar11 = g_CramSortedTextureEntries[0].working_right;
    if (0 < g_CramRectangleCount) {
      iVar17 = 0;
      do {
        if (((*(int *)((int)&g_CramRectangles[0].map_id + iVar17) == 0) &&
            (g_CramSortedTextureEntries[0].working_top ==
             *(int *)((int)&g_CramRectangles[0].start_x + iVar17))) &&
           (g_CramSortedTextureEntries[0].working_right ==
            *(int *)((int)&g_CramRectangles[0].start_y + iVar17))) goto LAB_00445bd9;
        iVar17 = iVar17 + 0x28;
      } while (iVar17 < g_CramRectangleCount * 0x28);
    }
    local_1c = g_CramRectangles + g_CramRectangleCount;
    local_2c = 0;
    do {
      iVar17 = g_CramMinPlacementX;
      iVar18 = g_CramMinPlacementY;
      if (local_2c != 0) {
        iVar17 = g_CramMinPlacementY;
        iVar18 = g_CramMinPlacementX;
      }
      iVar15 = g_CramPlacedTextureCount + -1;
      if (-1 < iVar15) {
        pCVar12 = g_CramSortedTextureEntries + iVar15;
        do {
          if (((pCVar12->assigned_map_number == 0) && (iVar16 < pCVar12->working_top)) &&
             ((iVar11 < pCVar12->working_width &&
              ((pCVar12->placement_bottom < iVar17 + iVar16 &&
               (pCVar12->working_right < iVar18 + iVar11)))))) break;
          iVar15 = iVar15 + -1;
          pCVar12 = pCVar12 + -1;
        } while (-1 < iVar15);
      }
      if (iVar15 < 0) {
        local_1c->occupant = 0;
        local_1c->active_flag = 1;
        local_1c->map_id = 0;
        local_1c->start_x = iVar16;
        local_1c->start_y = iVar11;
        local_1c->end_x = iVar17 + iVar16;
        local_1c->orientation = local_2c;
        local_1c->end_y = iVar18 + iVar11;
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
          iVar11 = 0;
          do {
            if (((local_14 == *(int *)((int)&g_CramRectangles[0].map_id + iVar11)) &&
                (*(int *)((int)&g_CramRectangles[0].start_x + iVar11) == 0)) &&
               (*(int *)((int)&g_CramRectangles[0].start_y + iVar11) == 0)) goto LAB_00445c34;
            iVar11 = iVar11 + 0x28;
          } while (iVar11 < g_CramRectangleCount * 0x28);
        }
        local_18 = g_CramRectangles + g_CramRectangleCount;
        local_24 = 0;
        do {
          iVar11 = g_CramMinPlacementY;
          iVar16 = g_CramMinPlacementX;
          if (local_24 != 0) {
            iVar11 = g_CramMinPlacementX;
            iVar16 = g_CramMinPlacementY;
          }
          iVar17 = g_CramPlacedTextureCount + -1;
          if (-1 < iVar17) {
            pCVar12 = g_CramSortedTextureEntries + iVar17;
            do {
              if (((pCVar12->assigned_map_number == local_14) && (0 < pCVar12->working_top)) &&
                 ((0 < pCVar12->working_width &&
                  ((pCVar12->placement_bottom < iVar16 && (pCVar12->working_right < iVar11))))))
              break;
              iVar17 = iVar17 + -1;
              pCVar12 = pCVar12 + -1;
            } while (-1 < iVar17);
          }
          if (iVar17 < 0) {
            local_18->occupant = 0;
            local_18->active_flag = 1;
            local_18->map_id = local_14;
            local_18->start_x = 0;
            local_18->start_y = 0;
            local_18->end_x = iVar16;
            local_18->orientation = local_24;
            local_18->end_y = iVar11;
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
      iVar11 = 0;
      shape_cramtex_cpp_visualizeTextureAtlas_FUN_00447f20(1,1,0);
      if (0 < g_CramTextureCount) {
        pCVar12 = g_CramSortedTextureEntries;
        do {
          iVar17 = g_CramPaddingCalculation / 2;
          iVar11 = iVar11 + 1;
          pCVar12->final_top = pCVar12->final_top + iVar17;
          pCVar12->final_right = pCVar12->final_right + iVar17;
          pCVar12->final_bottom = pCVar12->final_bottom + iVar17;
          iVar16 = g_CramTextureCount;
          pCVar12->final_left = pCVar12->final_left + iVar17;
          pCVar12 = pCVar12 + 1;
        } while (iVar11 < iVar16);
      }
      p_Var13 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                          ("..\\shape\\CramTex.txt",(char *)0x0,"wt",
                           "..\\shape\\cramtex.cpp",0x271);
      if (p_Var13 != (_FILE *)0x0) {
        if (0 < g_CramTextureCount) {
          pCVar12 = g_CramSortedTextureEntries;
          iVar11 = 0;
          do {
            piVar9 = &pCVar12->rotation_applied;
            piVar10 = &pCVar12->final_bottom;
            piVar2 = &pCVar12->final_right;
            piVar3 = &pCVar12->final_top;
            piVar4 = &pCVar12->final_left;
            piVar5 = &pCVar12->working_map_id;
            piVar6 = &pCVar12->height;
            piVar8 = &pCVar12->width;
            pCVar12 = pCVar12 + 1;
            iVar16 = iVar11 + 1;
            _fprintf(p_Var13,"%2d: %5dx%-5d  Page %d (%5d,%-5d)-(%5d,%-5d)    Rotated: %d\n",iVar11,*piVar8,*piVar6,*piVar5,
                       *piVar4,*piVar3,*piVar2,*piVar10,*piVar9);
            iVar11 = iVar16;
          } while (iVar16 < g_CramTextureCount);
        }
        _fprintf(p_Var13,"%ux%u square found using %u padding.\n",g_CramCurrentAcceptableSize,
                   g_CramCurrentAcceptableSize,g_CramPaddingCalculation);
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var13,"..\\shape\\cramtex.cpp",0x274);
      }
      srand(seed);
      return;
    }
    if (g_CramAcceptableSize < g_CramCurrentAcceptableSize) {
      g_CramAcceptableSize = g_CramCurrentAcceptableSize;
    }
    g_CramAcceptableSize = g_CramAcceptableSize + 1;
    p_Var13 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                        ("..\\shape\\cramlog.txt",(char *)0x0,"at",
                         "..\\shape\\cramtex.cpp",0x24f);
    if (p_Var13 != (_FILE *)0x0) {
      _fprintf(p_Var13,"UNDERESTIMATED PAD!!\n");
      _fprintf(p_Var13,"acceptableSize now adjusted to %d\n",g_CramAcceptableSize);
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var13,"..\\shape\\cramtex.cpp",0x253);
    }
  } while( true );
}
