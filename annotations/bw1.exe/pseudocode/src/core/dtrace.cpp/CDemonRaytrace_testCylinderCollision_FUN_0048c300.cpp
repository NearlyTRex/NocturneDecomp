// Name: core_dtrace.cpp_CDemonRaytrace_testCylinderCollision_FUN_0048c300
// Address: 0048c300
// Address Range: [[0048c300, 0048c505]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_testCylinderCollision_FUN_0048c300(CDemonRaytrace *this_ptr,SIntersectXZCylinder *cylinder)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0048c458) */
/* WARNING: Removing unreachable block (ram,0x0048c464) */
/* WARNING: Removing unreachable block (ram,0x0048c478) */
/* WARNING: Removing unreachable block (ram,0x0048c482) */
/* WARNING: Removing unreachable block (ram,0x0048c48b) */
/* WARNING: Removing unreachable block (ram,0x0048c494) */
/* WARNING: Removing unreachable block (ram,0x0048c44c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dtrace_cpp_CDemonRaytrace_testCylinderCollision_FUN_0048c300(CDemonRaytrace *this_ptr,SIntersectXZCylinder *cylinder)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int unaff_EBX;
  int unaff_EDI;
  
  _DAT_0152c2ac = _DAT_02c8af2c;
  _DAT_0152c2c8 = _DAT_02c8af30;
  _DAT_0152c2c0 = _DAT_02c8af28;
  _DAT_0152c2bc = _DAT_02c8af30;
  _DAT_0152c2b4 = _DAT_02c8af28;
  _DAT_0152c2b0 = _DAT_02c8af30;
  _DAT_0152c2a8 = _DAT_02c8af28;
  if (cylinder->dir_x <= 0.0) {
    fVar5 = ((cylinder->center_x + cylinder->dir_x) - (this_ptr->bbox_min).x) - cylinder->radius;
    fVar1 = (this_ptr->cell_size).x;
    fVar4 = cylinder->center_x;
  }
  else {
    fVar5 = (cylinder->center_x - (this_ptr->bbox_min).x) - cylinder->radius;
    fVar1 = (this_ptr->cell_size).x;
    fVar4 = cylinder->center_x + cylinder->dir_x;
  }
  fVar2 = (this_ptr->bbox_min).x;
  fVar3 = cylinder->radius;
  _DAT_0152c2b8 = _DAT_0152c2ac;
  _DAT_0152c2c4 = _DAT_0152c2ac;
  round((double)(fVar5 * (1.0 / fVar1)));
  round((double)(((fVar4 - fVar2) + fVar3) * (1.0 / fVar1)));
  fVar5 = 1.0 / *(float *)(unaff_EBX + 0x2c);
  fVar1 = cylinder->top_y;
  fVar4 = *(float *)(unaff_EBX + 0x14);
  round
            ((double)((cylinder->bottom_y - *(float *)(unaff_EBX + 0x14)) * fVar5));
  round((double)((fVar1 - fVar4) * fVar5));
  if (cylinder->dir_z <= 0.0) {
    fVar5 = ((cylinder->center_z + cylinder->dir_z) - *(float *)(unaff_EDI + 0x18)) -
            cylinder->radius;
    fVar1 = *(float *)(unaff_EDI + 0x30);
    fVar4 = cylinder->center_z;
  }
  else {
    fVar5 = (cylinder->center_z - *(float *)(unaff_EDI + 0x18)) - cylinder->radius;
    fVar1 = *(float *)(unaff_EDI + 0x30);
    fVar4 = cylinder->center_z + cylinder->dir_z;
  }
  fVar2 = *(float *)(unaff_EDI + 0x18);
  fVar3 = cylinder->radius;
  round((double)(fVar5 * (1.0 / fVar1)));
  round((double)(((fVar4 - fVar2) + fVar3) * (1.0 / fVar1)));
  return;
}
