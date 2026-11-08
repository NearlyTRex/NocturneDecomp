// Name: FUN_0041d920
// Address: 0041d920
// Address Range: [[0041d920, 0041daef]]
// Convention: unknown
// Signature: undefined4 FUN_0041d920(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0041d920(void)

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
  
  if (_DAT_01549b10 != 0) {
    piVar3 = (int *)*DAT_005f2afc;
    local_c = _DAT_01c6b5a0 + _DAT_01c6b598;
    local_1c = _DAT_01c6b5a0 - _DAT_01c6b598;
    local_14 = _DAT_01c6b5a4 + _DAT_01c6b59c;
    local_8 = _DAT_01c6b5a4 - _DAT_01c6b59c;
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
          iVar1 = (int)(((longlong)*piVar3 * (longlong)_DAT_01c6b598) / (longlong)piVar3[2]) +
                  _DAT_01c6b5a0;
          if (local_1c < iVar1) {
            local_1c = iVar1;
          }
          if (iVar1 < local_c) {
            local_c = iVar1;
          }
        }
        if ((-piVar3[2] < piVar3[1]) && (piVar3[1] < piVar3[2])) {
          iVar1 = (int)(((longlong)piVar3[1] * (longlong)_DAT_01c6b59c) / (longlong)piVar3[2]) +
                  _DAT_01c6b5a4;
          if (local_14 < iVar1) {
            local_14 = iVar1;
          }
          if (iVar1 < local_8) {
            local_8 = iVar1;
          }
        }
        if (piVar3[2] <= *piVar3) {
          local_1c = _DAT_01c6b598 + _DAT_01c6b5a0;
        }
        if (*piVar3 <= -piVar3[2]) {
          local_c = _DAT_01c6b5a0 - _DAT_01c6b598;
        }
        if (piVar3[2] <= piVar3[1]) {
          local_8 = _DAT_01c6b59c + _DAT_01c6b5a4;
        }
        if (piVar3[1] <= -piVar3[2]) {
          local_14 = _DAT_01c6b5a4 - _DAT_01c6b59c;
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
    uVar2 = FUN_0045f4d0(_DAT_01549b10,&local_20);
    return uVar2;
  }
  return 1;
}
