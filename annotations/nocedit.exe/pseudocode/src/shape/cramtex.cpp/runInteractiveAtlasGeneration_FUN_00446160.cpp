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
  int iVar11;
  uint uVar12;
  SCramWorkingEntry *pSVar13;
  int *piVar14;
  void *pvVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  SCramWorkingEntry *pSVar19;
  SCramRectangle *pSVar20;
  int iVar21;
  int iVar22;
  bool bVar23;
  uint *puVar24;
  uint uVar25;
  int in_stack_ffffff5c;
  SCramWorkingEntry *pSVar26;
  SCramWorkingEntry *bounds_entry;
  void *local_90;
  int local_8c;
  void *local_88;
  int local_80;
  int local_78;
  int local_70;
  int local_68;
  int local_60;
  int local_5c;
  int local_54;
  SCramWorkingEntry *local_4c;
  SCramRectangle *local_44;
  SCramWorkingEntry *local_40;
  SCramRectangle *local_3c;
  SCramRectangle *local_38;
  SCramWorkingEntry *local_34;
  SCramRectangle *local_30;
  int *local_2c;
  int local_20;
  int iStack_14;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0xdc);
  pSVar19 = g_CramAlgorithmState;
  pSVar26 = (SCramWorkingEntry *)0x0;
  bounds_entry = (SCramWorkingEntry *)0x0;
  if (0 < g_CramRectangleCount) {
    pSVar20 = g_CramRectangles;
    puVar24 = g_CramAlgorithmState;
    do {
      pSVar20->active_flag = 0;
      iVar21 = g_CramBestSolutionMetric1;
      if ((pSVar20->reserved_0x18 == 0) &&
         ((current_texture_entry->padded_height != current_texture_entry->padded_width ||
          (pSVar20->orientation == 0)))) {
        if (pSVar20->orientation == 0) {
          iVar18 = pSVar20->top + current_texture_entry->padded_width;
          pSVar20->reserved_0x1c = iVar18;
          if (iVar18 < iVar21) {
            iVar21 = pSVar20->right + current_texture_entry->padded_height;
            goto LAB_00446547;
          }
        }
        else {
          iVar18 = pSVar20->top + current_texture_entry->padded_height;
          pSVar20->reserved_0x1c = iVar18;
          if (iVar18 < iVar21) {
            iVar21 = pSVar20->right + current_texture_entry->padded_width;
LAB_00446547:
            iVar18 = g_CramBestSolutionMetric1;
            pSVar20->reserved_0x20 = iVar21;
            if (iVar21 < iVar18) {
              iVar21 = g_CramPlacedTextureCount + -1;
              if (-1 < iVar21) {
                pSVar13 = g_CramSortedTextureEntries + iVar21;
                do {
                  if ((((pSVar20->left == pSVar13->assigned_map_number) &&
                       (pSVar20->top < pSVar13->working_top)) &&
                      (pSVar20->right < pSVar13->working_width)) &&
                     ((pSVar13->placement_bottom < pSVar20->reserved_0x1c &&
                      (pSVar13->working_right < pSVar20->reserved_0x20)))) goto LAB_004461b1;
                  iVar21 = iVar21 + -1;
                  pSVar13 = pSVar13 + -1;
                } while (-1 < iVar21);
              }
              pSVar26 = (SCramWorkingEntry *)((int)&pSVar26->width + 1);
              *puVar24 = pSVar20;
              puVar24 = puVar24 + 1;
            }
          }
        }
      }
LAB_004461b1:
      bounds_entry = (SCramWorkingEntry *)((int)&bounds_entry->width + 1);
      pSVar20 = pSVar20 + 1;
    } while ((int)bounds_entry < g_CramRectangleCount);
  }
  pSVar13 = g_CramAlgorithmState;
  if (0 < (int)pSVar26) {
    g_CramPlacedTextureCount = g_CramPlacedTextureCount + 1;
    pvVar15 = (void *)((int)g_CramAlgorithmState + (int)pSVar26 * 4);
    if (1 < (int)pSVar26) {
      iVar21 = 0;
      piVar14 = &pSVar19->width;
      g_CramAlgorithmState = pvVar15;
      if (0 < (int)pSVar26) {
        do {
          iVar18 = *piVar14;
          *(int *)(iVar18 + 0x24) = *(int *)(iVar18 + 4) + *(int *)(iVar18 + 8);
          iVar22 = *(int *)(iVar18 + 0x1c);
          if (*(int *)(iVar18 + 0x1c) <= *(int *)(iVar18 + 0x20)) {
            iVar22 = *(int *)(iVar18 + 0x20);
          }
          iVar21 = iVar21 + 1;
          *(int *)(iVar18 + 0x24) =
               *(int *)(iVar18 + 0x24) +
               *(int *)(iVar18 + 0x20) + iVar22 * 5 + *(int *)(iVar18 + 0x1c);
          piVar14 = piVar14 + 1;
        } while (iVar21 < (int)pSVar26);
      }
      crt_stdlib_c_qsort_FUN_005fdf38
                (pSVar19,(SIZE_T)pSVar26,4,
                 shape_cramtex_cpp_qsortRectanglesByActiveFlag_FUN_00446140);
      pvVar15 = g_CramAlgorithmState;
    }
    g_CramAlgorithmState = pvVar15;
    iVar21 = 0;
    pSVar9 = pSVar19;
    if (0 < (int)pSVar26) {
      do {
        iVar18 = iVar21 + 5;
        iVar21 = iVar21 + 1;
        *(int *)(pSVar9->width + 0x24) = iVar18;
        pSVar9 = (SCramWorkingEntry *)&pSVar9->height;
      } while (iVar21 < (int)pSVar26);
    }
    if (g_CramPlacedTextureCount < (int)g_CramTextureCount) {
      if (0 < (int)pSVar26) {
        do {
          piVar14 = (int *)*local_2c;
          current_texture_entry->assigned_map_number = *piVar14;
          current_texture_entry->placement_flags = piVar14[5];
          current_texture_entry->placement_bottom = piVar14[1];
          current_texture_entry->working_right = piVar14[2];
          if (current_texture_entry->placement_flags == 0) {
            current_texture_entry->effective_width = current_texture_entry->padded_width;
            iVar21 = current_texture_entry->padded_height;
          }
          else {
            current_texture_entry->effective_width = current_texture_entry->padded_height;
            iVar21 = current_texture_entry->padded_width;
          }
          current_texture_entry->effective_height = iVar21;
          current_texture_entry->working_top =
               current_texture_entry->placement_bottom + current_texture_entry->effective_width;
          current_texture_entry->working_width =
               current_texture_entry->working_right + current_texture_entry->effective_height;
          if ((current_texture_entry->working_top < g_CramBestSolutionMetric1) &&
             (current_texture_entry->working_width < g_CramBestSolutionMetric1)) {
            iVar21 = 0;
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
                iVar21 = iVar21 + 1;
                pSVar20 = pSVar20 + 1;
              } while (iVar21 < g_CramRectangleCount);
            }
            if (current_texture_entry->working_width <= g_CramBestSolutionMetric2) {
              iVar21 = g_CramPlacedTextureCount + -2;
              local_70 = 0;
              if (-1 < iVar21) {
                pSVar13 = g_CramSortedTextureEntries + iVar21;
                do {
                  if (((pSVar13->assigned_map_number == current_texture_entry->assigned_map_number)
                      && (pSVar13->working_top <= current_texture_entry->working_top)) &&
                     ((current_texture_entry->working_width < pSVar13->working_width &&
                      ((pSVar13->working_right <
                        current_texture_entry->working_width + g_CramOptimalPlacement + -1 &&
                       (local_70 < pSVar13->working_top)))))) {
                    local_70 = pSVar13->working_top;
                  }
                  iVar21 = iVar21 + -1;
                  pSVar13 = pSVar13 + -1;
                } while (-1 < iVar21);
              }
              if (local_70 < current_texture_entry->working_top) {
                local_20 = g_CramPlacedTextureCount + -2;
                if (-1 < local_20) {
                  local_40 = g_CramSortedTextureEntries + local_20;
                  do {
                    iVar21 = current_texture_entry->assigned_map_number;
                    if ((((iVar21 == local_40->assigned_map_number) &&
                         (local_40->working_top <= current_texture_entry->working_top)) &&
                        (iVar18 = current_texture_entry->working_width,
                        iVar18 < local_40->working_width)) && (local_70 < local_40->working_top)) {
                      iVar22 = local_40->working_top;
                      if (0 < g_CramRectangleCount) {
                        iVar11 = 0;
                        do {
                          if (((iVar21 == *(int *)((int)&g_CramRectangles[0].left + iVar11)) &&
                              (iVar22 == *(int *)((int)&g_CramRectangles[0].top + iVar11))) &&
                             (iVar18 == *(int *)((int)&g_CramRectangles[0].right + iVar11)))
                          goto LAB_00446d87;
                          iVar11 = iVar11 + 0x28;
                        } while (iVar11 < g_CramRectangleCount * 0x28);
                      }
                      local_68 = 0;
                      local_44 = g_CramRectangles + g_CramRectangleCount;
                      do {
                        iVar11 = g_CramMinPlacementX;
                        iVar17 = g_CramMinPlacementY;
                        if (local_68 != 0) {
                          iVar11 = g_CramMinPlacementY;
                          iVar17 = g_CramMinPlacementX;
                        }
                        iVar16 = g_CramPlacedTextureCount + -1;
                        if (-1 < iVar16) {
                          pSVar13 = g_CramSortedTextureEntries + iVar16;
                          do {
                            if (((pSVar13->assigned_map_number == iVar21) &&
                                (iVar22 < pSVar13->working_top)) &&
                               ((iVar18 < pSVar13->working_width &&
                                ((pSVar13->placement_bottom < iVar11 + iVar22 &&
                                 (pSVar13->working_right < iVar17 + iVar18)))))) break;
                            iVar16 = iVar16 + -1;
                            pSVar13 = pSVar13 + -1;
                          } while (-1 < iVar16);
                        }
                        if (iVar16 < 0) {
                          local_44->reserved_0x18 = 0;
                          local_44->active_flag = 1;
                          local_44->left = iVar21;
                          local_44->top = iVar22;
                          local_44->right = iVar18;
                          local_44->bottom = iVar11 + iVar22;
                          local_44->orientation = local_68;
                          local_44->max_dimension = iVar17 + iVar18;
                          g_CramRectangleCount = g_CramRectangleCount + 1;
                          local_44 = local_44 + 1;
                        }
                        local_68 = local_68 + 1;
                      } while (local_68 < 2);
                    }
LAB_00446d87:
                    local_40 = local_40 + -1;
                    local_20 = local_20 + -1;
                  } while (-1 < local_20);
                }
                iVar21 = current_texture_entry->assigned_map_number;
                iVar18 = current_texture_entry->working_width;
                if (0 < g_CramRectangleCount) {
                  iVar22 = 0;
                  do {
                    if (((iVar21 == *(int *)((int)&g_CramRectangles[0].left + iVar22)) &&
                        (local_70 == *(int *)((int)&g_CramRectangles[0].top + iVar22))) &&
                       (iVar18 == *(int *)((int)&g_CramRectangles[0].right + iVar22)))
                    goto LAB_00446df8;
                    iVar22 = iVar22 + 0x28;
                  } while (iVar22 < g_CramRectangleCount * 0x28);
                }
                local_3c = g_CramRectangles + g_CramRectangleCount;
                local_60 = 0;
                do {
                  iVar22 = g_CramMinPlacementY;
                  iVar11 = g_CramMinPlacementX;
                  if (local_60 != 0) {
                    iVar22 = g_CramMinPlacementX;
                    iVar11 = g_CramMinPlacementY;
                  }
                  iVar17 = g_CramPlacedTextureCount + -1;
                  if (-1 < iVar17) {
                    pSVar13 = g_CramSortedTextureEntries + iVar17;
                    do {
                      if (((pSVar13->assigned_map_number == iVar21) &&
                          (local_70 < pSVar13->working_top)) &&
                         ((iVar18 < pSVar13->working_width &&
                          ((pSVar13->placement_bottom < iVar11 + local_70 &&
                           (pSVar13->working_right < iVar22 + iVar18)))))) break;
                      iVar17 = iVar17 + -1;
                      pSVar13 = pSVar13 + -1;
                    } while (-1 < iVar17);
                  }
                  if (iVar17 < 0) {
                    local_3c->reserved_0x18 = 0;
                    local_3c->active_flag = 1;
                    local_3c->left = iVar21;
                    local_3c->top = local_70;
                    local_3c->right = iVar18;
                    local_3c->max_dimension = iVar22 + iVar18;
                    local_3c->orientation = local_60;
                    local_3c->bottom = iVar11 + local_70;
                    g_CramRectangleCount = g_CramRectangleCount + 1;
                    local_3c = local_3c + 1;
                  }
                  local_60 = local_60 + 1;
                } while (local_60 < 2);
              }
            }
LAB_00446df8:
            if (current_texture_entry->working_width <= g_CramBestSolutionMetric2) {
              iVar21 = g_CramPlacedTextureCount + -2;
              local_5c = 0;
              if (-1 < iVar21) {
                pSVar13 = g_CramSortedTextureEntries + iVar21;
                do {
                  if ((((pSVar13->assigned_map_number == current_texture_entry->assigned_map_number)
                       && (pSVar13->working_width <= current_texture_entry->working_width)) &&
                      (current_texture_entry->working_top < pSVar13->working_top)) &&
                     ((pSVar13->placement_bottom <
                       current_texture_entry->working_top + g_CramOptimalPlacement + -1 &&
                      (local_5c < pSVar13->working_width)))) {
                    local_5c = pSVar13->working_width;
                  }
                  iVar21 = iVar21 + -1;
                  pSVar13 = pSVar13 + -1;
                } while (-1 < iVar21);
              }
              if (local_5c < current_texture_entry->working_width) {
                iStack_14 = g_CramPlacedTextureCount + -2;
                if (-1 < iStack_14) {
                  local_34 = g_CramSortedTextureEntries + iStack_14;
                  do {
                    iVar21 = current_texture_entry->assigned_map_number;
                    if (((iVar21 == local_34->assigned_map_number) &&
                        (local_34->working_width <= current_texture_entry->working_width)) &&
                       ((iVar18 = current_texture_entry->working_top, iVar18 < local_34->working_top
                        && (local_5c < local_34->working_width)))) {
                      iVar22 = local_34->working_width;
                      if (0 < g_CramRectangleCount) {
                        iVar11 = 0;
                        do {
                          if (((iVar21 == *(int *)((int)&g_CramRectangles[0].left + iVar11)) &&
                              (iVar18 == *(int *)((int)&g_CramRectangles[0].top + iVar11))) &&
                             (iVar22 == *(int *)((int)&g_CramRectangles[0].right + iVar11)))
                          goto LAB_00446f25;
                          iVar11 = iVar11 + 0x28;
                        } while (iVar11 < g_CramRectangleCount * 0x28);
                      }
                      local_54 = 0;
                      local_38 = g_CramRectangles + g_CramRectangleCount;
                      do {
                        iVar11 = g_CramMinPlacementX;
                        iVar17 = g_CramMinPlacementY;
                        if (local_54 != 0) {
                          iVar11 = g_CramMinPlacementY;
                          iVar17 = g_CramMinPlacementX;
                        }
                        iVar16 = g_CramPlacedTextureCount + -1;
                        if (-1 < iVar16) {
                          pSVar13 = g_CramSortedTextureEntries + iVar16;
                          do {
                            if (((pSVar13->assigned_map_number == iVar21) &&
                                (iVar18 < pSVar13->working_top)) &&
                               ((iVar22 < pSVar13->working_width &&
                                ((pSVar13->placement_bottom < iVar11 + iVar18 &&
                                 (pSVar13->working_right < iVar17 + iVar22)))))) break;
                            iVar16 = iVar16 + -1;
                            pSVar13 = pSVar13 + -1;
                          } while (-1 < iVar16);
                        }
                        if (iVar16 < 0) {
                          local_38->reserved_0x18 = 0;
                          local_38->active_flag = 1;
                          local_38->left = iVar21;
                          local_38->top = iVar18;
                          local_38->right = iVar22;
                          local_38->bottom = iVar11 + iVar18;
                          local_38->orientation = local_54;
                          local_38->max_dimension = iVar17 + iVar22;
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
                iVar21 = current_texture_entry->assigned_map_number;
                iVar18 = current_texture_entry->working_top;
                if (0 < g_CramRectangleCount) {
                  iVar22 = 0;
                  do {
                    if (((iVar21 == *(int *)((int)&g_CramRectangles[0].left + iVar22)) &&
                        (iVar18 == *(int *)((int)&g_CramRectangles[0].top + iVar22))) &&
                       (local_5c == *(int *)((int)&g_CramRectangles[0].right + iVar22)))
                    goto LAB_00446f96;
                    iVar22 = iVar22 + 0x28;
                  } while (iVar22 < g_CramRectangleCount * 0x28);
                }
                local_30 = g_CramRectangles + g_CramRectangleCount;
                local_4c = (SCramWorkingEntry *)0x0;
                do {
                  iVar22 = g_CramMinPlacementY;
                  iVar11 = g_CramMinPlacementX;
                  if (local_4c != (SCramWorkingEntry *)0x0) {
                    iVar22 = g_CramMinPlacementX;
                    iVar11 = g_CramMinPlacementY;
                  }
                  iVar17 = g_CramPlacedTextureCount + -1;
                  if (-1 < iVar17) {
                    pSVar13 = g_CramSortedTextureEntries + iVar17;
                    do {
                      if (((pSVar13->assigned_map_number == iVar21) &&
                          (iVar18 < pSVar13->working_top)) &&
                         ((local_5c < pSVar13->working_width &&
                          ((pSVar13->placement_bottom < iVar11 + iVar18 &&
                           (pSVar13->working_right < iVar22 + local_5c)))))) break;
                      iVar17 = iVar17 + -1;
                      pSVar13 = pSVar13 + -1;
                    } while (-1 < iVar17);
                  }
                  if (iVar17 < 0) {
                    local_30->reserved_0x18 = 0;
                    local_30->active_flag = 1;
                    local_30->left = iVar21;
                    local_30->top = iVar18;
                    local_30->right = local_5c;
                    local_30->max_dimension = iVar22 + local_5c;
                    local_30->orientation = (int)local_4c;
                    local_30->bottom = iVar11 + iVar18;
                    g_CramRectangleCount = g_CramRectangleCount + 1;
                    local_30 = local_30 + 1;
                  }
                  local_4c = (SCramWorkingEntry *)((int)local_4c + 1);
                } while ((int)local_4c < 2);
              }
            }
LAB_00446f96:
            if (g_CramVisualizationMode != 0) {
              shape_cramtex_cpp_visualizeTextureAtlas_FUN_00447f20(0,0,(int)pSVar19);
            }
            iVar21 = shape_cramtex_cpp_runInteractiveAtlasGeneration_FUN_00446160(pSVar26);
            if (0 < iVar21) {
              iVar21 = iVar21 + -1;
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
              iVar18 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
              fVar7 = (float)(iVar18 - g_CramStartTime) * (float)8.4771050347222196e-07;
              g_CramStartTime = iVar18;
              if (0.0 < fVar7) {
                g_CramIterationCount = (int)((float)g_CramIterationCount + fVar7);
              }
              while (iVar18 = wincore_winrun_cpp_wasKeyPressed_FUN_005f2f00(), iVar18 != 0) {
                uVar12 = wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
                uVar12 = uVar12 & 0xff;
                if (uVar12 == 0x1b) goto LAB_00447500;
                if ((((uVar12 == 0x2e) || (uVar12 == 0x3e)) || (uVar12 == 0x6e)) || (uVar12 == 0x4e)
                   ) {
                  g_CramMapNumber = g_CramMapNumber + 1;
                }
                if (((uVar12 == 0x2c) || (uVar12 == 0x3c)) || ((uVar12 == 0x70 || (uVar12 == 0x50)))
                   ) {
                  g_CramMapNumber = g_CramMapNumber + g_CramTotalMaps + -1;
                }
                if ((uVar12 == 0x73) || (uVar12 == 0x53)) {
                  g_CramDebugStepMode = (int)(g_CramDebugStepMode == 0);
                }
                if ((uVar12 == 0x74) || (uVar12 == 0x54)) {
                  g_CramVisualizationMode = (int)(g_CramVisualizationMode == 0);
                  pSVar19 = (SCramWorkingEntry *)0x0;
                  shape_cramtex_cpp_visualizeTextureAtlas_FUN_00447f20(0,0,(int)pSVar26);
                }
                else {
                  pSVar19 = (SCramWorkingEntry *)0x0;
                  shape_cramtex_cpp_visualizeTextureAtlas_FUN_00447f20(0,0,(int)pSVar26);
                }
              }
              if ((0 < g_CramMaxIterationsLimit) &&
                 ((float)g_CramMaxIterationsLimit < (float)g_CramIterationCount)) {
LAB_00447500:
                engine_2d_c_clearInputAndWait_FUN_00403260();
                g_CramAlgorithmState = local_88;
                g_CramPlacedTextureCount = g_CramPlacedTextureCount + -1;
                return 999999;
              }
              g_CramVisualizationUpdateCounter = 0;
            }
            if (iVar21 != 0) {
              g_CramAlgorithmState = local_90;
              g_CramPlacedTextureCount = g_CramPlacedTextureCount + -1;
              return iVar21;
            }
          }
          local_2c = local_2c + 1;
          local_78 = local_78 + 1;
        } while (local_78 < (int)bounds_entry);
      }
    }
    else {
      piVar14 = (int *)pSVar19->width;
      current_texture_entry->assigned_map_number = *piVar14;
      current_texture_entry->placement_flags = piVar14[5];
      current_texture_entry->placement_bottom = piVar14[1];
      current_texture_entry->working_right = piVar14[2];
      if (current_texture_entry->placement_flags == 0) {
        current_texture_entry->effective_width = current_texture_entry->padded_width;
        iVar21 = current_texture_entry->padded_height;
      }
      else {
        current_texture_entry->effective_width = current_texture_entry->padded_height;
        iVar21 = current_texture_entry->padded_width;
      }
      current_texture_entry->effective_height = iVar21;
      current_texture_entry->working_top =
           current_texture_entry->placement_bottom + current_texture_entry->effective_width;
      iVar21 = g_CramPlacedTextureCount;
      iVar22 = 0;
      current_texture_entry->working_width =
           current_texture_entry->working_right + current_texture_entry->effective_height;
      iVar18 = 0;
      if (0 < iVar21) {
        pSVar9 = g_CramSortedTextureEntries;
        do {
          if (iVar18 < pSVar9->working_top) {
            iVar18 = pSVar9->working_top;
          }
          if (iVar18 < pSVar9->working_width) {
            iVar18 = pSVar9->working_width;
          }
          iVar22 = iVar22 + 1;
          pSVar9 = pSVar9 + 1;
        } while (iVar22 < g_CramPlacedTextureCount);
      }
      pFVar10 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                          ("..\\shape\\cramlog.txt",(char *)0x0,"at",
                           "..\\shape\\cramtex.cpp",0x30d);
      if (pFVar10 != (FILE *)0x0) {
        crt_stdio_c_fprintf_FUN_005fe6d0(pFVar10,"New best solution found!  thisSquareSize = %d\n",iVar18);
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar10,"..\\shape\\cramtex.cpp",0x310);
      }
      if (iVar18 < g_CramBestSolutionMetric1) {
        iVar21 = 0;
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
            iVar21 = iVar21 + 1;
            pSVar9->final_bottom = pSVar9->working_width;
            pSVar9 = pSVar9 + 1;
          } while (iVar21 < iVar18);
        }
        if (g_CramFillGaps != 0) {
          do {
            bVar23 = false;
            local_90 = (void *)0x0;
            if (0 < (int)g_CramTextureCount) {
              local_4c = g_CramSortedTextureEntries;
              do {
                while( true ) {
                  iVar21 = 0;
                  if ((local_4c->final_bottom < g_CramCurrentAcceptableSize) &&
                     (iVar18 = shape_cramtex_cpp_findLowestOverlappingY_FUN_00447930(pSVar19),
                     g_CramCurrentAcceptableSize <= iVar18)) {
                    iVar21 = iVar18 - local_4c->final_bottom;
                    local_4c->final_bottom = local_4c->final_bottom + iVar21;
                    local_4c->final_top = local_4c->final_top + iVar21;
                  }
                  if ((local_4c->final_right < g_CramCurrentAcceptableSize) &&
                     (iVar18 = shape_cramtex_cpp_findLeftmostOverlappingX_FUN_00447a10(pSVar19),
                     g_CramCurrentAcceptableSize <= iVar18)) {
                    iVar21 = iVar18 - local_4c->final_right;
                    local_4c->final_left = local_4c->final_left + iVar21;
                    local_4c->final_right = local_4c->final_right + iVar21;
                  }
                  if (iVar21 < 1) break;
                  bVar23 = true;
                }
                local_4c = local_4c + 1;
                local_90 = (void *)((int)local_90 + 1);
              } while ((int)local_90 < (int)g_CramTextureCount);
            }
          } while (bVar23);
          local_8c = 0;
          do {
            iVar21 = 0;
            bVar23 = false;
            if (0 < (int)g_CramTextureCount) {
              pSVar9 = g_CramSortedTextureEntries;
              do {
                iVar22 = shape_cramtex_cpp_findRightmostOverlappingX_FUN_004479a0(pSVar19);
                iVar18 = pSVar9->final_left;
                iVar11 = shape_cramtex_cpp_findLeftmostOverlappingX_FUN_00447a10(pSVar19);
                iVar18 = ((iVar22 - iVar18) + (iVar11 - pSVar9->final_right)) / 2;
                if (iVar18 != 0) {
                  bVar23 = true;
                  pSVar9->final_left = pSVar9->final_left + iVar18;
                  pSVar9->final_right = pSVar9->final_right + iVar18;
                }
                iVar22 = shape_cramtex_cpp_findHighestOverlappingY_FUN_004478c0(pSVar19);
                iVar18 = pSVar9->final_top;
                iVar11 = shape_cramtex_cpp_findLowestOverlappingY_FUN_00447930(pSVar19);
                iVar18 = ((iVar22 - iVar18) + (iVar11 - pSVar9->final_bottom)) / 2;
                if (iVar18 != 0) {
                  bVar23 = true;
                  pSVar9->final_top = pSVar9->final_top + iVar18;
                  pSVar9->final_bottom = pSVar9->final_bottom + iVar18;
                }
                iVar21 = iVar21 + 1;
                pSVar9 = pSVar9 + 1;
              } while (iVar21 < (int)g_CramTextureCount);
            }
          } while ((bVar23) && (local_8c = local_8c + 1, local_8c < 10));
          local_2c = (int *)0x0;
          do {
            if (((uint)local_2c & 1) == 0) {
              uVar12 = 0;
              local_80 = 1;
              uVar25 = g_CramTextureCount;
            }
            else {
              local_80 = -1;
              uVar12 = g_CramTextureCount - 1;
              uVar25 = 0xffffffff;
            }
            for (; uVar12 != uVar25; uVar12 = uVar12 + local_80) {
              pSVar9 = g_CramSortedTextureEntries + uVar12;
              iVar21 = shape_cramtex_cpp_findRightmostOverlappingX_FUN_004479a0(pSVar19);
              g_CramSortedTextureEntries[uVar12].final_left =
                   (g_CramSortedTextureEntries[uVar12].final_left + iVar21) / 2;
              iVar21 = shape_cramtex_cpp_findHighestOverlappingY_FUN_004478c0(pSVar26);
              g_CramSortedTextureEntries[uVar12].final_top =
                   (g_CramSortedTextureEntries[uVar12].final_top + iVar21) / 2;
              in_stack_ffffff5c = 0x446850;
              iVar21 = shape_cramtex_cpp_findLeftmostOverlappingX_FUN_00447a10(bounds_entry);
              g_CramSortedTextureEntries[uVar12].final_right =
                   (iVar21 + g_CramSortedTextureEntries[uVar12].final_right + 1) / 2;
              pSVar19 = (SCramWorkingEntry *)0x44686b;
              iVar21 = shape_cramtex_cpp_findLowestOverlappingY_FUN_00447930(pSVar13);
              g_CramSortedTextureEntries[uVar12].final_bottom =
                   (iVar21 + g_CramSortedTextureEntries[uVar12].final_bottom + 1) / 2;
              pSVar26 = pSVar9;
            }
            local_2c = (int *)((int)local_2c + 1);
          } while ((int)local_2c < 10);
          iVar21 = 0;
          if (0 < (int)g_CramTextureCount) {
            pSVar26 = g_CramSortedTextureEntries;
            do {
              do {
                iVar18 = shape_cramtex_cpp_findHighestOverlappingY_FUN_004478c0(pSVar19);
                iVar18 = pSVar26->final_top - iVar18;
                pSVar26->final_bottom = pSVar26->final_bottom - iVar18;
                pSVar26->final_top = pSVar26->final_top - iVar18;
                iVar18 = shape_cramtex_cpp_findRightmostOverlappingX_FUN_004479a0(pSVar19);
                iVar18 = pSVar26->final_left - iVar18;
                pSVar26->final_right = pSVar26->final_right - iVar18;
                pSVar26->final_left = pSVar26->final_left - iVar18;
              } while (0 < iVar18);
              iVar21 = iVar21 + 1;
              pSVar26 = pSVar26 + 1;
            } while (iVar21 < (int)g_CramTextureCount);
          }
          iVar21 = 0;
          if (0 < (int)g_CramTextureCount) {
            pSVar26 = g_CramSortedTextureEntries;
            do {
              iVar18 = shape_cramtex_cpp_findLeftmostOverlappingX_FUN_00447a10(pSVar19);
              iVar21 = iVar21 + 1;
              pSVar26->final_right = iVar18;
              iVar18 = shape_cramtex_cpp_findLowestOverlappingY_FUN_00447930(pSVar19);
              uVar12 = g_CramTextureCount;
              pSVar26->final_bottom = iVar18;
              pSVar26 = pSVar26 + 1;
            } while (iVar21 < (int)uVar12);
          }
        }
        shape_cramtex_cpp_visualizeTextureAtlas_FUN_00447f20(0,0,in_stack_ffffff5c);
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
          g_CramAlgorithmState = pSVar13;
          g_CramPlacedTextureCount = g_CramPlacedTextureCount + -1;
          return 999999;
        }
        iVar21 = g_CramAcceptableSize + g_CramCurrentAcceptableSize * 3;
        iVar18 = iVar21 >> 0x1f;
        g_CramBestSolutionMetric1 = (int)((iVar21 + iVar18 * -4) - (uint)(iVar18 << 1 < 0)) >> 2;
        g_CramBestSolutionMetric2 = g_CramBestSolutionMetric1 - g_CramOptimalPlacement;
        iVar21 = 0;
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
            iVar21 = iVar21 + 1;
            pSVar20 = pSVar20 + 1;
          } while (iVar21 < g_CramRectangleCount);
        }
        iVar21 = 1;
        if (1 < g_CramPlacedTextureCount) {
          iVar18 = 0x4c;
          do {
            if ((g_CramBestSolutionMetric1 <=
                 *(int *)((int)&g_CramSortedTextureEntries[0].working_top + iVar18)) ||
               (g_CramBestSolutionMetric1 <=
                *(int *)((int)&g_CramSortedTextureEntries[0].working_width + iVar18))) {
              g_CramAlgorithmState = pSVar13;
              g_CramPlacedTextureCount = g_CramPlacedTextureCount + -1;
              return g_CramPlacedTextureCount - iVar21;
            }
            iVar18 = iVar18 + 0x4c;
            iVar21 = iVar21 + 1;
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
            pSVar19 = g_CramSortedTextureEntries;
            iVar21 = 0;
            do {
              piVar14 = &pSVar19->rotation_applied;
              piVar1 = &pSVar19->final_bottom;
              piVar2 = &pSVar19->final_right;
              piVar3 = &pSVar19->final_top;
              piVar4 = &pSVar19->final_left;
              piVar5 = &pSVar19->working_map_id;
              piVar6 = &pSVar19->height;
              piVar8 = &pSVar19->width;
              pSVar19 = pSVar19 + 1;
              iVar18 = iVar21 + 1;
              crt_stdio_c_fprintf_FUN_005fe6d0
                        (pFVar10,"%3d: %5dx%-5d  Map %d (%5d,%-5d)-(%5d,%-5d)    Rotated: %d\n",iVar21,*piVar8,*piVar6,*piVar5,
                         *piVar4,*piVar3,*piVar2,*piVar1,*piVar14);
              iVar21 = iVar18;
            } while (iVar18 < (int)g_CramTextureCount);
          }
          crt_stdio_c_fprintf_FUN_005fe6d0(pFVar10,"Current:\n");
          if (0 < (int)g_CramTextureCount) {
            pSVar19 = g_CramSortedTextureEntries;
            iVar21 = 0;
            do {
              piVar14 = &pSVar19->rotation_applied;
              piVar1 = &pSVar19->working_width;
              piVar2 = &pSVar19->working_top;
              piVar3 = &pSVar19->working_right;
              piVar4 = &pSVar19->placement_bottom;
              piVar5 = &pSVar19->assigned_map_number;
              piVar6 = &pSVar19->height;
              piVar8 = &pSVar19->width;
              pSVar19 = pSVar19 + 1;
              iVar18 = iVar21 + 1;
              crt_stdio_c_fprintf_FUN_005fe6d0
                        (pFVar10,"%3d: %5dx%-5d  Map %d (%5d,%-5d)-(%5d,%-5d)    Rotated: %d\n",iVar21,*piVar8,*piVar6,*piVar5,
                         *piVar4,*piVar3,*piVar2,*piVar1,*piVar14);
              iVar21 = iVar18;
            } while (iVar18 < (int)g_CramTextureCount);
          }
          shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar10,"..\\shape\\cramtex.cpp",0x32f);
        }
      }
    }
    g_CramPlacedTextureCount = g_CramPlacedTextureCount + -1;
    g_CramAlgorithmState = local_90;
  }
  return 0;
}
