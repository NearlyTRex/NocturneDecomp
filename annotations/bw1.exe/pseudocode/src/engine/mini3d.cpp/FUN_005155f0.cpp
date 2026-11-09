// Name: engine_mini3d.cpp_FUN_005155f0
// Address: 005155f0
// Address Range: [[005155f0, 00515744]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_005155f0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_005155f0(uint *param_1,uint *param_2,uint *param_3)

{
  float fVar1;
  float fVar2;
  short sVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  short sVar7;
  uint *puVar8;
  byte bVar9;
  
  bVar9 = 0;
  fVar1 = ((float)param_2[6] - (float)param_1[6]) * ((float)param_3[5] - (float)param_2[5]);
  fVar2 = ((float)param_2[5] - (float)param_1[5]) * ((float)param_3[6] - (float)param_2[6]);
  if (_DAT_01d22578 == 0) {
    if (fVar2 <= fVar1) {
      return;
    }
  }
  else if (fVar1 <= fVar2) {
    return;
  }
  if ((9999 < _DAT_01d25f48 + _DAT_01d25f4c + 3) || (9999 < _DAT_01d25f50 + 3)) {
    engine_mini3d_cpp_FUN_00515750();
  }
  puVar5 = (uint *)(_DAT_01d227e0 + (_DAT_01d25f48 + _DAT_01d25f4c) * 0x40);
  puVar8 = puVar5;
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = *param_1;
    param_1 = param_1 + (uint)bVar9 * -2 + 1;
    puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
  }
  puVar8 = puVar5 + 0x10;
  for (iVar6 = 0x10; iVar4 = _DAT_01d25f50, iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = *param_2;
    param_2 = param_2 + (uint)bVar9 * -2 + 1;
    puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
  }
  sVar3 = _DAT_01d25f4c;
  puVar8 = puVar5 + 0x20;
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = *param_3;
    param_3 = param_3 + (uint)bVar9 * -2 + 1;
    puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
  }
  *(short *)(iVar4 * 2 + 0x1d25f54) = sVar3;
  _DAT_01d25f50 = _DAT_01d25f50 + 3;
  sVar7 = _DAT_01d25f4c + 2;
  *(short *)(&DAT_01d25f50 + _DAT_01d25f50 * 2) = sVar3 + 1;
  _DAT_01d25f4c = _DAT_01d25f4c + 3;
  *(short *)(_DAT_01d25f50 * 2 + 0x1d25f52) = sVar7;
  return;
}
