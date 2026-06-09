// Name: shape_cramtex.cpp_generateTextureAtlasLayout_FUN_00444d90
// Address: 00444d90
// MANUAL RECONSTRUCTION
// Address Range: [[00444d90, 004457e3]]
// Convention: __cdecl
// Signature: int __cdecl shape_cramtex_cpp_generateTextureAtlasLayout_FUN_00444d90(int texture_count,STextureAtlasEntry *texture_entries,int atlas_width,int atlas_height,int acceptable_coverage_threshold,int acceptable_size,int *output_atlas_width,int *output_atlas_height,int padding_size,int fill_gaps,int visualize,int max_iterations)

#include "nocturne.h"

int __cdecl shape_cramtex_cpp_generateTextureAtlasLayout_FUN_00444d90(int texture_count,STextureAtlasEntry *texture_entries,int atlas_width,int atlas_height,int acceptable_coverage_threshold,int acceptable_size,int *output_atlas_width,int *output_atlas_height,int padding_size,int fill_gaps,int visualize,int max_iterations)

{
  int *piVar7;
  int *piVar10;
  uint seed;
  CCramTex *pCVar11;
  int iVar11;
  int iVar12;
  _FILE *p_Var12;
  CCramTex *pCVar13;
  _FILE *p_Var14;
  int iVar13;
  int iVar14;
  int iVar17;
  int iVar15;
  int iVar16;
  int iVar18;
  int local_3c;
  int local_34;
  int local_2c;
  int local_24;
  SCramRectangle *local_20;
  SCramRectangle *local_1c;
  SCramRectangle *local_18;
  int local_14;
  int *piVar6;
  int *piVar5;
  int *piVar9;
  int *piVar8;
  STextureAtlasEntry *pSVar7;
  int *piVar2;
  int *piVar1;
  int *piVar4;
  int *piVar3;
  
  g_CramTextureCount = texture_count;
  g_CramAtlasDimension = atlas_width;
  g_CramPaddingSize = atlas_height;
  g_CramAcceptableSize = acceptable_size;
  g_CramTotalMaps = padding_size;
  g_CramVisualizationFlag = visualize;
  g_CramFillGaps = fill_gaps;
  g_CramIterationCount = 0;
  g_CramMaxIterationsLimit = max_iterations;
  g_CramStartTime = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  if (0 < texture_count) {
    iVar11 = 0;
    do {
      g_CramSortedTextureEntries[iVar11].source_entry_ptr = texture_entries;
      g_CramSortedTextureEntries[iVar11].width = texture_entries->processed_width;
      piVar6 = &texture_entries->processed_height;
      texture_entries = texture_entries + 1;
      g_CramSortedTextureEntries[iVar11].height = *piVar6;
      iVar11 = iVar11 + 1;
    } while (iVar11 < texture_count);
  }
  remove("..\\shape\\cramlog.txt");
  seed = rand();
  srand(0x16);
  _qsort
            (g_CramSortedTextureEntries,g_CramTextureCount,0x4c,
             shape_cramtex_cpp_qsortByLargestDimension_FUN_004457f0);
  g_CramTotalPixelArea = 0;
  iVar13 = 0;
  if (0 < g_CramTextureCount) {
    pCVar11 = g_CramSortedTextureEntries;
    do {
      piVar8 = &pCVar11->width;
      piVar7 = &pCVar11->height;
      pCVar11 = pCVar11 + 1;
      g_CramTotalPixelArea = g_CramTotalPixelArea + *piVar8 * *piVar7;
      iVar13 = iVar13 + 1;
    } while (iVar13 < g_CramTextureCount);
  }
  iVar11 = (g_CramTotalPixelArea * 100) / acceptable_coverage_threshold;
  for (; iVar12 = g_CramAcceptableSize * g_CramAcceptableSize * g_CramTotalMaps,
      iVar12 - iVar11 == 0 || iVar12 < iVar11; g_CramAcceptableSize = g_CramAcceptableSize + 1) {
  }
  g_CramPaddingCalculation =
       (g_CramAtlasDimension + -1 + g_CramPaddingSize * g_CramAcceptableSize) / g_CramAtlasDimension
  ;
  p_Var12 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                      ("..\\shape\\cramlog.txt",(char *)0x0,"at",
                       "..\\shape\\cramtex.cpp",0x1e3);
  if (p_Var12 != (_FILE *)0x0) {
    _fprintf(p_Var12,"initial pad guess = %d\n",g_CramPaddingCalculation);
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var12,"..\\shape\\cramtex.cpp",0x1e6);
  }
  local_3c = -1;
  do {
    iVar11 = 0;
    g_CramCandidateWriteCursor = g_CramCandidateRectangles;
    do {
      iVar11 = iVar11 + 1;
      iVar12 = 0;
      if (0 < g_CramTextureCount) {
        pCVar13 = g_CramSortedTextureEntries;
        do {
          iVar14 = pCVar13->width + g_CramPaddingCalculation;
          if (g_CramAcceptableSize < iVar14) {
            g_CramAcceptableSize = iVar14;
          }
          iVar17 = pCVar13->height + g_CramPaddingCalculation;
          if (g_CramAcceptableSize < iVar17) {
            g_CramAcceptableSize = iVar17;
          }
          iVar12 = iVar12 + 1;
          pCVar13 = pCVar13 + 1;
        } while (iVar12 < g_CramTextureCount);
      }
      iVar12 = g_CramAcceptableSize * 5 >> 0x1f;
      iVar12 = (g_CramAtlasDimension + -1 +
               ((int)((g_CramAcceptableSize * 5 + iVar12 * -4) - (uint)(iVar12 << 1 < 0)) >> 2) *
               g_CramPaddingSize) / g_CramAtlasDimension;
      if (iVar12 <= local_3c) {
        iVar12 = local_3c + 1;
      }
      p_Var14 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                          ("..\\shape\\cramlog.txt",(char *)0x0,"at",
                           "..\\shape\\cramtex.cpp",0x206);
      if (p_Var14 != (_FILE *)0x0) {
        _fprintf(p_Var14,"Guess #%d\n",iVar11);
        _fprintf(p_Var14,"  acceptableSize = %d\n",g_CramAcceptableSize);
        _fprintf(p_Var14,"  estimated pad = %d\n",iVar12);
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var14,"..\\shape\\cramtex.cpp",0x20b);
      }
    } while ((iVar12 != g_CramPaddingCalculation) &&
            (g_CramPaddingCalculation = iVar12, iVar11 < 10));
    iVar11 = 0;
    local_3c = g_CramPaddingCalculation;
    g_CramRectangleCount = 0;
    g_CramBestSolutionMetric2 = 999999;
    g_CramBestSolutionMetric1 = 999999;
    g_CramMinPlacementX = 999999;
    g_CramCurrentAcceptableSize = g_CramAcceptableSize;
    g_CramMinPlacementY = 999999;
    if (0 < g_CramTextureCount) {
      pCVar13 = g_CramSortedTextureEntries;
      do {
        iVar12 = g_CramPaddingCalculation;
        pCVar13->padded_width = pCVar13->width + g_CramPaddingCalculation;
        pCVar13->padded_height = pCVar13->height + iVar12;
        if (pCVar13->padded_width < g_CramMinPlacementX) {
          g_CramMinPlacementX = pCVar13->padded_width;
        }
        if (pCVar13->padded_height < g_CramMinPlacementY) {
          g_CramMinPlacementY = pCVar13->padded_height;
        }
        iVar11 = iVar11 + 1;
        pCVar13 = pCVar13 + 1;
      } while (iVar11 < g_CramTextureCount);
    }
    iVar11 = g_CramSortedTextureEntries[0].padded_height;
    g_CramOptimalPlacement = g_CramMinPlacementX;
    if (g_CramMinPlacementY <= g_CramMinPlacementX) {
      g_CramOptimalPlacement = g_CramMinPlacementY;
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
      iVar12 = 0;
      do {
        if (((g_CramRectangles[iVar12].map_id == 0) &&
            (g_CramRectangles[iVar12].start_x == 0)) &&
           (g_CramSortedTextureEntries[0].padded_height ==
            g_CramRectangles[iVar12].start_y)) goto LAB_004451a8;
        iVar12 = iVar12 + 1;
      } while (iVar12 < g_CramRectangleCount);
    }
    local_34 = 0;
    local_20 = g_CramRectangles + g_CramRectangleCount;
    do {
      iVar12 = g_CramMinPlacementX;
      iVar17 = g_CramMinPlacementY;
      if (local_34 != 0) {
        iVar12 = g_CramMinPlacementY;
        iVar17 = g_CramMinPlacementX;
      }
      iVar15 = g_CramPlacedTextureCount + -1;
      if (-1 < iVar15) {
        pCVar13 = g_CramSortedTextureEntries + iVar15;
        do {
          if (((pCVar13->assigned_map_number == 0) && (0 < pCVar13->working_top)) &&
             ((iVar11 < pCVar13->working_width &&
              ((pCVar13->placement_bottom < iVar12 && (pCVar13->working_right < iVar17 + iVar11)))))
             ) break;
          iVar15 = iVar15 + -1;
          pCVar13 = pCVar13 + -1;
        } while (-1 < iVar15);
      }
      if (iVar15 < 0) {
        local_20->occupant = 0;
        local_20->active_flag = 1;
        local_20->map_id = 0;
        local_20->start_x = 0;
        local_20->start_y = iVar11;
        local_20->end_x = iVar12;
        local_20->orientation = local_34;
        local_20->end_y = iVar17 + iVar11;
        g_CramRectangleCount = g_CramRectangleCount + 1;
        local_20 = local_20 + 1;
      }
      local_34 = local_34 + 1;
    } while (local_34 < 2);
