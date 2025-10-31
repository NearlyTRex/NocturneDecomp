// Name: shape_cramtex.cpp_runInteractiveAtlasGeneration_FUN_00446160
// Address: 00446160
// Address Range: [[00446160, 0044758e]]
// Convention: __cdecl
// Signature: int shape_cramtex.cpp_runInteractiveAtlasGeneration_FUN_00446160(SCramWorkingEntry * current_texture_entry)
// Cross-references:
//   shape_cramtex.cpp_addTextureEntry_FUN_00446100 (00446100) at 00446127 [UNCONDITIONAL_CALL]
//   shape_cramtex.cpp_generateTextureAtlasLayout_FUN_00444d90 (00444d90) at 00445272 [UNCONDITIONAL_CALL]
//   shape_cramtex.cpp_generateTextureAtlas_FUN_00445820 (00445820) at 00445c54 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_shape_cramtex_cpp_006197cb
//   TerminatedCString s_at_006197e0
//   TerminatedCString s_shape_cramlog_txt_006197e3
//   TerminatedCString s_New_best_solution_found__006197f8
//   TerminatedCString s_shape_cramtex_cpp_00619827
//   TerminatedCString s_shape_cramtex_cpp_0061983c
//   TerminatedCString s_at_00619851
//   TerminatedCString s_shape_cramlog_txt_00619854
//   TerminatedCString s_CRAMTEX_BUG_00619869
//   TerminatedCString s_bestSquareSize_d_thisSqu_00619879
//   TerminatedCString s_acceptableSize_d_006198bc
//   TerminatedCString s_targetPadSize_d_006198d1
//   TerminatedCString s_pad_d_006198e5
//   TerminatedCString s_Best_006198ef
//   TerminatedCString s_s_3d_5dx_5d_Map_d_5d_5d__006198f6
//   TerminatedCString s_Current_00619932
//   TerminatedCString s_s_3d_5dx_5d_Map_d_5d_5d__0061993c
//   TerminatedCString s_shape_cramtex_cpp_00619978
//   TerminatedCString s_shape_cramtex_cpp_0061998d
//   TerminatedCString s_at_006199a2
//   TerminatedCString s_shape_cramlog_txt_006199a5
//   TerminatedCString s_Checking_if_solution_acc_006199ba
//   TerminatedCString s_bestSquareSize_d_accepta_006199dc
//   TerminatedCString s_shape_cramtex_cpp_00619a08
//   double g_CramTimeTicksToSecondsMultiplier = 8.47710503472222E-7
//   int g_CramInvalidMarker = -0x1
//   undefined4 DAT_0083c1a0
//   undefined4 DAT_0083c1ac
//   undefined4 DAT_0083c1b0
//   undefined4 DAT_0083c1b4
//   undefined4 DAT_0083c1b8
//   int g_CramVisualizationUpdateCounter
//   SCramWorkingEntry[1] g_CramSortedTextureEntries
//   undefined4 DAT_0083c1e0
//   undefined4 g_CramSortedTextureEntries[0].assigned_map_number
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
//   undefined4 DAT_0083c238
//   undefined4 DAT_0083c244
//   undefined4 DAT_0083c248
//   undefined4 DAT_0083c24c
//   undefined4 DAT_0083c250
//   undefined4 DAT_0083c254
//   undefined4 DAT_0083c258
//   undefined4 DAT_0083c25c
//   undefined4 DAT_0083c260
//   undefined4 DAT_0083c264
//   undefined4 DAT_0083c268
//   undefined4 DAT_0083c26c
//   undefined4 DAT_0083c298
//   undefined4 DAT_0083c29c
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
//   undefined4 DAT_00840c58
//   undefined4 DAT_00840c5c
//   undefined4 DAT_00840c60
//   uint g_CramTextureCount
//   int g_CramTotalMaps
//   int g_CramPlacedTextureCount
//   int g_CramRectangleCount
//   int g_CramMinPlacementX
//   int g_CramMinPlacementY
//   int g_CramOptimalPlacement
//   int g_CramAcceptableSize
//   int g_CramAtlasHeight
//   int g_CramPaddingCalculation
//   int g_CramCurrentAcceptableSize
//   int g_CramBestSolutionMetric1
//   int g_CramBestSolutionMetric2
//   int g_CramMapNumber
//   int g_CramFillGaps
//   int g_CramDebugStepMode
//   int g_CramVisualizationMode
//   int g_CramMaxIterationsLimit
//   int g_CramStartTime
//   int g_CramIterationCount
//   void* g_CramAlgorithmState
// Function calls:
//   crt_stack.c_stack_probe_FUN_005ff9f3
//   crt_stdio.c_fprintf_FUN_005fe6d0
//   crt_stdlib.c_qsort_FUN_005fdf38
//   engine_2d.c_clearInputAndWait_FUN_00403260
//   shape_cramtex.cpp_findHighestOverlappingY_FUN_004478c0
//   shape_cramtex.cpp_findLeftmostOverlappingX_FUN_00447a10
//   shape_cramtex.cpp_findLowestOverlappingY_FUN_00447930
//   shape_cramtex.cpp_findRightmostOverlappingX_FUN_004479a0
//   shape_cramtex.cpp_visualizeTextureAtlas_FUN_00447f20
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_openFile_FUN_0050f7a0
//   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   wincore_winrun.cpp_getTime_FUN_005f2dc0
//   wincore_winrun.cpp_processWindowMessages_FUN_005f35e0
//   wincore_winrun.cpp_wasKeyPressed_FUN_005f2f00

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl
shape_cramtex_cpp_runInteractiveAtlasGeneration_FUN_00446160
          (SCramWorkingEntry *current_texture_entry)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  float fVar7;
  int *piVar8;
  bool bVar9;
  SCramWorkingEntry *pSVar10;
  FILE *pFVar11;
  int iVar12;
  uint uVar13;
  undefined3 extraout_var;
  int *piVar14;
  void *pvVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  SCramWorkingEntry *pSVar19;
  SCramRectangle *pSVar20;
  int iVar21;
  undefined4 *puVar22;
  uint uVar23;
  char *display_mode;
  char *bounds_entry;
  char *reference_entry;
  SCramWorkingEntry *pSVar24;
  int in_stack_ffffff5c;
  SIZE_T num;
  int iVar25;
  undefined1 *puVar26;
  int in_stack_ffffff70;
  void *local_84;
  void *local_7c;
  int local_74;
  int local_6c;
  int local_64;
  SCramWorkingEntry *local_60;
  int local_58;
  int local_50;
  SCramRectangle *local_48;
  SCramWorkingEntry *local_44;
  SCramRectangle *local_40;
  SCramRectangle *local_3c;
  SCramWorkingEntry *local_38;
  SCramRectangle *local_34;
  SCramWorkingEntry *local_30;
  int local_24;
  int local_18;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0xdc);
  pSVar10 = (SCramWorkingEntry *)g_CramAlgorithmState;
  num = 0;
  iVar25 = 0;
  if (0 < g_CramRectangleCount) {
    pSVar20 = g_CramRectangles;
    puVar22 = (undefined4 *)g_CramAlgorithmState;
    do {
      pSVar20->active_flag = 0;
      iVar18 = g_CramBestSolutionMetric1;
      if ((pSVar20->reserved_0x18 == 0) &&
         ((current_texture_entry->padded_height != current_texture_entry->padded_width ||
          (pSVar20->orientation == 0)))) {
        if (pSVar20->orientation == 0) {
          iVar21 = pSVar20->top + current_texture_entry->padded_width;
          pSVar20->reserved_0x1c = iVar21;
          if (iVar21 < iVar18) {
            iVar18 = pSVar20->right + current_texture_entry->padded_height;
            goto LAB_00446547;
          }
        }
        else {
          iVar21 = pSVar20->top + current_texture_entry->padded_height;
          pSVar20->reserved_0x1c = iVar21;
          if (iVar21 < iVar18) {
            iVar18 = pSVar20->right + current_texture_entry->padded_width;
LAB_00446547:
            iVar21 = g_CramBestSolutionMetric1;
            pSVar20->reserved_0x20 = iVar18;
            if (iVar18 < iVar21) {
              iVar18 = g_CramPlacedTextureCount + -1;
              if (-1 < iVar18) {
                pSVar24 = g_CramSortedTextureEntries + iVar18;
                do {
                  if ((((pSVar20->left == pSVar24->assigned_map_number) &&
                       (pSVar20->top < pSVar24->working_top)) &&
                      (pSVar20->right < pSVar24->working_width)) &&
                     ((pSVar24->placement_bottom < pSVar20->reserved_0x1c &&
                      (pSVar24->working_right < pSVar20->reserved_0x20)))) goto LAB_004461b1;
                  iVar18 = iVar18 + -1;
                  pSVar24 = pSVar24 + -1;
                } while (-1 < iVar18);
              }
              num = num + 1;
              *puVar22 = pSVar20;
              puVar22 = puVar22 + 1;
            }
          }
        }
      }
LAB_004461b1:
      iVar25 = iVar25 + 1;
      pSVar20 = pSVar20 + 1;
    } while (iVar25 < g_CramRectangleCount);
  }
  puVar26 = (undefined1 *)g_CramAlgorithmState;
  if (0 < (int)num) {
    g_CramPlacedTextureCount = g_CramPlacedTextureCount + 1;
    pvVar15 = (void *)((int)g_CramAlgorithmState + num * 4);
    if (1 < (int)num) {
      iVar25 = 0;
      piVar14 = &pSVar10->width;
      g_CramAlgorithmState = pvVar15;
      if (0 < (int)num) {
        do {
          iVar18 = *piVar14;
          *(int *)(iVar18 + 0x24) = *(int *)(iVar18 + 4) + *(int *)(iVar18 + 8);
          iVar21 = *(int *)(iVar18 + 0x1c);
          if (*(int *)(iVar18 + 0x1c) <= *(int *)(iVar18 + 0x20)) {
            iVar21 = *(int *)(iVar18 + 0x20);
          }
          iVar25 = iVar25 + 1;
          *(int *)(iVar18 + 0x24) =
               *(int *)(iVar18 + 0x24) +
               *(int *)(iVar18 + 0x20) + iVar21 * 5 + *(int *)(iVar18 + 0x1c);
          piVar14 = piVar14 + 1;
        } while (iVar25 < (int)num);
      }
      crt_stdlib_c_qsort_FUN_005fdf38
                (pSVar10,num,4,shape_cramtex_cpp_qsortRectanglesByActiveFlag_FUN_00446140);
      pvVar15 = g_CramAlgorithmState;
    }
    g_CramAlgorithmState = pvVar15;
    iVar25 = 0;
    pSVar24 = pSVar10;
    if (0 < (int)num) {
      do {
        iVar18 = iVar25 + 5;
        iVar25 = iVar25 + 1;
        *(int *)(pSVar24->width + 0x24) = iVar18;
        pSVar24 = (SCramWorkingEntry *)&pSVar24->height;
      } while (iVar25 < (int)num);
    }
    if (g_CramPlacedTextureCount < (int)g_CramTextureCount) {
      local_7c = (void *)0x0;
      local_30 = pSVar10;
      if (0 < (int)num) {
        do {
          piVar14 = (int *)local_30->width;
          current_texture_entry->assigned_map_number = *piVar14;
          current_texture_entry->placement_flags = piVar14[5];
          current_texture_entry->placement_bottom = piVar14[1];
          current_texture_entry->working_right = piVar14[2];
          if (current_texture_entry->placement_flags == 0) {
            current_texture_entry->effective_width = current_texture_entry->padded_width;
            iVar25 = current_texture_entry->padded_height;
          }
          else {
            current_texture_entry->effective_width = current_texture_entry->padded_height;
            iVar25 = current_texture_entry->padded_width;
          }
          current_texture_entry->effective_height = iVar25;
          current_texture_entry->working_top =
               current_texture_entry->placement_bottom + current_texture_entry->effective_width;
          current_texture_entry->working_width =
               current_texture_entry->working_right + current_texture_entry->effective_height;
          if ((current_texture_entry->working_top < g_CramBestSolutionMetric1) &&
             (current_texture_entry->working_width < g_CramBestSolutionMetric1)) {
            iVar25 = 0;
            if (0 < g_CramRectangleCount) {
              pSVar20 = g_CramRectangles;
              do {
                if ((((pSVar20->reserved_0x18 == 0) &&
                     (pSVar20->left == current_texture_entry->assigned_map_number)) &&
                    (current_texture_entry->placement_bottom < pSVar20->bottom)) &&
                   (((current_texture_entry->working_right < pSVar20->max_dimension &&
                     (pSVar20->top < current_texture_entry->working_top)) &&
                    (pSVar20->right < current_texture_entry->working_width)))) {
                  pSVar20->reserved_0x18 = (int)current_texture_entry;
                }
                iVar25 = iVar25 + 1;
                pSVar20 = pSVar20 + 1;
              } while (iVar25 < g_CramRectangleCount);
            }
            if (current_texture_entry->working_width <= g_CramBestSolutionMetric2) {
              iVar25 = g_CramPlacedTextureCount + -2;
              local_74 = 0;
              if (-1 < iVar25) {
                pSVar24 = g_CramSortedTextureEntries + iVar25;
                do {
                  if (((pSVar24->assigned_map_number == current_texture_entry->assigned_map_number)
                      && (pSVar24->working_top <= current_texture_entry->working_top)) &&
                     ((current_texture_entry->working_width < pSVar24->working_width &&
                      ((pSVar24->working_right <
                        current_texture_entry->working_width + g_CramOptimalPlacement + -1 &&
                       (local_74 < pSVar24->working_top)))))) {
                    local_74 = pSVar24->working_top;
                  }
                  iVar25 = iVar25 + -1;
                  pSVar24 = pSVar24 + -1;
                } while (-1 < iVar25);
              }
              if (local_74 < current_texture_entry->working_top) {
                local_24 = g_CramPlacedTextureCount + -2;
                if (-1 < local_24) {
                  local_44 = g_CramSortedTextureEntries + local_24;
                  do {
                    iVar25 = current_texture_entry->assigned_map_number;
                    if ((((iVar25 == local_44->assigned_map_number) &&
                         (local_44->working_top <= current_texture_entry->working_top)) &&
                        (iVar18 = current_texture_entry->working_width,
                        iVar18 < local_44->working_width)) && (local_74 < local_44->working_top)) {
                      iVar21 = local_44->working_top;
                      if (0 < g_CramRectangleCount) {
                        iVar12 = 0;
                        do {
                          if (((iVar25 == *(int *)((int)&g_CramRectangles[0].left + iVar12)) &&
                              (iVar21 == *(int *)((int)&g_CramRectangles[0].top + iVar12))) &&
                             (iVar18 == *(int *)((int)&g_CramRectangles[0].right + iVar12)))
                          goto LAB_00446d87;
                          iVar12 = iVar12 + 0x28;
                        } while (iVar12 < g_CramRectangleCount * 0x28);
                      }
                      local_6c = 0;
                      local_48 = g_CramRectangles + g_CramRectangleCount;
                      do {
                        iVar12 = g_CramMinPlacementX;
                        iVar17 = g_CramMinPlacementY;
                        if (local_6c != 0) {
                          iVar12 = g_CramMinPlacementY;
                          iVar17 = g_CramMinPlacementX;
                        }
                        iVar16 = g_CramPlacedTextureCount + -1;
                        if (-1 < iVar16) {
                          pSVar24 = g_CramSortedTextureEntries + iVar16;
                          do {
                            if (((pSVar24->assigned_map_number == iVar25) &&
                                (iVar21 < pSVar24->working_top)) &&
                               ((iVar18 < pSVar24->working_width &&
                                ((pSVar24->placement_bottom < iVar12 + iVar21 &&
                                 (pSVar24->working_right < iVar17 + iVar18)))))) break;
                            iVar16 = iVar16 + -1;
                            pSVar24 = pSVar24 + -1;
                          } while (-1 < iVar16);
                        }
                        if (iVar16 < 0) {
                          local_48->reserved_0x18 = 0;
                          local_48->active_flag = 1;
                          local_48->left = iVar25;
                          local_48->top = iVar21;
                          local_48->right = iVar18;
                          local_48->bottom = iVar12 + iVar21;
                          local_48->orientation = local_6c;
                          local_48->max_dimension = iVar17 + iVar18;
                          g_CramRectangleCount = g_CramRectangleCount + 1;
                          local_48 = local_48 + 1;
                        }
                        local_6c = local_6c + 1;
                      } while (local_6c < 2);
                    }
LAB_00446d87:
                    local_44 = local_44 + -1;
                    local_24 = local_24 + -1;
                  } while (-1 < local_24);
                }
                iVar25 = current_texture_entry->assigned_map_number;
                iVar18 = current_texture_entry->working_width;
                if (0 < g_CramRectangleCount) {
                  iVar21 = 0;
                  do {
                    if (((iVar25 == *(int *)((int)&g_CramRectangles[0].left + iVar21)) &&
                        (local_74 == *(int *)((int)&g_CramRectangles[0].top + iVar21))) &&
                       (iVar18 == *(int *)((int)&g_CramRectangles[0].right + iVar21)))
                    goto LAB_00446df8;
                    iVar21 = iVar21 + 0x28;
                  } while (iVar21 < g_CramRectangleCount * 0x28);
                }
                local_40 = g_CramRectangles + g_CramRectangleCount;
                local_64 = 0;
                do {
                  iVar21 = g_CramMinPlacementY;
                  iVar12 = g_CramMinPlacementX;
                  if (local_64 != 0) {
                    iVar21 = g_CramMinPlacementX;
                    iVar12 = g_CramMinPlacementY;
                  }
                  iVar17 = g_CramPlacedTextureCount + -1;
                  if (-1 < iVar17) {
                    pSVar24 = g_CramSortedTextureEntries + iVar17;
                    do {
                      if (((pSVar24->assigned_map_number == iVar25) &&
                          (local_74 < pSVar24->working_top)) &&
                         ((iVar18 < pSVar24->working_width &&
                          ((pSVar24->placement_bottom < iVar12 + local_74 &&
                           (pSVar24->working_right < iVar21 + iVar18)))))) break;
                      iVar17 = iVar17 + -1;
                      pSVar24 = pSVar24 + -1;
                    } while (-1 < iVar17);
                  }
                  if (iVar17 < 0) {
                    local_40->reserved_0x18 = 0;
                    local_40->active_flag = 1;
                    local_40->left = iVar25;
                    local_40->top = local_74;
                    local_40->right = iVar18;
                    local_40->max_dimension = iVar21 + iVar18;
                    local_40->orientation = local_64;
                    local_40->bottom = iVar12 + local_74;
                    g_CramRectangleCount = g_CramRectangleCount + 1;
                    local_40 = local_40 + 1;
                  }
                  local_64 = local_64 + 1;
                } while (local_64 < 2);
              }
            }
LAB_00446df8:
            if (current_texture_entry->working_width <= g_CramBestSolutionMetric2) {
              iVar25 = g_CramPlacedTextureCount + -2;
              local_60 = (SCramWorkingEntry *)0x0;
              if (-1 < iVar25) {
                pSVar24 = g_CramSortedTextureEntries + iVar25;
                do {
                  if ((((pSVar24->assigned_map_number == current_texture_entry->assigned_map_number)
                       && (pSVar24->working_width <= current_texture_entry->working_width)) &&
                      (current_texture_entry->working_top < pSVar24->working_top)) &&
                     ((pSVar24->placement_bottom <
                       current_texture_entry->working_top + g_CramOptimalPlacement + -1 &&
                      ((int)local_60 < pSVar24->working_width)))) {
                    local_60 = (SCramWorkingEntry *)pSVar24->working_width;
                  }
                  iVar25 = iVar25 + -1;
                  pSVar24 = pSVar24 + -1;
                } while (-1 < iVar25);
              }
              if ((int)local_60 < current_texture_entry->working_width) {
                local_18 = g_CramPlacedTextureCount + -2;
                if (-1 < local_18) {
                  local_38 = g_CramSortedTextureEntries + local_18;
                  do {
                    iVar25 = current_texture_entry->assigned_map_number;
                    if (((iVar25 == local_38->assigned_map_number) &&
                        (local_38->working_width <= current_texture_entry->working_width)) &&
                       ((iVar18 = current_texture_entry->working_top, iVar18 < local_38->working_top
                        && ((int)local_60 < local_38->working_width)))) {
                      iVar21 = local_38->working_width;
                      if (0 < g_CramRectangleCount) {
                        iVar12 = 0;
                        do {
                          if (((iVar25 == *(int *)((int)&g_CramRectangles[0].left + iVar12)) &&
                              (iVar18 == *(int *)((int)&g_CramRectangles[0].top + iVar12))) &&
                             (iVar21 == *(int *)((int)&g_CramRectangles[0].right + iVar12)))
                          goto LAB_00446f25;
                          iVar12 = iVar12 + 0x28;
                        } while (iVar12 < g_CramRectangleCount * 0x28);
                      }
                      local_58 = 0;
                      local_3c = g_CramRectangles + g_CramRectangleCount;
                      do {
                        iVar12 = g_CramMinPlacementX;
                        iVar17 = g_CramMinPlacementY;
                        if (local_58 != 0) {
                          iVar12 = g_CramMinPlacementY;
                          iVar17 = g_CramMinPlacementX;
                        }
                        iVar16 = g_CramPlacedTextureCount + -1;
                        if (-1 < iVar16) {
                          pSVar24 = g_CramSortedTextureEntries + iVar16;
                          do {
                            if (((pSVar24->assigned_map_number == iVar25) &&
                                (iVar18 < pSVar24->working_top)) &&
                               ((iVar21 < pSVar24->working_width &&
                                ((pSVar24->placement_bottom < iVar12 + iVar18 &&
                                 (pSVar24->working_right < iVar17 + iVar21)))))) break;
                            iVar16 = iVar16 + -1;
                            pSVar24 = pSVar24 + -1;
                          } while (-1 < iVar16);
                        }
                        if (iVar16 < 0) {
                          local_3c->reserved_0x18 = 0;
                          local_3c->active_flag = 1;
                          local_3c->left = iVar25;
                          local_3c->top = iVar18;
                          local_3c->right = iVar21;
                          local_3c->bottom = iVar12 + iVar18;
                          local_3c->orientation = local_58;
                          local_3c->max_dimension = iVar17 + iVar21;
                          g_CramRectangleCount = g_CramRectangleCount + 1;
                          local_3c = local_3c + 1;
                        }
                        local_58 = local_58 + 1;
                      } while (local_58 < 2);
                    }
LAB_00446f25:
                    local_38 = local_38 + -1;
                    local_18 = local_18 + -1;
                  } while (-1 < local_18);
                }
                iVar25 = current_texture_entry->assigned_map_number;
                iVar18 = current_texture_entry->working_top;
                if (0 < g_CramRectangleCount) {
                  iVar21 = 0;
                  do {
                    if (((iVar25 == *(int *)((int)&g_CramRectangles[0].left + iVar21)) &&
                        (iVar18 == *(int *)((int)&g_CramRectangles[0].top + iVar21))) &&
                       (local_60 ==
                        (SCramWorkingEntry *)*(int *)((int)&g_CramRectangles[0].right + iVar21)))
                    goto LAB_00446f96;
                    iVar21 = iVar21 + 0x28;
                  } while (iVar21 < g_CramRectangleCount * 0x28);
                }
                local_34 = g_CramRectangles + g_CramRectangleCount;
                local_50 = 0;
                do {
                  iVar21 = g_CramMinPlacementY;
                  iVar12 = g_CramMinPlacementX;
                  if (local_50 != 0) {
                    iVar21 = g_CramMinPlacementX;
                    iVar12 = g_CramMinPlacementY;
                  }
                  iVar17 = g_CramPlacedTextureCount + -1;
                  if (-1 < iVar17) {
                    pSVar24 = g_CramSortedTextureEntries + iVar17;
                    do {
                      if (((pSVar24->assigned_map_number == iVar25) &&
                          (iVar18 < pSVar24->working_top)) &&
                         (((int)local_60 < pSVar24->working_width &&
                          ((pSVar24->placement_bottom < iVar12 + iVar18 &&
                           (pSVar24->working_right < iVar21 + (int)local_60)))))) break;
                      iVar17 = iVar17 + -1;
                      pSVar24 = pSVar24 + -1;
                    } while (-1 < iVar17);
                  }
                  if (iVar17 < 0) {
                    local_34->reserved_0x18 = 0;
                    local_34->active_flag = 1;
                    local_34->left = iVar25;
                    local_34->top = iVar18;
                    local_34->right = (int)local_60;
                    local_34->max_dimension = iVar21 + (int)local_60;
                    local_34->orientation = local_50;
                    local_34->bottom = iVar12 + iVar18;
                    g_CramRectangleCount = g_CramRectangleCount + 1;
                    local_34 = local_34 + 1;
                  }
                  local_50 = local_50 + 1;
                } while (local_50 < 2);
              }
            }
LAB_00446f96:
            if (g_CramVisualizationMode != 0) {
              shape_cramtex_cpp_visualizeTextureAtlas_FUN_00447f20(0,0,in_stack_ffffff5c);
            }
            iVar25 = shape_cramtex_cpp_runInteractiveAtlasGeneration_FUN_00446160(pSVar10);
            if (0 < iVar25) {
              iVar25 = iVar25 + -1;
            }
            g_CramRectangleCount = local_74;
            if (0 < local_74) {
              iVar18 = 0;
              do {
                if (current_texture_entry ==
                    *(SCramWorkingEntry **)((int)&g_CramRectangles[0].reserved_0x18 + iVar18)) {
                  *(undefined4 *)((int)&g_CramRectangles[0].reserved_0x18 + iVar18) = 0;
                }
                iVar18 = iVar18 + 0x28;
              } while (iVar18 < local_74 * 0x28);
            }
            if (g_CramVisualizationUpdateCounter < 100) {
              g_CramVisualizationUpdateCounter = g_CramVisualizationUpdateCounter + 1;
            }
            else {
              in_stack_ffffff5c = 0x4473fd;
              wincore_winrun_cpp_processWindowMessages_FUN_005f35e0();
              pSVar10 = (SCramWorkingEntry *)0x447402;
              iVar18 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
              fVar7 = (float)(iVar18 - g_CramStartTime) * (float)g_CramTimeTicksToSecondsMultiplier;
              g_CramStartTime = iVar18;
              if (0.0 < fVar7) {
                g_CramIterationCount = (int)((float)g_CramIterationCount + fVar7);
              }
              while( true ) {
                num = 0x447439;
                bVar9 = wincore_winrun_cpp_wasKeyPressed_FUN_005f2f00();
                if (CONCAT31(extraout_var,bVar9) == 0) break;
                uVar13 = wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
                uVar13 = uVar13 & 0xff;
                if (uVar13 == 0x1b) goto LAB_00447500;
                if ((((uVar13 == 0x2e) || (uVar13 == 0x3e)) || (uVar13 == 0x6e)) || (uVar13 == 0x4e)
                   ) {
                  g_CramMapNumber = g_CramMapNumber + 1;
                }
                if (((uVar13 == 0x2c) || (uVar13 == 0x3c)) || ((uVar13 == 0x70 || (uVar13 == 0x50)))
                   ) {
                  g_CramMapNumber = g_CramMapNumber + g_CramTotalMaps + -1;
                }
                if ((uVar13 == 0x73) || (uVar13 == 0x53)) {
                  g_CramDebugStepMode = (int)(g_CramDebugStepMode == 0);
                }
                if ((uVar13 == 0x74) || (uVar13 == 0x54)) {
                  g_CramVisualizationMode = (int)(g_CramVisualizationMode == 0);
                  puVar26 = (undefined1 *)0x0;
                  pSVar10 = (SCramWorkingEntry *)0x4474f8;
                  shape_cramtex_cpp_visualizeTextureAtlas_FUN_00447f20(0,0,in_stack_ffffff70);
                }
                else {
                  puVar26 = (undefined1 *)0x0;
                  pSVar10 = (SCramWorkingEntry *)0x447587;
                  shape_cramtex_cpp_visualizeTextureAtlas_FUN_00447f20(0,0,in_stack_ffffff70);
                }
              }
              if ((0 < g_CramMaxIterationsLimit) &&
                 ((float)g_CramMaxIterationsLimit < (float)g_CramIterationCount)) {
LAB_00447500:
                engine_2d_c_clearInputAndWait_FUN_00403260();
                g_CramAlgorithmState = local_7c;
                g_CramPlacedTextureCount = g_CramPlacedTextureCount + -1;
                return 999999;
              }
              g_CramVisualizationUpdateCounter = 0;
            }
            if (iVar25 != 0) {
              g_CramAlgorithmState = local_84;
              g_CramPlacedTextureCount = g_CramPlacedTextureCount + -1;
              return iVar25;
            }
          }
          local_7c = (void *)((int)local_7c + 1);
          local_30 = (SCramWorkingEntry *)&local_30->height;
        } while ((int)local_7c < (int)num);
      }
    }
    else {
      piVar14 = (int *)pSVar10->width;
      current_texture_entry->assigned_map_number = *piVar14;
      current_texture_entry->placement_flags = piVar14[5];
      current_texture_entry->placement_bottom = piVar14[1];
      current_texture_entry->working_right = piVar14[2];
      if (current_texture_entry->placement_flags == 0) {
        current_texture_entry->effective_width = current_texture_entry->padded_width;
        iVar25 = current_texture_entry->padded_height;
      }
      else {
        current_texture_entry->effective_width = current_texture_entry->padded_height;
        iVar25 = current_texture_entry->padded_width;
      }
      current_texture_entry->effective_height = iVar25;
      current_texture_entry->working_top =
           current_texture_entry->placement_bottom + current_texture_entry->effective_width;
      iVar25 = g_CramPlacedTextureCount;
      iVar21 = 0;
      current_texture_entry->working_width =
           current_texture_entry->working_right + current_texture_entry->effective_height;
      iVar18 = 0;
      if (0 < iVar25) {
        pSVar10 = g_CramSortedTextureEntries;
        do {
          if (iVar18 < pSVar10->working_top) {
            iVar18 = pSVar10->working_top;
          }
          if (iVar18 < pSVar10->working_width) {
            iVar18 = pSVar10->working_width;
          }
          iVar21 = iVar21 + 1;
          pSVar10 = pSVar10 + 1;
        } while (iVar21 < g_CramPlacedTextureCount);
      }
      pSVar24 = (SCramWorkingEntry *)0x30d;
      reference_entry = "..\\shape\\cramtex.cpp";
      bounds_entry = "at";
      pSVar10 = (SCramWorkingEntry *)0x0;
      display_mode = "..\\shape\\cramlog.txt";
      pFVar11 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                          ("..\\shape\\cramlog.txt",(char *)0x0,"at",
                           "..\\shape\\cramtex.cpp",0x30d);
      if (pFVar11 != (FILE *)0x0) {
        crt_stdio_c_fprintf_FUN_005fe6d0(pFVar11,"New best solution found!  thisSquareSize = %d\n",iVar18);
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar11,"..\\shape\\cramtex.cpp",0x310);
      }
      if (iVar18 < g_CramBestSolutionMetric1) {
        iVar25 = 0;
        g_CramCurrentAcceptableSize = iVar18;
        if (0 < g_CramPlacedTextureCount) {
          pSVar19 = g_CramSortedTextureEntries;
          do {
            pSVar19->working_map_id = pSVar19->assigned_map_number;
            pSVar19->rotation_applied = pSVar19->placement_flags;
            pSVar19->final_left = pSVar19->placement_bottom;
            pSVar19->final_top = pSVar19->working_right;
            pSVar19->final_right = pSVar19->working_top;
            iVar18 = g_CramPlacedTextureCount;
            iVar25 = iVar25 + 1;
            pSVar19->final_bottom = pSVar19->working_width;
            pSVar19 = pSVar19 + 1;
          } while (iVar25 < iVar18);
        }
        if (g_CramFillGaps != 0) {
          do {
            bVar9 = false;
            iVar25 = 0;
            if (0 < (int)g_CramTextureCount) {
              local_60 = g_CramSortedTextureEntries;
              do {
                while( true ) {
                  iVar18 = 0;
                  if ((local_60->final_bottom < g_CramCurrentAcceptableSize) &&
                     (iVar21 = shape_cramtex_cpp_findLowestOverlappingY_FUN_00447930(pSVar10),
                     g_CramCurrentAcceptableSize <= iVar21)) {
                    iVar18 = iVar21 - local_60->final_bottom;
                    local_60->final_bottom = local_60->final_bottom + iVar18;
                    local_60->final_top = local_60->final_top + iVar18;
                  }
                  if ((local_60->final_right < g_CramCurrentAcceptableSize) &&
                     (iVar21 = shape_cramtex_cpp_findLeftmostOverlappingX_FUN_00447a10(pSVar10),
                     g_CramCurrentAcceptableSize <= iVar21)) {
                    iVar18 = iVar21 - local_60->final_right;
                    local_60->final_left = local_60->final_left + iVar18;
                    local_60->final_right = local_60->final_right + iVar18;
                  }
                  if (iVar18 < 1) break;
                  bVar9 = true;
                }
                local_60 = local_60 + 1;
                iVar25 = iVar25 + 1;
              } while (iVar25 < (int)g_CramTextureCount);
            }
          } while (bVar9);
          iVar25 = 0;
          do {
            iVar18 = 0;
            bVar9 = false;
            if (0 < (int)g_CramTextureCount) {
              pSVar19 = g_CramSortedTextureEntries;
              do {
                iVar21 = shape_cramtex_cpp_findRightmostOverlappingX_FUN_004479a0(pSVar10);
                iVar21 = iVar21 - pSVar19->final_left;
                iVar12 = shape_cramtex_cpp_findLeftmostOverlappingX_FUN_00447a10
                                   ((SCramWorkingEntry *)bounds_entry);
                iVar12 = (int)(puVar26 + (iVar12 - pSVar19->final_right)) / 2;
                if (iVar12 != 0) {
                  pSVar19->final_left = pSVar19->final_left + iVar12;
                  pSVar19->final_right = pSVar19->final_right + iVar12;
                }
                display_mode = (char *)0x446780;
                shape_cramtex_cpp_findHighestOverlappingY_FUN_004478c0
                          ((SCramWorkingEntry *)reference_entry);
                pSVar10 = (SCramWorkingEntry *)0x446792;
                bounds_entry = (char *)pSVar19;
                iVar12 = shape_cramtex_cpp_findLowestOverlappingY_FUN_00447930(pSVar24);
                iVar21 = (iVar21 + (iVar12 - pSVar19->final_bottom)) / 2;
                if (iVar21 != 0) {
                  bVar9 = true;
                  pSVar19->final_top = pSVar19->final_top + iVar21;
                  pSVar19->final_bottom = pSVar19->final_bottom + iVar21;
                }
                iVar18 = iVar18 + 1;
                pSVar19 = pSVar19 + 1;
              } while (iVar18 < (int)g_CramTextureCount);
            }
          } while ((bVar9) && (iVar25 = iVar25 + 1, iVar25 < 10));
          local_40 = (SCramRectangle *)0x0;
          do {
            if (((uint)local_40 & 1) == 0) {
              uVar13 = 0;
              puVar26 = &DAT_00000001;
              uVar23 = g_CramTextureCount;
            }
            else {
              puVar26 = (undefined1 *)0xffffffff;
              uVar13 = g_CramTextureCount - 1;
              uVar23 = 0xffffffff;
            }
            for (; uVar13 != uVar23; uVar13 = uVar13 + (int)puVar26) {
              pSVar19 = g_CramSortedTextureEntries + uVar13;
              iVar25 = shape_cramtex_cpp_findRightmostOverlappingX_FUN_004479a0(pSVar10);
              g_CramSortedTextureEntries[uVar13].final_left =
                   (g_CramSortedTextureEntries[uVar13].final_left + iVar25) / 2;
              iVar25 = shape_cramtex_cpp_findHighestOverlappingY_FUN_004478c0
                                 ((SCramWorkingEntry *)bounds_entry);
              g_CramSortedTextureEntries[uVar13].final_top =
                   (g_CramSortedTextureEntries[uVar13].final_top + iVar25) / 2;
              display_mode = (char *)0x446850;
              iVar25 = shape_cramtex_cpp_findLeftmostOverlappingX_FUN_00447a10
                                 ((SCramWorkingEntry *)reference_entry);
              g_CramSortedTextureEntries[uVar13].final_right =
                   (iVar25 + g_CramSortedTextureEntries[uVar13].final_right + 1) / 2;
              pSVar10 = (SCramWorkingEntry *)0x44686b;
              iVar25 = shape_cramtex_cpp_findLowestOverlappingY_FUN_00447930(pSVar24);
              g_CramSortedTextureEntries[uVar13].final_bottom =
                   (iVar25 + g_CramSortedTextureEntries[uVar13].final_bottom + 1) / 2;
              bounds_entry = (char *)pSVar19;
            }
            local_40 = (SCramRectangle *)((int)local_40 + 1);
          } while ((int)local_40 < 10);
          iVar25 = 0;
          if (0 < (int)g_CramTextureCount) {
            pSVar24 = g_CramSortedTextureEntries;
            do {
              do {
                iVar18 = shape_cramtex_cpp_findHighestOverlappingY_FUN_004478c0(pSVar10);
                iVar18 = pSVar24->final_top - iVar18;
                pSVar24->final_bottom = pSVar24->final_bottom - iVar18;
                pSVar24->final_top = pSVar24->final_top - iVar18;
                display_mode = (char *)pSVar24;
                iVar18 = shape_cramtex_cpp_findRightmostOverlappingX_FUN_004479a0
                                   ((SCramWorkingEntry *)bounds_entry);
                iVar18 = pSVar24->final_left - iVar18;
                pSVar24->final_right = pSVar24->final_right - iVar18;
                pSVar24->final_left = pSVar24->final_left - iVar18;
              } while (0 < iVar18);
              iVar25 = iVar25 + 1;
              pSVar24 = pSVar24 + 1;
            } while (iVar25 < (int)g_CramTextureCount);
          }
          iVar25 = 0;
          if (0 < (int)g_CramTextureCount) {
            pSVar24 = g_CramSortedTextureEntries;
            do {
              iVar18 = shape_cramtex_cpp_findLeftmostOverlappingX_FUN_00447a10(pSVar10);
              iVar25 = iVar25 + 1;
              pSVar24->final_right = iVar18;
              display_mode = (char *)pSVar24;
              iVar18 = shape_cramtex_cpp_findLowestOverlappingY_FUN_00447930
                                 ((SCramWorkingEntry *)bounds_entry);
              uVar13 = g_CramTextureCount;
              pSVar24->final_bottom = iVar18;
              pSVar24 = pSVar24 + 1;
            } while (iVar25 < (int)uVar13);
          }
        }
        shape_cramtex_cpp_visualizeTextureAtlas_FUN_00447f20(0,0,(int)display_mode);
        pFVar11 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                            ("..\\shape\\cramlog.txt",(char *)0x0,"at",
                             "..\\shape\\cramtex.cpp",0x359);
        if (pFVar11 != (FILE *)0x0) {
          crt_stdio_c_fprintf_FUN_005fe6d0(pFVar11,"Checking if solution acceptable.\n");
          crt_stdio_c_fprintf_FUN_005fe6d0
                    (pFVar11,"  bestSquareSize = %d, acceptableSize = %d\n",g_CramCurrentAcceptableSize,
                     g_CramAcceptableSize);
          shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar11,"..\\shape\\cramtex.cpp",0x35d);
        }
        if (g_CramCurrentAcceptableSize <= g_CramAcceptableSize) {
          g_CramAlgorithmState = puVar26;
          g_CramPlacedTextureCount = g_CramPlacedTextureCount + -1;
          return 999999;
        }
        iVar25 = g_CramAcceptableSize + g_CramCurrentAcceptableSize * 3;
        iVar18 = iVar25 >> 0x1f;
        g_CramBestSolutionMetric1 = (int)((iVar25 + iVar18 * -4) - (uint)(iVar18 << 1 < 0)) >> 2;
        g_CramBestSolutionMetric2 = g_CramBestSolutionMetric1 - g_CramOptimalPlacement;
        iVar25 = 0;
        if (0 < g_CramRectangleCount) {
          pSVar20 = g_CramRectangles;
          do {
            if (pSVar20->orientation == 0) {
              if (pSVar20->top + g_CramMinPlacementX < g_CramBestSolutionMetric1) {
                iVar18 = pSVar20->right + g_CramMinPlacementY;
                goto joined_r0x00446b0b;
              }
LAB_00446a27:
              pSVar20->reserved_0x18 = g_CramInvalidMarker;
            }
            else {
              if (g_CramBestSolutionMetric1 <= pSVar20->top + g_CramMinPlacementY)
              goto LAB_00446a27;
              iVar18 = pSVar20->right + g_CramMinPlacementX;
joined_r0x00446b0b:
              if (g_CramBestSolutionMetric1 <= iVar18) goto LAB_00446a27;
            }
            iVar25 = iVar25 + 1;
            pSVar20 = pSVar20 + 1;
          } while (iVar25 < g_CramRectangleCount);
        }
        iVar25 = 1;
        if (1 < g_CramPlacedTextureCount) {
          iVar18 = 0x4c;
          do {
            if ((g_CramBestSolutionMetric1 <=
                 *(int *)((int)&g_CramSortedTextureEntries[0].working_top + iVar18)) ||
               (g_CramBestSolutionMetric1 <=
                *(int *)((int)&g_CramSortedTextureEntries[0].working_width + iVar18))) {
              g_CramAlgorithmState = puVar26;
              g_CramPlacedTextureCount = g_CramPlacedTextureCount + -1;
              return g_CramPlacedTextureCount - iVar25;
            }
            iVar18 = iVar18 + 0x4c;
            iVar25 = iVar25 + 1;
          } while (iVar18 < g_CramPlacedTextureCount * 0x4c);
        }
      }
      else {
        pFVar11 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                            ("..\\shape\\cramlog.txt",(char *)0x0,"at",
                             "..\\shape\\cramtex.cpp",0x318);
        if (pFVar11 != (FILE *)0x0) {
          crt_stdio_c_fprintf_FUN_005fe6d0(pFVar11,"\n\nCRAMTEX BUG!\n");
          crt_stdio_c_fprintf_FUN_005fe6d0
                    (pFVar11,"bestSquareSize = %d, thisSquareSize = %d, mustBeatSquareSize = %d\n",g_CramCurrentAcceptableSize,iVar18,
                     g_CramBestSolutionMetric1);
          crt_stdio_c_fprintf_FUN_005fe6d0(pFVar11,"acceptableSize = %d\n",g_CramAcceptableSize)
          ;
          crt_stdio_c_fprintf_FUN_005fe6d0(pFVar11,"targetPadSize = %d\n",g_CramAtlasHeight);
          crt_stdio_c_fprintf_FUN_005fe6d0(pFVar11,"pad = %d\n",g_CramPaddingCalculation);
          crt_stdio_c_fprintf_FUN_005fe6d0(pFVar11,"Best:\n");
          if (0 < (int)g_CramTextureCount) {
            pSVar10 = g_CramSortedTextureEntries;
            iVar25 = 0;
            do {
              piVar14 = &pSVar10->rotation_applied;
              piVar1 = &pSVar10->final_bottom;
              piVar2 = &pSVar10->final_right;
              piVar3 = &pSVar10->final_top;
              piVar4 = &pSVar10->final_left;
              piVar5 = &pSVar10->working_map_id;
              piVar6 = &pSVar10->height;
              piVar8 = &pSVar10->width;
              pSVar10 = pSVar10 + 1;
              iVar18 = iVar25 + 1;
              crt_stdio_c_fprintf_FUN_005fe6d0
                        (pFVar11,"%3d: %5dx%-5d  Map %d (%5d,%-5d)-(%5d,%-5d)    Rotated: %d\n",
                         "%3d: %5dx%-5d  Map %d (%5d,%-5d)-(%5d,%-5d)    Rotated: %d\n",iVar25,*piVar8,*piVar6,*piVar5,*piVar4,
                         *piVar3,*piVar2,*piVar1,*piVar14);
              iVar25 = iVar18;
            } while (iVar18 < (int)g_CramTextureCount);
          }
          crt_stdio_c_fprintf_FUN_005fe6d0(pFVar11,"Current:\n");
          if (0 < (int)g_CramTextureCount) {
            pSVar10 = g_CramSortedTextureEntries;
            iVar25 = 0;
            do {
              piVar14 = &pSVar10->rotation_applied;
              piVar1 = &pSVar10->working_width;
              piVar2 = &pSVar10->working_top;
              piVar3 = &pSVar10->working_right;
              piVar4 = &pSVar10->placement_bottom;
              piVar5 = &pSVar10->assigned_map_number;
              piVar6 = &pSVar10->height;
              piVar8 = &pSVar10->width;
              pSVar10 = pSVar10 + 1;
              iVar18 = iVar25 + 1;
              crt_stdio_c_fprintf_FUN_005fe6d0
                        (pFVar11,"%3d: %5dx%-5d  Map %d (%5d,%-5d)-(%5d,%-5d)    Rotated: %d\n",
                         "%3d: %5dx%-5d  Map %d (%5d,%-5d)-(%5d,%-5d)    Rotated: %d\n",iVar25,*piVar8,*piVar6,*piVar5,*piVar4,
                         *piVar3,*piVar2,*piVar1,*piVar14);
              iVar25 = iVar18;
            } while (iVar18 < (int)g_CramTextureCount);
          }
          shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar11,"..\\shape\\cramtex.cpp",0x32f);
        }
      }
    }
    g_CramAlgorithmState = puVar26;
    g_CramPlacedTextureCount = g_CramPlacedTextureCount + -1;
  }
  return 0;
}


