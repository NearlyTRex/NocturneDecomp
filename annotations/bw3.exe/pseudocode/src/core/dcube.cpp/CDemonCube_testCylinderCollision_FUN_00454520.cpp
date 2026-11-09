// Name: core_dcube.cpp_CDemonCube_testCylinderCollision_FUN_00454520
// Address: 00454520
// Address Range: [[00454520, 004545ef]]
// Convention: __cdecl
// Signature: void __cdecl core_dcube_cpp_CDemonCube_testCylinderCollision_FUN_00454520(CDemonCube *this_ptr,SIntersectXZCylinder *cylinder)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcube_cpp_CDemonCube_testCylinderCollision_FUN_00454520(CDemonCube *this_ptr,SIntersectXZCylinder *cylinder)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = -1;
  iVar3 = 0;
  if (0 < *(int *)&this_ptr->field_0x28) {
    iVar5 = 0;
    do {
      iVar2 = core_dcube_cpp_intersectTriangleWithXZCylinder_FUN_00452810
                        (*(int *)&this_ptr->field_0x2c + iVar5,cylinder);
      if (iVar2 != 0) {
        iVar4 = iVar3;
      }
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + 0x20;
    } while (iVar3 < *(int *)&this_ptr->field_0x28);
  }
  if (-1 < iVar4) {
    puVar1 = *(uint **)(iVar4 * 0x20 + *(int *)&this_ptr->field_0x2c);
    if (puVar1 != (uint *)&DAT_01548b58) {
      _DAT_01548b58 = *puVar1;
      _DAT_01548b60 = puVar1[2];
      _DAT_01548b5c = puVar1[1];
    }
    puVar1 = *(uint **)(iVar4 * 0x20 + 4 + *(int *)&this_ptr->field_0x2c);
    if (puVar1 != (uint *)&DAT_01548b64) {
      _DAT_01548b64 = *puVar1;
      _DAT_01548b6c = puVar1[2];
      _DAT_01548b68 = puVar1[1];
    }
    puVar1 = *(uint **)(*(int *)&this_ptr->field_0x2c + 8 + iVar4 * 0x20);
    if (puVar1 != (uint *)&DAT_01548b70) {
      _DAT_01548b74 = puVar1[1];
      _DAT_01548b78 = puVar1[2];
      _DAT_01548b70 = *puVar1;
      return;
    }
  }
  return;
}
