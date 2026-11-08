// Name: FUN_004f2a10
// Address: 004f2a10
// Address Range: [[004f2a10, 004f2bac]]
// Convention: unknown
// Signature: void FUN_004f2a10(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f2a10(uint *param_1,uint *param_2,uint *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  byte *puVar8;
  
  if ((param_1[4] & param_2[4] & param_3[4]) == 0) {
    if ((param_1[4] == 0 && param_2[4] == 0) && param_3[4] == 0) {
      FUN_004f27a0(param_1,param_2,param_3);
      return;
    }
    _DAT_01d7777c = *param_1;
    _DAT_01d77780 = param_1[1];
    _DAT_01d77784 = param_1[2];
    _DAT_01d777bc = *param_2;
    _DAT_01d777c0 = param_2[1];
    _DAT_01d777c4 = param_2[2];
    _DAT_01d777fc = *param_3;
    _DAT_01d77800 = param_3[1];
    _DAT_01d77804 = param_3[2];
    _DAT_01d76f68 = 3;
    _DAT_01d76f6c = 0;
    _DAT_01d76f70 = 0;
    _DAT_01d76f74 = 0;
    _DAT_01d76f78 = 0;
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
        FUN_004f27a0(&DAT_01d78f7c,puVar8,iVar6);
        puVar8 = puVar8 + 0x40;
        iVar6 = iVar6 + 0x40;
      }
    }
  }
  return;
}
