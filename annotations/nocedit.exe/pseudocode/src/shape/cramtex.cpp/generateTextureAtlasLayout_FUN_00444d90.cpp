// Name: shape_cramtex.cpp_generateTextureAtlasLayout_FUN_00444d90
// Address: 00444d90
// Address Range: [[00444d90, 004457e3]]
// Convention: __cdecl
// Signature: int __cdecl shape_cramtex_cpp_generateTextureAtlasLayout_FUN_00444d90 (uint texture_count,STextureAtlasEntry *texture_entries,int atlas_width,int atlas_height, int acceptable_coverage_threshold,int acceptable_size,int *output_atlas_width, int *output_atlas_height,int padding_size,int fill_gaps,int visualize,int max_iterations)

#include "nocturne.h"

int __cdecl
shape_cramtex_cpp_generateTextureAtlasLayout_FUN_00444d90
          (uint texture_count,STextureAtlasEntry *texture_entries,int atlas_width,int atlas_height,
          int acceptable_coverage_threshold,int acceptable_size,int *output_atlas_width,
          int *output_atlas_height,int padding_size,int fill_gaps,int visualize,int max_iterations)

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
  uint uVar10;
  int iVar11;
  uint seed;
  SCramWorkingEntry *pSVar12;
  FILE *pFVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
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
  if (0 < (int)texture_count) {
    iVar14 = 0;
    do {
      *(STextureAtlasEntry **)((int)&g_CramSortedTextureEntries[0].source_entry_ptr + iVar14) =
           texture_entries;
      *(int *)((int)&g_CramSortedTextureEntries[0].width + iVar14) =
           texture_entries->processed_width;
      iVar11 = iVar14 + 0x4c;
      piVar6 = &texture_entries->processed_height;
      texture_entries = texture_entries + 1;
      *(int *)((int)&g_CramSortedTextureEntries[0].height + iVar14) = *piVar6;
      iVar14 = iVar11;
    } while (iVar11 < (int)(texture_count * 0x4c));
  }
  crt_io_c_deleteFile_FUN_005ff9d0("..\\shape\\cramlog.txt");
  seed = crt_stdlib_c_rand_FUN_005feb5c();
  crt_stdlib_c_srand_FUN_005feb80(0x16);
  crt_stdlib_c_qsort_FUN_005fdf38
            (g_CramSortedTextureEntries,g_CramTextureCount,0x4c,
             shape_cramtex_cpp_qsortByLargestDimension_FUN_004457f0);
  g_CramTotalPixelArea = 0;
  iVar14 = 0;
  if (0 < (int)g_CramTextureCount) {
    pSVar12 = g_CramSortedTextureEntries;
    do {
      piVar8 = &pSVar12->width;
      piVar6 = &pSVar12->height;
      pSVar12 = pSVar12 + 1;
      g_CramTotalPixelArea = g_CramTotalPixelArea + *piVar8 * *piVar6;
      iVar14 = iVar14 + 1;
    } while (iVar14 < (int)g_CramTextureCount);
  }
  iVar14 = (g_CramTotalPixelArea * 100) / acceptable_coverage_threshold;
  for (; iVar11 = g_CramAcceptableSize * g_CramAcceptableSize * g_CramTotalMaps,
      iVar11 - iVar14 == 0 || iVar11 < iVar14; g_CramAcceptableSize = g_CramAcceptableSize + 1) {
  }
  g_CramPaddingCalculation =
       (g_CramAtlasWidth + -1 + g_CramAtlasHeight * g_CramAcceptableSize) / g_CramAtlasWidth;
  pFVar13 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                      ("..\\shape\\cramlog.txt",(char *)0x0,"at",
                       "..\\shape\\cramtex.cpp",0x1e3);
  if (pFVar13 != (FILE *)0x0) {
    crt_stdio_c_fprintf_FUN_005fe6d0
              (pFVar13,"initial pad guess = %d\n",g_CramPaddingCalculation);
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar13,"..\\shape\\cramtex.cpp",0x1e6);
  }
  iVar14 = -1;
  do {
    iVar18 = 0;
    iVar11 = iVar14 + 1;
    g_CramAlgorithmState = &DAT_0084a8b0;
    do {
      iVar18 = iVar18 + 1;
      iVar15 = 0;
      if (0 < (int)g_CramTextureCount) {
        pSVar12 = g_CramSortedTextureEntries;
        do {
          iVar16 = pSVar12->width + g_CramPaddingCalculation;
          if (g_CramAcceptableSize < iVar16) {
            g_CramAcceptableSize = iVar16;
          }
          iVar16 = pSVar12->height + g_CramPaddingCalculation;
          if (g_CramAcceptableSize < iVar16) {
            g_CramAcceptableSize = iVar16;
          }
          iVar15 = iVar15 + 1;
          pSVar12 = pSVar12 + 1;
        } while (iVar15 < (int)g_CramTextureCount);
      }
      iVar15 = g_CramAcceptableSize * 5 >> 0x1f;
      iVar15 = (g_CramAtlasWidth + -1 +
               ((int)((g_CramAcceptableSize * 5 + iVar15 * -4) - (uint)(iVar15 << 1 < 0)) >> 2) *
               g_CramAtlasHeight) / g_CramAtlasWidth;
      if (iVar15 <= iVar14) {
        iVar15 = iVar11;
      }
      pFVar13 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                          ("..\\shape\\cramlog.txt",(char *)0x0,"at",
                           "..\\shape\\cramtex.cpp",0x206);
      if (pFVar13 != (FILE *)0x0) {
        crt_stdio_c_fprintf_FUN_005fe6d0(pFVar13,"Guess #%d\n",iVar18);
        crt_stdio_c_fprintf_FUN_005fe6d0(pFVar13,"  acceptableSize = %d\n",g_CramAcceptableSize);
        crt_stdio_c_fprintf_FUN_005fe6d0(pFVar13,"  estimated pad = %d\n",iVar15);
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar13,"..\\shape\\cramtex.cpp",0x20b);
      }
    } while ((iVar15 != g_CramPaddingCalculation) &&
            (g_CramPaddingCalculation = iVar15, iVar18 < 10));
    iVar14 = g_CramPaddingCalculation;
    iVar11 = 0;
    g_CramRectangleCount = 0;
    g_CramBestSolutionMetric2 = 999999;
    g_CramBestSolutionMetric1 = 999999;
    g_CramMinPlacementX = 999999;
    g_CramCurrentAcceptableSize = g_CramAcceptableSize;
    g_CramMinPlacementY = 999999;
    if (0 < (int)g_CramTextureCount) {
      pSVar12 = g_CramSortedTextureEntries;
      do {
        iVar18 = g_CramPaddingCalculation;
        pSVar12->padded_width = pSVar12->width + g_CramPaddingCalculation;
        pSVar12->padded_height = pSVar12->height + iVar18;
        if (pSVar12->padded_width < g_CramMinPlacementX) {
          g_CramMinPlacementX = pSVar12->padded_width;
        }
        if (pSVar12->padded_height < g_CramMinPlacementY) {
          g_CramMinPlacementY = pSVar12->padded_height;
        }
        iVar11 = iVar11 + 1;
        pSVar12 = pSVar12 + 1;
      } while (iVar11 < (int)g_CramTextureCount);
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
      iVar18 = 0;
      do {
        if (((*(int *)((int)&g_CramRectangles[0].left + iVar18) == 0) &&
            (*(int *)((int)&g_CramRectangles[0].top + iVar18) == 0)) &&
           (g_CramSortedTextureEntries[0].padded_height ==
            *(int *)((int)&g_CramRectangles[0].right + iVar18))) goto LAB_004451a8;
        iVar18 = iVar18 + 0x28;
      } while (iVar18 < g_CramRectangleCount * 0x28);
    }
    local_34 = 0;
    local_20 = g_CramRectangles + g_CramRectangleCount;
    do {
      iVar18 = g_CramMinPlacementX;
      iVar15 = g_CramMinPlacementY;
      if (local_34 != 0) {
        iVar18 = g_CramMinPlacementY;
        iVar15 = g_CramMinPlacementX;
      }
      iVar16 = g_CramPlacedTextureCount + -1;
      if (-1 < iVar16) {
        pSVar12 = g_CramSortedTextureEntries + iVar16;
        do {
          if (((pSVar12->assigned_map_number == 0) && (0 < pSVar12->working_top)) &&
             ((iVar11 < pSVar12->working_width &&
              ((pSVar12->placement_bottom < iVar18 && (pSVar12->working_right < iVar15 + iVar11)))))
             ) break;
          iVar16 = iVar16 + -1;
          pSVar12 = pSVar12 + -1;
        } while (-1 < iVar16);
      }
      if (iVar16 < 0) {
        local_20->reserved_0x18 = 0;
        local_20->active_flag = 1;
        local_20->left = 0;
        local_20->top = 0;
        local_20->right = iVar11;
        local_20->bottom = iVar18;
        local_20->orientation = local_34;
        local_20->max_dimension = iVar15 + iVar11;
        g_CramRectangleCount = g_CramRectangleCount + 1;
        local_20 = local_20 + 1;
      }
      local_34 = local_34 + 1;
    } while (local_34 < 2);
