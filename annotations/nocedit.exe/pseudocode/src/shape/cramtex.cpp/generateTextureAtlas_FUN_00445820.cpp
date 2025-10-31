// Name: shape_cramtex.cpp_generateTextureAtlas_FUN_00445820
// Address: 00445820
// Address Range: [[00445820, 004460ff]]
// Convention: __cdecl
// Signature: void shape_cramtex.cpp_generateTextureAtlas_FUN_00445820(void)
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

#include "nocturne.h"

void __cdecl shape_cramtex_cpp_generateTextureAtlas_FUN_00445820(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  char **ppcVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  SCramWorkingEntry *pSVar11;
  int iVar12;
  FILE *pFVar13;
  undefined1 *puVar14;
  FILE *pFVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  SCramRectangle *pSVar21;
  SCramRectangle *pSVar22;
  SCramRectangle *pSStack00000004;
  int iStack00000008;
  int in_stack_00000014;
  uint in_stack_ffffffe8;
  
  crt_io_c_deleteFile_FUN_005ff9d0("..\\shape\\cramlog.txt");
  crt_stdlib_c_rand_FUN_005feb5c();
  crt_stdlib_c_srand_FUN_005feb80(0x16);
  crt_stdlib_c_qsort_FUN_005fdf38
            (g_CramSortedTextureEntries,g_CramTextureCount,0x4c,
             shape_cramtex_cpp_qsortByLargestDimension_FUN_004457f0);
  iVar16 = 0;
  g_CramTotalPixelArea = 0;
  if (0 < (int)g_CramTextureCount) {
    pSVar11 = g_CramSortedTextureEntries;
    do {
      piVar8 = &pSVar11->width;
      piVar1 = &pSVar11->height;
      pSVar11 = pSVar11 + 1;
      g_CramTotalPixelArea = g_CramTotalPixelArea + *piVar8 * *piVar1;
      iVar16 = iVar16 + 1;
    } while (iVar16 < (int)g_CramTextureCount);
  }
  iVar16 = (g_CramTotalPixelArea * 100) / in_stack_00000014;
  for (; iVar12 = g_CramAcceptableSize * g_CramAcceptableSize * g_CramTotalMaps,
      iVar12 - iVar16 == 0 || iVar12 < iVar16; g_CramAcceptableSize = g_CramAcceptableSize + 1) {
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
  pFVar13 = (FILE *)0xffffffff;
  do {
    iVar16 = 0;
    ppcVar7 = &pFVar13->_ptr;
    g_CramAlgorithmState = &DAT_0084a8b0;
    do {
      iVar16 = iVar16 + 1;
      iVar12 = 0;
      if (0 < (int)g_CramTextureCount) {
        pSVar11 = g_CramSortedTextureEntries;
        do {
          iVar17 = pSVar11->width + g_CramPaddingCalculation;
          if (g_CramAcceptableSize < iVar17) {
            g_CramAcceptableSize = iVar17;
          }
          iVar17 = pSVar11->height + g_CramPaddingCalculation;
          if (g_CramAcceptableSize < iVar17) {
            g_CramAcceptableSize = iVar17;
          }
          iVar12 = iVar12 + 1;
          pSVar11 = pSVar11 + 1;
        } while (iVar12 < (int)g_CramTextureCount);
      }
      iVar12 = g_CramAcceptableSize * 5 >> 0x1f;
      puVar14 = (undefined1 *)
                ((g_CramAtlasWidth + -1 +
                 ((int)((g_CramAcceptableSize * 5 + iVar12 * -4) - (uint)(iVar12 << 1 < 0)) >> 2) *
                 g_CramAtlasHeight) / g_CramAtlasWidth);
      if ((int)puVar14 <= (int)pFVar13) {
        puVar14 = (undefined1 *)((int)ppcVar7 + 1);
      }
      pFVar15 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                          ("..\\shape\\cramlog.txt",(char *)0x0,"at",
                           "..\\shape\\cramtex.cpp",0x206);
      if (pFVar15 != (FILE *)0x0) {
        crt_stdio_c_fprintf_FUN_005fe6d0(pFVar15,"Guess #%d\n",iVar16);
        crt_stdio_c_fprintf_FUN_005fe6d0(pFVar15,"  acceptableSize = %d\n",g_CramAcceptableSize);
        crt_stdio_c_fprintf_FUN_005fe6d0(pFVar15,"  estimated pad = %d\n",puVar14);
        in_stack_ffffffe8 = 0x20b;
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar15,"..\\shape\\cramtex.cpp",0x20b);
        pFVar13 = pFVar15;
      }
    } while ((puVar14 != (undefined1 *)g_CramPaddingCalculation) &&
            (g_CramPaddingCalculation = (int)puVar14, iVar16 < 10));
    pFVar13 = (FILE *)g_CramPaddingCalculation;
    iVar16 = 0;
    g_CramRectangleCount = 0;
    g_CramBestSolutionMetric2 = 999999;
    g_CramBestSolutionMetric1 = 999999;
    g_CramMinPlacementX = 999999;
    g_CramMinPlacementY = 999999;
    g_CramCurrentAcceptableSize = g_CramAcceptableSize;
    if (0 < (int)g_CramTextureCount) {
      pSVar11 = g_CramSortedTextureEntries;
      do {
        iVar12 = g_CramPaddingCalculation;
        pSVar11->padded_width = pSVar11->width + g_CramPaddingCalculation;
        pSVar11->padded_height = pSVar11->height + iVar12;
        if (pSVar11->padded_width < g_CramMinPlacementX) {
          g_CramMinPlacementX = pSVar11->padded_width;
        }
        if (pSVar11->padded_height < g_CramMinPlacementY) {
          g_CramMinPlacementY = pSVar11->padded_height;
        }
        iVar16 = iVar16 + 1;
        pSVar11 = pSVar11 + 1;
      } while (iVar16 < (int)g_CramTextureCount);
    }
    iVar16 = g_CramSortedTextureEntries[0].padded_height;
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
      iVar12 = 0;
      do {
        if (((*(int *)((int)&g_CramRectangles[0].left + iVar12) == 0) &&
            (*(int *)((int)&g_CramRectangles[0].top + iVar12) == 0)) &&
           (g_CramSortedTextureEntries[0].padded_height ==
            *(int *)((int)&g_CramRectangles[0].right + iVar12))) goto LAB_00445b8a;
        iVar12 = iVar12 + 0x28;
      } while (iVar12 < g_CramRectangleCount * 0x28);
    }
    in_stack_ffffffe8 = 0;
    pSVar21 = g_CramRectangles + g_CramRectangleCount;
    do {
      iVar12 = g_CramMinPlacementY;
      iVar17 = g_CramMinPlacementX;
      if (in_stack_ffffffe8 != 0) {
        iVar12 = g_CramMinPlacementX;
        iVar17 = g_CramMinPlacementY;
      }
      iVar19 = g_CramPlacedTextureCount + -1;
      if (-1 < iVar19) {
        pSVar11 = g_CramSortedTextureEntries + iVar19;
        do {
          if (((pSVar11->assigned_map_number == 0) && (0 < pSVar11->working_top)) &&
             ((iVar16 < pSVar11->working_width &&
              ((pSVar11->placement_bottom < iVar17 && (pSVar11->working_right < iVar12 + iVar16)))))
             ) break;
          iVar19 = iVar19 + -1;
          pSVar11 = pSVar11 + -1;
        } while (-1 < iVar19);
      }
      pSVar22 = pSVar21;
      if (iVar19 < 0) {
        pSVar21->reserved_0x18 = 0;
        pSVar21->active_flag = 1;
        pSVar21->left = 0;
        pSVar21->top = 0;
        pSVar21->right = iVar16;
        pSVar21->bottom = iVar17;
        pSVar21->orientation = in_stack_ffffffe8;
        pSVar22 = pSVar21 + 1;
        pSVar21->max_dimension = iVar12 + iVar16;
        g_CramRectangleCount = g_CramRectangleCount + 1;
      }
      in_stack_ffffffe8 = in_stack_ffffffe8 + 1;
      pSVar21 = pSVar22;
    } while ((int)in_stack_ffffffe8 < 2);
LAB_00445b8a:
    iVar12 = g_CramSortedTextureEntries[0].working_top;
    iVar16 = g_CramSortedTextureEntries[0].working_right;
    if (0 < g_CramRectangleCount) {
      iVar17 = 0;
      do {
        if (((*(int *)((int)&g_CramRectangles[0].left + iVar17) == 0) &&
            (g_CramSortedTextureEntries[0].working_top ==
             *(int *)((int)&g_CramRectangles[0].top + iVar17))) &&
           (g_CramSortedTextureEntries[0].working_right ==
            *(int *)((int)&g_CramRectangles[0].right + iVar17))) goto LAB_00445bd9;
        iVar17 = iVar17 + 0x28;
      } while (iVar17 < g_CramRectangleCount * 0x28);
    }
    iVar17 = 0;
    pSVar21 = g_CramRectangles + g_CramRectangleCount;
    do {
      iVar19 = g_CramMinPlacementX;
      iVar20 = g_CramMinPlacementY;
      if (iVar17 != 0) {
        iVar19 = g_CramMinPlacementY;
        iVar20 = g_CramMinPlacementX;
      }
      iVar18 = g_CramPlacedTextureCount + -1;
      if (-1 < iVar18) {
        pSVar11 = g_CramSortedTextureEntries + iVar18;
        do {
          if (((pSVar11->assigned_map_number == 0) && (iVar12 < pSVar11->working_top)) &&
             ((iVar16 < pSVar11->working_width &&
              ((pSVar11->placement_bottom < iVar19 + iVar12 &&
               (pSVar11->working_right < iVar20 + iVar16)))))) break;
          iVar18 = iVar18 + -1;
          pSVar11 = pSVar11 + -1;
        } while (-1 < iVar18);
      }
      pSVar22 = pSVar21;
      if (iVar18 < 0) {
        pSVar21->reserved_0x18 = 0;
        pSVar21->active_flag = 1;
        pSVar21->left = 0;
        pSVar21->top = iVar12;
        pSVar21->right = iVar16;
        pSVar21->bottom = iVar19 + iVar12;
        pSVar21->orientation = iVar17;
        pSVar22 = pSVar21 + 1;
        pSVar21->max_dimension = iVar20 + iVar16;
        g_CramRectangleCount = g_CramRectangleCount + 1;
      }
      iVar17 = iVar17 + 1;
      pSVar21 = pSVar22;
    } while (iVar17 < 2);
LAB_00445bd9:
    iStack00000008 = 1;
    if (1 < g_CramTotalMaps) {
      do {
        if (0 < g_CramRectangleCount) {
          iVar16 = 0;
          do {
            if (((iStack00000008 == *(int *)((int)&g_CramRectangles[0].left + iVar16)) &&
                (*(int *)((int)&g_CramRectangles[0].top + iVar16) == 0)) &&
               (*(int *)((int)&g_CramRectangles[0].right + iVar16) == 0)) goto LAB_00445c34;
            iVar16 = iVar16 + 0x28;
          } while (iVar16 < g_CramRectangleCount * 0x28);
        }
        pSStack00000004 = g_CramRectangles + g_CramRectangleCount;
        iVar16 = 0;
        do {
          iVar12 = g_CramMinPlacementY;
          iVar17 = g_CramMinPlacementX;
          if (iVar16 != 0) {
            iVar12 = g_CramMinPlacementX;
            iVar17 = g_CramMinPlacementY;
          }
          iVar19 = g_CramPlacedTextureCount + -1;
          if (-1 < iVar19) {
            pSVar11 = g_CramSortedTextureEntries + iVar19;
            do {
              if (((pSVar11->assigned_map_number == iStack00000008) && (0 < pSVar11->working_top))
                 && ((0 < pSVar11->working_width &&
                     ((pSVar11->placement_bottom < iVar17 && (pSVar11->working_right < iVar12))))))
              break;
              iVar19 = iVar19 + -1;
              pSVar11 = pSVar11 + -1;
            } while (-1 < iVar19);
          }
          if (iVar19 < 0) {
            pSStack00000004->reserved_0x18 = 0;
            pSStack00000004->active_flag = 1;
            pSStack00000004->left = iStack00000008;
            pSStack00000004->top = 0;
            pSStack00000004->right = 0;
            pSStack00000004->bottom = iVar17;
            pSStack00000004->orientation = iVar16;
            pSStack00000004->max_dimension = iVar12;
            g_CramRectangleCount = g_CramRectangleCount + 1;
            pSStack00000004 = pSStack00000004 + 1;
          }
          iVar16 = iVar16 + 1;
        } while (iVar16 < 2);
LAB_00445c34:
        iStack00000008 = iStack00000008 + 1;
      } while (iStack00000008 < g_CramTotalMaps);
    }
    shape_cramtex_cpp_runInteractiveAtlasGeneration_FUN_00446160((SCramWorkingEntry *)pFVar13);
    if ((g_CramAtlasWidth + -1 + g_CramAtlasHeight * g_CramCurrentAcceptableSize) / g_CramAtlasWidth
        <= g_CramPaddingCalculation) {
      iVar16 = 0;
      shape_cramtex_cpp_visualizeTextureAtlas_FUN_00447f20(1,0,(int)pFVar13);
      if (0 < (int)g_CramTextureCount) {
        pSVar11 = g_CramSortedTextureEntries;
        do {
          iVar12 = g_CramPaddingCalculation / 2;
          iVar16 = iVar16 + 1;
          pSVar11->final_top = pSVar11->final_top + iVar12;
          pSVar11->final_right = pSVar11->final_right + iVar12;
          pSVar11->final_bottom = pSVar11->final_bottom + iVar12;
          uVar10 = g_CramTextureCount;
          pSVar11->final_left = pSVar11->final_left + iVar12;
          pSVar11 = pSVar11 + 1;
        } while (iVar16 < (int)uVar10);
      }
      pFVar13 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                          ("..\\shape\\CramTex.txt",(char *)0x0,"wt",
                           "..\\shape\\cramtex.cpp",0x271);
      if (pFVar13 != (FILE *)0x0) {
        if (0 < (int)g_CramTextureCount) {
          pSVar11 = g_CramSortedTextureEntries;
          iVar16 = 0;
          do {
            piVar1 = &pSVar11->rotation_applied;
            piVar8 = &pSVar11->final_bottom;
            piVar2 = &pSVar11->final_right;
            piVar3 = &pSVar11->final_top;
            piVar4 = &pSVar11->final_left;
            piVar5 = &pSVar11->working_map_id;
            piVar6 = &pSVar11->height;
            piVar9 = &pSVar11->width;
            pSVar11 = pSVar11 + 1;
            iVar12 = iVar16 + 1;
            crt_stdio_c_fprintf_FUN_005fe6d0
                      (pFVar13,"%2d: %5dx%-5d  Page %d (%5d,%-5d)-(%5d,%-5d)    Rotated: %d\n",
                       "%2d: %5dx%-5d  Page %d (%5d,%-5d)-(%5d,%-5d)    Rotated: %d\n",iVar16,*piVar9,*piVar6,*piVar5,*piVar4,
                       *piVar3,*piVar2,*piVar8,*piVar1);
            iVar16 = iVar12;
          } while (iVar12 < (int)g_CramTextureCount);
        }
        crt_stdio_c_fprintf_FUN_005fe6d0
                  (pFVar13,"%ux%u square found using %u padding.\n",pFVar13,
                   "%ux%u square found using %u padding.\n",g_CramCurrentAcceptableSize,
                   g_CramCurrentAcceptableSize,g_CramPaddingCalculation);
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar13,"..\\shape\\cramtex.cpp",0x274);
      }
      crt_stdlib_c_srand_FUN_005feb80(in_stack_ffffffe8);
      return;
    }
    if (g_CramAcceptableSize < g_CramCurrentAcceptableSize) {
      g_CramAcceptableSize = g_CramCurrentAcceptableSize;
    }
    g_CramAcceptableSize = g_CramAcceptableSize + 1;
    pFVar15 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                        ("..\\shape\\cramlog.txt",(char *)0x0,"at",
                         "..\\shape\\cramtex.cpp",0x24f);
    if (pFVar15 != (FILE *)0x0) {
      crt_stdio_c_fprintf_FUN_005fe6d0(pFVar15,"UNDERESTIMATED PAD!!\n");
      crt_stdio_c_fprintf_FUN_005fe6d0
                (pFVar15,"acceptableSize now adjusted to %d\n",g_CramAcceptableSize);
      in_stack_ffffffe8 = 0x253;
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar15,"..\\shape\\cramtex.cpp",0x253);
      pFVar13 = pFVar15;
    }
  } while( true );
}


