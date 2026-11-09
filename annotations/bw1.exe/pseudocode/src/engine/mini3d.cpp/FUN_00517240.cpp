// Name: engine_mini3d.cpp_FUN_00517240
// Address: 00517240
// Address Range: [[00517240, 005173dc]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_00517240(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_00517240(uint *param_1,uint *param_2,uint *param_3)

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
      engine_mini3d_cpp_FUN_00516fd0(param_1,param_2,param_3);
      return;
    }
    _DAT_01d22ffc = *param_1;
    _DAT_01d23000 = param_1[1];
    _DAT_01d23004 = param_1[2];
    _DAT_01d2303c = *param_2;
    _DAT_01d23040 = param_2[1];
    _DAT_01d23044 = param_2[2];
    _DAT_01d2307c = *param_3;
    _DAT_01d23080 = param_3[1];
    _DAT_01d23084 = param_3[2];
    _DAT_01d227e8 = 3;
    _DAT_01d227ec = 0;
    _DAT_01d227f0 = 0;
    _DAT_01d227f4 = 0;
    _DAT_01d227f8 = 0;
    engine_mini3d_cpp_FUN_00515080();
    if ((((2 < _DAT_01d227ec) && (engine_mini3d_cpp_FUN_005151b0(), 2 < _DAT_01d227f0)) &&
        (engine_mini3d_cpp_FUN_005152e0(), 2 < _DAT_01d227f4)) &&
       (engine_mini3d_cpp_FUN_00515410(), 2 < _DAT_01d227f8)) {
      engine_mini3d_cpp_FUN_00515530();
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
        engine_mini3d_cpp_FUN_00516fd0(&DAT_01d247fc,puVar8,iVar6);
        puVar8 = puVar8 + 0x40;
        iVar6 = iVar6 + 0x40;
      }
    }
  }
  return;
}
