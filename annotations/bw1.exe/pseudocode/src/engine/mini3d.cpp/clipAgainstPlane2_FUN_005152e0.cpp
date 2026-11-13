// Name: engine_mini3d.cpp_clipAgainstPlane2_FUN_005152e0
// Address: 005152e0
// Address Range: [[005152e0, 005153f4]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_clipAgainstPlane2_FUN_005152e0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_clipAgainstPlane2_FUN_005152e0(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  float *from;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  byte bVar8;
  int local_18;
  
  bVar8 = 0;
  local_18 = 0;
  if (0 < (int)_DAT_01d227f0) {
    from = (float *)&DAT_01d237fc;
    do {
      uVar2 = local_18 + 1;
      if (uVar2 == _DAT_01d227f0) {
        uVar2 = uVar2 ^ _DAT_01d227f0;
      }
      iVar3 = uVar2 * 0x40;
      bVar1 = from[2] <= from[1];
      if (*(float *)(&DAT_01d23804 + iVar3) <= *(float *)(&DAT_01d23800 + iVar3)) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        iVar4 = _DAT_01d227f4 * 0x40;
        _DAT_01d227f4 = _DAT_01d227f4 + 1;
        pfVar6 = from;
        pfVar7 = (float *)(&DAT_01d23ffc + iVar4);
        for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
          *pfVar7 = *pfVar6;
          pfVar6 = pfVar6 + (uint)bVar8 * -2 + 1;
          pfVar7 = pfVar7 + (uint)bVar8 * -2 + 1;
        }
        break;
      case 1:
        engine_mini3d_cpp_intersectClipPlane2_FUN_00514ed0
                  ((float *)(&DAT_01d237fc + iVar3),from,
                   (float *)(&DAT_01d23ffc + _DAT_01d227f4 * 0x40));
        _DAT_01d227f4 = _DAT_01d227f4 + 1;
        break;
      case 2:
        iVar5 = _DAT_01d227f4 * 0x40;
        _DAT_01d227f4 = _DAT_01d227f4 + 1;
        pfVar6 = from;
        pfVar7 = (float *)(&DAT_01d23ffc + iVar5);
        for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
          *pfVar7 = *pfVar6;
          pfVar6 = pfVar6 + (uint)bVar8 * -2 + 1;
          pfVar7 = pfVar7 + (uint)bVar8 * -2 + 1;
        }
        engine_mini3d_cpp_intersectClipPlane2_FUN_00514ed0
                  (from,(float *)(&DAT_01d237fc + iVar3),
                   (float *)(&DAT_01d23ffc + _DAT_01d227f4 * 0x40));
        _DAT_01d227f4 = _DAT_01d227f4 + 1;
      }
      local_18 = local_18 + 1;
      from = from + 0x10;
    } while (local_18 < (int)_DAT_01d227f0);
  }
  return;
}
