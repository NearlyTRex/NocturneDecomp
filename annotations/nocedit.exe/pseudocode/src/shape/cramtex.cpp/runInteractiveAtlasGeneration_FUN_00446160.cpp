// Name: shape_cramtex.cpp_runInteractiveAtlasGeneration_FUN_00446160
// Address: 00446160
// Address Range: [[00446160, 0044758e]]
// Convention: __cdecl
// Signature: int shape_cramtex.cpp_runInteractiveAtlasGeneration_FUN_00446160(SCramWorkingEntry * current_texture_entry)

#include "nocturne.h"

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
  SCramWorkingEntry *pSVar9;
  FILE *pFVar10;
  SCramWorkingEntry *pSVar11;
  int iVar12;
  uint uVar13;
  int *piVar14;
  void *pvVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  SCramRectangle *pSVar19;
  int iVar20;
  int iVar21;
  bool bVar22;
  uint *puVar23;
  uint uVar24;
  code *in_stack_ffffff5c;
  int in_stack_ffffff60;
  SCramWorkingEntry *pSVar25;
  SCramWorkingEntry *pSVar26;
  SCramWorkingEntry *in_stack_ffffff74;
  int local_88;
  int local_84;
  int local_78;
  int local_70;
  int local_68;
  int local_60;
  int local_5c;
  int local_54;
  int local_4c;
  SCramWorkingEntry *local_44;
  SCramWorkingEntry *local_40;
  SCramRectangle *local_3c;
  SCramRectangle *local_38;
  SCramWorkingEntry *local_34;
  SCramRectangle *local_30;
  SCramWorkingEntry *local_2c;
  uint local_24;
  int local_20;
  int iStack_14;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0xdc);
  local_2c = g_CramAlgorithmState;
  pSVar25 = (SCramWorkingEntry *)0x0;
  pSVar26 = (SCramWorkingEntry *)0x0;
  if (0 < g_CramRectangleCount) {
    pSVar19 = g_CramRectangles;
    puVar23 = g_CramAlgorithmState;
    do {
      pSVar19->active_flag = 0;
      iVar20 = g_CramBestSolutionMetric1;
      if ((pSVar19->reserved_0x18 == 0) &&
         ((current_texture_entry->padded_height != current_texture_entry->padded_width ||
          (pSVar19->orientation == 0)))) {
        if (pSVar19->orientation == 0) {
          iVar18 = pSVar19->top + current_texture_entry->padded_width;
          pSVar19->reserved_0x1c = iVar18;
          if (iVar18 < iVar20) {
            iVar20 = pSVar19->right + current_texture_entry->padded_height;
            goto LAB_00446547;
          }
        }
        else {
          iVar18 = pSVar19->top + current_texture_entry->padded_height;
          pSVar19->reserved_0x1c = iVar18;
          if (iVar18 < iVar20) {
            iVar20 = pSVar19->right + current_texture_entry->padded_width;
LAB_00446547:
            iVar18 = g_CramBestSolutionMetric1;
            pSVar19->reserved_0x20 = iVar20;
            if (iVar20 < iVar18) {
              iVar20 = g_CramPlacedTextureCount + -1;
              if (-1 < iVar20) {
                pSVar11 = g_CramSortedTextureEntries + iVar20;
                do {
                  if ((((pSVar19->left == pSVar11->assigned_map_number) &&
                       (pSVar19->top < pSVar11->working_top)) &&
                      (pSVar19->right < pSVar11->working_width)) &&
                     ((pSVar11->placement_bottom < pSVar19->reserved_0x1c &&
                      (pSVar11->working_right < pSVar19->reserved_0x20)))) goto LAB_004461b1;
                  iVar20 = iVar20 + -1;
                  pSVar11 = pSVar11 + -1;
                } while (-1 < iVar20);
              }
              pSVar25 = (SCramWorkingEntry *)((int)&pSVar25->width + 1);
              *puVar23 = pSVar19;
              puVar23 = puVar23 + 1;
            }
          }
        }
      }
LAB_004461b1:
      pSVar26 = (SCramWorkingEntry *)((int)&pSVar26->width + 1);
      pSVar19 = pSVar19 + 1;
    } while ((int)pSVar26 < g_CramRectangleCount);
  }
  pSVar11 = g_CramAlgorithmState;
  if (0 < (int)pSVar25) {
    g_CramPlacedTextureCount = g_CramPlacedTextureCount + 1;
    pvVar15 = (void *)((int)g_CramAlgorithmState + (int)pSVar25 * 4);
    if (1 < (int)pSVar25) {
      iVar20 = 0;
      piVar14 = &local_2c->width;
      g_CramAlgorithmState = pvVar15;
      if (0 < (int)pSVar25) {
        do {
          iVar18 = *piVar14;
          *(int *)(iVar18 + 0x24) = *(int *)(iVar18 + 4) + *(int *)(iVar18 + 8);
          iVar21 = *(int *)(iVar18 + 0x1c);
          if (*(int *)(iVar18 + 0x1c) <= *(int *)(iVar18 + 0x20)) {
            iVar21 = *(int *)(iVar18 + 0x20);
          }
          iVar20 = iVar20 + 1;
          *(int *)(iVar18 + 0x24) =
               *(int *)(iVar18 + 0x24) +
               *(int *)(iVar18 + 0x20) + iVar21 * 5 + *(int *)(iVar18 + 0x1c);
          piVar14 = piVar14 + 1;
        } while (iVar20 < (int)pSVar25);
      }
      in_stack_ffffff5c = shape_cramtex_cpp_qsortRectanglesByActiveFlag_FUN_00446140;
      crt_stdlib_c_qsort_FUN_005fdf38
                (local_2c,(SIZE_T)pSVar25,4,
                 shape_cramtex_cpp_qsortRectanglesByActiveFlag_FUN_00446140);
      pvVar15 = g_CramAlgorithmState;
    }
    g_CramAlgorithmState = pvVar15;
    iVar20 = 0;
    pSVar9 = local_2c;
    if (0 < (int)pSVar25) {
      do {
        iVar18 = iVar20 + 5;
        iVar20 = iVar20 + 1;
        *(int *)(pSVar9->width + 0x24) = iVar18;
        pSVar9 = (SCramWorkingEntry *)&pSVar9->height;
      } while (iVar20 < (int)pSVar25);
    }
    if (g_CramPlacedTextureCount < (int)g_CramTextureCount) {
      local_78 = 0;
      if (0 < (int)pSVar25) {
        do {
          piVar14 = (int *)local_2c->width;
          current_texture_entry->assigned_map_number = *piVar14;
          current_texture_entry->placement_flags = piVar14[5];
          current_texture_entry->placement_bottom = piVar14[1];
          current_texture_entry->working_right = piVar14[2];
          if (current_texture_entry->placement_flags == 0) {
            current_texture_entry->effective_width = current_texture_entry->padded_width;
            iVar20 = current_texture_entry->padded_height;
          }
          else {
            current_texture_entry->effective_width = current_texture_entry->padded_height;
            iVar20 = current_texture_entry->padded_width;
          }
          current_texture_entry->effective_height = iVar20;
          current_texture_entry->working_top =
               current_texture_entry->placement_bottom + current_texture_entry->effective_width;
          current_texture_entry->working_width =
               current_texture_entry->working_right + current_texture_entry->effective_height;
          if ((current_texture_entry->working_top < g_CramBestSolutionMetric1) &&
             (current_texture_entry->working_width < g_CramBestSolutionMetric1)) {
            iVar20 = 0;
            if (0 < g_CramRectangleCount) {
              pSVar19 = g_CramRectangles;
              do {
                if ((((pSVar19->reserved_0x18 == 0) &&
                     (pSVar19->left == current_texture_entry->assigned_map_number)) &&
                    (current_texture_entry->placement_bottom < pSVar19->bottom)) &&
                   (((current_texture_entry->working_right < pSVar19->max_dimension &&
                     (pSVar19->top < current_texture_entry->working_top)) &&
                    (pSVar19->right < current_texture_entry->working_width)))) {
                  pSVar19->reserved_0x18 = (int)current_texture_entry;
                }
                iVar20 = iVar20 + 1;
                pSVar19 = pSVar19 + 1;
              } while (iVar20 < g_CramRectangleCount);
            }
            if (current_texture_entry->working_width <= g_CramBestSolutionMetric2) {
              iVar20 = g_CramPlacedTextureCount + -2;
              local_70 = 0;
              if (-1 < iVar20) {
                pSVar26 = g_CramSortedTextureEntries + iVar20;
                do {
                  if (((pSVar26->assigned_map_number == current_texture_entry->assigned_map_number)
                      && (pSVar26->working_top <= current_texture_entry->working_top)) &&
                     ((current_texture_entry->working_width < pSVar26->working_width &&
                      ((pSVar26->working_right <
                        current_texture_entry->working_width + g_CramOptimalPlacement + -1 &&
                       (local_70 < pSVar26->working_top)))))) {
                    local_70 = pSVar26->working_top;
                  }
                  iVar20 = iVar20 + -1;
                  pSVar26 = pSVar26 + -1;
                } while (-1 < iVar20);
              }
              if (local_70 < current_texture_entry->working_top) {
                local_20 = g_CramPlacedTextureCount + -2;
                if (-1 < local_20) {
                  local_40 = g_CramSortedTextureEntries + local_20;
                  do {
                    iVar20 = current_texture_entry->assigned_map_number;
                    if ((((iVar20 == local_40->assigned_map_number) &&
                         (local_40->working_top <= current_texture_entry->working_top)) &&
                        (iVar18 = current_texture_entry->working_width,
                        iVar18 < local_40->working_width)) && (local_70 < local_40->working_top)) {
                      iVar21 = local_40->working_top;
                      if (0 < g_CramRectangleCount) {
                        iVar12 = 0;
                        do {
                          if (((iVar20 == *(int *)((int)&g_CramRectangles[0].left + iVar12)) &&
                              (iVar21 == *(int *)((int)&g_CramRectangles[0].top + iVar12))) &&
                             (iVar18 == *(int *)((int)&g_CramRectangles[0].right + iVar12)))
                          goto LAB_00446d87;
                          iVar12 = iVar12 + 0x28;
                        } while (iVar12 < g_CramRectangleCount * 0x28);
                      }
                      local_68 = 0;
                      local_44 = (SCramWorkingEntry *)(g_CramRectangles + g_CramRectangleCount);
                      do {
                        iVar12 = g_CramMinPlacementX;
                        iVar17 = g_CramMinPlacementY;
                        if (local_68 != 0) {
                          iVar12 = g_CramMinPlacementY;
                          iVar17 = g_CramMinPlacementX;
                        }
                        iVar16 = g_CramPlacedTextureCount + -1;
                        if (-1 < iVar16) {
                          pSVar26 = g_CramSortedTextureEntries + iVar16;
                          do {
                            if (((pSVar26->assigned_map_number == iVar20) &&
                                (iVar21 < pSVar26->working_top)) &&
                               ((iVar18 < pSVar26->working_width &&
                                ((pSVar26->placement_bottom < iVar12 + iVar21 &&
                                 (pSVar26->working_right < iVar17 + iVar18)))))) break;
                            iVar16 = iVar16 + -1;
                            pSVar26 = pSVar26 + -1;
                          } while (-1 < iVar16);
                        }
                        if (iVar16 < 0) {
                          local_44->effective_height = 0;
                          local_44->working_top = 1;
                          local_44->width = iVar20;
                          local_44->height = iVar21;
                          local_44->padded_width = iVar18;
                          local_44->padded_height = iVar12 + iVar21;
                          local_44->effective_width = local_68;
                          local_44->assigned_map_number = iVar17 + iVar18;
                          g_CramRectangleCount = g_CramRectangleCount + 1;
                          local_44 = (SCramWorkingEntry *)((int)local_44 + 0x28);
                        }
                        local_68 = local_68 + 1;
                      } while (local_68 < 2);
                    }
LAB_00446d87:
                    local_40 = local_40 + -1;
                    local_20 = local_20 + -1;
                  } while (-1 < local_20);
                }
                iVar20 = current_texture_entry->assigned_map_number;
                iVar18 = current_texture_entry->working_width;
                if (0 < g_CramRectangleCount) {
                  iVar21 = 0;
                  do {
                    if (((iVar20 == *(int *)((int)&g_CramRectangles[0].left + iVar21)) &&
                        (local_70 == *(int *)((int)&g_CramRectangles[0].top + iVar21))) &&
                       (iVar18 == *(int *)((int)&g_CramRectangles[0].right + iVar21)))
                    goto LAB_00446df8;
                    iVar21 = iVar21 + 0x28;
                  } while (iVar21 < g_CramRectangleCount * 0x28);
                }
                local_3c = g_CramRectangles + g_CramRectangleCount;
                local_60 = 0;
                do {
                  iVar21 = g_CramMinPlacementY;
                  iVar12 = g_CramMinPlacementX;
                  if (local_60 != 0) {
                    iVar21 = g_CramMinPlacementX;
                    iVar12 = g_CramMinPlacementY;
                  }
                  iVar17 = g_CramPlacedTextureCount + -1;
                  if (-1 < iVar17) {
                    pSVar26 = g_CramSortedTextureEntries + iVar17;
                    do {
                      if (((pSVar26->assigned_map_number == iVar20) &&
                          (local_70 < pSVar26->working_top)) &&
                         ((iVar18 < pSVar26->working_width &&
                          ((pSVar26->placement_bottom < iVar12 + local_70 &&
                           (pSVar26->working_right < iVar21 + iVar18)))))) break;
                      iVar17 = iVar17 + -1;
                      pSVar26 = pSVar26 + -1;
                    } while (-1 < iVar17);
                  }
                  if (iVar17 < 0) {
                    local_3c->reserved_0x18 = 0;
                    local_3c->active_flag = 1;
                    local_3c->left = iVar20;
                    local_3c->top = local_70;
                    local_3c->right = iVar18;
                    local_3c->max_dimension = iVar21 + iVar18;
                    local_3c->orientation = local_60;
                    local_3c->bottom = iVar12 + local_70;
                    g_CramRectangleCount = g_CramRectangleCount + 1;
                    local_3c = local_3c + 1;
                  }
                  local_60 = local_60 + 1;
                } while (local_60 < 2);
              }
            }
LAB_00446df8:
            if (current_texture_entry->working_width <= g_CramBestSolutionMetric2) {
              iVar20 = g_CramPlacedTextureCount + -2;
              local_5c = 0;
              if (-1 < iVar20) {
                pSVar26 = g_CramSortedTextureEntries + iVar20;
                do {
                  if ((((pSVar26->assigned_map_number == current_texture_entry->assigned_map_number)
                       && (pSVar26->working_width <= current_texture_entry->working_width)) &&
                      (current_texture_entry->working_top < pSVar26->working_top)) &&
                     ((pSVar26->placement_bottom <
                       current_texture_entry->working_top + g_CramOptimalPlacement + -1 &&
                      (local_5c < pSVar26->working_width)))) {
                    local_5c = pSVar26->working_width;
                  }
                  iVar20 = iVar20 + -1;
                  pSVar26 = pSVar26 + -1;
                } while (-1 < iVar20);
              }
              if (local_5c < current_texture_entry->working_width) {
                iStack_14 = g_CramPlacedTextureCount + -2;
                if (-1 < iStack_14) {
                  local_34 = g_CramSortedTextureEntries + iStack_14;
                  do {
                    iVar20 = current_texture_entry->assigned_map_number;
                    if (((iVar20 == local_34->assigned_map_number) &&
                        (local_34->working_width <= current_texture_entry->working_width)) &&
                       ((iVar18 = current_texture_entry->working_top, iVar18 < local_34->working_top
                        && (local_5c < local_34->working_width)))) {
                      iVar21 = local_34->working_width;
                      if (0 < g_CramRectangleCount) {
                        iVar12 = 0;
                        do {
                          if (((iVar20 == *(int *)((int)&g_CramRectangles[0].left + iVar12)) &&
                              (iVar18 == *(int *)((int)&g_CramRectangles[0].top + iVar12))) &&
                             (iVar21 == *(int *)((int)&g_CramRectangles[0].right + iVar12)))
                          goto LAB_00446f25;
                          iVar12 = iVar12 + 0x28;
                        } while (iVar12 < g_CramRectangleCount * 0x28);
                      }
                      local_54 = 0;
                      local_38 = g_CramRectangles + g_CramRectangleCount;
                      do {
                        iVar12 = g_CramMinPlacementX;
                        iVar17 = g_CramMinPlacementY;
                        if (local_54 != 0) {
                          iVar12 = g_CramMinPlacementY;
                          iVar17 = g_CramMinPlacementX;
                        }
                        iVar16 = g_CramPlacedTextureCount + -1;
                        if (-1 < iVar16) {
                          pSVar26 = g_CramSortedTextureEntries + iVar16;
                          do {
                            if (((pSVar26->assigned_map_number == iVar20) &&
                                (iVar18 < pSVar26->working_top)) &&
                               ((iVar21 < pSVar26->working_width &&
                                ((pSVar26->placement_bottom < iVar12 + iVar18 &&
                                 (pSVar26->working_right < iVar17 + iVar21)))))) break;
                            iVar16 = iVar16 + -1;
                            pSVar26 = pSVar26 + -1;
                          } while (-1 < iVar16);
                        }
                        if (iVar16 < 0) {
                          local_38->reserved_0x18 = 0;
                          local_38->active_flag = 1;
                          local_38->left = iVar20;
                          local_38->top = iVar18;
                          local_38->right = iVar21;
                          local_38->bottom = iVar12 + iVar18;
                          local_38->orientation = local_54;
                          local_38->max_dimension = iVar17 + iVar21;
                          g_CramRectangleCount = g_CramRectangleCount + 1;
                          local_38 = local_38 + 1;
                        }
                        local_54 = local_54 + 1;
                      } while (local_54 < 2);
                    }
LAB_00446f25:
                    local_34 = local_34 + -1;
                    iStack_14 = iStack_14 + -1;
                  } while (-1 < iStack_14);
                }
                iVar20 = current_texture_entry->assigned_map_number;
                iVar18 = current_texture_entry->working_top;
                if (0 < g_CramRectangleCount) {
                  iVar21 = 0;
                  do {
                    if (((iVar20 == *(int *)((int)&g_CramRectangles[0].left + iVar21)) &&
                        (iVar18 == *(int *)((int)&g_CramRectangles[0].top + iVar21))) &&
                       (local_5c == *(int *)((int)&g_CramRectangles[0].right + iVar21)))
                    goto LAB_00446f96;
                    iVar21 = iVar21 + 0x28;
                  } while (iVar21 < g_CramRectangleCount * 0x28);
                }
                local_30 = g_CramRectangles + g_CramRectangleCount;
                local_4c = 0;
                do {
                  iVar21 = g_CramMinPlacementY;
                  iVar12 = g_CramMinPlacementX;
                  if (local_4c != 0) {
                    iVar21 = g_CramMinPlacementX;
                    iVar12 = g_CramMinPlacementY;
                  }
                  iVar17 = g_CramPlacedTextureCount + -1;
                  if (-1 < iVar17) {
                    pSVar26 = g_CramSortedTextureEntries + iVar17;
                    do {
                      if (((pSVar26->assigned_map_number == iVar20) &&
                          (iVar18 < pSVar26->working_top)) &&
                         ((local_5c < pSVar26->working_width &&
                          ((pSVar26->placement_bottom < iVar12 + iVar18 &&
                           (pSVar26->working_right < iVar21 + local_5c)))))) break;
                      iVar17 = iVar17 + -1;
                      pSVar26 = pSVar26 + -1;
                    } while (-1 < iVar17);
                  }
                  if (iVar17 < 0) {
                    local_30->reserved_0x18 = 0;
                    local_30->active_flag = 1;
                    local_30->left = iVar20;
                    local_30->top = iVar18;
                    local_30->right = local_5c;
                    local_30->max_dimension = iVar21 + local_5c;
                    local_30->orientation = local_4c;
                    local_30->bottom = iVar12 + iVar18;
                    g_CramRectangleCount = g_CramRectangleCount + 1;
                    local_30 = local_30 + 1;
                  }
                  local_4c = local_4c + 1;
                } while (local_4c < 2);
              }
            }
LAB_00446f96:
            if (g_CramVisualizationMode != 0) {
              in_stack_ffffff5c = (code *)0x0;
              shape_cramtex_cpp_visualizeTextureAtlas_FUN_00447f20(0,0,in_stack_ffffff60);
            }
            iVar20 = shape_cramtex_cpp_runInteractiveAtlasGeneration_FUN_00446160
                               ((SCramWorkingEntry *)in_stack_ffffff5c);
            if (0 < iVar20) {
              iVar20 = iVar20 + -1;
            }
            g_CramRectangleCount = local_78;
            if (0 < local_78) {
              iVar18 = 0;
              do {
                if (current_texture_entry ==
                    *(SCramWorkingEntry **)((int)&g_CramRectangles[0].reserved_0x18 + iVar18)) {
                  *(uint *)((int)&g_CramRectangles[0].reserved_0x18 + iVar18) = 0;
                }
                iVar18 = iVar18 + 0x28;
              } while (iVar18 < local_78 * 0x28);
            }
            if (g_CramVisualizationUpdateCounter < 100) {
              g_CramVisualizationUpdateCounter = g_CramVisualizationUpdateCounter + 1;
            }
            else {
              wincore_winrun_cpp_processWindowMessages_FUN_005f35e0();
              in_stack_ffffff5c = (code *)0x447402;
              iVar18 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
              fVar7 = (float)(iVar18 - g_CramStartTime) * (float)8.4771050347222196e-07;
              g_CramStartTime = iVar18;
              if (0.0 < fVar7) {
                g_CramIterationCount = (int)((float)g_CramIterationCount + fVar7);
              }
              while( true ) {
                in_stack_ffffff60 = 0x447439;
                iVar18 = wincore_winrun_cpp_wasKeyPressed_FUN_005f2f00();
                if (iVar18 == 0) break;
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
                  in_stack_ffffff5c = (code *)0x0;
                  shape_cramtex_cpp_visualizeTextureAtlas_FUN_00447f20(0,0,in_stack_ffffff60);
                }
                else {
                  in_stack_ffffff5c = (code *)0x0;
                  shape_cramtex_cpp_visualizeTextureAtlas_FUN_00447f20(0,0,in_stack_ffffff60);
                }
              }
              if ((0 < g_CramMaxIterationsLimit) &&
                 ((float)g_CramMaxIterationsLimit < (float)g_CramIterationCount)) {
LAB_00447500:
                engine_2d_c_clearInputAndWait_FUN_00403260();
                g_CramAlgorithmState = in_stack_ffffff74;
                g_CramPlacedTextureCount = g_CramPlacedTextureCount + -1;
                return 999999;
              }
              g_CramVisualizationUpdateCounter = 0;
            }
            if (iVar20 != 0) {
              g_CramAlgorithmState = pSVar11;
              g_CramPlacedTextureCount = g_CramPlacedTextureCount + -1;
              return iVar20;
            }
          }
          local_2c = (SCramWorkingEntry *)&local_2c->height;
          local_78 = local_78 + 1;
        } while (local_78 < (int)pSVar25);
      }
    }
    else {
      piVar14 = (int *)local_2c->width;
      current_texture_entry->assigned_map_number = *piVar14;
      current_texture_entry->placement_flags = piVar14[5];
      current_texture_entry->placement_bottom = piVar14[1];
      current_texture_entry->working_right = piVar14[2];
      if (current_texture_entry->placement_flags == 0) {
        current_texture_entry->effective_width = current_texture_entry->padded_width;
        iVar20 = current_texture_entry->padded_height;
      }
      else {
        current_texture_entry->effective_width = current_texture_entry->padded_height;
        iVar20 = current_texture_entry->padded_width;
      }
      current_texture_entry->effective_height = iVar20;
      current_texture_entry->working_top =
           current_texture_entry->placement_bottom + current_texture_entry->effective_width;
      iVar20 = g_CramPlacedTextureCount;
      iVar21 = 0;
      current_texture_entry->working_width =
           current_texture_entry->working_right + current_texture_entry->effective_height;
      iVar18 = 0;
      if (0 < iVar20) {
        pSVar9 = g_CramSortedTextureEntries;
        do {
          if (iVar18 < pSVar9->working_top) {
            iVar18 = pSVar9->working_top;
          }
          if (iVar18 < pSVar9->working_width) {
            iVar18 = pSVar9->working_width;
          }
          iVar21 = iVar21 + 1;
          pSVar9 = pSVar9 + 1;
        } while (iVar21 < g_CramPlacedTextureCount);
      }
      pFVar10 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                          ("..\\shape\\cramlog.txt",(char *)0x0,"at",
                           "..\\shape\\cramtex.cpp",0x30d);
      if (pFVar10 != (FILE *)0x0) {
        crt_stdio_c_fprintf_FUN_005fe6d0(pFVar10,"New best solution found!  thisSquareSize = %d\n",iVar18);
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar10,"..\\shape\\cramtex.cpp",0x310);
      }
      if (iVar18 < g_CramBestSolutionMetric1) {
        iVar20 = 0;
        g_CramCurrentAcceptableSize = iVar18;
        if (0 < g_CramPlacedTextureCount) {
          pSVar9 = g_CramSortedTextureEntries;
          do {
            pSVar9->working_map_id = pSVar9->assigned_map_number;
            pSVar9->rotation_applied = pSVar9->placement_flags;
            pSVar9->final_left = pSVar9->placement_bottom;
            pSVar9->final_top = pSVar9->working_right;
            pSVar9->final_right = pSVar9->working_top;
            iVar18 = g_CramPlacedTextureCount;
            iVar20 = iVar20 + 1;
            pSVar9->final_bottom = pSVar9->working_width;
            pSVar9 = pSVar9 + 1;
          } while (iVar20 < iVar18);
        }
        if (g_CramFillGaps != 0) {
          do {
            bVar22 = false;
            local_88 = 0;
            if (0 < (int)g_CramTextureCount) {
              local_44 = g_CramSortedTextureEntries;
              do {
                while( true ) {
                  iVar20 = 0;
                  if ((local_44->final_bottom < g_CramCurrentAcceptableSize) &&
                     (iVar18 = shape_cramtex_cpp_findLowestOverlappingY_FUN_00447930(pSVar25),
                     g_CramCurrentAcceptableSize <= iVar18)) {
                    iVar20 = iVar18 - local_44->final_bottom;
                    local_44->final_bottom = local_44->final_bottom + iVar20;
                    local_44->final_top = local_44->final_top + iVar20;
                  }
                  if ((local_44->final_right < g_CramCurrentAcceptableSize) &&
                     (iVar18 = shape_cramtex_cpp_findLeftmostOverlappingX_FUN_00447a10(pSVar25),
                     g_CramCurrentAcceptableSize <= iVar18)) {
                    iVar20 = iVar18 - local_44->final_right;
                    local_44->final_left = local_44->final_left + iVar20;
                    local_44->final_right = local_44->final_right + iVar20;
                  }
                  if (iVar20 < 1) break;
                  bVar22 = true;
                }
                local_44 = local_44 + 1;
                local_88 = local_88 + 1;
              } while (local_88 < (int)g_CramTextureCount);
            }
          } while (bVar22);
          local_84 = 0;
          do {
            iVar20 = 0;
            bVar22 = false;
            if (0 < (int)g_CramTextureCount) {
              pSVar9 = g_CramSortedTextureEntries;
              do {
                iVar21 = shape_cramtex_cpp_findRightmostOverlappingX_FUN_004479a0(pSVar25);
                iVar18 = pSVar9->final_left;
                iVar12 = shape_cramtex_cpp_findLeftmostOverlappingX_FUN_00447a10(pSVar26);
                iVar12 = (local_78 + (iVar12 - pSVar9->final_right)) / 2;
                if (iVar12 != 0) {
                  pSVar9->final_left = pSVar9->final_left + iVar12;
                  pSVar9->final_right = pSVar9->final_right + iVar12;
                }
                local_2c = (SCramWorkingEntry *)0x446780;
                shape_cramtex_cpp_findHighestOverlappingY_FUN_004478c0(pSVar11);
                pSVar25 = (SCramWorkingEntry *)0x446792;
                pSVar26 = pSVar9;
                iVar12 = shape_cramtex_cpp_findLowestOverlappingY_FUN_00447930(in_stack_ffffff74);
                iVar18 = ((iVar21 - iVar18) + (iVar12 - pSVar9->final_bottom)) / 2;
                if (iVar18 != 0) {
                  bVar22 = true;
                  pSVar9->final_top = pSVar9->final_top + iVar18;
                  pSVar9->final_bottom = pSVar9->final_bottom + iVar18;
                }
                iVar20 = iVar20 + 1;
                pSVar9 = pSVar9 + 1;
              } while (iVar20 < (int)g_CramTextureCount);
            }
          } while ((bVar22) && (local_84 = local_84 + 1, local_84 < 10));
          local_24 = 0;
          do {
            if ((local_24 & 1) == 0) {
              uVar13 = 0;
              local_78 = 1;
              uVar24 = g_CramTextureCount;
            }
            else {
              local_78 = -1;
              uVar13 = g_CramTextureCount - 1;
              uVar24 = 0xffffffff;
            }
            for (; uVar13 != uVar24; uVar13 = uVar13 + local_78) {
              pSVar9 = g_CramSortedTextureEntries + uVar13;
              iVar20 = shape_cramtex_cpp_findRightmostOverlappingX_FUN_004479a0(pSVar25);
              g_CramSortedTextureEntries[uVar13].final_left =
                   (g_CramSortedTextureEntries[uVar13].final_left + iVar20) / 2;
              iVar20 = shape_cramtex_cpp_findHighestOverlappingY_FUN_004478c0(pSVar26);
              g_CramSortedTextureEntries[uVar13].final_top =
                   (g_CramSortedTextureEntries[uVar13].final_top + iVar20) / 2;
              local_2c = (SCramWorkingEntry *)0x446850;
              iVar20 = shape_cramtex_cpp_findLeftmostOverlappingX_FUN_00447a10(pSVar11);
              g_CramSortedTextureEntries[uVar13].final_right =
                   (iVar20 + g_CramSortedTextureEntries[uVar13].final_right + 1) / 2;
              pSVar25 = (SCramWorkingEntry *)0x44686b;
              iVar20 = shape_cramtex_cpp_findLowestOverlappingY_FUN_00447930(in_stack_ffffff74);
              g_CramSortedTextureEntries[uVar13].final_bottom =
                   (iVar20 + g_CramSortedTextureEntries[uVar13].final_bottom + 1) / 2;
              pSVar26 = pSVar9;
            }
            local_24 = local_24 + 1;
          } while ((int)local_24 < 10);
          iVar20 = 0;
          if (0 < (int)g_CramTextureCount) {
            pSVar9 = g_CramSortedTextureEntries;
            do {
              do {
                iVar18 = shape_cramtex_cpp_findHighestOverlappingY_FUN_004478c0(pSVar25);
                iVar18 = pSVar9->final_top - iVar18;
                pSVar9->final_bottom = pSVar9->final_bottom - iVar18;
                pSVar9->final_top = pSVar9->final_top - iVar18;
                local_2c = pSVar9;
                iVar18 = shape_cramtex_cpp_findRightmostOverlappingX_FUN_004479a0(pSVar26);
                iVar18 = pSVar9->final_left - iVar18;
                pSVar9->final_right = pSVar9->final_right - iVar18;
                pSVar9->final_left = pSVar9->final_left - iVar18;
              } while (0 < iVar18);
              iVar20 = iVar20 + 1;
              pSVar9 = pSVar9 + 1;
            } while (iVar20 < (int)g_CramTextureCount);
          }
          iVar20 = 0;
          if (0 < (int)g_CramTextureCount) {
            pSVar9 = g_CramSortedTextureEntries;
            do {
              iVar18 = shape_cramtex_cpp_findLeftmostOverlappingX_FUN_00447a10(pSVar25);
              iVar20 = iVar20 + 1;
              pSVar9->final_right = iVar18;
              local_2c = pSVar9;
              iVar18 = shape_cramtex_cpp_findLowestOverlappingY_FUN_00447930(pSVar26);
              uVar13 = g_CramTextureCount;
              pSVar9->final_bottom = iVar18;
              pSVar9 = pSVar9 + 1;
            } while (iVar20 < (int)uVar13);
          }
        }
        shape_cramtex_cpp_visualizeTextureAtlas_FUN_00447f20(0,0,(int)local_2c);
        pFVar10 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                            ("..\\shape\\cramlog.txt",(char *)0x0,"at",
                             "..\\shape\\cramtex.cpp",0x359);
        if (pFVar10 != (FILE *)0x0) {
          crt_stdio_c_fprintf_FUN_005fe6d0(pFVar10,"Checking if solution acceptable.\n");
          crt_stdio_c_fprintf_FUN_005fe6d0
                    (pFVar10,"  bestSquareSize = %d, acceptableSize = %d\n",g_CramCurrentAcceptableSize,
                     g_CramAcceptableSize);
          shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar10,"..\\shape\\cramtex.cpp",0x35d);
        }
        if (g_CramCurrentAcceptableSize <= g_CramAcceptableSize) {
          g_CramAlgorithmState = pSVar11;
          g_CramPlacedTextureCount = g_CramPlacedTextureCount + -1;
          return 999999;
        }
        iVar20 = g_CramAcceptableSize + g_CramCurrentAcceptableSize * 3;
        iVar18 = iVar20 >> 0x1f;
        g_CramBestSolutionMetric1 = (int)((iVar20 + iVar18 * -4) - (uint)(iVar18 << 1 < 0)) >> 2;
        g_CramBestSolutionMetric2 = g_CramBestSolutionMetric1 - g_CramOptimalPlacement;
        iVar20 = 0;
        if (0 < g_CramRectangleCount) {
          pSVar19 = g_CramRectangles;
          do {
            if (pSVar19->orientation == 0) {
              if (pSVar19->top + g_CramMinPlacementX < g_CramBestSolutionMetric1) {
                iVar18 = pSVar19->right + g_CramMinPlacementY;
                goto joined_r0x00446b0b;
              }
LAB_00446a27:
              pSVar19->reserved_0x18 = g_CramInvalidMarker;
            }
            else {
              if (g_CramBestSolutionMetric1 <= pSVar19->top + g_CramMinPlacementY)
              goto LAB_00446a27;
              iVar18 = pSVar19->right + g_CramMinPlacementX;
joined_r0x00446b0b:
              if (g_CramBestSolutionMetric1 <= iVar18) goto LAB_00446a27;
            }
            iVar20 = iVar20 + 1;
            pSVar19 = pSVar19 + 1;
          } while (iVar20 < g_CramRectangleCount);
        }
        iVar20 = 1;
        if (1 < g_CramPlacedTextureCount) {
          iVar18 = 0x4c;
          do {
            if ((g_CramBestSolutionMetric1 <=
                 *(int *)((int)&g_CramSortedTextureEntries[0].working_top + iVar18)) ||
               (g_CramBestSolutionMetric1 <=
                *(int *)((int)&g_CramSortedTextureEntries[0].working_width + iVar18))) {
              g_CramAlgorithmState = pSVar11;
              g_CramPlacedTextureCount = g_CramPlacedTextureCount + -1;
              return g_CramPlacedTextureCount - iVar20;
            }
            iVar18 = iVar18 + 0x4c;
            iVar20 = iVar20 + 1;
          } while (iVar18 < g_CramPlacedTextureCount * 0x4c);
        }
      }
      else {
        pFVar10 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                            ("..\\shape\\cramlog.txt",(char *)0x0,"at",
                             "..\\shape\\cramtex.cpp",0x318);
        if (pFVar10 != (FILE *)0x0) {
          crt_stdio_c_fprintf_FUN_005fe6d0(pFVar10,"\n\nCRAMTEX BUG!\n");
          crt_stdio_c_fprintf_FUN_005fe6d0
                    (pFVar10,"bestSquareSize = %d, thisSquareSize = %d, mustBeatSquareSize = %d\n",g_CramCurrentAcceptableSize,iVar18,
                     g_CramBestSolutionMetric1);
          crt_stdio_c_fprintf_FUN_005fe6d0(pFVar10,"acceptableSize = %d\n",g_CramAcceptableSize)
          ;
          crt_stdio_c_fprintf_FUN_005fe6d0(pFVar10,"targetPadSize = %d\n",g_CramAtlasHeight);
          crt_stdio_c_fprintf_FUN_005fe6d0(pFVar10,"pad = %d\n",g_CramPaddingCalculation);
          crt_stdio_c_fprintf_FUN_005fe6d0(pFVar10,"Best:\n");
          if (0 < (int)g_CramTextureCount) {
            pSVar25 = g_CramSortedTextureEntries;
            iVar20 = 0;
            do {
              piVar14 = &pSVar25->rotation_applied;
              piVar1 = &pSVar25->final_bottom;
              piVar2 = &pSVar25->final_right;
              piVar3 = &pSVar25->final_top;
              piVar4 = &pSVar25->final_left;
              piVar5 = &pSVar25->working_map_id;
              piVar6 = &pSVar25->height;
              piVar8 = &pSVar25->width;
              pSVar25 = pSVar25 + 1;
              iVar18 = iVar20 + 1;
              crt_stdio_c_fprintf_FUN_005fe6d0
                        (pFVar10,"%3d: %5dx%-5d  Map %d (%5d,%-5d)-(%5d,%-5d)    Rotated: %d\n",iVar20,*piVar8,*piVar6,*piVar5,
                         *piVar4,*piVar3,*piVar2,*piVar1,*piVar14);
              iVar20 = iVar18;
            } while (iVar18 < (int)g_CramTextureCount);
          }
          crt_stdio_c_fprintf_FUN_005fe6d0(pFVar10,"Current:\n");
          if (0 < (int)g_CramTextureCount) {
            pSVar25 = g_CramSortedTextureEntries;
            iVar20 = 0;
            do {
              piVar14 = &pSVar25->rotation_applied;
              piVar1 = &pSVar25->working_width;
              piVar2 = &pSVar25->working_top;
              piVar3 = &pSVar25->working_right;
              piVar4 = &pSVar25->placement_bottom;
              piVar5 = &pSVar25->assigned_map_number;
              piVar6 = &pSVar25->height;
              piVar8 = &pSVar25->width;
              pSVar25 = pSVar25 + 1;
              iVar18 = iVar20 + 1;
              crt_stdio_c_fprintf_FUN_005fe6d0
                        (pFVar10,"%3d: %5dx%-5d  Map %d (%5d,%-5d)-(%5d,%-5d)    Rotated: %d\n",iVar20,*piVar8,*piVar6,*piVar5,
                         *piVar4,*piVar3,*piVar2,*piVar1,*piVar14);
              iVar20 = iVar18;
            } while (iVar18 < (int)g_CramTextureCount);
          }
          shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar10,"..\\shape\\cramtex.cpp",0x32f);
        }
      }
    }
    g_CramAlgorithmState = pSVar11;
    g_CramPlacedTextureCount = g_CramPlacedTextureCount + -1;
  }
  return 0;
}
