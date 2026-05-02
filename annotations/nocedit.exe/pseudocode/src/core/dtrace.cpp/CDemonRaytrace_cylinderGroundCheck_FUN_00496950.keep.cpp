// Name: core_dtrace.cpp_CDemonRaytrace_cylinderGroundCheck_FUN_00496950
// Address: 00496950
// MANUAL RECONSTRUCTION
// Address Range: [[00496950, 00496b81]]
// Convention: __cdecl
// Signature: float __cdecl core_dtrace_cpp_CDemonRaytrace_cylinderGroundCheck_FUN_00496950(CDemonRaytrace *this_ptr,CVector3f *pos,float radius,int *hit_flag,CVector3f *normal_out)

#include "nocturne.h"

float __cdecl core_dtrace_cpp_CDemonRaytrace_cylinderGroundCheck_FUN_00496950(CDemonRaytrace *this_ptr,CVector3f *pos,float radius,int *hit_flag,CVector3f *normal_out)

{
  int iVar1;
  CDemonCube *this_ptr_00;
  int iVar5;
  int grid_z;
  int grid_x;
  CVector3f CStack_58;
  CVector3f local_4c;
  CVector3f local_3c;
  int local_30;
  float local_2c;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  float fVar3;
  float fVar2;
  bool bVar4;
  float fVar1;
  
  local_4c.x = pos->x;
  local_4c.z = pos->z;
  local_4c.y = pos->y + 2.0f;
  fVar3 = pos->y + -10.0f;
  fVar1 = 1.0 / (this_ptr->cell_size).y;
  local_3c.y = local_4c.x - (this_ptr->bbox_min).x;
  fVar2 = 1.0 / (this_ptr->cell_size).x;
  local_3c.z = local_4c.z - (this_ptr->bbox_min).z;
  local_2c = 1.0 / (this_ptr->cell_size).z;
  bVar4 = false;
  local_18 = (int)ROUND(ROUND((local_4c.y - (this_ptr->bbox_min).y) * fVar1));
  local_24 = (int)ROUND(ROUND((fVar3 - (this_ptr->bbox_min).y) * fVar1));
  local_3c.x = -1e+30;
  iVar1 = (int)ROUND(ROUND((local_3c.y - radius) * fVar2));
  local_1c = (int)ROUND(ROUND((local_3c.z - radius) * local_2c));
  local_20 = (int)ROUND(ROUND((local_3c.y + radius) * fVar2));
  local_14 = (int)ROUND(ROUND((local_3c.z + radius) * local_2c));
  if (local_24 <= local_18) {
    do {
      grid_x = iVar1;
      if (iVar1 <= local_20) {
        do {
          grid_z = local_1c;
          if (local_1c <= local_14) {
            do {
              this_ptr_00 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
                                      (this_ptr,grid_x,local_18,grid_z);
              if (this_ptr_00 != (CDemonCube *)0x0) {
                iVar5 = core_dcube_cpp_CDemonCube_testCylinderGroundCollision_FUN_00457b60
                                  (this_ptr_00,&local_4c,radius,&local_3c,&CStack_58,
                                   (uint *)&local_30);
                if (iVar5 != 0) {
                  bVar4 = true;
                }
              }
              grid_z = grid_z + 1;
            } while (grid_z <= local_14);
          }
          grid_x = grid_x + 1;
        } while (grid_x <= local_20);
      }
      if (bVar4) {
        if ((normal_out != (CVector3f *)0x0) && (&CStack_58 != normal_out)) {
          normal_out->x = CStack_58.x;
          normal_out->y = CStack_58.y;
          normal_out->z = CStack_58.z;
        }
        if (hit_flag != (int *)0x0) {
          *hit_flag = local_30;
        }
        return local_3c.x;
      }
      local_18 = local_18 + -1;
    } while (local_24 <= local_18);
  }
  if (hit_flag != (int *)0x0) {
    *hit_flag = 1;
  }
  if (normal_out != (CVector3f *)0x0) {
    normal_out->y = 1.0;
    normal_out->z = 0.0;
    normal_out->x = 0.0;
  }
  return fVar3;
}
