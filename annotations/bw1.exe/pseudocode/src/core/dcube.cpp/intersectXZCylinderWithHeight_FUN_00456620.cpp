// Name: core_dcube.cpp_intersectXZCylinderWithHeight_FUN_00456620
// Address: 00456620
// Address Range: [[00456620, 004566bd]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_dcube_cpp_intersectXZCylinderWithHeight_FUN_00456620(SIntersectXZCylinder *param_1,float *param_2,float *param_3)

#include "nocturne.h"

uint __cdecl core_dcube_cpp_intersectXZCylinderWithHeight_FUN_00456620(SIntersectXZCylinder *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  
  param_1->edge_x1 = *param_2;
  param_1->edge_z1 = param_2[2];
  param_1->edge_x2 = *param_3;
  param_1->edge_z2 = param_3[2];
  iVar7 = core_dcube_cpp_intersectXZCylinder_FUN_00456340(param_1);
  if (((iVar7 != 0) &&
      (fVar1 = (param_3[1] - param_2[1]) * param_1->param_clamped + param_2[1],
      param_1->bottom_y < fVar1)) && (fVar1 < param_1->top_y)) {
    fVar1 = param_1->dir_x;
    fVar2 = param_1->param_t;
    fVar3 = param_1->dir_z;
    fVar4 = param_1->param_t;
    fVar5 = param_1->param_t;
    (param_1->push_normal).y = 0.0;
    param_1->closest_t = fVar5;
    fVar5 = param_1->center_x;
    fVar6 = param_1->intersect_x;
    (param_1->push_normal).z = (fVar3 * fVar4 + param_1->center_z) - param_1->intersect_z;
    (param_1->push_normal).x = (fVar1 * fVar2 + fVar5) - fVar6;
    return 1;
  }
  return 0;
}
