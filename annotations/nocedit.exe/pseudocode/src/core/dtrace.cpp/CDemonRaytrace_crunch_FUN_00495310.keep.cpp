// Name: core_dtrace.cpp_CDemonRaytrace_crunch_FUN_00495310
// Address: 00495310
// MANUAL RECONSTRUCTION
// Address Range: [[00495310, 00495a98]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_crunch_FUN_00495310(CDemonRaytrace *this_ptr,float cube_size)

#include "nocturne.h"

void __cdecl core_dtrace_cpp_CDemonRaytrace_crunch_FUN_00495310(CDemonRaytrace *this_ptr,float cube_size)

{
  float fVar1;
  int iVar10;
  int *piVar8;
  CDemonTriangle *vertex1;
  int iVar9;
  STriangleBoundsEntry *pSVar13;
  CDemonTriangle *piVar11;
  int iVar15;
  STriangleBoundsEntry saved_x;
  STriangleBoundsEntry saved_y;
  CVector3f local_b4;
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
  int local_60;
  int local_5c;
  int local_58;
  STriangleBoundsEntry *local_54;
  STriangleBoundsEntry *local_50;
  STriangleBoundsEntry *local_4c;
  STriangleBoundsEntry *local_48;
  STriangleBoundsEntry *local_44;
  int local_3c;
  int local_38;
  int local_34;
  STriangleBoundsEntry *local_30;
  STriangleBoundsEntry *local_2c;
  STriangleBoundsEntry *local_28;
  STriangleBoundsEntry *local_24;
  int local_20;
  CDemonCube *local_1c;
  int local_18;
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
  fVar6 = (this_ptr->bbox_max).z;
  fVar7 = (this_ptr->bbox_min).z;
  (this_ptr->grid_coord).z =
       (int)ROUND(ROUND(((this_ptr->bbox_max).z - (this_ptr->bbox_min).z) * fVar1)) + 1;
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
                     (iVar15 * sizeof(STriangleBoundsEntry) + 4,"..\\core\\dtrace.cpp",0x2ed);
  local_44 = (STriangleBoundsEntry *)piVar8;
  if (piVar8 != (int *)0x0) {
    local_44 = (STriangleBoundsEntry *)(piVar8 + 1);
    *piVar8 = iVar15;
  }
  if (local_44 == (STriangleBoundsEntry *)0x0) {
    g_CurrentFilename = "..\\core\\dtrace.cpp";
    g_CurrentLineNumber = 0x2ee;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonRaytrace::crunch - out of refList memory");
  }
  iVar9 = 0;
  if (0 < this_ptr->triangle_count) {
    pSVar13 = local_44;
    do {
      piVar11 = &this_ptr->triangle_list[iVar9];
      local_84 = piVar11->vertex2.x;
      local_80 = piVar11->vertex2.y;
      local_7c = piVar11->vertex2.z;
      local_78 = piVar11->vertex3.x;
      local_74 = piVar11->vertex3.y;
      local_70 = piVar11->vertex3.z;
      pSVar13->triangle_index = iVar9;
      pSVar13->box.max = piVar11->vertex1;
      pSVar13->box.min = piVar11->vertex1;
      if (local_84 < (pSVar13->box.min).x) {
        (pSVar13->box.min).x = local_84;
      }
      if ((pSVar13->box.max).x < local_84) {
        (pSVar13->box.max).x = local_84;
      }
      if (local_80 < (pSVar13->box.min).y) {
        (pSVar13->box.min).y = local_80;
      }
      if ((pSVar13->box.max).y < local_80) {
        (pSVar13->box.max).y = local_80;
      }
      if (local_7c < (pSVar13->box.min).z) {
        (pSVar13->box.min).z = local_7c;
      }
      if ((pSVar13->box.max).z < local_7c) {
        (pSVar13->box.max).z = local_7c;
      }
      if (local_78 < (pSVar13->box.min).x) {
        (pSVar13->box.min).x = local_78;
      }
      if ((pSVar13->box.max).x < local_78) {
        (pSVar13->box.max).x = local_78;
      }
      if (local_74 < (pSVar13->box.min).y) {
        (pSVar13->box.min).y = local_74;
      }
      if ((pSVar13->box.max).y < local_74) {
        (pSVar13->box.max).y = local_74;
      }
      if (local_70 < (pSVar13->box.min).z) {
        (pSVar13->box.min).z = local_70;
      }
      if ((pSVar13->box.max).z < local_70) {
        (pSVar13->box.max).z = local_70;
      }
      pSVar13 = pSVar13 + 1;
      iVar9 = iVar9 + 1;
    } while (iVar9 < this_ptr->triangle_count);
  }
  shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
            (g_CEditorToolsPtr,"Cube crunch");
  local_3c = 0;
  if (0 < (this_ptr->grid_coord).x) {
    do {
      local_9c.x = (float)local_3c * (this_ptr->cell_size).x + (this_ptr->bbox_min).x;
      local_b4.x = local_9c.x + (this_ptr->cell_size).x;
      local_58 = this_ptr->triangle_count + -1;
      local_5c = 0;
      if (-1 < local_58) {
        local_50 = local_44;
        local_4c = local_44 + local_58;
        do {
          local_48 = local_50;
          if ((local_b4.x < local_50->box.min.x) || (local_50->box.max.x < local_9c.x)) {
            local_54 = local_4c;
            saved_x = *local_50;
            *local_48 = *local_4c;
            *local_54 = saved_x;
            local_4c = local_4c + -1;
            local_58 = local_58 + -1;
          }
          else {
            local_5c = local_5c + 1;
            local_50 = local_50 + 1;
          }
        } while (local_5c <= local_58);
      }
      local_38 = 0;
      if (0 < (this_ptr->grid_coord).y) {
        local_60 = local_5c + -1;
        do {
          local_18 = 0;
          local_9c.y = (float)local_38 * (this_ptr->cell_size).y + (this_ptr->bbox_min).y;
          local_b4.y = local_9c.y + (this_ptr->cell_size).y;
          local_34 = local_60;
          if (-1 < local_60) {
            local_28 = local_44;
            local_2c = local_44 + local_60;
            do {
              local_24 = local_28;
              if ((local_b4.y < local_28->box.min.y) || (local_28->box.max.y < local_9c.y)) {
                local_30 = local_2c;
                saved_y = *local_28;
                *local_24 = *local_2c;
                *local_30 = saved_y;
                local_2c = local_2c + -1;
                local_34 = local_34 + -1;
              }
              else {
                local_18 = local_18 + 1;
                local_28 = local_28 + 1;
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
              shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                        (g_CEditorToolsPtr,
                         (float)((local_3c * iVar15 + local_38) * iVar10 + local_20),
                         (float)((this_ptr->grid_coord).x * iVar15 * iVar10));
              local_1c = this_ptr->cube_data +
                         (this_ptr->grid_coord).z * local_3c * (this_ptr->grid_coord).y +
                         local_38 * (this_ptr->grid_coord).z + local_20;
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
          local_38 = local_38 + 1;
        } while (local_38 < (this_ptr->grid_coord).y);
      }
      local_3c = local_3c + 1;
    } while (local_3c < (this_ptr->grid_coord).x);
  }
  shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
  core_dtrace_cpp_CDemonRaytrace_freeTriList_FUN_00494690(this_ptr);
  g_CurrentDebugFilename = "..\\core\\dtrace.cpp";
  g_CurrentDebugLine = 0x38c;
  if (local_44 != (STriangleBoundsEntry *)0x0) {
    shape_memdbg_cpp_free_FUN_005fe659(piVar8);
    return;
  }
  return;
}
