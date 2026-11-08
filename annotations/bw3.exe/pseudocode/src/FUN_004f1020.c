// Name: FUN_004f1020
// Address: 004f1020
// Address Range: [[004f1020, 004f118b]]
// Convention: unknown
// Signature: void FUN_004f1020(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f1020(uint *param_1,uint *param_2,uint *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  byte *puVar8;
  uint *puVar9;
  
  if ((param_1[4] & param_2[4] & param_3[4]) == 0) {
    if ((param_1[4] == 0 && param_2[4] == 0) && param_3[4] == 0) {
      FUN_004f0dc0(param_1,param_2,param_3);
      return;
    }
    _DAT_01d76f68 = 3;
    puVar9 = (uint *)&DAT_01d7777c;
    for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar9 = *param_1;
      param_1 = param_1 + 1;
      puVar9 = puVar9 + 1;
    }
    _DAT_01d76f6c = 0;
    puVar9 = (uint *)&DAT_01d777bc;
    for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar9 = *param_2;
      param_2 = param_2 + 1;
      puVar9 = puVar9 + 1;
    }
    _DAT_01d76f70 = 0;
    _DAT_01d76f74 = 0;
    _DAT_01d76f78 = 0;
    puVar9 = (uint *)&DAT_01d777fc;
    for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar9 = *param_3;
      param_3 = param_3 + 1;
      puVar9 = puVar9 + 1;
    }
    FUN_004f0850();
    if ((((2 < _DAT_01d76f6c) && (FUN_004f0980(), 2 < _DAT_01d76f70)) &&
        (FUN_004f0ab0(), 2 < _DAT_01d76f74)) && (FUN_004f0be0(), 2 < _DAT_01d76f78)) {
      FUN_004f0d00();
      fVar4 = _DAT_01d76c68;
      fVar3 = _DAT_01d76c64;
      fVar2 = _DAT_01d76c5c;
      iVar6 = 0;
      if (0 < _DAT_01d76f78) {
        pfVar5 = (float *)&DAT_01d78f7c;
        do {
          fVar1 = pfVar5[1] * _DAT_01d76c60;
          pfVar5[3] = 1.0 / pfVar5[2];
          iVar7 = _DAT_01d76f78;
          iVar6 = iVar6 + 1;
          pfVar5[5] = fVar3 + *pfVar5 * fVar2 * pfVar5[3];
          pfVar5[6] = fVar4 + fVar1 * pfVar5[3];
          pfVar5 = pfVar5 + 0x10;
        } while (iVar6 < iVar7);
      }
      puVar8 = &DAT_01d78fbc;
      iVar6 = 0x1d78ffc;
      for (iVar7 = 0; iVar7 < _DAT_01d76f78 + -2; iVar7 = iVar7 + 1) {
        FUN_004f0dc0(&DAT_01d78f7c,puVar8,iVar6);
        puVar8 = puVar8 + 0x40;
        iVar6 = iVar6 + 0x40;
      }
    }
  }
  return;
}
