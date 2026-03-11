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
  float fVar8;
  int *piVar9;
  CCramTex *pCVar10;
  _FILE *p_Var11;
  int iVar12;
  int iVar13;
  uint uVar14;
  SCramRectangle **ppSVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  SCramRectangle *pSVar19;
  int iVar20;
  int iVar21;
  bool bVar22;
  SCramRectangle **ppSVar23;
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
  SCramRectangle **local_3c;
  uint local_38;
  int local_30;
  int local_24;
  
  __STK();
  local_3c = g_CramCandidateWriteCursor;
  local_a8 = 0;
  local_a4 = 0;
  if (0 < g_CramRectangleCount) {
    pSVar19 = g_CramRectangles;
    ppSVar23 = g_CramCandidateWriteCursor;
    do {
      pSVar19->active_flag = 0;
      iVar20 = g_CramBestSolutionMetric1;
      if ((pSVar19->occupant == 0) &&
         ((this_ptr->padded_height != this_ptr->padded_width || (pSVar19->orientation == 0)))) {
        if (pSVar19->orientation == 0) {
          iVar18 = pSVar19->start_x + this_ptr->padded_width;
          pSVar19->candidate_end_x = iVar18;
          if (iVar18 < iVar20) {
            iVar20 = pSVar19->start_y + this_ptr->padded_height;
            goto LAB_00446547;
          }
        }
        else {
          iVar18 = pSVar19->start_x + this_ptr->padded_height;
          pSVar19->candidate_end_x = iVar18;
          if (iVar18 < iVar20) {
            iVar20 = pSVar19->start_y + this_ptr->padded_width;
LAB_00446547:
            iVar18 = g_CramBestSolutionMetric1;
            pSVar19->candidate_end_y = iVar20;
            if (iVar20 < iVar18) {
              iVar20 = g_CramPlacedTextureCount + -1;
              if (-1 < iVar20) {
                pCVar10 = g_CramSortedTextureEntries + iVar20;
                do {
                  if ((((pSVar19->map_id == pCVar10->assigned_map_number) &&
                       (pSVar19->start_x < pCVar10->working_top)) &&
                      (pSVar19->start_y < pCVar10->working_width)) &&
                     ((pCVar10->placement_bottom < pSVar19->candidate_end_x &&
                      (pCVar10->working_right < pSVar19->candidate_end_y)))) goto LAB_004461b1;
                  iVar20 = iVar20 + -1;
                  pCVar10 = pCVar10 + -1;
                } while (-1 < iVar20);
              }
              local_a8 = local_a8 + 1;
              *ppSVar23 = pSVar19;
              ppSVar23 = ppSVar23 + 1;
            }
          }
        }
      }
LAB_004461b1:
      local_a4 = local_a4 + 1;
      pSVar19 = pSVar19 + 1;
    } while (local_a4 < g_CramRectangleCount);
  }
  ppSVar23 = g_CramCandidateWriteCursor;
  if (0 < (int)local_a8) {
    g_CramPlacedTextureCount = g_CramPlacedTextureCount + 1;
    g_CramCandidateWriteCursor = g_CramCandidateWriteCursor + local_a8;
    if (1 < (int)local_a8) {
      iVar20 = 0;
      ppSVar15 = local_3c;
      if (0 < (int)local_a8) {
        do {
          pSVar19 = *ppSVar15;
          pSVar19->active_flag = pSVar19->start_x + pSVar19->start_y;
          iVar18 = pSVar19->candidate_end_x;
          if (pSVar19->candidate_end_x <= pSVar19->candidate_end_y) {
            iVar18 = pSVar19->candidate_end_y;
          }
          iVar20 = iVar20 + 1;
          pSVar19->active_flag =
               pSVar19->active_flag +
               pSVar19->candidate_end_y + iVar18 * 5 + pSVar19->candidate_end_x;
          ppSVar15 = ppSVar15 + 1;
        } while (iVar20 < (int)local_a8);
      }
      _qsort
                (local_3c,local_a8,4,shape_cramtex_cpp_qsortRectanglesByActiveFlag_FUN_00446140);
    }
    iVar20 = 0;
    ppSVar15 = local_3c;
    if (0 < (int)local_a8) {
      do {
        iVar18 = iVar20 + 5;
        iVar20 = iVar20 + 1;
        (*ppSVar15)->active_flag = iVar18;
        ppSVar15 = ppSVar15 + 1;
      } while (iVar20 < (int)local_a8);
    }
    if (g_CramPlacedTextureCount < g_CramTextureCount) {
      local_88 = 0;
      if (0 < (int)local_a8) {
        do {
          pSVar19 = *local_3c;
          this_ptr->assigned_map_number = pSVar19->map_id;
          this_ptr->placement_flags = pSVar19->orientation;
          this_ptr->placement_bottom = pSVar19->start_x;
          this_ptr->working_right = pSVar19->start_y;
          if (this_ptr->placement_flags == 0) {
            this_ptr->effective_width = this_ptr->padded_width;
            iVar20 = this_ptr->padded_height;
          }
          else {
            this_ptr->effective_width = this_ptr->padded_height;
            iVar20 = this_ptr->padded_width;
          }
          this_ptr->effective_height = iVar20;
          this_ptr->working_top = this_ptr->placement_bottom + this_ptr->effective_width;
          this_ptr->working_width = this_ptr->working_right + this_ptr->effective_height;
          if ((this_ptr->working_top < g_CramBestSolutionMetric1) &&
             (this_ptr->working_width < g_CramBestSolutionMetric1)) {
            iVar20 = 0;
            if (0 < g_CramRectangleCount) {
              pSVar19 = g_CramRectangles;
              do {
                if ((((pSVar19->occupant == 0) && (pSVar19->map_id == this_ptr->assigned_map_number)
                     ) && (this_ptr->placement_bottom < pSVar19->end_x)) &&
                   (((this_ptr->working_right < pSVar19->end_y &&
                     (pSVar19->start_x < this_ptr->working_top)) &&
                    (pSVar19->start_y < this_ptr->working_width)))) {
                  pSVar19->occupant = (int)this_ptr;
                }
                iVar20 = iVar20 + 1;
                pSVar19 = pSVar19 + 1;
              } while (iVar20 < g_CramRectangleCount);
            }
            iVar20 = g_CramRectangleCount;
            if (this_ptr->working_width <= g_CramBestSolutionMetric2) {
              iVar18 = g_CramPlacedTextureCount + -2;
              local_80 = 0;
              if (-1 < iVar18) {
                pCVar10 = g_CramSortedTextureEntries + iVar18;
                do {
                  if (((pCVar10->assigned_map_number == this_ptr->assigned_map_number) &&
                      (pCVar10->working_top <= this_ptr->working_top)) &&
                     ((this_ptr->working_width < pCVar10->working_width &&
                      ((pCVar10->working_right <
                        this_ptr->working_width + g_CramOptimalPlacement + -1 &&
                       (local_80 < pCVar10->working_top)))))) {
                    local_80 = pCVar10->working_top;
                  }
                  iVar18 = iVar18 + -1;
                  pCVar10 = pCVar10 + -1;
                } while (-1 < iVar18);
              }
              if (local_80 < this_ptr->working_top) {
                local_30 = g_CramPlacedTextureCount + -2;
                if (-1 < local_30) {
                  local_50 = g_CramSortedTextureEntries + local_30;
                  do {
                    iVar18 = this_ptr->assigned_map_number;
                    if ((((iVar18 == local_50->assigned_map_number) &&
                         (local_50->working_top <= this_ptr->working_top)) &&
                        (iVar21 = this_ptr->working_width, iVar21 < local_50->working_width)) &&
                       (local_80 < local_50->working_top)) {
                      iVar12 = local_50->working_top;
                      if (0 < g_CramRectangleCount) {
                        iVar13 = 0;
                        do {
                          if (((iVar18 == *(int *)((int)&g_CramRectangles[0].map_id + iVar13)) &&
                              (iVar12 == *(int *)((int)&g_CramRectangles[0].start_x + iVar13))) &&
                             (iVar21 == *(int *)((int)&g_CramRectangles[0].start_y + iVar13)))
                          goto LAB_00446d87;
                          iVar13 = iVar13 + 0x28;
                        } while (iVar13 < g_CramRectangleCount * 0x28);
                      }
                      local_78 = 0;
                      local_54 = g_CramRectangles + g_CramRectangleCount;
                      do {
                        iVar13 = g_CramMinPlacementX;
                        iVar17 = g_CramMinPlacementY;
                        if (local_78 != 0) {
                          iVar13 = g_CramMinPlacementY;
                          iVar17 = g_CramMinPlacementX;
                        }
                        iVar16 = g_CramPlacedTextureCount + -1;
                        if (-1 < iVar16) {
                          pCVar10 = g_CramSortedTextureEntries + iVar16;
                          do {
                            if (((pCVar10->assigned_map_number == iVar18) &&
                                (iVar12 < pCVar10->working_top)) &&
                               ((iVar21 < pCVar10->working_width &&
                                ((pCVar10->placement_bottom < iVar13 + iVar12 &&
                                 (pCVar10->working_right < iVar17 + iVar21)))))) break;
                            iVar16 = iVar16 + -1;
                            pCVar10 = pCVar10 + -1;
                          } while (-1 < iVar16);
                        }
                        if (iVar16 < 0) {
                          local_54->occupant = 0;
                          local_54->active_flag = 1;
                          local_54->map_id = iVar18;
                          local_54->start_x = iVar12;
                          local_54->start_y = iVar21;
                          local_54->end_x = iVar13 + iVar12;
                          local_54->orientation = local_78;
                          local_54->end_y = iVar17 + iVar21;
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
                iVar18 = this_ptr->assigned_map_number;
                iVar21 = this_ptr->working_width;
                if (0 < g_CramRectangleCount) {
                  iVar12 = 0;
                  do {
                    if (((iVar18 == *(int *)((int)&g_CramRectangles[0].map_id + iVar12)) &&
                        (local_80 == *(int *)((int)&g_CramRectangles[0].start_x + iVar12))) &&
                       (iVar21 == *(int *)((int)&g_CramRectangles[0].start_y + iVar12)))
                    goto LAB_00446df8;
                    iVar12 = iVar12 + 0x28;
                  } while (iVar12 < g_CramRectangleCount * 0x28);
                }
                local_4c = g_CramRectangles + g_CramRectangleCount;
                local_70 = 0;
                do {
                  iVar12 = g_CramMinPlacementY;
                  iVar13 = g_CramMinPlacementX;
                  if (local_70 != 0) {
                    iVar12 = g_CramMinPlacementX;
                    iVar13 = g_CramMinPlacementY;
                  }
                  iVar17 = g_CramPlacedTextureCount + -1;
                  if (-1 < iVar17) {
                    pCVar10 = g_CramSortedTextureEntries + iVar17;
                    do {
                      if (((pCVar10->assigned_map_number == iVar18) &&
                          (local_80 < pCVar10->working_top)) &&
                         ((iVar21 < pCVar10->working_width &&
                          ((pCVar10->placement_bottom < iVar13 + local_80 &&
                           (pCVar10->working_right < iVar12 + iVar21)))))) break;
                      iVar17 = iVar17 + -1;
                      pCVar10 = pCVar10 + -1;
                    } while (-1 < iVar17);
                  }
                  if (iVar17 < 0) {
                    local_4c->occupant = 0;
                    local_4c->active_flag = 1;
                    local_4c->map_id = iVar18;
                    local_4c->start_x = local_80;
                    local_4c->start_y = iVar21;
                    local_4c->end_y = iVar12 + iVar21;
                    local_4c->orientation = local_70;
                    local_4c->end_x = iVar13 + local_80;
                    g_CramRectangleCount = g_CramRectangleCount + 1;
                    local_4c = local_4c + 1;
                  }
                  local_70 = local_70 + 1;
                } while (local_70 < 2);
              }
            }
LAB_00446df8:
            if (this_ptr->working_width <= g_CramBestSolutionMetric2) {
              iVar18 = g_CramPlacedTextureCount + -2;
              local_6c = 0;
              if (-1 < iVar18) {
                pCVar10 = g_CramSortedTextureEntries + iVar18;
                do {
                  if ((((pCVar10->assigned_map_number == this_ptr->assigned_map_number) &&
                       (pCVar10->working_width <= this_ptr->working_width)) &&
                      (this_ptr->working_top < pCVar10->working_top)) &&
                     ((pCVar10->placement_bottom <
                       this_ptr->working_top + g_CramOptimalPlacement + -1 &&
                      (local_6c < pCVar10->working_width)))) {
                    local_6c = pCVar10->working_width;
                  }
                  iVar18 = iVar18 + -1;
                  pCVar10 = pCVar10 + -1;
                } while (-1 < iVar18);
              }
              if (local_6c < this_ptr->working_width) {
                local_24 = g_CramPlacedTextureCount + -2;
                if (-1 < local_24) {
                  local_44 = g_CramSortedTextureEntries + local_24;
                  do {
                    iVar18 = this_ptr->assigned_map_number;
                    if (((iVar18 == local_44->assigned_map_number) &&
                        (local_44->working_width <= this_ptr->working_width)) &&
                       ((iVar21 = this_ptr->working_top, iVar21 < local_44->working_top &&
                        (local_6c < local_44->working_width)))) {
                      iVar12 = local_44->working_width;
                      if (0 < g_CramRectangleCount) {
                        iVar13 = 0;
                        do {
                          if (((iVar18 == *(int *)((int)&g_CramRectangles[0].map_id + iVar13)) &&
                              (iVar21 == *(int *)((int)&g_CramRectangles[0].start_x + iVar13))) &&
                             (iVar12 == *(int *)((int)&g_CramRectangles[0].start_y + iVar13)))
                          goto LAB_00446f25;
                          iVar13 = iVar13 + 0x28;
                        } while (iVar13 < g_CramRectangleCount * 0x28);
                      }
                      local_64 = 0;
                      local_48 = g_CramRectangles + g_CramRectangleCount;
                      do {
                        iVar13 = g_CramMinPlacementX;
                        iVar17 = g_CramMinPlacementY;
                        if (local_64 != 0) {
                          iVar13 = g_CramMinPlacementY;
                          iVar17 = g_CramMinPlacementX;
                        }
                        iVar16 = g_CramPlacedTextureCount + -1;
                        if (-1 < iVar16) {
                          pCVar10 = g_CramSortedTextureEntries + iVar16;
                          do {
                            if (((pCVar10->assigned_map_number == iVar18) &&
                                (iVar21 < pCVar10->working_top)) &&
                               ((iVar12 < pCVar10->working_width &&
                                ((pCVar10->placement_bottom < iVar13 + iVar21 &&
                                 (pCVar10->working_right < iVar17 + iVar12)))))) break;
                            iVar16 = iVar16 + -1;
                            pCVar10 = pCVar10 + -1;
                          } while (-1 < iVar16);
                        }
                        if (iVar16 < 0) {
                          local_48->occupant = 0;
                          local_48->active_flag = 1;
                          local_48->map_id = iVar18;
                          local_48->start_x = iVar21;
                          local_48->start_y = iVar12;
                          local_48->end_x = iVar13 + iVar21;
                          local_48->orientation = local_64;
                          local_48->end_y = iVar17 + iVar12;
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
                iVar18 = this_ptr->assigned_map_number;
                iVar21 = this_ptr->working_top;
                if (0 < g_CramRectangleCount) {
                  iVar12 = 0;
                  do {
                    if (((iVar18 == *(int *)((int)&g_CramRectangles[0].map_id + iVar12)) &&
                        (iVar21 == *(int *)((int)&g_CramRectangles[0].start_x + iVar12))) &&
                       (local_6c == *(int *)((int)&g_CramRectangles[0].start_y + iVar12)))
                    goto LAB_00446f96;
                    iVar12 = iVar12 + 0x28;
                  } while (iVar12 < g_CramRectangleCount * 0x28);
                }
                local_40 = g_CramRectangles + g_CramRectangleCount;
                local_5c = 0;
                do {
                  iVar12 = g_CramMinPlacementY;
                  iVar13 = g_CramMinPlacementX;
                  if (local_5c != 0) {
                    iVar12 = g_CramMinPlacementX;
                    iVar13 = g_CramMinPlacementY;
                  }
                  iVar17 = g_CramPlacedTextureCount + -1;
                  if (-1 < iVar17) {
                    pCVar10 = g_CramSortedTextureEntries + iVar17;
                    do {
                      if (((pCVar10->assigned_map_number == iVar18) &&
                          (iVar21 < pCVar10->working_top)) &&
                         ((local_6c < pCVar10->working_width &&
                          ((pCVar10->placement_bottom < iVar13 + iVar21 &&
                           (pCVar10->working_right < iVar12 + local_6c)))))) break;
                      iVar17 = iVar17 + -1;
                      pCVar10 = pCVar10 + -1;
                    } while (-1 < iVar17);
                  }
                  if (iVar17 < 0) {
                    local_40->occupant = 0;
                    local_40->active_flag = 1;
                    local_40->map_id = iVar18;
                    local_40->start_x = iVar21;
                    local_40->start_y = local_6c;
                    local_40->end_y = iVar12 + local_6c;
                    local_40->orientation = local_5c;
                    local_40->end_x = iVar13 + iVar21;
                    g_CramRectangleCount = g_CramRectangleCount + 1;
                    local_40 = local_40 + 1;
                  }
                  local_5c = local_5c + 1;
                } while (local_5c < 2);
              }
            }
LAB_00446f96:
            if (g_CramVisualizationMode != 0) {
              shape_cramtex_cpp_visualizeTextureAtlas_FUN_00447f20(0,0);
            }
            iVar18 = shape_cramtex_cpp_CCramTex_runInteractiveAtlasGeneration_FUN_00446160
                               (g_CramSortedTextureEntries + g_CramPlacedTextureCount);
            if (0 < iVar18) {
              iVar18 = iVar18 + -1;
            }
            g_CramRectangleCount = iVar20;
            if (0 < iVar20) {
              iVar21 = 0;
              do {
                if (this_ptr == *(CCramTex **)((int)&g_CramRectangles[0].occupant + iVar21)) {
                  *(uint *)((int)&g_CramRectangles[0].occupant + iVar21) = 0;
                }
                iVar21 = iVar21 + 0x28;
              } while (iVar21 < iVar20 * 0x28);
            }
            if (g_CramVisualizationUpdateCounter < 100) {
              g_CramVisualizationUpdateCounter = g_CramVisualizationUpdateCounter + 1;
            }
            else {
              wincore_winrun_cpp_processWindowMessages_FUN_005f35e0();
              iVar20 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
              fVar8 = (float)(iVar20 - g_CramStartTime) * (float)8.4771050347222196e-07;
              g_CramStartTime = iVar20;
              if (0.0 < fVar8) {
                g_CramIterationCount = (int)((float)g_CramIterationCount + fVar8);
              }
              while (iVar20 = wincore_winrun_cpp_wasKeyPressed_FUN_005f2f00(), iVar20 != 0) {
                uVar14 = wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
                uVar14 = uVar14 & 0xff;
                if (uVar14 == 0x1b) goto LAB_00447500;
                if ((((uVar14 == 0x2e) || (uVar14 == 0x3e)) || (uVar14 == 0x6e)) || (uVar14 == 0x4e)
                   ) {
                  g_CramMapNumber = g_CramMapNumber + 1;
                }
                if (((uVar14 == 0x2c) || (uVar14 == 0x3c)) || ((uVar14 == 0x70 || (uVar14 == 0x50)))
                   ) {
                  g_CramMapNumber = g_CramMapNumber + g_CramTotalMaps + -1;
                }
                if ((uVar14 == 0x73) || (uVar14 == 0x53)) {
                  g_CramDebugStepMode = (int)(g_CramDebugStepMode == 0);
                }
                if ((uVar14 == 0x74) || (uVar14 == 0x54)) {
                  g_CramVisualizationMode = (int)(g_CramVisualizationMode == 0);
                  shape_cramtex_cpp_visualizeTextureAtlas_FUN_00447f20(1,0);
                }
                else {
                  shape_cramtex_cpp_visualizeTextureAtlas_FUN_00447f20(1,0);
                }
              }
              if ((0 < g_CramMaxIterationsLimit) &&
                 ((float)g_CramMaxIterationsLimit < (float)g_CramIterationCount)) {
LAB_00447500:
                engine_2d_c_clearInputAndWait_FUN_00403260();
                g_CramCandidateWriteCursor = ppSVar23;
                g_CramPlacedTextureCount = g_CramPlacedTextureCount + -1;
                return 999999;
              }
              g_CramVisualizationUpdateCounter = 0;
            }
            if (iVar18 != 0) {
              g_CramCandidateWriteCursor = ppSVar23;
              g_CramPlacedTextureCount = g_CramPlacedTextureCount + -1;
              return iVar18;
            }
          }
          local_3c = local_3c + 1;
          local_88 = local_88 + 1;
        } while (local_88 < (int)local_a8);
      }
    }
    else {
      pSVar19 = *local_3c;
      this_ptr->assigned_map_number = pSVar19->map_id;
      this_ptr->placement_flags = pSVar19->orientation;
      this_ptr->placement_bottom = pSVar19->start_x;
      this_ptr->working_right = pSVar19->start_y;
      if (this_ptr->placement_flags == 0) {
        this_ptr->effective_width = this_ptr->padded_width;
        iVar20 = this_ptr->padded_height;
      }
      else {
        this_ptr->effective_width = this_ptr->padded_height;
        iVar20 = this_ptr->padded_width;
      }
      this_ptr->effective_height = iVar20;
      this_ptr->working_top = this_ptr->placement_bottom + this_ptr->effective_width;
      iVar20 = g_CramPlacedTextureCount;
      iVar21 = 0;
      this_ptr->working_width = this_ptr->working_right + this_ptr->effective_height;
      iVar18 = 0;
      if (0 < iVar20) {
        pCVar10 = g_CramSortedTextureEntries;
        do {
          if (iVar18 < pCVar10->working_top) {
            iVar18 = pCVar10->working_top;
          }
          if (iVar18 < pCVar10->working_width) {
            iVar18 = pCVar10->working_width;
          }
          iVar21 = iVar21 + 1;
          pCVar10 = pCVar10 + 1;
        } while (iVar21 < g_CramPlacedTextureCount);
      }
      p_Var11 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                          ("..\\shape\\cramlog.txt",(char *)0x0,"at",
                           "..\\shape\\cramtex.cpp",0x30d);
      if (p_Var11 != (_FILE *)0x0) {
        _fprintf(p_Var11,"New best solution found!  thisSquareSize = %d\n",iVar18);
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var11,"..\\shape\\cramtex.cpp",0x310);
      }
      if (iVar18 < g_CramBestSolutionMetric1) {
        iVar20 = 0;
        g_CramCurrentAcceptableSize = iVar18;
        if (0 < g_CramPlacedTextureCount) {
          pCVar10 = g_CramSortedTextureEntries;
          do {
            pCVar10->working_map_id = pCVar10->assigned_map_number;
            pCVar10->rotation_applied = pCVar10->placement_flags;
            pCVar10->final_left = pCVar10->placement_bottom;
            pCVar10->final_top = pCVar10->working_right;
            pCVar10->final_right = pCVar10->working_top;
            iVar18 = g_CramPlacedTextureCount;
            iVar20 = iVar20 + 1;
            pCVar10->final_bottom = pCVar10->working_width;
            pCVar10 = pCVar10 + 1;
          } while (iVar20 < iVar18);
        }
        if (g_CramFillGaps != 0) {
          do {
            bVar22 = false;
            local_9c = 0;
            if (0 < g_CramTextureCount) {
              local_58 = g_CramSortedTextureEntries;
              do {
                while( true ) {
                  iVar20 = 0;
                  if ((local_58->final_bottom < g_CramCurrentAcceptableSize) &&
                     (iVar18 = shape_cramtex_cpp_CCramTex_findLowestOverlappingY_FUN_00447930
                                         (local_58), g_CramCurrentAcceptableSize <= iVar18)) {
                    iVar20 = iVar18 - local_58->final_bottom;
                    local_58->final_bottom = local_58->final_bottom + iVar20;
                    local_58->final_top = local_58->final_top + iVar20;
                  }
                  if ((local_58->final_right < g_CramCurrentAcceptableSize) &&
                     (iVar18 = shape_cramtex_cpp_CCramTex_findLeftmostOverlappingX_FUN_00447a10
                                         (local_58), g_CramCurrentAcceptableSize <= iVar18)) {
                    iVar20 = iVar18 - local_58->final_right;
                    local_58->final_left = local_58->final_left + iVar20;
                    local_58->final_right = local_58->final_right + iVar20;
                  }
                  if (iVar20 < 1) break;
                  bVar22 = true;
                }
                local_58 = local_58 + 1;
                local_9c = local_9c + 1;
              } while (local_9c < g_CramTextureCount);
            }
          } while (bVar22);
          local_98 = 0;
          do {
            iVar20 = 0;
            bVar22 = false;
            if (0 < g_CramTextureCount) {
              pCVar10 = g_CramSortedTextureEntries;
              do {
                iVar21 = shape_cramtex_cpp_CCramTex_findRightmostOverlappingX_FUN_004479a0(pCVar10);
                iVar18 = pCVar10->final_left;
                iVar12 = shape_cramtex_cpp_CCramTex_findLeftmostOverlappingX_FUN_00447a10(pCVar10);
                iVar18 = ((iVar21 - iVar18) + (iVar12 - pCVar10->final_right)) / 2;
                if (iVar18 != 0) {
                  bVar22 = true;
                  pCVar10->final_left = pCVar10->final_left + iVar18;
                  pCVar10->final_right = pCVar10->final_right + iVar18;
                }
                iVar21 = shape_cramtex_cpp_CCramTex_findHighestOverlappingY_FUN_004478c0(pCVar10);
                iVar18 = pCVar10->final_top;
                iVar12 = shape_cramtex_cpp_CCramTex_findLowestOverlappingY_FUN_00447930(pCVar10);
                iVar18 = ((iVar21 - iVar18) + (iVar12 - pCVar10->final_bottom)) / 2;
                if (iVar18 != 0) {
                  bVar22 = true;
                  pCVar10->final_top = pCVar10->final_top + iVar18;
                  pCVar10->final_bottom = pCVar10->final_bottom + iVar18;
                }
                iVar20 = iVar20 + 1;
                pCVar10 = pCVar10 + 1;
              } while (iVar20 < g_CramTextureCount);
            }
          } while ((bVar22) && (local_98 = local_98 + 1, local_98 < 10));
          local_38 = 0;
          do {
            if ((local_38 & 1) == 0) {
              iVar20 = 0;
              local_8c = 1;
              iVar18 = g_CramTextureCount;
            }
            else {
              local_8c = -1;
              iVar20 = g_CramTextureCount + -1;
              iVar18 = -1;
            }
            for (; iVar20 != iVar18; iVar20 = iVar20 + local_8c) {
              pCVar10 = g_CramSortedTextureEntries + iVar20;
              iVar21 = shape_cramtex_cpp_CCramTex_findRightmostOverlappingX_FUN_004479a0(pCVar10);
              g_CramSortedTextureEntries[iVar20].final_left =
                   (g_CramSortedTextureEntries[iVar20].final_left + iVar21) / 2;
              iVar21 = shape_cramtex_cpp_CCramTex_findHighestOverlappingY_FUN_004478c0(pCVar10);
              g_CramSortedTextureEntries[iVar20].final_top =
                   (g_CramSortedTextureEntries[iVar20].final_top + iVar21) / 2;
              iVar21 = shape_cramtex_cpp_CCramTex_findLeftmostOverlappingX_FUN_00447a10(pCVar10);
              g_CramSortedTextureEntries[iVar20].final_right =
                   (iVar21 + g_CramSortedTextureEntries[iVar20].final_right + 1) / 2;
              iVar21 = shape_cramtex_cpp_CCramTex_findLowestOverlappingY_FUN_00447930(pCVar10);
              g_CramSortedTextureEntries[iVar20].final_bottom =
                   (iVar21 + g_CramSortedTextureEntries[iVar20].final_bottom + 1) / 2;
            }
            local_38 = local_38 + 1;
          } while ((int)local_38 < 10);
          iVar20 = 0;
          if (0 < g_CramTextureCount) {
            pCVar10 = g_CramSortedTextureEntries;
            do {
              do {
                iVar18 = shape_cramtex_cpp_CCramTex_findHighestOverlappingY_FUN_004478c0(pCVar10);
                iVar18 = pCVar10->final_top - iVar18;
                pCVar10->final_bottom = pCVar10->final_bottom - iVar18;
                pCVar10->final_top = pCVar10->final_top - iVar18;
                iVar18 = shape_cramtex_cpp_CCramTex_findRightmostOverlappingX_FUN_004479a0(pCVar10);
                iVar18 = pCVar10->final_left - iVar18;
                pCVar10->final_right = pCVar10->final_right - iVar18;
                pCVar10->final_left = pCVar10->final_left - iVar18;
              } while (0 < iVar18);
              iVar20 = iVar20 + 1;
              pCVar10 = pCVar10 + 1;
            } while (iVar20 < g_CramTextureCount);
          }
          iVar20 = 0;
          if (0 < g_CramTextureCount) {
            pCVar10 = g_CramSortedTextureEntries;
            do {
              iVar18 = shape_cramtex_cpp_CCramTex_findLeftmostOverlappingX_FUN_00447a10(pCVar10);
              iVar20 = iVar20 + 1;
              pCVar10->final_right = iVar18;
              iVar21 = shape_cramtex_cpp_CCramTex_findLowestOverlappingY_FUN_00447930(pCVar10);
              iVar18 = g_CramTextureCount;
              pCVar10->final_bottom = iVar21;
              pCVar10 = pCVar10 + 1;
            } while (iVar20 < iVar18);
          }
        }
        shape_cramtex_cpp_visualizeTextureAtlas_FUN_00447f20(1,0);
        p_Var11 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                            ("..\\shape\\cramlog.txt",(char *)0x0,"at",
                             "..\\shape\\cramtex.cpp",0x359);
        if (p_Var11 != (_FILE *)0x0) {
          _fprintf(p_Var11,"Checking if solution acceptable.\n");
          _fprintf(p_Var11,"  bestSquareSize = %d, acceptableSize = %d\n",g_CramCurrentAcceptableSize,
                     g_CramAcceptableSize);
          shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var11,"..\\shape\\cramtex.cpp",0x35d);
        }
        if (g_CramCurrentAcceptableSize <= g_CramAcceptableSize) {
          g_CramCandidateWriteCursor = ppSVar23;
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
              if (pSVar19->start_x + g_CramMinPlacementX < g_CramBestSolutionMetric1) {
                iVar18 = pSVar19->start_y + g_CramMinPlacementY;
                goto joined_r0x00446b0b;
              }
LAB_00446a27:
              pSVar19->occupant = g_CramInvalidMarker;
            }
            else {
              if (g_CramBestSolutionMetric1 <= pSVar19->start_x + g_CramMinPlacementY)
              goto LAB_00446a27;
              iVar18 = pSVar19->start_y + g_CramMinPlacementX;
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
              g_CramCandidateWriteCursor = ppSVar23;
              g_CramPlacedTextureCount = g_CramPlacedTextureCount + -1;
              return g_CramPlacedTextureCount - iVar20;
            }
            iVar18 = iVar18 + 0x4c;
            iVar20 = iVar20 + 1;
          } while (iVar18 < g_CramPlacedTextureCount * 0x4c);
        }
      }
      else {
        p_Var11 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                            ("..\\shape\\cramlog.txt",(char *)0x0,"at",
                             "..\\shape\\cramtex.cpp",0x318);
        if (p_Var11 != (_FILE *)0x0) {
          _fprintf(p_Var11,"\n\nCRAMTEX BUG!\n");
          _fprintf(p_Var11,"bestSquareSize = %d, thisSquareSize = %d, mustBeatSquareSize = %d\n",g_CramCurrentAcceptableSize,iVar18,
                     g_CramBestSolutionMetric1);
          _fprintf(p_Var11,"acceptableSize = %d\n",g_CramAcceptableSize)
          ;
          _fprintf(p_Var11,"targetPadSize = %d\n",g_CramPaddingSize);
          _fprintf(p_Var11,"pad = %d\n",g_CramPaddingCalculation);
          _fprintf(p_Var11,"Best:\n");
          if (0 < g_CramTextureCount) {
            pCVar10 = g_CramSortedTextureEntries;
            iVar20 = 0;
            do {
              piVar1 = &pCVar10->rotation_applied;
              piVar2 = &pCVar10->final_bottom;
              piVar3 = &pCVar10->final_right;
              piVar4 = &pCVar10->final_top;
              piVar5 = &pCVar10->final_left;
              piVar6 = &pCVar10->working_map_id;
              piVar7 = &pCVar10->height;
              piVar9 = &pCVar10->width;
              pCVar10 = pCVar10 + 1;
              iVar18 = iVar20 + 1;
              _fprintf(p_Var11,"%3d: %5dx%-5d  Map %d (%5d,%-5d)-(%5d,%-5d)    Rotated: %d\n",iVar20,*piVar9,*piVar7,*piVar6,
                         *piVar5,*piVar4,*piVar3,*piVar2,*piVar1);
              iVar20 = iVar18;
            } while (iVar18 < g_CramTextureCount);
          }
          _fprintf(p_Var11,"Current:\n");
          if (0 < g_CramTextureCount) {
            pCVar10 = g_CramSortedTextureEntries;
            iVar20 = 0;
            do {
              piVar1 = &pCVar10->rotation_applied;
              piVar2 = &pCVar10->working_width;
              piVar3 = &pCVar10->working_top;
              piVar4 = &pCVar10->working_right;
              piVar5 = &pCVar10->placement_bottom;
              piVar6 = &pCVar10->assigned_map_number;
              piVar7 = &pCVar10->height;
              piVar9 = &pCVar10->width;
              pCVar10 = pCVar10 + 1;
              iVar18 = iVar20 + 1;
              _fprintf(p_Var11,"%3d: %5dx%-5d  Map %d (%5d,%-5d)-(%5d,%-5d)    Rotated: %d\n",iVar20,*piVar9,*piVar7,*piVar6,
                         *piVar5,*piVar4,*piVar3,*piVar2,*piVar1);
              iVar20 = iVar18;
            } while (iVar18 < g_CramTextureCount);
          }
          shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var11,"..\\shape\\cramtex.cpp",0x32f);
        }
      }
    }
    g_CramPlacedTextureCount = g_CramPlacedTextureCount + -1;
  }
  g_CramCandidateWriteCursor = ppSVar23;
  return 0;
}
