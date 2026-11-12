// Name: core_dcube.cpp_CDemonCube_testCylinderCollision_FUN_00446d20
// Address: 00446d20
// Address Range: [[00446d20, 00446def]]
// Convention: __cdecl
// Signature: void __cdecl core_dcube_cpp_CDemonCube_testCylinderCollision_FUN_00446d20(CDemonCube *this_ptr,SIntersectXZCylinder *cylinder)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcube_cpp_CDemonCube_testCylinderCollision_FUN_00446d20(CDemonCube *this_ptr,SIntersectXZCylinder *cylinder)

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
      uVar2 = core_dcube_cpp_intersectTriangleWithXZCylinder_FUN_00445010
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
    if (pCVar1 != (CVector3f *)&DAT_01510da8) {
      _DAT_01510da8 = pCVar1->x;
      _DAT_01510db0 = pCVar1->z;
      _DAT_01510dac = pCVar1->y;
    }
    pCVar1 = this_ptr->triangle_buffer[iVar4].triangle.vertices[1];
    if (pCVar1 != (CVector3f *)&DAT_01510db4) {
      _DAT_01510db4 = pCVar1->x;
      _DAT_01510dbc = pCVar1->z;
      _DAT_01510db8 = pCVar1->y;
    }
    pCVar1 = this_ptr->triangle_buffer[iVar4].triangle.vertices[2];
    if (pCVar1 != (CVector3f *)&DAT_01510dc0) {
      _DAT_01510dc4 = pCVar1->y;
      _DAT_01510dc8 = pCVar1->z;
      _DAT_01510dc0 = pCVar1->x;
      return;
    }
  }
  return;
}
