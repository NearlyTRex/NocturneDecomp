// Name: core_dtrace.cpp_CDemonRaytrace_testCapsuleCollision_FUN_00496c60
// Address: 00496c60
// Address Range: [[00496c60, 00496e65]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_testCapsuleCollision_FUN_00496c60(CDemonRaytrace *this_ptr,SCapsuleCollision *capsule_data)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_dtrace_cpp_CDemonRaytrace_testCapsuleCollision_FUN_00496c60(CDemonRaytrace *this_ptr,SCapsuleCollision *capsule_data)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  int grid_y;
  int grid_z;
  float fVar18;
  float fVar19;
  float fVar20;
  CDemonCube *this_ptr_00;
  int grid_x;
  
  if (capsule_data->dir_x <= 0.0) {
    fVar4 = ((capsule_data->start_x + capsule_data->dir_x) - (this_ptr->bbox_min).x) -
            capsule_data->radius;
    fVar1 = (this_ptr->cell_size).x;
    fVar11 = capsule_data->start_x;
  }
  else {
    fVar4 = (capsule_data->start_x - (this_ptr->bbox_min).x) - capsule_data->radius;
    fVar1 = (this_ptr->cell_size).x;
    fVar11 = capsule_data->start_x + capsule_data->dir_x;
  }
  fVar2 = (this_ptr->bbox_min).x;
  fVar3 = capsule_data->radius;
  grid_x = (int)ROUND(ROUND(fVar4 * (1.0 / fVar1)));
  fVar4 = capsule_data->bottom_y;
  fVar5 = (this_ptr->bbox_min).y;
  fVar13 = 1.0 / (this_ptr->cell_size).y;
  fVar6 = capsule_data->top_y;
  fVar7 = (this_ptr->bbox_min).y;
  if (capsule_data->dir_z <= 0.0) {
    fVar14 = ((capsule_data->start_z + capsule_data->dir_z) - (this_ptr->bbox_min).z) -
             capsule_data->radius;
    fVar8 = (this_ptr->cell_size).z;
    fVar12 = capsule_data->start_z;
  }
  else {
    fVar14 = (capsule_data->start_z - (this_ptr->bbox_min).z) - capsule_data->radius;
    fVar8 = (this_ptr->cell_size).z;
    fVar12 = capsule_data->start_z + capsule_data->dir_z;
  }
  fVar9 = (this_ptr->bbox_min).z;
  fVar10 = capsule_data->radius;
  g_TempNormal0.z = g_ZeroVector.z;
  g_TempNormal0.x = g_ZeroVector.x;
  g_TempNormal1.y = g_ZeroVector.y;
  g_TempNormal2.y = g_ZeroVector.y;
  g_TempNormal2.z = g_ZeroVector.z;
  g_TempNormal2.x = g_ZeroVector.x;
  fVar15 = g_ZeroVector.x;
  fVar16 = g_ZeroVector.z;
  fVar17 = g_ZeroVector.y;
  for (; grid_y = (int)ROUND(ROUND((fVar4 - fVar5) * fVar13)), fVar18 = g_ZeroVector.y,
      fVar19 = g_ZeroVector.x, fVar20 = g_ZeroVector.z,
      grid_x <= (int)ROUND(ROUND(((fVar11 - fVar2) + fVar3) * (1.0 / fVar1))); grid_x = grid_x + 1)
  {
    for (; g_ZeroVector.z = fVar20, g_ZeroVector.x = fVar19, g_ZeroVector.y = fVar18,
        grid_z = (int)ROUND(ROUND(fVar14 * (1.0 / fVar8))), g_TempNormal0.y = g_ZeroVector.y,
        g_TempNormal1.x = g_ZeroVector.x, g_TempNormal1.z = g_ZeroVector.z,
        grid_y <= (int)ROUND(ROUND((fVar6 - fVar7) * fVar13)); grid_y = grid_y + 1) {
      for (; g_ZeroVector.z = fVar16, g_ZeroVector.y = fVar17, g_ZeroVector.x = fVar15,
          grid_z <= (int)ROUND(ROUND(((fVar12 - fVar9) + fVar10) * (1.0 / fVar8)));
          grid_z = grid_z + 1) {
        this_ptr_00 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
                                (this_ptr,grid_x,grid_y,grid_z);
        if (this_ptr_00 != (CDemonCube *)0x0) {
          core_dcube_cpp_CDemonCube_testCapsuleCollision_FUN_00457a90
                    (this_ptr_00,(SIntersectXZCylinder *)capsule_data);
        }
        fVar15 = g_ZeroVector.x;
        fVar17 = g_ZeroVector.y;
        fVar16 = g_ZeroVector.z;
      }
      fVar18 = g_TempNormal0.y;
      fVar19 = g_TempNormal1.x;
      fVar20 = g_TempNormal1.z;
      fVar15 = g_ZeroVector.x;
      fVar17 = g_ZeroVector.y;
      fVar16 = g_ZeroVector.z;
    }
  }
  g_TempNormal0.y = g_ZeroVector.y;
  g_TempNormal1.x = g_ZeroVector.x;
  g_TempNormal1.z = g_ZeroVector.z;
  g_ZeroVector.x = fVar15;
  g_ZeroVector.y = fVar17;
  g_ZeroVector.z = fVar16;
  return;
}
