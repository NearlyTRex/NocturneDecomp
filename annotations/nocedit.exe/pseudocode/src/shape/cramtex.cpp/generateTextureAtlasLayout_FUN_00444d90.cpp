// Name: shape_cramtex.cpp_generateTextureAtlasLayout_FUN_00444d90
// Address: 00444d90
// Address Range: [[00444d90, 004457e3]]
// Convention: __cdecl
// Signature: int __cdecl shape_cramtex_cpp_generateTextureAtlasLayout_FUN_00444d90(int texture_count,STextureAtlasEntry *texture_entries,int atlas_width,int atlas_height,int acceptable_coverage_threshold,int acceptable_size,int *output_atlas_width,int *output_atlas_height,int padding_size,int fill_gaps,int visualize,int max_iterations)

#include "nocturne.h"

int __cdecl shape_cramtex_cpp_generateTextureAtlasLayout_FUN_00444d90(int texture_count,STextureAtlasEntry *texture_entries,int atlas_width,int atlas_height,int acceptable_coverage_threshold,int acceptable_size,int *output_atlas_width,int *output_atlas_height,int padding_size,int fill_gaps,int visualize,int max_iterations)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  STextureAtlasEntry *pSVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  uint seed;
  CCramTex *pCVar11;
  _FILE *p_Var12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int local_3c;
  int local_34;
  int local_2c;
  int local_24;
  SCramRectangle *local_20;
  SCramRectangle *local_1c;
  SCramRectangle *local_18;
  int local_14;
  
  g_CramTextureCount = texture_count;
  g_CramAtlasWidth = atlas_width;
  g_CramAtlasHeight = atlas_height;
  g_CramAcceptableSize = acceptable_size;
  g_CramTotalMaps = padding_size;
  g_CramVisualizationFlag = visualize;
  g_CramFillGaps = fill_gaps;
  g_CramIterationCount = 0;
  g_CramMaxIterationsLimit = max_iterations;
  g_CramStartTime = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  if (0 < texture_count) {
    iVar13 = 0;
    do {
      *(STextureAtlasEntry **)((int)&g_CramSortedTextureEntries[0].source_entry_ptr + iVar13) =
           texture_entries;
      *(int *)((int)&g_CramSortedTextureEntries[0].width + iVar13) =
           texture_entries->processed_width;
      iVar10 = iVar13 + 0x4c;
      piVar6 = &texture_entries->processed_height;
      texture_entries = texture_entries + 1;
      *(int *)((int)&g_CramSortedTextureEntries[0].height + iVar13) = *piVar6;
      iVar13 = iVar10;
    } while (iVar10 < texture_count * 0x4c);
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
      piVar6 = &pCVar11->height;
      pCVar11 = pCVar11 + 1;
      g_CramTotalPixelArea = g_CramTotalPixelArea + *piVar8 * *piVar6;
      iVar13 = iVar13 + 1;
    } while (iVar13 < g_CramTextureCount);
  }
  iVar13 = (g_CramTotalPixelArea * 100) / acceptable_coverage_threshold;
  for (; iVar10 = g_CramAcceptableSize * g_CramAcceptableSize * g_CramTotalMaps,
      iVar10 - iVar13 == 0 || iVar10 < iVar13; g_CramAcceptableSize = g_CramAcceptableSize + 1) {
  }
  g_CramPaddingCalculation =
       (g_CramAtlasWidth + -1 + g_CramAtlasHeight * g_CramAcceptableSize) / g_CramAtlasWidth;
  p_Var12 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                      ("..\\shape\\cramlog.txt",(char *)0x0,"at",
                       "..\\shape\\cramtex.cpp",0x1e3);
  if (p_Var12 != (_FILE *)0x0) {
    _fprintf(p_Var12,"initial pad guess = %d\n",g_CramPaddingCalculation);
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var12,"..\\shape\\cramtex.cpp",0x1e6);
  }
  local_3c = -1;
  do {
    iVar13 = 0;
    g_CramAlgorithmState = &DAT_0084a8b0;
    do {
      iVar13 = iVar13 + 1;
      iVar10 = 0;
      if (0 < g_CramTextureCount) {
        pCVar11 = g_CramSortedTextureEntries;
        do {
          iVar14 = pCVar11->width + g_CramPaddingCalculation;
          if (g_CramAcceptableSize < iVar14) {
            g_CramAcceptableSize = iVar14;
          }
          iVar14 = pCVar11->height + g_CramPaddingCalculation;
          if (g_CramAcceptableSize < iVar14) {
            g_CramAcceptableSize = iVar14;
          }
          iVar10 = iVar10 + 1;
          pCVar11 = pCVar11 + 1;
        } while (iVar10 < g_CramTextureCount);
      }
      iVar10 = g_CramAcceptableSize * 5 >> 0x1f;
      iVar10 = (g_CramAtlasWidth + -1 +
               ((int)((g_CramAcceptableSize * 5 + iVar10 * -4) - (uint)(iVar10 << 1 < 0)) >> 2) *
               g_CramAtlasHeight) / g_CramAtlasWidth;
      if (iVar10 <= local_3c) {
        iVar10 = local_3c + 1;
      }
      p_Var12 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                          ("..\\shape\\cramlog.txt",(char *)0x0,"at",
                           "..\\shape\\cramtex.cpp",0x206);
      if (p_Var12 != (_FILE *)0x0) {
        _fprintf(p_Var12,"Guess #%d\n",iVar13);
        _fprintf(p_Var12,"  acceptableSize = %d\n",g_CramAcceptableSize);
        _fprintf(p_Var12,"  estimated pad = %d\n",iVar10);
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var12,"..\\shape\\cramtex.cpp",0x20b);
      }
    } while ((iVar10 != g_CramPaddingCalculation) &&
            (g_CramPaddingCalculation = iVar10, iVar13 < 10));
    iVar13 = 0;
    local_3c = g_CramPaddingCalculation;
    g_CramRectangleCount = 0;
    g_CramBestSolutionMetric2 = 999999;
    g_CramBestSolutionMetric1 = 999999;
    g_CramMinPlacementX = 999999;
    g_CramCurrentAcceptableSize = g_CramAcceptableSize;
    g_CramMinPlacementY = 999999;
    if (0 < g_CramTextureCount) {
      pCVar11 = g_CramSortedTextureEntries;
      do {
        iVar10 = g_CramPaddingCalculation;
        pCVar11->padded_width = pCVar11->width + g_CramPaddingCalculation;
        pCVar11->padded_height = pCVar11->height + iVar10;
        if (pCVar11->padded_width < g_CramMinPlacementX) {
          g_CramMinPlacementX = pCVar11->padded_width;
        }
        if (pCVar11->padded_height < g_CramMinPlacementY) {
          g_CramMinPlacementY = pCVar11->padded_height;
        }
        iVar13 = iVar13 + 1;
        pCVar11 = pCVar11 + 1;
      } while (iVar13 < g_CramTextureCount);
    }
    iVar13 = g_CramSortedTextureEntries[0].padded_height;
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
      iVar10 = 0;
      do {
        if (((*(int *)((int)&g_CramRectangles[0].left + iVar10) == 0) &&
            (*(int *)((int)&g_CramRectangles[0].top + iVar10) == 0)) &&
           (g_CramSortedTextureEntries[0].padded_height ==
            *(int *)((int)&g_CramRectangles[0].right + iVar10))) goto LAB_004451a8;
        iVar10 = iVar10 + 0x28;
      } while (iVar10 < g_CramRectangleCount * 0x28);
    }
    local_34 = 0;
    local_20 = g_CramRectangles + g_CramRectangleCount;
    do {
      iVar10 = g_CramMinPlacementX;
      iVar14 = g_CramMinPlacementY;
      if (local_34 != 0) {
        iVar10 = g_CramMinPlacementY;
        iVar14 = g_CramMinPlacementX;
      }
      iVar15 = g_CramPlacedTextureCount + -1;
      if (-1 < iVar15) {
        pCVar11 = g_CramSortedTextureEntries + iVar15;
        do {
          if (((pCVar11->assigned_map_number == 0) && (0 < pCVar11->working_top)) &&
             ((iVar13 < pCVar11->working_width &&
              ((pCVar11->placement_bottom < iVar10 && (pCVar11->working_right < iVar14 + iVar13)))))
             ) break;
          iVar15 = iVar15 + -1;
          pCVar11 = pCVar11 + -1;
        } while (-1 < iVar15);
      }
      if (iVar15 < 0) {
        local_20->unk1 = 0;
        local_20->active_flag = 1;
        local_20->left = 0;
        local_20->top = 0;
        local_20->right = iVar13;
        local_20->bottom = iVar10;
        local_20->orientation = local_34;
        local_20->max_dimension = iVar14 + iVar13;
        g_CramRectangleCount = g_CramRectangleCount + 1;
        local_20 = local_20 + 1;
      }
      local_34 = local_34 + 1;
    } while (local_34 < 2);
