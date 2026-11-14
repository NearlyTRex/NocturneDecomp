// Name: core_dtrace.cpp_CDemonRaytrace_testCylinderCollision_FUN_0048c300
// Address: 0048c300
// Address Range: [[0048c300, 0048c505]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_testCylinderCollision_FUN_0048c300(CDemonRaytrace *this_ptr,SIntersectXZCylinder *cylinder)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dtrace_cpp_CDemonRaytrace_testCylinderCollision_FUN_0048c300(CDemonRaytrace *this_ptr,SIntersectXZCylinder *cylinder)

{
  int grid_y;
  int grid_z;
  CDemonCube *this_ptr_00;
  int grid_x;
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  _DAT_0152c2ac = _DAT_02c8af2c;
  _DAT_0152c2c8 = _DAT_02c8af30;
  _DAT_0152c2c0 = _DAT_02c8af28;
  _DAT_0152c2bc = _DAT_02c8af30;
  _DAT_0152c2b4 = _DAT_02c8af28;
  _DAT_0152c2b0 = _DAT_02c8af30;
  _DAT_0152c2a8 = _DAT_02c8af28;
  if (cylinder->dir_x <= 0.0) {
    fVar1 = (((float10)cylinder->center_x + (float10)cylinder->dir_x) -
            (float10)(this_ptr->bbox_min).x) - (float10)cylinder->radius;
    fVar2 = (float10)1 / (float10)(this_ptr->cell_size).x;
    fVar3 = (float10)cylinder->center_x;
  }
  else {
    fVar1 = ((float10)cylinder->center_x - (float10)(this_ptr->bbox_min).x) -
            (float10)cylinder->radius;
    fVar2 = (float10)1 / (float10)(this_ptr->cell_size).x;
    fVar3 = (float10)cylinder->center_x + (float10)cylinder->dir_x;
  }
  fVar1 = fVar1 * fVar2;
  fVar2 = ((fVar3 - (float10)(this_ptr->bbox_min).x) + (float10)cylinder->radius) * fVar2;
  _DAT_0152c2b8 = _DAT_0152c2ac;
  _DAT_0152c2c4 = _DAT_0152c2ac;
  round();
  round();
  grid_x = (int)ROUND(fVar1);
  fVar4 = (float10)1 / (float10)(this_ptr->cell_size).y;
  fVar1 = ((float10)cylinder->bottom_y - (float10)(this_ptr->bbox_min).y) * fVar4;
  fVar4 = ((float10)cylinder->top_y - (float10)(this_ptr->bbox_min).y) * fVar4;
  fVar3 = (float10)0;
  round();
  round();
  if ((float10)cylinder->dir_z <= fVar3) {
    fVar5 = (((float10)cylinder->center_z + (float10)cylinder->dir_z) -
            (float10)(this_ptr->bbox_min).z) - (float10)cylinder->radius;
    fVar6 = (float10)1 / (float10)(this_ptr->cell_size).z;
    fVar3 = (float10)cylinder->center_z;
  }
  else {
    fVar5 = ((float10)cylinder->center_z - (float10)(this_ptr->bbox_min).z) -
            (float10)cylinder->radius;
    fVar6 = (float10)1 / (float10)(this_ptr->cell_size).z;
    fVar3 = (float10)cylinder->center_z + (float10)cylinder->dir_z;
  }
  fVar5 = fVar5 * fVar6;
  fVar6 = ((fVar3 - (float10)(this_ptr->bbox_min).z) + (float10)cylinder->radius) * fVar6;
  round();
  round();
  for (; grid_y = (int)ROUND(fVar1), grid_x <= (int)ROUND(fVar2); grid_x = grid_x + 1) {
    for (; grid_z = (int)ROUND(fVar5), grid_y <= (int)ROUND(fVar4); grid_y = grid_y + 1) {
      for (; grid_z <= (int)ROUND(fVar6); grid_z = grid_z + 1) {
        this_ptr_00 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_0048afe0
                                (this_ptr,grid_x,grid_y,grid_z);
        if (this_ptr_00 != (CDemonCube *)0x0) {
          core_dcube_cpp_CDemonCube_testCylinderCollision_FUN_004583d0(this_ptr_00,cylinder);
        }
      }
    }
  }
  return;
}