// Assembly code:
// 00446160: PUSH 0xdc
//   Label: shape_cramtex.cpp_runInteractiveAtlasGeneration_FUN_00446160
// 00446165: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 0044616a: PUSH EBX
// 0044616b: PUSH ESI
// 0044616c: PUSH EDI
// 0044616d: PUSH EBP
// 0044616e: MOV EBP,ESP
// 00446170: SUB ESP,0x9c
// 00446176: AND ESP,0xfffffff8
// 00446179: MOV EAX,[0x00887940]
//   XREF to: 00887940 (READ)
// 0044617e: XOR EDX,EDX
// 00446180: MOV EBX,dword ptr [0x0084a860]
//   XREF to: 0084a860 (READ)
// 00446186: MOV dword ptr [ESP + 0x8],EDX
// 0044618a: MOV dword ptr [ESP + 0xc],EDX
// 0044618e: MOV dword ptr [ESP + 0x4],EAX
// 00446192: TEST EBX,EBX
// 00446194: JLE 0x004461c7
//   XREF to: 004461c7 (CONDITIONAL_JUMP)
// 00446196: MOV ESI,0x840c14
//   XREF to: 00840c14 (DATA)
// 0044619b: MOV EDI,EAX
// 0044619d: MOV EDX,ESI
//   Label: LAB_0044619d
// 0044619f: MOV EAX,dword ptr [ESI + 0x18]
//   XREF to: 00840c2c (READ)
//   XREF to: 00840c54 (READ)
// 004461a2: MOV dword ptr [ESI + 0x24],0x0
//   XREF to: 00840c38 (WRITE)
//   XREF to: 00840c60 (WRITE)
// 004461a9: TEST EAX,EAX
// 004461ab: JZ 0x00446502
//   XREF to: 00446502 (CONDITIONAL_JUMP)
// 004461b1: MOV EAX,dword ptr [ESP + 0xc]
//   Label: LAB_004461b1
// 004461b5: MOV EDX,dword ptr [0x0084a860]
//   XREF to: 0084a860 (READ)
// 004461bb: INC EAX
// 004461bc: ADD ESI,0x28
// 004461bf: MOV dword ptr [ESP + 0xc],EAX
// 004461c3: CMP EAX,EDX
// 004461c5: JL 0x0044619d
//   XREF to: 0044619d (CONDITIONAL_JUMP)
// 004461c7: MOV ECX,dword ptr [ESP + 0x8]
//   Label: LAB_004461c7
// 004461cb: CMP ECX,0x1
// 004461ce: JL 0x004464f9
//   XREF to: 004464f9 (CONDITIONAL_JUMP)
// 004461d4: MOV EAX,[0x00887940]
//   XREF to: 00887940 (READ)
// 004461d9: MOV dword ptr [ESP + 0x10],EAX
// 004461dd: MOV EBX,dword ptr [0x0084a85c]
//   XREF to: 0084a85c (READ)
// 004461e3: MOV EDX,dword ptr [ESP + 0x10]
// 004461e7: LEA EAX,[ECX*0x4 + 0x0]
// 004461ee: INC EBX
// 004461ef: ADD EDX,EAX
// 004461f1: MOV dword ptr [0x0084a85c],EBX
//   XREF to: 0084a85c (WRITE)
// 004461f7: MOV dword ptr [0x00887940],EDX
//   XREF to: 00887940 (WRITE)
// 004461fd: CMP ECX,0x1
// 00446200: JLE 0x00446262
//   XREF to: 00446262 (CONDITIONAL_JUMP)
// 00446202: XOR ESI,ESI
// 00446204: TEST ECX,ECX
// 00446206: JLE 0x00446249
//   XREF to: 00446249 (CONDITIONAL_JUMP)
// 00446208: MOV ECX,dword ptr [ESP + 0x4]
// 0044620c: MOV EAX,dword ptr [ECX]
//   Label: LAB_0044620c
// 0044620e: MOV EDX,dword ptr [EAX + 0x4]
// 00446211: MOV EBX,dword ptr [EAX + 0x8]
// 00446214: ADD EDX,EBX
// 00446216: MOV dword ptr [EAX + 0x24],EDX
// 00446219: MOV EBX,dword ptr [EAX + 0x20]
// 0044621c: MOV EDX,dword ptr [EAX + 0x1c]
// 0044621f: LEA EDI,[EAX + 0x24]
// 00446222: CMP EDX,EBX
// 00446224: JLE 0x004465da
//   XREF to: 004465da (CONDITIONAL_JUMP)
// 0044622a: LEA EDX,[EDX + EDX*0x4]
//   Label: LAB_0044622a
// 0044622d: MOV EBX,dword ptr [EAX + 0x1c]
// 00446230: MOV EAX,dword ptr [EAX + 0x20]
// 00446233: ADD EDX,EBX
// 00446235: ADD ECX,0x4
// 00446238: ADD EAX,EDX
// 0044623a: MOV EDX,dword ptr [EDI]
// 0044623c: INC ESI
// 0044623d: ADD EDX,EAX
// 0044623f: MOV EBX,dword ptr [ESP + 0x8]
// 00446243: MOV dword ptr [EDI],EDX
// 00446245: CMP ESI,EBX
// 00446247: JL 0x0044620c
//   XREF to: 0044620c (CONDITIONAL_JUMP)
// 00446249: PUSH 0x446140
//   Label: LAB_00446249
//   XREF to: 00446140 (DATA)
// 0044624e: PUSH 0x4
// 00446250: MOV ESI,dword ptr [ESP + 0x10]
// 00446254: PUSH ESI
// 00446255: MOV EDI,dword ptr [ESP + 0x10]
// 00446259: PUSH EDI
// 0044625a: CALL crt_stdlib.c_qsort_FUN_005fdf38
//   XREF to: 005fdf38 (UNCONDITIONAL_CALL)
// 0044625f: ADD ESP,0x10
// 00446262: MOV ESI,dword ptr [ESP + 0x8]
//   Label: LAB_00446262
// 00446266: XOR EBX,EBX
// 00446268: TEST ESI,ESI
// 0044626a: JLE 0x00446290
//   XREF to: 00446290 (CONDITIONAL_JUMP)
// 0044626c: MOV ESI,dword ptr [ESP + 0x4]
// 00446270: MOV EDI,dword ptr [ESP + 0x8]
// 00446274: LEA EDX,[EBX + 0x5]
//   Label: LAB_00446274
// 00446277: MOV EAX,dword ptr [ESI]
// 00446279: ADD ESI,0x4
// 0044627c: INC EBX
// 0044627d: MOV dword ptr [EAX + 0x24],EDX
// 00446280: CMP EBX,EDI
// 00446282: JL 0x00446274
//   XREF to: 00446274 (CONDITIONAL_JUMP)
// 00446284: LEA EAX,[EAX]
// 0044628a: LEA EDX,[EDX]
// 00446290: MOV EDX,dword ptr [0x0084a854]
//   Label: LAB_00446290
//   XREF to: 0084a854 (READ)
// 00446296: CMP EDX,dword ptr [0x0084a85c]
//   XREF to: 0084a85c (READ)
// 0044629c: JG 0x00446b4b
//   XREF to: 00446b4b (CONDITIONAL_JUMP)
// 004462a2: MOV EAX,dword ptr [ESP + 0x4]
// 004462a6: MOV EAX,dword ptr [EAX]
// 004462a8: MOV EBX,dword ptr [EBP + 0x14]
// 004462ab: MOV EDX,dword ptr [EAX]
// 004462ad: MOV dword ptr [EBX + 0x10],EDX
// 004462b0: MOV EDX,dword ptr [EAX + 0x14]
// 004462b3: MOV dword ptr [EBX + 0x40],EDX
// 004462b6: MOV EDX,dword ptr [EAX + 0x4]
// 004462b9: MOV dword ptr [EBX + 0x1c],EDX
// 004462bc: MOV EAX,dword ptr [EAX + 0x8]
// 004462bf: MOV ESI,dword ptr [EBX + 0x40]
// 004462c2: MOV dword ptr [EBX + 0x20],EAX
// 004462c5: TEST ESI,ESI
// 004462c7: JZ 0x004465e1
//   XREF to: 004465e1 (CONDITIONAL_JUMP)
// 004462cd: MOV EAX,dword ptr [EBX + 0xc]
// 004462d0: MOV dword ptr [EBX + 0x14],EAX
// 004462d3: MOV EAX,dword ptr [EBX + 0x8]
// 004462d6: MOV dword ptr [EBX + 0x18],EAX
//   Label: LAB_004462d6
// 004462d9: MOV EDI,dword ptr [EBX + 0x14]
// 004462dc: MOV EAX,dword ptr [EBX + 0x1c]
// 004462df: ADD EAX,EDI
// 004462e1: MOV dword ptr [EBX + 0x24],EAX
// 004462e4: MOV EDX,dword ptr [EBX + 0x18]
// 004462e7: MOV EAX,dword ptr [EBX + 0x20]
// 004462ea: MOV ECX,dword ptr [0x0084a85c]
//   XREF to: 0084a85c (READ)
// 004462f0: ADD EAX,EDX
// 004462f2: XOR ESI,ESI
// 004462f4: MOV dword ptr [EBX + 0x28],EAX
// 004462f7: XOR EBX,EBX
// 004462f9: TEST ECX,ECX
// 004462fb: JLE 0x00446324
//   XREF to: 00446324 (CONDITIONAL_JUMP)
// 004462fd: MOV EAX,0x83c1dc
//   XREF to: 0083c1dc (DATA)
// 00446302: MOV EDI,dword ptr [EAX + 0x24]
//   Label: LAB_00446302
//   XREF to: 0083c200 (READ)
//   XREF to: 0083c24c (READ)
// 00446305: MOV EDX,EAX
// 00446307: CMP EBX,EDI
// 00446309: JGE 0x0044630d
//   XREF to: 0044630d (CONDITIONAL_JUMP)
// 0044630b: MOV EBX,EDI
// 0044630d: MOV ECX,dword ptr [EDX + 0x28]
//   Label: LAB_0044630d
//   XREF to: 0083c204 (READ)
//   XREF to: 0083c250 (READ)
// 00446310: CMP EBX,ECX
// 00446312: JGE 0x00446316
//   XREF to: 00446316 (CONDITIONAL_JUMP)
// 00446314: MOV EBX,ECX
// 00446316: MOV EDI,dword ptr [0x0084a85c]
//   Label: LAB_00446316
//   XREF to: 0084a85c (READ)
// 0044631c: INC ESI
// 0044631d: ADD EAX,0x4c
// 00446320: CMP ESI,EDI
// 00446322: JL 0x00446302
//   XREF to: 00446302 (CONDITIONAL_JUMP)
// 00446324: PUSH 0x30d
//   Label: LAB_00446324
// 00446329: PUSH 0x6197cb
//   XREF to: 006197cb (DATA)
// 0044632e: PUSH 0x6197e0
//   XREF to: 006197e0 (DATA)
// 00446333: PUSH 0x0
// 00446335: PUSH 0x6197e3
//   XREF to: 006197e3 (DATA)
// 0044633a: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 0044633f: MOV ESI,EAX
// 00446341: ADD ESP,0x14
// 00446344: TEST EAX,EAX
// 00446346: JZ 0x0044636a
//   XREF to: 0044636a (CONDITIONAL_JUMP)
// 00446348: PUSH EBX
// 00446349: PUSH 0x6197f8
//   XREF to: 006197f8 (DATA)
// 0044634e: PUSH EAX
// 0044634f: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00446354: ADD ESP,0xc
// 00446357: PUSH 0x310
// 0044635c: PUSH 0x619827
//   XREF to: 00619827 (DATA)
// 00446361: PUSH ESI
// 00446362: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 00446367: ADD ESP,0xc
// 0044636a: CMP EBX,dword ptr [0x0084a888]
//   Label: LAB_0044636a
//   XREF to: 0084a888 (READ)
// 00446370: JL 0x004465ef
//   XREF to: 004465ef (CONDITIONAL_JUMP)
// 00446376: PUSH 0x318
// 0044637b: PUSH 0x61983c
//   XREF to: 0061983c (DATA)
// 00446380: PUSH 0x619851
//   XREF to: 00619851 (DATA)
// 00446385: PUSH 0x0
// 00446387: PUSH 0x619854
//   XREF to: 00619854 (DATA)
// 0044638c: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 00446391: MOV ESI,EAX
// 00446393: ADD ESP,0x14
// 00446396: MOV EDI,EAX
// 00446398: TEST EAX,EAX
// 0044639a: JZ 0x004464e3
//   XREF to: 004464e3 (CONDITIONAL_JUMP)
// 004463a0: PUSH 0x619869
//   XREF to: 00619869 (DATA)
// 004463a5: PUSH EAX
// 004463a6: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004463ab: ADD ESP,0x8
// 004463ae: MOV ECX,dword ptr [0x0084a888]
//   XREF to: 0084a888 (READ)
// 004463b4: PUSH ECX
// 004463b5: PUSH EBX
// 004463b6: MOV EBX,dword ptr [0x0084a884]
//   XREF to: 0084a884 (READ)
// 004463bc: PUSH EBX
// 004463bd: PUSH 0x619879
//   XREF to: 00619879 (DATA)
// 004463c2: PUSH ESI
// 004463c3: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004463c8: ADD ESP,0x14
// 004463cb: MOV EAX,[0x0084a874]
//   XREF to: 0084a874 (READ)
// 004463d0: PUSH EAX
// 004463d1: PUSH 0x6198bc
//   XREF to: 006198bc (DATA)
// 004463d6: PUSH ESI
// 004463d7: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004463dc: ADD ESP,0xc
// 004463df: MOV EDX,dword ptr [0x0084a87c]
//   XREF to: 0084a87c (READ)
// 004463e5: PUSH EDX
// 004463e6: PUSH 0x6198d1
//   XREF to: 006198d1 (DATA)
// 004463eb: PUSH ESI
// 004463ec: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004463f1: ADD ESP,0xc
// 004463f4: MOV ECX,dword ptr [0x0084a880]
//   XREF to: 0084a880 (READ)
// 004463fa: PUSH ECX
// 004463fb: PUSH 0x6198e5
//   XREF to: 006198e5 (DATA)
// 00446400: PUSH ESI
// 00446401: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00446406: ADD ESP,0xc
// 00446409: PUSH 0x6198ef
//   XREF to: 006198ef (DATA)
// 0044640e: PUSH ESI
// 0044640f: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00446414: MOV EBX,dword ptr [0x0084a854]
//   XREF to: 0084a854 (READ)
// 0044641a: ADD ESP,0x8
// 0044641d: XOR ESI,ESI
// 0044641f: TEST EBX,EBX
// 00446421: JLE 0x00446470
//   XREF to: 00446470 (CONDITIONAL_JUMP)
// 00446423: MOV EBX,0x83c1dc
//   XREF to: 0083c1dc (DATA)
// 00446428: MOV EAX,dword ptr [EBX + 0x44]
//   Label: LAB_00446428
//   XREF to: 0083c220 (READ)
//   XREF to: 0083c26c (READ)
// 0044642b: PUSH EAX
// 0044642c: MOV EDX,dword ptr [EBX + 0x3c]
//   XREF to: 0083c218 (READ)
//   XREF to: 0083c264 (READ)
// 0044642f: PUSH EDX
// 00446430: MOV ECX,dword ptr [EBX + 0x38]
//   XREF to: 0083c214 (READ)
//   XREF to: 0083c260 (READ)
// 00446433: PUSH ECX
// 00446434: MOV EAX,dword ptr [EBX + 0x34]
//   XREF to: 0083c210 (READ)
//   XREF to: 0083c25c (READ)
// 00446437: PUSH EAX
// 00446438: MOV EDX,dword ptr [EBX + 0x30]
//   XREF to: 0083c20c (READ)
//   XREF to: 0083c258 (READ)
// 0044643b: PUSH EDX
// 0044643c: MOV ECX,dword ptr [EBX + 0x2c]
//   XREF to: 0083c208 (READ)
//   XREF to: 0083c254 (READ)
// 0044643f: PUSH ECX
// 00446440: MOV EAX,dword ptr [EBX + 0x4]
//   XREF to: 0083c1e0 (READ)
//   XREF to: 0083c22c (READ)
// 00446443: PUSH EAX
// 00446444: MOV EDX,dword ptr [EBX]
//   XREF to: 0083c1dc (READ)
//   XREF to: 0083c228 (READ)
// 00446446: PUSH EDX
// 00446447: PUSH ESI
// 00446448: PUSH 0x6198f6
//   XREF to: 006198f6 (DATA)
// 0044644d: PUSH EDI
// 0044644e: ADD EBX,0x4c
// 00446451: INC ESI
// 00446452: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00446457: MOV ECX,dword ptr [0x0084a854]
//   XREF to: 0084a854 (READ)
// 0044645d: ADD ESP,0x2c
// 00446460: CMP ESI,ECX
// 00446462: JL 0x00446428
//   XREF to: 00446428 (CONDITIONAL_JUMP)
// 00446464: LEA EAX,[EAX]
// 0044646a: LEA EDX,[EDX]
// 00446470: PUSH 0x619932
//   Label: LAB_00446470
//   XREF to: 00619932 (DATA)
// 00446475: PUSH EDI
// 00446476: XOR ESI,ESI
// 00446478: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0044647d: MOV EBX,dword ptr [0x0084a854]
//   XREF to: 0084a854 (READ)
// 00446483: ADD ESP,0x8
// 00446486: TEST EBX,EBX
// 00446488: JLE 0x004464d0
//   XREF to: 004464d0 (CONDITIONAL_JUMP)
// 0044648a: MOV EBX,0x83c1dc
//   XREF to: 0083c1dc (DATA)
// 0044648f: MOV EAX,dword ptr [EBX + 0x44]
//   Label: LAB_0044648f
//   XREF to: 0083c220 (READ)
//   XREF to: 0083c26c (READ)
// 00446492: PUSH EAX
// 00446493: MOV EDX,dword ptr [EBX + 0x28]
//   XREF to: 0083c204 (READ)
//   XREF to: 0083c250 (READ)
// 00446496: PUSH EDX
// 00446497: MOV ECX,dword ptr [EBX + 0x24]
//   XREF to: 0083c200 (READ)
//   XREF to: 0083c24c (READ)
// 0044649a: PUSH ECX
// 0044649b: MOV EAX,dword ptr [EBX + 0x20]
//   XREF to: 0083c1fc (READ)
//   XREF to: 0083c248 (READ)
// 0044649e: PUSH EAX
// 0044649f: MOV EDX,dword ptr [EBX + 0x1c]
//   XREF to: 0083c1f8 (READ)
//   XREF to: 0083c244 (READ)
// 004464a2: PUSH EDX
// 004464a3: MOV ECX,dword ptr [EBX + 0x10]
//   XREF to: 0083c1ec (READ)
//   XREF to: 0083c238 (READ)
// 004464a6: PUSH ECX
// 004464a7: MOV EAX,dword ptr [EBX + 0x4]
//   XREF to: 0083c1e0 (READ)
//   XREF to: 0083c22c (READ)
// 004464aa: PUSH EAX
// 004464ab: MOV EDX,dword ptr [EBX]
//   XREF to: 0083c1dc (READ)
//   XREF to: 0083c228 (READ)
// 004464ad: PUSH EDX
// 004464ae: PUSH ESI
// 004464af: PUSH 0x61993c
//   XREF to: 0061993c (DATA)
// 004464b4: PUSH EDI
// 004464b5: ADD EBX,0x4c
// 004464b8: INC ESI
// 004464b9: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004464be: MOV ECX,dword ptr [0x0084a854]
//   XREF to: 0084a854 (READ)
// 004464c4: ADD ESP,0x2c
// 004464c7: CMP ESI,ECX
// 004464c9: JL 0x0044648f
//   XREF to: 0044648f (CONDITIONAL_JUMP)
// 004464cb: LEA EAX,[EAX]
// 004464ce: MOV ECX,ECX
// 004464d0: PUSH 0x32f
//   Label: LAB_004464d0
// 004464d5: PUSH 0x619978
//   XREF to: 00619978 (DATA)
// 004464da: PUSH EDI
// 004464db: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004464e0: ADD ESP,0xc
// 004464e3: MOV ESI,dword ptr [0x0084a85c]
//   Label: LAB_004464e3
//   XREF to: 0084a85c (READ)
// 004464e9: MOV EAX,dword ptr [ESP + 0x10]
// 004464ed: DEC ESI
// 004464ee: MOV [0x00887940],EAX
//   XREF to: 00887940 (WRITE)
// 004464f3: MOV dword ptr [0x0084a85c],ESI
//   XREF to: 0084a85c (WRITE)
// 004464f9: XOR EAX,EAX
//   Label: LAB_004464f9
// 004464fb: MOV ESP,EBP
// 004464fd: POP EBP
// 004464fe: POP EDI
// 004464ff: POP ESI
// 00446500: POP EBX
// 00446501: RET
// 00446502: MOV ECX,dword ptr [EBP + 0x14]
//   Label: LAB_00446502
// 00446505: MOV EAX,dword ptr [EBP + 0x14]
// 00446508: MOV EBX,dword ptr [ECX + 0xc]
// 0044650b: CMP EBX,dword ptr [EAX + 0x8]
// 0044650e: JNZ 0x0044651a
//   XREF to: 0044651a (CONDITIONAL_JUMP)
// 00446510: CMP dword ptr [ESI + 0x14],0x0
//   XREF to: 00840c50 (READ)
// 00446514: JNZ 0x004461b1
//   XREF to: 004461b1 (CONDITIONAL_JUMP)
// 0044651a: CMP dword ptr [EDX + 0x14],0x0
//   Label: LAB_0044651a
//   XREF to: 00840c50 (READ)
// 0044651e: JZ 0x004465b2
//   XREF to: 004465b2 (CONDITIONAL_JUMP)
// 00446524: MOV ECX,dword ptr [EBP + 0x14]
// 00446527: MOV EAX,dword ptr [EDX + 0x4]
//   XREF to: 00840c40 (READ)
// 0044652a: ADD EAX,dword ptr [ECX + 0xc]
// 0044652d: MOV ECX,dword ptr [0x0084a888]
//   XREF to: 0084a888 (READ)
// 00446533: MOV dword ptr [EDX + 0x1c],EAX
//   XREF to: 00840c58 (WRITE)
// 00446536: CMP EAX,ECX
// 00446538: JGE 0x004461b1
//   XREF to: 004461b1 (CONDITIONAL_JUMP)
// 0044653e: MOV ECX,dword ptr [EBP + 0x14]
// 00446541: MOV EAX,dword ptr [EDX + 0x8]
//   XREF to: 00840c44 (READ)
// 00446544: ADD EAX,dword ptr [ECX + 0x8]
// 00446547: MOV ECX,dword ptr [0x0084a888]
//   Label: LAB_00446547
//   XREF to: 0084a888 (READ)
// 0044654d: MOV dword ptr [EDX + 0x20],EAX
//   XREF to: 00840c5c (WRITE)
// 00446550: CMP EAX,ECX
// 00446552: JGE 0x004461b1
//   XREF to: 004461b1 (CONDITIONAL_JUMP)
// 00446558: MOV ECX,dword ptr [0x0084a85c]
//   XREF to: 0084a85c (READ)
// 0044655e: DEC ECX
// 0044655f: TEST ECX,ECX
// 00446561: JL 0x0044659e
//   XREF to: 0044659e (CONDITIONAL_JUMP)
// 00446563: IMUL EAX,ECX,0x4c
// 00446566: ADD EAX,0x83c1dc
//   XREF to: 0083c1dc (DATA)
// 0044656b: MOV EBX,dword ptr [EDX]
//   Label: LAB_0044656b
//   XREF to: 00840c3c (READ)
// 0044656d: CMP EBX,dword ptr [EAX + 0x10]
//   XREF to: 0083c1ec (DATA)
//   XREF to: 0083c1a0 (DATA)
// 00446570: JNZ 0x00446596
//   XREF to: 00446596 (CONDITIONAL_JUMP)
// 00446572: MOV EBX,dword ptr [EDX + 0x4]
//   XREF to: 00840c40 (READ)
// 00446575: CMP EBX,dword ptr [EAX + 0x24]
//   XREF to: 0083c200 (DATA)
//   XREF to: 0083c1b4 (DATA)
// 00446578: JGE 0x00446596
//   XREF to: 00446596 (CONDITIONAL_JUMP)
// 0044657a: MOV EBX,dword ptr [EDX + 0x8]
//   XREF to: 00840c44 (READ)
// 0044657d: CMP EBX,dword ptr [EAX + 0x28]
//   XREF to: 0083c204 (DATA)
//   XREF to: 0083c1b8 (DATA)
// 00446580: JGE 0x00446596
//   XREF to: 00446596 (CONDITIONAL_JUMP)
// 00446582: MOV EBX,dword ptr [EDX + 0x1c]
//   XREF to: 00840c58 (READ)
// 00446585: CMP EBX,dword ptr [EAX + 0x1c]
//   XREF to: 0083c1f8 (DATA)
//   XREF to: 0083c1ac (DATA)
// 00446588: JLE 0x00446596
//   XREF to: 00446596 (CONDITIONAL_JUMP)
// 0044658a: MOV EBX,dword ptr [EDX + 0x20]
//   XREF to: 00840c5c (READ)
// 0044658d: CMP EBX,dword ptr [EAX + 0x20]
//   XREF to: 0083c1fc (DATA)
//   XREF to: 0083c1b0 (DATA)
// 00446590: JG 0x004461b1
//   XREF to: 004461b1 (CONDITIONAL_JUMP)
// 00446596: DEC ECX
//   Label: LAB_00446596
// 00446597: SUB EAX,0x4c
// 0044659a: TEST ECX,ECX
// 0044659c: JGE 0x0044656b
//   XREF to: 0044656b (CONDITIONAL_JUMP)
// 0044659e: MOV EBX,dword ptr [ESP + 0x8]
//   Label: LAB_0044659e
// 004465a2: ADD EDI,0x4
// 004465a5: INC EBX
// 004465a6: MOV dword ptr [EDI + -0x4],EDX
//   XREF to: 00840c3c (DATA)
// 004465a9: MOV dword ptr [ESP + 0x8],EBX
// 004465ad: JMP 0x004461b1
//   XREF to: 004461b1 (UNCONDITIONAL_JUMP)
// 004465b2: MOV ECX,dword ptr [EBP + 0x14]
//   Label: LAB_004465b2
// 004465b5: MOV EAX,dword ptr [EDX + 0x4]
//   XREF to: 00840c40 (READ)
// 004465b8: ADD EAX,dword ptr [ECX + 0x8]
// 004465bb: MOV ECX,dword ptr [0x0084a888]
//   XREF to: 0084a888 (READ)
// 004465c1: MOV dword ptr [EDX + 0x1c],EAX
//   XREF to: 00840c58 (WRITE)
// 004465c4: CMP EAX,ECX
// 004465c6: JGE 0x004461b1
//   XREF to: 004461b1 (CONDITIONAL_JUMP)
// 004465cc: MOV ECX,dword ptr [EBP + 0x14]
// 004465cf: MOV EAX,dword ptr [EDX + 0x8]
//   XREF to: 00840c44 (READ)
// 004465d2: ADD EAX,dword ptr [ECX + 0xc]
// 004465d5: JMP 0x00446547
//   XREF to: 00446547 (UNCONDITIONAL_JUMP)
// 004465da: MOV EDX,EBX
//   Label: LAB_004465da
// 004465dc: JMP 0x0044622a
//   XREF to: 0044622a (UNCONDITIONAL_JUMP)
// 004465e1: MOV EAX,dword ptr [EBX + 0x8]
//   Label: LAB_004465e1
// 004465e4: MOV dword ptr [EBX + 0x14],EAX
// 004465e7: MOV EAX,dword ptr [EBX + 0xc]
// 004465ea: JMP 0x004462d6
//   XREF to: 004462d6 (UNCONDITIONAL_JUMP)
// 004465ef: MOV EDX,dword ptr [0x0084a85c]
//   Label: LAB_004465ef
//   XREF to: 0084a85c (READ)
// 004465f5: MOV dword ptr [0x0084a884],EBX
//   XREF to: 0084a884 (WRITE)
// 004465fb: XOR EBX,EBX
// 004465fd: TEST EDX,EDX
// 004465ff: JLE 0x00446640
//   XREF to: 00446640 (CONDITIONAL_JUMP)
// 00446601: MOV EAX,0x83c1dc
//   XREF to: 0083c1dc (DATA)
// 00446606: ADD EAX,0x4c
//   Label: LAB_00446606
//   XREF to: 0083c228 (PARAM)
// 00446609: MOV EDX,dword ptr [EAX + -0x3c]
//   XREF to: 0083c1ec (READ)
//   XREF to: 0083c238 (READ)
// 0044660c: MOV dword ptr [EAX + -0x20],EDX
//   XREF to: 0083c208 (WRITE)
//   XREF to: 0083c254 (WRITE)
// 0044660f: MOV EDX,dword ptr [EAX + -0xc]
//   XREF to: 0083c21c (READ)
//   XREF to: 0083c268 (READ)
// 00446612: MOV dword ptr [EAX + -0x8],EDX
//   XREF to: 0083c220 (WRITE)
//   XREF to: 0083c26c (WRITE)
// 00446615: MOV EDX,dword ptr [EAX + -0x30]
//   XREF to: 0083c1f8 (READ)
//   XREF to: 0083c244 (READ)
// 00446618: MOV dword ptr [EAX + -0x1c],EDX
//   XREF to: 0083c20c (WRITE)
//   XREF to: 0083c258 (WRITE)
// 0044661b: MOV EDX,dword ptr [EAX + -0x2c]
//   XREF to: 0083c1fc (READ)
//   XREF to: 0083c248 (READ)
// 0044661e: MOV dword ptr [EAX + -0x18],EDX
//   XREF to: 0083c210 (WRITE)
//   XREF to: 0083c25c (WRITE)
// 00446621: MOV EDX,dword ptr [EAX + -0x28]
//   XREF to: 0083c200 (READ)
//   XREF to: 0083c24c (READ)
// 00446624: MOV dword ptr [EAX + -0x14],EDX
//   XREF to: 0083c214 (WRITE)
//   XREF to: 0083c260 (WRITE)
// 00446627: MOV ESI,dword ptr [0x0084a85c]
//   XREF to: 0084a85c (READ)
// 0044662d: MOV EDX,dword ptr [EAX + -0x24]
//   XREF to: 0083c204 (READ)
//   XREF to: 0083c250 (READ)
// 00446630: INC EBX
// 00446631: MOV dword ptr [EAX + -0x10],EDX
//   XREF to: 0083c218 (WRITE)
//   XREF to: 0083c264 (WRITE)
// 00446634: CMP EBX,ESI
// 00446636: JL 0x00446606
//   XREF to: 00446606 (CONDITIONAL_JUMP)
// 00446638: LEA EAX,[EAX]
//   XREF to: 0083c228 (DATA)
// 0044663e: MOV EDX,EDX
// 00446640: CMP dword ptr [0x0084a898],0x0
//   Label: LAB_00446640
//   XREF to: 0084a898 (READ)
// 00446647: JZ 0x00446940
//   XREF to: 00446940 (CONDITIONAL_JUMP)
// 0044664d: XOR EDI,EDI
//   Label: LAB_0044664d
// 0044664f: MOV EAX,[0x0084a854]
//   XREF to: 0084a854 (READ)
// 00446654: MOV dword ptr [ESP + 0x14],EDI
// 00446658: TEST EAX,EAX
// 0044665a: JLE 0x00446705
//   XREF to: 00446705 (CONDITIONAL_JUMP)
// 00446660: MOV dword ptr [ESP + 0x58],0x83c1dc
//   XREF to: 0083c1dc (DATA)
// 00446668: MOV EBX,dword ptr [ESP + 0x58]
//   Label: LAB_00446668
//   XREF to: 0083c1dc (PARAM)
//   XREF to: 0083c228 (PARAM)
// 0044666c: MOV EDX,dword ptr [0x0084a884]
//   Label: LAB_0044666c
//   XREF to: 0084a884 (READ)
// 00446672: MOV EAX,dword ptr [EBX + 0x3c]
//   XREF to: 0083c218 (READ)
//   XREF to: 0083c264 (READ)
// 00446675: XOR ESI,ESI
// 00446677: CMP EAX,EDX
// 00446679: JGE 0x004466a3
//   XREF to: 004466a3 (CONDITIONAL_JUMP)
// 0044667b: PUSH EBX
//   XREF to: 0083c1dc (DATA)
//   XREF to: 0083c228 (DATA)
// 0044667c: CALL shape_cramtex.cpp_findLowestOverlappingY_FUN_00447930
//   XREF to: 00447930 (UNCONDITIONAL_CALL)
// 00446681: MOV ECX,dword ptr [0x0084a884]
//   XREF to: 0084a884 (READ)
// 00446687: ADD ESP,0x4
// 0044668a: CMP EAX,ECX
// 0044668c: JL 0x004466a3
//   XREF to: 004466a3 (CONDITIONAL_JUMP)
// 0044668e: SUB EAX,dword ptr [EBX + 0x3c]
//   XREF to: 0083c218 (READ)
// 00446691: MOV EDX,dword ptr [EBX + 0x3c]
//   XREF to: 0083c218 (READ)
// 00446694: MOV ESI,EAX
// 00446696: MOV EAX,dword ptr [EBX + 0x34]
//   XREF to: 0083c210 (READ)
// 00446699: ADD EDX,ESI
// 0044669b: ADD EAX,ESI
// 0044669d: MOV dword ptr [EBX + 0x3c],EDX
//   XREF to: 0083c218 (WRITE)
// 004466a0: MOV dword ptr [EBX + 0x34],EAX
//   XREF to: 0083c210 (WRITE)
// 004466a3: MOV ECX,dword ptr [0x0084a884]
//   Label: LAB_004466a3
//   XREF to: 0084a884 (READ)
// 004466a9: CMP ECX,dword ptr [EBX + 0x38]
//   XREF to: 0083c214 (READ)
// 004466ac: JLE 0x004466d8
//   XREF to: 004466d8 (CONDITIONAL_JUMP)
// 004466ae: PUSH EBX
//   XREF to: 0083c1dc (DATA)
// 004466af: CALL shape_cramtex.cpp_findLeftmostOverlappingX_FUN_00447a10
//   XREF to: 00447a10 (UNCONDITIONAL_CALL)
// 004466b4: MOV EDX,dword ptr [0x0084a884]
//   XREF to: 0084a884 (READ)
// 004466ba: ADD ESP,0x4
// 004466bd: CMP EAX,EDX
// 004466bf: JL 0x004466d8
//   XREF to: 004466d8 (CONDITIONAL_JUMP)
// 004466c1: MOV ESI,EAX
// 004466c3: MOV ECX,dword ptr [EBX + 0x38]
//   XREF to: 0083c214 (READ)
// 004466c6: MOV EAX,dword ptr [EBX + 0x30]
//   XREF to: 0083c20c (READ)
// 004466c9: SUB ESI,ECX
// 004466cb: MOV EDX,dword ptr [EBX + 0x38]
//   XREF to: 0083c214 (READ)
// 004466ce: ADD EAX,ESI
// 004466d0: ADD EDX,ESI
// 004466d2: MOV dword ptr [EBX + 0x30],EAX
//   XREF to: 0083c20c (WRITE)
// 004466d5: MOV dword ptr [EBX + 0x38],EDX
//   XREF to: 0083c214 (WRITE)
// 004466d8: TEST ESI,ESI
//   Label: LAB_004466d8
// 004466da: JLE 0x004466e3
//   XREF to: 004466e3 (CONDITIONAL_JUMP)
// 004466dc: MOV EDI,0x1
// 004466e1: JMP 0x0044666c
//   XREF to: 0044666c (UNCONDITIONAL_JUMP)
// 004466e3: MOV EDX,dword ptr [ESP + 0x58]
//   Label: LAB_004466e3
// 004466e7: MOV ECX,dword ptr [ESP + 0x14]
// 004466eb: MOV EBX,dword ptr [0x0084a854]
//   XREF to: 0084a854 (READ)
// 004466f1: ADD EDX,0x4c
//   XREF to: 0083c228 (PARAM)
// 004466f4: INC ECX
// 004466f5: MOV dword ptr [ESP + 0x58],EDX
//   XREF to: 0083c228 (DATA)
// 004466f9: MOV dword ptr [ESP + 0x14],ECX
// 004466fd: CMP ECX,EBX
// 004466ff: JL 0x00446668
//   XREF to: 00446668 (CONDITIONAL_JUMP)
// 00446705: TEST EDI,EDI
//   Label: LAB_00446705
// 00446707: JNZ 0x0044664d
//   XREF to: 0044664d (CONDITIONAL_JUMP)
// 0044670d: MOV dword ptr [ESP + 0x18],EDI
// 00446711: MOV EBX,dword ptr [0x0084a854]
//   Label: LAB_00446711
//   XREF to: 0084a854 (READ)
// 00446717: XOR ECX,ECX
// 00446719: XOR EDI,EDI
// 0044671b: MOV dword ptr [ESP + 0x7c],ECX
// 0044671f: TEST EBX,EBX
// 00446721: JLE 0x004467d8
//   XREF to: 004467d8 (CONDITIONAL_JUMP)
// 00446727: MOV EBX,0x83c1dc
//   XREF to: 0083c1dc (PARAM)
// 0044672c: PUSH EBX
//   Label: LAB_0044672c
//   XREF to: 0083c1dc (DATA)
//   XREF to: 0083c228 (DATA)
// 0044672d: CALL shape_cramtex.cpp_findRightmostOverlappingX_FUN_004479a0
//   XREF to: 004479a0 (UNCONDITIONAL_CALL)
// 00446732: MOV EDX,dword ptr [EBX + 0x30]
//   XREF to: 0083c20c (READ)
// 00446735: ADD ESP,0x4
// 00446738: SUB EAX,EDX
// 0044673a: PUSH EBX
//   XREF to: 0083c1dc (DATA)
// 0044673b: MOV dword ptr [ESP + 0x20],EAX
// 0044673f: CALL shape_cramtex.cpp_findLeftmostOverlappingX_FUN_00447a10
//   XREF to: 00447a10 (UNCONDITIONAL_CALL)
// 00446744: ADD ESP,0x4
// 00446747: MOV ECX,dword ptr [EBX + 0x38]
//   XREF to: 0083c214 (READ)
// 0044674a: MOV EDX,dword ptr [ESP + 0x1c]
// 0044674e: SUB EAX,ECX
// 00446750: ADD EDX,EAX
// 00446752: MOV EAX,EDX
// 00446754: SAR EDX,0x1f
// 00446757: SUB EAX,EDX
// 00446759: SAR EAX,0x1
// 0044675b: MOV ESI,EBX
// 0044675d: TEST EAX,EAX
// 0044675f: JZ 0x0044677a
//   XREF to: 0044677a (CONDITIONAL_JUMP)
// 00446761: MOV EDX,0x1
// 00446766: MOV ECX,dword ptr [EBX + 0x30]
//   XREF to: 0083c20c (READ)
// 00446769: MOV dword ptr [ESP + 0x7c],EDX
// 0044676d: ADD ECX,EAX
// 0044676f: MOV EDX,dword ptr [EBX + 0x38]
//   XREF to: 0083c214 (READ)
// 00446772: MOV dword ptr [EBX + 0x30],ECX
//   XREF to: 0083c20c (WRITE)
// 00446775: ADD EDX,EAX
// 00446777: MOV dword ptr [EBX + 0x38],EDX
//   XREF to: 0083c214 (WRITE)
// 0044677a: PUSH ESI
//   Label: LAB_0044677a
//   XREF to: 0083c1dc (DATA)
// 0044677b: CALL shape_cramtex.cpp_findHighestOverlappingY_FUN_004478c0
//   XREF to: 004478c0 (UNCONDITIONAL_CALL)
// 00446780: MOV ECX,dword ptr [ESI + 0x34]
//   XREF to: 0083c210 (READ)
// 00446783: ADD ESP,0x4
// 00446786: SUB EAX,ECX
// 00446788: PUSH ESI
//   XREF to: 0083c1dc (DATA)
// 00446789: MOV dword ptr [ESP + 0x24],EAX
// 0044678d: CALL shape_cramtex.cpp_findLowestOverlappingY_FUN_00447930
//   XREF to: 00447930 (UNCONDITIONAL_CALL)
// 00446792: MOV EDX,dword ptr [ESI + 0x3c]
//   XREF to: 0083c218 (READ)
// 00446795: ADD ESP,0x4
// 00446798: SUB EAX,EDX
// 0044679a: MOV EDX,dword ptr [ESP + 0x20]
// 0044679e: ADD EDX,EAX
// 004467a0: MOV EAX,EDX
// 004467a2: SAR EDX,0x1f
// 004467a5: SUB EAX,EDX
// 004467a7: SAR EAX,0x1
// 004467a9: TEST EAX,EAX
// 004467ab: JZ 0x004467c6
//   XREF to: 004467c6 (CONDITIONAL_JUMP)
// 004467ad: MOV ECX,0x1
// 004467b2: MOV EDX,dword ptr [ESI + 0x34]
//   XREF to: 0083c210 (READ)
// 004467b5: MOV dword ptr [ESP + 0x7c],ECX
// 004467b9: ADD EDX,EAX
// 004467bb: MOV ECX,dword ptr [ESI + 0x3c]
//   XREF to: 0083c218 (READ)
// 004467be: MOV dword ptr [ESI + 0x34],EDX
//   XREF to: 0083c210 (WRITE)
// 004467c1: ADD ECX,EAX
// 004467c3: MOV dword ptr [ESI + 0x3c],ECX
//   XREF to: 0083c218 (WRITE)
// 004467c6: MOV ESI,dword ptr [0x0084a854]
//   Label: LAB_004467c6
//   XREF to: 0084a854 (READ)
// 004467cc: INC EDI
// 004467cd: ADD EBX,0x4c
//   XREF to: 0083c228 (PARAM)
// 004467d0: CMP EDI,ESI
// 004467d2: JL 0x0044672c
//   XREF to: 0044672c (CONDITIONAL_JUMP)
// 004467d8: CMP dword ptr [ESP + 0x7c],0x0
//   Label: LAB_004467d8
// 004467dd: JNZ 0x00446a96
//   XREF to: 00446a96 (CONDITIONAL_JUMP)
// 004467e3: XOR ECX,ECX
//   Label: LAB_004467e3
// 004467e5: MOV dword ptr [ESP + 0x78],ECX
// 004467e9: TEST byte ptr [ESP + 0x78],0x1
//   Label: LAB_004467e9
// 004467ee: JZ 0x00446aad
//   XREF to: 00446aad (CONDITIONAL_JUMP)
// 004467f4: MOV EDI,0xffffffff
// 004467f9: MOV EAX,[0x0084a854]
//   XREF to: 0084a854 (READ)
// 004467fe: MOV dword ptr [ESP + 0x24],EDI
// 00446802: DEC EAX
// 00446803: MOV ESI,EAX
//   Label: LAB_00446803
// 00446805: CMP EAX,EDI
// 00446807: JZ 0x00446888
//   XREF to: 00446888 (CONDITIONAL_JUMP)
// 0044680d: IMUL EBX,ESI,0x4c
//   Label: LAB_0044680d
// 00446810: ADD EBX,0x83c1dc
//   XREF to: 0083c1dc (PARAM)
// 00446816: PUSH EBX
//   XREF to: 0083c1dc (DATA)
// 00446817: CALL shape_cramtex.cpp_findRightmostOverlappingX_FUN_004479a0
//   XREF to: 004479a0 (UNCONDITIONAL_CALL)
// 0044681c: MOV EDX,dword ptr [EBX + 0x30]
//   XREF to: 0083c20c (DATA)
// 0044681f: ADD EDX,EAX
// 00446821: MOV EAX,EDX
// 00446823: SAR EDX,0x1f
// 00446826: SUB EAX,EDX
// 00446828: SAR EAX,0x1
// 0044682a: ADD ESP,0x4
// 0044682d: PUSH EBX
// 0044682e: MOV dword ptr [EBX + 0x30],EAX
//   XREF to: 0083c20c (DATA)
// 00446831: CALL shape_cramtex.cpp_findHighestOverlappingY_FUN_004478c0
//   XREF to: 004478c0 (UNCONDITIONAL_CALL)
// 00446836: MOV EDX,dword ptr [EBX + 0x34]
//   XREF to: 0083c210 (DATA)
// 00446839: ADD EDX,EAX
// 0044683b: MOV EAX,EDX
// 0044683d: SAR EDX,0x1f
// 00446840: SUB EAX,EDX
// 00446842: SAR EAX,0x1
// 00446844: ADD ESP,0x4
// 00446847: PUSH EBX
// 00446848: MOV dword ptr [EBX + 0x34],EAX
//   XREF to: 0083c210 (DATA)
// 0044684b: CALL shape_cramtex.cpp_findLeftmostOverlappingX_FUN_00447a10
//   XREF to: 00447a10 (UNCONDITIONAL_CALL)
// 00446850: ADD EAX,dword ptr [EBX + 0x38]
//   XREF to: 0083c214 (DATA)
// 00446853: LEA EDX,[EAX + 0x1]
// 00446856: MOV EAX,EDX
// 00446858: SAR EDX,0x1f
// 0044685b: SUB EAX,EDX
// 0044685d: SAR EAX,0x1
// 0044685f: ADD ESP,0x4
// 00446862: PUSH EBX
// 00446863: MOV dword ptr [EBX + 0x38],EAX
//   XREF to: 0083c214 (DATA)
// 00446866: CALL shape_cramtex.cpp_findLowestOverlappingY_FUN_00447930
//   XREF to: 00447930 (UNCONDITIONAL_CALL)
// 0044686b: ADD EAX,dword ptr [EBX + 0x3c]
//   XREF to: 0083c218 (DATA)
// 0044686e: LEA EDX,[EAX + 0x1]
// 00446871: MOV EAX,EDX
// 00446873: SAR EDX,0x1f
// 00446876: SUB EAX,EDX
// 00446878: SAR EAX,0x1
// 0044687a: ADD ESP,0x4
// 0044687d: MOV dword ptr [EBX + 0x3c],EAX
//   XREF to: 0083c218 (DATA)
// 00446880: ADD ESI,dword ptr [ESP + 0x24]
// 00446884: CMP ESI,EDI
// 00446886: JNZ 0x0044680d
//   XREF to: 0044680d (CONDITIONAL_JUMP)
// 00446888: MOV ESI,dword ptr [ESP + 0x78]
//   Label: LAB_00446888
// 0044688c: INC ESI
// 0044688d: MOV dword ptr [ESP + 0x78],ESI
// 00446891: CMP ESI,0xa
// 00446894: JL 0x004467e9
//   XREF to: 004467e9 (CONDITIONAL_JUMP)
// 0044689a: MOV EAX,[0x0084a854]
//   XREF to: 0084a854 (READ)
// 0044689f: XOR EDI,EDI
// 004468a1: TEST EAX,EAX
// 004468a3: JLE 0x004468fe
//   XREF to: 004468fe (CONDITIONAL_JUMP)
// 004468a5: MOV ESI,0x83c1dc
//   XREF to: 0083c1dc (DATA)
// 004468aa: MOV EBX,ESI
//   Label: LAB_004468aa
//   XREF to: 0083c1dc (PARAM)
//   XREF to: 0083c228 (PARAM)
// 004468ac: PUSH EBX
//   Label: LAB_004468ac
//   XREF to: 0083c1dc (DATA)
//   XREF to: 0083c228 (DATA)
// 004468ad: CALL shape_cramtex.cpp_findHighestOverlappingY_FUN_004478c0
//   XREF to: 004478c0 (UNCONDITIONAL_CALL)
// 004468b2: MOV EDX,dword ptr [EBX + 0x34]
//   XREF to: 0083c210 (READ)
// 004468b5: ADD ESP,0x4
// 004468b8: SUB EDX,EAX
// 004468ba: MOV ECX,dword ptr [EBX + 0x3c]
//   XREF to: 0083c218 (READ)
// 004468bd: MOV EAX,EDX
// 004468bf: MOV EDX,dword ptr [EBX + 0x34]
//   XREF to: 0083c210 (READ)
// 004468c2: SUB ECX,EAX
// 004468c4: SUB EDX,EAX
// 004468c6: MOV dword ptr [EBX + 0x3c],ECX
//   XREF to: 0083c218 (WRITE)
// 004468c9: PUSH EBX
//   XREF to: 0083c1dc (DATA)
// 004468ca: MOV dword ptr [EBX + 0x34],EDX
//   XREF to: 0083c210 (WRITE)
// 004468cd: CALL shape_cramtex.cpp_findRightmostOverlappingX_FUN_004479a0
//   XREF to: 004479a0 (UNCONDITIONAL_CALL)
// 004468d2: MOV EDX,dword ptr [EBX + 0x30]
//   XREF to: 0083c20c (READ)
// 004468d5: SUB EDX,EAX
// 004468d7: MOV ECX,dword ptr [EBX + 0x38]
//   XREF to: 0083c214 (READ)
// 004468da: MOV EAX,EDX
// 004468dc: MOV EDX,dword ptr [EBX + 0x30]
//   XREF to: 0083c20c (READ)
// 004468df: SUB ECX,EAX
// 004468e1: SUB EDX,EAX
// 004468e3: MOV dword ptr [EBX + 0x38],ECX
//   XREF to: 0083c214 (WRITE)
// 004468e6: ADD ESP,0x4
// 004468e9: MOV dword ptr [EBX + 0x30],EDX
//   XREF to: 0083c20c (WRITE)
// 004468ec: TEST EAX,EAX
// 004468ee: JG 0x004468ac
//   XREF to: 004468ac (CONDITIONAL_JUMP)
// 004468f0: MOV EDX,dword ptr [0x0084a854]
//   XREF to: 0084a854 (READ)
// 004468f6: INC EDI
// 004468f7: ADD ESI,0x4c
// 004468fa: CMP EDI,EDX
// 004468fc: JL 0x004468aa
//   XREF to: 004468aa (CONDITIONAL_JUMP)
// 004468fe: MOV ECX,dword ptr [0x0084a854]
//   Label: LAB_004468fe
//   XREF to: 0084a854 (READ)
// 00446904: XOR ESI,ESI
// 00446906: TEST ECX,ECX
// 00446908: JLE 0x00446940
//   XREF to: 00446940 (CONDITIONAL_JUMP)
// 0044690a: MOV EBX,0x83c1dc
//   XREF to: 0083c1dc (PARAM)
// 0044690f: PUSH EBX
//   Label: LAB_0044690f
//   XREF to: 0083c1dc (DATA)
//   XREF to: 0083c228 (DATA)
// 00446910: CALL shape_cramtex.cpp_findLeftmostOverlappingX_FUN_00447a10
//   XREF to: 00447a10 (UNCONDITIONAL_CALL)
// 00446915: ADD ESP,0x4
// 00446918: PUSH EBX
//   XREF to: 0083c1dc (DATA)
// 00446919: INC ESI
// 0044691a: MOV dword ptr [EBX + 0x38],EAX
//   XREF to: 0083c214 (WRITE)
// 0044691d: CALL shape_cramtex.cpp_findLowestOverlappingY_FUN_00447930
//   XREF to: 00447930 (UNCONDITIONAL_CALL)
// 00446922: ADD EBX,0x4c
//   XREF to: 0083c228 (PARAM)
// 00446925: MOV EDI,dword ptr [0x0084a854]
//   XREF to: 0084a854 (READ)
// 0044692b: ADD ESP,0x4
// 0044692e: MOV dword ptr [EBX + -0x10],EAX
//   XREF to: 0083c218 (WRITE)
// 00446931: CMP ESI,EDI
// 00446933: JL 0x0044690f
//   XREF to: 0044690f (CONDITIONAL_JUMP)
// 00446935: LEA EAX,[EAX]
// 0044693b: LEA EDX,[EDX]
// 0044693e: MOV EBX,EBX
// 00446940: PUSH 0x0
//   Label: LAB_00446940
// 00446942: PUSH 0x0
// 00446944: PUSH 0x1
// 00446946: CALL shape_cramtex.cpp_visualizeTextureAtlas_FUN_00447f20
//   XREF to: 00447f20 (UNCONDITIONAL_CALL)
// 0044694b: ADD ESP,0xc
// 0044694e: PUSH 0x359
// 00446953: PUSH 0x61998d
//   XREF to: 0061998d (DATA)
// 00446958: PUSH 0x6199a2
//   XREF to: 006199a2 (DATA)
// 0044695d: PUSH 0x0
// 0044695f: PUSH 0x6199a5
//   XREF to: 006199a5 (DATA)
// 00446964: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 00446969: MOV EBX,EAX
// 0044696b: ADD ESP,0x14
// 0044696e: TEST EAX,EAX
// 00446970: JZ 0x004469af
//   XREF to: 004469af (CONDITIONAL_JUMP)
// 00446972: PUSH 0x6199ba
//   XREF to: 006199ba (DATA)
// 00446977: PUSH EAX
// 00446978: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0044697d: ADD ESP,0x8
// 00446980: MOV ESI,dword ptr [0x0084a874]
//   XREF to: 0084a874 (READ)
// 00446986: PUSH ESI
// 00446987: MOV EDI,dword ptr [0x0084a884]
//   XREF to: 0084a884 (READ)
// 0044698d: PUSH EDI
// 0044698e: PUSH 0x6199dc
//   XREF to: 006199dc (DATA)
// 00446993: PUSH EBX
// 00446994: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00446999: ADD ESP,0x10
// 0044699c: PUSH 0x35d
// 004469a1: PUSH 0x619a08
//   XREF to: 00619a08 (DATA)
// 004469a6: PUSH EBX
// 004469a7: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004469ac: ADD ESP,0xc
// 004469af: MOV EDX,dword ptr [0x0084a874]
//   Label: LAB_004469af
//   XREF to: 0084a874 (READ)
// 004469b5: MOV EAX,[0x0084a884]
//   XREF to: 0084a884 (READ)
// 004469ba: CMP EAX,EDX
// 004469bc: JLE 0x00446ac3
//   XREF to: 00446ac3 (CONDITIONAL_JUMP)
// 004469c2: MOV EDX,EAX
// 004469c4: SHL EAX,0x2
// 004469c7: SUB EAX,EDX
// 004469c9: MOV EDX,dword ptr [0x0084a874]
//   XREF to: 0084a874 (READ)
// 004469cf: ADD EDX,EAX
// 004469d1: MOV EAX,EDX
// 004469d3: SAR EDX,0x1f
// 004469d6: SHL EDX,0x2
// 004469d9: SBB EAX,EDX
// 004469db: SAR EAX,0x2
// 004469de: MOV ECX,dword ptr [0x0084a870]
//   XREF to: 0084a870 (READ)
// 004469e4: MOV [0x0084a888],EAX
//   XREF to: 0084a888 (WRITE)
// 004469e9: SUB EAX,ECX
// 004469eb: MOV EBX,dword ptr [0x0084a860]
//   XREF to: 0084a860 (READ)
// 004469f1: MOV [0x0084a88c],EAX
//   XREF to: 0084a88c (WRITE)
// 004469f6: XOR ECX,ECX
// 004469f8: TEST EBX,EBX
// 004469fa: JLE 0x00446a3e
//   XREF to: 00446a3e (CONDITIONAL_JUMP)
// 004469fc: MOV EAX,0x840c14
//   XREF to: 00840c14 (DATA)
// 00446a01: MOV EDX,dword ptr [EAX + 0x14]
//   Label: LAB_00446a01
//   XREF to: 00840c28 (READ)
//   XREF to: 00840c50 (READ)
// 00446a04: MOV EBX,EAX
// 00446a06: TEST EDX,EDX
// 00446a08: JZ 0x00446ae5
//   XREF to: 00446ae5 (CONDITIONAL_JUMP)
// 00446a0e: MOV ESI,dword ptr [0x0084a86c]
//   XREF to: 0084a86c (READ)
// 00446a14: MOV EDX,dword ptr [EAX + 0x4]
//   XREF to: 00840c18 (READ)
//   XREF to: 00840c40 (READ)
// 00446a17: MOV EDI,dword ptr [0x0084a888]
//   XREF to: 0084a888 (READ)
// 00446a1d: ADD EDX,ESI
// 00446a1f: CMP EDX,EDI
// 00446a21: JL 0x00446b16
//   XREF to: 00446b16 (CONDITIONAL_JUMP)
// 00446a27: MOV EDX,dword ptr [0x0065c238]
//   Label: LAB_00446a27
//   XREF to: 0065c238 (READ)
// 00446a2d: MOV dword ptr [EBX + 0x18],EDX
//   XREF to: 00840c2c (WRITE)
//   XREF to: 00840c54 (WRITE)
// 00446a30: MOV EDI,dword ptr [0x0084a860]
//   Label: LAB_00446a30
//   XREF to: 0084a860 (READ)
// 00446a36: INC ECX
// 00446a37: ADD EAX,0x28
// 00446a3a: CMP ECX,EDI
// 00446a3c: JL 0x00446a01
//   XREF to: 00446a01 (CONDITIONAL_JUMP)
// 00446a3e: MOV EDX,0x1
//   Label: LAB_00446a3e
// 00446a43: CMP EDX,dword ptr [0x0084a85c]
//   XREF to: 0084a85c (READ)
// 00446a49: JGE 0x004464e3
//   XREF to: 004464e3 (CONDITIONAL_JUMP)
// 00446a4f: MOV ECX,dword ptr [0x0084a85c]
//   XREF to: 0084a85c (READ)
// 00446a55: LEA EBX,[ECX*0x4 + 0x0]
// 00446a5c: ADD EBX,ECX
// 00446a5e: SHL EBX,0x2
// 00446a61: MOV EAX,0x4c
// 00446a66: SUB EBX,ECX
// 00446a68: MOV ESI,dword ptr [0x0084a888]
//   XREF to: 0084a888 (READ)
// 00446a6e: SHL EBX,0x2
// 00446a71: CMP ESI,dword ptr [EAX + 0x83c200]
//   Label: LAB_00446a71
//   XREF to: 0083c24c (READ)
//   XREF to: 0083c298 (READ)
// 00446a77: JLE 0x00446b2e
//   XREF to: 00446b2e (CONDITIONAL_JUMP)
// 00446a7d: CMP ESI,dword ptr [EAX + 0x83c204]
//   XREF to: 0083c250 (READ)
//   XREF to: 0083c29c (READ)
// 00446a83: JLE 0x00446b2e
//   XREF to: 00446b2e (CONDITIONAL_JUMP)
// 00446a89: ADD EAX,0x4c
// 00446a8c: INC EDX
// 00446a8d: CMP EAX,EBX
// 00446a8f: JL 0x00446a71
//   XREF to: 00446a71 (CONDITIONAL_JUMP)
// 00446a91: JMP 0x004464e3
//   XREF to: 004464e3 (UNCONDITIONAL_JUMP)
// 00446a96: MOV EAX,dword ptr [ESP + 0x18]
//   Label: LAB_00446a96
// 00446a9a: INC EAX
// 00446a9b: MOV dword ptr [ESP + 0x18],EAX
// 00446a9f: CMP EAX,0xa
// 00446aa2: JL 0x00446711
//   XREF to: 00446711 (CONDITIONAL_JUMP)
// 00446aa8: JMP 0x004467e3
//   XREF to: 004467e3 (UNCONDITIONAL_JUMP)
// 00446aad: MOV EBX,0x1
//   Label: LAB_00446aad
// 00446ab2: MOV EDI,dword ptr [0x0084a854]
//   XREF to: 0084a854 (READ)
// 00446ab8: XOR EAX,EAX
// 00446aba: MOV dword ptr [ESP + 0x24],EBX
// 00446abe: JMP 0x00446803
//   XREF to: 00446803 (UNCONDITIONAL_JUMP)
// 00446ac3: MOV EAX,dword ptr [ESP + 0x10]
//   Label: LAB_00446ac3
// 00446ac7: MOV ESI,dword ptr [0x0084a85c]
//   XREF to: 0084a85c (READ)
// 00446acd: MOV [0x00887940],EAX
//   XREF to: 00887940 (WRITE)
// 00446ad2: DEC ESI
// 00446ad3: MOV EAX,0xf423f
// 00446ad8: MOV dword ptr [0x0084a85c],ESI
//   XREF to: 0084a85c (WRITE)
// 00446ade: MOV ESP,EBP
// 00446ae0: POP EBP
// 00446ae1: POP EDI
// 00446ae2: POP ESI
// 00446ae3: POP EBX
// 00446ae4: RET
// 00446ae5: MOV ESI,dword ptr [0x0084a868]
//   Label: LAB_00446ae5
//   XREF to: 0084a868 (READ)
// 00446aeb: MOV EDX,dword ptr [EAX + 0x4]
//   XREF to: 00840c40 (READ)
// 00446aee: MOV EDI,dword ptr [0x0084a888]
//   XREF to: 0084a888 (READ)
// 00446af4: ADD EDX,ESI
// 00446af6: CMP EDX,EDI
// 00446af8: JGE 0x00446a27
//   XREF to: 00446a27 (CONDITIONAL_JUMP)
// 00446afe: MOV ESI,dword ptr [0x0084a86c]
//   XREF to: 0084a86c (READ)
// 00446b04: MOV EDX,dword ptr [EAX + 0x8]
//   XREF to: 00840c44 (READ)
// 00446b07: ADD EDX,ESI
// 00446b09: CMP EDX,EDI
// 00446b0b: JGE 0x00446a27
//   XREF to: 00446a27 (CONDITIONAL_JUMP)
// 00446b11: JMP 0x00446a30
//   XREF to: 00446a30 (UNCONDITIONAL_JUMP)
// 00446b16: MOV ESI,dword ptr [0x0084a868]
//   Label: LAB_00446b16
//   XREF to: 0084a868 (READ)
// 00446b1c: MOV EDX,dword ptr [EAX + 0x8]
//   XREF to: 00840c44 (READ)
// 00446b1f: ADD EDX,ESI
// 00446b21: CMP EDX,EDI
// 00446b23: JGE 0x00446a27
//   XREF to: 00446a27 (CONDITIONAL_JUMP)
// 00446b29: JMP 0x00446a30
//   XREF to: 00446a30 (UNCONDITIONAL_JUMP)
// 00446b2e: MOV EAX,dword ptr [ESP + 0x10]
//   Label: LAB_00446b2e
// 00446b32: MOV [0x00887940],EAX
//   XREF to: 00887940 (WRITE)
// 00446b37: MOV EAX,[0x0084a85c]
//   XREF to: 0084a85c (READ)
// 00446b3c: DEC EAX
// 00446b3d: MOV [0x0084a85c],EAX
//   XREF to: 0084a85c (WRITE)
// 00446b42: SUB EAX,EDX
// 00446b44: MOV ESP,EBP
// 00446b46: POP EBP
// 00446b47: POP EDI
// 00446b48: POP ESI
// 00446b49: POP EBX
// 00446b4a: RET
// 00446b4b: XOR ECX,ECX
//   Label: LAB_00446b4b
// 00446b4d: MOV EBX,dword ptr [ESP + 0x8]
// 00446b51: MOV dword ptr [ESP + 0x28],ECX
// 00446b55: TEST EBX,EBX
// 00446b57: JLE 0x004464e3
//   XREF to: 004464e3 (CONDITIONAL_JUMP)
// 00446b5d: MOV EAX,dword ptr [ESP + 0x4]
// 00446b61: MOV dword ptr [ESP + 0x74],EAX
// 00446b65: MOV EDX,dword ptr [ESP + 0x74]
//   Label: LAB_00446b65
// 00446b69: MOV EDX,dword ptr [EDX]
// 00446b6b: MOV EAX,dword ptr [EBP + 0x14]
// 00446b6e: MOV ECX,dword ptr [EDX]
// 00446b70: MOV dword ptr [EAX + 0x10],ECX
// 00446b73: MOV ECX,dword ptr [EDX + 0x14]
// 00446b76: MOV dword ptr [EAX + 0x40],ECX
// 00446b79: MOV ECX,dword ptr [EDX + 0x4]
// 00446b7c: MOV dword ptr [EAX + 0x1c],ECX
// 00446b7f: MOV EDX,dword ptr [EDX + 0x8]
// 00446b82: MOV ESI,dword ptr [EAX + 0x40]
// 00446b85: MOV dword ptr [EAX + 0x20],EDX
// 00446b88: TEST ESI,ESI
// 00446b8a: JNZ 0x00446bdd
//   XREF to: 00446bdd (CONDITIONAL_JUMP)
// 00446b8c: MOV EDX,dword ptr [EAX + 0x8]
// 00446b8f: MOV dword ptr [EAX + 0x14],EDX
// 00446b92: MOV EDX,dword ptr [EAX + 0xc]
// 00446b95: MOV dword ptr [EAX + 0x18],EDX
//   Label: LAB_00446b95
// 00446b98: MOV EDI,dword ptr [EAX + 0x14]
// 00446b9b: MOV EDX,dword ptr [EAX + 0x1c]
// 00446b9e: ADD EDX,EDI
// 00446ba0: MOV dword ptr [EAX + 0x24],EDX
// 00446ba3: MOV ECX,dword ptr [EAX + 0x18]
// 00446ba6: MOV EDX,dword ptr [EAX + 0x20]
// 00446ba9: ADD EDX,ECX
// 00446bab: MOV dword ptr [EAX + 0x28],EDX
// 00446bae: MOV EAX,dword ptr [EBP + 0x14]
// 00446bb1: MOV EBX,dword ptr [0x0084a888]
//   XREF to: 0084a888 (READ)
// 00446bb7: CMP EBX,dword ptr [EAX + 0x24]
// 00446bba: JG 0x00446be8
//   XREF to: 00446be8 (CONDITIONAL_JUMP)
// 00446bbc: MOV EDX,dword ptr [ESP + 0x74]
//   Label: LAB_00446bbc
// 00446bc0: MOV ECX,dword ptr [ESP + 0x28]
// 00446bc4: MOV EBX,dword ptr [ESP + 0x8]
// 00446bc8: ADD EDX,0x4
// 00446bcb: INC ECX
// 00446bcc: MOV dword ptr [ESP + 0x74],EDX
// 00446bd0: MOV dword ptr [ESP + 0x28],ECX
// 00446bd4: CMP ECX,EBX
// 00446bd6: JL 0x00446b65
//   XREF to: 00446b65 (CONDITIONAL_JUMP)
// 00446bd8: JMP 0x004464e3
//   XREF to: 004464e3 (UNCONDITIONAL_JUMP)
// 00446bdd: MOV EDX,dword ptr [EAX + 0xc]
//   Label: LAB_00446bdd
// 00446be0: MOV dword ptr [EAX + 0x14],EDX
// 00446be3: MOV EDX,dword ptr [EAX + 0x8]
// 00446be6: JMP 0x00446b95
//   XREF to: 00446b95 (UNCONDITIONAL_JUMP)
// 00446be8: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_00446be8
// 00446beb: CMP EBX,dword ptr [EAX + 0x28]
// 00446bee: JLE 0x00446bbc
//   XREF to: 00446bbc (CONDITIONAL_JUMP)
// 00446bf0: MOV EDI,dword ptr [0x0084a860]
//   XREF to: 0084a860 (READ)
// 00446bf6: XOR EDX,EDX
// 00446bf8: TEST EDI,EDI
// 00446bfa: JLE 0x00446c51
//   XREF to: 00446c51 (CONDITIONAL_JUMP)
// 00446bfc: MOV EAX,0x840c14
//   XREF to: 00840c14 (DATA)
// 00446c01: CMP dword ptr [EAX + 0x18],0x0
//   Label: LAB_00446c01
//   XREF to: 00840c2c (READ)
//   XREF to: 00840c54 (READ)
// 00446c05: JNZ 0x00446c43
//   XREF to: 00446c43 (CONDITIONAL_JUMP)
// 00446c07: MOV ECX,dword ptr [EBP + 0x14]
// 00446c0a: MOV EBX,dword ptr [EAX]
//   XREF to: 00840c14 (READ)
//   XREF to: 00840c3c (READ)
// 00446c0c: CMP EBX,dword ptr [ECX + 0x10]
// 00446c0f: JNZ 0x00446c43
//   XREF to: 00446c43 (CONDITIONAL_JUMP)
// 00446c11: MOV ECX,dword ptr [EBP + 0x14]
// 00446c14: MOV ESI,dword ptr [EAX + 0xc]
//   XREF to: 00840c20 (READ)
//   XREF to: 00840c48 (READ)
// 00446c17: CMP ESI,dword ptr [ECX + 0x1c]
// 00446c1a: JLE 0x00446c43
//   XREF to: 00446c43 (CONDITIONAL_JUMP)
// 00446c1c: MOV ECX,dword ptr [EBP + 0x14]
// 00446c1f: MOV EDI,dword ptr [EAX + 0x10]
//   XREF to: 00840c24 (READ)
//   XREF to: 00840c4c (READ)
// 00446c22: CMP EDI,dword ptr [ECX + 0x20]
// 00446c25: JLE 0x00446c43
//   XREF to: 00446c43 (CONDITIONAL_JUMP)
// 00446c27: MOV ECX,dword ptr [EBP + 0x14]
// 00446c2a: MOV EBX,dword ptr [EAX + 0x4]
//   XREF to: 00840c18 (READ)
//   XREF to: 00840c40 (READ)
// 00446c2d: CMP EBX,dword ptr [ECX + 0x24]
// 00446c30: JGE 0x00446c43
//   XREF to: 00446c43 (CONDITIONAL_JUMP)
// 00446c32: MOV ECX,dword ptr [EBP + 0x14]
// 00446c35: MOV ESI,dword ptr [EAX + 0x8]
//   XREF to: 00840c1c (READ)
// 00446c38: CMP ESI,dword ptr [ECX + 0x28]
// 00446c3b: JGE 0x00446c43
//   XREF to: 00446c43 (CONDITIONAL_JUMP)
// 00446c3d: MOV ECX,dword ptr [EBP + 0x14]
// 00446c40: MOV dword ptr [EAX + 0x18],ECX
//   XREF to: 00840c2c (WRITE)
// 00446c43: MOV ECX,dword ptr [0x0084a860]
//   Label: LAB_00446c43
//   XREF to: 0084a860 (READ)
// 00446c49: INC EDX
// 00446c4a: ADD EAX,0x28
// 00446c4d: CMP EDX,ECX
// 00446c4f: JL 0x00446c01
//   XREF to: 00446c01 (CONDITIONAL_JUMP)
// 00446c51: MOV EAX,[0x0084a860]
//   Label: LAB_00446c51
//   XREF to: 0084a860 (READ)
// 00446c56: MOV dword ptr [ESP + 0x2c],EAX
// 00446c5a: MOV EAX,dword ptr [EBP + 0x14]
// 00446c5d: MOV EBX,dword ptr [0x0084a88c]
//   XREF to: 0084a88c (READ)
// 00446c63: CMP EBX,dword ptr [EAX + 0x28]
// 00446c66: JL 0x00446df8
//   XREF to: 00446df8 (CONDITIONAL_JUMP)
// 00446c6c: MOV EAX,dword ptr [EBP + 0x14]
// 00446c6f: MOV EDI,dword ptr [0x0084a870]
//   XREF to: 0084a870 (READ)
// 00446c75: MOV EDX,dword ptr [0x0084a85c]
//   XREF to: 0084a85c (READ)
// 00446c7b: XOR ESI,ESI
// 00446c7d: MOV EAX,dword ptr [EAX + 0x28]
// 00446c80: SUB EDX,0x2
// 00446c83: ADD EAX,EDI
// 00446c85: MOV dword ptr [ESP + 0x30],ESI
// 00446c89: LEA EBX,[EAX + -0x1]
// 00446c8c: TEST EDX,EDX
// 00446c8e: JL 0x00446ccf
//   XREF to: 00446ccf (CONDITIONAL_JUMP)
// 00446c90: IMUL EAX,EDX,0x4c
// 00446c93: ADD EAX,0x83c1dc
//   XREF to: 0083c1dc (DATA)
// 00446c98: MOV ESI,dword ptr [EBP + 0x14]
//   Label: LAB_00446c98
// 00446c9b: MOV ECX,dword ptr [EAX + 0x10]
//   XREF to: 0083c1ec (DATA)
//   XREF to: 0083c1a0 (DATA)
// 00446c9e: CMP ECX,dword ptr [ESI + 0x10]
// 00446ca1: JNZ 0x00446cc7
//   XREF to: 00446cc7 (CONDITIONAL_JUMP)
// 00446ca3: MOV EDI,dword ptr [ESI + 0x24]
// 00446ca6: CMP EDI,dword ptr [EAX + 0x24]
//   XREF to: 0083c200 (DATA)
//   XREF to: 0083c1b4 (DATA)
// 00446ca9: JL 0x00446cc7
//   XREF to: 00446cc7 (CONDITIONAL_JUMP)
// 00446cab: MOV EDI,dword ptr [ESI + 0x28]
// 00446cae: CMP EDI,dword ptr [EAX + 0x28]
//   XREF to: 0083c204 (DATA)
//   XREF to: 0083c1b8 (DATA)
// 00446cb1: JGE 0x00446cc7
//   XREF to: 00446cc7 (CONDITIONAL_JUMP)
// 00446cb3: CMP EBX,dword ptr [EAX + 0x20]
//   XREF to: 0083c1fc (DATA)
//   XREF to: 0083c1b0 (DATA)
// 00446cb6: JLE 0x00446cc7
//   XREF to: 00446cc7 (CONDITIONAL_JUMP)
// 00446cb8: MOV ESI,dword ptr [ESP + 0x30]
// 00446cbc: MOV ECX,dword ptr [EAX + 0x24]
//   XREF to: 0083c200 (DATA)
//   XREF to: 0083c1b4 (DATA)
// 00446cbf: CMP ECX,ESI
// 00446cc1: JLE 0x00446cc7
//   XREF to: 00446cc7 (CONDITIONAL_JUMP)
// 00446cc3: MOV dword ptr [ESP + 0x30],ECX
// 00446cc7: DEC EDX
//   Label: LAB_00446cc7
// 00446cc8: SUB EAX,0x4c
// 00446ccb: TEST EDX,EDX
// 00446ccd: JGE 0x00446c98
//   XREF to: 00446c98 (CONDITIONAL_JUMP)
// 00446ccf: MOV EDX,dword ptr [EBP + 0x14]
//   Label: LAB_00446ccf
// 00446cd2: MOV EAX,dword ptr [ESP + 0x30]
// 00446cd6: CMP EAX,dword ptr [EDX + 0x24]
// 00446cd9: JGE 0x00446df8
//   XREF to: 00446df8 (CONDITIONAL_JUMP)
// 00446cdf: MOV EAX,[0x0084a85c]
//   XREF to: 0084a85c (READ)
// 00446ce4: SUB EAX,0x2
// 00446ce7: MOV dword ptr [ESP + 0x80],EAX
// 00446cee: TEST EAX,EAX
// 00446cf0: JL 0x00446da9
//   XREF to: 00446da9 (CONDITIONAL_JUMP)
// 00446cf6: IMUL EAX,EAX,0x4c
// 00446cf9: ADD EAX,0x83c1dc
//   XREF to: 0083c1dc (DATA)
// 00446cfe: MOV dword ptr [ESP + 0x60],EAX
// 00446d02: MOV EDX,dword ptr [EBP + 0x14]
//   Label: LAB_00446d02
// 00446d05: MOV EAX,dword ptr [ESP + 0x60]
// 00446d09: MOV ECX,dword ptr [EDX + 0x10]
// 00446d0c: CMP ECX,dword ptr [EAX + 0x10]
//   XREF to: 0083c1ec (DATA)
//   XREF to: 0083c1a0 (DATA)
// 00446d0f: JNZ 0x00446d87
//   XREF to: 00446d87 (CONDITIONAL_JUMP)
// 00446d15: MOV EAX,dword ptr [ESP + 0x60]
// 00446d19: MOV EBX,dword ptr [EDX + 0x24]
// 00446d1c: CMP EBX,dword ptr [EAX + 0x24]
//   XREF to: 0083c200 (DATA)
//   XREF to: 0083c1b4 (DATA)
// 00446d1f: JL 0x00446d87
//   XREF to: 00446d87 (CONDITIONAL_JUMP)
// 00446d21: MOV EAX,dword ptr [ESP + 0x60]
// 00446d25: MOV ESI,dword ptr [EDX + 0x28]
// 00446d28: CMP ESI,dword ptr [EAX + 0x28]
//   XREF to: 0083c204 (DATA)
//   XREF to: 0083c1b8 (DATA)
// 00446d2b: JGE 0x00446d87
//   XREF to: 00446d87 (CONDITIONAL_JUMP)
// 00446d2d: MOV EAX,dword ptr [ESP + 0x60]
// 00446d31: MOV EDI,dword ptr [ESP + 0x30]
// 00446d35: CMP EDI,dword ptr [EAX + 0x24]
//   XREF to: 0083c200 (DATA)
//   XREF to: 0083c1b4 (DATA)
// 00446d38: JGE 0x00446d87
//   XREF to: 00446d87 (CONDITIONAL_JUMP)
// 00446d3a: MOV EBX,dword ptr [ESP + 0x60]
// 00446d3e: MOV EAX,[0x0084a860]
//   XREF to: 0084a860 (READ)
// 00446d43: MOV dword ptr [ESP + 0x34],ECX
// 00446d47: MOV ECX,ESI
// 00446d49: MOV EBX,dword ptr [EBX + 0x24]
//   XREF to: 0083c200 (DATA)
// 00446d4c: TEST EAX,EAX
// 00446d4e: JLE 0x0044703f
//   XREF to: 0044703f (CONDITIONAL_JUMP)
// 00446d54: MOV ESI,dword ptr [0x0084a860]
//   XREF to: 0084a860 (READ)
// 00446d5a: XOR EAX,EAX
// 00446d5c: IMUL EDX,ESI,0x28
// 00446d5f: MOV EDI,dword ptr [ESP + 0x34]
//   Label: LAB_00446d5f
// 00446d63: CMP EDI,dword ptr [EAX + 0x840c14]
//   XREF to: 00840c14 (READ)
//   XREF to: 00840c3c (READ)
// 00446d69: JNZ 0x00447034
//   XREF to: 00447034 (CONDITIONAL_JUMP)
// 00446d6f: CMP EBX,dword ptr [EAX + 0x840c18]
//   XREF to: 00840c18 (READ)
//   XREF to: 00840c40 (READ)
// 00446d75: JNZ 0x00447034
//   XREF to: 00447034 (CONDITIONAL_JUMP)
// 00446d7b: CMP ECX,dword ptr [EAX + 0x840c1c]
//   XREF to: 00840c1c (READ)
//   XREF to: 00840c44 (READ)
// 00446d81: JNZ 0x00447034
//   XREF to: 00447034 (CONDITIONAL_JUMP)
// 00446d87: MOV EDI,dword ptr [ESP + 0x60]
//   Label: LAB_00446d87
// 00446d8b: MOV EAX,dword ptr [ESP + 0x80]
// 00446d92: SUB EDI,0x4c
// 00446d95: DEC EAX
// 00446d96: MOV dword ptr [ESP + 0x60],EDI
// 00446d9a: MOV dword ptr [ESP + 0x80],EAX
// 00446da1: TEST EAX,EAX
// 00446da3: JGE 0x00446d02
//   XREF to: 00446d02 (CONDITIONAL_JUMP)
// 00446da9: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_00446da9
// 00446dac: MOV ECX,dword ptr [ESP + 0x30]
// 00446db0: MOV EBX,dword ptr [EBP + 0x14]
// 00446db3: MOV ESI,dword ptr [0x0084a860]
//   XREF to: 0084a860 (READ)
// 00446db9: MOV EAX,dword ptr [EAX + 0x10]
// 00446dbc: MOV EBX,dword ptr [EBX + 0x28]
// 00446dbf: MOV dword ptr [ESP + 0x3c],EAX
// 00446dc3: TEST ESI,ESI
// 00446dc5: JLE 0x00447131
//   XREF to: 00447131 (CONDITIONAL_JUMP)
// 00446dcb: XOR EAX,EAX
// 00446dcd: IMUL EDX,ESI,0x28
// 00446dd0: MOV EDI,dword ptr [ESP + 0x3c]
//   Label: LAB_00446dd0
// 00446dd4: CMP EDI,dword ptr [EAX + 0x840c14]
//   XREF to: 00840c14 (READ)
//   XREF to: 00840c3c (READ)
// 00446dda: JNZ 0x00447126
//   XREF to: 00447126 (CONDITIONAL_JUMP)
// 00446de0: CMP ECX,dword ptr [EAX + 0x840c18]
//   XREF to: 00840c18 (READ)
//   XREF to: 00840c40 (READ)
// 00446de6: JNZ 0x00447126
//   XREF to: 00447126 (CONDITIONAL_JUMP)
// 00446dec: CMP EBX,dword ptr [EAX + 0x840c1c]
//   XREF to: 00840c1c (READ)
//   XREF to: 00840c44 (READ)
// 00446df2: JNZ 0x00447126
//   XREF to: 00447126 (CONDITIONAL_JUMP)
// 00446df8: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_00446df8
// 00446dfb: MOV EDX,dword ptr [0x0084a88c]
//   XREF to: 0084a88c (READ)
// 00446e01: CMP EDX,dword ptr [EAX + 0x28]
// 00446e04: JL 0x00446f96
//   XREF to: 00446f96 (CONDITIONAL_JUMP)
// 00446e0a: MOV EAX,dword ptr [EBP + 0x14]
// 00446e0d: MOV EBX,dword ptr [0x0084a870]
//   XREF to: 0084a870 (READ)
// 00446e13: MOV EDX,dword ptr [0x0084a85c]
//   XREF to: 0084a85c (READ)
// 00446e19: XOR ECX,ECX
// 00446e1b: MOV EAX,dword ptr [EAX + 0x24]
// 00446e1e: SUB EDX,0x2
// 00446e21: ADD EAX,EBX
// 00446e23: MOV dword ptr [ESP + 0x44],ECX
// 00446e27: LEA EBX,[EAX + -0x1]
// 00446e2a: TEST EDX,EDX
// 00446e2c: JL 0x00446e6d
//   XREF to: 00446e6d (CONDITIONAL_JUMP)
// 00446e2e: IMUL EAX,EDX,0x4c
// 00446e31: ADD EAX,0x83c1dc
//   XREF to: 0083c1dc (DATA)
// 00446e36: MOV ESI,dword ptr [EBP + 0x14]
//   Label: LAB_00446e36
// 00446e39: MOV ECX,dword ptr [EAX + 0x10]
//   XREF to: 0083c1ec (DATA)
//   XREF to: 0083c1a0 (DATA)
// 00446e3c: CMP ECX,dword ptr [ESI + 0x10]
// 00446e3f: JNZ 0x00446e65
//   XREF to: 00446e65 (CONDITIONAL_JUMP)
// 00446e41: MOV EDI,dword ptr [ESI + 0x28]
// 00446e44: CMP EDI,dword ptr [EAX + 0x28]
//   XREF to: 0083c204 (DATA)
//   XREF to: 0083c1b8 (DATA)
// 00446e47: JL 0x00446e65
//   XREF to: 00446e65 (CONDITIONAL_JUMP)
// 00446e49: MOV EDI,dword ptr [ESI + 0x24]
// 00446e4c: CMP EDI,dword ptr [EAX + 0x24]
//   XREF to: 0083c200 (DATA)
//   XREF to: 0083c1b4 (DATA)
// 00446e4f: JGE 0x00446e65
//   XREF to: 00446e65 (CONDITIONAL_JUMP)
// 00446e51: CMP EBX,dword ptr [EAX + 0x1c]
//   XREF to: 0083c1f8 (DATA)
//   XREF to: 0083c1ac (DATA)
// 00446e54: JLE 0x00446e65
//   XREF to: 00446e65 (CONDITIONAL_JUMP)
// 00446e56: MOV ESI,dword ptr [ESP + 0x44]
// 00446e5a: MOV ECX,dword ptr [EAX + 0x28]
//   XREF to: 0083c204 (DATA)
//   XREF to: 0083c1b8 (DATA)
// 00446e5d: CMP ECX,ESI
// 00446e5f: JLE 0x00446e65
//   XREF to: 00446e65 (CONDITIONAL_JUMP)
// 00446e61: MOV dword ptr [ESP + 0x44],ECX
// 00446e65: DEC EDX
//   Label: LAB_00446e65
// 00446e66: SUB EAX,0x4c
// 00446e69: TEST EDX,EDX
// 00446e6b: JGE 0x00446e36
//   XREF to: 00446e36 (CONDITIONAL_JUMP)
// 00446e6d: MOV EDX,dword ptr [EBP + 0x14]
//   Label: LAB_00446e6d
// 00446e70: MOV EAX,dword ptr [ESP + 0x44]
// 00446e74: CMP EAX,dword ptr [EDX + 0x28]
// 00446e77: JGE 0x00446f96
//   XREF to: 00446f96 (CONDITIONAL_JUMP)
// 00446e7d: MOV EAX,[0x0084a85c]
//   XREF to: 0084a85c (READ)
// 00446e82: SUB EAX,0x2
// 00446e85: MOV dword ptr [ESP + 0x8c],EAX
// 00446e8c: TEST EAX,EAX
// 00446e8e: JL 0x00446f47
//   XREF to: 00446f47 (CONDITIONAL_JUMP)
// 00446e94: IMUL EAX,EAX,0x4c
// 00446e97: ADD EAX,0x83c1dc
//   XREF to: 0083c1dc (DATA)
// 00446e9c: MOV dword ptr [ESP + 0x6c],EAX
// 00446ea0: MOV EDX,dword ptr [EBP + 0x14]
//   Label: LAB_00446ea0
// 00446ea3: MOV EAX,dword ptr [ESP + 0x6c]
// 00446ea7: MOV ECX,dword ptr [EDX + 0x10]
// 00446eaa: CMP ECX,dword ptr [EAX + 0x10]
//   XREF to: 0083c1ec (DATA)
//   XREF to: 0083c1a0 (DATA)
// 00446ead: JNZ 0x00446f25
//   XREF to: 00446f25 (CONDITIONAL_JUMP)
// 00446eb3: MOV EAX,dword ptr [ESP + 0x6c]
// 00446eb7: MOV EBX,dword ptr [EDX + 0x28]
// 00446eba: CMP EBX,dword ptr [EAX + 0x28]
//   XREF to: 0083c204 (DATA)
//   XREF to: 0083c1b8 (DATA)
// 00446ebd: JL 0x00446f25
//   XREF to: 00446f25 (CONDITIONAL_JUMP)
// 00446ebf: MOV EAX,dword ptr [ESP + 0x6c]
// 00446ec3: MOV ESI,dword ptr [EDX + 0x24]
// 00446ec6: CMP ESI,dword ptr [EAX + 0x24]
//   XREF to: 0083c200 (DATA)
//   XREF to: 0083c1b4 (DATA)
// 00446ec9: JGE 0x00446f25
//   XREF to: 00446f25 (CONDITIONAL_JUMP)
// 00446ecb: MOV EAX,dword ptr [ESP + 0x6c]
// 00446ecf: MOV EDI,dword ptr [ESP + 0x44]
// 00446ed3: CMP EDI,dword ptr [EAX + 0x28]
//   XREF to: 0083c204 (DATA)
//   XREF to: 0083c1b8 (DATA)
// 00446ed6: JGE 0x00446f25
//   XREF to: 00446f25 (CONDITIONAL_JUMP)
// 00446ed8: MOV dword ptr [ESP + 0x48],ECX
// 00446edc: MOV ECX,dword ptr [ESP + 0x6c]
// 00446ee0: MOV EAX,[0x0084a860]
//   XREF to: 0084a860 (READ)
// 00446ee5: MOV EBX,ESI
// 00446ee7: MOV ECX,dword ptr [ECX + 0x28]
//   XREF to: 0083c204 (DATA)
// 00446eea: TEST EAX,EAX
// 00446eec: JLE 0x00447221
//   XREF to: 00447221 (CONDITIONAL_JUMP)
// 00446ef2: MOV ESI,dword ptr [0x0084a860]
//   XREF to: 0084a860 (READ)
// 00446ef8: XOR EAX,EAX
// 00446efa: IMUL EDX,ESI,0x28
// 00446efd: MOV EDI,dword ptr [ESP + 0x48]
//   Label: LAB_00446efd
// 00446f01: CMP EDI,dword ptr [EAX + 0x840c14]
//   XREF to: 00840c14 (READ)
//   XREF to: 00840c3c (READ)
// 00446f07: JNZ 0x00447216
//   XREF to: 00447216 (CONDITIONAL_JUMP)
// 00446f0d: CMP EBX,dword ptr [EAX + 0x840c18]
//   XREF to: 00840c18 (READ)
//   XREF to: 00840c40 (READ)
// 00446f13: JNZ 0x00447216
//   XREF to: 00447216 (CONDITIONAL_JUMP)
// 00446f19: CMP ECX,dword ptr [EAX + 0x840c1c]
//   XREF to: 00840c1c (READ)
//   XREF to: 00840c44 (READ)
// 00446f1f: JNZ 0x00447216
//   XREF to: 00447216 (CONDITIONAL_JUMP)
// 00446f25: MOV EDI,dword ptr [ESP + 0x6c]
//   Label: LAB_00446f25
// 00446f29: MOV EAX,dword ptr [ESP + 0x8c]
// 00446f30: SUB EDI,0x4c
// 00446f33: DEC EAX
// 00446f34: MOV dword ptr [ESP + 0x6c],EDI
// 00446f38: MOV dword ptr [ESP + 0x8c],EAX
// 00446f3f: TEST EAX,EAX
// 00446f41: JGE 0x00446ea0
//   XREF to: 00446ea0 (CONDITIONAL_JUMP)
// 00446f47: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_00446f47
// 00446f4a: MOV ECX,dword ptr [EBP + 0x14]
// 00446f4d: MOV EBX,dword ptr [ESP + 0x44]
// 00446f51: MOV ESI,dword ptr [0x0084a860]
//   XREF to: 0084a860 (READ)
// 00446f57: MOV EAX,dword ptr [EAX + 0x10]
// 00446f5a: MOV ECX,dword ptr [ECX + 0x24]
// 00446f5d: MOV dword ptr [ESP + 0x50],EAX
// 00446f61: TEST ESI,ESI
// 00446f63: JLE 0x00447313
//   XREF to: 00447313 (CONDITIONAL_JUMP)
// 00446f69: XOR EAX,EAX
// 00446f6b: IMUL EDX,ESI,0x28
// 00446f6e: MOV EDI,dword ptr [ESP + 0x50]
//   Label: LAB_00446f6e
// 00446f72: CMP EDI,dword ptr [EAX + 0x840c14]
//   XREF to: 00840c14 (READ)
//   XREF to: 00840c3c (READ)
// 00446f78: JNZ 0x00447308
//   XREF to: 00447308 (CONDITIONAL_JUMP)
// 00446f7e: CMP ECX,dword ptr [EAX + 0x840c18]
//   XREF to: 00840c18 (READ)
//   XREF to: 00840c40 (READ)
// 00446f84: JNZ 0x00447308
//   XREF to: 00447308 (CONDITIONAL_JUMP)
// 00446f8a: CMP EBX,dword ptr [EAX + 0x840c1c]
//   XREF to: 00840c1c (READ)
//   XREF to: 00840c44 (READ)
// 00446f90: JNZ 0x00447308
//   XREF to: 00447308 (CONDITIONAL_JUMP)
// 00446f96: CMP dword ptr [0x0084a8a0],0x0
//   Label: LAB_00446f96
//   XREF to: 0084a8a0 (READ)
// 00446f9d: JZ 0x00446fad
//   XREF to: 00446fad (CONDITIONAL_JUMP)
// 00446f9f: PUSH 0x0
// 00446fa1: PUSH 0x0
// 00446fa3: PUSH 0x0
// 00446fa5: CALL shape_cramtex.cpp_visualizeTextureAtlas_FUN_00447f20
//   XREF to: 00447f20 (UNCONDITIONAL_CALL)
// 00446faa: ADD ESP,0xc
// 00446fad: IMUL EAX,dword ptr [0x0084a85c],0x4c
//   Label: LAB_00446fad
//   XREF to: 0084a85c (READ)
// 00446fb4: ADD EAX,0x83c1dc
//   XREF to: 0083c1dc (DATA)
// 00446fb9: PUSH EAX
// 00446fba: CALL shape_cramtex.cpp_runInteractiveAtlasGeneration_FUN_00446160
//   XREF to: 00446160 (UNCONDITIONAL_CALL)
// 00446fbf: ADD ESP,0x4
// 00446fc2: MOV EDX,EAX
// 00446fc4: TEST EAX,EAX
// 00446fc6: JLE 0x00446fcb
//   XREF to: 00446fcb (CONDITIONAL_JUMP)
// 00446fc8: LEA EDX,[EAX + -0x1]
// 00446fcb: MOV EAX,dword ptr [ESP + 0x2c]
//   Label: LAB_00446fcb
// 00446fcf: MOV EBX,EDX
// 00446fd1: MOV [0x0084a860],EAX
//   XREF to: 0084a860 (WRITE)
// 00446fd6: TEST EAX,EAX
// 00446fd8: JLE 0x00446ffd
//   XREF to: 00446ffd (CONDITIONAL_JUMP)
// 00446fda: MOV ECX,dword ptr [ESP + 0x2c]
// 00446fde: MOV ESI,dword ptr [EBP + 0x14]
// 00446fe1: XOR EAX,EAX
// 00446fe3: IMUL EDX,ECX,0x28
// 00446fe6: CMP ESI,dword ptr [EAX + 0x840c2c]
//   Label: LAB_00446fe6
//   XREF to: 00840c2c (READ)
//   XREF to: 00840c54 (READ)
// 00446fec: JNZ 0x00446ff6
//   XREF to: 00446ff6 (CONDITIONAL_JUMP)
// 00446fee: XOR EDI,EDI
// 00446ff0: MOV dword ptr [EAX + 0x840c2c],EDI
//   XREF to: 00840c2c (WRITE)
//   XREF to: 00840c54 (WRITE)
// 00446ff6: ADD EAX,0x28
//   Label: LAB_00446ff6
// 00446ff9: CMP EAX,EDX
// 00446ffb: JL 0x00446fe6
//   XREF to: 00446fe6 (CONDITIONAL_JUMP)
// 00446ffd: MOV ESI,dword ptr [0x0083c1d8]
//   Label: LAB_00446ffd
//   XREF to: 0083c1d8 (READ)
// 00447003: CMP ESI,0x64
// 00447006: JGE 0x004473f8
//   XREF to: 004473f8 (CONDITIONAL_JUMP)
// 0044700c: LEA EAX,[ESI + 0x1]
// 0044700f: MOV [0x0083c1d8],EAX
//   XREF to: 0083c1d8 (WRITE)
// 00447014: TEST EBX,EBX
//   Label: LAB_00447014
// 00447016: JZ 0x00446bbc
//   XREF to: 00446bbc (CONDITIONAL_JUMP)
// 0044701c: MOV EAX,dword ptr [ESP + 0x10]
// 00447020: MOV [0x00887940],EAX
//   XREF to: 00887940 (WRITE)
// 00447025: MOV EAX,EBX
// 00447027: DEC dword ptr [0x0084a85c]
//   XREF to: 0084a85c (READ_WRITE)
// 0044702d: MOV ESP,EBP
// 0044702f: POP EBP
// 00447030: POP EDI
// 00447031: POP ESI
// 00447032: POP EBX
// 00447033: RET
// 00447034: ADD EAX,0x28
//   Label: LAB_00447034
// 00447037: CMP EAX,EDX
// 00447039: JL 0x00446d5f
//   XREF to: 00446d5f (CONDITIONAL_JUMP)
// 0044703f: XOR EAX,EAX
//   Label: LAB_0044703f
// 00447041: MOV EDX,dword ptr [0x0084a860]
//   XREF to: 0084a860 (READ)
// 00447047: MOV dword ptr [ESP + 0x38],EAX
// 0044704b: IMUL EAX,EDX,0x28
// 0044704e: ADD EAX,0x840c14
//   XREF to: 00840c14 (DATA)
// 00447053: MOV dword ptr [ESP + 0x5c],EAX
// 00447057: CMP dword ptr [ESP + 0x38],0x0
//   Label: LAB_00447057
// 0044705c: JZ 0x004470c7
//   XREF to: 004470c7 (CONDITIONAL_JUMP)
// 00447062: MOV EAX,[0x0084a86c]
//   XREF to: 0084a86c (READ)
// 00447067: MOV ESI,dword ptr [0x0084a868]
//   XREF to: 0084a868 (READ)
// 0044706d: ADD EAX,EBX
//   Label: LAB_0044706d
// 0044706f: ADD ESI,ECX
// 00447071: MOV dword ptr [ESP + 0x84],EAX
// 00447078: MOV EDX,dword ptr [0x0084a85c]
//   XREF to: 0084a85c (READ)
// 0044707e: DEC EDX
// 0044707f: TEST EDX,EDX
// 00447081: JL 0x004470af
//   XREF to: 004470af (CONDITIONAL_JUMP)
// 00447083: IMUL EAX,EDX,0x4c
// 00447086: ADD EAX,0x83c1dc
//   XREF to: 0083c1dc (DATA)
// 0044708b: MOV EDI,dword ptr [EAX + 0x10]
//   Label: LAB_0044708b
//   XREF to: 0083c1ec (DATA)
//   XREF to: 0083c1a0 (DATA)
// 0044708e: CMP EDI,dword ptr [ESP + 0x34]
// 00447092: JNZ 0x004470d4
//   XREF to: 004470d4 (CONDITIONAL_JUMP)
// 00447094: CMP EBX,dword ptr [EAX + 0x24]
//   XREF to: 0083c200 (DATA)
//   XREF to: 0083c1b4 (DATA)
// 00447097: JGE 0x004470d4
//   XREF to: 004470d4 (CONDITIONAL_JUMP)
// 00447099: CMP ECX,dword ptr [EAX + 0x28]
//   XREF to: 0083c204 (DATA)
//   XREF to: 0083c1b8 (DATA)
// 0044709c: JGE 0x004470d4
//   XREF to: 004470d4 (CONDITIONAL_JUMP)
// 0044709e: MOV EDI,dword ptr [ESP + 0x84]
// 004470a5: CMP EDI,dword ptr [EAX + 0x1c]
//   XREF to: 0083c1f8 (DATA)
//   XREF to: 0083c1ac (DATA)
// 004470a8: JLE 0x004470d4
//   XREF to: 004470d4 (CONDITIONAL_JUMP)
// 004470aa: CMP ESI,dword ptr [EAX + 0x20]
//   XREF to: 0083c1fc (DATA)
//   XREF to: 0083c1b0 (DATA)
// 004470ad: JLE 0x004470d4
//   XREF to: 004470d4 (CONDITIONAL_JUMP)
// 004470af: TEST EDX,EDX
//   Label: LAB_004470af
// 004470b1: JL 0x004470de
//   XREF to: 004470de (CONDITIONAL_JUMP)
// 004470b3: MOV ESI,dword ptr [ESP + 0x38]
//   Label: LAB_004470b3
// 004470b7: INC ESI
// 004470b8: MOV dword ptr [ESP + 0x38],ESI
// 004470bc: CMP ESI,0x1
// 004470bf: JG 0x00446d87
//   XREF to: 00446d87 (CONDITIONAL_JUMP)
// 004470c5: JMP 0x00447057
//   XREF to: 00447057 (UNCONDITIONAL_JUMP)
// 004470c7: MOV EAX,[0x0084a868]
//   Label: LAB_004470c7
//   XREF to: 0084a868 (READ)
// 004470cc: MOV ESI,dword ptr [0x0084a86c]
//   XREF to: 0084a86c (READ)
// 004470d2: JMP 0x0044706d
//   XREF to: 0044706d (UNCONDITIONAL_JUMP)
// 004470d4: DEC EDX
//   Label: LAB_004470d4
// 004470d5: SUB EAX,0x4c
// 004470d8: TEST EDX,EDX
// 004470da: JGE 0x0044708b
//   XREF to: 0044708b (CONDITIONAL_JUMP)
// 004470dc: JMP 0x004470af
//   XREF to: 004470af (UNCONDITIONAL_JUMP)
// 004470de: MOV EDX,dword ptr [ESP + 0x5c]
//   Label: LAB_004470de
// 004470e2: MOV dword ptr [EDX + 0x18],0x0
//   XREF to: 00840c2c (DATA)
// 004470e9: MOV EAX,dword ptr [ESP + 0x34]
// 004470ed: MOV dword ptr [EDX + 0x24],0x1
//   XREF to: 00840c38 (DATA)
// 004470f4: MOV dword ptr [EDX],EAX
//   XREF to: 00840c14 (DATA)
// 004470f6: MOV dword ptr [EDX + 0x4],EBX
//   XREF to: 00840c18 (DATA)
// 004470f9: MOV dword ptr [EDX + 0x8],ECX
//   XREF to: 00840c1c (DATA)
// 004470fc: MOV EAX,dword ptr [ESP + 0x84]
// 00447103: MOV dword ptr [EDX + 0xc],EAX
//   XREF to: 00840c20 (DATA)
// 00447106: MOV EAX,dword ptr [ESP + 0x38]
// 0044710a: MOV dword ptr [EDX + 0x14],EAX
//   XREF to: 00840c28 (DATA)
// 0044710d: LEA EAX,[EDX + 0x28]
// 00447110: MOV dword ptr [EDX + 0x10],ESI
//   XREF to: 00840c24 (DATA)
// 00447113: MOV EDX,dword ptr [0x0084a860]
//   XREF to: 0084a860 (READ)
// 00447119: INC EDX
// 0044711a: MOV dword ptr [ESP + 0x5c],EAX
// 0044711e: MOV dword ptr [0x0084a860],EDX
//   XREF to: 0084a860 (WRITE)
// 00447124: JMP 0x004470b3
//   XREF to: 004470b3 (UNCONDITIONAL_JUMP)
// 00447126: ADD EAX,0x28
//   Label: LAB_00447126
// 00447129: CMP EAX,EDX
// 0044712b: JL 0x00446dd0
//   XREF to: 00446dd0 (CONDITIONAL_JUMP)
// 00447131: IMUL EAX,dword ptr [0x0084a860],0x28
//   Label: LAB_00447131
//   XREF to: 0084a860 (READ)
// 00447138: XOR EDX,EDX
// 0044713a: ADD EAX,0x840c14
//   XREF to: 00840c14 (DATA)
// 0044713f: MOV dword ptr [ESP + 0x40],EDX
// 00447143: MOV dword ptr [ESP + 0x64],EAX
// 00447147: CMP dword ptr [ESP + 0x40],0x0
//   Label: LAB_00447147
// 0044714c: JZ 0x004471b7
//   XREF to: 004471b7 (CONDITIONAL_JUMP)
// 00447152: MOV EAX,[0x0084a868]
//   XREF to: 0084a868 (READ)
// 00447157: MOV ESI,dword ptr [0x0084a86c]
//   XREF to: 0084a86c (READ)
// 0044715d: ADD EAX,EBX
//   Label: LAB_0044715d
// 0044715f: ADD ESI,ECX
// 00447161: MOV dword ptr [ESP + 0x88],EAX
// 00447168: MOV EDX,dword ptr [0x0084a85c]
//   XREF to: 0084a85c (READ)
// 0044716e: DEC EDX
// 0044716f: TEST EDX,EDX
// 00447171: JL 0x0044719f
//   XREF to: 0044719f (CONDITIONAL_JUMP)
// 00447173: IMUL EAX,EDX,0x4c
// 00447176: ADD EAX,0x83c1dc
//   XREF to: 0083c1dc (DATA)
// 0044717b: MOV EDI,dword ptr [EAX + 0x10]
//   Label: LAB_0044717b
//   XREF to: 0083c1ec (DATA)
//   XREF to: 0083c1a0 (DATA)
// 0044717e: CMP EDI,dword ptr [ESP + 0x3c]
// 00447182: JNZ 0x004471c4
//   XREF to: 004471c4 (CONDITIONAL_JUMP)
// 00447184: CMP ECX,dword ptr [EAX + 0x24]
//   XREF to: 0083c200 (DATA)
//   XREF to: 0083c1b4 (DATA)
// 00447187: JGE 0x004471c4
//   XREF to: 004471c4 (CONDITIONAL_JUMP)
// 00447189: CMP EBX,dword ptr [EAX + 0x28]
//   XREF to: 0083c204 (DATA)
//   XREF to: 0083c1b8 (DATA)
// 0044718c: JGE 0x004471c4
//   XREF to: 004471c4 (CONDITIONAL_JUMP)
// 0044718e: CMP ESI,dword ptr [EAX + 0x1c]
//   XREF to: 0083c1f8 (DATA)
//   XREF to: 0083c1ac (DATA)
// 00447191: JLE 0x004471c4
//   XREF to: 004471c4 (CONDITIONAL_JUMP)
// 00447193: MOV EDI,dword ptr [ESP + 0x88]
// 0044719a: CMP EDI,dword ptr [EAX + 0x20]
//   XREF to: 0083c1fc (DATA)
//   XREF to: 0083c1b0 (DATA)
// 0044719d: JLE 0x004471c4
//   XREF to: 004471c4 (CONDITIONAL_JUMP)
// 0044719f: TEST EDX,EDX
//   Label: LAB_0044719f
// 004471a1: JL 0x004471ce
//   XREF to: 004471ce (CONDITIONAL_JUMP)
// 004471a3: MOV ESI,dword ptr [ESP + 0x40]
//   Label: LAB_004471a3
// 004471a7: INC ESI
// 004471a8: MOV dword ptr [ESP + 0x40],ESI
// 004471ac: CMP ESI,0x1
// 004471af: JG 0x00446df8
//   XREF to: 00446df8 (CONDITIONAL_JUMP)
// 004471b5: JMP 0x00447147
//   XREF to: 00447147 (UNCONDITIONAL_JUMP)
// 004471b7: MOV EAX,[0x0084a86c]
//   Label: LAB_004471b7
//   XREF to: 0084a86c (READ)
// 004471bc: MOV ESI,dword ptr [0x0084a868]
//   XREF to: 0084a868 (READ)
// 004471c2: JMP 0x0044715d
//   XREF to: 0044715d (UNCONDITIONAL_JUMP)
// 004471c4: DEC EDX
//   Label: LAB_004471c4
// 004471c5: SUB EAX,0x4c
// 004471c8: TEST EDX,EDX
// 004471ca: JGE 0x0044717b
//   XREF to: 0044717b (CONDITIONAL_JUMP)
// 004471cc: JMP 0x0044719f
//   XREF to: 0044719f (UNCONDITIONAL_JUMP)
// 004471ce: MOV EDX,dword ptr [ESP + 0x64]
//   Label: LAB_004471ce
// 004471d2: MOV dword ptr [EDX + 0x18],0x0
//   XREF to: 00840c2c (DATA)
// 004471d9: MOV EAX,dword ptr [ESP + 0x3c]
// 004471dd: MOV dword ptr [EDX + 0x24],0x1
//   XREF to: 00840c38 (DATA)
// 004471e4: MOV dword ptr [EDX],EAX
//   XREF to: 00840c14 (DATA)
// 004471e6: MOV dword ptr [EDX + 0x4],ECX
//   XREF to: 00840c18 (DATA)
// 004471e9: MOV dword ptr [EDX + 0x8],EBX
//   XREF to: 00840c1c (DATA)
// 004471ec: MOV EAX,dword ptr [ESP + 0x88]
// 004471f3: MOV dword ptr [EDX + 0x10],EAX
//   XREF to: 00840c24 (DATA)
// 004471f6: MOV EAX,dword ptr [ESP + 0x40]
// 004471fa: MOV dword ptr [EDX + 0x14],EAX
//   XREF to: 00840c28 (DATA)
// 004471fd: LEA EAX,[EDX + 0x28]
// 00447200: MOV dword ptr [EDX + 0xc],ESI
//   XREF to: 00840c20 (DATA)
// 00447203: MOV EDX,dword ptr [0x0084a860]
//   XREF to: 0084a860 (READ)
// 00447209: INC EDX
// 0044720a: MOV dword ptr [ESP + 0x64],EAX
// 0044720e: MOV dword ptr [0x0084a860],EDX
//   XREF to: 0084a860 (WRITE)
// 00447214: JMP 0x004471a3
//   XREF to: 004471a3 (UNCONDITIONAL_JUMP)
// 00447216: ADD EAX,0x28
//   Label: LAB_00447216
// 00447219: CMP EAX,EDX
// 0044721b: JL 0x00446efd
//   XREF to: 00446efd (CONDITIONAL_JUMP)
// 00447221: XOR EAX,EAX
//   Label: LAB_00447221
// 00447223: MOV EDX,dword ptr [0x0084a860]
//   XREF to: 0084a860 (READ)
// 00447229: MOV dword ptr [ESP + 0x4c],EAX
// 0044722d: IMUL EAX,EDX,0x28
// 00447230: ADD EAX,0x840c14
//   XREF to: 00840c14 (DATA)
// 00447235: MOV dword ptr [ESP + 0x68],EAX
// 00447239: CMP dword ptr [ESP + 0x4c],0x0
//   Label: LAB_00447239
// 0044723e: JZ 0x004472a9
//   XREF to: 004472a9 (CONDITIONAL_JUMP)
// 00447244: MOV EAX,[0x0084a86c]
//   XREF to: 0084a86c (READ)
// 00447249: MOV ESI,dword ptr [0x0084a868]
//   XREF to: 0084a868 (READ)
// 0044724f: ADD EAX,EBX
//   Label: LAB_0044724f
// 00447251: ADD ESI,ECX
// 00447253: MOV dword ptr [ESP + 0x90],EAX
// 0044725a: MOV EDX,dword ptr [0x0084a85c]
//   XREF to: 0084a85c (READ)
// 00447260: DEC EDX
// 00447261: TEST EDX,EDX
// 00447263: JL 0x00447291
//   XREF to: 00447291 (CONDITIONAL_JUMP)
// 00447265: IMUL EAX,EDX,0x4c
// 00447268: ADD EAX,0x83c1dc
//   XREF to: 0083c1dc (DATA)
// 0044726d: MOV EDI,dword ptr [EAX + 0x10]
//   Label: LAB_0044726d
//   XREF to: 0083c1ec (DATA)
//   XREF to: 0083c1a0 (DATA)
// 00447270: CMP EDI,dword ptr [ESP + 0x48]
// 00447274: JNZ 0x004472b6
//   XREF to: 004472b6 (CONDITIONAL_JUMP)
// 00447276: CMP EBX,dword ptr [EAX + 0x24]
//   XREF to: 0083c200 (DATA)
//   XREF to: 0083c1b4 (DATA)
// 00447279: JGE 0x004472b6
//   XREF to: 004472b6 (CONDITIONAL_JUMP)
// 0044727b: CMP ECX,dword ptr [EAX + 0x28]
//   XREF to: 0083c204 (DATA)
//   XREF to: 0083c1b8 (DATA)
// 0044727e: JGE 0x004472b6
//   XREF to: 004472b6 (CONDITIONAL_JUMP)
// 00447280: MOV EDI,dword ptr [ESP + 0x90]
// 00447287: CMP EDI,dword ptr [EAX + 0x1c]
//   XREF to: 0083c1f8 (DATA)
//   XREF to: 0083c1ac (DATA)
// 0044728a: JLE 0x004472b6
//   XREF to: 004472b6 (CONDITIONAL_JUMP)
// 0044728c: CMP ESI,dword ptr [EAX + 0x20]
//   XREF to: 0083c1fc (DATA)
//   XREF to: 0083c1b0 (DATA)
// 0044728f: JLE 0x004472b6
//   XREF to: 004472b6 (CONDITIONAL_JUMP)
// 00447291: TEST EDX,EDX
//   Label: LAB_00447291
// 00447293: JL 0x004472c0
//   XREF to: 004472c0 (CONDITIONAL_JUMP)
// 00447295: MOV ESI,dword ptr [ESP + 0x4c]
//   Label: LAB_00447295
// 00447299: INC ESI
// 0044729a: MOV dword ptr [ESP + 0x4c],ESI
// 0044729e: CMP ESI,0x1
// 004472a1: JG 0x00446f25
//   XREF to: 00446f25 (CONDITIONAL_JUMP)
// 004472a7: JMP 0x00447239
//   XREF to: 00447239 (UNCONDITIONAL_JUMP)
// 004472a9: MOV EAX,[0x0084a868]
//   Label: LAB_004472a9
//   XREF to: 0084a868 (READ)
// 004472ae: MOV ESI,dword ptr [0x0084a86c]
//   XREF to: 0084a86c (READ)
// 004472b4: JMP 0x0044724f
//   XREF to: 0044724f (UNCONDITIONAL_JUMP)
// 004472b6: DEC EDX
//   Label: LAB_004472b6
// 004472b7: SUB EAX,0x4c
// 004472ba: TEST EDX,EDX
// 004472bc: JGE 0x0044726d
//   XREF to: 0044726d (CONDITIONAL_JUMP)
// 004472be: JMP 0x00447291
//   XREF to: 00447291 (UNCONDITIONAL_JUMP)
// 004472c0: MOV EDX,dword ptr [ESP + 0x68]
//   Label: LAB_004472c0
// 004472c4: MOV dword ptr [EDX + 0x18],0x0
//   XREF to: 00840c2c (DATA)
// 004472cb: MOV EAX,dword ptr [ESP + 0x48]
// 004472cf: MOV dword ptr [EDX + 0x24],0x1
//   XREF to: 00840c38 (DATA)
// 004472d6: MOV dword ptr [EDX],EAX
//   XREF to: 00840c14 (DATA)
// 004472d8: MOV dword ptr [EDX + 0x4],EBX
//   XREF to: 00840c18 (DATA)
// 004472db: MOV dword ptr [EDX + 0x8],ECX
//   XREF to: 00840c1c (DATA)
// 004472de: MOV EAX,dword ptr [ESP + 0x90]
// 004472e5: MOV dword ptr [EDX + 0xc],EAX
//   XREF to: 00840c20 (DATA)
// 004472e8: MOV EAX,dword ptr [ESP + 0x4c]
// 004472ec: MOV dword ptr [EDX + 0x14],EAX
//   XREF to: 00840c28 (DATA)
// 004472ef: LEA EAX,[EDX + 0x28]
// 004472f2: MOV dword ptr [EDX + 0x10],ESI
//   XREF to: 00840c24 (DATA)
// 004472f5: MOV EDX,dword ptr [0x0084a860]
//   XREF to: 0084a860 (READ)
// 004472fb: INC EDX
// 004472fc: MOV dword ptr [ESP + 0x68],EAX
// 00447300: MOV dword ptr [0x0084a860],EDX
//   XREF to: 0084a860 (WRITE)
// 00447306: JMP 0x00447295
//   XREF to: 00447295 (UNCONDITIONAL_JUMP)
// 00447308: ADD EAX,0x28
//   Label: LAB_00447308
// 0044730b: CMP EAX,EDX
// 0044730d: JL 0x00446f6e
//   XREF to: 00446f6e (CONDITIONAL_JUMP)
// 00447313: IMUL EAX,dword ptr [0x0084a860],0x28
//   Label: LAB_00447313
//   XREF to: 0084a860 (READ)
// 0044731a: XOR EDX,EDX
// 0044731c: ADD EAX,0x840c14
//   XREF to: 00840c14 (DATA)
// 00447321: MOV dword ptr [ESP + 0x54],EDX
// 00447325: MOV dword ptr [ESP + 0x70],EAX
// 00447329: CMP dword ptr [ESP + 0x54],0x0
//   Label: LAB_00447329
// 0044732e: JZ 0x00447399
//   XREF to: 00447399 (CONDITIONAL_JUMP)
// 00447334: MOV EAX,[0x0084a868]
//   XREF to: 0084a868 (READ)
// 00447339: MOV ESI,dword ptr [0x0084a86c]
//   XREF to: 0084a86c (READ)
// 0044733f: ADD EAX,EBX
//   Label: LAB_0044733f
// 00447341: ADD ESI,ECX
// 00447343: MOV dword ptr [ESP + 0x94],EAX
// 0044734a: MOV EDX,dword ptr [0x0084a85c]
//   XREF to: 0084a85c (READ)
// 00447350: DEC EDX
// 00447351: TEST EDX,EDX
// 00447353: JL 0x00447381
//   XREF to: 00447381 (CONDITIONAL_JUMP)
// 00447355: IMUL EAX,EDX,0x4c
// 00447358: ADD EAX,0x83c1dc
//   XREF to: 0083c1dc (DATA)
// 0044735d: MOV EDI,dword ptr [EAX + 0x10]
//   Label: LAB_0044735d
//   XREF to: 0083c1ec (DATA)
//   XREF to: 0083c1a0 (DATA)
// 00447360: CMP EDI,dword ptr [ESP + 0x50]
// 00447364: JNZ 0x004473a6
//   XREF to: 004473a6 (CONDITIONAL_JUMP)
// 00447366: CMP ECX,dword ptr [EAX + 0x24]
//   XREF to: 0083c200 (DATA)
//   XREF to: 0083c1b4 (DATA)
// 00447369: JGE 0x004473a6
//   XREF to: 004473a6 (CONDITIONAL_JUMP)
// 0044736b: CMP EBX,dword ptr [EAX + 0x28]
//   XREF to: 0083c204 (DATA)
//   XREF to: 0083c1b8 (DATA)
// 0044736e: JGE 0x004473a6
//   XREF to: 004473a6 (CONDITIONAL_JUMP)
// 00447370: CMP ESI,dword ptr [EAX + 0x1c]
//   XREF to: 0083c1f8 (DATA)
//   XREF to: 0083c1ac (DATA)
// 00447373: JLE 0x004473a6
//   XREF to: 004473a6 (CONDITIONAL_JUMP)
// 00447375: MOV EDI,dword ptr [ESP + 0x94]
// 0044737c: CMP EDI,dword ptr [EAX + 0x20]
//   XREF to: 0083c1fc (DATA)
//   XREF to: 0083c1b0 (DATA)
// 0044737f: JLE 0x004473a6
//   XREF to: 004473a6 (CONDITIONAL_JUMP)
// 00447381: TEST EDX,EDX
//   Label: LAB_00447381
// 00447383: JL 0x004473b0
//   XREF to: 004473b0 (CONDITIONAL_JUMP)
// 00447385: MOV ESI,dword ptr [ESP + 0x54]
//   Label: LAB_00447385
// 00447389: INC ESI
// 0044738a: MOV dword ptr [ESP + 0x54],ESI
// 0044738e: CMP ESI,0x1
// 00447391: JG 0x00446f96
//   XREF to: 00446f96 (CONDITIONAL_JUMP)
// 00447397: JMP 0x00447329
//   XREF to: 00447329 (UNCONDITIONAL_JUMP)
// 00447399: MOV EAX,[0x0084a86c]
//   Label: LAB_00447399
//   XREF to: 0084a86c (READ)
// 0044739e: MOV ESI,dword ptr [0x0084a868]
//   XREF to: 0084a868 (READ)
// 004473a4: JMP 0x0044733f
//   XREF to: 0044733f (UNCONDITIONAL_JUMP)
// 004473a6: DEC EDX
//   Label: LAB_004473a6
// 004473a7: SUB EAX,0x4c
// 004473aa: TEST EDX,EDX
// 004473ac: JGE 0x0044735d
//   XREF to: 0044735d (CONDITIONAL_JUMP)
// 004473ae: JMP 0x00447381
//   XREF to: 00447381 (UNCONDITIONAL_JUMP)
// 004473b0: MOV EDX,dword ptr [ESP + 0x70]
//   Label: LAB_004473b0
// 004473b4: MOV dword ptr [EDX + 0x18],0x0
//   XREF to: 00840c2c (DATA)
// 004473bb: MOV EAX,dword ptr [ESP + 0x50]
// 004473bf: MOV dword ptr [EDX + 0x24],0x1
//   XREF to: 00840c38 (DATA)
// 004473c6: MOV dword ptr [EDX],EAX
//   XREF to: 00840c14 (DATA)
// 004473c8: MOV dword ptr [EDX + 0x4],ECX
//   XREF to: 00840c18 (DATA)
// 004473cb: MOV dword ptr [EDX + 0x8],EBX
//   XREF to: 00840c1c (DATA)
// 004473ce: MOV EAX,dword ptr [ESP + 0x94]
// 004473d5: MOV dword ptr [EDX + 0x10],EAX
//   XREF to: 00840c24 (DATA)
// 004473d8: MOV EAX,dword ptr [ESP + 0x54]
// 004473dc: MOV dword ptr [EDX + 0x14],EAX
//   XREF to: 00840c28 (DATA)
// 004473df: LEA EAX,[EDX + 0x28]
// 004473e2: MOV dword ptr [EDX + 0xc],ESI
//   XREF to: 00840c20 (DATA)
// 004473e5: MOV EDX,dword ptr [0x0084a860]
//   XREF to: 0084a860 (READ)
// 004473eb: INC EDX
// 004473ec: MOV dword ptr [ESP + 0x70],EAX
// 004473f0: MOV dword ptr [0x0084a860],EDX
//   XREF to: 0084a860 (WRITE)
// 004473f6: JMP 0x00447385
//   XREF to: 00447385 (UNCONDITIONAL_JUMP)
// 004473f8: CALL wincore_winrun.cpp_processWindowMessages_FUN_005f35e0
//   Label: LAB_004473f8
//   XREF to: 005f35e0 (UNCONDITIONAL_CALL)
// 004473fd: CALL wincore_winrun.cpp_getTime_FUN_005f2dc0
//   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
// 00447402: MOV EDI,dword ptr [0x0084a8a8]
//   XREF to: 0084a8a8 (READ)
// 00447408: MOV EDX,EAX
// 0044740a: SUB EAX,EDI
// 0044740c: MOV dword ptr [ESP + 0x98],EAX
// 00447413: FILD dword ptr [ESP + 0x98]
// 0044741a: FMUL double ptr [0x00619a22]
//   XREF to: 00619a22 (READ)
// 00447420: FST float ptr [ESP]
// 00447423: FLDZ
// 00447425: FCOMPP
// 00447427: FNSTSW AX
// 00447429: SAHF
// 0044742a: JC 0x00447468
//   XREF to: 00447468 (CONDITIONAL_JUMP)
// 0044742c: MOV dword ptr [0x0084a8a8],EDX
//   Label: LAB_0044742c
//   XREF to: 0084a8a8 (WRITE)
// 00447432: XOR ESI,ESI
// 00447434: CALL wincore_winrun.cpp_wasKeyPressed_FUN_005f2f00
//   Label: LAB_00447434
//   XREF to: 005f2f00 (UNCONDITIONAL_CALL)
// 00447439: TEST EAX,EAX
// 0044743b: JNZ 0x00447479
//   XREF to: 00447479 (CONDITIONAL_JUMP)
// 0044743d: CMP dword ptr [0x0084a8a4],0x0
//   XREF to: 0084a8a4 (READ)
// 00447444: JLE 0x0044745b
//   XREF to: 0044745b (CONDITIONAL_JUMP)
// 00447446: FILD dword ptr [0x0084a8a4]
//   XREF to: 0084a8a4 (READ)
// 0044744c: FCOMP float ptr [0x0084a8ac]
//   XREF to: 0084a8ac (READ)
// 00447452: FNSTSW AX
// 00447454: SAHF
// 00447455: JC 0x00447500
//   XREF to: 00447500 (CONDITIONAL_JUMP)
// 0044745b: XOR EDX,EDX
//   Label: LAB_0044745b
// 0044745d: MOV dword ptr [0x0083c1d8],EDX
//   XREF to: 0083c1d8 (WRITE)
// 00447463: JMP 0x00447014
//   XREF to: 00447014 (UNCONDITIONAL_JUMP)
// 00447468: FLD float ptr [0x0084a8ac]
//   Label: LAB_00447468
//   XREF to: 0084a8ac (READ)
// 0044746e: FADD float ptr [ESP]
// 00447471: FSTP float ptr [0x0084a8ac]
//   XREF to: 0084a8ac (WRITE)
// 00447477: JMP 0x0044742c
//   XREF to: 0044742c (UNCONDITIONAL_JUMP)
// 00447479: CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   Label: LAB_00447479
//   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
// 0044747e: AND EAX,0xff
// 00447483: CMP EAX,0x1b
// 00447486: JZ 0x00447500
//   XREF to: 00447500 (CONDITIONAL_JUMP)
// 00447488: CMP EAX,0x2e
// 0044748b: JNZ 0x00447527
//   XREF to: 00447527 (CONDITIONAL_JUMP)
// 00447491: INC dword ptr [0x0084a890]
//   Label: LAB_00447491
//   XREF to: 0084a890 (READ_WRITE)
// 00447497: CMP EAX,0x2c
//   Label: LAB_00447497
// 0044749a: JNZ 0x00447547
//   XREF to: 00447547 (CONDITIONAL_JUMP)
// 004474a0: MOV EDX,dword ptr [0x0084a858]
//   Label: LAB_004474a0
//   XREF to: 0084a858 (READ)
// 004474a6: MOV ECX,dword ptr [0x0084a890]
//   XREF to: 0084a890 (READ)
// 004474ac: DEC EDX
// 004474ad: ADD ECX,EDX
// 004474af: MOV dword ptr [0x0084a890],ECX
//   XREF to: 0084a890 (WRITE)
// 004474b5: CMP EAX,0x73
//   Label: LAB_004474b5
// 004474b8: JNZ 0x00447567
//   XREF to: 00447567 (CONDITIONAL_JUMP)
// 004474be: CMP ESI,dword ptr [0x0084a89c]
//   Label: LAB_004474be
//   XREF to: 0084a89c (READ)
// 004474c4: SETZ DL
// 004474c7: AND EDX,0xff
// 004474cd: MOV dword ptr [0x0084a89c],EDX
//   XREF to: 0084a89c (WRITE)
// 004474d3: CMP EAX,0x74
//   Label: LAB_004474d3
// 004474d6: JNZ 0x00447575
//   XREF to: 00447575 (CONDITIONAL_JUMP)
// 004474dc: CMP ESI,dword ptr [0x0084a8a0]
//   Label: LAB_004474dc
//   XREF to: 0084a8a0 (READ)
// 004474e2: SETZ AL
// 004474e5: AND EAX,0xff
// 004474ea: MOV [0x0084a8a0],EAX
//   XREF to: 0084a8a0 (WRITE)
// 004474ef: PUSH ESI
// 004474f0: PUSH ESI
// 004474f1: PUSH 0x1
// 004474f3: CALL shape_cramtex.cpp_visualizeTextureAtlas_FUN_00447f20
//   XREF to: 00447f20 (UNCONDITIONAL_CALL)
// 004474f8: ADD ESP,0xc
// 004474fb: JMP 0x00447434
//   XREF to: 00447434 (UNCONDITIONAL_JUMP)
// 00447500: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   Label: LAB_00447500
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 00447505: MOV EAX,dword ptr [ESP + 0x10]
// 00447509: MOV ECX,dword ptr [0x0084a85c]
//   XREF to: 0084a85c (READ)
// 0044750f: MOV [0x00887940],EAX
//   XREF to: 00887940 (WRITE)
// 00447514: DEC ECX
// 00447515: MOV EAX,0xf423f
// 0044751a: MOV dword ptr [0x0084a85c],ECX
//   XREF to: 0084a85c (WRITE)
// 00447520: MOV ESP,EBP
// 00447522: POP EBP
// 00447523: POP EDI
// 00447524: POP ESI
// 00447525: POP EBX
// 00447526: RET
// 00447527: CMP EAX,0x3e
//   Label: LAB_00447527
// 0044752a: JZ 0x00447491
//   XREF to: 00447491 (CONDITIONAL_JUMP)
// 00447530: CMP EAX,0x6e
// 00447533: JZ 0x00447491
//   XREF to: 00447491 (CONDITIONAL_JUMP)
// 00447539: CMP EAX,0x4e
// 0044753c: JZ 0x00447491
//   XREF to: 00447491 (CONDITIONAL_JUMP)
// 00447542: JMP 0x00447497
//   XREF to: 00447497 (UNCONDITIONAL_JUMP)
// 00447547: CMP EAX,0x3c
//   Label: LAB_00447547
// 0044754a: JZ 0x004474a0
//   XREF to: 004474a0 (CONDITIONAL_JUMP)
// 00447550: CMP EAX,0x70
// 00447553: JZ 0x004474a0
//   XREF to: 004474a0 (CONDITIONAL_JUMP)
// 00447559: CMP EAX,0x50
// 0044755c: JZ 0x004474a0
//   XREF to: 004474a0 (CONDITIONAL_JUMP)
// 00447562: JMP 0x004474b5
//   XREF to: 004474b5 (UNCONDITIONAL_JUMP)
// 00447567: CMP EAX,0x53
//   Label: LAB_00447567
// 0044756a: JZ 0x004474be
//   XREF to: 004474be (CONDITIONAL_JUMP)
// 00447570: JMP 0x004474d3
//   XREF to: 004474d3 (UNCONDITIONAL_JUMP)
// 00447575: CMP EAX,0x54
//   Label: LAB_00447575
// 00447578: JZ 0x004474dc
//   XREF to: 004474dc (CONDITIONAL_JUMP)
// 0044757e: PUSH ESI
// 0044757f: PUSH ESI
// 00447580: PUSH 0x1
// 00447582: CALL shape_cramtex.cpp_visualizeTextureAtlas_FUN_00447f20
//   XREF to: 00447f20 (UNCONDITIONAL_CALL)
// 00447587: ADD ESP,0xc
// 0044758a: JMP 0x00447434
//   XREF to: 00447434 (UNCONDITIONAL_JUMP)