LAB_004451a8:
    iVar18 = g_CramSortedTextureEntries[0].working_top;
    iVar11 = g_CramSortedTextureEntries[0].working_right;
    if (0 < g_CramRectangleCount) {
      iVar15 = 0;
      do {
        if (((*(int *)((int)&g_CramRectangles[0].left + iVar15) == 0) &&
            (g_CramSortedTextureEntries[0].working_top ==
             *(int *)((int)&g_CramRectangles[0].top + iVar15))) &&
           (g_CramSortedTextureEntries[0].working_right ==
            *(int *)((int)&g_CramRectangles[0].right + iVar15))) goto LAB_004451f7;
        iVar15 = iVar15 + 0x28;
      } while (iVar15 < g_CramRectangleCount * 0x28);
    }
    local_1c = g_CramRectangles + g_CramRectangleCount;
    local_2c = 0;
    do {
      iVar15 = g_CramMinPlacementY;
      iVar16 = g_CramMinPlacementX;
      if (local_2c != 0) {
        iVar15 = g_CramMinPlacementX;
        iVar16 = g_CramMinPlacementY;
      }
      iVar17 = g_CramPlacedTextureCount + -1;
      if (-1 < iVar17) {
        pSVar12 = g_CramSortedTextureEntries + iVar17;
        do {
          if (((pSVar12->assigned_map_number == 0) && (iVar18 < pSVar12->working_top)) &&
             ((iVar11 < pSVar12->working_width &&
              ((pSVar12->placement_bottom < iVar16 + iVar18 &&
               (pSVar12->working_right < iVar15 + iVar11)))))) break;
          iVar17 = iVar17 + -1;
          pSVar12 = pSVar12 + -1;
        } while (-1 < iVar17);
      }
      if (iVar17 < 0) {
        local_1c->reserved_0x18 = 0;
        local_1c->active_flag = 1;
        local_1c->left = 0;
        local_1c->top = iVar18;
        local_1c->right = iVar11;
        local_1c->bottom = iVar16 + iVar18;
        local_1c->orientation = local_2c;
        local_1c->max_dimension = iVar15 + iVar11;
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
            if (((local_14 == *(int *)((int)&g_CramRectangles[0].left + iVar11)) &&
                (*(int *)((int)&g_CramRectangles[0].top + iVar11) == 0)) &&
               (*(int *)((int)&g_CramRectangles[0].right + iVar11) == 0)) goto LAB_00445252;
            iVar11 = iVar11 + 0x28;
          } while (iVar11 < g_CramRectangleCount * 0x28);
        }
        local_18 = g_CramRectangles + g_CramRectangleCount;
        local_24 = 0;
        do {
          iVar11 = g_CramMinPlacementX;
          iVar18 = g_CramMinPlacementY;
          if (local_24 != 0) {
            iVar11 = g_CramMinPlacementY;
            iVar18 = g_CramMinPlacementX;
          }
          iVar15 = g_CramPlacedTextureCount + -1;
          if (-1 < iVar15) {
            pSVar12 = g_CramSortedTextureEntries + iVar15;
            do {
              if (((pSVar12->assigned_map_number == local_14) && (0 < pSVar12->working_top)) &&
                 ((0 < pSVar12->working_width &&
                  ((pSVar12->placement_bottom < iVar11 && (pSVar12->working_right < iVar18))))))
              break;
              iVar15 = iVar15 + -1;
              pSVar12 = pSVar12 + -1;
            } while (-1 < iVar15);
          }
          if (iVar15 < 0) {
            local_18->reserved_0x18 = 0;
            local_18->active_flag = 1;
            local_18->left = local_14;
            local_18->top = 0;
            local_18->right = 0;
            local_18->bottom = iVar11;
            local_18->orientation = local_24;
            local_18->max_dimension = iVar18;
            g_CramRectangleCount = g_CramRectangleCount + 1;
            local_18 = local_18 + 1;
          }
          local_24 = local_24 + 1;
        } while (local_24 < 2);
