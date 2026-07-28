// Name: core_box.cpp_CBoundingBox3D_isVisibleWithShadow_FUN_0041cce0
// Address: 0041cce0
// Address Range: [[0041cce0, 0041ceaf]]
// Convention: __cdecl
// Signature: int __cdecl core_box_cpp_CBoundingBox3D_isVisibleWithShadow_FUN_0041cce0(CBoundingBox3D *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_box_cpp_CBoundingBox3D_isVisibleWithShadow_FUN_0041cce0(CBoundingBox3D *this_ptr)

{
  int iVar1;
  int *piVar2;
  CRect local_20;
  int *local_10;
  int local_c;
  int local_8;
  
  if (_DAT_014b9920 != (CDemonLight *)0x0) {
    piVar2 = (int *)*DAT_005ae704;
    local_c = _DAT_01c00c50 + _DAT_01c00c48;
    local_20.x_max = _DAT_01c00c50 - _DAT_01c00c48;
    local_20.y_max = _DAT_01c00c54 + _DAT_01c00c4c;
    local_8 = _DAT_01c00c54 - _DAT_01c00c4c;
    local_10 = piVar2 + 0x60;
    do {
      if ((*(byte *)((int)piVar2 + 0x13) & 0x80) == 0) {
        if (piVar2[4] < local_c) {
          local_c = piVar2[4];
        }
        if (local_20.x_max < piVar2[4]) {
          local_20.x_max = piVar2[4];
        }
        if (piVar2[5] < local_8) {
          local_8 = piVar2[5];
        }
        if (local_20.y_max < piVar2[5]) {
          local_20.y_max = piVar2[5];
        }
      }
      else {
        if ((-piVar2[2] < *piVar2) && (*piVar2 < piVar2[2])) {
          iVar1 = (int)(((longlong)*piVar2 * (longlong)_DAT_01c00c48) / (longlong)piVar2[2]) +
                  _DAT_01c00c50;
          if (local_20.x_max < iVar1) {
            local_20.x_max = iVar1;
          }
          if (iVar1 < local_c) {
            local_c = iVar1;
          }
        }
        if ((-piVar2[2] < piVar2[1]) && (piVar2[1] < piVar2[2])) {
          iVar1 = (int)(((longlong)piVar2[1] * (longlong)_DAT_01c00c4c) / (longlong)piVar2[2]) +
                  _DAT_01c00c54;
          if (local_20.y_max < iVar1) {
            local_20.y_max = iVar1;
          }
          if (iVar1 < local_8) {
            local_8 = iVar1;
          }
        }
        if (piVar2[2] <= *piVar2) {
          local_20.x_max = _DAT_01c00c48 + _DAT_01c00c50;
        }
        if (*piVar2 <= -piVar2[2]) {
          local_c = _DAT_01c00c50 - _DAT_01c00c48;
        }
        if (piVar2[2] <= piVar2[1]) {
          local_8 = _DAT_01c00c4c + _DAT_01c00c54;
        }
        if (piVar2[1] <= -piVar2[2]) {
          local_20.y_max = _DAT_01c00c54 - _DAT_01c00c4c;
        }
      }
      piVar2 = piVar2 + 0xc;
    } while (piVar2 != local_10);
    local_20.x_max = local_20.x_max >> 0x10;
    local_20.y_min = local_8 >> 0x10;
    local_20.y_max = local_20.y_max >> 0x10;
    local_20.x_min = local_c >> 0x10;
    local_c = local_20.x_min;
    local_8 = local_20.y_min;
    iVar1 = core_dlight_cpp_CDemonLight_testShadowMapRegion_FUN_00451aa0(_DAT_014b9920,&local_20);
    return iVar1;
  }
  return 1;
}
