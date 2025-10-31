// Name: shape_cramtex.cpp_generateTextureAtlasLayout_FUN_00444d90
// Address: 00444d90
// Address Range: [[00444d90, 004457e3]]
// Convention: __cdecl
// Signature: int shape_cramtex.cpp_generateTextureAtlasLayout_FUN_00444d90(uint texture_count, STextureAtlasEntry * texture_entries, int atlas_width, int atlas_height, int acceptable_coverage_threshold, int acceptable_size, int * output_atlas_width, int * output_atlas_height, int padding_size, int fill_gaps, int visualize, int max_iterations)
// Cross-references:
//   shape_design.c_cramTextureList_FUN_0046bb80 (0046bb80) at 0046c6ee [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_shape_cramlog_txt_006195c2
//   TerminatedCString s_shape_cramtex_cpp_006195d7
//   TerminatedCString s_at_006195ec
//   TerminatedCString s_shape_cramlog_txt_006195ef
//   TerminatedCString s_initial_pad_guess_d_00619604
//   TerminatedCString s_shape_cramtex_cpp_0061961c
//   TerminatedCString s_shape_cramtex_cpp_00619631
//   TerminatedCString s_at_00619646
//   TerminatedCString s_shape_cramlog_txt_00619649
//   TerminatedCString s_Guess_d_0061965e
//   TerminatedCString s_acceptableSize_d_00619669
//   TerminatedCString s_estimated_pad_d_00619680
//   TerminatedCString s_shape_cramtex_cpp_00619696
//   TerminatedCString s_shape_cramtex_cpp_006196ab
//   TerminatedCString s_at_006196c0
//   TerminatedCString s_shape_cramlog_txt_006196c3
//   TerminatedCString s_UNDERESTIMATED_PAD_006196d8
//   TerminatedCString s_acceptableSize_now_adjus_006196ee
//   TerminatedCString s_shape_cramtex_cpp_00619711
//   TerminatedCString s_shape_cramtex_cpp_00619726
//   TerminatedCString s_wt_0061973b
//   TerminatedCString s_shape_CramTex_txt_0061973e
//   TerminatedCString s_s_2d_5dx_5d_Page_d_5d_5d_00619753
//   TerminatedCString s_ux_u_square_found_using__00619790
//   TerminatedCString s_shape_cramtex_cpp_006197b6
//   undefined4 DAT_0083c1a0
//   undefined4 DAT_0083c1ac
//   undefined4 DAT_0083c1b0
//   undefined4 DAT_0083c1b4
//   undefined4 DAT_0083c1b8
//   SCramWorkingEntry[1] g_CramSortedTextureEntries
//   undefined4 DAT_0083c1e0
//   undefined4 g_CramSortedTextureEntries[0].padded_width
//   undefined4 g_CramSortedTextureEntries[0].padded_height
//   undefined4 g_CramSortedTextureEntries[0].assigned_map_number
//   undefined4 g_CramSortedTextureEntries[0].effective_width
//   undefined4 g_CramSortedTextureEntries[0].effective_height
//   undefined4 g_CramSortedTextureEntries[0].placement_bottom
//   undefined4 g_CramSortedTextureEntries[0].working_right
//   undefined4 g_CramSortedTextureEntries[0].working_top
//   undefined4 g_CramSortedTextureEntries[0].working_width
//   undefined4 DAT_0083c208
//   undefined4 DAT_0083c20c
//   undefined4 DAT_0083c210
//   undefined4 DAT_0083c214
//   undefined4 DAT_0083c218
//   undefined4 g_CramSortedTextureEntries[0].placement_flags
//   undefined4 DAT_0083c220
//   undefined4 DAT_0083c224
//   undefined4 DAT_0083c228
//   undefined4 DAT_0083c22c
//   undefined4 DAT_0083c230
//   undefined4 DAT_0083c234
//   undefined4 DAT_0083c254
//   undefined4 DAT_0083c258
//   undefined4 DAT_0083c25c
//   undefined4 DAT_0083c260
//   undefined4 DAT_0083c264
//   undefined4 DAT_0083c26c
//   undefined4 DAT_0083c270
//   undefined4 DAT_0083c274
//   SCramRectangle[50] g_CramRectangles
//   undefined4 DAT_00840c18
//   undefined4 DAT_00840c1c
//   undefined4 DAT_00840c20
//   undefined4 DAT_00840c24
//   undefined4 DAT_00840c28
//   undefined4 DAT_00840c2c
//   undefined4 DAT_00840c38
//   undefined4 DAT_00840c3c
//   undefined4 DAT_00840c40
//   undefined4 DAT_00840c44
//   undefined4 DAT_00840c48
//   undefined4 DAT_00840c4c
//   undefined4 DAT_00840c50
//   undefined4 DAT_00840c54
//   undefined4 DAT_00840c60
//   undefined4 DAT_00840c64
//   uint g_CramTextureCount
//   int g_CramTotalMaps
//   int g_CramPlacedTextureCount
//   int g_CramRectangleCount
//   int g_CramTotalPixelArea
//   int g_CramMinPlacementX
//   int g_CramMinPlacementY
//   int g_CramOptimalPlacement
//   int g_CramAcceptableSize
//   int g_CramAtlasWidth
//   int g_CramAtlasHeight
//   int g_CramPaddingCalculation
//   int g_CramCurrentAcceptableSize
//   int g_CramBestSolutionMetric1
//   int g_CramBestSolutionMetric2
//   int g_CramVisualizationFlag
//   int g_CramFillGaps
//   int g_CramMaxIterationsLimit
//   int g_CramStartTime
//   int g_CramIterationCount
//   undefined4 DAT_0084a8b0
//   void* g_CramAlgorithmState
// Function calls:
//   crt_io.c_deleteFile_FUN_005ff9d0
//   crt_stdio.c_fprintf_FUN_005fe6d0
//   crt_stdlib.c_qsort_FUN_005fdf38
//   crt_stdlib.c_rand_FUN_005feb5c
//   crt_stdlib.c_srand_FUN_005feb80
//   shape_cramtex.cpp_runInteractiveAtlasGeneration_FUN_00446160
//   shape_cramtex.cpp_visualizeTextureAtlas_FUN_00447f20
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_openFile_FUN_0050f7a0
//   wincore_winrun.cpp_getTime_FUN_005f2dc0

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
  undefined4 *puVar7;
  STextureAtlasEntry *pSVar8;
  char **ppcVar9;
  int *piVar10;
  int *piVar11;
  uint uVar12;
  int iVar13;
  SCramWorkingEntry *pSVar14;
  FILE *pFVar15;
  undefined1 *puVar16;
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
      *(undefined4 *)((int)&g_CramSortedTextureEntries[0].width + iVar18) =
           *(undefined4 *)(atlas_width + 0x208);
      iVar13 = iVar18 + 0x4c;
      puVar7 = (undefined4 *)(atlas_width + 0x20c);
      atlas_width = atlas_width + 0x250;
      *(undefined4 *)((int)&g_CramSortedTextureEntries[0].height + iVar18) = *puVar7;
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
      puVar16 = (undefined1 *)
                ((g_CramAtlasWidth + -1 +
                 ((int)((g_CramAcceptableSize * 5 + iVar13 * -4) - (uint)(iVar13 << 1 < 0)) >> 2) *
                 g_CramAtlasHeight) / g_CramAtlasWidth);
      if ((int)puVar16 <= (int)pFVar15) {
        puVar16 = (undefined1 *)((int)ppcVar9 + 1);
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
    } while ((puVar16 != (undefined1 *)g_CramPaddingCalculation) &&
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
        *(undefined4 *)(texture_count + 0x18) = 0;
        *(undefined4 *)(texture_count + 0x24) = 1;
        *(undefined4 *)texture_count = 0;
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


// Assembly code:
// 00444d90: PUSH EBX
//   Label: shape_cramtex.cpp_generateTextureAtlasLayout_FUN_00444d90
// 00444d91: PUSH ESI
// 00444d92: PUSH EDI
// 00444d93: PUSH EBP
// 00444d94: SUB ESP,0x30
// 00444d97: MOV EAX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x4] (READ)
// 00444d9b: MOV [0x0084a854],EAX
//   XREF to: 0084a854 (WRITE)
// 00444da0: MOV EAX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0xc] (READ)
// 00444da4: MOV [0x0084a878],EAX
//   XREF to: 0084a878 (WRITE)
// 00444da9: MOV EAX,dword ptr [ESP + 0x50]
//   XREF to: Stack[0x10] (READ)
// 00444dad: MOV [0x0084a87c],EAX
//   XREF to: 0084a87c (WRITE)
// 00444db2: MOV EAX,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x18] (READ)
// 00444db6: MOV [0x0084a874],EAX
//   XREF to: 0084a874 (WRITE)
// 00444dbb: MOV EAX,dword ptr [ESP + 0x64]
//   XREF to: Stack[0x24] (READ)
// 00444dbf: MOV [0x0084a858],EAX
//   XREF to: 0084a858 (WRITE)
// 00444dc4: MOV EAX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[0x2c] (READ)
// 00444dc8: MOV [0x0084a894],EAX
//   XREF to: 0084a894 (WRITE)
// 00444dcd: MOV EAX,dword ptr [ESP + 0x68]
//   XREF to: Stack[0x28] (READ)
// 00444dd1: XOR EDX,EDX
// 00444dd3: MOV [0x0084a898],EAX
//   XREF to: 0084a898 (WRITE)
// 00444dd8: MOV EAX,dword ptr [ESP + 0x70]
//   XREF to: Stack[0x30] (READ)
// 00444ddc: MOV dword ptr [0x0084a8ac],EDX
//   XREF to: 0084a8ac (WRITE)
// 00444de2: MOV [0x0084a8a4],EAX
//   XREF to: 0084a8a4 (WRITE)
// 00444de7: CALL wincore_winrun.cpp_getTime_FUN_005f2dc0
//   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
// 00444dec: MOV ECX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x4] (READ)
// 00444df0: MOV [0x0084a8a8],EAX
//   XREF to: 0084a8a8 (WRITE)
// 00444df5: TEST ECX,ECX
// 00444df7: JLE 0x00444e40
//   XREF to: 00444e40 (CONDITIONAL_JUMP)
// 00444df9: LEA EBX,[ECX*0x4 + 0x0]
// 00444e00: ADD EBX,ECX
// 00444e02: SHL EBX,0x2
// 00444e05: MOV EDX,dword ptr [ESP + 0x48]
//   XREF to: Stack[0x8] (READ)
// 00444e09: SUB EBX,ECX
// 00444e0b: XOR EAX,EAX
// 00444e0d: SHL EBX,0x2
// 00444e10: MOV dword ptr [EAX + 0x83c224],EDX
//   Label: LAB_00444e10
//   XREF to: 0083c224 (WRITE)
//   XREF to: 0083c270 (WRITE)
// 00444e16: MOV ECX,dword ptr [EDX + 0x208]
// 00444e1c: MOV dword ptr [EAX + 0x83c1dc],ECX
//   XREF to: 0083c1dc (WRITE)
//   XREF to: 0083c228 (WRITE)
// 00444e22: ADD EAX,0x4c
// 00444e25: MOV ECX,dword ptr [EDX + 0x20c]
// 00444e2b: ADD EDX,0x250
// 00444e31: MOV dword ptr [EAX + 0x83c194],ECX
//   XREF to: 0083c1e0 (WRITE)
//   XREF to: 0083c22c (WRITE)
// 00444e37: CMP EAX,EBX
// 00444e39: JL 0x00444e10
//   XREF to: 00444e10 (CONDITIONAL_JUMP)
// 00444e3b: LEA EAX,[EAX]
// 00444e3e: MOV ECX,ECX
// 00444e40: PUSH 0x6195c2
//   Label: LAB_00444e40
//   XREF to: 006195c2 (DATA)
// 00444e45: MOV EBX,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x14] (READ)
// 00444e49: CALL crt_io.c_deleteFile_FUN_005ff9d0
//   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)
// 00444e4e: ADD ESP,0x4
// 00444e51: CALL crt_stdlib.c_rand_FUN_005feb5c
//   XREF to: 005feb5c (UNCONDITIONAL_CALL)
// 00444e56: PUSH 0x16
// 00444e58: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 00444e5c: CALL crt_stdlib.c_srand_FUN_005feb80
//   XREF to: 005feb80 (UNCONDITIONAL_CALL)
// 00444e61: ADD ESP,0x4
// 00444e64: PUSH 0x4457f0
//   XREF to: 004457f0 (DATA)
// 00444e69: PUSH 0x4c
// 00444e6b: MOV ESI,dword ptr [0x0084a854]
//   XREF to: 0084a854 (READ)
// 00444e71: PUSH ESI
// 00444e72: PUSH 0x83c1dc
//   XREF to: 0083c1dc (DATA)
// 00444e77: XOR EDI,EDI
// 00444e79: CALL crt_stdlib.c_qsort_FUN_005fdf38
//   XREF to: 005fdf38 (UNCONDITIONAL_CALL)
// 00444e7e: MOV EBP,dword ptr [0x0084a854]
//   XREF to: 0084a854 (READ)
// 00444e84: ADD ESP,0x10
// 00444e87: MOV dword ptr [0x0084a864],EDI
//   XREF to: 0084a864 (WRITE)
// 00444e8d: XOR ECX,ECX
// 00444e8f: TEST EBP,EBP
// 00444e91: JLE 0x00444ec0
//   XREF to: 00444ec0 (CONDITIONAL_JUMP)
// 00444e93: MOV EAX,0x83c1dc
//   XREF to: 0083c1dc (DATA)
// 00444e98: MOV EBP,dword ptr [0x0084a854]
//   XREF to: 0084a854 (READ)
// 00444e9e: MOV EDX,dword ptr [EAX]
//   Label: LAB_00444e9e
//   XREF to: 0083c1dc (READ)
//   XREF to: 0083c228 (READ)
// 00444ea0: IMUL EDX,dword ptr [EAX + 0x4]
//   XREF to: 0083c1e0 (READ)
//   XREF to: 0083c22c (READ)
// 00444ea4: MOV EDI,dword ptr [0x0084a864]
//   XREF to: 0084a864 (READ)
// 00444eaa: ADD EAX,0x4c
// 00444ead: ADD EDI,EDX
// 00444eaf: INC ECX
// 00444eb0: MOV dword ptr [0x0084a864],EDI
//   XREF to: 0084a864 (WRITE)
// 00444eb6: CMP ECX,EBP
// 00444eb8: JL 0x00444e9e
//   XREF to: 00444e9e (CONDITIONAL_JUMP)
// 00444eba: LEA EAX,[EAX]
//   XREF to: 0083c228 (DATA)
// 00444ec0: MOV EDX,dword ptr [0x0084a864]
//   Label: LAB_00444ec0
//   XREF to: 0084a864 (READ)
// 00444ec6: LEA EAX,[EDX*0x4 + 0x0]
// 00444ecd: SUB EAX,EDX
// 00444ecf: SHL EAX,0x3
// 00444ed2: ADD EDX,EAX
// 00444ed4: SHL EDX,0x2
// 00444ed7: MOV EAX,EDX
// 00444ed9: SAR EDX,0x1f
// 00444edc: IDIV EBX
// 00444ede: MOV EBX,dword ptr [0x0084a858]
//   XREF to: 0084a858 (READ)
// 00444ee4: MOV EDX,EAX
// 00444ee6: MOV EAX,[0x0084a874]
//   Label: LAB_00444ee6
//   XREF to: 0084a874 (READ)
// 00444eeb: IMUL EAX,EAX
// 00444eee: IMUL EAX,EBX
// 00444ef1: CMP EAX,EDX
// 00444ef3: JG 0x00444efd
//   XREF to: 00444efd (CONDITIONAL_JUMP)
// 00444ef5: INC dword ptr [0x0084a874]
//   XREF to: 0084a874 (READ_WRITE)
// 00444efb: JMP 0x00444ee6
//   XREF to: 00444ee6 (UNCONDITIONAL_JUMP)
// 00444efd: MOV EAX,[0x0084a87c]
//   Label: LAB_00444efd
//   XREF to: 0084a87c (READ)
// 00444f02: IMUL EAX,dword ptr [0x0084a874]
//   XREF to: 0084a874 (READ)
// 00444f09: MOV EDX,dword ptr [0x0084a878]
//   XREF to: 0084a878 (READ)
// 00444f0f: DEC EDX
// 00444f10: ADD EDX,EAX
// 00444f12: MOV ECX,dword ptr [0x0084a878]
//   XREF to: 0084a878 (READ)
// 00444f18: MOV EAX,EDX
// 00444f1a: SAR EDX,0x1f
// 00444f1d: IDIV ECX
// 00444f1f: PUSH 0x1e3
// 00444f24: PUSH 0x6195d7
//   XREF to: 006195d7 (DATA)
// 00444f29: PUSH 0x6195ec
//   XREF to: 006195ec (DATA)
// 00444f2e: PUSH 0x0
// 00444f30: PUSH 0x6195ef
//   XREF to: 006195ef (DATA)
// 00444f35: MOV [0x0084a880],EAX
//   XREF to: 0084a880 (WRITE)
// 00444f3a: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 00444f3f: MOV EBX,EAX
// 00444f41: ADD ESP,0x14
// 00444f44: TEST EAX,EAX
// 00444f46: JNZ 0x00445462
//   XREF to: 00445462 (CONDITIONAL_JUMP)
// 00444f4c: MOV dword ptr [ESP + 0x4],0xffffffff
//   Label: LAB_00444f4c
//   XREF to: Stack[-0x3c] (WRITE)
// 00444f54: MOV EBP,dword ptr [ESP + 0x4]
//   Label: LAB_00444f54
//   XREF to: Stack[-0x3c] (READ)
// 00444f58: MOV EDX,0x84a8b0
//   XREF to: 0084a8b0 (DATA)
// 00444f5d: XOR EDI,EDI
// 00444f5f: INC EBP
// 00444f60: MOV dword ptr [0x00887940],EDX
//   XREF to: 00887940 (WRITE)
// 00444f66: MOV EBX,dword ptr [0x0084a854]
//   Label: LAB_00444f66
//   XREF to: 0084a854 (READ)
// 00444f6c: INC EDI
// 00444f6d: XOR ECX,ECX
// 00444f6f: TEST EBX,EBX
// 00444f71: JLE 0x00444fbd
//   XREF to: 00444fbd (CONDITIONAL_JUMP)
// 00444f73: MOV EAX,0x83c1dc
//   XREF to: 0083c1dc (DATA)
// 00444f78: MOV ESI,dword ptr [0x0084a880]
//   Label: LAB_00444f78
//   XREF to: 0084a880 (READ)
// 00444f7e: MOV EDX,dword ptr [EAX]
//   XREF to: 0083c1dc (READ)
//   XREF to: 0083c228 (READ)
// 00444f80: ADD EDX,ESI
// 00444f82: MOV ESI,dword ptr [0x0084a874]
//   XREF to: 0084a874 (READ)
// 00444f88: MOV EBX,EAX
// 00444f8a: CMP EDX,ESI
// 00444f8c: JLE 0x00444f94
//   XREF to: 00444f94 (CONDITIONAL_JUMP)
// 00444f8e: MOV dword ptr [0x0084a874],EDX
//   XREF to: 0084a874 (WRITE)
// 00444f94: MOV EDX,dword ptr [EBX + 0x4]
//   Label: LAB_00444f94
//   XREF to: 0083c1e0 (READ)
//   XREF to: 0083c22c (READ)
// 00444f97: MOV EBX,dword ptr [0x0084a880]
//   XREF to: 0084a880 (READ)
// 00444f9d: MOV ESI,dword ptr [0x0084a874]
//   XREF to: 0084a874 (READ)
// 00444fa3: ADD EDX,EBX
// 00444fa5: CMP EDX,ESI
// 00444fa7: JLE 0x00444faf
//   XREF to: 00444faf (CONDITIONAL_JUMP)
// 00444fa9: MOV dword ptr [0x0084a874],EDX
//   XREF to: 0084a874 (WRITE)
// 00444faf: MOV ESI,dword ptr [0x0084a854]
//   Label: LAB_00444faf
//   XREF to: 0084a854 (READ)
// 00444fb5: INC ECX
// 00444fb6: ADD EAX,0x4c
// 00444fb9: CMP ECX,ESI
// 00444fbb: JL 0x00444f78
//   XREF to: 00444f78 (CONDITIONAL_JUMP)
// 00444fbd: MOV EDX,dword ptr [0x0084a874]
//   Label: LAB_00444fbd
//   XREF to: 0084a874 (READ)
// 00444fc3: LEA EDX,[EDX + EDX*0x4]
// 00444fc6: MOV EAX,EDX
// 00444fc8: SAR EDX,0x1f
// 00444fcb: SHL EDX,0x2
// 00444fce: SBB EAX,EDX
// 00444fd0: SAR EAX,0x2
// 00444fd3: IMUL EAX,dword ptr [0x0084a87c]
//   XREF to: 0084a87c (READ)
// 00444fda: MOV EDX,dword ptr [0x0084a878]
//   XREF to: 0084a878 (READ)
// 00444fe0: DEC EDX
// 00444fe1: ADD EDX,EAX
// 00444fe3: MOV ECX,dword ptr [0x0084a878]
//   XREF to: 0084a878 (READ)
// 00444fe9: MOV EAX,EDX
// 00444feb: SAR EDX,0x1f
// 00444fee: IDIV ECX
// 00444ff0: MOV ESI,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x3c] (READ)
// 00444ff4: MOV EBX,EAX
// 00444ff6: CMP EAX,ESI
// 00444ff8: JG 0x00444ffc
//   XREF to: 00444ffc (CONDITIONAL_JUMP)
// 00444ffa: MOV EBX,EBP
// 00444ffc: PUSH 0x206
//   Label: LAB_00444ffc
// 00445001: PUSH 0x619631
//   XREF to: 00619631 (DATA)
// 00445006: PUSH 0x619646
//   XREF to: 00619646 (DATA)
// 0044500b: PUSH 0x0
// 0044500d: PUSH 0x619649
//   XREF to: 00619649 (DATA)
// 00445012: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 00445017: MOV ESI,EAX
// 00445019: ADD ESP,0x14
// 0044501c: TEST EAX,EAX
// 0044501e: JZ 0x00445065
//   XREF to: 00445065 (CONDITIONAL_JUMP)
// 00445020: PUSH EDI
// 00445021: PUSH 0x61965e
//   XREF to: 0061965e (DATA)
// 00445026: PUSH EAX
// 00445027: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0044502c: ADD ESP,0xc
// 0044502f: MOV EAX,[0x0084a874]
//   XREF to: 0084a874 (READ)
// 00445034: PUSH EAX
// 00445035: PUSH 0x619669
//   XREF to: 00619669 (DATA)
// 0044503a: PUSH ESI
// 0044503b: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00445040: ADD ESP,0xc
// 00445043: PUSH EBX
// 00445044: PUSH 0x619680
//   XREF to: 00619680 (DATA)
// 00445049: PUSH ESI
// 0044504a: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0044504f: ADD ESP,0xc
// 00445052: PUSH 0x20b
// 00445057: PUSH 0x619696
//   XREF to: 00619696 (DATA)
// 0044505c: PUSH ESI
// 0044505d: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 00445062: ADD ESP,0xc
// 00445065: CMP EBX,dword ptr [0x0084a880]
//   Label: LAB_00445065
//   XREF to: 0084a880 (READ)
// 0044506b: JNZ 0x0044548f
//   XREF to: 0044548f (CONDITIONAL_JUMP)
// 00445071: MOV EBX,0xf423f
//   Label: LAB_00445071
// 00445076: MOV EAX,[0x0084a880]
//   XREF to: 0084a880 (READ)
// 0044507b: XOR ECX,ECX
// 0044507d: XOR EDX,EDX
// 0044507f: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 00445083: MOV dword ptr [0x0084a860],ECX
//   XREF to: 0084a860 (WRITE)
// 00445089: MOV dword ptr [0x0084a88c],EBX
//   XREF to: 0084a88c (WRITE)
// 0044508f: MOV dword ptr [0x0084a888],EBX
//   XREF to: 0084a888 (WRITE)
// 00445095: MOV EAX,[0x0084a874]
//   XREF to: 0084a874 (READ)
// 0044509a: MOV dword ptr [0x0084a868],EBX
//   XREF to: 0084a868 (WRITE)
// 004450a0: MOV [0x0084a884],EAX
//   XREF to: 0084a884 (WRITE)
// 004450a5: MOV EAX,[0x0084a854]
//   XREF to: 0084a854 (READ)
// 004450aa: MOV dword ptr [0x0084a86c],EBX
//   XREF to: 0084a86c (WRITE)
// 004450b0: TEST EAX,EAX
// 004450b2: JLE 0x00445102
//   XREF to: 00445102 (CONDITIONAL_JUMP)
// 004450b4: MOV ECX,0x83c1dc
//   XREF to: 0083c1dc (DATA)
// 004450b9: MOV EBP,dword ptr [0x0084a880]
//   Label: LAB_004450b9
//   XREF to: 0084a880 (READ)
// 004450bf: MOV EAX,dword ptr [ECX]
//   XREF to: 0083c1dc (READ)
//   XREF to: 0083c228 (READ)
// 004450c1: ADD EAX,EBP
// 004450c3: MOV dword ptr [ECX + 0x8],EAX
//   XREF to: 0083c1e4 (WRITE)
//   XREF to: 0083c230 (WRITE)
// 004450c6: MOV EAX,dword ptr [ECX + 0x4]
//   XREF to: 0083c1e0 (READ)
//   XREF to: 0083c22c (READ)
// 004450c9: ADD EAX,EBP
// 004450cb: MOV dword ptr [ECX + 0xc],EAX
//   XREF to: 0083c1e8 (WRITE)
//   XREF to: 0083c234 (WRITE)
// 004450ce: MOV EDI,dword ptr [0x0084a868]
//   XREF to: 0084a868 (READ)
// 004450d4: MOV EAX,dword ptr [ECX + 0x8]
//   XREF to: 0083c1e4 (READ)
//   XREF to: 0083c230 (READ)
// 004450d7: MOV EBX,ECX
// 004450d9: CMP EAX,EDI
// 004450db: JGE 0x004450e2
//   XREF to: 004450e2 (CONDITIONAL_JUMP)
// 004450dd: MOV [0x0084a868],EAX
//   XREF to: 0084a868 (WRITE)
// 004450e2: MOV EBP,dword ptr [0x0084a86c]
//   Label: LAB_004450e2
//   XREF to: 0084a86c (READ)
// 004450e8: MOV EAX,dword ptr [EBX + 0xc]
//   XREF to: 0083c1e8 (READ)
//   XREF to: 0083c234 (READ)
// 004450eb: CMP EAX,EBP
// 004450ed: JGE 0x004450f4
//   XREF to: 004450f4 (CONDITIONAL_JUMP)
// 004450ef: MOV [0x0084a86c],EAX
//   XREF to: 0084a86c (WRITE)
// 004450f4: MOV EDI,dword ptr [0x0084a854]
//   Label: LAB_004450f4
//   XREF to: 0084a854 (READ)
// 004450fa: INC EDX
// 004450fb: ADD ECX,0x4c
//   XREF to: 0083c228 (PARAM)
// 004450fe: CMP EDX,EDI
// 00445100: JL 0x004450b9
//   XREF to: 004450b9 (CONDITIONAL_JUMP)
// 00445102: MOV EDX,dword ptr [0x0084a86c]
//   Label: LAB_00445102
//   XREF to: 0084a86c (READ)
// 00445108: MOV EAX,[0x0084a868]
//   XREF to: 0084a868 (READ)
// 0044510d: CMP EAX,EDX
// 0044510f: JGE 0x004454a3
//   XREF to: 004454a3 (CONDITIONAL_JUMP)
// 00445115: MOV EBX,0x1
//   Label: LAB_00445115
// 0044511a: MOV EDI,dword ptr [0x0084a860]
//   XREF to: 0084a860 (READ)
// 00445120: MOV [0x0084a870],EAX
//   XREF to: 0084a870 (WRITE)
// 00445125: XOR EBP,EBP
// 00445127: MOV EAX,[0x0083c1e4]
//   XREF to: 0083c1e4 (READ)
// 0044512c: MOV dword ptr [0x0083c21c],EBP
//   XREF to: 0083c21c (WRITE)
// 00445132: MOV dword ptr [0x0083c1ec],EBP
//   XREF to: 0083c1ec (WRITE)
// 00445138: MOV dword ptr [0x0083c1f8],EBP
//   XREF to: 0083c1f8 (WRITE)
// 0044513e: MOV dword ptr [0x0083c1fc],EBP
//   XREF to: 0083c1fc (WRITE)
// 00445144: MOV [0x0083c1f0],EAX
//   XREF to: 0083c1f0 (WRITE)
// 00445149: MOV EAX,[0x0083c1e8]
//   XREF to: 0083c1e8 (READ)
// 0044514e: MOV dword ptr [0x0084a85c],EBX
//   XREF to: 0084a85c (WRITE)
// 00445154: MOV [0x0083c1f4],EAX
//   XREF to: 0083c1f4 (WRITE)
// 00445159: MOV EAX,[0x0083c1f0]
//   XREF to: 0083c1f0 (READ)
// 0044515e: MOV dword ptr [ESP + 0x8],EBP
//   XREF to: Stack[-0x38] (WRITE)
// 00445162: MOV [0x0083c200],EAX
//   XREF to: 0083c200 (WRITE)
// 00445167: MOV EAX,[0x0083c1f4]
//   XREF to: 0083c1f4 (READ)
// 0044516c: XOR EBX,EBX
// 0044516e: MOV [0x0083c204],EAX
//   XREF to: 0083c204 (WRITE)
// 00445173: MOV ECX,EAX
// 00445175: TEST EDI,EDI
// 00445177: JLE 0x004454b5
//   XREF to: 004454b5 (CONDITIONAL_JUMP)
// 0044517d: XOR EAX,EAX
// 0044517f: IMUL EDX,EDI,0x28
// 00445182: CMP dword ptr [EAX + 0x840c14],0x0
//   Label: LAB_00445182
//   XREF to: 00840c14 (READ)
//   XREF to: 00840c3c (READ)
// 00445189: JNZ 0x004454aa
//   XREF to: 004454aa (CONDITIONAL_JUMP)
// 0044518f: CMP dword ptr [EAX + 0x840c18],0x0
//   XREF to: 00840c18 (READ)
//   XREF to: 00840c40 (READ)
// 00445196: JNZ 0x004454aa
//   XREF to: 004454aa (CONDITIONAL_JUMP)
// 0044519c: CMP ECX,dword ptr [EAX + 0x840c1c]
//   XREF to: 00840c1c (READ)
//   XREF to: 00840c44 (READ)
// 004451a2: JNZ 0x004454aa
//   XREF to: 004454aa (CONDITIONAL_JUMP)
// 004451a8: MOV ECX,dword ptr [0x0083c200]
//   Label: LAB_004451a8
//   XREF to: 0083c200 (READ)
// 004451ae: MOV EBX,dword ptr [0x0083c1fc]
//   XREF to: 0083c1fc (READ)
// 004451b4: XOR EBP,EBP
// 004451b6: MOV EAX,[0x0084a860]
//   XREF to: 0084a860 (READ)
// 004451bb: MOV dword ptr [ESP + 0x10],EBP
//   XREF to: Stack[-0x30] (WRITE)
// 004451bf: TEST EAX,EAX
// 004451c1: JLE 0x00445590
//   XREF to: 00445590 (CONDITIONAL_JUMP)
// 004451c7: MOV EDI,dword ptr [0x0084a860]
//   XREF to: 0084a860 (READ)
// 004451cd: XOR EAX,EAX
// 004451cf: IMUL EDX,EDI,0x28
// 004451d2: CMP dword ptr [EAX + 0x840c14],0x0
//   Label: LAB_004451d2
//   XREF to: 00840c14 (READ)
//   XREF to: 00840c3c (READ)
// 004451d9: JNZ 0x00445585
//   XREF to: 00445585 (CONDITIONAL_JUMP)
// 004451df: CMP ECX,dword ptr [EAX + 0x840c18]
//   XREF to: 00840c18 (READ)
//   XREF to: 00840c40 (READ)
// 004451e5: JNZ 0x00445585
//   XREF to: 00445585 (CONDITIONAL_JUMP)
// 004451eb: CMP EBX,dword ptr [EAX + 0x840c1c]
//   XREF to: 00840c1c (READ)
//   XREF to: 00840c44 (READ)
// 004451f1: JNZ 0x00445585
//   XREF to: 00445585 (CONDITIONAL_JUMP)
// 004451f7: MOV EBP,0x1
//   Label: LAB_004451f7
// 004451fc: MOV EAX,[0x0084a858]
//   XREF to: 0084a858 (READ)
// 00445201: MOV dword ptr [ESP + 0x2c],EBP
//   XREF to: Stack[-0x14] (WRITE)
// 00445205: CMP EAX,EBP
// 00445207: JLE 0x00445265
//   XREF to: 00445265 (CONDITIONAL_JUMP)
// 00445209: MOV EAX,dword ptr [ESP + 0x2c]
//   Label: LAB_00445209
//   XREF to: Stack[-0x14] (READ)
// 0044520d: MOV EBP,dword ptr [0x0084a860]
//   XREF to: 0084a860 (READ)
// 00445213: XOR EBX,EBX
// 00445215: XOR ECX,ECX
// 00445217: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0044521b: TEST EBP,EBP
// 0044521d: JLE 0x00445669
//   XREF to: 00445669 (CONDITIONAL_JUMP)
// 00445223: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x28] (READ)
// 00445227: XOR EAX,EAX
// 00445229: IMUL EDX,EBP,0x28
// 0044522c: CMP EDI,dword ptr [EAX + 0x840c14]
//   Label: LAB_0044522c
//   XREF to: 00840c14 (READ)
//   XREF to: 00840c3c (READ)
// 00445232: JNZ 0x0044565e
//   XREF to: 0044565e (CONDITIONAL_JUMP)
// 00445238: CMP dword ptr [EAX + 0x840c18],0x0
//   XREF to: 00840c18 (READ)
//   XREF to: 00840c40 (READ)
// 0044523f: JNZ 0x0044565e
//   XREF to: 0044565e (CONDITIONAL_JUMP)
// 00445245: CMP dword ptr [EAX + 0x840c1c],0x0
//   XREF to: 00840c1c (READ)
//   XREF to: 00840c44 (READ)
// 0044524c: JNZ 0x0044565e
//   XREF to: 0044565e (CONDITIONAL_JUMP)
// 00445252: MOV EDX,dword ptr [ESP + 0x2c]
//   Label: LAB_00445252
//   XREF to: Stack[-0x14] (READ)
// 00445256: INC EDX
// 00445257: MOV ECX,dword ptr [0x0084a858]
//   XREF to: 0084a858 (READ)
// 0044525d: MOV dword ptr [ESP + 0x2c],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 00445261: CMP EDX,ECX
// 00445263: JL 0x00445209
//   XREF to: 00445209 (CONDITIONAL_JUMP)
// 00445265: IMUL EAX,dword ptr [0x0084a85c],0x4c
//   Label: LAB_00445265
//   XREF to: 0084a85c (READ)
// 0044526c: ADD EAX,0x83c1dc
//   XREF to: 0083c228 (PARAM)
//   XREF to: 0083c1dc (DATA)
// 00445271: PUSH EAX
//   XREF to: 0083c228 (DATA)
// 00445272: CALL shape_cramtex.cpp_runInteractiveAtlasGeneration_FUN_00446160
//   XREF to: 00446160 (UNCONDITIONAL_CALL)
// 00445277: MOV EAX,[0x0084a87c]
//   XREF to: 0084a87c (READ)
// 0044527c: MOV ESI,dword ptr [0x0084a884]
//   XREF to: 0084a884 (READ)
// 00445282: IMUL EAX,ESI
// 00445285: MOV EDX,dword ptr [0x0084a878]
//   XREF to: 0084a878 (READ)
// 0044528b: DEC EDX
// 0044528c: ADD EDX,EAX
// 0044528e: MOV EDI,dword ptr [0x0084a878]
//   XREF to: 0084a878 (READ)
// 00445294: MOV EAX,EDX
// 00445296: SAR EDX,0x1f
// 00445299: IDIV EDI
// 0044529b: MOV EBP,dword ptr [0x0084a880]
//   XREF to: 0084a880 (READ)
// 004452a1: ADD ESP,0x4
// 004452a4: CMP EAX,EBP
// 004452a6: JG 0x00445737
//   XREF to: 00445737 (CONDITIONAL_JUMP)
// 004452ac: PUSH 0x0
// 004452ae: PUSH 0x1
// 004452b0: PUSH 0x1
// 004452b2: XOR EBX,EBX
// 004452b4: CALL shape_cramtex.cpp_visualizeTextureAtlas_FUN_00447f20
//   XREF to: 00447f20 (UNCONDITIONAL_CALL)
// 004452b9: MOV EDI,dword ptr [0x0084a854]
//   XREF to: 0084a854 (READ)
// 004452bf: ADD ESP,0xc
// 004452c2: TEST EDI,EDI
// 004452c4: JLE 0x00445310
//   XREF to: 00445310 (CONDITIONAL_JUMP)
// 004452c6: MOV ECX,0x83c1dc
//   XREF to: 0083c1dc (DATA)
// 004452cb: MOV EAX,[0x0084a880]
//   Label: LAB_004452cb
//   XREF to: 0084a880 (READ)
// 004452d0: MOV EDX,EAX
// 004452d2: SAR EDX,0x1f
// 004452d5: SUB EAX,EDX
// 004452d7: SAR EAX,0x1
// 004452d9: ADD ECX,0x4c
//   XREF to: 0083c228 (PARAM)
// 004452dc: INC EBX
// 004452dd: MOV ESI,dword ptr [ECX + -0x18]
//   XREF to: 0083c210 (READ)
//   XREF to: 0083c25c (READ)
// 004452e0: MOV EDI,dword ptr [ECX + -0x14]
//   XREF to: 0083c214 (READ)
//   XREF to: 0083c260 (READ)
// 004452e3: MOV EBP,dword ptr [ECX + -0x10]
//   XREF to: 0083c218 (READ)
//   XREF to: 0083c264 (READ)
// 004452e6: MOV EDX,dword ptr [ECX + -0x1c]
//   XREF to: 0083c20c (READ)
//   XREF to: 0083c258 (READ)
// 004452e9: ADD ESI,EAX
// 004452eb: ADD EDI,EAX
// 004452ed: MOV dword ptr [ECX + -0x18],ESI
//   XREF to: 0083c210 (WRITE)
//   XREF to: 0083c25c (WRITE)
// 004452f0: ADD EBP,EAX
// 004452f2: MOV dword ptr [ECX + -0x14],EDI
//   XREF to: 0083c214 (WRITE)
//   XREF to: 0083c260 (WRITE)
// 004452f5: ADD EDX,EAX
// 004452f7: MOV dword ptr [ECX + -0x10],EBP
//   XREF to: 0083c218 (WRITE)
//   XREF to: 0083c264 (WRITE)
// 004452fa: MOV EAX,[0x0084a854]
//   XREF to: 0084a854 (READ)
// 004452ff: MOV dword ptr [ECX + -0x1c],EDX
//   XREF to: 0083c20c (WRITE)
//   XREF to: 0083c258 (WRITE)
// 00445302: CMP EBX,EAX
// 00445304: JL 0x004452cb
//   XREF to: 004452cb (CONDITIONAL_JUMP)
// 00445306: LEA EAX,[EAX]
// 0044530c: LEA EDX,[EDX]
// 00445310: PUSH 0x271
//   Label: LAB_00445310
// 00445315: PUSH 0x619726
//   XREF to: 00619726 (DATA)
// 0044531a: PUSH 0x61973b
//   XREF to: 0061973b (DATA)
// 0044531f: PUSH 0x0
// 00445321: PUSH 0x61973e
//   XREF to: 0061973e (DATA)
// 00445326: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 0044532b: ADD ESP,0x14
// 0044532e: MOV EBP,EAX
// 00445330: TEST EAX,EAX
// 00445332: JZ 0x004453c0
//   XREF to: 004453c0 (CONDITIONAL_JUMP)
// 00445338: MOV EDX,dword ptr [0x0084a854]
//   XREF to: 0084a854 (READ)
// 0044533e: MOV EDI,EAX
// 00445340: XOR ESI,ESI
// 00445342: TEST EDX,EDX
// 00445344: JLE 0x00445390
//   XREF to: 00445390 (CONDITIONAL_JUMP)
// 00445346: MOV EBX,0x83c1dc
//   XREF to: 0083c1dc (DATA)
// 0044534b: MOV ECX,dword ptr [EBX + 0x44]
//   Label: LAB_0044534b
//   XREF to: 0083c220 (READ)
//   XREF to: 0083c26c (READ)
// 0044534e: PUSH ECX
// 0044534f: MOV EAX,dword ptr [EBX + 0x3c]
//   XREF to: 0083c218 (READ)
//   XREF to: 0083c264 (READ)
// 00445352: PUSH EAX
// 00445353: MOV EDX,dword ptr [EBX + 0x38]
//   XREF to: 0083c214 (READ)
//   XREF to: 0083c260 (READ)
// 00445356: PUSH EDX
// 00445357: MOV ECX,dword ptr [EBX + 0x34]
//   XREF to: 0083c210 (READ)
//   XREF to: 0083c25c (READ)
// 0044535a: PUSH ECX
// 0044535b: MOV EAX,dword ptr [EBX + 0x30]
//   XREF to: 0083c20c (READ)
//   XREF to: 0083c258 (READ)
// 0044535e: PUSH EAX
// 0044535f: MOV EDX,dword ptr [EBX + 0x2c]
//   XREF to: 0083c208 (READ)
//   XREF to: 0083c254 (READ)
// 00445362: PUSH EDX
// 00445363: MOV ECX,dword ptr [EBX + 0x4]
//   XREF to: 0083c1e0 (READ)
//   XREF to: 0083c22c (READ)
// 00445366: PUSH ECX
// 00445367: MOV EAX,dword ptr [EBX]
//   XREF to: 0083c1dc (READ)
//   XREF to: 0083c228 (READ)
// 00445369: PUSH EAX
// 0044536a: PUSH ESI
// 0044536b: PUSH 0x619753
//   XREF to: 00619753 (DATA)
// 00445370: PUSH EDI
// 00445371: ADD EBX,0x4c
//   XREF to: 0083c228 (PARAM)
//   XREF to: 0083c274 (PARAM)
// 00445374: INC ESI
// 00445375: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0044537a: MOV EDX,dword ptr [0x0084a854]
//   XREF to: 0084a854 (READ)
// 00445380: ADD ESP,0x2c
// 00445383: CMP ESI,EDX
// 00445385: JL 0x0044534b
//   XREF to: 0044534b (CONDITIONAL_JUMP)
// 00445387: LEA EAX,[EAX]
// 0044538d: LEA EDX,[EDX]
// 00445390: MOV ECX,dword ptr [0x0084a880]
//   Label: LAB_00445390
//   XREF to: 0084a880 (READ)
// 00445396: PUSH ECX
// 00445397: MOV EBX,dword ptr [0x0084a884]
//   XREF to: 0084a884 (READ)
// 0044539d: PUSH EBX
// 0044539e: PUSH EBX
// 0044539f: PUSH 0x619790
//   XREF to: 00619790 (DATA)
// 004453a4: PUSH EDI
// 004453a5: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004453aa: ADD ESP,0x14
// 004453ad: PUSH 0x274
// 004453b2: PUSH 0x6197b6
//   XREF to: 006197b6 (DATA)
// 004453b7: PUSH EBP
// 004453b8: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004453bd: ADD ESP,0xc
// 004453c0: MOV EDI,dword ptr [ESP]
//   Label: LAB_004453c0
//   XREF to: Stack[-0x40] (DATA)
// 004453c3: PUSH EDI
// 004453c4: CALL crt_stdlib.c_srand_FUN_005feb80
//   XREF to: 005feb80 (UNCONDITIONAL_CALL)
// 004453c9: ADD ESP,0x4
// 004453cc: MOV EBP,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x4] (READ)
// 004453d0: XOR EBX,EBX
// 004453d2: TEST EBP,EBP
// 004453d4: JLE 0x00445447
//   XREF to: 00445447 (CONDITIONAL_JUMP)
// 004453d6: MOV EAX,0x83c1dc
//   XREF to: 0083c1dc (DATA)
// 004453db: MOV EDX,dword ptr [EAX + 0x48]
//   Label: LAB_004453db
//   XREF to: 0083c224 (READ)
//   XREF to: 0083c270 (READ)
// 004453de: MOV ECX,dword ptr [EAX + 0x2c]
//   XREF to: 0083c208 (READ)
//   XREF to: 0083c254 (READ)
// 004453e1: MOV dword ptr [EDX + 0x210],ECX
// 004453e7: MOV ECX,dword ptr [EAX + 0x44]
//   XREF to: 0083c220 (READ)
//   XREF to: 0083c26c (READ)
// 004453ea: MOV dword ptr [EDX + 0x214],ECX
// 004453f0: MOV ECX,dword ptr [EAX + 0x30]
//   XREF to: 0083c20c (READ)
//   XREF to: 0083c258 (READ)
// 004453f3: MOV dword ptr [EDX + 0x218],ECX
// 004453f9: MOV ECX,dword ptr [EAX + 0x34]
//   XREF to: 0083c210 (READ)
//   XREF to: 0083c25c (READ)
// 004453fc: MOV dword ptr [EDX + 0x21c],ECX
// 00445402: CMP dword ptr [EDX + 0x214],0x0
// 00445409: JNZ 0x004457b5
//   XREF to: 004457b5 (CONDITIONAL_JUMP)
// 0044540f: MOV ESI,dword ptr [EAX + 0x30]
//   XREF to: 0083c20c (READ)
//   XREF to: 0083c258 (READ)
// 00445412: MOV ECX,dword ptr [EAX + 0x38]
//   XREF to: 0083c214 (READ)
//   XREF to: 0083c260 (READ)
// 00445415: SUB ECX,ESI
// 00445417: MOV ESI,dword ptr [0x0084a880]
//   XREF to: 0084a880 (READ)
// 0044541d: SUB ECX,ESI
// 0044541f: MOV dword ptr [EDX + 0x220],ECX
// 00445425: MOV ESI,dword ptr [EAX + 0x3c]
//   XREF to: 0083c218 (READ)
// 00445428: MOV EDI,dword ptr [EAX + 0x34]
//   XREF to: 0083c210 (READ)
// 0044542b: MOV ECX,dword ptr [0x0084a880]
//   XREF to: 0084a880 (READ)
// 00445431: SUB ESI,EDI
// 00445433: SUB ESI,ECX
// 00445435: MOV dword ptr [EDX + 0x224],ESI
// 0044543b: MOV EDX,dword ptr [ESP + 0x44]
//   Label: LAB_0044543b
//   XREF to: Stack[0x4] (READ)
// 0044543f: INC EBX
// 00445440: ADD EAX,0x4c
// 00445443: CMP EBX,EDX
// 00445445: JL 0x004453db
//   XREF to: 004453db (CONDITIONAL_JUMP)
// 00445447: MOV EDX,dword ptr [ESP + 0x60]
//   Label: LAB_00445447
//   XREF to: Stack[0x20] (READ)
// 0044544b: MOV EAX,[0x0084a884]
//   XREF to: 0084a884 (READ)
// 00445450: MOV dword ptr [EDX],EAX
// 00445452: MOV EDX,dword ptr [ESP + 0x5c]
//   XREF to: Stack[0x1c] (READ)
// 00445456: MOV dword ptr [EDX],EAX
// 00445458: XOR EAX,EAX
// 0044545a: ADD ESP,0x30
// 0044545d: POP EBP
// 0044545e: POP EDI
// 0044545f: POP ESI
// 00445460: POP EBX
// 00445461: RET
// 00445462: MOV EDI,dword ptr [0x0084a880]
//   Label: LAB_00445462
//   XREF to: 0084a880 (READ)
// 00445468: PUSH EDI
// 00445469: PUSH 0x619604
//   XREF to: 00619604 (DATA)
// 0044546e: PUSH EAX
// 0044546f: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00445474: ADD ESP,0xc
// 00445477: PUSH 0x1e6
// 0044547c: PUSH 0x61961c
//   XREF to: 0061961c (DATA)
// 00445481: PUSH EBX
// 00445482: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 00445487: ADD ESP,0xc
// 0044548a: JMP 0x00444f4c
//   XREF to: 00444f4c (UNCONDITIONAL_JUMP)
// 0044548f: MOV dword ptr [0x0084a880],EBX
//   Label: LAB_0044548f
//   XREF to: 0084a880 (WRITE)
// 00445495: CMP EDI,0xa
// 00445498: JL 0x00444f66
//   XREF to: 00444f66 (CONDITIONAL_JUMP)
// 0044549e: JMP 0x00445071
//   XREF to: 00445071 (UNCONDITIONAL_JUMP)
// 004454a3: MOV EAX,EDX
//   Label: LAB_004454a3
// 004454a5: JMP 0x00445115
//   XREF to: 00445115 (UNCONDITIONAL_JUMP)
// 004454aa: ADD EAX,0x28
//   Label: LAB_004454aa
// 004454ad: CMP EAX,EDX
// 004454af: JL 0x00445182
//   XREF to: 00445182 (CONDITIONAL_JUMP)
// 004454b5: XOR EAX,EAX
//   Label: LAB_004454b5
// 004454b7: MOV EDX,dword ptr [0x0084a860]
//   XREF to: 0084a860 (READ)
// 004454bd: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 004454c1: IMUL EAX,EDX,0x28
// 004454c4: ADD EAX,0x840c14
//   XREF to: 00840c14 (DATA)
// 004454c9: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x20] (WRITE)
//   XREF to: 00840c14 (DATA)
// 004454cd: CMP dword ptr [ESP + 0xc],0x0
//   Label: LAB_004454cd
//   XREF to: Stack[-0x34] (READ)
// 004454d2: JZ 0x0044552c
//   XREF to: 0044552c (CONDITIONAL_JUMP)
// 004454d4: MOV EDI,dword ptr [0x0084a868]
//   XREF to: 0084a868 (READ)
// 004454da: MOV ESI,dword ptr [0x0084a86c]
//   XREF to: 0084a86c (READ)
// 004454e0: ADD EDI,ECX
//   Label: LAB_004454e0
// 004454e2: ADD ESI,EBX
// 004454e4: MOV EDX,dword ptr [0x0084a85c]
//   XREF to: 0084a85c (READ)
// 004454ea: DEC EDX
// 004454eb: TEST EDX,EDX
// 004454ed: JL 0x00445514
//   XREF to: 00445514 (CONDITIONAL_JUMP)
// 004454ef: IMUL EAX,EDX,0x4c
// 004454f2: ADD EAX,0x83c1dc
//   XREF to: 0083c1dc (DATA)
// 004454f7: MOV EBP,dword ptr [EAX + 0x10]
//   Label: LAB_004454f7
//   XREF to: 0083c1a0 (READ)
//   XREF to: 0083c1ec (READ)
// 004454fa: CMP EBP,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x38] (READ)
// 004454fe: JNZ 0x0044553a
//   XREF to: 0044553a (CONDITIONAL_JUMP)
// 00445500: CMP EBX,dword ptr [EAX + 0x24]
//   XREF to: 0083c1b4 (READ)
//   XREF to: 0083c200 (READ)
// 00445503: JGE 0x0044553a
//   XREF to: 0044553a (CONDITIONAL_JUMP)
// 00445505: CMP ECX,dword ptr [EAX + 0x28]
//   XREF to: 0083c1b8 (READ)
//   XREF to: 0083c204 (READ)
// 00445508: JGE 0x0044553a
//   XREF to: 0044553a (CONDITIONAL_JUMP)
// 0044550a: CMP ESI,dword ptr [EAX + 0x1c]
//   XREF to: 0083c1ac (READ)
//   XREF to: 0083c1f8 (READ)
// 0044550d: JLE 0x0044553a
//   XREF to: 0044553a (CONDITIONAL_JUMP)
// 0044550f: CMP EDI,dword ptr [EAX + 0x20]
//   XREF to: 0083c1b0 (READ)
//   XREF to: 0083c1fc (READ)
// 00445512: JLE 0x0044553a
//   XREF to: 0044553a (CONDITIONAL_JUMP)
// 00445514: TEST EDX,EDX
//   Label: LAB_00445514
// 00445516: JL 0x00445544
//   XREF to: 00445544 (CONDITIONAL_JUMP)
// 00445518: MOV ESI,dword ptr [ESP + 0xc]
//   Label: LAB_00445518
//   XREF to: Stack[-0x34] (READ)
// 0044551c: INC ESI
// 0044551d: MOV dword ptr [ESP + 0xc],ESI
//   XREF to: Stack[-0x34] (WRITE)
// 00445521: CMP ESI,0x1
// 00445524: JG 0x004451a8
//   XREF to: 004451a8 (CONDITIONAL_JUMP)
// 0044552a: JMP 0x004454cd
//   XREF to: 004454cd (UNCONDITIONAL_JUMP)
// 0044552c: MOV EDI,dword ptr [0x0084a86c]
//   Label: LAB_0044552c
//   XREF to: 0084a86c (READ)
// 00445532: MOV ESI,dword ptr [0x0084a868]
//   XREF to: 0084a868 (READ)
// 00445538: JMP 0x004454e0
//   XREF to: 004454e0 (UNCONDITIONAL_JUMP)
// 0044553a: DEC EDX
//   Label: LAB_0044553a
// 0044553b: SUB EAX,0x4c
// 0044553e: TEST EDX,EDX
// 00445540: JGE 0x004454f7
//   XREF to: 004454f7 (CONDITIONAL_JUMP)
// 00445542: JMP 0x00445514
//   XREF to: 00445514 (UNCONDITIONAL_JUMP)
// 00445544: MOV EDX,dword ptr [ESP + 0x20]
//   Label: LAB_00445544
//   XREF to: Stack[-0x20] (READ)
// 00445548: MOV dword ptr [EDX + 0x18],0x0
//   XREF to: 00840c2c (WRITE)
// 0044554f: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x38] (READ)
// 00445553: MOV dword ptr [EDX + 0x24],0x1
//   XREF to: 00840c38 (WRITE)
// 0044555a: MOV dword ptr [EDX],EAX
//   XREF to: 00840c14 (WRITE)
// 0044555c: MOV dword ptr [EDX + 0x4],EBX
//   XREF to: 00840c18 (WRITE)
// 0044555f: MOV dword ptr [EDX + 0x8],ECX
//   XREF to: 00840c1c (WRITE)
// 00445562: MOV dword ptr [EDX + 0xc],ESI
//   XREF to: 00840c20 (WRITE)
// 00445565: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x34] (READ)
// 00445569: MOV dword ptr [EDX + 0x14],EAX
//   XREF to: 00840c28 (WRITE)
// 0044556c: LEA EAX,[EDX + 0x28]
//   XREF to: 00840c3c (DATA)
// 0044556f: MOV dword ptr [EDX + 0x10],EDI
//   XREF to: 00840c24 (WRITE)
// 00445572: MOV EDX,dword ptr [0x0084a860]
//   XREF to: 0084a860 (READ)
// 00445578: INC EDX
// 00445579: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x20] (WRITE)
//   XREF to: 00840c3c (DATA)
// 0044557d: MOV dword ptr [0x0084a860],EDX
//   XREF to: 0084a860 (WRITE)
// 00445583: JMP 0x00445518
//   XREF to: 00445518 (UNCONDITIONAL_JUMP)
// 00445585: ADD EAX,0x28
//   Label: LAB_00445585
// 00445588: CMP EAX,EDX
// 0044558a: JL 0x004451d2
//   XREF to: 004451d2 (CONDITIONAL_JUMP)
// 00445590: IMUL EAX,dword ptr [0x0084a860],0x28
//   Label: LAB_00445590
//   XREF to: 0084a860 (READ)
// 00445597: XOR EDX,EDX
// 00445599: ADD EAX,0x840c14
//   XREF to: 00840c14 (DATA)
// 0044559e: MOV dword ptr [ESP + 0x14],EDX
//   XREF to: Stack[-0x2c] (WRITE)
// 004455a2: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x1c] (WRITE)
//   XREF to: 00840c14 (DATA)
//   XREF to: 00840c3c (DATA)
// 004455a6: CMP dword ptr [ESP + 0x14],0x0
//   Label: LAB_004455a6
//   XREF to: Stack[-0x2c] (READ)
// 004455ab: JZ 0x00445605
//   XREF to: 00445605 (CONDITIONAL_JUMP)
// 004455ad: MOV ESI,dword ptr [0x0084a868]
//   XREF to: 0084a868 (READ)
// 004455b3: MOV EDI,dword ptr [0x0084a86c]
//   XREF to: 0084a86c (READ)
// 004455b9: ADD ESI,EBX
//   Label: LAB_004455b9
// 004455bb: ADD EDI,ECX
// 004455bd: MOV EDX,dword ptr [0x0084a85c]
//   XREF to: 0084a85c (READ)
// 004455c3: DEC EDX
// 004455c4: TEST EDX,EDX
// 004455c6: JL 0x004455ed
//   XREF to: 004455ed (CONDITIONAL_JUMP)
// 004455c8: IMUL EAX,EDX,0x4c
// 004455cb: ADD EAX,0x83c1dc
//   XREF to: 0083c1dc (DATA)
// 004455d0: MOV EBP,dword ptr [EAX + 0x10]
//   Label: LAB_004455d0
//   XREF to: 0083c1a0 (READ)
//   XREF to: 0083c1ec (READ)
// 004455d3: CMP EBP,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x30] (READ)
// 004455d7: JNZ 0x00445613
//   XREF to: 00445613 (CONDITIONAL_JUMP)
// 004455d9: CMP ECX,dword ptr [EAX + 0x24]
//   XREF to: 0083c1b4 (READ)
//   XREF to: 0083c200 (READ)
// 004455dc: JGE 0x00445613
//   XREF to: 00445613 (CONDITIONAL_JUMP)
// 004455de: CMP EBX,dword ptr [EAX + 0x28]
//   XREF to: 0083c1b8 (READ)
//   XREF to: 0083c204 (READ)
// 004455e1: JGE 0x00445613
//   XREF to: 00445613 (CONDITIONAL_JUMP)
// 004455e3: CMP EDI,dword ptr [EAX + 0x1c]
//   XREF to: 0083c1ac (READ)
//   XREF to: 0083c1f8 (READ)
// 004455e6: JLE 0x00445613
//   XREF to: 00445613 (CONDITIONAL_JUMP)
// 004455e8: CMP ESI,dword ptr [EAX + 0x20]
//   XREF to: 0083c1b0 (READ)
//   XREF to: 0083c1fc (READ)
// 004455eb: JLE 0x00445613
//   XREF to: 00445613 (CONDITIONAL_JUMP)
// 004455ed: TEST EDX,EDX
//   Label: LAB_004455ed
// 004455ef: JL 0x0044561d
//   XREF to: 0044561d (CONDITIONAL_JUMP)
// 004455f1: MOV ESI,dword ptr [ESP + 0x14]
//   Label: LAB_004455f1
//   XREF to: Stack[-0x2c] (READ)
// 004455f5: INC ESI
// 004455f6: MOV dword ptr [ESP + 0x14],ESI
//   XREF to: Stack[-0x2c] (WRITE)
// 004455fa: CMP ESI,0x1
// 004455fd: JG 0x004451f7
//   XREF to: 004451f7 (CONDITIONAL_JUMP)
// 00445603: JMP 0x004455a6
//   XREF to: 004455a6 (UNCONDITIONAL_JUMP)
// 00445605: MOV ESI,dword ptr [0x0084a86c]
//   Label: LAB_00445605
//   XREF to: 0084a86c (READ)
// 0044560b: MOV EDI,dword ptr [0x0084a868]
//   XREF to: 0084a868 (READ)
// 00445611: JMP 0x004455b9
//   XREF to: 004455b9 (UNCONDITIONAL_JUMP)
// 00445613: DEC EDX
//   Label: LAB_00445613
// 00445614: SUB EAX,0x4c
// 00445617: TEST EDX,EDX
// 00445619: JGE 0x004455d0
//   XREF to: 004455d0 (CONDITIONAL_JUMP)
// 0044561b: JMP 0x004455ed
//   XREF to: 004455ed (UNCONDITIONAL_JUMP)
// 0044561d: MOV EDX,dword ptr [ESP + 0x24]
//   Label: LAB_0044561d
//   XREF to: Stack[-0x1c] (READ)
// 00445621: MOV dword ptr [EDX + 0x18],0x0
//   XREF to: 00840c2c (WRITE)
//   XREF to: 00840c54 (WRITE)
// 00445628: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x30] (READ)
// 0044562c: MOV dword ptr [EDX + 0x24],0x1
//   XREF to: 00840c38 (WRITE)
//   XREF to: 00840c60 (WRITE)
// 00445633: MOV dword ptr [EDX],EAX
//   XREF to: 00840c14 (WRITE)
//   XREF to: 00840c3c (WRITE)
// 00445635: MOV dword ptr [EDX + 0x4],ECX
//   XREF to: 00840c18 (WRITE)
//   XREF to: 00840c40 (WRITE)
// 00445638: MOV dword ptr [EDX + 0x8],EBX
//   XREF to: 00840c1c (WRITE)
//   XREF to: 00840c44 (WRITE)
// 0044563b: MOV dword ptr [EDX + 0xc],EDI
//   XREF to: 00840c20 (WRITE)
//   XREF to: 00840c48 (WRITE)
// 0044563e: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x2c] (READ)
// 00445642: MOV dword ptr [EDX + 0x14],EAX
//   XREF to: 00840c28 (WRITE)
//   XREF to: 00840c50 (WRITE)
// 00445645: LEA EAX,[EDX + 0x28]
//   XREF to: 00840c3c (DATA)
// 00445648: MOV dword ptr [EDX + 0x10],ESI
//   XREF to: 00840c24 (WRITE)
//   XREF to: 00840c4c (WRITE)
// 0044564b: MOV EDX,dword ptr [0x0084a860]
//   XREF to: 0084a860 (READ)
// 00445651: INC EDX
// 00445652: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x1c] (WRITE)
//   XREF to: 00840c3c (DATA)
//   XREF to: 00840c64 (DATA)
// 00445656: MOV dword ptr [0x0084a860],EDX
//   XREF to: 0084a860 (WRITE)
// 0044565c: JMP 0x004455f1
//   XREF to: 004455f1 (UNCONDITIONAL_JUMP)
// 0044565e: ADD EAX,0x28
//   Label: LAB_0044565e
// 00445661: CMP EAX,EDX
// 00445663: JL 0x0044522c
//   XREF to: 0044522c (CONDITIONAL_JUMP)
// 00445669: IMUL EAX,dword ptr [0x0084a860],0x28
//   Label: LAB_00445669
//   XREF to: 0084a860 (READ)
// 00445670: XOR EDI,EDI
// 00445672: ADD EAX,0x840c14
//   XREF to: 00840c14 (DATA)
// 00445677: MOV dword ptr [ESP + 0x1c],EDI
//   XREF to: Stack[-0x24] (WRITE)
// 0044567b: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x18] (WRITE)
//   XREF to: 00840c14 (DATA)
//   XREF to: 00840c3c (DATA)
// 0044567f: CMP dword ptr [ESP + 0x1c],0x0
//   Label: LAB_0044567f
//   XREF to: Stack[-0x24] (READ)
// 00445684: JZ 0x004456de
//   XREF to: 004456de (CONDITIONAL_JUMP)
// 00445686: MOV EDI,dword ptr [0x0084a868]
//   XREF to: 0084a868 (READ)
// 0044568c: MOV ESI,dword ptr [0x0084a86c]
//   XREF to: 0084a86c (READ)
// 00445692: ADD EDI,ECX
//   Label: LAB_00445692
// 00445694: ADD ESI,EBX
// 00445696: MOV EDX,dword ptr [0x0084a85c]
//   XREF to: 0084a85c (READ)
// 0044569c: DEC EDX
// 0044569d: TEST EDX,EDX
// 0044569f: JL 0x004456c6
//   XREF to: 004456c6 (CONDITIONAL_JUMP)
// 004456a1: IMUL EAX,EDX,0x4c
// 004456a4: ADD EAX,0x83c1dc
//   XREF to: 0083c1dc (DATA)
// 004456a9: MOV EBP,dword ptr [EAX + 0x10]
//   Label: LAB_004456a9
//   XREF to: 0083c1a0 (READ)
//   XREF to: 0083c1ec (READ)
// 004456ac: CMP EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x28] (READ)
// 004456b0: JNZ 0x004456ec
//   XREF to: 004456ec (CONDITIONAL_JUMP)
// 004456b2: CMP EBX,dword ptr [EAX + 0x24]
//   XREF to: 0083c1b4 (READ)
//   XREF to: 0083c200 (READ)
// 004456b5: JGE 0x004456ec
//   XREF to: 004456ec (CONDITIONAL_JUMP)
// 004456b7: CMP ECX,dword ptr [EAX + 0x28]
//   XREF to: 0083c1b8 (READ)
//   XREF to: 0083c204 (READ)
// 004456ba: JGE 0x004456ec
//   XREF to: 004456ec (CONDITIONAL_JUMP)
// 004456bc: CMP ESI,dword ptr [EAX + 0x1c]
//   XREF to: 0083c1ac (READ)
//   XREF to: 0083c1f8 (READ)
// 004456bf: JLE 0x004456ec
//   XREF to: 004456ec (CONDITIONAL_JUMP)
// 004456c1: CMP EDI,dword ptr [EAX + 0x20]
//   XREF to: 0083c1b0 (READ)
//   XREF to: 0083c1fc (READ)
// 004456c4: JLE 0x004456ec
//   XREF to: 004456ec (CONDITIONAL_JUMP)
// 004456c6: TEST EDX,EDX
//   Label: LAB_004456c6
// 004456c8: JL 0x004456f6
//   XREF to: 004456f6 (CONDITIONAL_JUMP)
// 004456ca: MOV ESI,dword ptr [ESP + 0x1c]
//   Label: LAB_004456ca
//   XREF to: Stack[-0x24] (READ)
// 004456ce: INC ESI
// 004456cf: MOV dword ptr [ESP + 0x1c],ESI
//   XREF to: Stack[-0x24] (WRITE)
// 004456d3: CMP ESI,0x1
// 004456d6: JG 0x00445252
//   XREF to: 00445252 (CONDITIONAL_JUMP)
// 004456dc: JMP 0x0044567f
//   XREF to: 0044567f (UNCONDITIONAL_JUMP)
// 004456de: MOV EDI,dword ptr [0x0084a86c]
//   Label: LAB_004456de
//   XREF to: 0084a86c (READ)
// 004456e4: MOV ESI,dword ptr [0x0084a868]
//   XREF to: 0084a868 (READ)
// 004456ea: JMP 0x00445692
//   XREF to: 00445692 (UNCONDITIONAL_JUMP)
// 004456ec: DEC EDX
//   Label: LAB_004456ec
// 004456ed: SUB EAX,0x4c
// 004456f0: TEST EDX,EDX
// 004456f2: JGE 0x004456a9
//   XREF to: 004456a9 (CONDITIONAL_JUMP)
// 004456f4: JMP 0x004456c6
//   XREF to: 004456c6 (UNCONDITIONAL_JUMP)
// 004456f6: MOV EDX,dword ptr [ESP + 0x28]
//   Label: LAB_004456f6
//   XREF to: Stack[-0x18] (READ)
// 004456fa: MOV dword ptr [EDX + 0x18],0x0
//   XREF to: 00840c2c (WRITE)
//   XREF to: 00840c54 (WRITE)
// 00445701: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x28] (READ)
// 00445705: MOV dword ptr [EDX + 0x24],0x1
//   XREF to: 00840c38 (WRITE)
//   XREF to: 00840c60 (WRITE)
// 0044570c: MOV dword ptr [EDX],EAX
//   XREF to: 00840c14 (WRITE)
//   XREF to: 00840c3c (WRITE)
// 0044570e: MOV dword ptr [EDX + 0x4],EBX
//   XREF to: 00840c18 (WRITE)
//   XREF to: 00840c40 (WRITE)
// 00445711: MOV dword ptr [EDX + 0x8],ECX
//   XREF to: 00840c1c (WRITE)
//   XREF to: 00840c44 (WRITE)
// 00445714: MOV dword ptr [EDX + 0xc],ESI
//   XREF to: 00840c20 (WRITE)
//   XREF to: 00840c48 (WRITE)
// 00445717: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x24] (READ)
// 0044571b: MOV dword ptr [EDX + 0x14],EAX
//   XREF to: 00840c28 (WRITE)
//   XREF to: 00840c50 (WRITE)
// 0044571e: LEA EAX,[EDX + 0x28]
//   XREF to: 00840c3c (DATA)
// 00445721: MOV dword ptr [EDX + 0x10],EDI
//   XREF to: 00840c24 (WRITE)
//   XREF to: 00840c4c (WRITE)
// 00445724: MOV EDX,dword ptr [0x0084a860]
//   XREF to: 0084a860 (READ)
// 0044572a: INC EDX
// 0044572b: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x18] (WRITE)
//   XREF to: 00840c3c (DATA)
//   XREF to: 00840c64 (DATA)
// 0044572f: MOV dword ptr [0x0084a860],EDX
//   XREF to: 0084a860 (WRITE)
// 00445735: JMP 0x004456ca
//   XREF to: 004456ca (UNCONDITIONAL_JUMP)
// 00445737: CMP ESI,dword ptr [0x0084a874]
//   Label: LAB_00445737
//   XREF to: 0084a874 (READ)
// 0044573d: JLE 0x00445745
//   XREF to: 00445745 (CONDITIONAL_JUMP)
// 0044573f: MOV dword ptr [0x0084a874],ESI
//   XREF to: 0084a874 (WRITE)
// 00445745: PUSH 0x24f
//   Label: LAB_00445745
// 0044574a: PUSH 0x6196ab
//   XREF to: 006196ab (DATA)
// 0044574f: PUSH 0x6196c0
//   XREF to: 006196c0 (DATA)
// 00445754: MOV ECX,dword ptr [0x0084a874]
//   XREF to: 0084a874 (READ)
// 0044575a: PUSH 0x0
// 0044575c: INC ECX
// 0044575d: PUSH 0x6196c3
//   XREF to: 006196c3 (DATA)
// 00445762: MOV dword ptr [0x0084a874],ECX
//   XREF to: 0084a874 (WRITE)
// 00445768: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 0044576d: MOV EBX,EAX
// 0044576f: ADD ESP,0x14
// 00445772: TEST EAX,EAX
// 00445774: JZ 0x00444f54
//   XREF to: 00444f54 (CONDITIONAL_JUMP)
// 0044577a: PUSH 0x6196d8
//   XREF to: 006196d8 (DATA)
// 0044577f: PUSH EAX
// 00445780: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00445785: ADD ESP,0x8
// 00445788: MOV ESI,dword ptr [0x0084a874]
//   XREF to: 0084a874 (READ)
// 0044578e: PUSH ESI
// 0044578f: PUSH 0x6196ee
//   XREF to: 006196ee (DATA)
// 00445794: PUSH EBX
// 00445795: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0044579a: ADD ESP,0xc
// 0044579d: PUSH 0x253
// 004457a2: PUSH 0x619711
//   XREF to: 00619711 (DATA)
// 004457a7: PUSH EBX
// 004457a8: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004457ad: ADD ESP,0xc
// 004457b0: JMP 0x00444f54
//   XREF to: 00444f54 (UNCONDITIONAL_JUMP)
// 004457b5: MOV EBP,dword ptr [EAX + 0x30]
//   Label: LAB_004457b5
//   XREF to: 0083c20c (READ)
//   XREF to: 0083c258 (READ)
// 004457b8: MOV ESI,dword ptr [EAX + 0x38]
//   XREF to: 0083c214 (READ)
//   XREF to: 0083c260 (READ)
// 004457bb: MOV ECX,dword ptr [0x0084a880]
//   XREF to: 0084a880 (READ)
// 004457c1: SUB ESI,EBP
// 004457c3: SUB ESI,ECX
// 004457c5: MOV dword ptr [EDX + 0x224],ESI
// 004457cb: MOV ECX,dword ptr [EAX + 0x3c]
//   XREF to: 0083c218 (READ)
//   XREF to: 0083c264 (READ)
// 004457ce: SUB ECX,dword ptr [EAX + 0x34]
//   XREF to: 0083c210 (READ)
//   XREF to: 0083c25c (READ)
// 004457d1: MOV ESI,dword ptr [0x0084a880]
//   XREF to: 0084a880 (READ)
// 004457d7: SUB ECX,ESI
// 004457d9: MOV dword ptr [EDX + 0x220],ECX
// 004457df: JMP 0x0044543b
//   XREF to: 0044543b (UNCONDITIONAL_JUMP)
