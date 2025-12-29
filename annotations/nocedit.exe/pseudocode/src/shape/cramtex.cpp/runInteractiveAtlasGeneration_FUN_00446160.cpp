// Name: shape_cramtex.cpp_runInteractiveAtlasGeneration_FUN_00446160
// Address: 00446160
// Address Range: [[00446160, 0044758e]]
// Convention: __cdecl
// Signature: int shape_cramtex.cpp_runInteractiveAtlasGeneration_FUN_00446160(SCramWorkingEntry * current_texture_entry)

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
  SCramWorkingEntry *pSVar9;
  FILE *pFVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  void *pvVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  SCramWorkingEntry *pSVar18;
  SCramRectangle *pSVar19;
  int iVar20;
  bool bVar21;
  uint *puVar22;
  uint uVar23;
  char *display_mode;
  char *bounds_entry;
  char *reference_entry;
  SCramWorkingEntry *pSVar24;
  int in_stack_ffffff5c;
  SIZE_T num;
  int iVar25;
  byte *puVar26;
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
  pSVar9 = g_CramAlgorithmState;
  num = 0;
  iVar25 = 0;
  if (0 < g_CramRectangleCount) {
    pSVar19 = g_CramRectangles;
    puVar22 = g_CramAlgorithmState;
    do {
      pSVar19->active_flag = 0;
      iVar17 = g_CramBestSolutionMetric1;
      if ((pSVar19->reserved_0x18 == 0) &&
         ((current_texture_entry->padded_height != current_texture_entry->padded_width ||
          (pSVar19->orientation == 0)))) {
        if (pSVar19->orientation == 0) {
          iVar20 = pSVar19->top + current_texture_entry->padded_width;
          pSVar19->reserved_0x1c = iVar20;
          if (iVar20 < iVar17) {
            iVar17 = pSVar19->right + current_texture_entry->padded_height;
            goto LAB_00446547;
          }
        }
        else {
          iVar20 = pSVar19->top + current_texture_entry->padded_height;
          pSVar19->reserved_0x1c = iVar20;
          if (iVar20 < iVar17) {
            iVar17 = pSVar19->right + current_texture_entry->padded_width;
LAB_00446547:
            iVar20 = g_CramBestSolutionMetric1;
            pSVar19->reserved_0x20 = iVar17;
            if (iVar17 < iVar20) {
              iVar17 = g_CramPlacedTextureCount + -1;
              if (-1 < iVar17) {
                pSVar24 = g_CramSortedTextureEntries + iVar17;
                do {
                  if ((((pSVar19->left == pSVar24->assigned_map_number) &&
                       (pSVar19->top < pSVar24->working_top)) &&
                      (pSVar19->right < pSVar24->working_width)) &&
                     ((pSVar24->placement_bottom < pSVar19->reserved_0x1c &&
                      (pSVar24->working_right < pSVar19->reserved_0x20)))) goto LAB_004461b1;
                  iVar17 = iVar17 + -1;
                  pSVar24 = pSVar24 + -1;
                } while (-1 < iVar17);
              }
              num = num + 1;
              *puVar22 = pSVar19;
              puVar22 = puVar22 + 1;
            }
          }
        }
      }
LAB_004461b1:
      iVar25 = iVar25 + 1;
      pSVar19 = pSVar19 + 1;
    } while (iVar25 < g_CramRectangleCount);
  }
  puVar26 = g_CramAlgorithmState;
  if (0 < (int)num) {
    g_CramPlacedTextureCount = g_CramPlacedTextureCount + 1;
    pvVar14 = (void *)((int)g_CramAlgorithmState + num * 4);
    if (1 < (int)num) {
      iVar25 = 0;
      piVar13 = &pSVar9->width;
      g_CramAlgorithmState = pvVar14;
      if (0 < (int)num) {
        do {
          iVar17 = *piVar13;
          *(int *)(iVar17 + 0x24) = *(int *)(iVar17 + 4) + *(int *)(iVar17 + 8);
          iVar20 = *(int *)(iVar17 + 0x1c);
          if (*(int *)(iVar17 + 0x1c) <= *(int *)(iVar17 + 0x20)) {
            iVar20 = *(int *)(iVar17 + 0x20);
          }
          iVar25 = iVar25 + 1;
          *(int *)(iVar17 + 0x24) =
               *(int *)(iVar17 + 0x24) +
               *(int *)(iVar17 + 0x20) + iVar20 * 5 + *(int *)(iVar17 + 0x1c);
          piVar13 = piVar13 + 1;
        } while (iVar25 < (int)num);
      }
      crt_stdlib_c_qsort_FUN_005fdf38
                (pSVar9,num,4,shape_cramtex_cpp_qsortRectanglesByActiveFlag_FUN_00446140);
      pvVar14 = g_CramAlgorithmState;
    }
    g_CramAlgorithmState = pvVar14;
    iVar25 = 0;
    pSVar24 = pSVar9;
    if (0 < (int)num) {
      do {
        iVar17 = iVar25 + 5;
        iVar25 = iVar25 + 1;
        *(int *)(pSVar24->width + 0x24) = iVar17;
        pSVar24 = (SCramWorkingEntry *)&pSVar24->height;
      } while (iVar25 < (int)num);
    }
    if (g_CramPlacedTextureCount < (int)g_CramTextureCount) {
      local_7c = (void *)0x0;
      local_30 = pSVar9;
      if (0 < (int)num) {
        do {
          piVar13 = (int *)local_30->width;
          current_texture_entry->assigned_map_number = *piVar13;
          current_texture_entry->placement_flags = piVar13[5];
          current_texture_entry->placement_bottom = piVar13[1];
          current_texture_entry->working_right = piVar13[2];
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
                iVar25 = iVar25 + 1;
                pSVar19 = pSVar19 + 1;
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
                        (iVar17 = current_texture_entry->working_width,
                        iVar17 < local_44->working_width)) && (local_74 < local_44->working_top)) {
                      iVar20 = local_44->working_top;
                      if (0 < g_CramRectangleCount) {
                        iVar11 = 0;
                        do {
                          if (((iVar25 == *(int *)((int)&g_CramRectangles[0].left + iVar11)) &&
                              (iVar20 == *(int *)((int)&g_CramRectangles[0].top + iVar11))) &&
                             (iVar17 == *(int *)((int)&g_CramRectangles[0].right + iVar11)))
                          goto LAB_00446d87;
                          iVar11 = iVar11 + 0x28;
                        } while (iVar11 < g_CramRectangleCount * 0x28);
                      }
                      local_6c = 0;
                      local_48 = g_CramRectangles + g_CramRectangleCount;
                      do {
                        iVar11 = g_CramMinPlacementX;
                        iVar16 = g_CramMinPlacementY;
                        if (local_6c != 0) {
                          iVar11 = g_CramMinPlacementY;
                          iVar16 = g_CramMinPlacementX;
                        }
                        iVar15 = g_CramPlacedTextureCount + -1;
                        if (-1 < iVar15) {
                          pSVar24 = g_CramSortedTextureEntries + iVar15;
                          do {
                            if (((pSVar24->assigned_map_number == iVar25) &&
                                (iVar20 < pSVar24->working_top)) &&
                               ((iVar17 < pSVar24->working_width &&
                                ((pSVar24->placement_bottom < iVar11 + iVar20 &&
                                 (pSVar24->working_right < iVar16 + iVar17)))))) break;
                            iVar15 = iVar15 + -1;
                            pSVar24 = pSVar24 + -1;
                          } while (-1 < iVar15);
                        }
                        if (iVar15 < 0) {
                          local_48->reserved_0x18 = 0;
                          local_48->active_flag = 1;
                          local_48->left = iVar25;
                          local_48->top = iVar20;
                          local_48->right = iVar17;
                          local_48->bottom = iVar11 + iVar20;
                          local_48->orientation = local_6c;
                          local_48->max_dimension = iVar16 + iVar17;
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
                iVar17 = current_texture_entry->working_width;
                if (0 < g_CramRectangleCount) {
                  iVar20 = 0;
                  do {
                    if (((iVar25 == *(int *)((int)&g_CramRectangles[0].left + iVar20)) &&
                        (local_74 == *(int *)((int)&g_CramRectangles[0].top + iVar20))) &&
                       (iVar17 == *(int *)((int)&g_CramRectangles[0].right + iVar20)))
                    goto LAB_00446df8;
                    iVar20 = iVar20 + 0x28;
                  } while (iVar20 < g_CramRectangleCount * 0x28);
                }
                local_40 = g_CramRectangles + g_CramRectangleCount;
                local_64 = 0;
                do {
                  iVar20 = g_CramMinPlacementY;
                  iVar11 = g_CramMinPlacementX;
                  if (local_64 != 0) {
                    iVar20 = g_CramMinPlacementX;
                    iVar11 = g_CramMinPlacementY;
                  }
                  iVar16 = g_CramPlacedTextureCount + -1;
                  if (-1 < iVar16) {
                    pSVar24 = g_CramSortedTextureEntries + iVar16;
                    do {
                      if (((pSVar24->assigned_map_number == iVar25) &&
                          (local_74 < pSVar24->working_top)) &&
                         ((iVar17 < pSVar24->working_width &&
                          ((pSVar24->placement_bottom < iVar11 + local_74 &&
                           (pSVar24->working_right < iVar20 + iVar17)))))) break;
                      iVar16 = iVar16 + -1;
                      pSVar24 = pSVar24 + -1;
                    } while (-1 < iVar16);
                  }
                  if (iVar16 < 0) {
                    local_40->reserved_0x18 = 0;
                    local_40->active_flag = 1;
                    local_40->left = iVar25;
                    local_40->top = local_74;
                    local_40->right = iVar17;
                    local_40->max_dimension = iVar20 + iVar17;
                    local_40->orientation = local_64;
                    local_40->bottom = iVar11 + local_74;
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
                       ((iVar17 = current_texture_entry->working_top, iVar17 < local_38->working_top
                        && ((int)local_60 < local_38->working_width)))) {
                      iVar20 = local_38->working_width;
                      if (0 < g_CramRectangleCount) {
                        iVar11 = 0;
                        do {
                          if (((iVar25 == *(int *)((int)&g_CramRectangles[0].left + iVar11)) &&
                              (iVar17 == *(int *)((int)&g_CramRectangles[0].top + iVar11))) &&
                             (iVar20 == *(int *)((int)&g_CramRectangles[0].right + iVar11)))
                          goto LAB_00446f25;
                          iVar11 = iVar11 + 0x28;
                        } while (iVar11 < g_CramRectangleCount * 0x28);
                      }
                      local_58 = 0;
                      local_3c = g_CramRectangles + g_CramRectangleCount;
                      do {
                        iVar11 = g_CramMinPlacementX;
                        iVar16 = g_CramMinPlacementY;
                        if (local_58 != 0) {
                          iVar11 = g_CramMinPlacementY;
                          iVar16 = g_CramMinPlacementX;
                        }
                        iVar15 = g_CramPlacedTextureCount + -1;
                        if (-1 < iVar15) {
                          pSVar24 = g_CramSortedTextureEntries + iVar15;
                          do {
                            if (((pSVar24->assigned_map_number == iVar25) &&
                                (iVar17 < pSVar24->working_top)) &&
                               ((iVar20 < pSVar24->working_width &&
                                ((pSVar24->placement_bottom < iVar11 + iVar17 &&
                                 (pSVar24->working_right < iVar16 + iVar20)))))) break;
                            iVar15 = iVar15 + -1;
                            pSVar24 = pSVar24 + -1;
                          } while (-1 < iVar15);
                        }
                        if (iVar15 < 0) {
                          local_3c->reserved_0x18 = 0;
                          local_3c->active_flag = 1;
                          local_3c->left = iVar25;
                          local_3c->top = iVar17;
                          local_3c->right = iVar20;
                          local_3c->bottom = iVar11 + iVar17;
                          local_3c->orientation = local_58;
                          local_3c->max_dimension = iVar16 + iVar20;
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
                iVar17 = current_texture_entry->working_top;
                if (0 < g_CramRectangleCount) {
                  iVar20 = 0;
                  do {
                    if (((iVar25 == *(int *)((int)&g_CramRectangles[0].left + iVar20)) &&
                        (iVar17 == *(int *)((int)&g_CramRectangles[0].top + iVar20))) &&
                       (local_60 ==
                        (SCramWorkingEntry *)*(int *)((int)&g_CramRectangles[0].right + iVar20)))
                    goto LAB_00446f96;
                    iVar20 = iVar20 + 0x28;
                  } while (iVar20 < g_CramRectangleCount * 0x28);
                }
                local_34 = g_CramRectangles + g_CramRectangleCount;
                local_50 = 0;
                do {
                  iVar20 = g_CramMinPlacementY;
                  iVar11 = g_CramMinPlacementX;
                  if (local_50 != 0) {
                    iVar20 = g_CramMinPlacementX;
                    iVar11 = g_CramMinPlacementY;
                  }
                  iVar16 = g_CramPlacedTextureCount + -1;
                  if (-1 < iVar16) {
                    pSVar24 = g_CramSortedTextureEntries + iVar16;
                    do {
                      if (((pSVar24->assigned_map_number == iVar25) &&
                          (iVar17 < pSVar24->working_top)) &&
                         (((int)local_60 < pSVar24->working_width &&
                          ((pSVar24->placement_bottom < iVar11 + iVar17 &&
                           (pSVar24->working_right < iVar20 + (int)local_60)))))) break;
                      iVar16 = iVar16 + -1;
                      pSVar24 = pSVar24 + -1;
                    } while (-1 < iVar16);
                  }
                  if (iVar16 < 0) {
                    local_34->reserved_0x18 = 0;
                    local_34->active_flag = 1;
                    local_34->left = iVar25;
                    local_34->top = iVar17;
                    local_34->right = (int)local_60;
                    local_34->max_dimension = iVar20 + (int)local_60;
                    local_34->orientation = local_50;
                    local_34->bottom = iVar11 + iVar17;
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
            iVar25 = shape_cramtex_cpp_runInteractiveAtlasGeneration_FUN_00446160(pSVar9);
            if (0 < iVar25) {
              iVar25 = iVar25 + -1;
            }
            g_CramRectangleCount = local_74;
            if (0 < local_74) {
              iVar17 = 0;
              do {
                if (current_texture_entry ==
                    *(SCramWorkingEntry **)((int)&g_CramRectangles[0].reserved_0x18 + iVar17)) {
                  *(uint *)((int)&g_CramRectangles[0].reserved_0x18 + iVar17) = 0;
                }
                iVar17 = iVar17 + 0x28;
              } while (iVar17 < local_74 * 0x28);
            }
            if (g_CramVisualizationUpdateCounter < 100) {
              g_CramVisualizationUpdateCounter = g_CramVisualizationUpdateCounter + 1;
            }
            else {
              in_stack_ffffff5c = 0x4473fd;
              wincore_winrun_cpp_processWindowMessages_FUN_005f35e0();
              pSVar9 = (SCramWorkingEntry *)0x447402;
              iVar17 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
              fVar7 = (float)(iVar17 - g_CramStartTime) * (float)8.4771050347222196e-07;
              g_CramStartTime = iVar17;
              if (0.0 < fVar7) {
                g_CramIterationCount = (int)((float)g_CramIterationCount + fVar7);
              }
              while( true ) {
                num = 0x447439;
                iVar17 = wincore_winrun_cpp_wasKeyPressed_FUN_005f2f00();
                if (iVar17 == 0) break;
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
                  puVar26 = (byte *)0x0;
                  pSVar9 = (SCramWorkingEntry *)0x4474f8;
                  shape_cramtex_cpp_visualizeTextureAtlas_FUN_00447f20(0,0,in_stack_ffffff70);
                }
                else {
                  puVar26 = (byte *)0x0;
                  pSVar9 = (SCramWorkingEntry *)0x447587;
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
      piVar13 = (int *)pSVar9->width;
      current_texture_entry->assigned_map_number = *piVar13;
      current_texture_entry->placement_flags = piVar13[5];
      current_texture_entry->placement_bottom = piVar13[1];
      current_texture_entry->working_right = piVar13[2];
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
      iVar20 = 0;
      current_texture_entry->working_width =
           current_texture_entry->working_right + current_texture_entry->effective_height;
      iVar17 = 0;
      if (0 < iVar25) {
        pSVar9 = g_CramSortedTextureEntries;
        do {
          if (iVar17 < pSVar9->working_top) {
            iVar17 = pSVar9->working_top;
          }
          if (iVar17 < pSVar9->working_width) {
            iVar17 = pSVar9->working_width;
          }
          iVar20 = iVar20 + 1;
          pSVar9 = pSVar9 + 1;
        } while (iVar20 < g_CramPlacedTextureCount);
      }
      pSVar24 = (SCramWorkingEntry *)0x30d;
      reference_entry = "..\\shape\\cramtex.cpp";
      bounds_entry = "at";
      pSVar9 = (SCramWorkingEntry *)0x0;
      display_mode = "..\\shape\\cramlog.txt";
      pFVar10 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                          ("..\\shape\\cramlog.txt",(char *)0x0,"at",
                           "..\\shape\\cramtex.cpp",0x30d);
      if (pFVar10 != (FILE *)0x0) {
        crt_stdio_c_fprintf_FUN_005fe6d0(pFVar10,"New best solution found!  thisSquareSize = %d\n",iVar17);
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar10,"..\\shape\\cramtex.cpp",0x310);
      }
      if (iVar17 < g_CramBestSolutionMetric1) {
        iVar25 = 0;
        g_CramCurrentAcceptableSize = iVar17;
        if (0 < g_CramPlacedTextureCount) {
          pSVar18 = g_CramSortedTextureEntries;
          do {
            pSVar18->working_map_id = pSVar18->assigned_map_number;
            pSVar18->rotation_applied = pSVar18->placement_flags;
            pSVar18->final_left = pSVar18->placement_bottom;
            pSVar18->final_top = pSVar18->working_right;
            pSVar18->final_right = pSVar18->working_top;
            iVar17 = g_CramPlacedTextureCount;
            iVar25 = iVar25 + 1;
            pSVar18->final_bottom = pSVar18->working_width;
            pSVar18 = pSVar18 + 1;
          } while (iVar25 < iVar17);
        }
        if (g_CramFillGaps != 0) {
          do {
            bVar21 = false;
            iVar25 = 0;
            if (0 < (int)g_CramTextureCount) {
              local_60 = g_CramSortedTextureEntries;
              do {
                while( true ) {
                  iVar17 = 0;
                  if ((local_60->final_bottom < g_CramCurrentAcceptableSize) &&
                     (iVar20 = shape_cramtex_cpp_findLowestOverlappingY_FUN_00447930(pSVar9),
                     g_CramCurrentAcceptableSize <= iVar20)) {
                    iVar17 = iVar20 - local_60->final_bottom;
                    local_60->final_bottom = local_60->final_bottom + iVar17;
                    local_60->final_top = local_60->final_top + iVar17;
                  }
                  if ((local_60->final_right < g_CramCurrentAcceptableSize) &&
                     (iVar20 = shape_cramtex_cpp_findLeftmostOverlappingX_FUN_00447a10(pSVar9),
                     g_CramCurrentAcceptableSize <= iVar20)) {
                    iVar17 = iVar20 - local_60->final_right;
                    local_60->final_left = local_60->final_left + iVar17;
                    local_60->final_right = local_60->final_right + iVar17;
                  }
                  if (iVar17 < 1) break;
                  bVar21 = true;
                }
                local_60 = local_60 + 1;
                iVar25 = iVar25 + 1;
              } while (iVar25 < (int)g_CramTextureCount);
            }
          } while (bVar21);
          iVar25 = 0;
          do {
            iVar17 = 0;
            bVar21 = false;
            if (0 < (int)g_CramTextureCount) {
              pSVar18 = g_CramSortedTextureEntries;
              do {
                iVar20 = shape_cramtex_cpp_findRightmostOverlappingX_FUN_004479a0(pSVar9);
                iVar20 = iVar20 - pSVar18->final_left;
                iVar11 = shape_cramtex_cpp_findLeftmostOverlappingX_FUN_00447a10
                                   ((SCramWorkingEntry *)bounds_entry);
                iVar11 = (int)(puVar26 + (iVar11 - pSVar18->final_right)) / 2;
                if (iVar11 != 0) {
                  pSVar18->final_left = pSVar18->final_left + iVar11;
                  pSVar18->final_right = pSVar18->final_right + iVar11;
                }
                display_mode = (char *)0x446780;
                shape_cramtex_cpp_findHighestOverlappingY_FUN_004478c0
                          ((SCramWorkingEntry *)reference_entry);
                pSVar9 = (SCramWorkingEntry *)0x446792;
                bounds_entry = (char *)pSVar18;
                iVar11 = shape_cramtex_cpp_findLowestOverlappingY_FUN_00447930(pSVar24);
                iVar20 = (iVar20 + (iVar11 - pSVar18->final_bottom)) / 2;
                if (iVar20 != 0) {
                  bVar21 = true;
                  pSVar18->final_top = pSVar18->final_top + iVar20;
                  pSVar18->final_bottom = pSVar18->final_bottom + iVar20;
                }
                iVar17 = iVar17 + 1;
                pSVar18 = pSVar18 + 1;
              } while (iVar17 < (int)g_CramTextureCount);
            }
          } while ((bVar21) && (iVar25 = iVar25 + 1, iVar25 < 10));
          local_40 = (SCramRectangle *)0x0;
          do {
            if (((uint)local_40 & 1) == 0) {
              uVar12 = 0;
              puVar26 = &DAT_00000001;
              uVar23 = g_CramTextureCount;
            }
            else {
              puVar26 = (byte *)0xffffffff;
              uVar12 = g_CramTextureCount - 1;
              uVar23 = 0xffffffff;
            }
            for (; uVar12 != uVar23; uVar12 = uVar12 + (int)puVar26) {
              pSVar18 = g_CramSortedTextureEntries + uVar12;
              iVar25 = shape_cramtex_cpp_findRightmostOverlappingX_FUN_004479a0(pSVar9);
              g_CramSortedTextureEntries[uVar12].final_left =
                   (g_CramSortedTextureEntries[uVar12].final_left + iVar25) / 2;
              iVar25 = shape_cramtex_cpp_findHighestOverlappingY_FUN_004478c0
                                 ((SCramWorkingEntry *)bounds_entry);
              g_CramSortedTextureEntries[uVar12].final_top =
                   (g_CramSortedTextureEntries[uVar12].final_top + iVar25) / 2;
              display_mode = (char *)0x446850;
              iVar25 = shape_cramtex_cpp_findLeftmostOverlappingX_FUN_00447a10
                                 ((SCramWorkingEntry *)reference_entry);
              g_CramSortedTextureEntries[uVar12].final_right =
                   (iVar25 + g_CramSortedTextureEntries[uVar12].final_right + 1) / 2;
              pSVar9 = (SCramWorkingEntry *)0x44686b;
              iVar25 = shape_cramtex_cpp_findLowestOverlappingY_FUN_00447930(pSVar24);
              g_CramSortedTextureEntries[uVar12].final_bottom =
                   (iVar25 + g_CramSortedTextureEntries[uVar12].final_bottom + 1) / 2;
              bounds_entry = (char *)pSVar18;
            }
            local_40 = (SCramRectangle *)((int)local_40 + 1);
          } while ((int)local_40 < 10);
          iVar25 = 0;
          if (0 < (int)g_CramTextureCount) {
            pSVar24 = g_CramSortedTextureEntries;
            do {
              do {
                iVar17 = shape_cramtex_cpp_findHighestOverlappingY_FUN_004478c0(pSVar9);
                iVar17 = pSVar24->final_top - iVar17;
                pSVar24->final_bottom = pSVar24->final_bottom - iVar17;
                pSVar24->final_top = pSVar24->final_top - iVar17;
                display_mode = (char *)pSVar24;
                iVar17 = shape_cramtex_cpp_findRightmostOverlappingX_FUN_004479a0
                                   ((SCramWorkingEntry *)bounds_entry);
                iVar17 = pSVar24->final_left - iVar17;
                pSVar24->final_right = pSVar24->final_right - iVar17;
                pSVar24->final_left = pSVar24->final_left - iVar17;
              } while (0 < iVar17);
              iVar25 = iVar25 + 1;
              pSVar24 = pSVar24 + 1;
            } while (iVar25 < (int)g_CramTextureCount);
          }
          iVar25 = 0;
          if (0 < (int)g_CramTextureCount) {
            pSVar24 = g_CramSortedTextureEntries;
            do {
              iVar17 = shape_cramtex_cpp_findLeftmostOverlappingX_FUN_00447a10(pSVar9);
              iVar25 = iVar25 + 1;
              pSVar24->final_right = iVar17;
              display_mode = (char *)pSVar24;
              iVar17 = shape_cramtex_cpp_findLowestOverlappingY_FUN_00447930
                                 ((SCramWorkingEntry *)bounds_entry);
              uVar12 = g_CramTextureCount;
              pSVar24->final_bottom = iVar17;
              pSVar24 = pSVar24 + 1;
            } while (iVar25 < (int)uVar12);
          }
        }
        shape_cramtex_cpp_visualizeTextureAtlas_FUN_00447f20(0,0,(int)display_mode);
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
          g_CramAlgorithmState = puVar26;
          g_CramPlacedTextureCount = g_CramPlacedTextureCount + -1;
          return 999999;
        }
        iVar25 = g_CramAcceptableSize + g_CramCurrentAcceptableSize * 3;
        iVar17 = iVar25 >> 0x1f;
        g_CramBestSolutionMetric1 = (int)((iVar25 + iVar17 * -4) - (uint)(iVar17 << 1 < 0)) >> 2;
        g_CramBestSolutionMetric2 = g_CramBestSolutionMetric1 - g_CramOptimalPlacement;
        iVar25 = 0;
        if (0 < g_CramRectangleCount) {
          pSVar19 = g_CramRectangles;
          do {
            if (pSVar19->orientation == 0) {
              if (pSVar19->top + g_CramMinPlacementX < g_CramBestSolutionMetric1) {
                iVar17 = pSVar19->right + g_CramMinPlacementY;
                goto joined_r0x00446b0b;
              }
LAB_00446a27:
              pSVar19->reserved_0x18 = g_CramInvalidMarker;
            }
            else {
              if (g_CramBestSolutionMetric1 <= pSVar19->top + g_CramMinPlacementY)
              goto LAB_00446a27;
              iVar17 = pSVar19->right + g_CramMinPlacementX;
joined_r0x00446b0b:
              if (g_CramBestSolutionMetric1 <= iVar17) goto LAB_00446a27;
            }
            iVar25 = iVar25 + 1;
            pSVar19 = pSVar19 + 1;
          } while (iVar25 < g_CramRectangleCount);
        }
        iVar25 = 1;
        if (1 < g_CramPlacedTextureCount) {
          iVar17 = 0x4c;
          do {
            if ((g_CramBestSolutionMetric1 <=
                 *(int *)((int)&g_CramSortedTextureEntries[0].working_top + iVar17)) ||
               (g_CramBestSolutionMetric1 <=
                *(int *)((int)&g_CramSortedTextureEntries[0].working_width + iVar17))) {
              g_CramAlgorithmState = puVar26;
              g_CramPlacedTextureCount = g_CramPlacedTextureCount + -1;
              return g_CramPlacedTextureCount - iVar25;
            }
            iVar17 = iVar17 + 0x4c;
            iVar25 = iVar25 + 1;
          } while (iVar17 < g_CramPlacedTextureCount * 0x4c);
        }
      }
      else {
        pFVar10 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                            ("..\\shape\\cramlog.txt",(char *)0x0,"at",
                             "..\\shape\\cramtex.cpp",0x318);
        if (pFVar10 != (FILE *)0x0) {
          crt_stdio_c_fprintf_FUN_005fe6d0(pFVar10,"\n\nCRAMTEX BUG!\n");
          crt_stdio_c_fprintf_FUN_005fe6d0
                    (pFVar10,"bestSquareSize = %d, thisSquareSize = %d, mustBeatSquareSize = %d\n",g_CramCurrentAcceptableSize,iVar17,
                     g_CramBestSolutionMetric1);
          crt_stdio_c_fprintf_FUN_005fe6d0(pFVar10,"acceptableSize = %d\n",g_CramAcceptableSize)
          ;
          crt_stdio_c_fprintf_FUN_005fe6d0(pFVar10,"targetPadSize = %d\n",g_CramAtlasHeight);
          crt_stdio_c_fprintf_FUN_005fe6d0(pFVar10,"pad = %d\n",g_CramPaddingCalculation);
          crt_stdio_c_fprintf_FUN_005fe6d0(pFVar10,"Best:\n");
          if (0 < (int)g_CramTextureCount) {
            pSVar9 = g_CramSortedTextureEntries;
            iVar25 = 0;
            do {
              piVar13 = &pSVar9->rotation_applied;
              piVar1 = &pSVar9->final_bottom;
              piVar2 = &pSVar9->final_right;
              piVar3 = &pSVar9->final_top;
              piVar4 = &pSVar9->final_left;
              piVar5 = &pSVar9->working_map_id;
              piVar6 = &pSVar9->height;
              piVar8 = &pSVar9->width;
              pSVar9 = pSVar9 + 1;
              iVar17 = iVar25 + 1;
              crt_stdio_c_fprintf_FUN_005fe6d0
                        (pFVar10,"%3d: %5dx%-5d  Map %d (%5d,%-5d)-(%5d,%-5d)    Rotated: %d\n",
                         "%3d: %5dx%-5d  Map %d (%5d,%-5d)-(%5d,%-5d)    Rotated: %d\n",iVar25,*piVar8,*piVar6,*piVar5,*piVar4,
                         *piVar3,*piVar2,*piVar1,*piVar13);
              iVar25 = iVar17;
            } while (iVar17 < (int)g_CramTextureCount);
          }
          crt_stdio_c_fprintf_FUN_005fe6d0(pFVar10,"Current:\n");
          if (0 < (int)g_CramTextureCount) {
            pSVar9 = g_CramSortedTextureEntries;
            iVar25 = 0;
            do {
              piVar13 = &pSVar9->rotation_applied;
              piVar1 = &pSVar9->working_width;
              piVar2 = &pSVar9->working_top;
              piVar3 = &pSVar9->working_right;
              piVar4 = &pSVar9->placement_bottom;
              piVar5 = &pSVar9->assigned_map_number;
              piVar6 = &pSVar9->height;
              piVar8 = &pSVar9->width;
              pSVar9 = pSVar9 + 1;
              iVar17 = iVar25 + 1;
              crt_stdio_c_fprintf_FUN_005fe6d0
                        (pFVar10,"%3d: %5dx%-5d  Map %d (%5d,%-5d)-(%5d,%-5d)    Rotated: %d\n",
                         "%3d: %5dx%-5d  Map %d (%5d,%-5d)-(%5d,%-5d)    Rotated: %d\n",iVar25,*piVar8,*piVar6,*piVar5,*piVar4,
                         *piVar3,*piVar2,*piVar1,*piVar13);
              iVar25 = iVar17;
            } while (iVar17 < (int)g_CramTextureCount);
          }
          shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar10,"..\\shape\\cramtex.cpp",0x32f);
        }
      }
    }
    g_CramAlgorithmState = puVar26;
    g_CramPlacedTextureCount = g_CramPlacedTextureCount + -1;
  }
  return 0;
}
