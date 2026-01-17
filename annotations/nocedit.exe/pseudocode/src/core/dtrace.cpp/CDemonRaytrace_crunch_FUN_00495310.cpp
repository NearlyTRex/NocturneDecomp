// Name: core_dtrace.cpp_CDemonRaytrace_crunch_FUN_00495310
// Address: 00495310
// Address Range: [[00495310, 00495a98]]
// Convention: __cdecl
// Signature: void core_dtrace.cpp_CDemonRaytrace_crunch_FUN_00495310(CDemonRaytrace * this_ptr, float cube_size)

#include "nocturne.h"

void __cdecl
core_dtrace_cpp_CDemonRaytrace_crunch_FUN_00495310(CDemonRaytrace *this_ptr,float cube_size)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  CDemonTriangle *vertex1;
  int iVar5;
  char **ppcVar6;
  float *pfVar7;
  char **ppcVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  double dVar12;
  uint uVar13;
  int local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  CVector3f local_b4;
  float local_a8;
  float local_a4;
  float local_a0;
  CVector3f local_9c;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float *local_6c;
  float local_68;
  int *local_64;
  float local_60;
  float local_5c;
  float local_58;
  int *local_54;
  int *local_50;
  int *local_4c;
  int *local_48;
  int *local_44;
  int *local_40;
  char **local_3c;
  char **local_38;
  float local_34;
  int *local_30;
  int *local_2c;
  int *local_28;
  int *local_24;
  int local_20;
  CDemonCube *local_1c;
  int local_18;
  char **local_14;
  
  fVar9 = (float10)1 / (float10)cube_size;
  dVar12 = crt_math_c_round_FUN_005fe6b0
                     ((double)(((float10)(this_ptr->bbox_max).x - (float10)(this_ptr->bbox_min).x) *
                              fVar9));
  local_14 = (char **)(int)ROUND(dVar12);
  (this_ptr->grid_coord).x = (int)local_14 + 1;
  fVar10 = ((float10)(this_ptr->bbox_max).x - (float10)(this_ptr->bbox_min).x) /
           (float10)(this_ptr->grid_coord).x;
  dVar12 = crt_math_c_round_FUN_005fe6b0
                     ((double)(((float10)(this_ptr->bbox_max).y - (float10)(this_ptr->bbox_min).y) *
                              fVar9));
  local_14 = (char **)(int)ROUND(dVar12);
  (this_ptr->grid_coord).y = (int)local_14 + 1;
  fVar11 = ((float10)(this_ptr->bbox_max).y - (float10)(this_ptr->bbox_min).y) /
           (float10)(this_ptr->grid_coord).y;
  uVar13 = 0x495382;
  dVar12 = crt_math_c_round_FUN_005fe6b0
                     ((double)(((float10)(this_ptr->bbox_max).z - (float10)(this_ptr->bbox_min).z) *
                              fVar9));
  local_14 = (char **)(int)ROUND(dVar12);
  fVar1 = (this_ptr->bbox_max).z;
  fVar2 = (this_ptr->bbox_min).z;
  (this_ptr->grid_coord).z = (int)local_14 + 1;
  iVar5 = (this_ptr->grid_coord).z;
  (this_ptr->cell_size).x = (float)fVar10;
  (this_ptr->cell_size).y = (float)fVar11;
  (this_ptr->cell_size).z = (fVar1 - fVar2) / (float)iVar5;
  local_90 = (this_ptr->cell_size).x / 8.0f;
  local_8c = (this_ptr->cell_size).y * 0.125f;
  local_88 = 0.125f * (this_ptr->cell_size).z;
  if (&this_ptr->adjusted_size != (CVector3f *)&local_90) {
    (this_ptr->adjusted_size).x = local_90;
    (this_ptr->adjusted_size).y = local_8c;
    (this_ptr->adjusted_size).z = local_88;
  }
  core_dtrace_cpp_CDemonRaytrace_allocNewCubeList_FUN_00494380(this_ptr);
  iVar5 = this_ptr->triangle_count;
  piVar4 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                     (iVar5 * 0x1c + 4,"..\\core\\dtrace.cpp",0x2ed);
  local_44 = piVar4;
  if (piVar4 != (int *)0x0) {
    local_44 = piVar4 + 1;
    *piVar4 = iVar5;
  }
  if (local_44 == (int *)0x0) {
    g_CurrentFilename = "..\\core\\dtrace.cpp";
    g_CurrentLineNumber = 0x2ee;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonRaytrace::crunch - out of refList memory",uVar13);
  }
  iVar5 = 0;
  if (0 < this_ptr->triangle_count) {
    local_68 = 0.0;
    piVar4 = local_44;
    do {
      pfVar7 = (float *)((int)&(this_ptr->triangle_list->vertex1).x + (int)local_68);
      local_a8 = *pfVar7;
      local_a4 = pfVar7[1];
      local_a0 = pfVar7[2];
      local_6c = pfVar7 + 3;
      local_84 = *local_6c;
      local_80 = pfVar7[4];
      local_7c = pfVar7[5];
      local_78 = pfVar7[6];
      local_74 = pfVar7[7];
      local_70 = pfVar7[8];
      *piVar4 = iVar5;
      piVar4[4] = (int)local_a8;
      piVar4[1] = piVar4[4];
      piVar4[5] = (int)local_a4;
      piVar4[2] = piVar4[5];
      piVar4[6] = (int)local_a0;
      piVar4[3] = piVar4[6];
      if (local_84 < (float)piVar4[1]) {
        piVar4[1] = (int)local_84;
      }
      if ((float)piVar4[4] < local_84) {
        piVar4[4] = (int)local_84;
      }
      if (local_80 < (float)piVar4[2]) {
        piVar4[2] = (int)local_80;
      }
      if ((float)piVar4[5] < local_80) {
        piVar4[5] = (int)local_80;
      }
      if (local_7c < (float)piVar4[3]) {
        piVar4[3] = (int)local_7c;
      }
      if ((float)piVar4[6] < local_7c) {
        piVar4[6] = (int)local_7c;
      }
      if (local_78 < (float)piVar4[1]) {
        piVar4[1] = (int)local_78;
      }
      if ((float)piVar4[4] < local_78) {
        piVar4[4] = (int)local_78;
      }
      if (local_74 < (float)piVar4[2]) {
        piVar4[2] = (int)local_74;
      }
      if ((float)piVar4[5] < local_74) {
        piVar4[5] = (int)local_74;
      }
      if (local_70 < (float)piVar4[3]) {
        piVar4[3] = (int)local_70;
      }
      if ((float)piVar4[6] < local_70) {
        piVar4[6] = (int)local_70;
      }
      piVar4 = piVar4 + 7;
      iVar5 = iVar5 + 1;
      local_68 = (float)((int)local_68 + 0x38);
    } while (iVar5 < this_ptr->triangle_count);
  }
  shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
            (g_CEditorToolsPtr,"Cube crunch");
  local_3c = (char **)0x0;
  if (0 < (this_ptr->grid_coord).x) {
    do {
      local_14 = local_3c;
      local_9c.x = (float)(int)local_3c * (this_ptr->cell_size).x + (this_ptr->bbox_min).x;
      local_b4.x = local_9c.x + (this_ptr->cell_size).x;
      local_58 = (float)(this_ptr->triangle_count + -1);
      local_5c = 0.0;
      if (-1 < (int)local_58) {
        local_50 = local_44;
        local_4c = local_44 + (int)local_58 * 7;
        ppcVar8 = (char **)(local_44 + (int)local_58 * 7 + 1);
        do {
          piVar4 = local_50;
          local_48 = local_50;
          if ((local_b4.x < (float)local_50[1]) || ((float)local_50[4] < local_9c.x)) {
            local_54 = local_4c;
            ppcVar6 = (char **)(local_50 + 1);
            iVar5 = *local_50;
            core_charactr_cpp_CCharacter_setActorNameMaybe_FUN_0042fb00
                      ((CCharacter *)&local_e8,ppcVar6);
            core_charactr_cpp_CCharacter_setActorNameMaybe_FUN_0042faf0
                      ((CCharacter *)&local_e4,(char **)(piVar4 + 2));
            core_charactr_cpp_CCharacter_setActorNameMaybe_FUN_0042fae0
                      ((CCharacter *)&local_e0,(char **)(piVar4 + 3));
            local_14 = (char **)(local_48 + 4);
            core_charactr_cpp_CCharacter_setActorNameMaybe_FUN_0042fb00
                      ((CCharacter *)&local_dc,local_14);
            core_charactr_cpp_CCharacter_setActorNameMaybe_FUN_0042faf0
                      ((CCharacter *)&local_d8,local_14 + 1);
            core_charactr_cpp_CCharacter_setActorNameMaybe_FUN_0042fae0
                      ((CCharacter *)&local_d4,local_14 + 2);
            local_64 = local_4c;
            *local_48 = *local_4c;
            if (ppcVar6 != ppcVar8) {
              *ppcVar6 = *ppcVar8;
              piVar4[2] = (int)ppcVar8[1];
              piVar4[3] = (int)ppcVar8[2];
            }
            if (local_48 + 4 != local_4c + 4) {
              local_48[4] = local_4c[4];
              local_48[5] = local_4c[5];
              local_48[6] = local_4c[6];
            }
            *local_54 = iVar5;
            if (local_54 + 1 != &local_e8) {
              local_54[1] = local_e8;
              local_54[2] = local_e4;
              local_54[3] = local_e0;
            }
            if (local_54 + 4 != &local_dc) {
              local_54[4] = local_dc;
              local_54[5] = local_d8;
              local_54[6] = local_d4;
            }
            ppcVar8 = ppcVar8 + -7;
            local_4c = local_4c + -7;
            local_58 = (float)((int)local_58 + -1);
          }
          else {
            local_5c = (float)((int)local_5c + 1);
            local_50 = local_50 + 7;
          }
        } while ((int)local_5c <= (int)local_58);
      }
      local_38 = (char **)0x0;
      if (0 < (this_ptr->grid_coord).y) {
        local_60 = (float)((int)local_5c + -1);
        do {
          local_14 = local_38;
          local_18 = 0;
          local_9c.y = (float)(int)local_38 * (this_ptr->cell_size).y + (this_ptr->bbox_min).y;
          local_b4.y = local_9c.y + (this_ptr->cell_size).y;
          local_34 = local_60;
          if (-1 < (int)local_60) {
            local_28 = local_44;
            local_2c = local_44 + (int)local_60 * 7;
            ppcVar8 = (char **)(local_44 + (int)local_60 * 7 + 1);
            do {
              piVar4 = local_28;
              local_24 = local_28;
              if ((local_b4.y < (float)local_28[2]) || ((float)local_28[5] < local_9c.y)) {
                local_30 = local_2c;
                ppcVar6 = (char **)(local_28 + 1);
                local_d0 = *local_28;
                core_charactr_cpp_CCharacter_setActorNameMaybe_FUN_0042fb00
                          ((CCharacter *)&local_cc,ppcVar6);
                core_charactr_cpp_CCharacter_setActorNameMaybe_FUN_0042faf0
                          ((CCharacter *)&local_c8,(char **)(piVar4 + 2));
                core_charactr_cpp_CCharacter_setActorNameMaybe_FUN_0042fae0
                          ((CCharacter *)&local_c4,(char **)(piVar4 + 3));
                local_14 = (char **)(local_24 + 4);
                core_charactr_cpp_CCharacter_setActorNameMaybe_FUN_0042fb00
                          ((CCharacter *)&local_c0,local_14);
                core_charactr_cpp_CCharacter_setActorNameMaybe_FUN_0042faf0
                          ((CCharacter *)&local_bc,local_14 + 1);
                core_charactr_cpp_CCharacter_setActorNameMaybe_FUN_0042fae0
                          ((CCharacter *)&local_b8,local_14 + 2);
                local_40 = local_2c;
                *local_24 = *local_2c;
                if (ppcVar6 != ppcVar8) {
                  *ppcVar6 = *ppcVar8;
                  piVar4[2] = (int)ppcVar8[1];
                  piVar4[3] = (int)ppcVar8[2];
                }
                if (local_24 + 4 != local_2c + 4) {
                  local_24[4] = local_2c[4];
                  local_24[5] = local_2c[5];
                  local_24[6] = local_2c[6];
                }
                *local_30 = local_d0;
                if (local_30 + 1 != &local_cc) {
                  local_30[1] = local_cc;
                  local_30[2] = (int)local_c8;
                  local_30[3] = (int)local_c4;
                }
                if ((float *)(local_30 + 4) != &local_c0) {
                  local_30[4] = (int)local_c0;
                  local_30[5] = (int)local_bc;
                  local_30[6] = (int)local_b8;
                }
                ppcVar8 = ppcVar8 + -7;
                local_2c = local_2c + -7;
                local_34 = (float)((int)local_34 + -1);
              }
              else {
                local_18 = local_18 + 1;
                local_28 = local_28 + 7;
              }
            } while (local_18 <= (int)local_34);
          }
          local_20 = 0;
          if (0 < (this_ptr->grid_coord).z) {
            do {
              local_9c.z = (float)local_20 * (this_ptr->cell_size).z + (this_ptr->bbox_min).z;
              local_b4.z = local_9c.z + (this_ptr->cell_size).z;
              iVar5 = (this_ptr->grid_coord).y;
              iVar3 = (this_ptr->grid_coord).z;
              local_14 = (char **)((int)((int)local_3c * iVar5 + (int)local_38) * iVar3 + local_20);
              shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                        (g_CEditorToolsPtr,(float)(int)local_14,
                         (float)((this_ptr->grid_coord).x * iVar5 * iVar3));
              local_1c = this_ptr->cube_data +
                         (this_ptr->grid_coord).z * (int)local_3c * (this_ptr->grid_coord).y +
                         (int)local_38 * (this_ptr->grid_coord).z + local_20;
              iVar5 = 0;
              core_dcube_cpp_CDemonCube_setBounds_FUN_00456a90(local_1c,&local_9c,&local_b4);
              piVar4 = local_44;
              if (0 < local_18) {
                do {
                  vertex1 = this_ptr->triangle_list + *piVar4;
                  iVar5 = iVar5 + 1;
                  core_dcube_cpp_CDemonCube_clipTriangleToFrustum_FUN_00456af0
                            ((CDemonCubeFrustum *)local_1c,&vertex1->vertex1,&vertex1->vertex2,
                             &vertex1->vertex3,this_ptr->triangle_flags[*piVar4]);
                  piVar4 = piVar4 + 7;
                } while (iVar5 < local_18);
              }
              core_dcube_cpp_CDemonCube_buildGeometryFromPolygonData(local_1c);
              local_20 = local_20 + 1;
            } while (local_20 < (this_ptr->grid_coord).z);
          }
          local_38 = (char **)((int)local_38 + 1);
        } while ((int)local_38 < (this_ptr->grid_coord).y);
      }
      local_3c = (char **)((int)local_3c + 1);
    } while ((int)local_3c < (this_ptr->grid_coord).x);
  }
  shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
  core_dtrace_cpp_CDemonRaytrace_freeTriList_FUN_00494690(this_ptr);
  g_CurrentDebugFilename = "..\\core\\dtrace.cpp";
  g_CurrentDebugLine = 0x38c;
  if (local_44 != (int *)0x0) {
    crt_memory_c_free_FUN_005fe659(local_44 + -1);
    return;
  }
  return;
}
