// Name: core_path.cpp_CPathMap_findPathToDestination_FUN_00547320
// Address: 00547320
// MANUAL RECONSTRUCTION
// Address Range: [[00547320, 00547bfe] [0061082c, 00610849]]
// Convention: __cdecl
// Signature: int __cdecl core_path_cpp_CPathMap_findPathToDestination_FUN_00547320(CPathMap *this_ptr,CVector3f *dest_position,CVector3f *out_euler_angles,int direction_hint)

#include "nocturne.h"

int __cdecl core_path_cpp_CPathMap_findPathToDestination_FUN_00547320(CPathMap *this_ptr,CVector3f *dest_position,CVector3f *out_euler_angles,int direction_hint)

{
  CVector3f *pCVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  CVector3f *in_direction_vector;
  CVector3f local_118;
  CVector3f local_10c;
  CVector3f local_100;
  CVector3f local_f4;
  CVector3f local_e8;
  CVector3f local_dc;
  CVector3f local_d0;
  CVector3f local_c4;
  CVector3f local_b8;
  uint local_ac;
  uint local_a4;
  int local_a0;
  uint local_9c;
  int local_98;
  CVector3f local_94;
  CVector3f local_88;
  float local_7c;
  float local_78;
  float local_74;
  CVector3f local_70;
  CVector3f local_64;
  CVector3i local_58;
  CVector3f local_4c;
  CVector3f local_40;
  float local_34;
  float local_30;
  float local_2c;
  CVector3f local_28;
  uint local_1c;
  uint local_18;
  int local_14;

  core_dtrace_cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00499880
            (&g_CDemonRaytraceInstance,dest_position,&local_58);
  (this_ptr->dest_voxel_coords).x = local_58.x;
  (this_ptr->dest_voxel_coords).y = local_58.y;
  (this_ptr->dest_voxel_coords).z = local_58.z;
  local_a0 = 0;
  local_9c = 0;
  local_98 = 0;
  switch(direction_hint % 9) {
  case 1:
    local_a0 = 4;
    break;
  case 2:
    local_a0 = -4;
    break;
  case 3:
    local_98 = 4;
    break;
  case 4:
    local_98 = -4;
    break;
  case 5:
    local_98 = 4;
    local_a0 = 4;
    break;
  case 6:
    local_98 = 4;
    local_a0 = -4;
    break;
  case 7:
    local_98 = -4;
    local_a0 = -4;
    break;
  case 8:
    local_98 = -4;
    local_a0 = 4;
  }
  local_ac = (this_ptr->voxel_coords).x - (this_ptr->dest_voxel_coords).x;
  if (0x31 < (int)((local_ac ^ (int)local_ac >> 0x1f) - ((int)local_ac >> 0x1f))) {
    local_4c.x = (this_ptr->current_position).x - dest_position->x;
    local_4c.y = (this_ptr->current_position).y - dest_position->y;
    local_4c.z = (this_ptr->current_position).z - dest_position->z;
    in_direction_vector = &local_4c;
    pCVar1 = &local_d0;
LAB_005473e0:
    pCVar1 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                       (pCVar1,in_direction_vector);
    if (pCVar1 != out_euler_angles) {
      out_euler_angles->x = pCVar1->x;
      out_euler_angles->y = pCVar1->y;
      out_euler_angles->z = pCVar1->z;
    }
    return 2;
  }
  local_a4 = (this_ptr->voxel_coords).z - (this_ptr->dest_voxel_coords).z;
  if (0x31 < (int)((local_a4 ^ (int)local_a4 >> 0x1f) - ((int)local_a4 >> 0x1f))) {
    local_64.x = (this_ptr->current_position).x - dest_position->x;
    local_64.y = (this_ptr->current_position).y - dest_position->y;
    local_64.z = (this_ptr->current_position).z - dest_position->z;
    pCVar1 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_88,&local_64);
    if (pCVar1 == out_euler_angles) {
      return 2;
    }
    out_euler_angles->x = pCVar1->x;
    out_euler_angles->y = pCVar1->y;
    out_euler_angles->z = pCVar1->z;
    return 2;
  }
  g_PathfindingCurrentX = (this_ptr->dest_voxel_coords).x - (this_ptr->grid_origin).x;
  g_PathfindingDestZ = 0x32;
  g_PathfindingDestX = 0x32;
  g_PathfindingCurrentZ = (this_ptr->dest_voxel_coords).z - (this_ptr->grid_origin).z;
  if ((((g_PathfindingCurrentX < 0) || (99 < g_PathfindingCurrentX)) || (g_PathfindingCurrentZ < 0))
     || (99 < g_PathfindingCurrentZ)) {
    local_dc.x = (this_ptr->current_position).x - dest_position->x;
    local_dc.y = (this_ptr->current_position).y - dest_position->y;
    local_dc.z = (this_ptr->current_position).z - dest_position->z;
    pCVar1 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_c4,&local_dc);
    if (pCVar1 == out_euler_angles) {
      return 2;
    }
    out_euler_angles->x = pCVar1->x;
    out_euler_angles->y = pCVar1->y;
    out_euler_angles->z = pCVar1->z;
    return 2;
  }
  if ((g_PathfindingCurrentX == 0x32) && (g_PathfindingCurrentZ == 0x32)) {
    local_40.x = (this_ptr->current_position).x - dest_position->x;
    local_40.y = (this_ptr->current_position).y - dest_position->y;
    local_40.z = (this_ptr->current_position).z - dest_position->z;
    pCVar1 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_70,&local_40);
    if (pCVar1 != out_euler_angles) {
      out_euler_angles->x = pCVar1->x;
      out_euler_angles->y = pCVar1->y;
      out_euler_angles->z = pCVar1->z;
    }
    return 1;
  }
  local_14 = (int)ROUND(ROUND(dest_position->z));
  iVar2 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                    (this_ptr,g_PathfindingCurrentZ,g_PathfindingCurrentX,
                     (this_ptr->dest_voxel_coords).y);
  iVar3 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                    (this_ptr,g_PathfindingDestZ,g_PathfindingDestX,(this_ptr->voxel_coords).y);
  iVar2 = core_path_cpp_CPathMap_isLineWalkable_FUN_00546c40
                    (this_ptr,g_PathfindingCurrentX,g_PathfindingCurrentZ,iVar2,g_PathfindingDestX,
                     g_PathfindingDestZ,iVar3);
  if (iVar2 != 0) {
    local_34 = g_CDemonRaytraceInstance.adjusted_size.x;
    local_30 = g_CDemonRaytraceInstance.adjusted_size.y;
    local_2c = g_CDemonRaytraceInstance.adjusted_size.z;
    if ((CPathMap *)&local_7c != this_ptr) {
      local_7c = (this_ptr->current_position).x;
      local_78 = (this_ptr->current_position).y;
      local_74 = (this_ptr->current_position).z;
    }
    local_14 = local_98;
    local_7c = (float)local_a0 * g_CDemonRaytraceInstance.adjusted_size.x + local_7c;
    local_74 = (float)local_98 * g_CDemonRaytraceInstance.adjusted_size.z + local_74;
    local_b8.x = (this_ptr->current_position).x - dest_position->x;
    local_b8.y = (this_ptr->current_position).y - dest_position->y;
    local_b8.z = (this_ptr->current_position).z - dest_position->z;
    pCVar1 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_28,&local_b8);
    if (pCVar1 != out_euler_angles) {
      out_euler_angles->x = pCVar1->x;
      out_euler_angles->y = pCVar1->y;
      out_euler_angles->z = pCVar1->z;
    }
    return 1;
  }
  iVar2 = core_path_cpp_CPathMap_checkAxisAlignedPath_FUN_00546e90
                    (this_ptr,g_PathfindingDestX,g_PathfindingDestZ,g_PathfindingCurrentX,
                     g_PathfindingCurrentZ);
  if (iVar2 == 0) {
    uVar5 = core_path_cpp_CPathMap_searchGrid_FUN_005487a0(this_ptr,(this_ptr->dest_voxel_coords).y)
    ;
    if (uVar5 != 0) {
      uVar5 = this_ptr->height_cache[g_PathfindingDestZ][g_PathfindingDestX] -
              (this_ptr->voxel_coords).y;
      uVar6 = (int)uVar5 >> 0x1f;
      if (3 < (int)((uVar5 ^ uVar6) - uVar6)) {
        local_94.x = (this_ptr->current_position).x - dest_position->x;
        local_94.y = (this_ptr->current_position).y - dest_position->y;
        local_94.z = (this_ptr->current_position).z - dest_position->z;
        pCVar1 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                           (&local_e8,&local_94);
        if (pCVar1 == out_euler_angles) {
          return 2;
        }
        out_euler_angles->x = pCVar1->x;
        out_euler_angles->y = pCVar1->y;
        out_euler_angles->z = pCVar1->z;
        return 2;
      }
      local_18 = 0xffffffff;
      iVar2 = g_PathfindingDestX;
      iVar3 = g_PathfindingDestZ;
      uVar5 = 0xffffffff;
      do {
        uVar6 = (uint)(byte)g_PathfindingVisited[iVar3][iVar2];
        local_1c = local_18;
        local_18 = uVar5;
        if (uVar6 == 0) {
          local_118.x = (this_ptr->current_position).x - dest_position->x;
          local_118.y = (this_ptr->current_position).y - dest_position->y;
          local_118.z = (this_ptr->current_position).z - dest_position->z;
          pCVar1 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                             (&local_10c,&local_118);
          if (pCVar1 == out_euler_angles) {
            return 2;
          }
          out_euler_angles->x = pCVar1->x;
          out_euler_angles->y = pCVar1->y;
          out_euler_angles->z = pCVar1->z;
          return 2;
        }
        iVar2 = iVar2 - g_PathfindingDeltaX[uVar6];
        iVar3 = iVar3 - g_PathfindingDeltaZ[uVar6];
        if (iVar2 < 0) {
          g_CurrentFilename = "..\\core\\path.cpp";
          g_CurrentLineNumber = 0x547;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Out of bounds1!");
        }
        if (iVar3 < 0) {
          g_CurrentFilename = "..\\core\\path.cpp";
          g_CurrentLineNumber = 0x548;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Out of bounds2!");
        }
        if (99 < iVar2) {
          g_CurrentFilename = "..\\core\\path.cpp";
          g_CurrentLineNumber = 0x549;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Out of bounds3!");
        }
        if (99 < iVar3) {
          g_CurrentFilename = "..\\core\\path.cpp";
          g_CurrentLineNumber = 0x54a;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Out of bounds4!");
        }
        uVar5 = uVar6;
      } while ((iVar2 != g_PathfindingCurrentX) || (iVar3 != g_PathfindingCurrentZ));
      out_euler_angles->x = 0.0;
      out_euler_angles->z = 0.0;
      fVar4 = core_path_cpp_CPathMap_getDirection_FUN_005465b0
                        (this_ptr,uVar6,local_18,local_1c,dest_position);
      out_euler_angles->y = fVar4;
      return 1;
    }
    local_100.x = (this_ptr->current_position).x - dest_position->x;
    local_100.y = (this_ptr->current_position).y - dest_position->y;
    local_100.z = (this_ptr->current_position).z - dest_position->z;
    in_direction_vector = &local_100;
    pCVar1 = &local_f4;
    goto LAB_005473e0;
  }
  if (iVar2 == 1) {
    if (g_PathfindingDestX <= g_PathfindingCurrentX) {
      if (g_PathfindingDestX < g_PathfindingCurrentX) {
        iVar2 = 4;
      }
      else if (g_PathfindingCurrentZ < g_PathfindingDestZ) {
        iVar2 = 1;
      }
      else {
        iVar2 = 2;
      }
      goto LAB_00547885;
    }
  }
  else {
    if (g_PathfindingCurrentZ < g_PathfindingDestZ) {
      iVar2 = 1;
      goto LAB_00547885;
    }
    if (g_PathfindingDestZ < g_PathfindingCurrentZ) {
      iVar2 = 2;
      goto LAB_00547885;
    }
    if (g_PathfindingDestX <= g_PathfindingCurrentX) {
      iVar2 = 4;
      goto LAB_00547885;
    }
  }
  iVar2 = 3;
LAB_00547885:
  out_euler_angles->x = 0.0;
  out_euler_angles->z = 0.0;
  fVar4 = core_path_cpp_CPathMap_getDirection_FUN_005465b0(this_ptr,iVar2,-1,-1,dest_position);
  out_euler_angles->y = fVar4;
  return 1;
}
