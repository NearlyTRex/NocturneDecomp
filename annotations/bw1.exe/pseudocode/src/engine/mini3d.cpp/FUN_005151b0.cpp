// Name: engine_mini3d.cpp_FUN_005151b0
// Address: 005151b0
// Address Range: [[005151b0, 005152c7]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_005151b0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_005151b0(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  byte bVar9;
  int local_18;
  
  bVar9 = 0;
  local_18 = 0;
  if (0 < (int)_DAT_01d227ec) {
    pfVar4 = (float *)&DAT_01d227fc;
    do {
      uVar2 = local_18 + 1;
      if (uVar2 == _DAT_01d227ec) {
        uVar2 = uVar2 ^ _DAT_01d227ec;
      }
      pfVar5 = (float *)(&DAT_01d227fc + uVar2 * 0x40);
      bVar1 = *pfVar4 <= -pfVar4[2];
      if (*pfVar5 <= -*(float *)(&DAT_01d22804 + uVar2 * 0x40)) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        iVar6 = _DAT_01d227f0 * 0x40;
        _DAT_01d227f0 = _DAT_01d227f0 + 1;
        pfVar5 = pfVar4;
        pfVar7 = (float *)(&DAT_01d237fc + iVar6);
        for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
          *pfVar7 = *pfVar5;
          pfVar5 = pfVar5 + (uint)bVar9 * -2 + 1;
          pfVar7 = pfVar7 + (uint)bVar9 * -2 + 1;
        }
        break;
      case 1:
        engine_mini3d_cpp_FUN_00514e10(pfVar5,pfVar4,&DAT_01d237fc + _DAT_01d227f0 * 0x40);
        _DAT_01d227f0 = _DAT_01d227f0 + 1;
        break;
      case 2:
        iVar6 = _DAT_01d227f0 * 0x40;
        _DAT_01d227f0 = _DAT_01d227f0 + 1;
        pfVar7 = pfVar4;
        pfVar8 = (float *)(&DAT_01d237fc + iVar6);
        for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
          *pfVar8 = *pfVar7;
          pfVar7 = pfVar7 + (uint)bVar9 * -2 + 1;
          pfVar8 = pfVar8 + (uint)bVar9 * -2 + 1;
        }
        engine_mini3d_cpp_FUN_00514e10(pfVar4,pfVar5,&DAT_01d237fc + _DAT_01d227f0 * 0x40);
        _DAT_01d227f0 = _DAT_01d227f0 + 1;
      }
      local_18 = local_18 + 1;
      pfVar4 = pfVar4 + 0x10;
    } while (local_18 < (int)_DAT_01d227ec);
  }
  return;
}
