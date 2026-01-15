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
  int *piVar7;
  int *piVar8;
  uint uVar9;
  uint seed;
  SCramWorkingEntry *pSVar10;
  int iVar11;
  FILE *pFVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int in_stack_00000004;
  int local_34;
  int local_2c;
  int local_24;
  SCramRectangle *local_20;
  SCramRectangle *local_1c;
  SCramRectangle *local_18;
  int local_14;
  
  crt_io_c_deleteFile_FUN_005ff9d0("..\\shape\\cramlog.txt");
  seed = crt_stdlib_c_rand_FUN_005feb5c();
  crt_stdlib_c_srand_FUN_005feb80(0x16);
  crt_stdlib_c_qsort_FUN_005fdf38
            (g_CramSortedTextureEntries,g_CramTextureCount,0x4c,
             shape_cramtex_cpp_qsortByLargestDimension_FUN_004457f0);
  iVar13 = 0;
  g_CramTotalPixelArea = 0;
  if (0 < (int)g_CramTextureCount) {
    pSVar10 = g_CramSortedTextureEntries;
    do {
      piVar7 = &pSVar10->width;
      piVar1 = &pSVar10->height;
      pSVar10 = pSVar10 + 1;
      g_CramTotalPixelArea = g_CramTotalPixelArea + *piVar7 * *piVar1;
      iVar13 = iVar13 + 1;
    } while (iVar13 < (int)g_CramTextureCount);
  }
  iVar13 = (g_CramTotalPixelArea * 100) / in_stack_00000004;
  for (; iVar11 = g_CramAcceptableSize * g_CramAcceptableSize * g_CramTotalMaps,
      iVar11 - iVar13 == 0 || iVar11 < iVar13; g_CramAcceptableSize = g_CramAcceptableSize + 1) {
  }
  g_CramPaddingCalculation =
       (g_CramAtlasWidth + -1 + g_CramAtlasHeight * g_CramAcceptableSize) / g_CramAtlasWidth;
  pFVar12 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                      ("..\\shape\\cramlog.txt",(char *)0x0,"at",
                       "..\\shape\\cramtex.cpp",0x1e3);
  if (pFVar12 != (FILE *)0x0) {
    crt_stdio_c_fprintf_FUN_005fe6d0
              (pFVar12,"initial pad guess = %d\n",g_CramPaddingCalculation);
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar12,"..\\shape\\cramtex.cpp",0x1e6);
  }
  iVar13 = -1;
  do {
    iVar17 = 0;
    iVar11 = iVar13 + 1;
    g_CramAlgorithmState = &DAT_0084a8b0;
    do {
      iVar17 = iVar17 + 1;
      iVar14 = 0;
      if (0 < (int)g_CramTextureCount) {
        pSVar10 = g_CramSortedTextureEntries;
        do {
          iVar15 = pSVar10->width + g_CramPaddingCalculation;
          if (g_CramAcceptableSize < iVar15) {
            g_CramAcceptableSize = iVar15;
          }
          iVar15 = pSVar10->height + g_CramPaddingCalculation;
          if (g_CramAcceptableSize < iVar15) {
            g_CramAcceptableSize = iVar15;
          }
          iVar14 = iVar14 + 1;
          pSVar10 = pSVar10 + 1;
        } while (iVar14 < (int)g_CramTextureCount);
      }
      iVar14 = g_CramAcceptableSize * 5 >> 0x1f;
      iVar14 = (g_CramAtlasWidth + -1 +
               ((int)((g_CramAcceptableSize * 5 + iVar14 * -4) - (uint)(iVar14 << 1 < 0)) >> 2) *
               g_CramAtlasHeight) / g_CramAtlasWidth;
      if (iVar14 <= iVar13) {
        iVar14 = iVar11;
      }
      pFVar12 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                          ("..\\shape\\cramlog.txt",(char *)0x0,"at",
                           "..\\shape\\cramtex.cpp",0x206);
      if (pFVar12 != (FILE *)0x0) {
        crt_stdio_c_fprintf_FUN_005fe6d0(pFVar12,"Guess #%d\n",iVar17);
        crt_stdio_c_fprintf_FUN_005fe6d0(pFVar12,"  acceptableSize = %d\n",g_CramAcceptableSize);
        crt_stdio_c_fprintf_FUN_005fe6d0(pFVar12,"  estimated pad = %d\n",iVar14);
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar12,"..\\shape\\cramtex.cpp",0x20b);
      }
    } while ((iVar14 != g_CramPaddingCalculation) &&
            (g_CramPaddingCalculation = iVar14, iVar17 < 10));
    iVar13 = g_CramPaddingCalculation;
    iVar11 = 0;
    g_CramRectangleCount = 0;
    g_CramBestSolutionMetric2 = 999999;
    g_CramBestSolutionMetric1 = 999999;
    g_CramMinPlacementX = 999999;
    g_CramMinPlacementY = 999999;
    g_CramCurrentAcceptableSize = g_CramAcceptableSize;
    if (0 < (int)g_CramTextureCount) {
      pSVar10 = g_CramSortedTextureEntries;
      do {
        iVar17 = g_CramPaddingCalculation;
        pSVar10->padded_width = pSVar10->width + g_CramPaddingCalculation;
        pSVar10->padded_height = pSVar10->height + iVar17;
        if (pSVar10->padded_width < g_CramMinPlacementX) {
          g_CramMinPlacementX = pSVar10->padded_width;
        }
        if (pSVar10->padded_height < g_CramMinPlacementY) {
          g_CramMinPlacementY = pSVar10->padded_height;
        }
        iVar11 = iVar11 + 1;
        pSVar10 = pSVar10 + 1;
      } while (iVar11 < (int)g_CramTextureCount);
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
      iVar17 = 0;
      do {
        if (((*(int *)((int)&g_CramRectangles[0].left + iVar17) == 0) &&
            (*(int *)((int)&g_CramRectangles[0].top + iVar17) == 0)) &&
           (g_CramSortedTextureEntries[0].padded_height ==
            *(int *)((int)&g_CramRectangles[0].right + iVar17))) goto LAB_00445b8a;
        iVar17 = iVar17 + 0x28;
      } while (iVar17 < g_CramRectangleCount * 0x28);
    }
    local_34 = 0;
    local_20 = g_CramRectangles + g_CramRectangleCount;
    do {
      iVar17 = g_CramMinPlacementY;
      iVar14 = g_CramMinPlacementX;
      if (local_34 != 0) {
        iVar17 = g_CramMinPlacementX;
        iVar14 = g_CramMinPlacementY;
      }
      iVar15 = g_CramPlacedTextureCount + -1;
      if (-1 < iVar15) {
        pSVar10 = g_CramSortedTextureEntries + iVar15;
        do {
          if (((pSVar10->assigned_map_number == 0) && (0 < pSVar10->working_top)) &&
             ((iVar11 < pSVar10->working_width &&
              ((pSVar10->placement_bottom < iVar14 && (pSVar10->working_right < iVar17 + iVar11)))))
             ) break;
          iVar15 = iVar15 + -1;
          pSVar10 = pSVar10 + -1;
        } while (-1 < iVar15);
      }
      if (iVar15 < 0) {
        local_20->reserved_0x18 = 0;
        local_20->active_flag = 1;
        local_20->left = 0;
        local_20->top = 0;
        local_20->right = iVar11;
        local_20->bottom = iVar14;
        local_20->orientation = local_34;
        local_20->max_dimension = iVar17 + iVar11;
        g_CramRectangleCount = g_CramRectangleCount + 1;
        local_20 = local_20 + 1;
      }
      local_34 = local_34 + 1;
    } while (local_34 < 2);