LAB_00445252:
        local_14 = local_14 + 1;
      } while (local_14 < g_CramTotalMaps);
    }
    shape_cramtex_cpp_runInteractiveAtlasGeneration_FUN_00446160((SCramWorkingEntry *)iVar14);
    if ((g_CramAtlasWidth + -1 + g_CramAtlasHeight * g_CramCurrentAcceptableSize) / g_CramAtlasWidth
        <= g_CramPaddingCalculation) {
      iVar14 = 0;
      shape_cramtex_cpp_visualizeTextureAtlas_FUN_00447f20(1,0,seed);
      if (0 < (int)g_CramTextureCount) {
        pSVar12 = g_CramSortedTextureEntries;
        do {
          iVar11 = g_CramPaddingCalculation / 2;
          iVar14 = iVar14 + 1;
          pSVar12->final_top = pSVar12->final_top + iVar11;
          pSVar12->final_right = pSVar12->final_right + iVar11;
          pSVar12->final_bottom = pSVar12->final_bottom + iVar11;
          uVar10 = g_CramTextureCount;
          pSVar12->final_left = pSVar12->final_left + iVar11;
          pSVar12 = pSVar12 + 1;
        } while (iVar14 < (int)uVar10);
      }
      pFVar13 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                          ("..\\shape\\CramTex.txt",(char *)0x0,"wt",
                           "..\\shape\\cramtex.cpp",0x271);
      if (pFVar13 != (FILE *)0x0) {
        if (0 < (int)g_CramTextureCount) {
          pSVar12 = g_CramSortedTextureEntries;
          iVar14 = 0;
          do {
            piVar6 = &pSVar12->rotation_applied;
            piVar8 = &pSVar12->final_bottom;
            piVar1 = &pSVar12->final_right;
            piVar2 = &pSVar12->final_top;
            piVar3 = &pSVar12->final_left;
            piVar4 = &pSVar12->working_map_id;
            piVar5 = &pSVar12->height;
            piVar9 = &pSVar12->width;
            pSVar12 = pSVar12 + 1;
            iVar11 = iVar14 + 1;
            crt_stdio_c_fprintf_FUN_005fe6d0
                      (pFVar13,"%2d: %5dx%-5d  Page %d (%5d,%-5d)-(%5d,%-5d)    Rotated: %d\n",iVar14,*piVar9,*piVar5,*piVar4,
                       *piVar3,*piVar2,*piVar1,*piVar8,*piVar6);
            iVar14 = iVar11;
          } while (iVar11 < (int)g_CramTextureCount);
        }
        crt_stdio_c_fprintf_FUN_005fe6d0
                  (pFVar13,"%ux%u square found using %u padding.\n",g_CramCurrentAcceptableSize,
                   g_CramCurrentAcceptableSize,g_CramPaddingCalculation);
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar13,"..\\shape\\cramtex.cpp",0x274);
      }
      crt_stdlib_c_srand_FUN_005feb80(seed);
      iVar14 = 0;
      if (0 < (int)texture_count) {
        pSVar12 = g_CramSortedTextureEntries;
        do {
          pSVar7 = pSVar12->source_entry_ptr;
          pSVar7->atlas_map_index = pSVar12->working_map_id;
          pSVar7->rotation_flag = pSVar12->rotation_applied;
          pSVar7->atlas_x = pSVar12->final_left;
          pSVar7->atlas_y = pSVar12->final_top;
          if (pSVar7->rotation_flag == 0) {
            pSVar7->atlas_width =
                 (pSVar12->final_right - pSVar12->final_left) - g_CramPaddingCalculation;
            pSVar7->atlas_height =
                 (pSVar12->final_bottom - pSVar12->final_top) - g_CramPaddingCalculation;
          }
          else {
            pSVar7->atlas_height =
                 (pSVar12->final_right - pSVar12->final_left) - g_CramPaddingCalculation;
            pSVar7->atlas_width =
                 (pSVar12->final_bottom - pSVar12->final_top) - g_CramPaddingCalculation;
          }
          iVar14 = iVar14 + 1;
          pSVar12 = pSVar12 + 1;
        } while (iVar14 < (int)texture_count);
      }
      iVar14 = g_CramCurrentAcceptableSize;
      *output_atlas_height = g_CramCurrentAcceptableSize;
      *output_atlas_width = iVar14;
      return 0;
    }
    if (g_CramAcceptableSize < g_CramCurrentAcceptableSize) {
      g_CramAcceptableSize = g_CramCurrentAcceptableSize;
    }
    g_CramAcceptableSize = g_CramAcceptableSize + 1;
    pFVar13 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                        ("..\\shape\\cramlog.txt",(char *)0x0,"at",
                         "..\\shape\\cramtex.cpp",0x24f);
    if (pFVar13 != (FILE *)0x0) {
      crt_stdio_c_fprintf_FUN_005fe6d0(pFVar13,"UNDERESTIMATED PAD!!\n");
      crt_stdio_c_fprintf_FUN_005fe6d0
                (pFVar13,"acceptableSize now adjusted to %d\n",g_CramAcceptableSize);
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar13,"..\\shape\\cramtex.cpp",0x253);
    }
  } while( true );
}
