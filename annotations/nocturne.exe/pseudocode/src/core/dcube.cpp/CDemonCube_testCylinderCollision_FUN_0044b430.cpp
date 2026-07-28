// Name: core_dcube.cpp_CDemonCube_testCylinderCollision_FUN_0044b430
// Address: 0044b430
// Address Range: [[0044b430, 0044b4ff]]
// Convention: __cdecl
// Signature: void __cdecl core_dcube_cpp_CDemonCube_testCylinderCollision_FUN_0044b430(CDemonCube *this_ptr,SIntersectXZCylinder *cylinder)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcube_cpp_CDemonCube_testCylinderCollision_FUN_0044b430(CDemonCube *this_ptr,SIntersectXZCylinder *cylinder)

{
  CVector3f *pCVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = -1;
  iVar3 = 0;
  if (0 < this_ptr->triangle_count) {
    iVar5 = 0;
    do {
      uVar2 = core_dcube_cpp_intersectTriangleWithXZCylinder_FUN_00449720
                        ((STriangleRef *)
                         ((int)(this_ptr->triangle_buffer->triangle).vertices + iVar5),cylinder);
      if (uVar2 != 0) {
        iVar4 = iVar3;
      }
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + 0x20;
    } while (iVar3 < this_ptr->triangle_count);
  }
  if (-1 < iVar4) {
    pCVar1 = this_ptr->triangle_buffer[iVar4].triangle.vertices[0];
    if (pCVar1 != (CVector3f *)&DAT_014b89e8) {
      _DAT_014b89e8 = pCVar1->x;
      _DAT_014b89f0 = pCVar1->z;
      _DAT_014b89ec = pCVar1->y;
    }
    pCVar1 = this_ptr->triangle_buffer[iVar4].triangle.vertices[1];
    if (pCVar1 != (CVector3f *)&DAT_014b89f4) {
      _DAT_014b89f4 = pCVar1->x;
      _DAT_014b89fc = pCVar1->z;
      _DAT_014b89f8 = pCVar1->y;
    }
    pCVar1 = this_ptr->triangle_buffer[iVar4].triangle.vertices[2];
    if (pCVar1 != (CVector3f *)&DAT_014b8a00) {
      _DAT_014b8a04 = pCVar1->y;
      _DAT_014b8a08 = pCVar1->z;
      _DAT_014b8a00 = pCVar1->x;
      return;
    }
  }
  return;
}