LAB_004451a8:
    iVar10 = g_CramSortedTextureEntries[0].working_top;
    iVar13 = g_CramSortedTextureEntries[0].working_right;
    if (0 < g_CramRectangleCount) {
      iVar14 = 0;
      do {
        if (((*(int *)((int)&g_CramRectangles[0].left + iVar14) == 0) &&
            (g_CramSortedTextureEntries[0].working_top ==
             *(int *)((int)&g_CramRectangles[0].top + iVar14))) &&
           (g_CramSortedTextureEntries[0].working_right ==
            *(int *)((int)&g_CramRectangles[0].right + iVar14))) goto LAB_004451f7;
        iVar14 = iVar14 + 0x28;
      } while (iVar14 < g_CramRectangleCount * 0x28);
    }
    local_1c = g_CramRectangles + g_CramRectangleCount;
    local_2c = 0;
    do {
      iVar14 = g_CramMinPlacementY;
      iVar15 = g_CramMinPlacementX;
      if (local_2c != 0) {
        iVar14 = g_CramMinPlacementX;
        iVar15 = g_CramMinPlacementY;
      }
      iVar16 = g_CramPlacedTextureCount + -1;
      if (-1 < iVar16) {
        pCVar11 = g_CramSortedTextureEntries + iVar16;
        do {
          if (((pCVar11->assigned_map_number == 0) && (iVar10 < pCVar11->working_top)) &&
             ((iVar13 < pCVar11->working_width &&
              ((pCVar11->placement_bottom < iVar15 + iVar10 &&
               (pCVar11->working_right < iVar14 + iVar13)))))) break;
          iVar16 = iVar16 + -1;
          pCVar11 = pCVar11 + -1;
        } while (-1 < iVar16);
      }
      if (iVar16 < 0) {
        local_1c->unk1 = 0;
        local_1c->active_flag = 1;
        local_1c->left = 0;
        local_1c->top = iVar10;
        local_1c->right = iVar13;
        local_1c->bottom = iVar15 + iVar10;
        local_1c->orientation = local_2c;
        local_1c->max_dimension = iVar14 + iVar13;
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
          iVar13 = 0;
          do {
            if (((local_14 == *(int *)((int)&g_CramRectangles[0].left + iVar13)) &&
                (*(int *)((int)&g_CramRectangles[0].top + iVar13) == 0)) &&
               (*(int *)((int)&g_CramRectangles[0].right + iVar13) == 0)) goto LAB_00445252;
            iVar13 = iVar13 + 0x28;
          } while (iVar13 < g_CramRectangleCount * 0x28);
        }
        local_18 = g_CramRectangles + g_CramRectangleCount;
        local_24 = 0;
        do {
          iVar13 = g_CramMinPlacementX;
          iVar10 = g_CramMinPlacementY;
          if (local_24 != 0) {
            iVar13 = g_CramMinPlacementY;
            iVar10 = g_CramMinPlacementX;
          }
          iVar14 = g_CramPlacedTextureCount + -1;
          if (-1 < iVar14) {
            pCVar11 = g_CramSortedTextureEntries + iVar14;
            do {
              if (((pCVar11->assigned_map_number == local_14) && (0 < pCVar11->working_top)) &&
                 ((0 < pCVar11->working_width &&
                  ((pCVar11->placement_bottom < iVar13 && (pCVar11->working_right < iVar10))))))
              break;
              iVar14 = iVar14 + -1;
              pCVar11 = pCVar11 + -1;
            } while (-1 < iVar14);
          }
          if (iVar14 < 0) {
            local_18->unk1 = 0;
            local_18->active_flag = 1;
            local_18->left = local_14;
            local_18->top = 0;
            local_18->right = 0;
            local_18->bottom = iVar13;
            local_18->orientation = local_24;
            local_18->max_dimension = iVar10;
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
    if ((g_CramAtlasWidth + -1 + g_CramAtlasHeight * g_CramCurrentAcceptableSize) / g_CramAtlasWidth
        <= g_CramPaddingCalculation) {
      iVar13 = 0;
      shape_cramtex_cpp_CCramTex_visualizeTextureAtlas_FUN_00447f20((CCramTex *)0x1,1,0,seed);
      if (0 < g_CramTextureCount) {
        pCVar11 = g_CramSortedTextureEntries;
        do {
          iVar14 = g_CramPaddingCalculation / 2;
          iVar13 = iVar13 + 1;
          pCVar11->final_top = pCVar11->final_top + iVar14;
          pCVar11->final_right = pCVar11->final_right + iVar14;
          pCVar11->final_bottom = pCVar11->final_bottom + iVar14;
          iVar10 = g_CramTextureCount;
          pCVar11->final_left = pCVar11->final_left + iVar14;
          pCVar11 = pCVar11 + 1;
        } while (iVar13 < iVar10);
      }
      p_Var12 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                          ("..\\shape\\CramTex.txt",(char *)0x0,"wt",
                           "..\\shape\\cramtex.cpp",0x271);
      if (p_Var12 != (_FILE *)0x0) {
        if (0 < g_CramTextureCount) {
          pCVar11 = g_CramSortedTextureEntries;
          iVar13 = 0;
          do {
            piVar6 = &pCVar11->rotation_applied;
            piVar8 = &pCVar11->final_bottom;
            piVar1 = &pCVar11->final_right;
            piVar2 = &pCVar11->final_top;
            piVar3 = &pCVar11->final_left;
            piVar4 = &pCVar11->working_map_id;
            piVar5 = &pCVar11->height;
            piVar9 = &pCVar11->width;
            pCVar11 = pCVar11 + 1;
            iVar10 = iVar13 + 1;
            _fprintf(p_Var12,"%2d: %5dx%-5d  Page %d (%5d,%-5d)-(%5d,%-5d)    Rotated: %d\n",iVar13,*piVar9,*piVar5,*piVar4,
                       *piVar3,*piVar2,*piVar1,*piVar8,*piVar6);
            iVar13 = iVar10;
          } while (iVar10 < g_CramTextureCount);
        }
        _fprintf(p_Var12,"%ux%u square found using %u padding.\n",g_CramCurrentAcceptableSize,
                   g_CramCurrentAcceptableSize,g_CramPaddingCalculation);
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var12,"..\\shape\\cramtex.cpp",0x274);
      }
      srand(seed);
      iVar13 = 0;
      if (0 < texture_count) {
        pCVar11 = g_CramSortedTextureEntries;
        do {
          pSVar7 = pCVar11->source_entry_ptr;
          pSVar7->atlas_map_index = pCVar11->working_map_id;
          pSVar7->rotation_flag = pCVar11->rotation_applied;
          pSVar7->atlas_x = pCVar11->final_left;
          pSVar7->atlas_y = pCVar11->final_top;
          if (pSVar7->rotation_flag == 0) {
            pSVar7->atlas_width =
                 (pCVar11->final_right - pCVar11->final_left) - g_CramPaddingCalculation;
            pSVar7->atlas_height =
                 (pCVar11->final_bottom - pCVar11->final_top) - g_CramPaddingCalculation;
          }
          else {
            pSVar7->atlas_height =
                 (pCVar11->final_right - pCVar11->final_left) - g_CramPaddingCalculation;
            pSVar7->atlas_width =
                 (pCVar11->final_bottom - pCVar11->final_top) - g_CramPaddingCalculation;
          }
          iVar13 = iVar13 + 1;
          pCVar11 = pCVar11 + 1;
        } while (iVar13 < texture_count);
      }
      iVar13 = g_CramCurrentAcceptableSize;
      *output_atlas_height = g_CramCurrentAcceptableSize;
      *output_atlas_width = iVar13;
      return 0;
    }
    if (g_CramAcceptableSize < g_CramCurrentAcceptableSize) {
      g_CramAcceptableSize = g_CramCurrentAcceptableSize;
    }
    g_CramAcceptableSize = g_CramAcceptableSize + 1;
    p_Var12 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                        ("..\\shape\\cramlog.txt",(char *)0x0,"at",
                         "..\\shape\\cramtex.cpp",0x24f);
    if (p_Var12 != (_FILE *)0x0) {
      _fprintf(p_Var12,"UNDERESTIMATED PAD!!\n");
      _fprintf(p_Var12,"acceptableSize now adjusted to %d\n",g_CramAcceptableSize);
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var12,"..\\shape\\cramtex.cpp",0x253);
    }
  } while( true );
}
