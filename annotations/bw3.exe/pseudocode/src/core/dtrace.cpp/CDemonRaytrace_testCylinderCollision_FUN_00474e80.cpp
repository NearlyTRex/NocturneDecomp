// Name: core_dtrace.cpp_CDemonRaytrace_testCylinderCollision_FUN_00474e80
// Address: 00474e80
// Address Range: [[00474e80, 00475085]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_testCylinderCollision_FUN_00474e80(CDemonRaytrace *this_ptr,SIntersectXZCylinder *cylinder)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x00474fd8) */
/* WARNING: Removing unreachable block (ram,0x00474fe4) */
/* WARNING: Removing unreachable block (ram,0x00474ff8) */
/* WARNING: Removing unreachable block (ram,0x00475002) */
/* WARNING: Removing unreachable block (ram,0x0047500b) */
/* WARNING: Removing unreachable block (ram,0x00475014) */
/* WARNING: Removing unreachable block (ram,0x00474fcc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dtrace_cpp_CDemonRaytrace_testCylinderCollision_FUN_00474e80(CDemonRaytrace *this_ptr,SIntersectXZCylinder *cylinder)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int unaff_EBX;
  int unaff_EDI;
  
  _DAT_01548b5c = _DAT_02cfd904;
  _DAT_01548b78 = _DAT_02cfd908;
  _DAT_01548b70 = _DAT_02cfd900;
  _DAT_01548b6c = _DAT_02cfd908;
  _DAT_01548b64 = _DAT_02cfd900;
  _DAT_01548b60 = _DAT_02cfd908;
  _DAT_01548b58 = _DAT_02cfd900;
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
  _DAT_01548b68 = _DAT_01548b5c;
  _DAT_01548b74 = _DAT_01548b5c;
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