LAB_004451a8:
    iVar12 = g_CramSortedTextureEntries[0].working_top;
    iVar11 = g_CramSortedTextureEntries[0].working_right;
    if (0 < g_CramRectangleCount) {
      iVar17 = 0;
      do {
        if (((g_CramRectangles[iVar17].map_id == 0) &&
            (g_CramSortedTextureEntries[0].working_top ==
             g_CramRectangles[iVar17].start_x)) &&
           (g_CramSortedTextureEntries[0].working_right ==
            g_CramRectangles[iVar17].start_y)) goto LAB_004451f7;
        iVar17 = iVar17 + 1;
      } while (iVar17 < g_CramRectangleCount);
    }
    local_1c = g_CramRectangles + g_CramRectangleCount;
    local_2c = 0;
    do {
      iVar17 = g_CramMinPlacementY;
      iVar18 = g_CramMinPlacementX;
      if (local_2c != 0) {
        iVar17 = g_CramMinPlacementX;
        iVar18 = g_CramMinPlacementY;
      }
      iVar16 = g_CramPlacedTextureCount + -1;
      if (-1 < iVar16) {
        pCVar13 = g_CramSortedTextureEntries + iVar16;
        do {
          if (((pCVar13->assigned_map_number == 0) && (iVar12 < pCVar13->working_top)) &&
             ((iVar11 < pCVar13->working_width &&
              ((pCVar13->placement_bottom < iVar18 + iVar12 &&
               (pCVar13->working_right < iVar17 + iVar11)))))) break;
          iVar16 = iVar16 + -1;
          pCVar13 = pCVar13 + -1;
        } while (-1 < iVar16);
      }
      if (iVar16 < 0) {
        local_1c->occupant = 0;
        local_1c->active_flag = 1;
        local_1c->map_id = 0;
        local_1c->start_x = iVar12;
        local_1c->start_y = iVar11;
        local_1c->end_x = iVar18 + iVar12;
        local_1c->orientation = local_2c;
        local_1c->end_y = iVar17 + iVar11;
        g_CramRectangleCount = g_CramRectangleCount + 1;
        local_1c = local_1c + 1;
      }
      local_2c = local_2c + 1;
    } while (local_2c < 2);