LAB_00445b8a:
    iVar17 = g_CramSortedTextureEntries[0].working_top;
    iVar11 = g_CramSortedTextureEntries[0].working_right;
    if (0 < g_CramRectangleCount) {
      iVar14 = 0;
      do {
        if (((*(int *)((int)&g_CramRectangles[0].left + iVar14) == 0) &&
            (g_CramSortedTextureEntries[0].working_top ==
             *(int *)((int)&g_CramRectangles[0].top + iVar14))) &&
           (g_CramSortedTextureEntries[0].working_right ==
            *(int *)((int)&g_CramRectangles[0].right + iVar14))) goto LAB_00445bd9;
        iVar14 = iVar14 + 0x28;
      } while (iVar14 < g_CramRectangleCount * 0x28);
    }
    local_1c = g_CramRectangles + g_CramRectangleCount;
    local_2c = 0;
    do {
      iVar14 = g_CramMinPlacementX;
      iVar15 = g_CramMinPlacementY;
      if (local_2c != 0) {
        iVar14 = g_CramMinPlacementY;
        iVar15 = g_CramMinPlacementX;
      }
      iVar16 = g_CramPlacedTextureCount + -1;
      if (-1 < iVar16) {
        pSVar10 = g_CramSortedTextureEntries + iVar16;
        do {
          if (((pSVar10->assigned_map_number == 0) && (iVar17 < pSVar10->working_top)) &&
             ((iVar11 < pSVar10->working_width &&
              ((pSVar10->placement_bottom < iVar14 + iVar17 &&
               (pSVar10->working_right < iVar15 + iVar11)))))) break;
          iVar16 = iVar16 + -1;
          pSVar10 = pSVar10 + -1;
        } while (-1 < iVar16);
      }
      if (iVar16 < 0) {
        local_1c->reserved_0x18 = 0;
        local_1c->active_flag = 1;
        local_1c->left = 0;
        local_1c->top = iVar17;
        local_1c->right = iVar11;
        local_1c->bottom = iVar14 + iVar17;
        local_1c->orientation = local_2c;
        local_1c->max_dimension = iVar15 + iVar11;
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
            if (((local_14 == *(int *)((int)&g_CramRectangles[0].left + iVar11)) &&
                (*(int *)((int)&g_CramRectangles[0].top + iVar11) == 0)) &&
               (*(int *)((int)&g_CramRectangles[0].right + iVar11) == 0)) goto LAB_00445c34;
            iVar11 = iVar11 + 0x28;
          } while (iVar11 < g_CramRectangleCount * 0x28);
        }
        local_18 = g_CramRectangles + g_CramRectangleCount;
        local_24 = 0;
        do {
          iVar11 = g_CramMinPlacementY;
          iVar17 = g_CramMinPlacementX;
          if (local_24 != 0) {
            iVar11 = g_CramMinPlacementX;
            iVar17 = g_CramMinPlacementY;
          }
          iVar14 = g_CramPlacedTextureCount + -1;
          if (-1 < iVar14) {
            pSVar10 = g_CramSortedTextureEntries + iVar14;
            do {
              if (((pSVar10->assigned_map_number == local_14) && (0 < pSVar10->working_top)) &&
                 ((0 < pSVar10->working_width &&
                  ((pSVar10->placement_bottom < iVar17 && (pSVar10->working_right < iVar11))))))
              break;
              iVar14 = iVar14 + -1;
              pSVar10 = pSVar10 + -1;
            } while (-1 < iVar14);
          }
          if (iVar14 < 0) {
            local_18->reserved_0x18 = 0;
            local_18->active_flag = 1;
            local_18->left = local_14;
            local_18->top = 0;
            local_18->right = 0;
            local_18->bottom = iVar17;
            local_18->orientation = local_24;
            local_18->max_dimension = iVar11;
            g_CramRectangleCount = g_CramRectangleCount + 1;
            local_18 = local_18 + 1;
          }
          local_24 = local_24 + 1;
        } while (local_24 < 2);
