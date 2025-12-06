// Name: shape_cramtex.cpp_generateTextureAtlasLayout_FUN_00444d90
// Address: 00444d90
// Address Range: [[00444d90, 004457e3]]
// Convention: __cdecl
// Signature: int shape_cramtex.cpp_generateTextureAtlasLayout_FUN_00444d90(uint texture_count, STextureAtlasEntry * texture_entries, int atlas_width, int atlas_height, int acceptable_coverage_threshold, int acceptable_size, int * output_atlas_width, int * output_atlas_height, int padding_size, int fill_gaps, int visualize, int max_iterations)

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
  uint *puVar7;
  STextureAtlasEntry *pSVar8;
  char **ppcVar9;
  int *piVar10;
  int *piVar11;
  uint uVar12;
  int iVar13;
  SCramWorkingEntry *pSVar14;
  FILE *pFVar15;
  byte *puVar16;
  FILE *pFVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  SCramRectangle *pSVar23;
  SCramRectangle *pSVar24;
  int in_stack_00000034;
  int *in_stack_0000004c;
  int *in_stack_00000050;
  uint in_stack_ffffffec;
  
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
  if (0 < (int)texture_entries) {
    iVar18 = 0;
    do {
      *(int *)((int)&g_CramSortedTextureEntries[0].source_entry_ptr + iVar18) = atlas_width;
      *(uint *)((int)&g_CramSortedTextureEntries[0].width + iVar18) =
           *(uint *)(atlas_width + 0x208);
      iVar13 = iVar18 + 0x4c;
      puVar7 = (uint *)(atlas_width + 0x20c);
      atlas_width = atlas_width + 0x250;
      *(uint *)((int)&g_CramSortedTextureEntries[0].height + iVar18) = *puVar7;
      iVar18 = iVar13;
    } while (iVar13 < (int)texture_entries * 0x4c);
  }
  crt_io_c_deleteFile_FUN_005ff9d0("..\\shape\\cramlog.txt");
  crt_stdlib_c_rand_FUN_005feb5c();
  crt_stdlib_c_srand_FUN_005feb80(0x16);
  crt_stdlib_c_qsort_FUN_005fdf38
            (g_CramSortedTextureEntries,g_CramTextureCount,0x4c,
             shape_cramtex_cpp_qsortByLargestDimension_FUN_004457f0);
  g_CramTotalPixelArea = 0;
  iVar18 = 0;
  if (0 < (int)g_CramTextureCount) {
    pSVar14 = g_CramSortedTextureEntries;
    do {
      piVar10 = &pSVar14->width;
      piVar1 = &pSVar14->height;
      pSVar14 = pSVar14 + 1;
      g_CramTotalPixelArea = g_CramTotalPixelArea + *piVar10 * *piVar1;
      iVar18 = iVar18 + 1;
    } while (iVar18 < (int)g_CramTextureCount);
  }
  iVar18 = (g_CramTotalPixelArea * 100) / acceptable_size;
  for (; iVar13 = g_CramAcceptableSize * g_CramAcceptableSize * g_CramTotalMaps,
      iVar13 - iVar18 == 0 || iVar13 < iVar18; g_CramAcceptableSize = g_CramAcceptableSize + 1) {
  }
  g_CramPaddingCalculation =
       (g_CramAtlasWidth + -1 + g_CramAtlasHeight * g_CramAcceptableSize) / g_CramAtlasWidth;
  pFVar15 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                      ("..\\shape\\cramlog.txt",(char *)0x0,"at",
                       "..\\shape\\cramtex.cpp",0x1e3);
  if (pFVar15 != (FILE *)0x0) {
    crt_stdio_c_fprintf_FUN_005fe6d0
              (pFVar15,"initial pad guess = %d\n",g_CramPaddingCalculation);
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar15,"..\\shape\\cramtex.cpp",0x1e6);
  }
  pFVar15 = (FILE *)0xffffffff;
  do {
    iVar18 = 0;
    ppcVar9 = &pFVar15->_ptr;
    g_CramAlgorithmState = &DAT_0084a8b0;
    do {
      iVar18 = iVar18 + 1;
      iVar13 = 0;
      if (0 < (int)g_CramTextureCount) {
        pSVar14 = g_CramSortedTextureEntries;
        do {
          iVar19 = pSVar14->width + g_CramPaddingCalculation;
          if (g_CramAcceptableSize < iVar19) {
            g_CramAcceptableSize = iVar19;
          }
          iVar19 = pSVar14->height + g_CramPaddingCalculation;
          if (g_CramAcceptableSize < iVar19) {
            g_CramAcceptableSize = iVar19;
          }
          iVar13 = iVar13 + 1;
          pSVar14 = pSVar14 + 1;
        } while (iVar13 < (int)g_CramTextureCount);
      }
      iVar13 = g_CramAcceptableSize * 5 >> 0x1f;
      puVar16 = (byte *)
                ((g_CramAtlasWidth + -1 +
                 ((int)((g_CramAcceptableSize * 5 + iVar13 * -4) - (uint)(iVar13 << 1 < 0)) >> 2) *
                 g_CramAtlasHeight) / g_CramAtlasWidth);
      if ((int)puVar16 <= (int)pFVar15) {
        puVar16 = (byte *)((int)ppcVar9 + 1);
      }
      pFVar17 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                          ("..\\shape\\cramlog.txt",(char *)0x0,"at",
                           "..\\shape\\cramtex.cpp",0x206);
      if (pFVar17 != (FILE *)0x0) {
        crt_stdio_c_fprintf_FUN_005fe6d0(pFVar17,"Guess #%d\n",iVar18);
        crt_stdio_c_fprintf_FUN_005fe6d0(pFVar17,"  acceptableSize = %d\n",g_CramAcceptableSize);
        crt_stdio_c_fprintf_FUN_005fe6d0(pFVar17,"  estimated pad = %d\n",puVar16);
        in_stack_ffffffec = 0x20b;
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar17,"..\\shape\\cramtex.cpp",0x20b);
        pFVar15 = pFVar17;
      }
    } while ((puVar16 != (byte *)g_CramPaddingCalculation) &&
            (g_CramPaddingCalculation = (int)puVar16, iVar18 < 10));
    pFVar15 = (FILE *)g_CramPaddingCalculation;
    iVar18 = 0;
    g_CramRectangleCount = 0;
    g_CramBestSolutionMetric2 = 999999;
    g_CramBestSolutionMetric1 = 999999;
    g_CramMinPlacementX = 999999;
    g_CramCurrentAcceptableSize = g_CramAcceptableSize;
    g_CramMinPlacementY = 999999;
    if (0 < (int)g_CramTextureCount) {
      pSVar14 = g_CramSortedTextureEntries;
      do {
        iVar13 = g_CramPaddingCalculation;
        pSVar14->padded_width = pSVar14->width + g_CramPaddingCalculation;
        pSVar14->padded_height = pSVar14->height + iVar13;
        if (pSVar14->padded_width < g_CramMinPlacementX) {
          g_CramMinPlacementX = pSVar14->padded_width;
        }
        if (pSVar14->padded_height < g_CramMinPlacementY) {
          g_CramMinPlacementY = pSVar14->padded_height;
        }
        iVar18 = iVar18 + 1;
        pSVar14 = pSVar14 + 1;
      } while (iVar18 < (int)g_CramTextureCount);
    }
    iVar18 = g_CramSortedTextureEntries[0].padded_height;
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
      iVar13 = 0;
      do {
        if (((*(int *)((int)&g_CramRectangles[0].left + iVar13) == 0) &&
            (*(int *)((int)&g_CramRectangles[0].top + iVar13) == 0)) &&
           (g_CramSortedTextureEntries[0].padded_height ==
            *(int *)((int)&g_CramRectangles[0].right + iVar13))) goto LAB_004451a8;
        iVar13 = iVar13 + 0x28;
      } while (iVar13 < g_CramRectangleCount * 0x28);
    }
    in_stack_ffffffec = 0;
    pSVar23 = g_CramRectangles + g_CramRectangleCount;
    do {
      iVar13 = g_CramMinPlacementX;
      iVar19 = g_CramMinPlacementY;
      if (in_stack_ffffffec != 0) {
        iVar13 = g_CramMinPlacementY;
        iVar19 = g_CramMinPlacementX;
      }
      iVar21 = g_CramPlacedTextureCount + -1;
      if (-1 < iVar21) {
        pSVar14 = g_CramSortedTextureEntries + iVar21;
        do {
          if (((pSVar14->assigned_map_number == 0) && (0 < pSVar14->working_top)) &&
             ((iVar18 < pSVar14->working_width &&
              ((pSVar14->placement_bottom < iVar13 && (pSVar14->working_right < iVar19 + iVar18)))))
             ) break;
          iVar21 = iVar21 + -1;
          pSVar14 = pSVar14 + -1;
        } while (-1 < iVar21);
      }
      pSVar24 = pSVar23;
      if (iVar21 < 0) {
        pSVar23->reserved_0x18 = 0;
        pSVar23->active_flag = 1;
        pSVar23->left = 0;
        pSVar23->top = 0;
        pSVar23->right = iVar18;
        pSVar23->bottom = iVar13;
        pSVar23->orientation = in_stack_ffffffec;
        pSVar24 = pSVar23 + 1;
        pSVar23->max_dimension = iVar19 + iVar18;
        g_CramRectangleCount = g_CramRectangleCount + 1;
      }
      in_stack_ffffffec = in_stack_ffffffec + 1;
      pSVar23 = pSVar24;
    } while ((int)in_stack_ffffffec < 2);
