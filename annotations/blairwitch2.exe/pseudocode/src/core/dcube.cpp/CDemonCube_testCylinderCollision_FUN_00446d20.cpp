// Name: core_dcube.cpp_CDemonCube_testCylinderCollision_FUN_00446d20
// Address: 00446d20
// Address Range: [[00446d20, 00446def]]
// Convention: __cdecl
// Signature: void __cdecl core_dcube_cpp_CDemonCube_testCylinderCollision_FUN_00446d20(CDemonCube *this_ptr,SIntersectXZCylinder *cylinder)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcube_cpp_CDemonCube_testCylinderCollision_FUN_00446d20(CDemonCube *this_ptr,SIntersectXZCylinder *cylinder)

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
      iVar2 = core_dcube_cpp_intersectTriangleWithXZCylinder_FUN_00445010
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
    if (puVar1 != (uint *)&DAT_01510da8) {
      _DAT_01510da8 = *puVar1;
      _DAT_01510db0 = puVar1[2];
      _DAT_01510dac = puVar1[1];
    }
    puVar1 = *(uint **)(iVar4 * 0x20 + 4 + *(int *)&this_ptr->field_0x2c);
    if (puVar1 != (uint *)&DAT_01510db4) {
      _DAT_01510db4 = *puVar1;
      _DAT_01510dbc = puVar1[2];
      _DAT_01510db8 = puVar1[1];
    }
    puVar1 = *(uint **)(*(int *)&this_ptr->field_0x2c + 8 + iVar4 * 0x20);
    if (puVar1 != (uint *)&DAT_01510dc0) {
      _DAT_01510dc4 = puVar1[1];
      _DAT_01510dc8 = puVar1[2];
      _DAT_01510dc0 = *puVar1;
      return;
    }
  }
  return;
}
