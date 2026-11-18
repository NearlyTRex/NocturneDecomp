// Name: core_path.cpp_CPathMap_findPathToDestination_FUN_00533dc0
// Address: 00533dc0
// Address Range: [[00533dc0, 00534897]]
// Convention: __cdecl
// Signature: int __cdecl core_path_cpp_CPathMap_findPathToDestination_FUN_00533dc0(CPathMap *this_ptr,CVector3f *dest_position,CVector3f *out_euler_angles,int direction_hint)

#include "nocturne.h"

int __cdecl core_path_cpp_CPathMap_findPathToDestination_FUN_00533dc0(CPathMap *this_ptr,CVector3f *dest_position,CVector3f *out_euler_angles,int direction_hint)

{
  int iVar1;
  int iVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  float *unaff_EBX;
  CVector3f *unaff_ESI;
  float *pfVar6;
  byte bVar7;
  double dVar8;
  int unaff_retaddr;
  float afStackY_11cc [1007];
  uint uStack_1f4;
  uint uStack_1f0;
  CVector3f local_1e4;
  float local_1d8 [5];
  int local_1c4;
  CVector3f local_1c0;
  uint local_1b4;
  uint local_1b0;
  float local_1ac;
  byte local_1a8 [12];
  float local_19c [4];
  float fStack_18c;
  float fStack_188;
  float local_184;
  float local_180;
  float local_170;
  float local_16c [2];
  CVector3f local_164 [2];
  float fStack_14c;
  CVector3f local_148 [2];
  float local_130;
  float local_12c;
  CVector3f local_128;
  float local_11c;
  float local_118 [5];
  byte local_104 [8];
  float afStack_fc [7];
  float local_e0;
  CVector3f local_dc;
  byte local_c8 [8];
  float local_c0;
  CVector3f local_bc [2];
  CVector3f local_a0;
  byte local_94 [12];
  CVector3f local_88;
  float local_7c [4];
  float fStack_6c;
  CVector3f local_58;
  CVector3f local_4c;
  byte local_40 [12];
  float local_34 [3];
  uint local_28;
  float fStack_24;
  int iStack_20;
  int local_1c;
  int local_18;
  
  bVar7 = 0;
  uStack_1f0 = 0x533df1;
  core_dtrace_cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_0048ef40
            (&g_CDemonRaytraceInstance,dest_position,(CVector3i *)(local_104 + 4));
  pfVar6 = (float *)((int)this_ptr + (uint)bVar7 * -8 + 0x1c);
  (this_ptr->dest_voxel_coords).x = local_104._4_4_;
  *pfVar6 = afStack_fc[(uint)bVar7 * -2];
  pfVar6[(uint)bVar7 * -2 + 1] = afStack_fc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  local_1b4 = 0;
  local_1b0 = 0;
  local_1ac = 0.0;
  switch(direction_hint % 9) {
  case 1:
    local_1b4 = 4;
    break;
  case 2:
    local_1b4 = 0xfffffffc;
    break;
  case 3:
    local_1ac = 5.60519e-45;
    break;
  case 4:
    local_1ac = -NAN;
    break;
  case 5:
    local_1ac = 5.60519e-45;
    local_1b4 = 4;
    break;
  case 6:
    local_1ac = 5.60519e-45;
    local_1b4 = 0xfffffffc;
    break;
  case 7:
    local_1ac = -NAN;
    local_1b4 = 0xfffffffc;
    break;
  case 8:
    local_1ac = -NAN;
    local_1b4 = 4;
  }
  local_128.y = (float)((this_ptr->voxel_coords).x - (this_ptr->dest_voxel_coords).x);
  if (0x31 < (int)(((uint)local_128.y ^ (int)local_128.y >> 0x1f) - ((int)local_128.y >> 0x1f))) {
    local_130 = (this_ptr->current_position).x - dest_position->x;
    local_12c = (this_ptr->current_position).y - dest_position->y;
    local_128.x = (this_ptr->current_position).z - dest_position->z;
    local_dc.x = local_130;
    *(float *)((int)&local_dc + (uint)bVar7 * -8 + 4) = (&local_12c)[(uint)bVar7 * -2];
    *(uint *)((int)&local_dc + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
         *(uint *)((int)&local_128 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520
              (&local_dc,(CVector3f *)local_1a8);
    local_c8._4_4_ = local_1a8._0_4_;
    (&local_c0)[(uint)bVar7 * -2] = *(float *)(local_1a8 + (uint)bVar7 * -8 + 4);
    *(float *)((int)local_bc + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
         local_19c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + -1];
    if ((CVector3f *)(local_c8 + 4) != out_euler_angles) {
      out_euler_angles->x = (float)local_c8._4_4_;
      out_euler_angles->y = local_c0;
      out_euler_angles->z = local_bc[0].x;
    }
    return 2;
  }
  local_11c = (float)((this_ptr->voxel_coords).z - (this_ptr->dest_voxel_coords).z);
  if (0x31 < (int)(((uint)local_11c ^ (int)local_11c >> 0x1f) - ((int)local_11c >> 0x1f))) {
    local_1d8[0] = (this_ptr->current_position).x - dest_position->x;
    local_1d8[1] = (this_ptr->current_position).y - dest_position->y;
    local_1d8[2] = (this_ptr->current_position).z - dest_position->z;
    local_88.x = local_1d8[0];
    local_7c[(uint)bVar7 * -2 + -2] = local_1d8[(uint)bVar7 * -2 + 1];
    local_7c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + -1] =
         local_1d8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 2];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520
              (&local_88,(CVector3f *)local_94);
    local_58.x = (float)local_94._0_4_;
    *(uint *)((int)&local_58 + (uint)bVar7 * -8 + 4) =
         *(uint *)(local_94 + (uint)bVar7 * -8 + 4);
    *(uint *)((int)&local_58 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
         *(uint *)(local_94 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
    if (&local_58 == out_euler_angles) {
      return 2;
    }
    out_euler_angles->x = local_58.x;
    out_euler_angles->y = local_58.y;
    out_euler_angles->z = local_58.z;
    return 2;
  }
  g_PathfindingCurrentX = (this_ptr->dest_voxel_coords).x - (this_ptr->grid_origin).x;
  g_PathfindingDestZ = 0x32;
  g_PathfindingDestX = 0x32;
  g_PathfindingCurrentZ = (this_ptr->dest_voxel_coords).z - (this_ptr->grid_origin).z;
  if ((((g_PathfindingCurrentX < 0) || (99 < g_PathfindingCurrentX)) || (g_PathfindingCurrentZ < 0))
     || (99 < g_PathfindingCurrentZ)) {
    local_16c[0] = (this_ptr->current_position).x - dest_position->x;
    local_16c[1] = (this_ptr->current_position).y - dest_position->y;
    local_164[0].x = (this_ptr->current_position).z - dest_position->z;
    local_148[0].x = local_16c[0];
    *(float *)((int)local_148 + (uint)bVar7 * -8 + 4) = local_16c[(uint)bVar7 * -2 + 1];
    *(uint *)((int)local_148 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
         *(uint *)((int)local_164 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(local_148,&local_4c);
    local_a0.x = local_4c.x;
    *(uint *)(local_94 + (uint)bVar7 * -8 + -8) =
         *(uint *)(local_40 + (uint)bVar7 * -8 + -8);
    *(uint *)(local_94 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + -4) =
         *(uint *)(local_40 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + -4);
    if (&local_a0 == out_euler_angles) {
      return 2;
    }
    out_euler_angles->x = local_a0.x;
    out_euler_angles->y = local_a0.y;
    out_euler_angles->z = local_a0.z;
    return 2;
  }
  if ((g_PathfindingCurrentX == 0x32) && (g_PathfindingCurrentZ == 0x32)) {
    local_34[0] = (this_ptr->current_position).x - dest_position->x;
    local_34[1] = (this_ptr->current_position).y - dest_position->y;
    local_34[2] = (this_ptr->current_position).z - dest_position->z;
    local_40._0_4_ = local_34[0];
    *(float *)(local_40 + (uint)bVar7 * -8 + 4) = local_34[(uint)bVar7 * -2 + 1];
    *(float *)(local_40 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
         local_34[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 2];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520
              ((CVector3f *)local_40,&local_1c0);
    local_1e4.x = local_1c0.x;
    local_1d8[(uint)bVar7 * -2 + -2] = *(float *)((int)&local_1c0 + (uint)bVar7 * -8 + 4);
    local_1d8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + -1] =
         *(float *)((int)&local_1c0 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
    if (&local_1e4 != out_euler_angles) {
      out_euler_angles->x = local_1e4.x;
      out_euler_angles->y = local_1e4.y;
      out_euler_angles->z = local_1e4.z;
    }
    return 1;
  }
  dVar8 = round((double)(this_ptr->current_position).x);
  local_18 = (int)ROUND(dVar8);
  dVar8 = round((double)dest_position->x);
  local_1c = (int)ROUND(dVar8);
  uStack_1f0 = 0x534185;
  dVar8 = round((double)(this_ptr->current_position).z);
  iStack_20 = (int)ROUND(dVar8);
  uStack_1f4 = 0x534194;
  dVar8 = round((double)*(float *)(unaff_retaddr + 8));
  fStack_24 = (float)(int)ROUND(dVar8);
  iVar1 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00533640
                    (this_ptr,g_PathfindingCurrentZ,g_PathfindingCurrentX,
                     (this_ptr->dest_voxel_coords).y);
  iVar2 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00533640
                    (this_ptr,g_PathfindingDestZ,g_PathfindingDestX,(this_ptr->voxel_coords).y);
  iVar1 = core_path_cpp_CPathMap_isLineWalkable_FUN_005336e0
                    (this_ptr,g_PathfindingCurrentX,g_PathfindingCurrentZ,iVar1,g_PathfindingDestX,
                     g_PathfindingDestZ,iVar2);
  if (iVar1 != 0) {
    local_88.z = g_CDemonRaytraceInstance.adjusted_size.x;
    local_7c[(uint)bVar7 * -2] =
         *(float *)((int)&g_CDemonRaytraceInstance + (uint)bVar7 * -8 + 0x38);
    local_7c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
         *(float *)((uint)bVar7 * -8 + 0x1fe5c58 + (uint)bVar7 * -8);
    local_e0 = local_88.z;
    *(float *)((int)&local_dc + (uint)bVar7 * -8) = local_7c[(uint)bVar7 * -2];
    *(float *)((int)&local_dc + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 4) =
         local_7c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
    if ((CPathMap *)&fStack_14c != this_ptr) {
      fStack_14c = (this_ptr->current_position).x;
      local_148[0].x = (this_ptr->current_position).y;
      local_148[0].y = (this_ptr->current_position).z;
    }
    fStack_24 = local_1c0.y;
    fStack_14c = (float)local_1c4 * local_e0 + fStack_14c;
    local_148[0].y = (float)(int)local_1c0.y * local_dc.y + local_148[0].y;
    local_11c = (this_ptr->current_position).x - unaff_ESI->x;
    local_118[0] = (this_ptr->current_position).y - unaff_ESI->y;
    local_118[1] = (this_ptr->current_position).z - unaff_ESI->z;
    local_128.x = local_11c;
    *(float *)((int)&local_128 + (uint)bVar7 * -8 + 4) = local_118[(uint)bVar7 * -2];
    *(float *)((int)&local_128 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
         local_118[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(&local_128,local_bc);
    afStack_fc[1] = local_bc[0].x;
    afStack_fc[(uint)bVar7 * -2 + 2] = *(float *)((int)local_bc + (uint)bVar7 * -8 + 4);
    afStack_fc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 3] =
         *(float *)((int)local_bc + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
    if (afStack_fc + 1 != unaff_EBX) {
      *unaff_EBX = afStack_fc[1];
      unaff_EBX[1] = afStack_fc[2];
      unaff_EBX[2] = afStack_fc[3];
    }
    return 1;
  }
  iVar1 = core_path_cpp_CPathMap_checkAxisAlignedPath_FUN_00533930
                    (this_ptr,g_PathfindingDestX,g_PathfindingDestZ,g_PathfindingCurrentX,
                     g_PathfindingCurrentZ);
  if (iVar1 == 0) {
    uVar4 = core_path_cpp_CPathMap_searchGrid_FUN_00535490(this_ptr,(this_ptr->dest_voxel_coords).y)
    ;
    if (uVar4 != 0) {
      uVar4 = this_ptr->height_cache[g_PathfindingDestZ][g_PathfindingDestX] -
              (this_ptr->voxel_coords).y;
      uVar5 = (int)uVar4 >> 0x1f;
      if (3 < (int)((uVar4 ^ uVar5) - uVar5)) {
        fStack_188 = (this_ptr->current_position).x - unaff_ESI->x;
        local_184 = (this_ptr->current_position).y - unaff_ESI->y;
        local_180 = (this_ptr->current_position).z - unaff_ESI->z;
        local_104._0_4_ = fStack_188;
        *(float *)(local_104 + (uint)bVar7 * -8 + 4) = local_19c[(uint)bVar7 * -2 + 6];
        afStack_fc[(uint)bVar7 * -2 + (uint)bVar7 * -2] =
             local_19c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520
                  ((CVector3f *)local_104,(CVector3f *)local_c8);
        local_1e4.z = (float)local_c8._0_4_;
        local_1d8[(uint)bVar7 * -2] = *(float *)(local_c8 + (uint)bVar7 * -8 + 4);
        local_1d8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
             (&local_c0)[(uint)bVar7 * -2 + (uint)bVar7 * -2];
        if (&local_1e4.z == unaff_EBX) {
          return 2;
        }
        *unaff_EBX = local_1e4.z;
        unaff_EBX[1] = local_1d8[0];
        unaff_EBX[2] = local_1d8[1];
        return 2;
      }
      uVar4 = 0xffffffff;
      local_28 = 0xffffffff;
      iVar1 = g_PathfindingDestZ;
      iVar2 = g_PathfindingDestX;
      do {
        local_34[2] = (float)local_28;
        local_28 = uVar4;
        uVar4 = (uint)(byte)g_PathfindingVisited[iVar1][iVar2];
        if (uVar4 == 0) {
          local_19c[2] = (this_ptr->current_position).x - unaff_ESI->x;
          local_19c[3] = (this_ptr->current_position).y - unaff_ESI->y;
          fStack_18c = (this_ptr->current_position).z - unaff_ESI->z;
          local_1a8._8_4_ = local_19c[2];
          local_19c[(uint)bVar7 * -2] = local_19c[(uint)bVar7 * -2 + 3];
          local_19c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
               local_19c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
          core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520
                    ((CVector3f *)(local_1a8 + 8),local_164);
          local_170 = local_164[0].x;
          local_16c[(uint)bVar7 * -2] = *(float *)((int)local_164 + (uint)bVar7 * -8 + 4);
          local_16c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
               *(float *)((int)local_164 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
          if (&local_170 == unaff_EBX) {
            return 2;
          }
          *unaff_EBX = local_170;
          unaff_EBX[1] = local_16c[0];
          unaff_EBX[2] = local_16c[1];
          return 2;
        }
        iVar2 = iVar2 - g_PathfindingDeltaX[uVar4];
        iVar1 = iVar1 - g_PathfindingDeltaZ[uVar4];
        if (iVar2 < 0) {
          g_CHAR_PTR_01d1d400 = "..\\core\\path.cpp";
          g_INT_01d1d404 = 0x548;
          core_main_c_displayErrorAndQuit_FUN_005030e0("Out of bounds1!");
        }
        if (iVar1 < 0) {
          g_CHAR_PTR_01d1d400 = "..\\core\\path.cpp";
          g_INT_01d1d404 = 0x549;
          core_main_c_displayErrorAndQuit_FUN_005030e0("Out of bounds2!");
        }
        if (99 < iVar2) {
          g_CHAR_PTR_01d1d400 = "..\\core\\path.cpp";
          g_INT_01d1d404 = 0x54a;
          core_main_c_displayErrorAndQuit_FUN_005030e0("Out of bounds3!");
        }
        if (99 < iVar1) {
          g_CHAR_PTR_01d1d400 = "..\\core\\path.cpp";
          g_INT_01d1d404 = 0x54b;
          core_main_c_displayErrorAndQuit_FUN_005030e0("Out of bounds4!");
        }
      } while ((iVar2 != g_PathfindingCurrentX) || (iVar1 != g_PathfindingCurrentZ));
      *unaff_EBX = 0.0;
      unaff_EBX[2] = 0.0;
      fVar3 = core_path_cpp_CPathMap_getDirection_FUN_00533140
                        (this_ptr,uVar4,local_28,(int)local_34[2],unaff_ESI);
      unaff_EBX[1] = fVar3;
      return 1;
    }
    local_1ac = (this_ptr->current_position).x - unaff_ESI->x;
    local_1a8._0_4_ = (this_ptr->current_position).y - unaff_ESI->y;
    local_1a8._4_4_ = (this_ptr->current_position).z - unaff_ESI->z;
    local_94._8_4_ = local_1ac;
    local_7c[(uint)bVar7 * -2 + -3] = *(float *)(local_1a8 + (uint)bVar7 * -8);
    local_7c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + -2] =
         *(float *)(local_1a8 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 4);
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520
              ((CVector3f *)(local_94 + 8),(CVector3f *)(local_40 + 8));
    local_7c[2] = (float)local_40._8_4_;
    local_7c[(uint)bVar7 * -2 + 3] = local_34[(uint)bVar7 * -2];
    local_7c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
         local_34[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
    if (local_7c + 2 == unaff_EBX) {
      return 2;
    }
    *unaff_EBX = local_7c[2];
    unaff_EBX[1] = local_7c[3];
    unaff_EBX[2] = fStack_6c;
    return 2;
  }
  if (iVar1 == 1) {
    if (g_PathfindingDestX <= g_PathfindingCurrentX) {
      if (g_PathfindingDestX < g_PathfindingCurrentX) {
        iVar1 = 4;
      }
      else if (g_PathfindingCurrentZ < g_PathfindingDestZ) {
        iVar1 = 1;
      }
      else {
        iVar1 = 2;
      }
      goto LAB_0053443f;
    }
  }
  else {
    if (g_PathfindingCurrentZ < g_PathfindingDestZ) {
      iVar1 = 1;
      goto LAB_0053443f;
    }
    if (g_PathfindingDestZ < g_PathfindingCurrentZ) {
      iVar1 = 2;
      goto LAB_0053443f;
    }
    if (g_PathfindingDestX <= g_PathfindingCurrentX) {
      iVar1 = 4;
      goto LAB_0053443f;
    }
  }
  iVar1 = 3;
LAB_0053443f:
  *unaff_EBX = 0.0;
  unaff_EBX[2] = 0.0;
  fVar3 = core_path_cpp_CPathMap_getDirection_FUN_00533140(this_ptr,iVar1,-1,-1,unaff_ESI);
  unaff_EBX[1] = fVar3;
  return 1;
}
