// Name: FUN_0050c010
// Address: 0050c010
// Address Range: [[0050c010, 0050c1f2]]
// Convention: unknown
// Signature: void FUN_0050c010(undefined4 param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0050c010(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int local_10;
  int local_c;
  int local_8;
  
  if (_DAT_007f7374 != 0) {
    piVar3 = (int *)*DAT_005ae704;
    local_c = _DAT_01c00c50 - _DAT_01c00c48;
    iVar4 = _DAT_01c00c50 + _DAT_01c00c48;
    iVar2 = _DAT_01c00c54 - _DAT_01c00c4c;
    local_8 = _DAT_01c00c54 + _DAT_01c00c4c;
    local_10 = 0;
    if (0 < param_2) {
      do {
        if ((*(byte *)((int)piVar3 + 0x13) & 0x80) == 0) {
          if (piVar3[4] < iVar4) {
            iVar4 = piVar3[4];
          }
          if (local_c < piVar3[4]) {
            local_c = piVar3[4];
          }
          if (piVar3[5] < iVar2) {
            iVar2 = piVar3[5];
          }
          if (local_8 < piVar3[5]) {
            local_8 = piVar3[5];
          }
        }
        else {
          if ((-piVar3[2] < *piVar3) && (*piVar3 < piVar3[2])) {
            iVar1 = (int)(((longlong)*piVar3 * (longlong)_DAT_01c00c48) / (longlong)piVar3[2]) +
                    _DAT_01c00c50;
            if (local_c < iVar1) {
              local_c = iVar1;
            }
            if (iVar1 < iVar4) {
              iVar4 = iVar1;
            }
          }
          if ((-piVar3[2] < piVar3[1]) && (piVar3[1] < piVar3[2])) {
            iVar1 = (int)(((longlong)piVar3[1] * (longlong)_DAT_01c00c4c) / (longlong)piVar3[2]) +
                    _DAT_01c00c54;
            if (local_8 < iVar1) {
              local_8 = iVar1;
            }
            if (iVar1 < iVar2) {
              iVar2 = iVar1;
            }
          }
          if (piVar3[2] <= *piVar3) {
            local_c = _DAT_01c00c48 + _DAT_01c00c50;
          }
          if (*piVar3 <= -piVar3[2]) {
            iVar4 = _DAT_01c00c50 - _DAT_01c00c48;
          }
          if (piVar3[2] <= piVar3[1]) {
            iVar2 = _DAT_01c00c4c + _DAT_01c00c54;
          }
          if (piVar3[1] <= -piVar3[2]) {
            local_8 = _DAT_01c00c54 - _DAT_01c00c4c;
          }
        }
        local_10 = local_10 + 1;
        piVar3 = piVar3 + 0xc;
      } while (local_10 < param_2);
    }
    FUN_004405d0(_DAT_007f7374,iVar4 >> 0x10,local_c >> 0x10,iVar2 >> 0x10,local_8 >> 0x10);
  }
  return;
}
