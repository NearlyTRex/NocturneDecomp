// Name: core_dcube.cpp_CDemonCube_testCapsuleCollision_FUN_00457a90
// Address: 00457a90
// Address Range: [[00457a90, 00457b5f]]
// Convention: __cdecl
// Signature: void __cdecl core_dcube_cpp_CDemonCube_testCapsuleCollision_FUN_00457a90(CDemonCube *this_ptr,SIntersectXZCylinder *capsule_data)

#include "nocturne.h"

void __cdecl core_dcube_cpp_CDemonCube_testCapsuleCollision_FUN_00457a90(CDemonCube *this_ptr,SIntersectXZCylinder *capsule_data)

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
      uVar2 = core_dcube_cpp_intersectTriangleWithXZCapsule_FUN_00455a30
                        ((CVector3f **)((int)(this_ptr->triangle_buffer->triangle).vertices + iVar5)
                         ,capsule_data);
      if (uVar2 != 0) {
        iVar4 = iVar3;
      }
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + 0x20;
    } while (iVar3 < this_ptr->triangle_count);
  }
  if (-1 < iVar4) {
    pCVar1 = this_ptr->triangle_buffer[iVar4].triangle.vertices[0];
    if (pCVar1 != &g_TempNormal0) {
      g_TempNormal0.x = pCVar1->x;
      g_TempNormal0.z = pCVar1->z;
      g_TempNormal0.y = pCVar1->y;
    }
    pCVar1 = this_ptr->triangle_buffer[iVar4].triangle.vertices[1];
    if (pCVar1 != &g_TempNormal1) {
      g_TempNormal1.x = pCVar1->x;
      g_TempNormal1.z = pCVar1->z;
      g_TempNormal1.y = pCVar1->y;
    }
    pCVar1 = this_ptr->triangle_buffer[iVar4].triangle.vertices[2];
    if (pCVar1 != &g_TempNormal2) {
      g_TempNormal2.y = pCVar1->y;
      g_TempNormal2.z = pCVar1->z;
      g_TempNormal2.x = pCVar1->x;
      return;
    }
  }
  return;
}
