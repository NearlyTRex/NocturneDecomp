// Name: core_dcube.cpp_CDemonCube_testCylinderCollision_FUN_004583d0
// Address: 004583d0
// Address Range: [[004583d0, 0045849f]]
// Convention: __cdecl
// Signature: void __cdecl core_dcube_cpp_CDemonCube_testCylinderCollision_FUN_004583d0(CDemonCube *this_ptr,SIntersectXZCylinder *cylinder)

#include "nocturne.h"

void __cdecl core_dcube_cpp_CDemonCube_testCylinderCollision_FUN_004583d0(CDemonCube *this_ptr,SIntersectXZCylinder *cylinder)

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
      uVar2 = core_dcube_cpp_intersectTriangleWithXZCylinder_FUN_004566c0
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
    if (pCVar1 != (CVector3f *)&g_FLOAT_0152c2a8) {
      g_FLOAT_0152c2a8 = pCVar1->x;
      g_FLOAT_0152c2b0 = pCVar1->z;
      g_INT_0152c2ac = (int)pCVar1->y;
    }
    pCVar1 = this_ptr->triangle_buffer[iVar4].triangle.vertices[1];
    if (pCVar1 != (CVector3f *)&g_FLOAT_0152c2b4) {
      g_FLOAT_0152c2b4 = pCVar1->x;
      g_FLOAT_0152c2bc = pCVar1->z;
      g_INT_0152c2b8 = (int)pCVar1->y;
    }
    pCVar1 = this_ptr->triangle_buffer[iVar4].triangle.vertices[2];
    if (pCVar1 != (CVector3f *)&g_FLOAT_0152c2c0) {
      g_INT_0152c2c4 = (int)pCVar1->y;
      g_FLOAT_0152c2c8 = pCVar1->z;
      g_FLOAT_0152c2c0 = pCVar1->x;
      return;
    }
  }
  return;
}
