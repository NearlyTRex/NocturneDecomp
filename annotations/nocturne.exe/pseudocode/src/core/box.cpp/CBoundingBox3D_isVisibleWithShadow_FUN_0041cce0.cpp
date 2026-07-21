// Name: core_box.cpp_CBoundingBox3D_isVisibleWithShadow_FUN_0041cce0
// Address: 0041cce0
// Address Range: [[0041cce0, 0041ceaf]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_box_cpp_CBoundingBox3D_isVisibleWithShadow_FUN_0041cce0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl core_box_cpp_CBoundingBox3D_isVisibleWithShadow_FUN_0041cce0(void)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int *local_10;
  int local_c;
  int local_8;
  
  if (_DAT_014b9920 != 0) {
    piVar3 = (int *)*DAT_005ae704;
    local_c = _DAT_01c00c50 + _DAT_01c00c48;
    local_1c = _DAT_01c00c50 - _DAT_01c00c48;
    local_14 = _DAT_01c00c54 + _DAT_01c00c4c;
    local_8 = _DAT_01c00c54 - _DAT_01c00c4c;
    local_10 = piVar3 + 0x60;
    do {
      if ((*(byte *)((int)piVar3 + 0x13) & 0x80) == 0) {
        if (piVar3[4] < local_c) {
          local_c = piVar3[4];
        }
        if (local_1c < piVar3[4]) {
          local_1c = piVar3[4];
        }
        if (piVar3[5] < local_8) {
          local_8 = piVar3[5];
        }
        if (local_14 < piVar3[5]) {
          local_14 = piVar3[5];
        }
      }
      else {
        if ((-piVar3[2] < *piVar3) && (*piVar3 < piVar3[2])) {
          iVar1 = (int)(((longlong)*piVar3 * (longlong)_DAT_01c00c48) / (longlong)piVar3[2]) +
                  _DAT_01c00c50;
          if (local_1c < iVar1) {
            local_1c = iVar1;
          }
          if (iVar1 < local_c) {
            local_c = iVar1;
          }
        }
        if ((-piVar3[2] < piVar3[1]) && (piVar3[1] < piVar3[2])) {
          iVar1 = (int)(((longlong)piVar3[1] * (longlong)_DAT_01c00c4c) / (longlong)piVar3[2]) +
                  _DAT_01c00c54;
          if (local_14 < iVar1) {
            local_14 = iVar1;
          }
          if (iVar1 < local_8) {
            local_8 = iVar1;
          }
        }
        if (piVar3[2] <= *piVar3) {
          local_1c = _DAT_01c00c48 + _DAT_01c00c50;
        }
        if (*piVar3 <= -piVar3[2]) {
          local_c = _DAT_01c00c50 - _DAT_01c00c48;
        }
        if (piVar3[2] <= piVar3[1]) {
          local_8 = _DAT_01c00c4c + _DAT_01c00c54;
        }
        if (piVar3[1] <= -piVar3[2]) {
          local_14 = _DAT_01c00c54 - _DAT_01c00c4c;
        }
      }
      piVar3 = piVar3 + 0xc;
    } while (piVar3 != local_10);
    local_1c = local_1c >> 0x10;
    local_18 = local_8 >> 0x10;
    local_14 = local_14 >> 0x10;
    local_20 = local_c >> 0x10;
    local_c = local_20;
    local_8 = local_18;
    uVar2 = core_dlight_cpp_CDemonLight_testShadowMapRegion_FUN_00451aa0(_DAT_014b9920,&local_20);
    return uVar2;
  }
  return 1;
}
