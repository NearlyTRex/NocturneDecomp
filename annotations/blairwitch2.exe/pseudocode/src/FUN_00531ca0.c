// Name: FUN_00531ca0
// Address: 00531ca0
// Address Range: [[00531ca0, 00531e82]]
// Convention: unknown
// Signature: void FUN_00531ca0(undefined4 param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00531ca0(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int local_10;
  int local_c;
  int local_8;
  
  if (DAT_0083c7d0 != 0) {
    piVar3 = (int *)*DAT_0060b280;
    local_c = _DAT_01c35e40 - _DAT_01c35e38;
    iVar4 = _DAT_01c35e40 + _DAT_01c35e38;
    iVar2 = _DAT_01c35e44 - _DAT_01c35e3c;
    local_8 = _DAT_01c35e44 + _DAT_01c35e3c;
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
            iVar1 = (int)(((longlong)*piVar3 * (longlong)_DAT_01c35e38) / (longlong)piVar3[2]) +
                    _DAT_01c35e40;
            if (local_c < iVar1) {
              local_c = iVar1;
            }
            if (iVar1 < iVar4) {
              iVar4 = iVar1;
            }
          }
          if ((-piVar3[2] < piVar3[1]) && (piVar3[1] < piVar3[2])) {
            iVar1 = (int)(((longlong)piVar3[1] * (longlong)_DAT_01c35e3c) / (longlong)piVar3[2]) +
                    _DAT_01c35e44;
            if (local_8 < iVar1) {
              local_8 = iVar1;
            }
            if (iVar1 < iVar2) {
              iVar2 = iVar1;
            }
          }
          if (piVar3[2] <= *piVar3) {
            local_c = _DAT_01c35e38 + _DAT_01c35e40;
          }
          if (*piVar3 <= -piVar3[2]) {
            iVar4 = _DAT_01c35e40 - _DAT_01c35e38;
          }
          if (piVar3[2] <= piVar3[1]) {
            iVar2 = _DAT_01c35e3c + _DAT_01c35e44;
          }
          if (piVar3[1] <= -piVar3[2]) {
            local_8 = _DAT_01c35e44 - _DAT_01c35e3c;
          }
        }
        local_10 = local_10 + 1;
        piVar3 = piVar3 + 0xc;
      } while (local_10 < param_2);
    }
    FUN_0043bb10(DAT_0083c7d0,iVar4 >> 0x10,local_c >> 0x10,iVar2 >> 0x10,local_8 >> 0x10);
  }
  return;
}
