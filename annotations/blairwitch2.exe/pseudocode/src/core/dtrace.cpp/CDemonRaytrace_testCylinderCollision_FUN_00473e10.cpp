// Name: core_dtrace.cpp_CDemonRaytrace_testCylinderCollision_FUN_00473e10
// Address: 00473e10
// Address Range: [[00473e10, 00474015]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_testCylinderCollision_FUN_00473e10(CDemonRaytrace *this_ptr,SIntersectXZCylinder *cylinder)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x00473f68) */
/* WARNING: Removing unreachable block (ram,0x00473f74) */
/* WARNING: Removing unreachable block (ram,0x00473f88) */
/* WARNING: Removing unreachable block (ram,0x00473f92) */
/* WARNING: Removing unreachable block (ram,0x00473f9b) */
/* WARNING: Removing unreachable block (ram,0x00473fa4) */
/* WARNING: Removing unreachable block (ram,0x00473f5c) */

void __cdecl core_dtrace_cpp_CDemonRaytrace_testCylinderCollision_FUN_00473e10(CDemonRaytrace *this_ptr,SIntersectXZCylinder *cylinder)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int unaff_EBX;
  int unaff_EDI;
  
  g_INT_01510dac = (int)g_CVector3f_0265370c.y;
  g_FLOAT_01510dc8 = g_CVector3f_0265370c.z;
  g_FLOAT_01510dc0 = g_CVector3f_0265370c.x;
  g_FLOAT_01510dbc = g_CVector3f_0265370c.z;
  g_FLOAT_01510db4 = g_CVector3f_0265370c.x;
  g_FLOAT_01510db0 = g_CVector3f_0265370c.z;
  g_FLOAT_01510da8 = g_CVector3f_0265370c.x;
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
  g_INT_01510db8 = g_INT_01510dac;
  g_INT_01510dc4 = g_INT_01510dac;
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
