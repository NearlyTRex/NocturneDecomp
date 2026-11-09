// Name: engine_mini3d.cpp_FUN_004f8330
// Address: 004f8330
// Address Range: [[004f8330, 004f84cc]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_004f8330(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_004f8330(uint *param_1,uint *param_2,uint *param_3)

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
      engine_mini3d_cpp_FUN_004f8110(param_1,param_2,param_3);
      return;
    }
    _DAT_01d0a398 = *param_1;
    _DAT_01d0a39c = param_1[1];
    _DAT_01d0a3a0 = param_1[2];
    _DAT_01d0a3d8 = *param_2;
    _DAT_01d0a3dc = param_2[1];
    _DAT_01d0a3e0 = param_2[2];
    _DAT_01d0a418 = *param_3;
    _DAT_01d0a41c = param_3[1];
    _DAT_01d0a420 = param_3[2];
    _DAT_01d09b84 = 3;
    _DAT_01d09b88 = 0;
    _DAT_01d09b8c = 0;
    _DAT_01d09b90 = 0;
    _DAT_01d09b94 = 0;
    engine_mini3d_cpp_FUN_004f6300();
    if ((((2 < _DAT_01d09b88) && (engine_mini3d_cpp_FUN_004f6430(), 2 < _DAT_01d09b8c)) &&
        (engine_mini3d_cpp_FUN_004f6560(), 2 < _DAT_01d09b90)) &&
       (engine_mini3d_cpp_FUN_004f6690(), 2 < _DAT_01d09b94)) {
      engine_mini3d_cpp_FUN_004f67b0();
      fVar4 = _DAT_01d09888;
      fVar3 = _DAT_01d09884;
      fVar2 = _DAT_01d0987c;
      iVar6 = 0;
      if (0 < _DAT_01d09b94) {
        pfVar5 = (float *)&DAT_01d0bb98;
        do {
          fVar1 = pfVar5[1] * _DAT_01d09880;
          pfVar5[3] = 1.0 / pfVar5[2];
          iVar7 = _DAT_01d09b94;
          iVar6 = iVar6 + 1;
          pfVar5[5] = fVar3 + *pfVar5 * fVar2 * pfVar5[3];
          pfVar5[6] = fVar4 + fVar1 * pfVar5[3];
          pfVar5 = pfVar5 + 0x10;
        } while (iVar6 < iVar7);
      }
      puVar8 = &DAT_01d0bbd8;
      iVar6 = 0x1d0bc18;
      for (iVar7 = 0; iVar7 < _DAT_01d09b94 + -2; iVar7 = iVar7 + 1) {
        engine_mini3d_cpp_FUN_004f8110(&DAT_01d0bb98,puVar8,iVar6);
        puVar8 = puVar8 + 0x40;
        iVar6 = iVar6 + 0x40;
      }
    }
  }
  return;
}