// Assembly code:
// 00445820: PUSH EBX
//   Label: shape_cramtex.cpp_generateTextureAtlas_FUN_00445820
// 00445821: PUSH ESI
// 00445822: PUSH EDI
// 00445823: PUSH EBP
// 00445824: SUB ESP,0x30
// 00445827: PUSH 0x6195c2
//   XREF to: 006195c2 (DATA)
// 0044582c: CALL crt_io.c_deleteFile_FUN_005ff9d0
//   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)
// 00445831: ADD ESP,0x4
// 00445834: CALL crt_stdlib.c_rand_FUN_005feb5c
//   XREF to: 005feb5c (UNCONDITIONAL_CALL)
// 00445839: PUSH 0x16
// 0044583b: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 0044583f: CALL crt_stdlib.c_srand_FUN_005feb80
//   XREF to: 005feb80 (UNCONDITIONAL_CALL)
// 00445844: ADD ESP,0x4
// 00445847: PUSH 0x4457f0
//   XREF to: 004457f0 (DATA)
// 0044584c: PUSH 0x4c
// 0044584e: MOV EDX,dword ptr [0x0084a854]
//   XREF to: 0084a854 (READ)
// 00445854: PUSH EDX
// 00445855: PUSH 0x83c1dc
//   XREF to: 0083c1dc (DATA)
// 0044585a: CALL crt_stdlib.c_qsort_FUN_005fdf38
//   XREF to: 005fdf38 (UNCONDITIONAL_CALL)
// 0044585f: MOV EBX,dword ptr [0x0084a854]
//   XREF to: 0084a854 (READ)
// 00445865: XOR ECX,ECX
// 00445867: ADD ESP,0x10
// 0044586a: MOV dword ptr [0x0084a864],ECX
//   XREF to: 0084a864 (WRITE)
// 00445870: TEST EBX,EBX
// 00445872: JLE 0x004458a0
//   XREF to: 004458a0 (CONDITIONAL_JUMP)
// 00445874: MOV EAX,0x83c1dc
//   XREF to: 0083c1dc (DATA)
// 00445879: MOV EBP,dword ptr [0x0084a854]
//   XREF to: 0084a854 (READ)
// 0044587f: MOV EDX,dword ptr [EAX]
//   Label: LAB_0044587f
//   XREF to: 0083c1dc (READ)
//   XREF to: 0083c228 (READ)
// 00445881: IMUL EDX,dword ptr [EAX + 0x4]
//   XREF to: 0083c1e0 (READ)
//   XREF to: 0083c22c (READ)
// 00445885: MOV EDI,dword ptr [0x0084a864]
//   XREF to: 0084a864 (READ)
// 0044588b: ADD EAX,0x4c
// 0044588e: ADD EDI,EDX
// 00445890: INC ECX
// 00445891: MOV dword ptr [0x0084a864],EDI
//   XREF to: 0084a864 (WRITE)
// 00445897: CMP ECX,EBP
// 00445899: JL 0x0044587f
//   XREF to: 0044587f (CONDITIONAL_JUMP)
// 0044589b: LEA EAX,[EAX]
//   XREF to: 0083c228 (DATA)
// 0044589e: MOV ECX,ECX
// 004458a0: MOV EDX,dword ptr [0x0084a864]
//   Label: LAB_004458a0
//   XREF to: 0084a864 (READ)
// 004458a6: LEA EAX,[EDX*0x4 + 0x0]
// 004458ad: SUB EAX,EDX
// 004458af: SHL EAX,0x3
// 004458b2: ADD EDX,EAX
// 004458b4: SHL EDX,0x2
// 004458b7: MOV ECX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x4] (READ)
// 004458bb: MOV EAX,EDX
// 004458bd: SAR EDX,0x1f
// 004458c0: IDIV ECX
// 004458c2: MOV ESI,dword ptr [0x0084a858]
//   XREF to: 0084a858 (READ)
// 004458c8: MOV EDX,EAX
// 004458ca: MOV EAX,[0x0084a874]
//   Label: LAB_004458ca
//   XREF to: 0084a874 (READ)
// 004458cf: IMUL EAX,EAX
// 004458d2: IMUL EAX,ESI
// 004458d5: CMP EAX,EDX
// 004458d7: JG 0x004458e1
//   XREF to: 004458e1 (CONDITIONAL_JUMP)
// 004458d9: INC dword ptr [0x0084a874]
//   XREF to: 0084a874 (READ_WRITE)
// 004458df: JMP 0x004458ca
//   XREF to: 004458ca (UNCONDITIONAL_JUMP)
// 004458e1: MOV EAX,[0x0084a87c]
//   Label: LAB_004458e1
//   XREF to: 0084a87c (READ)
// 004458e6: IMUL EAX,dword ptr [0x0084a874]
//   XREF to: 0084a874 (READ)
// 004458ed: MOV EDX,dword ptr [0x0084a878]
//   XREF to: 0084a878 (READ)
// 004458f3: DEC EDX
// 004458f4: ADD EDX,EAX
// 004458f6: MOV ECX,dword ptr [0x0084a878]
//   XREF to: 0084a878 (READ)
// 004458fc: MOV EAX,EDX
// 004458fe: SAR EDX,0x1f
// 00445901: IDIV ECX
// 00445903: PUSH 0x1e3
// 00445908: PUSH 0x6195d7
//   XREF to: 006195d7 (DATA)
// 0044590d: PUSH 0x6195ec
//   XREF to: 006195ec (DATA)
// 00445912: PUSH 0x0
// 00445914: PUSH 0x6195ef
//   XREF to: 006195ef (DATA)
// 00445919: MOV [0x0084a880],EAX
//   XREF to: 0084a880 (WRITE)
// 0044591e: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 00445923: MOV EBX,EAX
// 00445925: ADD ESP,0x14
// 00445928: TEST EAX,EAX
// 0044592a: JNZ 0x00445db4
//   XREF to: 00445db4 (CONDITIONAL_JUMP)
// 00445930: MOV dword ptr [ESP + 0x4],0xffffffff
//   Label: LAB_00445930
//   XREF to: Stack[-0x3c] (WRITE)
// 00445938: MOV EBP,dword ptr [ESP + 0x4]
//   Label: LAB_00445938
//   XREF to: Stack[-0x3c] (READ)
// 0044593c: MOV EBX,0x84a8b0
//   XREF to: 0084a8b0 (DATA)
// 00445941: XOR EDI,EDI
// 00445943: INC EBP
// 00445944: MOV dword ptr [0x00887940],EBX
//   XREF to: 00887940 (WRITE)
// 0044594a: MOV ESI,dword ptr [0x0084a854]
//   Label: LAB_0044594a
//   XREF to: 0084a854 (READ)
// 00445950: INC EDI
// 00445951: XOR ECX,ECX
// 00445953: TEST ESI,ESI
// 00445955: JLE 0x004459a1
//   XREF to: 004459a1 (CONDITIONAL_JUMP)
// 00445957: MOV EAX,0x83c1dc
//   XREF to: 0083c1dc (DATA)
// 0044595c: MOV ESI,dword ptr [0x0084a880]
//   Label: LAB_0044595c
//   XREF to: 0084a880 (READ)
// 00445962: MOV EDX,dword ptr [EAX]
//   XREF to: 0083c1dc (READ)
//   XREF to: 0083c228 (READ)
// 00445964: ADD EDX,ESI
// 00445966: MOV ESI,dword ptr [0x0084a874]
//   XREF to: 0084a874 (READ)
// 0044596c: MOV EBX,EAX
// 0044596e: CMP EDX,ESI
// 00445970: JLE 0x00445978
//   XREF to: 00445978 (CONDITIONAL_JUMP)
// 00445972: MOV dword ptr [0x0084a874],EDX
//   XREF to: 0084a874 (WRITE)
// 00445978: MOV EDX,dword ptr [EBX + 0x4]
//   Label: LAB_00445978
//   XREF to: 0083c1e0 (READ)
//   XREF to: 0083c22c (READ)
// 0044597b: MOV EBX,dword ptr [0x0084a880]
//   XREF to: 0084a880 (READ)
// 00445981: MOV ESI,dword ptr [0x0084a874]
//   XREF to: 0084a874 (READ)
// 00445987: ADD EDX,EBX
// 00445989: CMP EDX,ESI
// 0044598b: JLE 0x00445993
//   XREF to: 00445993 (CONDITIONAL_JUMP)
// 0044598d: MOV dword ptr [0x0084a874],EDX
//   XREF to: 0084a874 (WRITE)
// 00445993: MOV EDX,dword ptr [0x0084a854]
//   Label: LAB_00445993
//   XREF to: 0084a854 (READ)
// 00445999: INC ECX
// 0044599a: ADD EAX,0x4c
// 0044599d: CMP ECX,EDX
// 0044599f: JL 0x0044595c
//   XREF to: 0044595c (CONDITIONAL_JUMP)
// 004459a1: MOV EDX,dword ptr [0x0084a874]
//   Label: LAB_004459a1
//   XREF to: 0084a874 (READ)
// 004459a7: LEA EDX,[EDX + EDX*0x4]
// 004459aa: MOV EAX,EDX
// 004459ac: SAR EDX,0x1f
// 004459af: SHL EDX,0x2
// 004459b2: SBB EAX,EDX
// 004459b4: SAR EAX,0x2
// 004459b7: IMUL EAX,dword ptr [0x0084a87c]
//   XREF to: 0084a87c (READ)
// 004459be: MOV EDX,dword ptr [0x0084a878]
//   XREF to: 0084a878 (READ)
// 004459c4: DEC EDX
// 004459c5: ADD EDX,EAX
// 004459c7: MOV EBX,dword ptr [0x0084a878]
//   XREF to: 0084a878 (READ)
// 004459cd: MOV EAX,EDX
// 004459cf: SAR EDX,0x1f
// 004459d2: IDIV EBX
// 004459d4: MOV ESI,EAX
// 004459d6: CMP ESI,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x3c] (READ)
// 004459da: JG 0x004459de
//   XREF to: 004459de (CONDITIONAL_JUMP)
// 004459dc: MOV ESI,EBP
// 004459de: PUSH 0x206
//   Label: LAB_004459de
// 004459e3: PUSH 0x619631
//   XREF to: 00619631 (DATA)
// 004459e8: PUSH 0x619646
//   XREF to: 00619646 (DATA)
// 004459ed: PUSH 0x0
// 004459ef: PUSH 0x619649
//   XREF to: 00619649 (DATA)
// 004459f4: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 004459f9: MOV EBX,EAX
// 004459fb: ADD ESP,0x14
// 004459fe: TEST EAX,EAX
// 00445a00: JZ 0x00445a48
//   XREF to: 00445a48 (CONDITIONAL_JUMP)
// 00445a02: PUSH EDI
// 00445a03: PUSH 0x61965e
//   XREF to: 0061965e (DATA)
// 00445a08: PUSH EAX
// 00445a09: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00445a0e: ADD ESP,0xc
// 00445a11: MOV EDX,dword ptr [0x0084a874]
//   XREF to: 0084a874 (READ)
// 00445a17: PUSH EDX
// 00445a18: PUSH 0x619669
//   XREF to: 00619669 (DATA)
// 00445a1d: PUSH EBX
// 00445a1e: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00445a23: ADD ESP,0xc
// 00445a26: PUSH ESI
// 00445a27: PUSH 0x619680
//   XREF to: 00619680 (DATA)
// 00445a2c: PUSH EBX
// 00445a2d: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00445a32: ADD ESP,0xc
// 00445a35: PUSH 0x20b
// 00445a3a: PUSH 0x619696
//   XREF to: 00619696 (DATA)
// 00445a3f: PUSH EBX
// 00445a40: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 00445a45: ADD ESP,0xc
// 00445a48: CMP ESI,dword ptr [0x0084a880]
//   Label: LAB_00445a48
//   XREF to: 0084a880 (READ)
// 00445a4e: JNZ 0x00445de1
//   XREF to: 00445de1 (CONDITIONAL_JUMP)
// 00445a54: MOV ESI,0xf423f
//   Label: LAB_00445a54
// 00445a59: MOV EAX,[0x0084a880]
//   XREF to: 0084a880 (READ)
// 00445a5e: MOV ECX,dword ptr [0x0084a854]
//   XREF to: 0084a854 (READ)
// 00445a64: XOR EBX,EBX
// 00445a66: XOR EDX,EDX
// 00445a68: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 00445a6c: MOV dword ptr [0x0084a860],EBX
//   XREF to: 0084a860 (WRITE)
// 00445a72: MOV dword ptr [0x0084a88c],ESI
//   XREF to: 0084a88c (WRITE)
// 00445a78: MOV dword ptr [0x0084a888],ESI
//   XREF to: 0084a888 (WRITE)
// 00445a7e: MOV dword ptr [0x0084a868],ESI
//   XREF to: 0084a868 (WRITE)
// 00445a84: MOV EAX,[0x0084a874]
//   XREF to: 0084a874 (READ)
// 00445a89: MOV dword ptr [0x0084a86c],ESI
//   XREF to: 0084a86c (WRITE)
// 00445a8f: MOV [0x0084a884],EAX
//   XREF to: 0084a884 (WRITE)
// 00445a94: TEST ECX,ECX
// 00445a96: JLE 0x00445ae6
//   XREF to: 00445ae6 (CONDITIONAL_JUMP)
// 00445a98: MOV ECX,0x83c1dc
//   XREF to: 0083c1dc (DATA)
// 00445a9d: MOV EBP,dword ptr [0x0084a880]
//   Label: LAB_00445a9d
//   XREF to: 0084a880 (READ)
// 00445aa3: MOV EAX,dword ptr [ECX]
//   XREF to: 0083c1dc (READ)
//   XREF to: 0083c228 (READ)
// 00445aa5: ADD EAX,EBP
// 00445aa7: MOV dword ptr [ECX + 0x8],EAX
//   XREF to: 0083c1e4 (WRITE)
//   XREF to: 0083c230 (WRITE)
// 00445aaa: MOV EAX,dword ptr [ECX + 0x4]
//   XREF to: 0083c1e0 (READ)
//   XREF to: 0083c22c (READ)
// 00445aad: ADD EAX,EBP
// 00445aaf: MOV dword ptr [ECX + 0xc],EAX
//   XREF to: 0083c1e8 (WRITE)
//   XREF to: 0083c234 (WRITE)
// 00445ab2: MOV EDI,dword ptr [0x0084a868]
//   XREF to: 0084a868 (READ)
// 00445ab8: MOV EAX,dword ptr [ECX + 0x8]
//   XREF to: 0083c1e4 (READ)
//   XREF to: 0083c230 (READ)
// 00445abb: MOV EBX,ECX
// 00445abd: CMP EAX,EDI
// 00445abf: JGE 0x00445ac6
//   XREF to: 00445ac6 (CONDITIONAL_JUMP)
// 00445ac1: MOV [0x0084a868],EAX
//   XREF to: 0084a868 (WRITE)
// 00445ac6: MOV EBP,dword ptr [0x0084a86c]
//   Label: LAB_00445ac6
//   XREF to: 0084a86c (READ)
// 00445acc: MOV EAX,dword ptr [EBX + 0xc]
//   XREF to: 0083c1e8 (READ)
//   XREF to: 0083c234 (READ)
// 00445acf: CMP EAX,EBP
// 00445ad1: JGE 0x00445ad8
//   XREF to: 00445ad8 (CONDITIONAL_JUMP)
// 00445ad3: MOV [0x0084a86c],EAX
//   XREF to: 0084a86c (WRITE)
// 00445ad8: MOV EDI,dword ptr [0x0084a854]
//   Label: LAB_00445ad8
//   XREF to: 0084a854 (READ)
// 00445ade: INC EDX
// 00445adf: ADD ECX,0x4c
// 00445ae2: CMP EDX,EDI
// 00445ae4: JL 0x00445a9d
//   XREF to: 00445a9d (CONDITIONAL_JUMP)
// 00445ae6: MOV EAX,[0x0084a86c]
//   Label: LAB_00445ae6
//   XREF to: 0084a86c (READ)
// 00445aeb: MOV EDX,dword ptr [0x0084a868]
//   XREF to: 0084a868 (READ)
// 00445af1: CMP EDX,EAX
// 00445af3: JGE 0x00445af7
//   XREF to: 00445af7 (CONDITIONAL_JUMP)
// 00445af5: MOV EAX,EDX
// 00445af7: MOV EBX,0x1
//   Label: LAB_00445af7
// 00445afc: MOV EDI,dword ptr [0x0084a860]
//   XREF to: 0084a860 (READ)
// 00445b02: MOV [0x0084a870],EAX
//   XREF to: 0084a870 (WRITE)
// 00445b07: XOR EBP,EBP
// 00445b09: MOV EAX,[0x0083c1e4]
//   XREF to: 0083c1e4 (READ)
// 00445b0e: MOV dword ptr [0x0083c21c],EBP
//   XREF to: 0083c21c (WRITE)
// 00445b14: MOV dword ptr [0x0083c1ec],EBP
//   XREF to: 0083c1ec (WRITE)
// 00445b1a: MOV dword ptr [0x0083c1f8],EBP
//   XREF to: 0083c1f8 (WRITE)
// 00445b20: MOV dword ptr [0x0083c1fc],EBP
//   XREF to: 0083c1fc (WRITE)
// 00445b26: MOV [0x0083c1f0],EAX
//   XREF to: 0083c1f0 (WRITE)
// 00445b2b: MOV EAX,[0x0083c1e8]
//   XREF to: 0083c1e8 (READ)
// 00445b30: MOV dword ptr [0x0084a85c],EBX
//   XREF to: 0084a85c (WRITE)
// 00445b36: MOV [0x0083c1f4],EAX
//   XREF to: 0083c1f4 (WRITE)
// 00445b3b: MOV EAX,[0x0083c1f0]
//   XREF to: 0083c1f0 (READ)
// 00445b40: MOV dword ptr [ESP + 0x8],EBP
//   XREF to: Stack[-0x38] (WRITE)
// 00445b44: MOV [0x0083c200],EAX
//   XREF to: 0083c200 (WRITE)
// 00445b49: MOV EAX,[0x0083c1f4]
//   XREF to: 0083c1f4 (READ)
// 00445b4e: XOR EBX,EBX
// 00445b50: MOV [0x0083c204],EAX
//   XREF to: 0083c204 (WRITE)
// 00445b55: MOV ECX,EAX
// 00445b57: TEST EDI,EDI
// 00445b59: JLE 0x00445e00
//   XREF to: 00445e00 (CONDITIONAL_JUMP)
// 00445b5f: XOR EAX,EAX
// 00445b61: IMUL EDX,EDI,0x28
// 00445b64: CMP dword ptr [EAX + 0x840c14],0x0
//   Label: LAB_00445b64
//   XREF to: 00840c14 (READ)
//   XREF to: 00840c3c (READ)
// 00445b6b: JNZ 0x00445df5
//   XREF to: 00445df5 (CONDITIONAL_JUMP)
// 00445b71: CMP dword ptr [EAX + 0x840c18],0x0
//   XREF to: 00840c18 (READ)
//   XREF to: 00840c40 (READ)
// 00445b78: JNZ 0x00445df5
//   XREF to: 00445df5 (CONDITIONAL_JUMP)
// 00445b7e: CMP ECX,dword ptr [EAX + 0x840c1c]
//   XREF to: 00840c1c (READ)
//   XREF to: 00840c44 (READ)
// 00445b84: JNZ 0x00445df5
//   XREF to: 00445df5 (CONDITIONAL_JUMP)
// 00445b8a: MOV ECX,dword ptr [0x0083c200]
//   Label: LAB_00445b8a
//   XREF to: 0083c200 (READ)
// 00445b90: MOV EBX,dword ptr [0x0083c1fc]
//   XREF to: 0083c1fc (READ)
// 00445b96: XOR EBP,EBP
// 00445b98: MOV EAX,[0x0084a860]
//   XREF to: 0084a860 (READ)
// 00445b9d: MOV dword ptr [ESP + 0x10],EBP
//   XREF to: Stack[-0x30] (WRITE)
// 00445ba1: TEST EAX,EAX
// 00445ba3: JLE 0x00445edb
//   XREF to: 00445edb (CONDITIONAL_JUMP)
// 00445ba9: MOV EDI,dword ptr [0x0084a860]
//   XREF to: 0084a860 (READ)
// 00445baf: XOR EAX,EAX
// 00445bb1: IMUL EDX,EDI,0x28
// 00445bb4: CMP dword ptr [EAX + 0x840c14],0x0
//   Label: LAB_00445bb4
//   XREF to: 00840c14 (READ)
//   XREF to: 00840c3c (READ)
// 00445bbb: JNZ 0x00445ed0
//   XREF to: 00445ed0 (CONDITIONAL_JUMP)
// 00445bc1: CMP ECX,dword ptr [EAX + 0x840c18]
//   XREF to: 00840c18 (READ)
//   XREF to: 00840c40 (READ)
// 00445bc7: JNZ 0x00445ed0
//   XREF to: 00445ed0 (CONDITIONAL_JUMP)
// 00445bcd: CMP EBX,dword ptr [EAX + 0x840c1c]
//   XREF to: 00840c1c (READ)
//   XREF to: 00840c44 (READ)
// 00445bd3: JNZ 0x00445ed0
//   XREF to: 00445ed0 (CONDITIONAL_JUMP)
// 00445bd9: MOV EBP,0x1
//   Label: LAB_00445bd9
// 00445bde: MOV EAX,[0x0084a858]
//   XREF to: 0084a858 (READ)
// 00445be3: MOV dword ptr [ESP + 0x2c],EBP
//   XREF to: Stack[-0x14] (WRITE)
// 00445be7: CMP EAX,EBP
// 00445be9: JLE 0x00445c47
//   XREF to: 00445c47 (CONDITIONAL_JUMP)
// 00445beb: MOV EAX,dword ptr [ESP + 0x2c]
//   Label: LAB_00445beb
//   XREF to: Stack[-0x14] (READ)
// 00445bef: MOV EBP,dword ptr [0x0084a860]
//   XREF to: 0084a860 (READ)
// 00445bf5: XOR EBX,EBX
// 00445bf7: XOR ECX,ECX
// 00445bf9: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 00445bfd: TEST EBP,EBP
// 00445bff: JLE 0x00445fb4
//   XREF to: 00445fb4 (CONDITIONAL_JUMP)
// 00445c05: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x28] (READ)
// 00445c09: XOR EAX,EAX
// 00445c0b: IMUL EDX,EBP,0x28
// 00445c0e: CMP EDI,dword ptr [EAX + 0x840c14]
//   Label: LAB_00445c0e
//   XREF to: 00840c14 (READ)
//   XREF to: 00840c3c (READ)
// 00445c14: JNZ 0x00445fa9
//   XREF to: 00445fa9 (CONDITIONAL_JUMP)
// 00445c1a: CMP dword ptr [EAX + 0x840c18],0x0
//   XREF to: 00840c18 (READ)
//   XREF to: 00840c40 (READ)
// 00445c21: JNZ 0x00445fa9
//   XREF to: 00445fa9 (CONDITIONAL_JUMP)
// 00445c27: CMP dword ptr [EAX + 0x840c1c],0x0
//   XREF to: 00840c1c (READ)
//   XREF to: 00840c44 (READ)
// 00445c2e: JNZ 0x00445fa9
//   XREF to: 00445fa9 (CONDITIONAL_JUMP)
// 00445c34: MOV EDX,dword ptr [ESP + 0x2c]
//   Label: LAB_00445c34
//   XREF to: Stack[-0x14] (READ)
// 00445c38: INC EDX
// 00445c39: MOV ECX,dword ptr [0x0084a858]
//   XREF to: 0084a858 (READ)
// 00445c3f: MOV dword ptr [ESP + 0x2c],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 00445c43: CMP EDX,ECX
// 00445c45: JL 0x00445beb
//   XREF to: 00445beb (CONDITIONAL_JUMP)
// 00445c47: IMUL EAX,dword ptr [0x0084a85c],0x4c
//   Label: LAB_00445c47
//   XREF to: 0084a85c (READ)
// 00445c4e: ADD EAX,0x83c1dc
//   XREF to: 0083c228 (PARAM)
//   XREF to: 0083c1dc (DATA)
// 00445c53: PUSH EAX
//   XREF to: 0083c228 (DATA)
// 00445c54: CALL shape_cramtex.cpp_runInteractiveAtlasGeneration_FUN_00446160
//   XREF to: 00446160 (UNCONDITIONAL_CALL)
// 00445c59: MOV EAX,[0x0084a87c]
//   XREF to: 0084a87c (READ)
// 00445c5e: MOV ESI,dword ptr [0x0084a884]
//   XREF to: 0084a884 (READ)
// 00445c64: IMUL EAX,ESI
// 00445c67: MOV EDX,dword ptr [0x0084a878]
//   XREF to: 0084a878 (READ)
// 00445c6d: DEC EDX
// 00445c6e: ADD EDX,EAX
// 00445c70: MOV EDI,dword ptr [0x0084a878]
//   XREF to: 0084a878 (READ)
// 00445c76: MOV EAX,EDX
// 00445c78: SAR EDX,0x1f
// 00445c7b: IDIV EDI
// 00445c7d: MOV EBP,dword ptr [0x0084a880]
//   XREF to: 0084a880 (READ)
// 00445c83: ADD ESP,0x4
// 00445c86: CMP EAX,EBP
// 00445c88: JG 0x00446082
//   XREF to: 00446082 (CONDITIONAL_JUMP)
// 00445c8e: PUSH 0x0
// 00445c90: PUSH 0x1
// 00445c92: PUSH 0x1
// 00445c94: XOR EBX,EBX
// 00445c96: CALL shape_cramtex.cpp_visualizeTextureAtlas_FUN_00447f20
//   XREF to: 00447f20 (UNCONDITIONAL_CALL)
// 00445c9b: MOV EDI,dword ptr [0x0084a854]
//   XREF to: 0084a854 (READ)
// 00445ca1: ADD ESP,0xc
// 00445ca4: TEST EDI,EDI
// 00445ca6: JLE 0x00445cf0
//   XREF to: 00445cf0 (CONDITIONAL_JUMP)
// 00445ca8: MOV ECX,0x83c1dc
//   XREF to: 0083c1dc (DATA)
// 00445cad: MOV EAX,[0x0084a880]
//   Label: LAB_00445cad
//   XREF to: 0084a880 (READ)
// 00445cb2: MOV EDX,EAX
// 00445cb4: SAR EDX,0x1f
// 00445cb7: SUB EAX,EDX
// 00445cb9: SAR EAX,0x1
// 00445cbb: ADD ECX,0x4c
// 00445cbe: INC EBX
// 00445cbf: MOV ESI,dword ptr [ECX + -0x18]
//   XREF to: 0083c210 (READ)
//   XREF to: 0083c25c (READ)
// 00445cc2: MOV EDI,dword ptr [ECX + -0x14]
//   XREF to: 0083c214 (READ)
//   XREF to: 0083c260 (READ)
// 00445cc5: MOV EBP,dword ptr [ECX + -0x10]
//   XREF to: 0083c218 (READ)
//   XREF to: 0083c264 (READ)
// 00445cc8: MOV EDX,dword ptr [ECX + -0x1c]
//   XREF to: 0083c20c (READ)
//   XREF to: 0083c258 (READ)
// 00445ccb: ADD ESI,EAX
// 00445ccd: ADD EDI,EAX
// 00445ccf: MOV dword ptr [ECX + -0x18],ESI
//   XREF to: 0083c210 (WRITE)
//   XREF to: 0083c25c (WRITE)
// 00445cd2: ADD EBP,EAX
// 00445cd4: MOV dword ptr [ECX + -0x14],EDI
//   XREF to: 0083c214 (WRITE)
//   XREF to: 0083c260 (WRITE)
// 00445cd7: ADD EDX,EAX
// 00445cd9: MOV dword ptr [ECX + -0x10],EBP
//   XREF to: 0083c218 (WRITE)
// 00445cdc: MOV EAX,[0x0084a854]
//   XREF to: 0084a854 (READ)
// 00445ce1: MOV dword ptr [ECX + -0x1c],EDX
//   XREF to: 0083c20c (WRITE)
// 00445ce4: CMP EBX,EAX
// 00445ce6: JL 0x00445cad
//   XREF to: 00445cad (CONDITIONAL_JUMP)
// 00445ce8: LEA EAX,[EAX]
// 00445cee: MOV EDX,EDX
// 00445cf0: PUSH 0x271
//   Label: LAB_00445cf0
// 00445cf5: PUSH 0x619726
//   XREF to: 00619726 (DATA)
// 00445cfa: PUSH 0x61973b
//   XREF to: 0061973b (DATA)
// 00445cff: PUSH 0x0
// 00445d01: PUSH 0x61973e
//   XREF to: 0061973e (DATA)
// 00445d06: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 00445d0b: ADD ESP,0x14
// 00445d0e: MOV EBP,EAX
// 00445d10: TEST EAX,EAX
// 00445d12: JZ 0x00445da0
//   XREF to: 00445da0 (CONDITIONAL_JUMP)
// 00445d18: MOV EDX,dword ptr [0x0084a854]
//   XREF to: 0084a854 (READ)
// 00445d1e: MOV EDI,EAX
// 00445d20: XOR ESI,ESI
// 00445d22: TEST EDX,EDX
// 00445d24: JLE 0x00445d70
//   XREF to: 00445d70 (CONDITIONAL_JUMP)
// 00445d26: MOV EBX,0x83c1dc
//   XREF to: 0083c1dc (DATA)
// 00445d2b: MOV ECX,dword ptr [EBX + 0x44]
//   Label: LAB_00445d2b
//   XREF to: 0083c220 (READ)
//   XREF to: 0083c26c (READ)
// 00445d2e: PUSH ECX
// 00445d2f: MOV EAX,dword ptr [EBX + 0x3c]
//   XREF to: 0083c218 (READ)
//   XREF to: 0083c264 (READ)
// 00445d32: PUSH EAX
// 00445d33: MOV EDX,dword ptr [EBX + 0x38]
//   XREF to: 0083c214 (READ)
//   XREF to: 0083c260 (READ)
// 00445d36: PUSH EDX
// 00445d37: MOV ECX,dword ptr [EBX + 0x34]
//   XREF to: 0083c210 (READ)
//   XREF to: 0083c25c (READ)
// 00445d3a: PUSH ECX
// 00445d3b: MOV EAX,dword ptr [EBX + 0x30]
//   XREF to: 0083c20c (READ)
//   XREF to: 0083c258 (READ)
// 00445d3e: PUSH EAX
// 00445d3f: MOV EDX,dword ptr [EBX + 0x2c]
//   XREF to: 0083c208 (READ)
//   XREF to: 0083c254 (READ)
// 00445d42: PUSH EDX
// 00445d43: MOV ECX,dword ptr [EBX + 0x4]
//   XREF to: 0083c1e0 (READ)
//   XREF to: 0083c22c (READ)
// 00445d46: PUSH ECX
// 00445d47: MOV EAX,dword ptr [EBX]
//   XREF to: 0083c1dc (READ)
//   XREF to: 0083c228 (READ)
// 00445d49: PUSH EAX
// 00445d4a: PUSH ESI
// 00445d4b: PUSH 0x619753
//   XREF to: 00619753 (DATA)
// 00445d50: PUSH EDI
// 00445d51: ADD EBX,0x4c
// 00445d54: INC ESI
// 00445d55: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00445d5a: MOV EDX,dword ptr [0x0084a854]
//   XREF to: 0084a854 (READ)
// 00445d60: ADD ESP,0x2c
// 00445d63: CMP ESI,EDX
// 00445d65: JL 0x00445d2b
//   XREF to: 00445d2b (CONDITIONAL_JUMP)
// 00445d67: LEA EAX,[EAX]
// 00445d6d: LEA EDX,[EDX]
// 00445d70: MOV ECX,dword ptr [0x0084a880]
//   Label: LAB_00445d70
//   XREF to: 0084a880 (READ)
// 00445d76: PUSH ECX
// 00445d77: MOV EBX,dword ptr [0x0084a884]
//   XREF to: 0084a884 (READ)
// 00445d7d: PUSH EBX
// 00445d7e: PUSH EBX
// 00445d7f: PUSH 0x619790
//   XREF to: 00619790 (DATA)
// 00445d84: PUSH EDI
// 00445d85: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00445d8a: ADD ESP,0x14
// 00445d8d: PUSH 0x274
// 00445d92: PUSH 0x6197b6
//   XREF to: 006197b6 (DATA)
// 00445d97: PUSH EBP
// 00445d98: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 00445d9d: ADD ESP,0xc
// 00445da0: MOV EBP,dword ptr [ESP]
//   Label: LAB_00445da0
//   XREF to: Stack[-0x40] (DATA)
// 00445da3: PUSH EBP
// 00445da4: CALL crt_stdlib.c_srand_FUN_005feb80
//   XREF to: 005feb80 (UNCONDITIONAL_CALL)
// 00445da9: ADD ESP,0x4
// 00445dac: ADD ESP,0x30
// 00445daf: POP EBP
// 00445db0: POP EDI
// 00445db1: POP ESI
// 00445db2: POP EBX
// 00445db3: RET
// 00445db4: MOV EBP,dword ptr [0x0084a880]
//   Label: LAB_00445db4
//   XREF to: 0084a880 (READ)
// 00445dba: PUSH EBP
// 00445dbb: PUSH 0x619604
//   XREF to: 00619604 (DATA)
// 00445dc0: PUSH EAX
// 00445dc1: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00445dc6: ADD ESP,0xc
// 00445dc9: PUSH 0x1e6
// 00445dce: PUSH 0x61961c
//   XREF to: 0061961c (DATA)
// 00445dd3: PUSH EBX
// 00445dd4: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 00445dd9: ADD ESP,0xc
// 00445ddc: JMP 0x00445930
//   XREF to: 00445930 (UNCONDITIONAL_JUMP)
// 00445de1: MOV dword ptr [0x0084a880],ESI
//   Label: LAB_00445de1
//   XREF to: 0084a880 (WRITE)
// 00445de7: CMP EDI,0xa
// 00445dea: JL 0x0044594a
//   XREF to: 0044594a (CONDITIONAL_JUMP)
// 00445df0: JMP 0x00445a54
//   XREF to: 00445a54 (UNCONDITIONAL_JUMP)
// 00445df5: ADD EAX,0x28
//   Label: LAB_00445df5
// 00445df8: CMP EAX,EDX
// 00445dfa: JL 0x00445b64
//   XREF to: 00445b64 (CONDITIONAL_JUMP)
// 00445e00: XOR EAX,EAX
//   Label: LAB_00445e00
// 00445e02: MOV EDX,dword ptr [0x0084a860]
//   XREF to: 0084a860 (READ)
// 00445e08: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 00445e0c: IMUL EAX,EDX,0x28
// 00445e0f: ADD EAX,0x840c14
//   XREF to: 00840c14 (DATA)
// 00445e14: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: 00840c14 (DATA)
//   XREF to: Stack[-0x20] (WRITE)
// 00445e18: CMP dword ptr [ESP + 0xc],0x0
//   Label: LAB_00445e18
//   XREF to: Stack[-0x34] (READ)
// 00445e1d: JZ 0x00445e77
//   XREF to: 00445e77 (CONDITIONAL_JUMP)
// 00445e1f: MOV ESI,dword ptr [0x0084a868]
//   XREF to: 0084a868 (READ)
// 00445e25: MOV EDI,dword ptr [0x0084a86c]
//   XREF to: 0084a86c (READ)
// 00445e2b: ADD ESI,ECX
//   Label: LAB_00445e2b
// 00445e2d: ADD EDI,EBX
// 00445e2f: MOV EDX,dword ptr [0x0084a85c]
//   XREF to: 0084a85c (READ)
// 00445e35: DEC EDX
// 00445e36: TEST EDX,EDX
// 00445e38: JL 0x00445e5f
//   XREF to: 00445e5f (CONDITIONAL_JUMP)
// 00445e3a: IMUL EAX,EDX,0x4c
// 00445e3d: ADD EAX,0x83c1dc
//   XREF to: 0083c1dc (DATA)
// 00445e42: MOV EBP,dword ptr [EAX + 0x10]
//   Label: LAB_00445e42
//   XREF to: 0083c1ec (READ)
//   XREF to: 0083c1a0 (READ)
// 00445e45: CMP EBP,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x38] (READ)
// 00445e49: JNZ 0x00445e85
//   XREF to: 00445e85 (CONDITIONAL_JUMP)
// 00445e4b: CMP EBX,dword ptr [EAX + 0x24]
//   XREF to: 0083c200 (READ)
//   XREF to: 0083c1b4 (READ)
// 00445e4e: JGE 0x00445e85
//   XREF to: 00445e85 (CONDITIONAL_JUMP)
// 00445e50: CMP ECX,dword ptr [EAX + 0x28]
//   XREF to: 0083c204 (READ)
//   XREF to: 0083c1b8 (READ)
// 00445e53: JGE 0x00445e85
//   XREF to: 00445e85 (CONDITIONAL_JUMP)
// 00445e55: CMP EDI,dword ptr [EAX + 0x1c]
//   XREF to: 0083c1f8 (READ)
//   XREF to: 0083c1ac (READ)
// 00445e58: JLE 0x00445e85
//   XREF to: 00445e85 (CONDITIONAL_JUMP)
// 00445e5a: CMP ESI,dword ptr [EAX + 0x20]
//   XREF to: 0083c1fc (READ)
//   XREF to: 0083c1b0 (READ)
// 00445e5d: JLE 0x00445e85
//   XREF to: 00445e85 (CONDITIONAL_JUMP)
// 00445e5f: TEST EDX,EDX
//   Label: LAB_00445e5f
// 00445e61: JL 0x00445e8f
//   XREF to: 00445e8f (CONDITIONAL_JUMP)
// 00445e63: MOV ESI,dword ptr [ESP + 0xc]
//   Label: LAB_00445e63
//   XREF to: Stack[-0x34] (READ)
// 00445e67: INC ESI
// 00445e68: MOV dword ptr [ESP + 0xc],ESI
//   XREF to: Stack[-0x34] (WRITE)
// 00445e6c: CMP ESI,0x1
// 00445e6f: JG 0x00445b8a
//   XREF to: 00445b8a (CONDITIONAL_JUMP)
// 00445e75: JMP 0x00445e18
//   XREF to: 00445e18 (UNCONDITIONAL_JUMP)
// 00445e77: MOV ESI,dword ptr [0x0084a86c]
//   Label: LAB_00445e77
//   XREF to: 0084a86c (READ)
// 00445e7d: MOV EDI,dword ptr [0x0084a868]
//   XREF to: 0084a868 (READ)
// 00445e83: JMP 0x00445e2b
//   XREF to: 00445e2b (UNCONDITIONAL_JUMP)
// 00445e85: DEC EDX
//   Label: LAB_00445e85
// 00445e86: SUB EAX,0x4c
// 00445e89: TEST EDX,EDX
// 00445e8b: JGE 0x00445e42
//   XREF to: 00445e42 (CONDITIONAL_JUMP)
// 00445e8d: JMP 0x00445e5f
//   XREF to: 00445e5f (UNCONDITIONAL_JUMP)
// 00445e8f: MOV EDX,dword ptr [ESP + 0x20]
//   Label: LAB_00445e8f
//   XREF to: Stack[-0x20] (READ)
// 00445e93: MOV dword ptr [EDX + 0x18],0x0
//   XREF to: 00840c2c (WRITE)
// 00445e9a: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x38] (READ)
// 00445e9e: MOV dword ptr [EDX + 0x24],0x1
//   XREF to: 00840c38 (WRITE)
// 00445ea5: MOV dword ptr [EDX],EAX
//   XREF to: 00840c14 (WRITE)
// 00445ea7: MOV dword ptr [EDX + 0x4],EBX
//   XREF to: 00840c18 (WRITE)
// 00445eaa: MOV dword ptr [EDX + 0x8],ECX
//   XREF to: 00840c1c (WRITE)
// 00445ead: MOV dword ptr [EDX + 0xc],EDI
//   XREF to: 00840c20 (WRITE)
// 00445eb0: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x34] (READ)
// 00445eb4: MOV dword ptr [EDX + 0x14],EAX
//   XREF to: 00840c28 (WRITE)
// 00445eb7: LEA EAX,[EDX + 0x28]
//   XREF to: 00840c3c (DATA)
// 00445eba: MOV dword ptr [EDX + 0x10],ESI
//   XREF to: 00840c24 (WRITE)
// 00445ebd: MOV EDX,dword ptr [0x0084a860]
//   XREF to: 0084a860 (READ)
// 00445ec3: INC EDX
// 00445ec4: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: 00840c3c (DATA)
//   XREF to: Stack[-0x20] (WRITE)
// 00445ec8: MOV dword ptr [0x0084a860],EDX
//   XREF to: 0084a860 (WRITE)
// 00445ece: JMP 0x00445e63
//   XREF to: 00445e63 (UNCONDITIONAL_JUMP)
// 00445ed0: ADD EAX,0x28
//   Label: LAB_00445ed0
// 00445ed3: CMP EAX,EDX
// 00445ed5: JL 0x00445bb4
//   XREF to: 00445bb4 (CONDITIONAL_JUMP)
// 00445edb: IMUL EAX,dword ptr [0x0084a860],0x28
//   Label: LAB_00445edb
//   XREF to: 0084a860 (READ)
// 00445ee2: XOR EDX,EDX
// 00445ee4: ADD EAX,0x840c14
//   XREF to: 00840c14 (DATA)
// 00445ee9: MOV dword ptr [ESP + 0x14],EDX
//   XREF to: Stack[-0x2c] (WRITE)
// 00445eed: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: 00840c3c (DATA)
//   XREF to: Stack[-0x1c] (WRITE)
// 00445ef1: CMP dword ptr [ESP + 0x14],0x0
//   Label: LAB_00445ef1
//   XREF to: Stack[-0x2c] (READ)
// 00445ef6: JZ 0x00445f50
//   XREF to: 00445f50 (CONDITIONAL_JUMP)
// 00445ef8: MOV EDI,dword ptr [0x0084a868]
//   XREF to: 0084a868 (READ)
// 00445efe: MOV ESI,dword ptr [0x0084a86c]
//   XREF to: 0084a86c (READ)
// 00445f04: ADD EDI,EBX
//   Label: LAB_00445f04
// 00445f06: ADD ESI,ECX
// 00445f08: MOV EDX,dword ptr [0x0084a85c]
//   XREF to: 0084a85c (READ)
// 00445f0e: DEC EDX
// 00445f0f: TEST EDX,EDX
// 00445f11: JL 0x00445f38
//   XREF to: 00445f38 (CONDITIONAL_JUMP)
// 00445f13: IMUL EAX,EDX,0x4c
// 00445f16: ADD EAX,0x83c1dc
//   XREF to: 0083c1dc (DATA)
// 00445f1b: MOV EBP,dword ptr [EAX + 0x10]
//   Label: LAB_00445f1b
//   XREF to: 0083c1ec (READ)
//   XREF to: 0083c1a0 (READ)
// 00445f1e: CMP EBP,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x30] (READ)
// 00445f22: JNZ 0x00445f5e
//   XREF to: 00445f5e (CONDITIONAL_JUMP)
// 00445f24: CMP ECX,dword ptr [EAX + 0x24]
//   XREF to: 0083c200 (READ)
//   XREF to: 0083c1b4 (READ)
// 00445f27: JGE 0x00445f5e
//   XREF to: 00445f5e (CONDITIONAL_JUMP)
// 00445f29: CMP EBX,dword ptr [EAX + 0x28]
//   XREF to: 0083c204 (READ)
//   XREF to: 0083c1b8 (READ)
// 00445f2c: JGE 0x00445f5e
//   XREF to: 00445f5e (CONDITIONAL_JUMP)
// 00445f2e: CMP ESI,dword ptr [EAX + 0x1c]
//   XREF to: 0083c1f8 (READ)
//   XREF to: 0083c1ac (READ)
// 00445f31: JLE 0x00445f5e
//   XREF to: 00445f5e (CONDITIONAL_JUMP)
// 00445f33: CMP EDI,dword ptr [EAX + 0x20]
//   XREF to: 0083c1fc (READ)
//   XREF to: 0083c1b0 (READ)
// 00445f36: JLE 0x00445f5e
//   XREF to: 00445f5e (CONDITIONAL_JUMP)
// 00445f38: TEST EDX,EDX
//   Label: LAB_00445f38
// 00445f3a: JL 0x00445f68
//   XREF to: 00445f68 (CONDITIONAL_JUMP)
// 00445f3c: MOV ESI,dword ptr [ESP + 0x14]
//   Label: LAB_00445f3c
//   XREF to: Stack[-0x2c] (READ)
// 00445f40: INC ESI
// 00445f41: MOV dword ptr [ESP + 0x14],ESI
//   XREF to: Stack[-0x2c] (WRITE)
// 00445f45: CMP ESI,0x1
// 00445f48: JG 0x00445bd9
//   XREF to: 00445bd9 (CONDITIONAL_JUMP)
// 00445f4e: JMP 0x00445ef1
//   XREF to: 00445ef1 (UNCONDITIONAL_JUMP)
// 00445f50: MOV EDI,dword ptr [0x0084a86c]
//   Label: LAB_00445f50
//   XREF to: 0084a86c (READ)
// 00445f56: MOV ESI,dword ptr [0x0084a868]
//   XREF to: 0084a868 (READ)
// 00445f5c: JMP 0x00445f04
//   XREF to: 00445f04 (UNCONDITIONAL_JUMP)
// 00445f5e: DEC EDX
//   Label: LAB_00445f5e
// 00445f5f: SUB EAX,0x4c
// 00445f62: TEST EDX,EDX
// 00445f64: JGE 0x00445f1b
//   XREF to: 00445f1b (CONDITIONAL_JUMP)
// 00445f66: JMP 0x00445f38
//   XREF to: 00445f38 (UNCONDITIONAL_JUMP)
// 00445f68: MOV EDX,dword ptr [ESP + 0x24]
//   Label: LAB_00445f68
//   XREF to: Stack[-0x1c] (READ)
// 00445f6c: MOV dword ptr [EDX + 0x18],0x0
//   XREF to: 00840c54 (WRITE)
// 00445f73: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x30] (READ)
// 00445f77: MOV dword ptr [EDX + 0x24],0x1
//   XREF to: 00840c60 (WRITE)
// 00445f7e: MOV dword ptr [EDX],EAX
//   XREF to: 00840c3c (WRITE)
// 00445f80: MOV dword ptr [EDX + 0x4],ECX
//   XREF to: 00840c40 (WRITE)
// 00445f83: MOV dword ptr [EDX + 0x8],EBX
//   XREF to: 00840c44 (WRITE)
// 00445f86: MOV dword ptr [EDX + 0xc],ESI
//   XREF to: 00840c48 (WRITE)
// 00445f89: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x2c] (READ)
// 00445f8d: MOV dword ptr [EDX + 0x14],EAX
//   XREF to: 00840c50 (WRITE)
// 00445f90: LEA EAX,[EDX + 0x28]
//   XREF to: 00840c64 (DATA)
// 00445f93: MOV dword ptr [EDX + 0x10],EDI
//   XREF to: 00840c4c (WRITE)
// 00445f96: MOV EDX,dword ptr [0x0084a860]
//   XREF to: 0084a860 (READ)
// 00445f9c: INC EDX
// 00445f9d: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: 00840c64 (DATA)
//   XREF to: Stack[-0x1c] (WRITE)
// 00445fa1: MOV dword ptr [0x0084a860],EDX
//   XREF to: 0084a860 (WRITE)
// 00445fa7: JMP 0x00445f3c
//   XREF to: 00445f3c (UNCONDITIONAL_JUMP)
// 00445fa9: ADD EAX,0x28
//   Label: LAB_00445fa9
// 00445fac: CMP EAX,EDX
// 00445fae: JL 0x00445c0e
//   XREF to: 00445c0e (CONDITIONAL_JUMP)
// 00445fb4: IMUL EAX,dword ptr [0x0084a860],0x28
//   Label: LAB_00445fb4
//   XREF to: 0084a860 (READ)
// 00445fbb: XOR EDI,EDI
// 00445fbd: ADD EAX,0x840c14
//   XREF to: 00840c14 (DATA)
// 00445fc2: MOV dword ptr [ESP + 0x1c],EDI
//   XREF to: Stack[-0x24] (WRITE)
// 00445fc6: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: 00840c3c (DATA)
//   XREF to: Stack[-0x18] (WRITE)
// 00445fca: CMP dword ptr [ESP + 0x1c],0x0
//   Label: LAB_00445fca
//   XREF to: Stack[-0x24] (READ)
// 00445fcf: JZ 0x00446029
//   XREF to: 00446029 (CONDITIONAL_JUMP)
// 00445fd1: MOV ESI,dword ptr [0x0084a868]
//   XREF to: 0084a868 (READ)
// 00445fd7: MOV EDI,dword ptr [0x0084a86c]
//   XREF to: 0084a86c (READ)
// 00445fdd: ADD ESI,ECX
//   Label: LAB_00445fdd
// 00445fdf: ADD EDI,EBX
// 00445fe1: MOV EDX,dword ptr [0x0084a85c]
//   XREF to: 0084a85c (READ)
// 00445fe7: DEC EDX
// 00445fe8: TEST EDX,EDX
// 00445fea: JL 0x00446011
//   XREF to: 00446011 (CONDITIONAL_JUMP)
// 00445fec: IMUL EAX,EDX,0x4c
// 00445fef: ADD EAX,0x83c1dc
//   XREF to: 0083c1dc (DATA)
// 00445ff4: MOV EBP,dword ptr [EAX + 0x10]
//   Label: LAB_00445ff4
//   XREF to: 0083c1ec (READ)
//   XREF to: 0083c1a0 (READ)
// 00445ff7: CMP EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x28] (READ)
// 00445ffb: JNZ 0x00446037
//   XREF to: 00446037 (CONDITIONAL_JUMP)
// 00445ffd: CMP EBX,dword ptr [EAX + 0x24]
//   XREF to: 0083c200 (READ)
//   XREF to: 0083c1b4 (READ)
// 00446000: JGE 0x00446037
//   XREF to: 00446037 (CONDITIONAL_JUMP)
// 00446002: CMP ECX,dword ptr [EAX + 0x28]
//   XREF to: 0083c204 (READ)
//   XREF to: 0083c1b8 (READ)
// 00446005: JGE 0x00446037
//   XREF to: 00446037 (CONDITIONAL_JUMP)
// 00446007: CMP EDI,dword ptr [EAX + 0x1c]
//   XREF to: 0083c1f8 (READ)
//   XREF to: 0083c1ac (READ)
// 0044600a: JLE 0x00446037
//   XREF to: 00446037 (CONDITIONAL_JUMP)
// 0044600c: CMP ESI,dword ptr [EAX + 0x20]
//   XREF to: 0083c1fc (READ)
//   XREF to: 0083c1b0 (READ)
// 0044600f: JLE 0x00446037
//   XREF to: 00446037 (CONDITIONAL_JUMP)
// 00446011: TEST EDX,EDX
//   Label: LAB_00446011
// 00446013: JL 0x00446041
//   XREF to: 00446041 (CONDITIONAL_JUMP)
// 00446015: MOV ESI,dword ptr [ESP + 0x1c]
//   Label: LAB_00446015
//   XREF to: Stack[-0x24] (READ)
// 00446019: INC ESI
// 0044601a: MOV dword ptr [ESP + 0x1c],ESI
//   XREF to: Stack[-0x24] (WRITE)
// 0044601e: CMP ESI,0x1
// 00446021: JG 0x00445c34
//   XREF to: 00445c34 (CONDITIONAL_JUMP)
// 00446027: JMP 0x00445fca
//   XREF to: 00445fca (UNCONDITIONAL_JUMP)
// 00446029: MOV ESI,dword ptr [0x0084a86c]
//   Label: LAB_00446029
//   XREF to: 0084a86c (READ)
// 0044602f: MOV EDI,dword ptr [0x0084a868]
//   XREF to: 0084a868 (READ)
// 00446035: JMP 0x00445fdd
//   XREF to: 00445fdd (UNCONDITIONAL_JUMP)
// 00446037: DEC EDX
//   Label: LAB_00446037
// 00446038: SUB EAX,0x4c
// 0044603b: TEST EDX,EDX
// 0044603d: JGE 0x00445ff4
//   XREF to: 00445ff4 (CONDITIONAL_JUMP)
// 0044603f: JMP 0x00446011
//   XREF to: 00446011 (UNCONDITIONAL_JUMP)
// 00446041: MOV EDX,dword ptr [ESP + 0x28]
//   Label: LAB_00446041
//   XREF to: Stack[-0x18] (READ)
// 00446045: MOV dword ptr [EDX + 0x18],0x0
//   XREF to: 00840c54 (WRITE)
// 0044604c: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x28] (READ)
// 00446050: MOV dword ptr [EDX + 0x24],0x1
//   XREF to: 00840c60 (WRITE)
// 00446057: MOV dword ptr [EDX],EAX
//   XREF to: 00840c3c (WRITE)
// 00446059: MOV dword ptr [EDX + 0x4],EBX
//   XREF to: 00840c40 (WRITE)
// 0044605c: MOV dword ptr [EDX + 0x8],ECX
//   XREF to: 00840c44 (WRITE)
// 0044605f: MOV dword ptr [EDX + 0xc],EDI
//   XREF to: 00840c48 (WRITE)
// 00446062: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x24] (READ)
// 00446066: MOV dword ptr [EDX + 0x14],EAX
//   XREF to: 00840c50 (WRITE)
// 00446069: LEA EAX,[EDX + 0x28]
//   XREF to: 00840c64 (DATA)
// 0044606c: MOV dword ptr [EDX + 0x10],ESI
//   XREF to: 00840c4c (WRITE)
// 0044606f: MOV EDX,dword ptr [0x0084a860]
//   XREF to: 0084a860 (READ)
// 00446075: INC EDX
// 00446076: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: 00840c64 (DATA)
//   XREF to: Stack[-0x18] (WRITE)
// 0044607a: MOV dword ptr [0x0084a860],EDX
//   XREF to: 0084a860 (WRITE)
// 00446080: JMP 0x00446015
//   XREF to: 00446015 (UNCONDITIONAL_JUMP)
// 00446082: CMP ESI,dword ptr [0x0084a874]
//   Label: LAB_00446082
//   XREF to: 0084a874 (READ)
// 00446088: JLE 0x00446090
//   XREF to: 00446090 (CONDITIONAL_JUMP)
// 0044608a: MOV dword ptr [0x0084a874],ESI
//   XREF to: 0084a874 (WRITE)
// 00446090: PUSH 0x24f
//   Label: LAB_00446090
// 00446095: PUSH 0x6196ab
//   XREF to: 006196ab (DATA)
// 0044609a: PUSH 0x6196c0
//   XREF to: 006196c0 (DATA)
// 0044609f: MOV ECX,dword ptr [0x0084a874]
//   XREF to: 0084a874 (READ)
// 004460a5: PUSH 0x0
// 004460a7: INC ECX
// 004460a8: PUSH 0x6196c3
//   XREF to: 006196c3 (DATA)
// 004460ad: MOV dword ptr [0x0084a874],ECX
//   XREF to: 0084a874 (WRITE)
// 004460b3: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 004460b8: MOV EBX,EAX
// 004460ba: ADD ESP,0x14
// 004460bd: TEST EAX,EAX
// 004460bf: JZ 0x00445938
//   XREF to: 00445938 (CONDITIONAL_JUMP)
// 004460c5: PUSH 0x6196d8
//   XREF to: 006196d8 (DATA)
// 004460ca: PUSH EAX
// 004460cb: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004460d0: ADD ESP,0x8
// 004460d3: MOV ESI,dword ptr [0x0084a874]
//   XREF to: 0084a874 (READ)
// 004460d9: PUSH ESI
// 004460da: PUSH 0x6196ee
//   XREF to: 006196ee (DATA)
// 004460df: PUSH EBX
// 004460e0: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004460e5: ADD ESP,0xc
// 004460e8: PUSH 0x253
// 004460ed: PUSH 0x619711
//   XREF to: 00619711 (DATA)
// 004460f2: PUSH EBX
// 004460f3: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004460f8: ADD ESP,0xc
// 004460fb: JMP 0x00445938
//   XREF to: 00445938 (UNCONDITIONAL_JUMP)
