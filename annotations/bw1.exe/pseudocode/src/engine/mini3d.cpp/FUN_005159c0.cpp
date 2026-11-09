// Name: engine_mini3d.cpp_FUN_005159c0
// Address: 005159c0
// Address Range: [[005159c0, 00515ade]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_005159c0(undefined4 *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_005159c0(uint *param_1,int param_2)

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
  
  _DAT_01d227e8 = param_2;
  iVar5 = 0;
  _DAT_01d227ec = 0;
  _DAT_01d227f0 = 0;
  _DAT_01d227f4 = 0;
  _DAT_01d227f8 = 0;
  if (0 < param_2) {
    do {
      iVar8 = iVar5 * 0x40;
      iVar5 = iVar5 + 1;
      puVar9 = param_1;
      puVar10 = (uint *)(&DAT_01d22ffc + iVar8);
      for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      param_1 = param_1 + 0x10;
    } while (iVar5 < param_2);
  }
  engine_mini3d_cpp_FUN_00515080();
  if ((((2 < _DAT_01d227ec) && (engine_mini3d_cpp_FUN_005151b0(), 2 < _DAT_01d227f0)) &&
      (engine_mini3d_cpp_FUN_005152e0(), 2 < _DAT_01d227f4)) &&
     (engine_mini3d_cpp_FUN_00515410(), 2 < _DAT_01d227f8)) {
    engine_mini3d_cpp_FUN_00515530();
    fVar4 = _DAT_01d224e8;
    fVar3 = _DAT_01d224e4;
    fVar2 = _DAT_01d224e0;
    iVar5 = 0;
    if (0 < _DAT_01d227f8) {
      pfVar6 = (float *)&DAT_01d247fc;
      do {
        fVar1 = *pfVar6 * _DAT_01d224dc;
        pfVar6[3] = 1.0 / pfVar6[2];
        iVar5 = iVar5 + 1;
        pfVar6[5] = fVar3 + fVar1 * pfVar6[3];
        pfVar6[6] = fVar4 + pfVar6[1] * fVar2 * pfVar6[3];
        pfVar6 = pfVar6 + 0x10;
      } while (iVar5 < _DAT_01d227f8);
    }
    engine_mini3d_cpp_FUN_005168c0(&DAT_01d247fc,_DAT_01d227f8);
    return;
  }
  return;
}
