// Name: engine_mini3d.cpp_clipAgainstPlane1_FUN_005151b0
// Address: 005151b0
// Address Range: [[005151b0, 005152c7]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_clipAgainstPlane1_FUN_005151b0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_clipAgainstPlane1_FUN_005151b0(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  float *from;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  byte bVar8;
  int local_18;
  
  bVar8 = 0;
  local_18 = 0;
  if (0 < (int)_DAT_01d227ec) {
    from = (float *)&DAT_01d227fc;
    do {
      uVar2 = local_18 + 1;
      if (uVar2 == _DAT_01d227ec) {
        uVar2 = uVar2 ^ _DAT_01d227ec;
      }
      pfVar4 = (float *)(&DAT_01d227fc + uVar2 * 0x40);
      bVar1 = *from <= -from[2];
      if (*pfVar4 <= -*(float *)(&DAT_01d22804 + uVar2 * 0x40)) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        iVar5 = _DAT_01d227f0 * 0x40;
        _DAT_01d227f0 = _DAT_01d227f0 + 1;
        pfVar4 = from;
        pfVar6 = (float *)(&DAT_01d237fc + iVar5);
        for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
          *pfVar6 = *pfVar4;
          pfVar4 = pfVar4 + (uint)bVar8 * -2 + 1;
          pfVar6 = pfVar6 + (uint)bVar8 * -2 + 1;
        }
        break;
      case 1:
        engine_mini3d_cpp_intersectClipPlane1_FUN_00514e10
                  (pfVar4,from,(float *)(&DAT_01d237fc + _DAT_01d227f0 * 0x40));
        _DAT_01d227f0 = _DAT_01d227f0 + 1;
        break;
      case 2:
        iVar5 = _DAT_01d227f0 * 0x40;
        _DAT_01d227f0 = _DAT_01d227f0 + 1;
        pfVar6 = from;
        pfVar7 = (float *)(&DAT_01d237fc + iVar5);
        for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
          *pfVar7 = *pfVar6;
          pfVar6 = pfVar6 + (uint)bVar8 * -2 + 1;
          pfVar7 = pfVar7 + (uint)bVar8 * -2 + 1;
        }
        engine_mini3d_cpp_intersectClipPlane1_FUN_00514e10
                  (from,pfVar4,(float *)(&DAT_01d237fc + _DAT_01d227f0 * 0x40));
        _DAT_01d227f0 = _DAT_01d227f0 + 1;
      }
      local_18 = local_18 + 1;
      from = from + 0x10;
    } while (local_18 < (int)_DAT_01d227ec);
  }
  return;
}
