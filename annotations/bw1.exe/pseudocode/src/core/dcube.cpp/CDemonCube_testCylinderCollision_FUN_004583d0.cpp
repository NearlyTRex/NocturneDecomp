// Name: core_dcube.cpp_CDemonCube_testCylinderCollision_FUN_004583d0
// Address: 004583d0
// Address Range: [[004583d0, 0045849f]]
// Convention: __cdecl
// Signature: void __cdecl core_dcube_cpp_CDemonCube_testCylinderCollision_FUN_004583d0(CDemonCube *this_ptr,SIntersectXZCylinder *cylinder)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcube_cpp_CDemonCube_testCylinderCollision_FUN_004583d0(CDemonCube *this_ptr,SIntersectXZCylinder *cylinder)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = -1;
  iVar3 = 0;
  if (0 < this_ptr->triangle_count) {
    iVar5 = 0;
    do {
      iVar2 = core_dcube_cpp_intersectTriangleWithXZCylinder_FUN_004566c0
                        (this_ptr->triangle_buffer + iVar5,cylinder);
      if (iVar2 != 0) {
        iVar4 = iVar3;
      }
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + 0x20;
    } while (iVar3 < this_ptr->triangle_count);
  }
  if (-1 < iVar4) {
    puVar1 = *(uint **)(this_ptr->triangle_buffer + iVar4 * 0x20);
    if (puVar1 != (uint *)&DAT_0152c2a8) {
      _DAT_0152c2a8 = *puVar1;
      _DAT_0152c2b0 = puVar1[2];
      _DAT_0152c2ac = puVar1[1];
    }
    puVar1 = *(uint **)(this_ptr->triangle_buffer + iVar4 * 0x20 + 4);
    if (puVar1 != (uint *)&DAT_0152c2b4) {
      _DAT_0152c2b4 = *puVar1;
      _DAT_0152c2bc = puVar1[2];
      _DAT_0152c2b8 = puVar1[1];
    }
    puVar1 = *(uint **)(this_ptr->triangle_buffer + iVar4 * 0x20 + 8);
    if (puVar1 != (uint *)&DAT_0152c2c0) {
      _DAT_0152c2c4 = puVar1[1];
      _DAT_0152c2c8 = puVar1[2];
      _DAT_0152c2c0 = *puVar1;
      return;
    }
  }
  return;
}