LAB_004451a8:
    iVar13 = g_CramSortedTextureEntries[0].working_top;
    iVar18 = g_CramSortedTextureEntries[0].working_right;
    if (0 < g_CramRectangleCount) {
      iVar19 = 0;
      do {
        if (((*(int *)((int)&g_CramRectangles[0].left + iVar19) == 0) &&
            (g_CramSortedTextureEntries[0].working_top ==
             *(int *)((int)&g_CramRectangles[0].top + iVar19))) &&
           (g_CramSortedTextureEntries[0].working_right ==
            *(int *)((int)&g_CramRectangles[0].right + iVar19))) goto LAB_004451f7;
        iVar19 = iVar19 + 0x28;
      } while (iVar19 < g_CramRectangleCount * 0x28);
    }
    texture_count = (uint)(g_CramRectangles + g_CramRectangleCount);
    iVar19 = 0;
    do {
      iVar21 = g_CramMinPlacementY;
      iVar22 = g_CramMinPlacementX;
      if (iVar19 != 0) {
        iVar21 = g_CramMinPlacementX;
        iVar22 = g_CramMinPlacementY;
      }
      iVar20 = g_CramPlacedTextureCount + -1;
      if (-1 < iVar20) {
        pSVar14 = g_CramSortedTextureEntries + iVar20;
        do {
          if (((pSVar14->assigned_map_number == 0) && (iVar13 < pSVar14->working_top)) &&
             ((iVar18 < pSVar14->working_width &&
              ((pSVar14->placement_bottom < iVar22 + iVar13 &&
               (pSVar14->working_right < iVar21 + iVar18)))))) break;
          iVar20 = iVar20 + -1;
          pSVar14 = pSVar14 + -1;
        } while (-1 < iVar20);
      }
      if (iVar20 < 0) {
        *(uint *)(texture_count + 0x18) = 0;
        *(uint *)(texture_count + 0x24) = 1;
        *(uint *)texture_count = 0;
        *(int *)(texture_count + 4) = iVar13;
        *(int *)(texture_count + 8) = iVar18;
        *(int *)(texture_count + 0xc) = iVar22 + iVar13;
        *(int *)(texture_count + 0x14) = iVar19;
        *(int *)(texture_count + 0x10) = iVar21 + iVar18;
        g_CramRectangleCount = g_CramRectangleCount + 1;
        texture_count = texture_count + 0x28;
      }
      iVar19 = iVar19 + 1;
    } while (iVar19 < 2);
