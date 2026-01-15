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
  int *piVar7;
  void *pvVar8;
  uint uVar9;
  SCramWorkingEntry *pSVar10;
  FILE *pFVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int *piVar15;
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
  int in_stack_00000004;
  float in_stack_ffffff54;
  SIZE_T local_a4;
  int local_a0;
  int local_98;
  int local_94;
  int local_88;
  int local_84;
  int local_7c;
  int local_74;
  int local_6c;
  int local_68;
  int local_60;
  int local_58;
  SCramWorkingEntry *local_54;
  SCramRectangle *local_50;
  SCramWorkingEntry *local_4c;
  SCramRectangle *local_48;
  SCramRectangle *local_44;
  SCramWorkingEntry *local_40;
  SCramRectangle *local_3c;
  SCramWorkingEntry *local_38;
  uint local_34;
  int local_2c;
  int local_20;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0xdc);
  pSVar19 = g_CramAlgorithmState;
  local_a4 = 0;
  local_a0 = 0;
  if (0 < g_CramRectangleCount) {
    pSVar20 = g_CramRectangles;
    puVar24 = g_CramAlgorithmState;
    do {
      pSVar20->active_flag = 0;
      iVar21 = g_CramBestSolutionMetric1;
      if ((pSVar20->reserved_0x18 == 0) &&
         ((*(int *)(in_stack_00000004 + 0xc) != *(int *)(in_stack_00000004 + 8) ||
          (pSVar20->orientation == 0)))) {
        if (pSVar20->orientation == 0) {
          iVar18 = pSVar20->top + *(int *)(in_stack_00000004 + 8);
          pSVar20->reserved_0x1c = iVar18;
          if (iVar18 < iVar21) {
            iVar21 = pSVar20->right + *(int *)(in_stack_00000004 + 0xc);
            goto LAB_00446547;
          }
        }
        else {
          iVar18 = pSVar20->top + *(int *)(in_stack_00000004 + 0xc);
          pSVar20->reserved_0x1c = iVar18;
          if (iVar18 < iVar21) {
            iVar21 = pSVar20->right + *(int *)(in_stack_00000004 + 8);
LAB_00446547:
            iVar18 = g_CramBestSolutionMetric1;
            pSVar20->reserved_0x20 = iVar21;
            if (iVar21 < iVar18) {
              iVar21 = g_CramPlacedTextureCount + -1;
              if (-1 < iVar21) {
                pSVar10 = g_CramSortedTextureEntries + iVar21;
                do {
                  if ((((pSVar20->left == pSVar10->assigned_map_number) &&
                       (pSVar20->top < pSVar10->working_top)) &&
                      (pSVar20->right < pSVar10->working_width)) &&
                     ((pSVar10->placement_bottom < pSVar20->reserved_0x1c &&
                      (pSVar10->working_right < pSVar20->reserved_0x20)))) goto LAB_004461b1;
                  iVar21 = iVar21 + -1;
                  pSVar10 = pSVar10 + -1;
                } while (-1 < iVar21);
              }
              local_a4 = local_a4 + 1;
              *puVar24 = pSVar20;
              puVar24 = puVar24 + 1;
            }
          }
        }
      }
LAB_004461b1:
      local_a0 = local_a0 + 1;
      pSVar20 = pSVar20 + 1;
    } while (local_a0 < g_CramRectangleCount);
  }
  pvVar8 = g_CramAlgorithmState;
  if (0 < (int)local_a4) {
    g_CramPlacedTextureCount = g_CramPlacedTextureCount + 1;
    g_CramAlgorithmState = (void *)((int)g_CramAlgorithmState + local_a4 * 4);
    if (1 < (int)local_a4) {
      iVar21 = 0;
      piVar15 = &pSVar19->width;
      if (0 < (int)local_a4) {
        do {
          iVar18 = *piVar15;
          *(int *)(iVar18 + 0x24) = *(int *)(iVar18 + 4) + *(int *)(iVar18 + 8);
          iVar22 = *(int *)(iVar18 + 0x1c);
          if (*(int *)(iVar18 + 0x1c) <= *(int *)(iVar18 + 0x20)) {
            iVar22 = *(int *)(iVar18 + 0x20);
          }
          iVar21 = iVar21 + 1;
          *(int *)(iVar18 + 0x24) =
               *(int *)(iVar18 + 0x24) +
               *(int *)(iVar18 + 0x20) + iVar22 * 5 + *(int *)(iVar18 + 0x1c);
          piVar15 = piVar15 + 1;
        } while (iVar21 < (int)local_a4);
      }
      crt_stdlib_c_qsort_FUN_005fdf38
                (pSVar19,local_a4,4,shape_cramtex_cpp_qsortRectanglesByActiveFlag_FUN_00446140);
    }
    iVar21 = 0;
    pSVar10 = pSVar19;
    if (0 < (int)local_a4) {
      do {
        iVar18 = iVar21 + 5;
        iVar21 = iVar21 + 1;
        *(int *)(pSVar10->width + 0x24) = iVar18;
        pSVar10 = (SCramWorkingEntry *)&pSVar10->height;
      } while (iVar21 < (int)local_a4);
    }
    if (g_CramPlacedTextureCount < (int)g_CramTextureCount) {
      local_84 = 0;
      local_38 = pSVar19;
      if (0 < (int)local_a4) {
        do {
          puVar24 = (uint *)local_38->width;
          *(uint *)(in_stack_00000004 + 0x10) = *puVar24;
          *(uint *)(in_stack_00000004 + 0x40) = puVar24[5];
          *(uint *)(in_stack_00000004 + 0x1c) = puVar24[1];
          *(uint *)(in_stack_00000004 + 0x20) = puVar24[2];
          if (*(int *)(in_stack_00000004 + 0x40) == 0) {
            *(uint *)(in_stack_00000004 + 0x14) = *(uint *)(in_stack_00000004 + 8);
            uVar9 = *(uint *)(in_stack_00000004 + 0xc);
          }
          else {
            *(uint *)(in_stack_00000004 + 0x14) = *(uint *)(in_stack_00000004 + 0xc);
            uVar9 = *(uint *)(in_stack_00000004 + 8);
          }
          *(uint *)(in_stack_00000004 + 0x18) = uVar9;
          *(int *)(in_stack_00000004 + 0x24) =
               *(int *)(in_stack_00000004 + 0x1c) + *(int *)(in_stack_00000004 + 0x14);
          *(int *)(in_stack_00000004 + 0x28) =
               *(int *)(in_stack_00000004 + 0x20) + *(int *)(in_stack_00000004 + 0x18);
          if ((*(int *)(in_stack_00000004 + 0x24) < g_CramBestSolutionMetric1) &&
             (*(int *)(in_stack_00000004 + 0x28) < g_CramBestSolutionMetric1)) {
            iVar21 = 0;
            if (0 < g_CramRectangleCount) {
              pSVar20 = g_CramRectangles;
              do {
                if ((((pSVar20->reserved_0x18 == 0) &&
                     (pSVar20->left == *(int *)(in_stack_00000004 + 0x10))) &&
                    (*(int *)(in_stack_00000004 + 0x1c) < pSVar20->bottom)) &&
                   (((*(int *)(in_stack_00000004 + 0x20) < pSVar20->max_dimension &&
                     (pSVar20->top < *(int *)(in_stack_00000004 + 0x24))) &&
                    (pSVar20->right < *(int *)(in_stack_00000004 + 0x28))))) {
                  pSVar20->reserved_0x18 = in_stack_00000004;
                }
                iVar21 = iVar21 + 1;
                pSVar20 = pSVar20 + 1;
              } while (iVar21 < g_CramRectangleCount);
            }
            iVar21 = g_CramRectangleCount;
            if (*(int *)(in_stack_00000004 + 0x28) <= g_CramBestSolutionMetric2) {
              iVar18 = g_CramPlacedTextureCount + -2;
              local_7c = 0;
              if (-1 < iVar18) {
                pSVar10 = g_CramSortedTextureEntries + iVar18;
                do {
                  if (((pSVar10->assigned_map_number == *(int *)(in_stack_00000004 + 0x10)) &&
                      (pSVar10->working_top <= *(int *)(in_stack_00000004 + 0x24))) &&
                     ((*(int *)(in_stack_00000004 + 0x28) < pSVar10->working_width &&
                      ((pSVar10->working_right <
                        *(int *)(in_stack_00000004 + 0x28) + g_CramOptimalPlacement + -1 &&
                       (local_7c < pSVar10->working_top)))))) {
                    local_7c = pSVar10->working_top;
                  }
                  iVar18 = iVar18 + -1;
                  pSVar10 = pSVar10 + -1;
                } while (-1 < iVar18);
              }
              if (local_7c < *(int *)(in_stack_00000004 + 0x24)) {
                local_2c = g_CramPlacedTextureCount + -2;
                if (-1 < local_2c) {
                  local_4c = g_CramSortedTextureEntries + local_2c;
                  do {
                    iVar18 = *(int *)(in_stack_00000004 + 0x10);
                    if ((((iVar18 == local_4c->assigned_map_number) &&
                         (local_4c->working_top <= *(int *)(in_stack_00000004 + 0x24))) &&
                        (iVar22 = *(int *)(in_stack_00000004 + 0x28),
                        iVar22 < local_4c->working_width)) && (local_7c < local_4c->working_top)) {
                      iVar12 = local_4c->working_top;
                      if (0 < g_CramRectangleCount) {
                        iVar14 = 0;
                        do {
                          if (((iVar18 == *(int *)((int)&g_CramRectangles[0].left + iVar14)) &&
                              (iVar12 == *(int *)((int)&g_CramRectangles[0].top + iVar14))) &&
                             (iVar22 == *(int *)((int)&g_CramRectangles[0].right + iVar14)))
                          goto LAB_00446d87;
                          iVar14 = iVar14 + 0x28;
                        } while (iVar14 < g_CramRectangleCount * 0x28);
                      }
                      local_74 = 0;
                      local_50 = g_CramRectangles + g_CramRectangleCount;
                      do {
                        iVar14 = g_CramMinPlacementX;
                        iVar17 = g_CramMinPlacementY;
                        if (local_74 != 0) {
                          iVar14 = g_CramMinPlacementY;
                          iVar17 = g_CramMinPlacementX;
                        }
                        iVar16 = g_CramPlacedTextureCount + -1;
                        if (-1 < iVar16) {
                          pSVar10 = g_CramSortedTextureEntries + iVar16;
                          do {
                            if (((pSVar10->assigned_map_number == iVar18) &&
                                (iVar12 < pSVar10->working_top)) &&
                               ((iVar22 < pSVar10->working_width &&
                                ((pSVar10->placement_bottom < iVar14 + iVar12 &&
                                 (pSVar10->working_right < iVar17 + iVar22)))))) break;
                            iVar16 = iVar16 + -1;
                            pSVar10 = pSVar10 + -1;
                          } while (-1 < iVar16);
                        }
                        if (iVar16 < 0) {
                          local_50->reserved_0x18 = 0;
                          local_50->active_flag = 1;
                          local_50->left = iVar18;
                          local_50->top = iVar12;
                          local_50->right = iVar22;
                          local_50->bottom = iVar14 + iVar12;
                          local_50->orientation = local_74;
                          local_50->max_dimension = iVar17 + iVar22;
                          g_CramRectangleCount = g_CramRectangleCount + 1;
                          local_50 = local_50 + 1;
                        }
                        local_74 = local_74 + 1;
                      } while (local_74 < 2);
                    }
LAB_00446d87:
                    local_4c = local_4c + -1;
                    local_2c = local_2c + -1;
                  } while (-1 < local_2c);
                }
                iVar18 = *(int *)(in_stack_00000004 + 0x10);
                iVar22 = *(int *)(in_stack_00000004 + 0x28);
                if (0 < g_CramRectangleCount) {
                  iVar12 = 0;
                  do {
                    if (((iVar18 == *(int *)((int)&g_CramRectangles[0].left + iVar12)) &&
                        (local_7c == *(int *)((int)&g_CramRectangles[0].top + iVar12))) &&
                       (iVar22 == *(int *)((int)&g_CramRectangles[0].right + iVar12)))
                    goto LAB_00446df8;
                    iVar12 = iVar12 + 0x28;
                  } while (iVar12 < g_CramRectangleCount * 0x28);
                }
                local_48 = g_CramRectangles + g_CramRectangleCount;
                local_6c = 0;
                do {
                  iVar12 = g_CramMinPlacementY;
                  iVar14 = g_CramMinPlacementX;
                  if (local_6c != 0) {
                    iVar12 = g_CramMinPlacementX;
                    iVar14 = g_CramMinPlacementY;
                  }
                  iVar17 = g_CramPlacedTextureCount + -1;
                  if (-1 < iVar17) {
                    pSVar10 = g_CramSortedTextureEntries + iVar17;
                    do {
                      if (((pSVar10->assigned_map_number == iVar18) &&
                          (local_7c < pSVar10->working_top)) &&
                         ((iVar22 < pSVar10->working_width &&
                          ((pSVar10->placement_bottom < iVar14 + local_7c &&
                           (pSVar10->working_right < iVar12 + iVar22)))))) break;
                      iVar17 = iVar17 + -1;
                      pSVar10 = pSVar10 + -1;
                    } while (-1 < iVar17);
                  }
                  if (iVar17 < 0) {
                    local_48->reserved_0x18 = 0;
                    local_48->active_flag = 1;
                    local_48->left = iVar18;
                    local_48->top = local_7c;
                    local_48->right = iVar22;
                    local_48->max_dimension = iVar12 + iVar22;
                    local_48->orientation = local_6c;
                    local_48->bottom = iVar14 + local_7c;
                    g_CramRectangleCount = g_CramRectangleCount + 1;
                    local_48 = local_48 + 1;
                  }
                  local_6c = local_6c + 1;
                } while (local_6c < 2);
              }
            }
LAB_00446df8:
            if (*(int *)(in_stack_00000004 + 0x28) <= g_CramBestSolutionMetric2) {
              iVar18 = g_CramPlacedTextureCount + -2;
              local_68 = 0;
              if (-1 < iVar18) {
                pSVar10 = g_CramSortedTextureEntries + iVar18;
                do {
                  if ((((pSVar10->assigned_map_number == *(int *)(in_stack_00000004 + 0x10)) &&
                       (pSVar10->working_width <= *(int *)(in_stack_00000004 + 0x28))) &&
                      (*(int *)(in_stack_00000004 + 0x24) < pSVar10->working_top)) &&
                     ((pSVar10->placement_bottom <
                       *(int *)(in_stack_00000004 + 0x24) + g_CramOptimalPlacement + -1 &&
                      (local_68 < pSVar10->working_width)))) {
                    local_68 = pSVar10->working_width;
                  }
                  iVar18 = iVar18 + -1;
                  pSVar10 = pSVar10 + -1;
                } while (-1 < iVar18);
              }
              if (local_68 < *(int *)(in_stack_00000004 + 0x28)) {
                local_20 = g_CramPlacedTextureCount + -2;
                if (-1 < local_20) {
                  local_40 = g_CramSortedTextureEntries + local_20;
                  do {
                    iVar18 = *(int *)(in_stack_00000004 + 0x10);
                    if (((iVar18 == local_40->assigned_map_number) &&
                        (local_40->working_width <= *(int *)(in_stack_00000004 + 0x28))) &&
                       ((iVar22 = *(int *)(in_stack_00000004 + 0x24), iVar22 < local_40->working_top
                        && (local_68 < local_40->working_width)))) {
                      iVar12 = local_40->working_width;
                      if (0 < g_CramRectangleCount) {
                        iVar14 = 0;
                        do {
                          if (((iVar18 == *(int *)((int)&g_CramRectangles[0].left + iVar14)) &&
                              (iVar22 == *(int *)((int)&g_CramRectangles[0].top + iVar14))) &&
                             (iVar12 == *(int *)((int)&g_CramRectangles[0].right + iVar14)))
                          goto LAB_00446f25;
                          iVar14 = iVar14 + 0x28;
                        } while (iVar14 < g_CramRectangleCount * 0x28);
                      }
                      local_60 = 0;
                      local_44 = g_CramRectangles + g_CramRectangleCount;
                      do {
                        iVar14 = g_CramMinPlacementX;
                        iVar17 = g_CramMinPlacementY;
                        if (local_60 != 0) {
                          iVar14 = g_CramMinPlacementY;
                          iVar17 = g_CramMinPlacementX;
                        }
                        iVar16 = g_CramPlacedTextureCount + -1;
                        if (-1 < iVar16) {
                          pSVar10 = g_CramSortedTextureEntries + iVar16;
                          do {
                            if (((pSVar10->assigned_map_number == iVar18) &&
                                (iVar22 < pSVar10->working_top)) &&
                               ((iVar12 < pSVar10->working_width &&
                                ((pSVar10->placement_bottom < iVar14 + iVar22 &&
                                 (pSVar10->working_right < iVar17 + iVar12)))))) break;
                            iVar16 = iVar16 + -1;
                            pSVar10 = pSVar10 + -1;
                          } while (-1 < iVar16);
                        }
                        if (iVar16 < 0) {
                          local_44->reserved_0x18 = 0;
                          local_44->active_flag = 1;
                          local_44->left = iVar18;
                          local_44->top = iVar22;
                          local_44->right = iVar12;
                          local_44->bottom = iVar14 + iVar22;
                          local_44->orientation = local_60;
                          local_44->max_dimension = iVar17 + iVar12;
                          g_CramRectangleCount = g_CramRectangleCount + 1;
                          local_44 = local_44 + 1;
                        }
                        local_60 = local_60 + 1;
                      } while (local_60 < 2);
                    }
LAB_00446f25:
                    local_40 = local_40 + -1;
                    local_20 = local_20 + -1;
                  } while (-1 < local_20);
                }
                iVar18 = *(int *)(in_stack_00000004 + 0x10);
                iVar22 = *(int *)(in_stack_00000004 + 0x24);
                if (0 < g_CramRectangleCount) {
                  iVar12 = 0;
                  do {
                    if (((iVar18 == *(int *)((int)&g_CramRectangles[0].left + iVar12)) &&
                        (iVar22 == *(int *)((int)&g_CramRectangles[0].top + iVar12))) &&
                       (local_68 == *(int *)((int)&g_CramRectangles[0].right + iVar12)))
                    goto LAB_00446f96;
                    iVar12 = iVar12 + 0x28;
                  } while (iVar12 < g_CramRectangleCount * 0x28);
                }
                local_3c = g_CramRectangles + g_CramRectangleCount;
                local_58 = 0;
                do {
                  iVar12 = g_CramMinPlacementY;
                  iVar14 = g_CramMinPlacementX;
                  if (local_58 != 0) {
                    iVar12 = g_CramMinPlacementX;
                    iVar14 = g_CramMinPlacementY;
                  }
                  iVar17 = g_CramPlacedTextureCount + -1;
                  if (-1 < iVar17) {
                    pSVar10 = g_CramSortedTextureEntries + iVar17;
                    do {
                      if (((pSVar10->assigned_map_number == iVar18) &&
                          (iVar22 < pSVar10->working_top)) &&
                         ((local_68 < pSVar10->working_width &&
                          ((pSVar10->placement_bottom < iVar14 + iVar22 &&
                           (pSVar10->working_right < iVar12 + local_68)))))) break;
                      iVar17 = iVar17 + -1;
                      pSVar10 = pSVar10 + -1;
                    } while (-1 < iVar17);
                  }
                  if (iVar17 < 0) {
                    local_3c->reserved_0x18 = 0;
                    local_3c->active_flag = 1;
                    local_3c->left = iVar18;
                    local_3c->top = iVar22;
                    local_3c->right = local_68;
                    local_3c->max_dimension = iVar12 + local_68;
                    local_3c->orientation = local_58;
                    local_3c->bottom = iVar14 + iVar22;
                    g_CramRectangleCount = g_CramRectangleCount + 1;
                    local_3c = local_3c + 1;
                  }
                  local_58 = local_58 + 1;
                } while (local_58 < 2);
              }
            }
LAB_00446f96:
            if (g_CramVisualizationMode != 0) {
              shape_cramtex_cpp_visualizeTextureAtlas_FUN_00447f20(0,0,(int)in_stack_ffffff54);
            }
            iVar18 = shape_cramtex_cpp_runInteractiveAtlasGeneration_FUN_00446160(pSVar19);
            if (0 < iVar18) {
              iVar18 = iVar18 + -1;
            }
            g_CramRectangleCount = iVar21;
            if (0 < iVar21) {
              iVar22 = 0;
              do {
                if (in_stack_00000004 == *(int *)((int)&g_CramRectangles[0].reserved_0x18 + iVar22))
                {
                  *(uint *)((int)&g_CramRectangles[0].reserved_0x18 + iVar22) = 0;
                }
                iVar22 = iVar22 + 0x28;
              } while (iVar22 < iVar21 * 0x28);
            }
            if (g_CramVisualizationUpdateCounter < 100) {
              g_CramVisualizationUpdateCounter = g_CramVisualizationUpdateCounter + 1;
            }
            else {
              wincore_winrun_cpp_processWindowMessages_FUN_005f35e0();
              iVar21 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
              in_stack_ffffff54 =
                   (float)(iVar21 - g_CramStartTime) * (float)8.4771050347222196e-07;
              g_CramStartTime = iVar21;
              if (0.0 < in_stack_ffffff54) {
                g_CramIterationCount = (int)((float)g_CramIterationCount + in_stack_ffffff54);
              }
              while (iVar21 = wincore_winrun_cpp_wasKeyPressed_FUN_005f2f00(), iVar21 != 0) {
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
                  shape_cramtex_cpp_visualizeTextureAtlas_FUN_00447f20(0,0,(int)in_stack_ffffff54);
                }
                else {
                  shape_cramtex_cpp_visualizeTextureAtlas_FUN_00447f20(0,0,(int)in_stack_ffffff54);
                }
              }
              if ((0 < g_CramMaxIterationsLimit) &&
                 ((float)g_CramMaxIterationsLimit < (float)g_CramIterationCount)) {
LAB_00447500:
                engine_2d_c_clearInputAndWait_FUN_00403260();
                g_CramAlgorithmState = pvVar8;
                g_CramPlacedTextureCount = g_CramPlacedTextureCount + -1;
                return 999999;
              }
              g_CramVisualizationUpdateCounter = 0;
            }
            if (iVar18 != 0) {
              g_CramAlgorithmState = pvVar8;
              g_CramPlacedTextureCount = g_CramPlacedTextureCount + -1;
              return iVar18;
            }
          }
          local_84 = local_84 + 1;
          local_38 = (SCramWorkingEntry *)&local_38->height;
        } while (local_84 < (int)local_a4);
      }
    }
    else {
      puVar24 = (uint *)pSVar19->width;
      *(uint *)(in_stack_00000004 + 0x10) = *puVar24;
      *(uint *)(in_stack_00000004 + 0x40) = puVar24[5];
      *(uint *)(in_stack_00000004 + 0x1c) = puVar24[1];
      *(uint *)(in_stack_00000004 + 0x20) = puVar24[2];
      if (*(int *)(in_stack_00000004 + 0x40) == 0) {
        *(uint *)(in_stack_00000004 + 0x14) = *(uint *)(in_stack_00000004 + 8);
        uVar9 = *(uint *)(in_stack_00000004 + 0xc);
      }
      else {
        *(uint *)(in_stack_00000004 + 0x14) = *(uint *)(in_stack_00000004 + 0xc);
        uVar9 = *(uint *)(in_stack_00000004 + 8);
      }
      *(uint *)(in_stack_00000004 + 0x18) = uVar9;
      *(int *)(in_stack_00000004 + 0x24) =
           *(int *)(in_stack_00000004 + 0x1c) + *(int *)(in_stack_00000004 + 0x14);
      iVar21 = g_CramPlacedTextureCount;
      iVar22 = 0;
      *(int *)(in_stack_00000004 + 0x28) =
           *(int *)(in_stack_00000004 + 0x20) + *(int *)(in_stack_00000004 + 0x18);
      iVar18 = 0;
      if (0 < iVar21) {
        pSVar10 = g_CramSortedTextureEntries;
        do {
          if (iVar18 < pSVar10->working_top) {
            iVar18 = pSVar10->working_top;
          }
          if (iVar18 < pSVar10->working_width) {
            iVar18 = pSVar10->working_width;
          }
          iVar22 = iVar22 + 1;
          pSVar10 = pSVar10 + 1;
        } while (iVar22 < g_CramPlacedTextureCount);
      }
      pFVar11 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                          ("..\\shape\\cramlog.txt",(char *)0x0,"at",
                           "..\\shape\\cramtex.cpp",0x30d);
      if (pFVar11 != (FILE *)0x0) {
        crt_stdio_c_fprintf_FUN_005fe6d0(pFVar11,"New best solution found!  thisSquareSize = %d\n",iVar18);
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar11,"..\\shape\\cramtex.cpp",0x310);
      }
      if (iVar18 < g_CramBestSolutionMetric1) {
        iVar21 = 0;
        g_CramCurrentAcceptableSize = iVar18;
        if (0 < g_CramPlacedTextureCount) {
          pSVar10 = g_CramSortedTextureEntries;
          do {
            pSVar10->working_map_id = pSVar10->assigned_map_number;
            pSVar10->rotation_applied = pSVar10->placement_flags;
            pSVar10->final_left = pSVar10->placement_bottom;
            pSVar10->final_top = pSVar10->working_right;
            pSVar10->final_right = pSVar10->working_top;
            iVar18 = g_CramPlacedTextureCount;
            iVar21 = iVar21 + 1;
            pSVar10->final_bottom = pSVar10->working_width;
            pSVar10 = pSVar10 + 1;
          } while (iVar21 < iVar18);
        }
        if (g_CramFillGaps != 0) {
          do {
            bVar23 = false;
            local_98 = 0;
            if (0 < (int)g_CramTextureCount) {
              local_54 = g_CramSortedTextureEntries;
              do {
                while( true ) {
                  iVar21 = 0;
                  if ((local_54->final_bottom < g_CramCurrentAcceptableSize) &&
                     (iVar18 = shape_cramtex_cpp_findLowestOverlappingY_FUN_00447930(pSVar19),
                     g_CramCurrentAcceptableSize <= iVar18)) {
                    iVar21 = iVar18 - local_54->final_bottom;
                    local_54->final_bottom = local_54->final_bottom + iVar21;
                    local_54->final_top = local_54->final_top + iVar21;
                  }
                  if ((local_54->final_right < g_CramCurrentAcceptableSize) &&
                     (iVar18 = shape_cramtex_cpp_findLeftmostOverlappingX_FUN_00447a10(pSVar19),
                     g_CramCurrentAcceptableSize <= iVar18)) {
                    iVar21 = iVar18 - local_54->final_right;
                    local_54->final_left = local_54->final_left + iVar21;
                    local_54->final_right = local_54->final_right + iVar21;
                  }
                  if (iVar21 < 1) break;
                  bVar23 = true;
                }
                local_54 = local_54 + 1;
                local_98 = local_98 + 1;
              } while (local_98 < (int)g_CramTextureCount);
            }
          } while (bVar23);
          local_94 = 0;
          do {
            iVar21 = 0;
            bVar23 = false;
            if (0 < (int)g_CramTextureCount) {
              pSVar10 = g_CramSortedTextureEntries;
              do {
                iVar22 = shape_cramtex_cpp_findRightmostOverlappingX_FUN_004479a0(pSVar19);
                iVar18 = pSVar10->final_left;
                iVar12 = shape_cramtex_cpp_findLeftmostOverlappingX_FUN_00447a10(pSVar19);
                iVar18 = ((iVar22 - iVar18) + (iVar12 - pSVar10->final_right)) / 2;
                if (iVar18 != 0) {
                  bVar23 = true;
                  pSVar10->final_left = pSVar10->final_left + iVar18;
                  pSVar10->final_right = pSVar10->final_right + iVar18;
                }
                iVar22 = shape_cramtex_cpp_findHighestOverlappingY_FUN_004478c0(pSVar19);
                iVar18 = pSVar10->final_top;
                iVar12 = shape_cramtex_cpp_findLowestOverlappingY_FUN_00447930(pSVar19);
                iVar18 = ((iVar22 - iVar18) + (iVar12 - pSVar10->final_bottom)) / 2;
                if (iVar18 != 0) {
                  bVar23 = true;
                  pSVar10->final_top = pSVar10->final_top + iVar18;
                  pSVar10->final_bottom = pSVar10->final_bottom + iVar18;
                }
                iVar21 = iVar21 + 1;
                pSVar10 = pSVar10 + 1;
              } while (iVar21 < (int)g_CramTextureCount);
            }
          } while ((bVar23) && (local_94 = local_94 + 1, local_94 < 10));
          local_34 = 0;
          do {
            if ((local_34 & 1) == 0) {
              uVar13 = 0;
              local_88 = 1;
              uVar25 = g_CramTextureCount;
            }
            else {
              local_88 = -1;
              uVar13 = g_CramTextureCount - 1;
              uVar25 = 0xffffffff;
            }
            for (; uVar13 != uVar25; uVar13 = uVar13 + local_88) {
              iVar21 = shape_cramtex_cpp_findRightmostOverlappingX_FUN_004479a0(pSVar19);
              g_CramSortedTextureEntries[uVar13].final_left =
                   (g_CramSortedTextureEntries[uVar13].final_left + iVar21) / 2;
              iVar21 = shape_cramtex_cpp_findHighestOverlappingY_FUN_004478c0(pSVar19);
              g_CramSortedTextureEntries[uVar13].final_top =
                   (g_CramSortedTextureEntries[uVar13].final_top + iVar21) / 2;
              iVar21 = shape_cramtex_cpp_findLeftmostOverlappingX_FUN_00447a10(pSVar19);
              g_CramSortedTextureEntries[uVar13].final_right =
                   (iVar21 + g_CramSortedTextureEntries[uVar13].final_right + 1) / 2;
              iVar21 = shape_cramtex_cpp_findLowestOverlappingY_FUN_00447930(pSVar19);
              g_CramSortedTextureEntries[uVar13].final_bottom =
                   (iVar21 + g_CramSortedTextureEntries[uVar13].final_bottom + 1) / 2;
            }
            local_34 = local_34 + 1;
          } while ((int)local_34 < 10);
          iVar21 = 0;
          if (0 < (int)g_CramTextureCount) {
            pSVar10 = g_CramSortedTextureEntries;
            do {
              do {
                iVar18 = shape_cramtex_cpp_findHighestOverlappingY_FUN_004478c0(pSVar19);
                iVar18 = pSVar10->final_top - iVar18;
                pSVar10->final_bottom = pSVar10->final_bottom - iVar18;
                pSVar10->final_top = pSVar10->final_top - iVar18;
                iVar18 = shape_cramtex_cpp_findRightmostOverlappingX_FUN_004479a0(pSVar19);
                iVar18 = pSVar10->final_left - iVar18;
                pSVar10->final_right = pSVar10->final_right - iVar18;
                pSVar10->final_left = pSVar10->final_left - iVar18;
              } while (0 < iVar18);
              iVar21 = iVar21 + 1;
              pSVar10 = pSVar10 + 1;
            } while (iVar21 < (int)g_CramTextureCount);
          }
          iVar21 = 0;
          if (0 < (int)g_CramTextureCount) {
            pSVar10 = g_CramSortedTextureEntries;
            do {
              iVar18 = shape_cramtex_cpp_findLeftmostOverlappingX_FUN_00447a10(pSVar19);
              iVar21 = iVar21 + 1;
              pSVar10->final_right = iVar18;
              iVar18 = shape_cramtex_cpp_findLowestOverlappingY_FUN_00447930(pSVar19);
              uVar13 = g_CramTextureCount;
              pSVar10->final_bottom = iVar18;
              pSVar10 = pSVar10 + 1;
            } while (iVar21 < (int)uVar13);
          }
        }
        shape_cramtex_cpp_visualizeTextureAtlas_FUN_00447f20(0,0,(int)in_stack_ffffff54);
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
          g_CramAlgorithmState = pvVar8;
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
              g_CramAlgorithmState = pvVar8;
              g_CramPlacedTextureCount = g_CramPlacedTextureCount + -1;
              return g_CramPlacedTextureCount - iVar21;
            }
            iVar18 = iVar18 + 0x4c;
            iVar21 = iVar21 + 1;
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
            pSVar19 = g_CramSortedTextureEntries;
            iVar21 = 0;
            do {
              piVar15 = &pSVar19->rotation_applied;
              piVar1 = &pSVar19->final_bottom;
              piVar2 = &pSVar19->final_right;
              piVar3 = &pSVar19->final_top;
              piVar4 = &pSVar19->final_left;
              piVar5 = &pSVar19->working_map_id;
              piVar6 = &pSVar19->height;
              piVar7 = &pSVar19->width;
              pSVar19 = pSVar19 + 1;
              iVar18 = iVar21 + 1;
              crt_stdio_c_fprintf_FUN_005fe6d0
                        (pFVar11,"%3d: %5dx%-5d  Map %d (%5d,%-5d)-(%5d,%-5d)    Rotated: %d\n",iVar21,*piVar7,*piVar6,*piVar5,
                         *piVar4,*piVar3,*piVar2,*piVar1,*piVar15);
              iVar21 = iVar18;
            } while (iVar18 < (int)g_CramTextureCount);
          }
          crt_stdio_c_fprintf_FUN_005fe6d0(pFVar11,"Current:\n");
          if (0 < (int)g_CramTextureCount) {
            pSVar19 = g_CramSortedTextureEntries;
            iVar21 = 0;
            do {
              piVar15 = &pSVar19->rotation_applied;
              piVar1 = &pSVar19->working_width;
              piVar2 = &pSVar19->working_top;
              piVar3 = &pSVar19->working_right;
              piVar4 = &pSVar19->placement_bottom;
              piVar5 = &pSVar19->assigned_map_number;
              piVar6 = &pSVar19->height;
              piVar7 = &pSVar19->width;
              pSVar19 = pSVar19 + 1;
              iVar18 = iVar21 + 1;
              crt_stdio_c_fprintf_FUN_005fe6d0
                        (pFVar11,"%3d: %5dx%-5d  Map %d (%5d,%-5d)-(%5d,%-5d)    Rotated: %d\n",iVar21,*piVar7,*piVar6,*piVar5,
                         *piVar4,*piVar3,*piVar2,*piVar1,*piVar15);
              iVar21 = iVar18;
            } while (iVar18 < (int)g_CramTextureCount);
          }
          shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar11,"..\\shape\\cramtex.cpp",0x32f);
        }
      }
    }
    g_CramPlacedTextureCount = g_CramPlacedTextureCount + -1;
  }
  g_CramAlgorithmState = pvVar8;
  return 0;
}
