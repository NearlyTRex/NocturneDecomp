// Name: core_dtrace.cpp_CDemonRaytrace_crunch_FUN_00495310
// Address: 00495310
// Address Range: [[00495310, 00495a98]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_crunch_FUN_00495310(CDemonRaytrace *this_ptr,float cube_size)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_dtrace_cpp_CDemonRaytrace_crunch_FUN_00495310(CDemonRaytrace *this_ptr,float cube_size)

{
  float fVar1;
  float fVar8;
  float fVar9;
  int iVar10;
  int *piVar12;
  int *piVar8;
  CDemonTriangle *vertex1;
  int iVar9;
  STriangleBoundsEntry *pSVar13;
  float *pfVar10;
  float *src;
  int *piVar11;
  CBoundingBox3D *pCVar14;
  float *pfVar12;
  int iVar15;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  int local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  CVector3f local_b4;
  int local_a8;
  int local_a4;
  int local_a0;
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
  int local_68;
  int *local_64;
  int local_60;
  int local_5c;
  int local_58;
  int *local_54;
  int *local_50;
  int *local_4c;
  int *local_48;
  STriangleBoundsEntry *local_44;
  int *local_40;
  float *local_3c;
  float *local_38;
  int local_34;
  int *local_30;
  int *local_2c;
  int *local_28;
  int *local_24;
  int local_20;
  CDemonCube *local_1c;
  int local_18;
  float *local_14;
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar7;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = 1.0 / cube_size;
  fVar2 = (this_ptr->bbox_max).x;
  fVar3 = (this_ptr->bbox_min).x;
  (this_ptr->grid_coord).x =
       (int)ROUND(ROUND(((this_ptr->bbox_max).x - (this_ptr->bbox_min).x) * fVar1)) + 1;
  fVar4 = (this_ptr->bbox_max).y;
  fVar5 = (this_ptr->bbox_min).y;
  (this_ptr->grid_coord).y =
       (int)ROUND(ROUND(((this_ptr->bbox_max).y - (this_ptr->bbox_min).y) * fVar1)) + 1;
  iVar15 = (this_ptr->grid_coord).y;
  local_14 = (float *)(int)ROUND(ROUND(((this_ptr->bbox_max).z - (this_ptr->bbox_min).z) * fVar1));
  fVar6 = (this_ptr->bbox_max).z;
  fVar7 = (this_ptr->bbox_min).z;
  (this_ptr->grid_coord).z = (int)local_14 + 1;
  iVar1 = (this_ptr->grid_coord).z;
  (this_ptr->cell_size).x = (fVar2 - fVar3) / (float)(this_ptr->grid_coord).x;
  (this_ptr->cell_size).y = (fVar4 - fVar5) / (float)iVar15;
  (this_ptr->cell_size).z = (fVar6 - fVar7) / (float)iVar1;
  local_90 = (this_ptr->cell_size).x / 8.0f;
  local_8c = (this_ptr->cell_size).y * 0.125f;
  local_88 = 0.125f * (this_ptr->cell_size).z;
  if (&this_ptr->adjusted_size != (CVector3f *)&local_90) {
    (this_ptr->adjusted_size).x = local_90;
    (this_ptr->adjusted_size).y = local_8c;
    (this_ptr->adjusted_size).z = local_88;
  }
  core_dtrace_cpp_CDemonRaytrace_allocNewCubeList_FUN_00494380(this_ptr);
  iVar15 = this_ptr->triangle_count;
  piVar8 = (int *)shape_memdbg_cpp_debugAllocTracked2_FUN_0050f1f0
                     (iVar15 * 0x1c + 4,"..\\core\\dtrace.cpp",749);
  local_44 = (STriangleBoundsEntry *)piVar8;
  if (piVar8 != (int *)0x0) {
    local_44 = (STriangleBoundsEntry *)(piVar8 + 1);
    *piVar8 = iVar15;
  }
  if (local_44 == (STriangleBoundsEntry *)0x0) {
    g_CurrentFilename = "..\\core\\dtrace.cpp";
    g_CurrentLineNumber = 750;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonRaytrace::crunch - out of refList memory");
  }
  iVar9 = 0;
  if (0 < this_ptr->triangle_count) {
    local_68 = 0;
    pSVar13 = local_44;
    do {
      piVar11 = (int *)((int)&(this_ptr->triangle_list->vertex1).x + local_68);
      fVar1 = (float)*piVar11;
      fVar8 = (float)piVar11[1];
      fVar9 = (float)piVar11[2];
      local_6c = (float *)(piVar11 + 3);
      local_84 = *local_6c;
      local_80 = (float)piVar11[4];
      local_7c = (float)piVar11[5];
      local_78 = (float)piVar11[6];
      local_74 = (float)piVar11[7];
      local_70 = (float)piVar11[8];
      pSVar13->triangle_index = iVar9;
      (pSVar13->box).max.x = fVar1;
      (pSVar13->box).min.x = (pSVar13->box).max.x;
      (pSVar13->box).max.y = fVar8;
      (pSVar13->box).min.y = (pSVar13->box).max.y;
      (pSVar13->box).max.z = fVar9;
      (pSVar13->box).min.z = (pSVar13->box).max.z;
      if (local_84 < (pSVar13->box).min.x) {
        (pSVar13->box).min.x = local_84;
      }
      if ((pSVar13->box).max.x < local_84) {
        (pSVar13->box).max.x = local_84;
      }
      if (local_80 < (pSVar13->box).min.y) {
        (pSVar13->box).min.y = local_80;
      }
      if ((pSVar13->box).max.y < local_80) {
        (pSVar13->box).max.y = local_80;
      }
      if (local_7c < (pSVar13->box).min.z) {
        (pSVar13->box).min.z = local_7c;
      }
      if ((pSVar13->box).max.z < local_7c) {
        (pSVar13->box).max.z = local_7c;
      }
      if (local_78 < (pSVar13->box).min.x) {
        (pSVar13->box).min.x = local_78;
      }
      if ((pSVar13->box).max.x < local_78) {
        (pSVar13->box).max.x = local_78;
      }
      if (local_74 < (pSVar13->box).min.y) {
        (pSVar13->box).min.y = local_74;
      }
      if ((pSVar13->box).max.y < local_74) {
        (pSVar13->box).max.y = local_74;
      }
      if (local_70 < (pSVar13->box).min.z) {
        (pSVar13->box).min.z = local_70;
      }
      if ((pSVar13->box).max.z < local_70) {
        (pSVar13->box).max.z = local_70;
      }
      pSVar13 = pSVar13 + 1;
      iVar9 = iVar9 + 1;
      local_68 = local_68 + 0x38;
    } while (iVar9 < this_ptr->triangle_count);
  }
  shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
            (g_CEditorToolsPtr,"Cube crunch");
  local_3c = (float *)0x0;
  if (0 < (this_ptr->grid_coord).x) {
    do {
      local_14 = local_3c;
      local_9c.x = (float)(int)local_3c * (this_ptr->cell_size).x + (this_ptr->bbox_min).x;
      local_b4.x = local_9c.x + (this_ptr->cell_size).x;
      local_58 = this_ptr->triangle_count + -1;
      local_5c = 0;
      if (-1 < local_58) {
        local_50 = &local_44->triangle_index;
        local_4c = &local_44[local_58].triangle_index;
        pCVar14 = &local_44[local_58].box;
        do {
          piVar12 = local_50;
          local_48 = local_50;
          if ((local_b4.x < (float)local_50[1]) || ((float)local_50[4] < local_9c.x)) {
            local_54 = local_4c;
            pfVar10 = (float *)(local_50 + 1);
            iVar15 = *local_50;
            core_charactr_cpp_copyFloat3_FUN_0042fb00(&local_e8,pfVar10);
            core_charactr_cpp_copyFloat2_FUN_0042faf0(&local_e4,(float *)(piVar12 + 2));
            core_charactr_cpp_copyFloat1_FUN_0042fae0(&local_e0,(float *)(piVar12 + 3));
            local_14 = (float *)(local_48 + 4);
            core_charactr_cpp_copyFloat3_FUN_0042fb00(&local_dc,local_14);
            core_charactr_cpp_copyFloat2_FUN_0042faf0(&local_d8,local_14 + 1);
            core_charactr_cpp_copyFloat1_FUN_0042fae0(&local_d4,local_14 + 2);
            local_64 = local_4c;
            *local_48 = *local_4c;
            if ((CBoundingBox3D *)pfVar10 != pCVar14) {
              *pfVar10 = (pCVar14->min).x;
              piVar12[2] = (int)(pCVar14->min).y;
              piVar12[3] = (int)(pCVar14->min).z;
            }
            if (local_48 + 4 != local_4c + 4) {
              local_48[4] = local_4c[4];
              local_48[5] = local_4c[5];
              local_48[6] = local_4c[6];
            }
            *local_54 = iVar15;
            if ((float *)(local_54 + 1) != &local_e8) {
              local_54[1] = (int)local_e8;
              local_54[2] = (int)local_e4;
              local_54[3] = (int)local_e0;
            }
            if ((float *)(local_54 + 4) != &local_dc) {
              local_54[4] = (int)local_dc;
              local_54[5] = (int)local_d8;
              local_54[6] = (int)local_d4;
            }
            pCVar14 = (CBoundingBox3D *)((int)(pCVar14 + -2) + 0x14);
            local_4c = local_4c + -7;
            local_58 = local_58 + -1;
          }
          else {
            local_5c = local_5c + 1;
            local_50 = local_50 + 7;
          }
        } while (local_5c <= local_58);
      }
      local_38 = (float *)0x0;
      if (0 < (this_ptr->grid_coord).y) {
        local_60 = local_5c + -1;
        do {
          local_14 = local_38;
          local_18 = 0;
          local_9c.y = (float)(int)local_38 * (this_ptr->cell_size).y + (this_ptr->bbox_min).y;
          local_b4.y = local_9c.y + (this_ptr->cell_size).y;
          local_34 = local_60;
          if (-1 < local_60) {
            local_28 = &local_44->triangle_index;
            local_2c = &local_44[local_60].triangle_index;
            pfVar12 = (float *)&local_44[local_60].box;
            do {
              piVar12 = local_28;
              local_24 = local_28;
              if ((local_b4.y < (float)local_28[2]) || ((float)local_28[5] < local_9c.y)) {
                local_30 = local_2c;
                src = (float *)(local_28 + 1);
                local_d0 = *local_28;
                core_charactr_cpp_copyFloat3_FUN_0042fb00(&local_cc,src);
                core_charactr_cpp_copyFloat2_FUN_0042faf0(&local_c8,(float *)(piVar12 + 2));
                core_charactr_cpp_copyFloat1_FUN_0042fae0(&local_c4,(float *)(piVar12 + 3));
                local_14 = (float *)(local_24 + 4);
                core_charactr_cpp_copyFloat3_FUN_0042fb00(&local_c0,local_14);
                core_charactr_cpp_copyFloat2_FUN_0042faf0(&local_bc,local_14 + 1);
                core_charactr_cpp_copyFloat1_FUN_0042fae0(&local_b8,local_14 + 2);
                local_40 = local_2c;
                *local_24 = *local_2c;
                if (src != pfVar12) {
                  *src = (((CBoundingBox3D *)pfVar12)->min).x;
                  piVar12[2] = (int)(((CBoundingBox3D *)pfVar12)->min).y;
                  piVar12[3] = (int)(((CBoundingBox3D *)pfVar12)->min).z;
                }
                if (local_24 + 4 != local_2c + 4) {
                  local_24[4] = local_2c[4];
                  local_24[5] = local_2c[5];
                  local_24[6] = local_2c[6];
                }
                *local_30 = local_d0;
                if ((float *)(local_30 + 1) != &local_cc) {
                  local_30[1] = (int)local_cc;
                  local_30[2] = (int)local_c8;
                  local_30[3] = (int)local_c4;
                }
                if ((float *)(local_30 + 4) != &local_c0) {
                  local_30[4] = (int)local_c0;
                  local_30[5] = (int)local_bc;
                  local_30[6] = (int)local_b8;
                }
                pfVar12 = (float *)((int)pfVar12 + -0x30) + 5;
                local_2c = local_2c + -7;
                local_34 = local_34 + -1;
              }
              else {
                local_18 = local_18 + 1;
                local_28 = local_28 + 7;
              }
            } while (local_18 <= local_34);
          }
          local_20 = 0;
          if (0 < (this_ptr->grid_coord).z) {
            do {
              local_9c.z = (float)local_20 * (this_ptr->cell_size).z + (this_ptr->bbox_min).z;
              local_b4.z = local_9c.z + (this_ptr->cell_size).z;
              iVar15 = (this_ptr->grid_coord).y;
              iVar10 = (this_ptr->grid_coord).z;
              local_14 = (float *)((int)((int)local_3c * iVar15 + (int)local_38) * iVar10 + local_20
                                  );
              shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                        (g_CEditorToolsPtr,(float)(int)local_14,
                         (float)((this_ptr->grid_coord).x * iVar15 * iVar10));
              local_1c = this_ptr->cube_data +
                         (this_ptr->grid_coord).z * (int)local_3c * (this_ptr->grid_coord).y +
                         (int)local_38 * (this_ptr->grid_coord).z + local_20;
              iVar15 = 0;
              core_dcube_cpp_CDemonCube_setBounds_FUN_00456a90(local_1c,&local_9c,&local_b4);
              pSVar13 = local_44;
              if (0 < local_18) {
                do {
                  vertex1 = this_ptr->triangle_list + pSVar13->triangle_index;
                  iVar15 = iVar15 + 1;
                  core_dcube_cpp_CDemonCube_clipTriangleToFrustum_FUN_00456af0
                            (local_1c,&vertex1->vertex1,&vertex1->vertex2,&vertex1->vertex3,
                             this_ptr->triangle_flags[pSVar13->triangle_index]);
                  pSVar13 = pSVar13 + 1;
                } while (iVar15 < local_18);
              }
              core_dcube_cpp_CDemonCube_buildGeometryFromPolygonData_FUN_00456ed0(local_1c);
              local_20 = local_20 + 1;
            } while (local_20 < (this_ptr->grid_coord).z);
          }
          local_38 = (float *)((int)local_38 + 1);
        } while ((int)local_38 < (this_ptr->grid_coord).y);
      }
      local_3c = (float *)((int)local_3c + 1);
    } while ((int)local_3c < (this_ptr->grid_coord).x);
  }
  shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
  core_dtrace_cpp_CDemonRaytrace_freeTriList_FUN_00494690(this_ptr);
  g_CurrentDebugFilename = "..\\core\\dtrace.cpp";
  g_CurrentDebugLine = 0x38c;
  if (local_44 != (STriangleBoundsEntry *)0x0) {
    shape_memdbg_cpp_free_FUN_005fe659(&local_44[-1].box.max.z);
    return;
  }
  return;
}
