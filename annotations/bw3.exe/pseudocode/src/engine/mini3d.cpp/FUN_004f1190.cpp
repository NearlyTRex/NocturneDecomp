// Name: engine_mini3d.cpp_FUN_004f1190
// Address: 004f1190
// Address Range: [[004f1190, 004f12ae]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_004f1190(undefined4 *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_004f1190(uint *param_1,int param_2)

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
  
  _DAT_01d76f68 = param_2;
  iVar5 = 0;
  _DAT_01d76f6c = 0;
  _DAT_01d76f70 = 0;
  _DAT_01d76f74 = 0;
  _DAT_01d76f78 = 0;
  if (0 < param_2) {
    do {
      iVar8 = iVar5 * 0x40;
      iVar5 = iVar5 + 1;
      puVar9 = param_1;
      puVar10 = (uint *)(&DAT_01d7777c + iVar8);
      for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      param_1 = param_1 + 0x10;
    } while (iVar5 < param_2);
  }
  engine_mini3d_cpp_FUN_004f0850();
  if ((((2 < _DAT_01d76f6c) && (engine_mini3d_cpp_FUN_004f0980(), 2 < _DAT_01d76f70)) &&
      (engine_mini3d_cpp_FUN_004f0ab0(), 2 < _DAT_01d76f74)) &&
     (engine_mini3d_cpp_FUN_004f0be0(), 2 < _DAT_01d76f78)) {
    engine_mini3d_cpp_FUN_004f0d00();
    fVar4 = _DAT_01d76c68;
    fVar3 = _DAT_01d76c64;
    fVar2 = _DAT_01d76c60;
    iVar5 = 0;
    if (0 < _DAT_01d76f78) {
      pfVar6 = (float *)&DAT_01d78f7c;
      do {
        fVar1 = *pfVar6 * _DAT_01d76c5c;
        pfVar6[3] = 1.0 / pfVar6[2];
        iVar5 = iVar5 + 1;
        pfVar6[5] = fVar3 + fVar1 * pfVar6[3];
        pfVar6[6] = fVar4 + pfVar6[1] * fVar2 * pfVar6[3];
        pfVar6 = pfVar6 + 0x10;
      } while (iVar5 < _DAT_01d76f78);
    }
    engine_mini3d_cpp_FUN_004f2090(&DAT_01d78f7c,_DAT_01d76f78);
    return;
  }
  return;
}
