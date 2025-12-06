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
  int iVar2;
  int iVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  BADSPACEBASE *in_ESP;
  int unaff_ESI;
  float *pfVar7;
  byte bVar8;
  float10 fVar9;
  double dVar10;
  CVector3f *in_stack_00000014;
  float *in_stack_00000028;
  CVector3f *in_stack_0000002c;
  CVector3f *in_stack_00000030;
  uint *in_stack_00000034;
  CVector3f *in_stack_00000038;
  float afStackY_103c [967];
  CVector3i *in_stack_fffffee8;
  CVector3f *in_stack_ffffff08;
  CVector3f *in_stack_ffffff0c;
  CVector3f CStack_f0;
  CVector3f CStack_e4;
  CVector3f local_d8;
  CVector3f CStack_cc;
  CVector3f aCStack_c0 [2];
  uint uStack_a8;
  uint local_a0;
  uint local_9c;
  CVector3f local_98;
  CVector3f CStack_84;
  int local_78;
  CVector3f CStack_6c;
  CVector3f local_60;
  float fStack_54;
  float afStack_50 [4];
  float local_40;
  CVector3f local_3c [3];
  float local_14;
  
  bVar8 = 0;
  core_dtrace_cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00499880
            (&g_CDemonRaytraceInstance,dest_position,in_stack_fffffee8);
  pfVar7 = (float *)((int)this_ptr + (uint)bVar8 * -8 + 0x1c);
  this_ptr->field2_0x18 = (int)fStack_54;
  *pfVar7 = afStack_50[(uint)bVar8 * -2];
  pfVar7[(uint)bVar8 * -2 + 1] = afStack_50[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
  local_9c = 0;
  local_98.x = 0.0;
  local_98.y = 0.0;
  switch(direction_hint % 9) {
  case 1:
    local_9c = 4;
    break;
  case 2:
    local_9c = 0xfffffffc;
    break;
  case 3:
    local_98.y = 5.60519e-45;
    break;
  case 4:
    local_98.y = -NAN;
    break;
  case 5:
    local_98.y = 5.60519e-45;
    local_9c = 4;
    break;
  case 6:
    local_98.y = 5.60519e-45;
    local_9c = 0xfffffffc;
    break;
  case 7:
    local_98.y = -NAN;
    local_9c = 0xfffffffc;
    break;
  case 8:
    local_98.y = -NAN;
    local_9c = 4;
  }
  uStack_a8 = (this_ptr->voxel_coords).x - this_ptr->field2_0x18;
  if (0x31 < (int)((uStack_a8 ^ (int)uStack_a8 >> 0x1f) - ((int)uStack_a8 >> 0x1f))) {
    afStack_50[2] = (this_ptr->current_position).x - out_euler_angles->x;
    afStack_50[3] = (this_ptr->current_position).y - out_euler_angles->y;
    local_40 = (this_ptr->current_position).z - out_euler_angles->z;
LAB_005473e0:
    pCVar1 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                       (in_stack_ffffff08,in_stack_ffffff0c);
    if (pCVar1 != in_stack_00000038) {
      in_stack_00000038->x = pCVar1->x;
      in_stack_00000038->y = pCVar1->y;
      in_stack_00000038->z = pCVar1->z;
    }
    return 2;
  }
  local_a0 = (this_ptr->voxel_coords).z - this_ptr->field4_0x20;
  if (0x31 < (int)((local_a0 ^ (int)local_a0 >> 0x1f) - ((int)local_a0 >> 0x1f))) {
    local_60.x = (this_ptr->current_position).x - out_euler_angles->x;
    local_60.y = (this_ptr->current_position).y - out_euler_angles->y;
    local_60.z = (this_ptr->current_position).z - out_euler_angles->z;
    pCVar1 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&CStack_84,&local_60)
    ;
    if (pCVar1 == in_stack_00000014) {
      return 2;
    }
    in_stack_00000014->x = pCVar1->x;
    in_stack_00000014->y = pCVar1->y;
    in_stack_00000014->z = pCVar1->z;
    return 2;
  }
  iVar2 = (this_ptr->grid_origin).z;
  g_PathfindingCurrentX = this_ptr->field2_0x18 - (this_ptr->grid_origin).x;
  g_PathfindingDestZ = 0x32;
  g_PathfindingDestX = 0x32;
  g_PathfindingCurrentZ = this_ptr->field4_0x20 - iVar2;
  if ((((g_PathfindingCurrentX < 0) || (99 < g_PathfindingCurrentX)) || (g_PathfindingCurrentZ < 0))
     || (99 < g_PathfindingCurrentZ)) {
    local_d8.x = (this_ptr->current_position).x - out_euler_angles->x;
    local_d8.y = (this_ptr->current_position).y - out_euler_angles->y;
    local_d8.z = (this_ptr->current_position).z - out_euler_angles->z;
    pCVar1 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(aCStack_c0,&local_d8)
    ;
    if (pCVar1 == in_stack_00000014) {
      return 2;
    }
    in_stack_00000014->x = pCVar1->x;
    in_stack_00000014->y = pCVar1->y;
    in_stack_00000014->z = pCVar1->z;
    return 2;
  }
  if ((g_PathfindingCurrentX == 0x32) && (g_PathfindingCurrentZ == 0x32)) {
    local_3c[0].x = (this_ptr->current_position).x - out_euler_angles->x;
    local_3c[0].y = (this_ptr->current_position).y - out_euler_angles->y;
    local_3c[0].z = (this_ptr->current_position).z - out_euler_angles->z;
    pCVar1 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&CStack_6c,local_3c);
    if (pCVar1 != in_stack_00000014) {
      in_stack_00000014->x = pCVar1->x;
      in_stack_00000014->y = pCVar1->y;
      in_stack_00000014->z = pCVar1->z;
    }
    return 1;
  }
  dVar10 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(iVar2,out_euler_angles));
  fVar9 = (float10)*SUB84 /* extract 2-byte value */(dVar10,0);
  crt_math_c_round_FUN_005fe6b0(dVar10);
  dVar10 = crt_math_c_round_FUN_005fe6b0
                     ((double)CONCAT44 /* combine 2-byte values */(unaff_ESI - (int)ROUND(fVar9) >> 0x1f,in_stack_00000014));
  crt_math_c_round_FUN_005fe6b0(dVar10);
  iVar2 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                    (this_ptr,g_PathfindingCurrentZ,g_PathfindingCurrentX,this_ptr->field3_0x1c);
  iVar3 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                    (this_ptr,g_PathfindingDestZ,g_PathfindingDestX,(this_ptr->voxel_coords).y);
  iVar2 = core_path_cpp_CPathMap_isLineWalkable_FUN_00546c40
                    (this_ptr,g_PathfindingCurrentX,g_PathfindingCurrentZ,iVar2,g_PathfindingDestX,
                     g_PathfindingDestZ,iVar3);
  if (iVar2 != 0) {
    local_14 = g_CDemonRaytraceInstance.adjusted_size.x;
    if ((CPathMap *)&local_60.y != this_ptr) {
      local_60.y = (this_ptr->current_position).x;
      local_60.z = (this_ptr->current_position).y;
      fStack_54 = (this_ptr->current_position).z;
    }
    local_60.y = (float)(int)CStack_84.y * g_CDemonRaytraceInstance.adjusted_size.x + local_60.y;
    fStack_54 = (float)local_78 * g_CDemonRaytraceInstance.adjusted_size.z + fStack_54;
    local_98.x = (this_ptr->current_position).x - *in_stack_00000028;
    local_98.y = (this_ptr->current_position).y - in_stack_00000028[1];
    local_98.z = (this_ptr->current_position).z - in_stack_00000028[2];
    pCVar1 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                       ((CVector3f *)&stack0xfffffff8,&local_98);
    if (pCVar1 != in_stack_00000030) {
      in_stack_00000030->x = pCVar1->x;
      in_stack_00000030->y = pCVar1->y;
      in_stack_00000030->z = pCVar1->z;
    }
    return 1;
  }
  iVar2 = core_path_cpp_CPathMap_checkAxisAlignedPath_FUN_00546e90
                    (this_ptr,g_PathfindingDestX,g_PathfindingDestZ,g_PathfindingCurrentX,
                     g_PathfindingCurrentZ,(int)in_stack_ffffff08);
  if (iVar2 == 0) {
    uVar5 = core_path_cpp_CPathMap_queuePop_FUN_005487a0(this_ptr,this_ptr->field3_0x1c);
    if (uVar5 != 0) {
      uVar5 = this_ptr->height_cache[g_PathfindingDestZ][g_PathfindingDestX] -
              (this_ptr->voxel_coords).y;
      uVar6 = (int)uVar5 >> 0x1f;
      if (3 < (int)((uVar5 ^ uVar6) - uVar6)) {
        CStack_6c.x = (this_ptr->current_position).x - in_stack_00000030->x;
        CStack_6c.y = (this_ptr->current_position).y - in_stack_00000030->y;
        CStack_6c.z = (this_ptr->current_position).z - in_stack_00000030->z;
        pCVar1 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                           (aCStack_c0,&CStack_6c);
        if (pCVar1 == in_stack_00000038) {
          return 2;
        }
        in_stack_00000038->x = pCVar1->x;
        in_stack_00000038->y = pCVar1->y;
        in_stack_00000038->z = pCVar1->z;
        return 2;
      }
      direction_hint = -1;
      iVar2 = g_PathfindingDestX;
      iVar3 = g_PathfindingDestZ;
      uVar5 = 0xffffffff;
      uVar6 = direction_hint;
      do {
        direction_hint = uVar6;
        uVar6 = uVar5;
        uVar5 = (uint)(byte)g_PathfindingVisited[iVar3][iVar2];
        if (uVar5 == 0) {
          CStack_f0.x = (this_ptr->current_position).x - in_stack_00000030->x;
          CStack_f0.y = (this_ptr->current_position).y - in_stack_00000030->y;
          CStack_f0.z = (this_ptr->current_position).z - in_stack_00000030->z;
          pCVar1 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                             (&CStack_e4,&CStack_f0);
          if (pCVar1 == in_stack_00000038) {
            return 2;
          }
          in_stack_00000038->x = pCVar1->x;
          in_stack_00000038->y = pCVar1->y;
          in_stack_00000038->z = pCVar1->z;
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
      *in_stack_00000034 = 0;
      in_stack_00000034[2] = 0;
      fVar4 = core_path_cpp_CPathMap_getDirection_FUN_005465b0
                        (this_ptr,uVar5,uVar6,direction_hint,in_stack_00000030);
      in_stack_00000038->y = fVar4;
      return 1;
    }
    local_d8.x = (this_ptr->current_position).x - in_stack_00000030->x;
    local_d8.y = (this_ptr->current_position).y - in_stack_00000030->y;
    local_d8.z = (this_ptr->current_position).z - in_stack_00000030->z;
    in_stack_ffffff0c = &local_d8;
    in_stack_ffffff08 = &CStack_cc;
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
  in_stack_00000030->x = 0.0;
  in_stack_00000030->z = 0.0;
  fVar4 = core_path_cpp_CPathMap_getDirection_FUN_005465b0(this_ptr,iVar2,-1,-1,in_stack_0000002c);
  in_stack_00000034[1] = fVar4;
  return 1;
}
