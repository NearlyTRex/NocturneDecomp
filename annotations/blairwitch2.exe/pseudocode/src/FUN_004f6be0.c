// Name: FUN_004f6be0
// Address: 004f6be0
// Address Range: [[004f6be0, 004f6cfe]]
// Convention: unknown
// Signature: void FUN_004f6be0(undefined4 *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f6be0(uint *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  
  _DAT_01d09b84 = param_2;
  iVar5 = 0;
  _DAT_01d09b88 = 0;
  _DAT_01d09b8c = 0;
  _DAT_01d09b90 = 0;
  _DAT_01d09b94 = 0;
  if (0 < param_2) {
    do {
      iVar8 = iVar5 * 0x40;
      iVar5 = iVar5 + 1;
      puVar9 = param_1;
      puVar10 = (uint *)(&DAT_01d0a398 + iVar8);
      for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      param_1 = param_1 + 0x10;
    } while (iVar5 < param_2);
  }
  FUN_004f6300();
  if ((((2 < _DAT_01d09b88) && (FUN_004f6430(), 2 < _DAT_01d09b8c)) &&
      (FUN_004f6560(), 2 < _DAT_01d09b90)) && (FUN_004f6690(), 2 < _DAT_01d09b94)) {
    FUN_004f67b0();
    fVar4 = _DAT_01d09888;
    fVar3 = _DAT_01d09884;
    fVar2 = _DAT_01d09880;
    iVar5 = 0;
    if (0 < _DAT_01d09b94) {
      pfVar6 = (float *)&DAT_01d0bb98;
      do {
        fVar1 = *pfVar6 * _DAT_01d0987c;
        pfVar6[3] = 1.0 / pfVar6[2];
        iVar5 = iVar5 + 1;
        pfVar6[5] = fVar3 + fVar1 * pfVar6[3];
        pfVar6[6] = fVar4 + pfVar6[1] * fVar2 * pfVar6[3];
        pfVar6 = pfVar6 + 0x10;
      } while (iVar5 < _DAT_01d09b94);
    }
    FUN_004f7a50(&DAT_01d0bb98,_DAT_01d09b94);
    return;
  }
  return;
}
