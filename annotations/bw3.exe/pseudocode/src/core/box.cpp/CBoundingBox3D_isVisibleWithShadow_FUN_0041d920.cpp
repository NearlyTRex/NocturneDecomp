// Name: core_box.cpp_CBoundingBox3D_isVisibleWithShadow_FUN_0041d920
// Address: 0041d920
// Address Range: [[0041d920, 0041daef]]
// Convention: __cdecl
// Signature: int __cdecl core_box_cpp_CBoundingBox3D_isVisibleWithShadow_FUN_0041d920(CBoundingBox3D *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_box_cpp_CBoundingBox3D_isVisibleWithShadow_FUN_0041d920(CBoundingBox3D *this_ptr)

{
  int iVar1;
  int *piVar2;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int *local_10;
  int local_c;
  int local_8;
  
  if (_DAT_01549b10 != (CDemonLight *)0x0) {
    piVar2 = (int *)*DAT_005f2afc;
    local_c = _DAT_01c6b5a0 + _DAT_01c6b598;
    local_1c = _DAT_01c6b5a0 - _DAT_01c6b598;
    local_14 = _DAT_01c6b5a4 + _DAT_01c6b59c;
    local_8 = _DAT_01c6b5a4 - _DAT_01c6b59c;
    local_10 = piVar2 + 0x60;
    do {
      if ((*(byte *)((int)piVar2 + 0x13) & 0x80) == 0) {
        if (piVar2[4] < local_c) {
          local_c = piVar2[4];
        }
        if (local_1c < piVar2[4]) {
          local_1c = piVar2[4];
        }
        if (piVar2[5] < local_8) {
          local_8 = piVar2[5];
        }
        if (local_14 < piVar2[5]) {
          local_14 = piVar2[5];
        }
      }
      else {
        if ((-piVar2[2] < *piVar2) && (*piVar2 < piVar2[2])) {
          iVar1 = (int)(((longlong)*piVar2 * (longlong)_DAT_01c6b598) / (longlong)piVar2[2]) +
                  _DAT_01c6b5a0;
          if (local_1c < iVar1) {
            local_1c = iVar1;
          }
          if (iVar1 < local_c) {
            local_c = iVar1;
          }
        }
        if ((-piVar2[2] < piVar2[1]) && (piVar2[1] < piVar2[2])) {
          iVar1 = (int)(((longlong)piVar2[1] * (longlong)_DAT_01c6b59c) / (longlong)piVar2[2]) +
                  _DAT_01c6b5a4;
          if (local_14 < iVar1) {
            local_14 = iVar1;
          }
          if (iVar1 < local_8) {
            local_8 = iVar1;
          }
        }
        if (piVar2[2] <= *piVar2) {
          local_1c = _DAT_01c6b598 + _DAT_01c6b5a0;
        }
        if (*piVar2 <= -piVar2[2]) {
          local_c = _DAT_01c6b5a0 - _DAT_01c6b598;
        }
        if (piVar2[2] <= piVar2[1]) {
          local_8 = _DAT_01c6b59c + _DAT_01c6b5a4;
        }
        if (piVar2[1] <= -piVar2[2]) {
          local_14 = _DAT_01c6b5a4 - _DAT_01c6b59c;
        }
      }
      piVar2 = piVar2 + 0xc;
    } while (piVar2 != local_10);
    local_1c = local_1c >> 0x10;
    local_18 = local_8 >> 0x10;
    local_14 = local_14 >> 0x10;
    local_20 = local_c >> 0x10;
    local_c = local_20;
    local_8 = local_18;
    iVar1 = core_dlight_cpp_CDemonLight_testShadowMapRegion_FUN_0045f4d0
                      (_DAT_01549b10,(CRect *)&local_20);
    return iVar1;
  }
  return 1;
}
