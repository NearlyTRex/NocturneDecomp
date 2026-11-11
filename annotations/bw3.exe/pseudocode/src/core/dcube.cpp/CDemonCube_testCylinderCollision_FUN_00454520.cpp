// Name: core_dcube.cpp_CDemonCube_testCylinderCollision_FUN_00454520
// Address: 00454520
// Address Range: [[00454520, 004545ef]]
// Convention: __cdecl
// Signature: void __cdecl core_dcube_cpp_CDemonCube_testCylinderCollision_FUN_00454520(CDemonCube *this_ptr,SIntersectXZCylinder *cylinder)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcube_cpp_CDemonCube_testCylinderCollision_FUN_00454520(CDemonCube *this_ptr,SIntersectXZCylinder *cylinder)

{
  CVector3f *pCVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = -1;
  iVar3 = 0;
  if (0 < this_ptr->triangle_count) {
    iVar5 = 0;
    do {
      iVar2 = core_dcube_cpp_intersectTriangleWithXZCylinder_FUN_00452810
                        ((int)(this_ptr->triangle_buffer->triangle).vertices + iVar5,cylinder);
      if (iVar2 != 0) {
        iVar4 = iVar3;
      }
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + 0x20;
    } while (iVar3 < this_ptr->triangle_count);
  }
  if (-1 < iVar4) {
    pCVar1 = this_ptr->triangle_buffer[iVar4].triangle.vertices[0];
    if (pCVar1 != (CVector3f *)&DAT_01548b58) {
      _DAT_01548b58 = pCVar1->x;
      _DAT_01548b60 = pCVar1->z;
      _DAT_01548b5c = pCVar1->y;
    }
    pCVar1 = this_ptr->triangle_buffer[iVar4].triangle.vertices[1];
    if (pCVar1 != (CVector3f *)&DAT_01548b64) {
      _DAT_01548b64 = pCVar1->x;
      _DAT_01548b6c = pCVar1->z;
      _DAT_01548b68 = pCVar1->y;
    }
    pCVar1 = this_ptr->triangle_buffer[iVar4].triangle.vertices[2];
    if (pCVar1 != (CVector3f *)&DAT_01548b70) {
      _DAT_01548b74 = pCVar1->y;
      _DAT_01548b78 = pCVar1->z;
      _DAT_01548b70 = pCVar1->x;
      return;
    }
  }
  return;
}
