// Name: shape_cramtex.cpp_generateTextureAtlas_FUN_00445820
// Address: 00445820
// Address Range: [[00445820, 004460ff]]
// Convention: __cdecl
// Signature: void shape_cramtex.cpp_generateTextureAtlas_FUN_00445820(void)

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
  byte *puVar14;
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
      puVar14 = (byte *)
                ((g_CramAtlasWidth + -1 +
                 ((int)((g_CramAcceptableSize * 5 + iVar12 * -4) - (uint)(iVar12 << 1 < 0)) >> 2) *
                 g_CramAtlasHeight) / g_CramAtlasWidth);
      if ((int)puVar14 <= (int)pFVar13) {
        puVar14 = (byte *)((int)ppcVar7 + 1);
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
    } while ((puVar14 != (byte *)g_CramPaddingCalculation) &&
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
