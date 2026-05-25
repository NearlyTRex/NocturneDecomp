// Name: core_dcube.cpp_CDemonCube_testCylinderCollision_FUN_00457a90
// Address: 00457a90
// MANUAL RECONSTRUCTION
// Address Range: [[00457a90, 00457b5f]]
// Convention: __cdecl
// Signature: void __cdecl core_dcube_cpp_CDemonCube_testCylinderCollision_FUN_00457a90(CDemonCube *this_ptr,SIntersectXZCylinder *cylinder)

#include "nocturne.h"

void __cdecl core_dcube_cpp_CDemonCube_testCylinderCollision_FUN_00457a90(CDemonCube *this_ptr,SIntersectXZCylinder *cylinder)

{
  CVector3f *pCVar1;
  uint uVar2;
  int iVar3;
  int iVar4;

  iVar4 = -1;
  iVar3 = 0;
  if (0 < this_ptr->triangle_count) {
    do {
      uVar2 = core_dcube_cpp_intersectTriangleWithXZCylinder_FUN_00455a30
                        (&this_ptr->triangle_buffer[iVar3].triangle,cylinder);
      if (uVar2 != 0) {
        iVar4 = iVar3;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < this_ptr->triangle_count);
  }
  if (-1 < iVar4) {
    pCVar1 = this_ptr->triangle_buffer[iVar4].triangle.vertices[0];
    if (pCVar1 != &g_TempNormal0) {
      g_TempNormal0 = *pCVar1;
    }
    pCVar1 = this_ptr->triangle_buffer[iVar4].triangle.vertices[1];
    if (pCVar1 != &g_TempNormal1) {
      g_TempNormal1 = *pCVar1;
    }
    pCVar1 = this_ptr->triangle_buffer[iVar4].triangle.vertices[2];
    if (pCVar1 != &g_TempNormal2) {
      g_TempNormal2 = *pCVar1;
      return;
    }
  }
  return;
}
