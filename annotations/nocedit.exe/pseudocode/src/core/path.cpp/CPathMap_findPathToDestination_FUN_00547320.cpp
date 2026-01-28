// Name: core_path.cpp_CPathMap_findPathToDestination_FUN_00547320
// Address: 00547320
// Address Range: [[00547320, 00547bfe]]
// Convention: __cdecl
// Signature: int __cdecl core_path_cpp_CPathMap_findPathToDestination_FUN_00547320 (CPathMap *this_ptr,CVector3f *dest_position,CVector3f *out_euler_angles, int direction_hint)

#include "nocturne.h"

int __cdecl
core_path_cpp_CPathMap_findPathToDestination_FUN_00547320
          (CPathMap *this_ptr,CVector3f *dest_position,CVector3f *out_euler_angles,
          int direction_hint)

{
  CVector3f *pCVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  CVector3f *unaff_EBX;
  CVector3f *unaff_ESI;
  float *pfVar6;
  byte bVar7;
  double dVar8;
  int unaff_retaddr;
  float afStackY_1040 [959];
  CVector3f *in_stack_fffffed0;
  CVector3f *in_stack_fffffed4;
  float fVar9;
  CVector3i *in_stack_fffffee8;
  CVector3f local_110;
  CVector3f CStack_104;
  CVector3f local_f8 [2];
  CVector3f local_dc;
  byte auStack_c8 [8];
  float fStack_c0;
  int local_b0;
  uint local_ac;
  int iStack_a8;
  CVector3f local_a4;
  uint local_98;
  float local_8c;
  CVector3f local_88 [2];
  CVector3f local_70;
  CVector3f local_64;
  int local_58;
  float afStack_54 [4];
  float local_44;
  byte local_40 [20];
  uint local_2c;
  uint local_28;
  int iStack_24;
  int iStack_20;
  int local_1c;
  int local_18;
  
  bVar7 = 0;
  core_dtrace_cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00499880
            (&g_CDemonRaytraceInstance,dest_position,in_stack_fffffee8);
  pfVar6 = (float *)((int)this_ptr + (uint)bVar7 * -8 + 0x1c);
  this_ptr->unk1 = local_58;
  *pfVar6 = afStack_54[(uint)bVar7 * -2];
  pfVar6[(uint)bVar7 * -2 + 1] = afStack_54[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  local_a4.y = 0.0;
  local_a4.z = 0.0;
  local_98 = 0;
  switch(direction_hint % 9) {
  case 1:
    local_a4.y = 5.60519e-45;
    break;
  case 2:
    local_a4.y = -NAN;
    break;
  case 3:
    local_98 = 4;
    break;
  case 4:
    local_98 = 0xfffffffc;
    break;
  case 5:
    local_98 = 4;
    local_a4.y = 5.60519e-45;
    break;
  case 6:
    local_98 = 4;
    local_a4.y = -NAN;
    break;
  case 7:
    local_98 = 0xfffffffc;
    local_a4.y = -NAN;
    break;
  case 8:
    local_98 = 0xfffffffc;
    local_a4.y = 5.60519e-45;
  }
  local_ac = (this_ptr->voxel_coords).x - this_ptr->unk1;
  if (0x31 < (int)((local_ac ^ (int)local_ac >> 0x1f) - ((int)local_ac >> 0x1f))) {
    afStack_54[2] = (this_ptr->current_position).x - dest_position->x;
    afStack_54[3] = (this_ptr->current_position).y - dest_position->y;
    local_44 = (this_ptr->current_position).z - dest_position->z;
LAB_005473e0:
    pCVar1 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                       (in_stack_fffffed0,in_stack_fffffed4);
    if (pCVar1 != unaff_EBX) {
      unaff_EBX->x = pCVar1->x;
      unaff_EBX->y = pCVar1->y;
      unaff_EBX->z = pCVar1->z;
    }
    return 2;
  }
  local_a4.x = (float)((this_ptr->voxel_coords).z - this_ptr->unk3);
  if (0x31 < (int)(((uint)local_a4.x ^ (int)local_a4.x >> 0x1f) - ((int)local_a4.x >> 0x1f))) {
    local_64.x = (this_ptr->current_position).x - dest_position->x;
    local_64.y = (this_ptr->current_position).y - dest_position->y;
    local_64.z = (this_ptr->current_position).z - dest_position->z;
    pCVar1 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(local_88,&local_64);
    if (pCVar1 == out_euler_angles) {
      return 2;
    }
    out_euler_angles->x = pCVar1->x;
    out_euler_angles->y = pCVar1->y;
    out_euler_angles->z = pCVar1->z;
    return 2;
  }
  g_PathfindingCurrentX = this_ptr->unk1 - (this_ptr->grid_origin).x;
  g_PathfindingDestZ = 0x32;
  g_PathfindingDestX = 0x32;
  g_PathfindingCurrentZ = this_ptr->unk3 - (this_ptr->grid_origin).z;
  if ((((g_PathfindingCurrentX < 0) || (99 < g_PathfindingCurrentX)) || (g_PathfindingCurrentZ < 0))
     || (99 < g_PathfindingCurrentZ)) {
    local_dc.x = (this_ptr->current_position).x - dest_position->x;
    local_dc.y = (this_ptr->current_position).y - dest_position->y;
    local_dc.z = (this_ptr->current_position).z - dest_position->z;
    pCVar1 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                       ((CVector3f *)(auStack_c8 + 4),&local_dc);
    if (pCVar1 == out_euler_angles) {
      return 2;
    }
    out_euler_angles->x = pCVar1->x;
    out_euler_angles->y = pCVar1->y;
    out_euler_angles->z = pCVar1->z;
    return 2;
  }
  if ((g_PathfindingCurrentX == 0x32) && (g_PathfindingCurrentZ == 0x32)) {
    local_40._0_4_ = (this_ptr->current_position).x - dest_position->x;
    local_40._4_4_ = (this_ptr->current_position).y - dest_position->y;
    local_40._8_4_ = (this_ptr->current_position).z - dest_position->z;
    pCVar1 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                       (&local_70,(CVector3f *)local_40);
    if (pCVar1 != out_euler_angles) {
      out_euler_angles->x = pCVar1->x;
      out_euler_angles->y = pCVar1->y;
      out_euler_angles->z = pCVar1->z;
    }
    return 1;
  }
  dVar8 = crt_math_c_round_FUN_005fe6b0((double)(this_ptr->current_position).x);
  local_18 = (int)ROUND(dVar8);
  dVar8 = crt_math_c_round_FUN_005fe6b0((double)dest_position->x);
  local_1c = (int)ROUND(dVar8);
  dVar8 = crt_math_c_round_FUN_005fe6b0((double)(this_ptr->current_position).z);
  iStack_20 = (int)ROUND(dVar8);
  fVar9 = 7.7566e-39;
  dVar8 = crt_math_c_round_FUN_005fe6b0((double)*(float *)(unaff_retaddr + 8));
  iStack_24 = (int)ROUND(dVar8);
  iVar2 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                    (this_ptr,g_PathfindingCurrentZ,g_PathfindingCurrentX,this_ptr->unk2);
  iVar3 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                    (this_ptr,g_PathfindingDestZ,g_PathfindingDestX,(this_ptr->voxel_coords).y);
  iVar2 = core_path_cpp_CPathMap_isLineWalkable_FUN_00546c40
                    (this_ptr,g_PathfindingCurrentX,g_PathfindingCurrentZ,iVar2,g_PathfindingDestX,
                     g_PathfindingDestZ,iVar3);
  if (iVar2 != 0) {
    local_44 = g_CDemonRaytraceInstance.adjusted_size.x;
    local_40._0_4_ = g_CDemonRaytraceInstance.adjusted_size.y;
    local_40._4_4_ = g_CDemonRaytraceInstance.adjusted_size.z;
    if ((CPathMap *)&local_8c != this_ptr) {
      local_8c = (this_ptr->current_position).x;
      local_88[0].x = (this_ptr->current_position).y;
      local_88[0].y = (this_ptr->current_position).z;
    }
    iStack_24 = iStack_a8;
    local_8c = (float)local_b0 * g_CDemonRaytraceInstance.adjusted_size.x + local_8c;
    local_88[0].y = (float)iStack_a8 * g_CDemonRaytraceInstance.adjusted_size.z + local_88[0].y;
    auStack_c8._0_4_ = (this_ptr->current_position).x - unaff_ESI->x;
    auStack_c8._4_4_ = (this_ptr->current_position).y - unaff_ESI->y;
    fStack_c0 = (this_ptr->current_position).z - unaff_ESI->z;
    pCVar1 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                       ((CVector3f *)(local_40 + 8),(CVector3f *)auStack_c8);
    if (pCVar1 != unaff_EBX) {
      unaff_EBX->x = pCVar1->x;
      unaff_EBX->y = pCVar1->y;
      unaff_EBX->z = pCVar1->z;
    }
    return 1;
  }
  iVar2 = core_path_cpp_CPathMap_checkAxisAlignedPath_FUN_00546e90
                    (this_ptr,g_PathfindingDestX,g_PathfindingDestZ,g_PathfindingCurrentX,
                     g_PathfindingCurrentZ,(int)fVar9);
  if (iVar2 == 0) {
    uVar4 = core_path_cpp_CPathMap_queuePop_FUN_005487a0(this_ptr,this_ptr->unk2);
    if (uVar4 != 0) {
      uVar4 = this_ptr->height_cache[g_PathfindingDestZ][g_PathfindingDestX] -
              (this_ptr->voxel_coords).y;
      uVar5 = (int)uVar4 >> 0x1f;
      if (3 < (int)((uVar4 ^ uVar5) - uVar5)) {
        local_a4.x = (this_ptr->current_position).x - unaff_ESI->x;
        local_a4.y = (this_ptr->current_position).y - unaff_ESI->y;
        local_a4.z = (this_ptr->current_position).z - unaff_ESI->z;
        pCVar1 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                           (local_f8,&local_a4);
        if (pCVar1 == unaff_EBX) {
          return 2;
        }
        unaff_EBX->x = pCVar1->x;
        unaff_EBX->y = pCVar1->y;
        unaff_EBX->z = pCVar1->z;
        return 2;
      }
      local_28 = 0xffffffff;
      iVar2 = g_PathfindingDestX;
      iVar3 = g_PathfindingDestZ;
      uVar4 = 0xffffffff;
      do {
        uVar5 = (uint)(byte)g_PathfindingVisited[iVar3][iVar2];
        local_2c = local_28;
        local_28 = uVar4;
        if (uVar5 == 0) {
          pCVar1 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                             ((CVector3f *)&stack0xfffffee4,(CVector3f *)&stack0xfffffed8);
          if (pCVar1 == unaff_EBX) {
            return 2;
          }
          unaff_EBX->x = pCVar1->x;
          unaff_EBX->y = pCVar1->y;
          unaff_EBX->z = pCVar1->z;
          return 2;
        }
        iVar2 = iVar2 - g_PathfindingDeltaX[uVar5];
        iVar3 = iVar3 - g_PathfindingDeltaZ[uVar5];
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
        uVar4 = uVar5;
      } while ((iVar2 != g_PathfindingCurrentX) || (iVar3 != g_PathfindingCurrentZ));
      unaff_EBX->x = 0.0;
      unaff_EBX->z = 0.0;
      fVar9 = core_path_cpp_CPathMap_getDirection_FUN_005465b0
                        (this_ptr,uVar5,local_28,local_2c,unaff_ESI);
      unaff_EBX->y = fVar9;
      return 1;
    }
    local_110.x = (this_ptr->current_position).x - unaff_ESI->x;
    local_110.y = (this_ptr->current_position).y - unaff_ESI->y;
    local_110.z = (this_ptr->current_position).z - unaff_ESI->z;
    in_stack_fffffed4 = &local_110;
    in_stack_fffffed0 = &CStack_104;
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
  unaff_EBX->x = 0.0;
  unaff_EBX->z = 0.0;
  fVar9 = core_path_cpp_CPathMap_getDirection_FUN_005465b0(this_ptr,iVar2,-1,-1,unaff_ESI);
  unaff_EBX->y = fVar9;
  return 1;
}
