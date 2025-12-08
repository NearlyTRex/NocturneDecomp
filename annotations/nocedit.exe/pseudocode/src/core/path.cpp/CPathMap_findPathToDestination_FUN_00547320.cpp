// Name: core_path.cpp_CPathMap_findPathToDestination_FUN_00547320
// Address: 00547320
// Address Range: [[00547320, 00547bfe]]
// Convention: __cdecl
// Signature: int core_path.cpp_CPathMap_findPathToDestination_FUN_00547320(CPathMap * this_ptr, CVector3f * dest_position, CVector3f * out_euler_angles, int direction_hint)

#include "nocturne.h"

int __cdecl
core_path_cpp_CPathMap_findPathToDestination_FUN_00547320
          (CPathMap *this_ptr,CVector3f *dest_position,CVector3f *out_euler_angles,
          int direction_hint)

{
  CVector3f *pCVar1;
  float *extraout_EAX;
  int extraout_EAX_00;
  int iVar2;
  int iVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  BADSPACEBASE *in_ESP;
  float *pfVar7;
  byte bVar8;
  double dVar9;
  CVector3f *in_stack_00000014;
  CVector3f *in_stack_00000018;
  float afStackY_103c [961];
  CVector3i *in_stack_fffffee8;
  int end_z;
  CVector3f *in_stack_fffffeec;
  CVector3f local_110;
  CVector3f CStack_104;
  CVector3f local_f8;
  CVector3f CStack_ec;
  byte auStack_e0 [12];
  float local_d4;
  float local_d0;
  byte auStack_c0 [12];
  float local_b4;
  float local_b0;
  uint uStack_a8;
  uint local_a0;
  uint local_9c;
  int local_98;
  uint local_94;
  byte local_8c [16];
  float local_7c;
  float local_78;
  float local_74;
  CVector3f CStack_6c;
  CVector3f local_60;
  int iStack_54;
  float afStack_50 [2];
  CVector3f local_48;
  CVector3f local_3c;
  float local_30;
  float local_2c;
  CVector3f local_28;
  int local_1c;
  int local_18;
  uint local_14;
  
  bVar8 = 0;
  core_dtrace_cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00499880
            (&g_CDemonRaytraceInstance,dest_position,in_stack_fffffee8);
  pfVar7 = (float *)((int)this_ptr + (uint)bVar8 * -8 + 0x1c);
  this_ptr->field2_0x18 = iStack_54;
  *pfVar7 = afStack_50[(uint)bVar8 * -2];
  pfVar7[(uint)bVar8 * -2 + 1] = afStack_50[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
  local_9c = 0;
  local_98 = 0;
  local_94 = 0;
  switch(direction_hint % 9) {
  case 1:
    local_9c = 4;
    break;
  case 2:
    local_9c = 0xfffffffc;
    break;
  case 3:
    local_94 = 4;
    break;
  case 4:
    local_94 = 0xfffffffc;
    break;
  case 5:
    local_94 = 4;
    local_9c = 4;
    break;
  case 6:
    local_94 = 4;
    local_9c = 0xfffffffc;
    break;
  case 7:
    local_94 = 0xfffffffc;
    local_9c = 0xfffffffc;
    break;
  case 8:
    local_94 = 0xfffffffc;
    local_9c = 4;
  }
  uStack_a8 = (this_ptr->voxel_coords).x - this_ptr->field2_0x18;
  if (0x31 < (int)((uStack_a8 ^ (int)uStack_a8 >> 0x1f) - ((int)uStack_a8 >> 0x1f))) {
    local_48.x = (this_ptr->current_position).x - out_euler_angles->x;
    local_48.y = (this_ptr->current_position).y - out_euler_angles->y;
    local_48.z = (this_ptr->current_position).z - out_euler_angles->z;
    pCVar1 = &local_48;
LAB_005473e0:
    pCVar1 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                       (pCVar1,in_stack_fffffeec);
    if (pCVar1 != in_stack_00000018) {
      in_stack_00000018->x = pCVar1->x;
      in_stack_00000018->y = pCVar1->y;
      in_stack_00000018->z = pCVar1->z;
    }
    return 2;
  }
  local_a0 = (this_ptr->voxel_coords).z - this_ptr->field4_0x20;
  if (0x31 < (int)((local_a0 ^ (int)local_a0 >> 0x1f) - ((int)local_a0 >> 0x1f))) {
    local_60.x = (this_ptr->current_position).x - out_euler_angles->x;
    local_60.y = (this_ptr->current_position).y - out_euler_angles->y;
    local_60.z = (this_ptr->current_position).z - out_euler_angles->z;
    pCVar1 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                       ((CVector3f *)(local_8c + 8),&local_60);
    if (pCVar1 == in_stack_00000014) {
      return 2;
    }
    in_stack_00000014->x = pCVar1->x;
    in_stack_00000014->y = pCVar1->y;
    in_stack_00000014->z = pCVar1->z;
    return 2;
  }
  g_PathfindingCurrentX = this_ptr->field2_0x18 - (this_ptr->grid_origin).x;
  g_PathfindingDestZ = 0x32;
  g_PathfindingDestX = 0x32;
  g_PathfindingCurrentZ = this_ptr->field4_0x20 - (this_ptr->grid_origin).z;
  if ((((g_PathfindingCurrentX < 0) || (99 < g_PathfindingCurrentX)) || (g_PathfindingCurrentZ < 0))
     || (99 < g_PathfindingCurrentZ)) {
    auStack_e0._8_4_ = (this_ptr->current_position).x - out_euler_angles->x;
    local_d4 = (this_ptr->current_position).y - out_euler_angles->y;
    local_d0 = (this_ptr->current_position).z - out_euler_angles->z;
    pCVar1 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                       ((CVector3f *)auStack_c0,(CVector3f *)(auStack_e0 + 8));
    if (pCVar1 == in_stack_00000014) {
      return 2;
    }
    in_stack_00000014->x = pCVar1->x;
    in_stack_00000014->y = pCVar1->y;
    in_stack_00000014->z = pCVar1->z;
    return 2;
  }
  if ((g_PathfindingCurrentX == 0x32) && (g_PathfindingCurrentZ == 0x32)) {
    local_3c.x = (this_ptr->current_position).x - out_euler_angles->x;
    local_3c.y = (this_ptr->current_position).y - out_euler_angles->y;
    local_3c.z = (this_ptr->current_position).z - out_euler_angles->z;
    pCVar1 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&CStack_6c,&local_3c)
    ;
    if (pCVar1 != in_stack_00000014) {
      in_stack_00000014->x = pCVar1->x;
      in_stack_00000014->y = pCVar1->y;
      in_stack_00000014->z = pCVar1->z;
    }
    return 1;
  }
  end_z = 0x5475f9;
  dVar9 = crt_math_c_round_FUN_005fe6b0((double)(this_ptr->current_position).x);
  local_14 = (uint)ROUND(dVar9);
  dVar9 = crt_math_c_round_FUN_005fe6b0((double)*extraout_EAX);
  local_18 = (int)ROUND(dVar9);
  dVar9 = crt_math_c_round_FUN_005fe6b0((double)(this_ptr->current_position).z);
  local_1c = (int)ROUND(dVar9);
  dVar9 = crt_math_c_round_FUN_005fe6b0((double)*(float *)(extraout_EAX_00 + 8));
  local_28.z = (float)(int)ROUND(dVar9);
  iVar2 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                    (this_ptr,g_PathfindingCurrentZ,g_PathfindingCurrentX,this_ptr->field3_0x1c);
  iVar3 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                    (this_ptr,g_PathfindingDestZ,g_PathfindingDestX,(this_ptr->voxel_coords).y);
  iVar2 = core_path_cpp_CPathMap_isLineWalkable_FUN_00546c40
                    (this_ptr,g_PathfindingCurrentX,g_PathfindingCurrentZ,iVar2,g_PathfindingDestX,
                     g_PathfindingDestZ,iVar3);
  if (iVar2 != 0) {
    local_3c.z = g_CDemonRaytraceInstance.adjusted_size.x;
    local_30 = g_CDemonRaytraceInstance.adjusted_size.y;
    local_2c = g_CDemonRaytraceInstance.adjusted_size.z;
    if ((CPathMap *)&local_7c != this_ptr) {
      local_7c = (this_ptr->current_position).x;
      local_78 = (this_ptr->current_position).y;
      local_74 = (this_ptr->current_position).z;
    }
    local_14 = local_98;
    local_7c = (float)(int)local_a0 * g_CDemonRaytraceInstance.adjusted_size.x + local_7c;
    local_74 = (float)local_98 * g_CDemonRaytraceInstance.adjusted_size.z + local_74;
    auStack_c0._8_4_ = (this_ptr->current_position).x - dest_position->x;
    local_b4 = (this_ptr->current_position).y - dest_position->y;
    local_b0 = (this_ptr->current_position).z - dest_position->z;
    pCVar1 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                       (&local_28,(CVector3f *)(auStack_c0 + 8));
    if (pCVar1 != (CVector3f *)direction_hint) {
      *(float *)direction_hint = pCVar1->x;
      *(float *)(direction_hint + 4) = pCVar1->y;
      *(float *)(direction_hint + 8) = pCVar1->z;
    }
    return 1;
  }
  iVar2 = core_path_cpp_CPathMap_checkAxisAlignedPath_FUN_00546e90
                    (this_ptr,g_PathfindingDestX,g_PathfindingDestZ,g_PathfindingCurrentX,
                     g_PathfindingCurrentZ,end_z);
  if (iVar2 == 0) {
    uVar5 = core_path_cpp_CPathMap_queuePop_FUN_005487a0(this_ptr,this_ptr->field3_0x1c);
    if (uVar5 != 0) {
      uVar5 = this_ptr->height_cache[g_PathfindingDestZ][g_PathfindingDestX] -
              (this_ptr->voxel_coords).y;
      uVar6 = (int)uVar5 >> 0x1f;
      if (3 < (int)((uVar5 ^ uVar6) - uVar6)) {
        local_8c._0_4_ = (this_ptr->current_position).x - *(float *)direction_hint;
        local_8c._4_4_ = (this_ptr->current_position).y - *(float *)(direction_hint + 4);
        local_8c._8_4_ = (this_ptr->current_position).z - *(float *)(direction_hint + 8);
        pCVar1 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                           ((CVector3f *)auStack_e0,(CVector3f *)local_8c);
        if (pCVar1 == in_stack_00000018) {
          return 2;
        }
        in_stack_00000018->x = pCVar1->x;
        in_stack_00000018->y = pCVar1->y;
        in_stack_00000018->z = pCVar1->z;
        return 2;
      }
      iVar2 = g_PathfindingDestX;
      iVar3 = g_PathfindingDestZ;
      uVar5 = 0xffffffff;
      uVar6 = 0xffffffff;
      do {
        local_14 = uVar6;
        uVar6 = uVar5;
        uVar5 = (uint)(byte)g_PathfindingVisited[iVar3][iVar2];
        if (uVar5 == 0) {
          local_110.x = (this_ptr->current_position).x - *(float *)direction_hint;
          local_110.y = (this_ptr->current_position).y - *(float *)(direction_hint + 4);
          local_110.z = (this_ptr->current_position).z - *(float *)(direction_hint + 8);
          pCVar1 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                             (&CStack_104,&local_110);
          if (pCVar1 == in_stack_00000018) {
            return 2;
          }
          in_stack_00000018->x = pCVar1->x;
          in_stack_00000018->y = pCVar1->y;
          in_stack_00000018->z = pCVar1->z;
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
      } while ((iVar2 != g_PathfindingCurrentX) || (iVar3 != g_PathfindingCurrentZ));
      in_stack_00000014->x = 0.0;
      in_stack_00000014->z = 0.0;
      fVar4 = core_path_cpp_CPathMap_getDirection_FUN_005465b0
                        (this_ptr,uVar5,uVar6,local_14,(CVector3f *)direction_hint);
      in_stack_00000018->y = fVar4;
      return 1;
    }
    local_f8.x = (this_ptr->current_position).x - *(float *)direction_hint;
    local_f8.y = (this_ptr->current_position).y - *(float *)(direction_hint + 4);
    local_f8.z = (this_ptr->current_position).z - *(float *)(direction_hint + 8);
    in_stack_fffffeec = &local_f8;
    pCVar1 = &CStack_ec;
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
  *(uint *)direction_hint = 0;
  *(uint *)(direction_hint + 8) = 0;
  fVar4 = core_path_cpp_CPathMap_getDirection_FUN_005465b0(this_ptr,iVar2,-1,-1,out_euler_angles);
  in_stack_00000014->y = fVar4;
  return 1;
}