LAB_004451f7:
    local_14 = 1;
    if (1 < g_CramTotalMaps) {
      do {
        if (0 < g_CramRectangleCount) {
          iVar11 = 0;
          do {
            if (((local_14 == g_CramRectangles[iVar11].map_id) &&
                (g_CramRectangles[iVar11].start_x == 0)) &&
               (g_CramRectangles[iVar11].start_y == 0)) goto LAB_00445252;
            iVar11 = iVar11 + 1;
          } while (iVar11 < g_CramRectangleCount);
        }
        local_18 = g_CramRectangles + g_CramRectangleCount;
        local_24 = 0;
        do {
          iVar11 = g_CramMinPlacementX;
          iVar12 = g_CramMinPlacementY;
          if (local_24 != 0) {
            iVar11 = g_CramMinPlacementY;
            iVar12 = g_CramMinPlacementX;
          }
          iVar17 = g_CramPlacedTextureCount + -1;
          if (-1 < iVar17) {
            pCVar13 = g_CramSortedTextureEntries + iVar17;
            do {
              if (((pCVar13->assigned_map_number == local_14) && (0 < pCVar13->working_top)) &&
                 ((0 < pCVar13->working_width &&
                  ((pCVar13->placement_bottom < iVar11 && (pCVar13->working_right < iVar12))))))
              break;
              iVar17 = iVar17 + -1;
              pCVar13 = pCVar13 + -1;
            } while (-1 < iVar17);
          }
          if (iVar17 < 0) {
            local_18->occupant = 0;
            local_18->active_flag = 1;
            local_18->map_id = local_14;
            local_18->start_x = 0;
            local_18->start_y = 0;
            local_18->end_x = iVar11;
            local_18->orientation = local_24;
            local_18->end_y = iVar12;
            g_CramRectangleCount = g_CramRectangleCount + 1;
            local_18 = local_18 + 1;
          }
          local_24 = local_24 + 1;
        } while (local_24 < 2);
LAB_00445252:
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
        pCVar13 = g_CramSortedTextureEntries;
        do {
          iVar17 = g_CramPaddingCalculation / 2;
          iVar11 = iVar11 + 1;
          pCVar13->final_top = pCVar13->final_top + iVar17;
          pCVar13->final_right = pCVar13->final_right + iVar17;
          pCVar13->final_bottom = pCVar13->final_bottom + iVar17;
          iVar12 = g_CramTextureCount;
          pCVar13->final_left = pCVar13->final_left + iVar17;
          pCVar13 = pCVar13 + 1;
        } while (iVar11 < iVar12);
      }
      p_Var14 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                          ("..\\shape\\CramTex.txt",(char *)0x0,"wt",
                           "..\\shape\\cramtex.cpp",0x271);
      if (p_Var14 != (_FILE *)0x0) {
        if (0 < g_CramTextureCount) {
          pCVar13 = g_CramSortedTextureEntries;
          iVar11 = 0;
          do {
            piVar7 = &pCVar13->rotation_applied;
            piVar10 = &pCVar13->final_bottom;
            piVar1 = &pCVar13->final_right;
            piVar2 = &pCVar13->final_top;
            piVar3 = &pCVar13->final_left;
            piVar4 = &pCVar13->working_map_id;
            piVar5 = &pCVar13->height;
            piVar9 = &pCVar13->width;
            pCVar13 = pCVar13 + 1;
            iVar12 = iVar11 + 1;
            _fprintf(p_Var14,"%2d: %5dx%-5d  Page %d (%5d,%-5d)-(%5d,%-5d)    Rotated: %d\n",iVar11,*piVar9,*piVar5,*piVar4,
                       *piVar3,*piVar2,*piVar1,*piVar10,*piVar7);
            iVar11 = iVar12;
          } while (iVar12 < g_CramTextureCount);
        }
        _fprintf(p_Var14,"%ux%u square found using %u padding.\n",g_CramCurrentAcceptableSize,
                   g_CramCurrentAcceptableSize,g_CramPaddingCalculation);
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var14,"..\\shape\\cramtex.cpp",0x274);
      }
      srand(seed);
      iVar11 = 0;
      if (0 < texture_count) {
        pCVar13 = g_CramSortedTextureEntries;
        do {
          pSVar7 = pCVar13->source_entry_ptr;
          pSVar7->atlas_map_index = pCVar13->working_map_id;
          pSVar7->rotation_flag = pCVar13->rotation_applied;
          pSVar7->atlas_x = pCVar13->final_left;
          pSVar7->atlas_y = pCVar13->final_top;
          if (pSVar7->rotation_flag == 0) {
            pSVar7->atlas_width =
                 (pCVar13->final_right - pCVar13->final_left) - g_CramPaddingCalculation;
            pSVar7->atlas_height =
                 (pCVar13->final_bottom - pCVar13->final_top) - g_CramPaddingCalculation;
          }
          else {
            pSVar7->atlas_height =
                 (pCVar13->final_right - pCVar13->final_left) - g_CramPaddingCalculation;
            pSVar7->atlas_width =
                 (pCVar13->final_bottom - pCVar13->final_top) - g_CramPaddingCalculation;
          }
          iVar11 = iVar11 + 1;
          pCVar13 = pCVar13 + 1;
        } while (iVar11 < texture_count);
      }
      iVar11 = g_CramCurrentAcceptableSize;
      *output_atlas_height = g_CramCurrentAcceptableSize;
      *output_atlas_width = iVar11;
      return 0;
    }
    if (g_CramAcceptableSize < g_CramCurrentAcceptableSize) {
      g_CramAcceptableSize = g_CramCurrentAcceptableSize;
    }
    g_CramAcceptableSize = g_CramAcceptableSize + 1;
    p_Var14 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                        ("..\\shape\\cramlog.txt",(char *)0x0,"at",
                         "..\\shape\\cramtex.cpp",0x24f);
    if (p_Var14 != (_FILE *)0x0) {
      _fprintf(p_Var14,"UNDERESTIMATED PAD!!\n");
      _fprintf(p_Var14,"acceptableSize now adjusted to %d\n",g_CramAcceptableSize);
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var14,"..\\shape\\cramtex.cpp",0x253);
    }
  } while( true );
}
