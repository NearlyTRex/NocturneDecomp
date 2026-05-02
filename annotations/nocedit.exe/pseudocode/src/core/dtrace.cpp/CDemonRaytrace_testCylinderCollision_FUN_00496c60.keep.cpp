// Name: core_dtrace.cpp_CDemonRaytrace_testCylinderCollision_FUN_00496c60
// Address: 00496c60
// MANUAL RECONSTRUCTION
// Address Range: [[00496c60, 00496e65]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_testCylinderCollision_FUN_00496c60(CDemonRaytrace *this_ptr,SIntersectXZCylinder *cylinder)

#include "nocturne.h"

void __cdecl core_dtrace_cpp_CDemonRaytrace_testCylinderCollision_FUN_00496c60(CDemonRaytrace *this_ptr,SIntersectXZCylinder *cylinder)

{
  float fVar1_00;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  CDemonCube *this_ptr_00;
  int grid_x;
  float fVar5;
  float fVar6;
  float fVar1;
  float fVar2;
  int grid_z;
  float fVar18;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar3;
  float fVar4;
  float fVar13;
  float fVar14;
  float fVar19;
  float fVar20;
  int grid_y;
  float fVar11;
  float fVar12;
  
  if (cylinder->dir_x <= 0.0) {
    fVar1_00 = ((cylinder->center_x + cylinder->dir_x) - (this_ptr->bbox_min).x) - cylinder->radius;
    fVar1 = (this_ptr->cell_size).x;
    fVar11 = cylinder->center_x;
  }
  else {
    fVar1_00 = (cylinder->center_x - (this_ptr->bbox_min).x) - cylinder->radius;
    fVar1 = (this_ptr->cell_size).x;
    fVar11 = cylinder->center_x + cylinder->dir_x;
  }
  fVar2 = (this_ptr->bbox_min).x;
  fVar3 = cylinder->radius;
  grid_x = (int)ROUND(ROUND(fVar1_00 * (1.0 / fVar1)));
  fVar4 = cylinder->bottom_y;
  fVar5 = (this_ptr->bbox_min).y;
  fVar13 = 1.0 / (this_ptr->cell_size).y;
  fVar6 = cylinder->top_y;
  fVar7 = (this_ptr->bbox_min).y;
  if (cylinder->dir_z <= 0.0) {
    fVar14 = ((cylinder->center_z + cylinder->dir_z) - (this_ptr->bbox_min).z) - cylinder->radius;
    fVar8 = (this_ptr->cell_size).z;
    fVar12 = cylinder->center_z;
  }
  else {
    fVar14 = (cylinder->center_z - (this_ptr->bbox_min).z) - cylinder->radius;
    fVar8 = (this_ptr->cell_size).z;
    fVar12 = cylinder->center_z + cylinder->dir_z;
  }
  fVar9 = (this_ptr->bbox_min).z;
  fVar10 = cylinder->radius;
  g_TempNormal0.z = g_ZeroVector.f.z;
  g_TempNormal0.x = g_ZeroVector.f.x;
  g_TempNormal1.y = g_ZeroVector.f.y;
  g_TempNormal2.y = g_ZeroVector.f.y;
  g_TempNormal2.z = g_ZeroVector.f.z;
  g_TempNormal2.x = g_ZeroVector.f.x;
  uVar12 = g_ZeroVector.f.x;
  uVar13 = g_ZeroVector.f.z;
  uVar14 = g_ZeroVector.f.y;
  for (; grid_y = (int)ROUND(ROUND((fVar4 - fVar5) * fVar13)), fVar18 = g_ZeroVector.f.y,
      fVar19 = g_ZeroVector.f.x, fVar20 = g_ZeroVector.f.z,
      grid_x <= (int)ROUND(ROUND(((fVar11 - fVar2) + fVar3) * (1.0 / fVar1))); grid_x = grid_x + 1)
  {
    for (; g_ZeroVector.f.z = fVar20, g_ZeroVector.f.x = fVar19, g_ZeroVector.f.y = fVar18,
        grid_z = (int)ROUND(ROUND(fVar14 * (1.0 / fVar8))), g_TempNormal0.y = g_ZeroVector.f.y,
        g_TempNormal1.x = g_ZeroVector.f.x, g_TempNormal1.z = g_ZeroVector.f.z,
        grid_y <= (int)ROUND(ROUND((fVar6 - fVar7) * fVar13)); grid_y = grid_y + 1) {
      for (; g_ZeroVector.f.z = (float)uVar13, g_ZeroVector.f.y = (float)uVar14,
          g_ZeroVector.f.x = (float)uVar12,
          grid_z <= (int)ROUND(ROUND(((fVar12 - fVar9) + fVar10) * (1.0 / fVar8)));
          grid_z = grid_z + 1) {
        this_ptr_00 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
                                (this_ptr,grid_x,grid_y,grid_z);
        if (this_ptr_00 != (CDemonCube *)0x0) {
          core_dcube_cpp_CDemonCube_testCylinderCollision_FUN_00457a90(this_ptr_00,cylinder);
        }
        uVar12 = g_ZeroVector.f.x;
        uVar14 = g_ZeroVector.f.y;
        uVar13 = g_ZeroVector.f.z;
      }
      fVar18 = g_TempNormal0.y;
      fVar19 = g_TempNormal1.x;
      fVar20 = g_TempNormal1.z;
      uVar12 = g_ZeroVector.f.x;
      uVar14 = g_ZeroVector.f.y;
      uVar13 = g_ZeroVector.f.z;
    }
  }
  g_TempNormal0.y = g_ZeroVector.f.y;
  g_TempNormal1.x = g_ZeroVector.f.x;
  g_TempNormal1.z = g_ZeroVector.f.z;
  g_ZeroVector.f.x = (float)uVar12;
  g_ZeroVector.f.y = (float)uVar14;
  g_ZeroVector.f.z = (float)uVar13;
  return;
}