LAB_00445c34:
        local_14 = local_14 + 1;
      } while (local_14 < g_CramTotalMaps);
    }
    shape_cramtex_cpp_runInteractiveAtlasGeneration_FUN_00446160((SCramWorkingEntry *)iVar13);
    if ((g_CramAtlasWidth + -1 + g_CramAtlasHeight * g_CramCurrentAcceptableSize) / g_CramAtlasWidth
        <= g_CramPaddingCalculation) {
      iVar13 = 0;
      shape_cramtex_cpp_visualizeTextureAtlas_FUN_00447f20(1,0,seed);
      if (0 < (int)g_CramTextureCount) {
        pSVar10 = g_CramSortedTextureEntries;
        do {
          iVar11 = g_CramPaddingCalculation / 2;
          iVar13 = iVar13 + 1;
          pSVar10->final_top = pSVar10->final_top + iVar11;
          pSVar10->final_right = pSVar10->final_right + iVar11;
          pSVar10->final_bottom = pSVar10->final_bottom + iVar11;
          uVar9 = g_CramTextureCount;
          pSVar10->final_left = pSVar10->final_left + iVar11;
          pSVar10 = pSVar10 + 1;
        } while (iVar13 < (int)uVar9);
      }
      pFVar12 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                          ("..\\shape\\CramTex.txt",(char *)0x0,"wt",
                           "..\\shape\\cramtex.cpp",0x271);
      if (pFVar12 != (FILE *)0x0) {
        if (0 < (int)g_CramTextureCount) {
          pSVar10 = g_CramSortedTextureEntries;
          iVar13 = 0;
          do {
            piVar1 = &pSVar10->rotation_applied;
            piVar7 = &pSVar10->final_bottom;
            piVar2 = &pSVar10->final_right;
            piVar3 = &pSVar10->final_top;
            piVar4 = &pSVar10->final_left;
            piVar5 = &pSVar10->working_map_id;
            piVar6 = &pSVar10->height;
            piVar8 = &pSVar10->width;
            pSVar10 = pSVar10 + 1;
            iVar11 = iVar13 + 1;
            crt_stdio_c_fprintf_FUN_005fe6d0
                      (pFVar12,"%2d: %5dx%-5d  Page %d (%5d,%-5d)-(%5d,%-5d)    Rotated: %d\n",iVar13,*piVar8,*piVar6,*piVar5,
                       *piVar4,*piVar3,*piVar2,*piVar7,*piVar1);
            iVar13 = iVar11;
          } while (iVar11 < (int)g_CramTextureCount);
        }
        crt_stdio_c_fprintf_FUN_005fe6d0
                  (pFVar12,"%ux%u square found using %u padding.\n",g_CramCurrentAcceptableSize,
                   g_CramCurrentAcceptableSize,g_CramPaddingCalculation);
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar12,"..\\shape\\cramtex.cpp",0x274);
      }
      crt_stdlib_c_srand_FUN_005feb80(seed);
      return;
    }
    if (g_CramAcceptableSize < g_CramCurrentAcceptableSize) {
      g_CramAcceptableSize = g_CramCurrentAcceptableSize;
    }
    g_CramAcceptableSize = g_CramAcceptableSize + 1;
    pFVar12 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                        ("..\\shape\\cramlog.txt",(char *)0x0,"at",
                         "..\\shape\\cramtex.cpp",0x24f);
    if (pFVar12 != (FILE *)0x0) {
      crt_stdio_c_fprintf_FUN_005fe6d0(pFVar12,"UNDERESTIMATED PAD!!\n");
      crt_stdio_c_fprintf_FUN_005fe6d0
                (pFVar12,"acceptableSize now adjusted to %d\n",g_CramAcceptableSize);
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar12,"..\\shape\\cramtex.cpp",0x253);
    }
  } while( true );
}