LAB_004451f7:
    atlas_width = 1;
    if (1 < g_CramTotalMaps) {
      do {
        if (0 < g_CramRectangleCount) {
          iVar18 = 0;
          do {
            if (((atlas_width == *(int *)((int)&g_CramRectangles[0].left + iVar18)) &&
                (*(int *)((int)&g_CramRectangles[0].top + iVar18) == 0)) &&
               (*(int *)((int)&g_CramRectangles[0].right + iVar18) == 0)) goto LAB_00445252;
            iVar18 = iVar18 + 0x28;
          } while (iVar18 < g_CramRectangleCount * 0x28);
        }
        texture_entries = (STextureAtlasEntry *)(g_CramRectangles + g_CramRectangleCount);
        iVar18 = 0;
        do {
          iVar13 = g_CramMinPlacementX;
          iVar19 = g_CramMinPlacementY;
          if (iVar18 != 0) {
            iVar13 = g_CramMinPlacementY;
            iVar19 = g_CramMinPlacementX;
          }
          iVar21 = g_CramPlacedTextureCount + -1;
          if (-1 < iVar21) {
            pSVar14 = g_CramSortedTextureEntries + iVar21;
            do {
              if (((pSVar14->assigned_map_number == atlas_width) && (0 < pSVar14->working_top)) &&
                 ((0 < pSVar14->working_width &&
                  ((pSVar14->placement_bottom < iVar13 && (pSVar14->working_right < iVar19))))))
              break;
              iVar21 = iVar21 + -1;
              pSVar14 = pSVar14 + -1;
            } while (-1 < iVar21);
          }
          if (iVar21 < 0) {
            texture_entries->tga_filename[0x18] = '\0';
            texture_entries->tga_filename[0x19] = '\0';
            texture_entries->tga_filename[0x1a] = '\0';
            texture_entries->tga_filename[0x1b] = '\0';
            texture_entries->tga_filename[0x24] = '\x01';
            texture_entries->tga_filename[0x25] = '\0';
            texture_entries->tga_filename[0x26] = '\0';
            texture_entries->tga_filename[0x27] = '\0';
            *(int *)texture_entries->tga_filename = atlas_width;
            texture_entries->tga_filename[4] = '\0';
            texture_entries->tga_filename[5] = '\0';
            texture_entries->tga_filename[6] = '\0';
            texture_entries->tga_filename[7] = '\0';
            texture_entries->tga_filename[8] = '\0';
            texture_entries->tga_filename[9] = '\0';
            texture_entries->tga_filename[10] = '\0';
            texture_entries->tga_filename[0xb] = '\0';
            *(int *)(texture_entries->tga_filename + 0xc) = iVar13;
            *(int *)(texture_entries->tga_filename + 0x14) = iVar18;
            *(int *)(texture_entries->tga_filename + 0x10) = iVar19;
            g_CramRectangleCount = g_CramRectangleCount + 1;
            texture_entries = (STextureAtlasEntry *)(texture_entries->tga_filename + 0x28);
          }
          iVar18 = iVar18 + 1;
        } while (iVar18 < 2);
LAB_00445252:
        atlas_width = atlas_width + 1;
      } while (atlas_width < g_CramTotalMaps);
    }
    shape_cramtex_cpp_runInteractiveAtlasGeneration_FUN_00446160((SCramWorkingEntry *)pFVar15);
    if ((g_CramAtlasWidth + -1 + g_CramAtlasHeight * g_CramCurrentAcceptableSize) / g_CramAtlasWidth
        <= g_CramPaddingCalculation) {
      iVar18 = 0;
      shape_cramtex_cpp_visualizeTextureAtlas_FUN_00447f20(1,0,(int)pFVar15);
      if (0 < (int)g_CramTextureCount) {
        pSVar14 = g_CramSortedTextureEntries;
        do {
          iVar13 = g_CramPaddingCalculation / 2;
          iVar18 = iVar18 + 1;
          pSVar14->final_top = pSVar14->final_top + iVar13;
          pSVar14->final_right = pSVar14->final_right + iVar13;
          pSVar14->final_bottom = pSVar14->final_bottom + iVar13;
          uVar12 = g_CramTextureCount;
          pSVar14->final_left = pSVar14->final_left + iVar13;
          pSVar14 = pSVar14 + 1;
        } while (iVar18 < (int)uVar12);
      }
      pFVar15 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                          ("..\\shape\\CramTex.txt",(char *)0x0,"wt",
                           "..\\shape\\cramtex.cpp",0x271);
      if (pFVar15 != (FILE *)0x0) {
        if (0 < (int)g_CramTextureCount) {
          pSVar14 = g_CramSortedTextureEntries;
          iVar18 = 0;
          do {
            piVar1 = &pSVar14->rotation_applied;
            piVar10 = &pSVar14->final_bottom;
            piVar2 = &pSVar14->final_right;
            piVar3 = &pSVar14->final_top;
            piVar4 = &pSVar14->final_left;
            piVar5 = &pSVar14->working_map_id;
            piVar6 = &pSVar14->height;
            piVar11 = &pSVar14->width;
            pSVar14 = pSVar14 + 1;
            iVar13 = iVar18 + 1;
            crt_stdio_c_fprintf_FUN_005fe6d0
                      (pFVar15,"%2d: %5dx%-5d  Page %d (%5d,%-5d)-(%5d,%-5d)    Rotated: %d\n",
                       "%2d: %5dx%-5d  Page %d (%5d,%-5d)-(%5d,%-5d)    Rotated: %d\n",iVar18,*piVar11,*piVar6,*piVar5,*piVar4,
                       *piVar3,*piVar2,*piVar10,*piVar1);
            iVar18 = iVar13;
          } while (iVar13 < (int)g_CramTextureCount);
        }
        crt_stdio_c_fprintf_FUN_005fe6d0
                  (pFVar15,"%ux%u square found using %u padding.\n",pFVar15,
                   "%ux%u square found using %u padding.\n",g_CramCurrentAcceptableSize,
                   g_CramCurrentAcceptableSize,g_CramPaddingCalculation);
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar15,"..\\shape\\cramtex.cpp",0x274);
      }
      crt_stdlib_c_srand_FUN_005feb80(in_stack_ffffffec);
      iVar18 = 0;
      if (0 < in_stack_00000034) {
        pSVar14 = g_CramSortedTextureEntries;
        do {
          pSVar8 = pSVar14->source_entry_ptr;
          pSVar8->atlas_map_index = pSVar14->working_map_id;
          pSVar8->rotation_flag = pSVar14->rotation_applied;
          pSVar8->atlas_x = pSVar14->final_left;
          pSVar8->atlas_y = pSVar14->final_top;
          if (pSVar8->rotation_flag == 0) {
            pSVar8->atlas_width =
                 (pSVar14->final_right - pSVar14->final_left) - g_CramPaddingCalculation;
            pSVar8->atlas_height =
                 (pSVar14->final_bottom - pSVar14->final_top) - g_CramPaddingCalculation;
          }
          else {
            pSVar8->atlas_height =
                 (pSVar14->final_right - pSVar14->final_left) - g_CramPaddingCalculation;
            pSVar8->atlas_width =
                 (pSVar14->final_bottom - pSVar14->final_top) - g_CramPaddingCalculation;
          }
          iVar18 = iVar18 + 1;
          pSVar14 = pSVar14 + 1;
        } while (iVar18 < in_stack_00000034);
      }
      iVar18 = g_CramCurrentAcceptableSize;
      *in_stack_00000050 = g_CramCurrentAcceptableSize;
      *in_stack_0000004c = iVar18;
      return 0;
    }
    if (g_CramAcceptableSize < g_CramCurrentAcceptableSize) {
      g_CramAcceptableSize = g_CramCurrentAcceptableSize;
    }
    g_CramAcceptableSize = g_CramAcceptableSize + 1;
    pFVar17 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                        ("..\\shape\\cramlog.txt",(char *)0x0,"at",
                         "..\\shape\\cramtex.cpp",0x24f);
    if (pFVar17 != (FILE *)0x0) {
      crt_stdio_c_fprintf_FUN_005fe6d0(pFVar17,"UNDERESTIMATED PAD!!\n");
      crt_stdio_c_fprintf_FUN_005fe6d0
                (pFVar17,"acceptableSize now adjusted to %d\n",g_CramAcceptableSize);
      in_stack_ffffffec = 0x253;
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar17,"..\\shape\\cramtex.cpp",0x253);
      pFVar15 = pFVar17;
    }
  } while( true );
}
