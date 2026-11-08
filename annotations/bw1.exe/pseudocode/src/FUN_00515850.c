// Name: FUN_00515850
// Address: 00515850
// Address Range: [[00515850, 005159bb]]
// Convention: unknown
// Signature: void FUN_00515850(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00515850(uint *param_1,uint *param_2,uint *param_3)

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
      FUN_005155f0(param_1,param_2,param_3);
      return;
    }
    _DAT_01d227e8 = 3;
    puVar9 = (uint *)&DAT_01d22ffc;
    for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar9 = *param_1;
      param_1 = param_1 + 1;
      puVar9 = puVar9 + 1;
    }
    _DAT_01d227ec = 0;
    puVar9 = (uint *)&DAT_01d2303c;
    for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar9 = *param_2;
      param_2 = param_2 + 1;
      puVar9 = puVar9 + 1;
    }
    _DAT_01d227f0 = 0;
    _DAT_01d227f4 = 0;
    _DAT_01d227f8 = 0;
    puVar9 = (uint *)&DAT_01d2307c;
    for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar9 = *param_3;
      param_3 = param_3 + 1;
      puVar9 = puVar9 + 1;
    }
    FUN_00515080();
    if ((((2 < _DAT_01d227ec) && (FUN_005151b0(), 2 < _DAT_01d227f0)) &&
        (FUN_005152e0(), 2 < _DAT_01d227f4)) && (FUN_00515410(), 2 < _DAT_01d227f8)) {
      FUN_00515530();
      fVar4 = _DAT_01d224e8;
      fVar3 = _DAT_01d224e4;
      fVar2 = _DAT_01d224dc;
      iVar6 = 0;
      if (0 < _DAT_01d227f8) {
        pfVar5 = (float *)&DAT_01d247fc;
        do {
          fVar1 = pfVar5[1] * _DAT_01d224e0;
          pfVar5[3] = 1.0 / pfVar5[2];
          iVar7 = _DAT_01d227f8;
          iVar6 = iVar6 + 1;
          pfVar5[5] = fVar3 + *pfVar5 * fVar2 * pfVar5[3];
          pfVar5[6] = fVar4 + fVar1 * pfVar5[3];
          pfVar5 = pfVar5 + 0x10;
        } while (iVar6 < iVar7);
      }
      puVar8 = &DAT_01d2483c;
      iVar6 = 0x1d2487c;
      for (iVar7 = 0; iVar7 < _DAT_01d227f8 + -2; iVar7 = iVar7 + 1) {
        FUN_005155f0(&DAT_01d247fc,puVar8,iVar6);
        puVar8 = puVar8 + 0x40;
        iVar6 = iVar6 + 0x40;
      }
    }
  }
  return;
}
