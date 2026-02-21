// Name: shape_cramtex.cpp_CCramTex_runInteractiveAtlasGeneration_FUN_00446160
// Address: 00446160
// Address Range: [[00446160, 0044758e]]
// Convention: __cdecl
// Signature: int __cdecl shape_cramtex_cpp_CCramTex_runInteractiveAtlasGeneration_FUN_00446160(CCramTex *this_ptr)

#include "nocturne.h"

int __cdecl shape_cramtex_cpp_CCramTex_runInteractiveAtlasGeneration_FUN_00446160(CCramTex *this_ptr)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  void *pvVar8;
  CCramTex *pCVar9;
  _FILE *p_Var10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  SCramRectangle *pSVar18;
  int iVar19;
  int iVar20;
  bool bVar21;
  uint *puVar22;
  float in_stack_ffffff50;
  SIZE_T local_a8;
  int local_a4;
  int local_9c;
  int local_98;
  int local_8c;
  int local_88;
  int local_80;
  int local_78;
  int local_70;
  int local_6c;
  int local_64;
  int local_5c;
  CCramTex *local_58;
  SCramRectangle *local_54;
  CCramTex *local_50;
  SCramRectangle *local_4c;
  SCramRectangle *local_48;
  CCramTex *local_44;
  SCramRectangle *local_40;
  int *local_3c;
  uint local_38;
  int local_30;
  int local_24;
  
  __STK();
  local_3c = g_CramAlgorithmState;
  local_a8 = 0;
  local_a4 = 0;
  if (0 < g_CramRectangleCount) {
    pSVar18 = g_CramRectangles;
    puVar22 = g_CramAlgorithmState;
    do {
      pSVar18->active_flag = 0;
      iVar19 = g_CramBestSolutionMetric1;
      if ((pSVar18->unk1 == 0) &&
         ((this_ptr->padded_height != this_ptr->padded_width || (pSVar18->orientation == 0)))) {
        if (pSVar18->orientation == 0) {
          iVar17 = pSVar18->top + this_ptr->padded_width;
          pSVar18->unk2 = iVar17;
          if (iVar17 < iVar19) {
            iVar19 = pSVar18->right + this_ptr->padded_height;
            goto LAB_00446547;
          }
        }
        else {
          iVar17 = pSVar18->top + this_ptr->padded_height;
          pSVar18->unk2 = iVar17;
          if (iVar17 < iVar19) {
            iVar19 = pSVar18->right + this_ptr->padded_width;
LAB_00446547:
            iVar17 = g_CramBestSolutionMetric1;
            pSVar18->unk3 = iVar19;
            if (iVar19 < iVar17) {
              iVar19 = g_CramPlacedTextureCount + -1;
              if (-1 < iVar19) {
                pCVar9 = g_CramSortedTextureEntries + iVar19;
                do {
                  if ((((pSVar18->left == pCVar9->assigned_map_number) &&
                       (pSVar18->top < pCVar9->working_top)) &&
                      (pSVar18->right < pCVar9->working_width)) &&
                     ((pCVar9->placement_bottom < pSVar18->unk2 &&
                      (pCVar9->working_right < pSVar18->unk3)))) goto LAB_004461b1;
                  iVar19 = iVar19 + -1;
                  pCVar9 = pCVar9 + -1;
                } while (-1 < iVar19);
              }
              local_a8 = local_a8 + 1;
              *puVar22 = pSVar18;
              puVar22 = puVar22 + 1;
            }
          }
        }
      }
LAB_004461b1:
      local_a4 = local_a4 + 1;
      pSVar18 = pSVar18 + 1;
    } while (local_a4 < g_CramRectangleCount);
  }
  pvVar8 = g_CramAlgorithmState;
  if (0 < (int)local_a8) {
    g_CramPlacedTextureCount = g_CramPlacedTextureCount + 1;
    g_CramAlgorithmState = (void *)((int)g_CramAlgorithmState + local_a8 * 4);
    if (1 < (int)local_a8) {
      iVar19 = 0;
      piVar14 = local_3c;
      if (0 < (int)local_a8) {
        do {
          iVar17 = *piVar14;
          *(int *)(iVar17 + 0x24) = *(int *)(iVar17 + 4) + *(int *)(iVar17 + 8);
          iVar20 = *(int *)(iVar17 + 0x1c);
          if (*(int *)(iVar17 + 0x1c) <= *(int *)(iVar17 + 0x20)) {
            iVar20 = *(int *)(iVar17 + 0x20);
          }
          iVar19 = iVar19 + 1;
          *(int *)(iVar17 + 0x24) =
               *(int *)(iVar17 + 0x24) +
               *(int *)(iVar17 + 0x20) + iVar20 * 5 + *(int *)(iVar17 + 0x1c);
          piVar14 = piVar14 + 1;
        } while (iVar19 < (int)local_a8);
      }
      _qsort
                (local_3c,local_a8,4,shape_cramtex_cpp_qsortRectanglesByActiveFlag_FUN_00446140);
    }
    iVar19 = 0;
    piVar14 = local_3c;
    if (0 < (int)local_a8) {
      do {
        iVar17 = iVar19 + 5;
        iVar19 = iVar19 + 1;
        *(int *)(*piVar14 + 0x24) = iVar17;
        piVar14 = piVar14 + 1;
      } while (iVar19 < (int)local_a8);
    }
    if (g_CramPlacedTextureCount < g_CramTextureCount) {
      local_88 = 0;
      if (0 < (int)local_a8) {
        do {
          piVar14 = (int *)*local_3c;
          this_ptr->assigned_map_number = *piVar14;
          this_ptr->placement_flags = piVar14[5];
          this_ptr->placement_bottom = piVar14[1];
          this_ptr->working_right = piVar14[2];
          if (this_ptr->placement_flags == 0) {
            this_ptr->effective_width = this_ptr->padded_width;
            iVar19 = this_ptr->padded_height;
          }
          else {
            this_ptr->effective_width = this_ptr->padded_height;
            iVar19 = this_ptr->padded_width;
          }
          this_ptr->effective_height = iVar19;
          this_ptr->working_top = this_ptr->placement_bottom + this_ptr->effective_width;
          this_ptr->working_width = this_ptr->working_right + this_ptr->effective_height;
          if ((this_ptr->working_top < g_CramBestSolutionMetric1) &&
             (this_ptr->working_width < g_CramBestSolutionMetric1)) {
            iVar19 = 0;
            if (0 < g_CramRectangleCount) {
              pSVar18 = g_CramRectangles;
              do {
                if ((((pSVar18->unk1 == 0) && (pSVar18->left == this_ptr->assigned_map_number)) &&
                    (this_ptr->placement_bottom < pSVar18->bottom)) &&
                   (((this_ptr->working_right < pSVar18->max_dimension &&
                     (pSVar18->top < this_ptr->working_top)) &&
                    (pSVar18->right < this_ptr->working_width)))) {
                  pSVar18->unk1 = (int)this_ptr;
                }
                iVar19 = iVar19 + 1;
                pSVar18 = pSVar18 + 1;
              } while (iVar19 < g_CramRectangleCount);
            }
            iVar19 = g_CramRectangleCount;
            if (this_ptr->working_width <= g_CramBestSolutionMetric2) {
              iVar17 = g_CramPlacedTextureCount + -2;
              local_80 = 0;
              if (-1 < iVar17) {
                pCVar9 = g_CramSortedTextureEntries + iVar17;
                do {
                  if (((pCVar9->assigned_map_number == this_ptr->assigned_map_number) &&
                      (pCVar9->working_top <= this_ptr->working_top)) &&
                     ((this_ptr->working_width < pCVar9->working_width &&
                      ((pCVar9->working_right <
                        this_ptr->working_width + g_CramOptimalPlacement + -1 &&
                       (local_80 < pCVar9->working_top)))))) {
                    local_80 = pCVar9->working_top;
                  }
                  iVar17 = iVar17 + -1;
                  pCVar9 = pCVar9 + -1;
                } while (-1 < iVar17);
              }
              if (local_80 < this_ptr->working_top) {
                local_30 = g_CramPlacedTextureCount + -2;
                if (-1 < local_30) {
                  local_50 = g_CramSortedTextureEntries + local_30;
                  do {
                    iVar17 = this_ptr->assigned_map_number;
                    if ((((iVar17 == local_50->assigned_map_number) &&
                         (local_50->working_top <= this_ptr->working_top)) &&
                        (iVar20 = this_ptr->working_width, iVar20 < local_50->working_width)) &&
                       (local_80 < local_50->working_top)) {
                      iVar11 = local_50->working_top;
                      if (0 < g_CramRectangleCount) {
                        iVar12 = 0;
                        do {
                          if (((iVar17 == *(int *)((int)&g_CramRectangles[0].left + iVar12)) &&
                              (iVar11 == *(int *)((int)&g_CramRectangles[0].top + iVar12))) &&
                             (iVar20 == *(int *)((int)&g_CramRectangles[0].right + iVar12)))
                          goto LAB_00446d87;
                          iVar12 = iVar12 + 0x28;
                        } while (iVar12 < g_CramRectangleCount * 0x28);
                      }
                      local_78 = 0;
                      local_54 = g_CramRectangles + g_CramRectangleCount;
                      do {
                        iVar12 = g_CramMinPlacementX;
                        iVar16 = g_CramMinPlacementY;
                        if (local_78 != 0) {
                          iVar12 = g_CramMinPlacementY;
                          iVar16 = g_CramMinPlacementX;
                        }
                        iVar15 = g_CramPlacedTextureCount + -1;
                        if (-1 < iVar15) {
                          pCVar9 = g_CramSortedTextureEntries + iVar15;
                          do {
                            if (((pCVar9->assigned_map_number == iVar17) &&
                                (iVar11 < pCVar9->working_top)) &&
                               ((iVar20 < pCVar9->working_width &&
                                ((pCVar9->placement_bottom < iVar12 + iVar11 &&
                                 (pCVar9->working_right < iVar16 + iVar20)))))) break;
                            iVar15 = iVar15 + -1;
                            pCVar9 = pCVar9 + -1;
                          } while (-1 < iVar15);
                        }
                        if (iVar15 < 0) {
                          local_54->unk1 = 0;
                          local_54->active_flag = 1;
                          local_54->left = iVar17;
                          local_54->top = iVar11;
                          local_54->right = iVar20;
                          local_54->bottom = iVar12 + iVar11;
                          local_54->orientation = local_78;
                          local_54->max_dimension = iVar16 + iVar20;
                          g_CramRectangleCount = g_CramRectangleCount + 1;
                          local_54 = local_54 + 1;
                        }
                        local_78 = local_78 + 1;
                      } while (local_78 < 2);
                    }
LAB_00446d87:
                    local_50 = local_50 + -1;
                    local_30 = local_30 + -1;
                  } while (-1 < local_30);
                }
                iVar17 = this_ptr->assigned_map_number;
                iVar20 = this_ptr->working_width;
                if (0 < g_CramRectangleCount) {
                  iVar11 = 0;
                  do {
                    if (((iVar17 == *(int *)((int)&g_CramRectangles[0].left + iVar11)) &&
                        (local_80 == *(int *)((int)&g_CramRectangles[0].top + iVar11))) &&
                       (iVar20 == *(int *)((int)&g_CramRectangles[0].right + iVar11)))
                    goto LAB_00446df8;
                    iVar11 = iVar11 + 0x28;
                  } while (iVar11 < g_CramRectangleCount * 0x28);
                }
                local_4c = g_CramRectangles + g_CramRectangleCount;
                local_70 = 0;
                do {
                  iVar11 = g_CramMinPlacementY;
                  iVar12 = g_CramMinPlacementX;
                  if (local_70 != 0) {
                    iVar11 = g_CramMinPlacementX;
                    iVar12 = g_CramMinPlacementY;
                  }
                  iVar16 = g_CramPlacedTextureCount + -1;
                  if (-1 < iVar16) {
                    pCVar9 = g_CramSortedTextureEntries + iVar16;
                    do {
                      if (((pCVar9->assigned_map_number == iVar17) &&
                          (local_80 < pCVar9->working_top)) &&
                         ((iVar20 < pCVar9->working_width &&
                          ((pCVar9->placement_bottom < iVar12 + local_80 &&
                           (pCVar9->working_right < iVar11 + iVar20)))))) break;
                      iVar16 = iVar16 + -1;
                      pCVar9 = pCVar9 + -1;
                    } while (-1 < iVar16);
                  }
                  if (iVar16 < 0) {
                    local_4c->unk1 = 0;
                    local_4c->active_flag = 1;
                    local_4c->left = iVar17;
                    local_4c->top = local_80;
                    local_4c->right = iVar20;
                    local_4c->max_dimension = iVar11 + iVar20;
                    local_4c->orientation = local_70;
                    local_4c->bottom = iVar12 + local_80;
                    g_CramRectangleCount = g_CramRectangleCount + 1;
                    local_4c = local_4c + 1;
                  }
                  local_70 = local_70 + 1;
                } while (local_70 < 2);
              }
            }
LAB_00446df8:
            if (this_ptr->working_width <= g_CramBestSolutionMetric2) {
              iVar17 = g_CramPlacedTextureCount + -2;
              local_6c = 0;
              if (-1 < iVar17) {
                pCVar9 = g_CramSortedTextureEntries + iVar17;
                do {
                  if ((((pCVar9->assigned_map_number == this_ptr->assigned_map_number) &&
                       (pCVar9->working_width <= this_ptr->working_width)) &&
                      (this_ptr->working_top < pCVar9->working_top)) &&
                     ((pCVar9->placement_bottom <
                       this_ptr->working_top + g_CramOptimalPlacement + -1 &&
                      (local_6c < pCVar9->working_width)))) {
                    local_6c = pCVar9->working_width;
                  }
                  iVar17 = iVar17 + -1;
                  pCVar9 = pCVar9 + -1;
                } while (-1 < iVar17);
              }
              if (local_6c < this_ptr->working_width) {
                local_24 = g_CramPlacedTextureCount + -2;
                if (-1 < local_24) {
                  local_44 = g_CramSortedTextureEntries + local_24;
                  do {
                    iVar17 = this_ptr->assigned_map_number;
                    if (((iVar17 == local_44->assigned_map_number) &&
                        (local_44->working_width <= this_ptr->working_width)) &&
                       ((iVar20 = this_ptr->working_top, iVar20 < local_44->working_top &&
                        (local_6c < local_44->working_width)))) {
                      iVar11 = local_44->working_width;
                      if (0 < g_CramRectangleCount) {
                        iVar12 = 0;
                        do {
                          if (((iVar17 == *(int *)((int)&g_CramRectangles[0].left + iVar12)) &&
                              (iVar20 == *(int *)((int)&g_CramRectangles[0].top + iVar12))) &&
                             (iVar11 == *(int *)((int)&g_CramRectangles[0].right + iVar12)))
                          goto LAB_00446f25;
                          iVar12 = iVar12 + 0x28;
                        } while (iVar12 < g_CramRectangleCount * 0x28);
                      }
                      local_64 = 0;
                      local_48 = g_CramRectangles + g_CramRectangleCount;
                      do {
                        iVar12 = g_CramMinPlacementX;
                        iVar16 = g_CramMinPlacementY;
                        if (local_64 != 0) {
                          iVar12 = g_CramMinPlacementY;
                          iVar16 = g_CramMinPlacementX;
                        }
                        iVar15 = g_CramPlacedTextureCount + -1;
                        if (-1 < iVar15) {
                          pCVar9 = g_CramSortedTextureEntries + iVar15;
                          do {
                            if (((pCVar9->assigned_map_number == iVar17) &&
                                (iVar20 < pCVar9->working_top)) &&
                               ((iVar11 < pCVar9->working_width &&
                                ((pCVar9->placement_bottom < iVar12 + iVar20 &&
                                 (pCVar9->working_right < iVar16 + iVar11)))))) break;
                            iVar15 = iVar15 + -1;
                            pCVar9 = pCVar9 + -1;
                          } while (-1 < iVar15);
                        }
                        if (iVar15 < 0) {
                          local_48->unk1 = 0;
                          local_48->active_flag = 1;
                          local_48->left = iVar17;
                          local_48->top = iVar20;
                          local_48->right = iVar11;
                          local_48->bottom = iVar12 + iVar20;
                          local_48->orientation = local_64;
                          local_48->max_dimension = iVar16 + iVar11;
                          g_CramRectangleCount = g_CramRectangleCount + 1;
                          local_48 = local_48 + 1;
                        }
                        local_64 = local_64 + 1;
                      } while (local_64 < 2);
                    }
LAB_00446f25:
                    local_44 = local_44 + -1;
                    local_24 = local_24 + -1;
                  } while (-1 < local_24);
                }
                iVar17 = this_ptr->assigned_map_number;
                iVar20 = this_ptr->working_top;
                if (0 < g_CramRectangleCount) {
                  iVar11 = 0;
                  do {
                    if (((iVar17 == *(int *)((int)&g_CramRectangles[0].left + iVar11)) &&
                        (iVar20 == *(int *)((int)&g_CramRectangles[0].top + iVar11))) &&
                       (local_6c == *(int *)((int)&g_CramRectangles[0].right + iVar11)))
                    goto LAB_00446f96;
                    iVar11 = iVar11 + 0x28;
                  } while (iVar11 < g_CramRectangleCount * 0x28);
                }
                local_40 = g_CramRectangles + g_CramRectangleCount;
                local_5c = 0;
                do {
                  iVar11 = g_CramMinPlacementY;
                  iVar12 = g_CramMinPlacementX;
                  if (local_5c != 0) {
                    iVar11 = g_CramMinPlacementX;
                    iVar12 = g_CramMinPlacementY;
                  }
                  iVar16 = g_CramPlacedTextureCount + -1;
                  if (-1 < iVar16) {
                    pCVar9 = g_CramSortedTextureEntries + iVar16;
                    do {
                      if (((pCVar9->assigned_map_number == iVar17) && (iVar20 < pCVar9->working_top)
                          ) && ((local_6c < pCVar9->working_width &&
                                ((pCVar9->placement_bottom < iVar12 + iVar20 &&
                                 (pCVar9->working_right < iVar11 + local_6c)))))) break;
                      iVar16 = iVar16 + -1;
                      pCVar9 = pCVar9 + -1;
                    } while (-1 < iVar16);
                  }
                  if (iVar16 < 0) {
                    local_40->unk1 = 0;
                    local_40->active_flag = 1;
                    local_40->left = iVar17;
                    local_40->top = iVar20;
                    local_40->right = local_6c;
                    local_40->max_dimension = iVar11 + local_6c;
                    local_40->orientation = local_5c;
                    local_40->bottom = iVar12 + iVar20;
                    g_CramRectangleCount = g_CramRectangleCount + 1;
                    local_40 = local_40 + 1;
                  }
                  local_5c = local_5c + 1;
                } while (local_5c < 2);
              }
            }
LAB_00446f96:
            if (g_CramVisualizationMode != 0) {
              shape_cramtex_cpp_CCramTex_visualizeTextureAtlas_FUN_00447f20
                        ((CCramTex *)0x0,0,0,(int)in_stack_ffffff50);
            }
            iVar17 = shape_cramtex_cpp_CCramTex_runInteractiveAtlasGeneration_FUN_00446160
                               (g_CramSortedTextureEntries + g_CramPlacedTextureCount);
            if (0 < iVar17) {
              iVar17 = iVar17 + -1;
            }
            g_CramRectangleCount = iVar19;
            if (0 < iVar19) {
              iVar20 = 0;
              do {
                if (this_ptr == *(CCramTex **)((int)&g_CramRectangles[0].unk1 + iVar20)) {
                  *(uint *)((int)&g_CramRectangles[0].unk1 + iVar20) = 0;
                }
                iVar20 = iVar20 + 0x28;
              } while (iVar20 < iVar19 * 0x28);
            }
            if (g_CramVisualizationUpdateCounter < 100) {
              g_CramVisualizationUpdateCounter = g_CramVisualizationUpdateCounter + 1;
            }
            else {
              wincore_winrun_cpp_processWindowMessages_FUN_005f35e0();
              iVar19 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
              in_stack_ffffff50 =
                   (float)(iVar19 - g_CramStartTime) * (float)8.4771050347222196e-07;
              g_CramStartTime = iVar19;
              if (0.0 < in_stack_ffffff50) {
                g_CramIterationCount = (int)((float)g_CramIterationCount + in_stack_ffffff50);
              }
              while (iVar19 = wincore_winrun_cpp_wasKeyPressed_FUN_005f2f00(), iVar19 != 0) {
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
                  shape_cramtex_cpp_CCramTex_visualizeTextureAtlas_FUN_00447f20
                            ((CCramTex *)0x1,0,0,(int)in_stack_ffffff50);
                }
                else {
                  shape_cramtex_cpp_CCramTex_visualizeTextureAtlas_FUN_00447f20
                            ((CCramTex *)0x1,0,0,(int)in_stack_ffffff50);
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
            if (iVar17 != 0) {
              g_CramAlgorithmState = pvVar8;
              g_CramPlacedTextureCount = g_CramPlacedTextureCount + -1;
              return iVar17;
            }
          }
          local_3c = local_3c + 1;
          local_88 = local_88 + 1;
        } while (local_88 < (int)local_a8);
      }
    }
    else {
      local_3c = (int *)*local_3c;
      this_ptr->assigned_map_number = *local_3c;
      this_ptr->placement_flags = local_3c[5];
      this_ptr->placement_bottom = local_3c[1];
      this_ptr->working_right = local_3c[2];
      if (this_ptr->placement_flags == 0) {
        this_ptr->effective_width = this_ptr->padded_width;
        iVar19 = this_ptr->padded_height;
      }
      else {
        this_ptr->effective_width = this_ptr->padded_height;
        iVar19 = this_ptr->padded_width;
      }
      this_ptr->effective_height = iVar19;
      this_ptr->working_top = this_ptr->placement_bottom + this_ptr->effective_width;
      iVar19 = g_CramPlacedTextureCount;
      iVar20 = 0;
      this_ptr->working_width = this_ptr->working_right + this_ptr->effective_height;
      iVar17 = 0;
      if (0 < iVar19) {
        pCVar9 = g_CramSortedTextureEntries;
        do {
          if (iVar17 < pCVar9->working_top) {
            iVar17 = pCVar9->working_top;
          }
          if (iVar17 < pCVar9->working_width) {
            iVar17 = pCVar9->working_width;
          }
          iVar20 = iVar20 + 1;
          pCVar9 = pCVar9 + 1;
        } while (iVar20 < g_CramPlacedTextureCount);
      }
      p_Var10 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                          ("..\\shape\\cramlog.txt",(char *)0x0,"at",
                           "..\\shape\\cramtex.cpp",0x30d);
      if (p_Var10 != (_FILE *)0x0) {
        _fprintf(p_Var10,"New best solution found!  thisSquareSize = %d\n",iVar17);
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var10,"..\\shape\\cramtex.cpp",0x310);
      }
      if (iVar17 < g_CramBestSolutionMetric1) {
        iVar19 = 0;
        g_CramCurrentAcceptableSize = iVar17;
        if (0 < g_CramPlacedTextureCount) {
          pCVar9 = g_CramSortedTextureEntries;
          do {
            pCVar9->working_map_id = pCVar9->assigned_map_number;
            pCVar9->rotation_applied = pCVar9->placement_flags;
            pCVar9->final_left = pCVar9->placement_bottom;
            pCVar9->final_top = pCVar9->working_right;
            pCVar9->final_right = pCVar9->working_top;
            iVar17 = g_CramPlacedTextureCount;
            iVar19 = iVar19 + 1;
            pCVar9->final_bottom = pCVar9->working_width;
            pCVar9 = pCVar9 + 1;
          } while (iVar19 < iVar17);
        }
        if (g_CramFillGaps != 0) {
          do {
            bVar21 = false;
            local_9c = 0;
            if (0 < g_CramTextureCount) {
              local_58 = g_CramSortedTextureEntries;
              do {
                while( true ) {
                  iVar19 = 0;
                  if ((local_58->final_bottom < g_CramCurrentAcceptableSize) &&
                     (iVar17 = shape_cramtex_cpp_CCramTex_findLowestOverlappingY_FUN_00447930
                                         (local_58), g_CramCurrentAcceptableSize <= iVar17)) {
                    iVar19 = iVar17 - local_58->final_bottom;
                    local_58->final_bottom = local_58->final_bottom + iVar19;
                    local_58->final_top = local_58->final_top + iVar19;
                  }
                  if ((local_58->final_right < g_CramCurrentAcceptableSize) &&
                     (iVar17 = shape_cramtex_cpp_CCramTex_findLeftmostOverlappingX_FUN_00447a10
                                         (local_58), g_CramCurrentAcceptableSize <= iVar17)) {
                    iVar19 = iVar17 - local_58->final_right;
                    local_58->final_left = local_58->final_left + iVar19;
                    local_58->final_right = local_58->final_right + iVar19;
                  }
                  if (iVar19 < 1) break;
                  bVar21 = true;
                }
                local_58 = local_58 + 1;
                local_9c = local_9c + 1;
              } while (local_9c < g_CramTextureCount);
            }
          } while (bVar21);
          local_98 = 0;
          do {
            iVar19 = 0;
            bVar21 = false;
            if (0 < g_CramTextureCount) {
              pCVar9 = g_CramSortedTextureEntries;
              do {
                iVar20 = shape_cramtex_cpp_CCramTex_findRightmostOverlappingX_FUN_004479a0(pCVar9);
                iVar17 = pCVar9->final_left;
                iVar11 = shape_cramtex_cpp_CCramTex_findLeftmostOverlappingX_FUN_00447a10(pCVar9);
                iVar17 = ((iVar20 - iVar17) + (iVar11 - pCVar9->final_right)) / 2;
                if (iVar17 != 0) {
                  bVar21 = true;
                  pCVar9->final_left = pCVar9->final_left + iVar17;
                  pCVar9->final_right = pCVar9->final_right + iVar17;
                }
                iVar20 = shape_cramtex_cpp_CCramTex_findHighestOverlappingY_FUN_004478c0(pCVar9);
                iVar17 = pCVar9->final_top;
                iVar11 = shape_cramtex_cpp_CCramTex_findLowestOverlappingY_FUN_00447930(pCVar9);
                iVar17 = ((iVar20 - iVar17) + (iVar11 - pCVar9->final_bottom)) / 2;
                if (iVar17 != 0) {
                  bVar21 = true;
                  pCVar9->final_top = pCVar9->final_top + iVar17;
                  pCVar9->final_bottom = pCVar9->final_bottom + iVar17;
                }
                iVar19 = iVar19 + 1;
                pCVar9 = pCVar9 + 1;
              } while (iVar19 < g_CramTextureCount);
            }
          } while ((bVar21) && (local_98 = local_98 + 1, local_98 < 10));
          local_38 = 0;
          do {
            if ((local_38 & 1) == 0) {
              iVar19 = 0;
              local_8c = 1;
              iVar17 = g_CramTextureCount;
            }
            else {
              local_8c = -1;
              iVar19 = g_CramTextureCount + -1;
              iVar17 = -1;
            }
            for (; iVar19 != iVar17; iVar19 = iVar19 + local_8c) {
              pCVar9 = g_CramSortedTextureEntries + iVar19;
              iVar20 = shape_cramtex_cpp_CCramTex_findRightmostOverlappingX_FUN_004479a0(pCVar9);
              g_CramSortedTextureEntries[iVar19].final_left =
                   (g_CramSortedTextureEntries[iVar19].final_left + iVar20) / 2;
              iVar20 = shape_cramtex_cpp_CCramTex_findHighestOverlappingY_FUN_004478c0(pCVar9);
              g_CramSortedTextureEntries[iVar19].final_top =
                   (g_CramSortedTextureEntries[iVar19].final_top + iVar20) / 2;
              iVar20 = shape_cramtex_cpp_CCramTex_findLeftmostOverlappingX_FUN_00447a10(pCVar9);
              g_CramSortedTextureEntries[iVar19].final_right =
                   (iVar20 + g_CramSortedTextureEntries[iVar19].final_right + 1) / 2;
              iVar20 = shape_cramtex_cpp_CCramTex_findLowestOverlappingY_FUN_00447930(pCVar9);
              g_CramSortedTextureEntries[iVar19].final_bottom =
                   (iVar20 + g_CramSortedTextureEntries[iVar19].final_bottom + 1) / 2;
            }
            local_38 = local_38 + 1;
          } while ((int)local_38 < 10);
          iVar19 = 0;
          if (0 < g_CramTextureCount) {
            pCVar9 = g_CramSortedTextureEntries;
            do {
              do {
                iVar17 = shape_cramtex_cpp_CCramTex_findHighestOverlappingY_FUN_004478c0(pCVar9);
                iVar17 = pCVar9->final_top - iVar17;
                pCVar9->final_bottom = pCVar9->final_bottom - iVar17;
                pCVar9->final_top = pCVar9->final_top - iVar17;
                iVar17 = shape_cramtex_cpp_CCramTex_findRightmostOverlappingX_FUN_004479a0(pCVar9);
                iVar17 = pCVar9->final_left - iVar17;
                pCVar9->final_right = pCVar9->final_right - iVar17;
                pCVar9->final_left = pCVar9->final_left - iVar17;
              } while (0 < iVar17);
              iVar19 = iVar19 + 1;
              pCVar9 = pCVar9 + 1;
            } while (iVar19 < g_CramTextureCount);
          }
          iVar19 = 0;
          if (0 < g_CramTextureCount) {
            pCVar9 = g_CramSortedTextureEntries;
            do {
              iVar17 = shape_cramtex_cpp_CCramTex_findLeftmostOverlappingX_FUN_00447a10(pCVar9);
              iVar19 = iVar19 + 1;
              pCVar9->final_right = iVar17;
              iVar20 = shape_cramtex_cpp_CCramTex_findLowestOverlappingY_FUN_00447930(pCVar9);
              iVar17 = g_CramTextureCount;
              pCVar9->final_bottom = iVar20;
              pCVar9 = pCVar9 + 1;
            } while (iVar19 < iVar17);
          }
        }
        shape_cramtex_cpp_CCramTex_visualizeTextureAtlas_FUN_00447f20
                  ((CCramTex *)0x1,0,0,(int)in_stack_ffffff50);
        p_Var10 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                            ("..\\shape\\cramlog.txt",(char *)0x0,"at",
                             "..\\shape\\cramtex.cpp",0x359);
        if (p_Var10 != (_FILE *)0x0) {
          _fprintf(p_Var10,"Checking if solution acceptable.\n");
          _fprintf(p_Var10,"  bestSquareSize = %d, acceptableSize = %d\n",g_CramCurrentAcceptableSize,
                     g_CramAcceptableSize);
          shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var10,"..\\shape\\cramtex.cpp",0x35d);
        }
        if (g_CramCurrentAcceptableSize <= g_CramAcceptableSize) {
          g_CramAlgorithmState = pvVar8;
          g_CramPlacedTextureCount = g_CramPlacedTextureCount + -1;
          return 999999;
        }
        iVar19 = g_CramAcceptableSize + g_CramCurrentAcceptableSize * 3;
        iVar17 = iVar19 >> 0x1f;
        g_CramBestSolutionMetric1 = (int)((iVar19 + iVar17 * -4) - (uint)(iVar17 << 1 < 0)) >> 2;
        g_CramBestSolutionMetric2 = g_CramBestSolutionMetric1 - g_CramOptimalPlacement;
        iVar19 = 0;
        if (0 < g_CramRectangleCount) {
          pSVar18 = g_CramRectangles;
          do {
            if (pSVar18->orientation == 0) {
              if (pSVar18->top + g_CramMinPlacementX < g_CramBestSolutionMetric1) {
                iVar17 = pSVar18->right + g_CramMinPlacementY;
                goto joined_r0x00446b0b;
              }
LAB_00446a27:
              pSVar18->unk1 = g_CramInvalidMarker;
            }
            else {
              if (g_CramBestSolutionMetric1 <= pSVar18->top + g_CramMinPlacementY)
              goto LAB_00446a27;
              iVar17 = pSVar18->right + g_CramMinPlacementX;
joined_r0x00446b0b:
              if (g_CramBestSolutionMetric1 <= iVar17) goto LAB_00446a27;
            }
            iVar19 = iVar19 + 1;
            pSVar18 = pSVar18 + 1;
          } while (iVar19 < g_CramRectangleCount);
        }
        iVar19 = 1;
        if (1 < g_CramPlacedTextureCount) {
          iVar17 = 0x4c;
          do {
            if ((g_CramBestSolutionMetric1 <=
                 *(int *)((int)&g_CramSortedTextureEntries[0].working_top + iVar17)) ||
               (g_CramBestSolutionMetric1 <=
                *(int *)((int)&g_CramSortedTextureEntries[0].working_width + iVar17))) {
              g_CramAlgorithmState = pvVar8;
              g_CramPlacedTextureCount = g_CramPlacedTextureCount + -1;
              return g_CramPlacedTextureCount - iVar19;
            }
            iVar17 = iVar17 + 0x4c;
            iVar19 = iVar19 + 1;
          } while (iVar17 < g_CramPlacedTextureCount * 0x4c);
        }
      }
      else {
        p_Var10 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                            ("..\\shape\\cramlog.txt",(char *)0x0,"at",
                             "..\\shape\\cramtex.cpp",0x318);
        if (p_Var10 != (_FILE *)0x0) {
          _fprintf(p_Var10,"\n\nCRAMTEX BUG!\n");
          _fprintf(p_Var10,"bestSquareSize = %d, thisSquareSize = %d, mustBeatSquareSize = %d\n",g_CramCurrentAcceptableSize,iVar17,
                     g_CramBestSolutionMetric1);
          _fprintf(p_Var10,"acceptableSize = %d\n",g_CramAcceptableSize)
          ;
          _fprintf(p_Var10,"targetPadSize = %d\n",g_CramAtlasHeight);
          _fprintf(p_Var10,"pad = %d\n",g_CramPaddingCalculation);
          _fprintf(p_Var10,"Best:\n");
          if (0 < g_CramTextureCount) {
            pCVar9 = g_CramSortedTextureEntries;
            iVar19 = 0;
            do {
              piVar14 = &pCVar9->rotation_applied;
              piVar1 = &pCVar9->final_bottom;
              piVar2 = &pCVar9->final_right;
              piVar3 = &pCVar9->final_top;
              piVar4 = &pCVar9->final_left;
              piVar5 = &pCVar9->working_map_id;
              piVar6 = &pCVar9->height;
              piVar7 = &pCVar9->width;
              pCVar9 = pCVar9 + 1;
              iVar17 = iVar19 + 1;
              _fprintf(p_Var10,"%3d: %5dx%-5d  Map %d (%5d,%-5d)-(%5d,%-5d)    Rotated: %d\n",iVar19,*piVar7,*piVar6,*piVar5,
                         *piVar4,*piVar3,*piVar2,*piVar1,*piVar14);
              iVar19 = iVar17;
            } while (iVar17 < g_CramTextureCount);
          }
          _fprintf(p_Var10,"Current:\n");
          if (0 < g_CramTextureCount) {
            pCVar9 = g_CramSortedTextureEntries;
            iVar19 = 0;
            do {
              piVar14 = &pCVar9->rotation_applied;
              piVar1 = &pCVar9->working_width;
              piVar2 = &pCVar9->working_top;
              piVar3 = &pCVar9->working_right;
              piVar4 = &pCVar9->placement_bottom;
              piVar5 = &pCVar9->assigned_map_number;
              piVar6 = &pCVar9->height;
              piVar7 = &pCVar9->width;
              pCVar9 = pCVar9 + 1;
              iVar17 = iVar19 + 1;
              _fprintf(p_Var10,"%3d: %5dx%-5d  Map %d (%5d,%-5d)-(%5d,%-5d)    Rotated: %d\n",iVar19,*piVar7,*piVar6,*piVar5,
                         *piVar4,*piVar3,*piVar2,*piVar1,*piVar14);
              iVar19 = iVar17;
            } while (iVar17 < g_CramTextureCount);
          }
          shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var10,"..\\shape\\cramtex.cpp",0x32f);
        }
      }
    }
    g_CramPlacedTextureCount = g_CramPlacedTextureCount + -1;
  }
  g_CramAlgorithmState = pvVar8;
  return 0;
}
