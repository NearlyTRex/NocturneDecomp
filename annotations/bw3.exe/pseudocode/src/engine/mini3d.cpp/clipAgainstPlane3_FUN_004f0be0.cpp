// Name: engine_mini3d.cpp_clipAgainstPlane3_FUN_004f0be0
// Address: 004f0be0
// Address Range: [[004f0be0, 004f0cf8]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_clipAgainstPlane3_FUN_004f0be0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_clipAgainstPlane3_FUN_004f0be0(void)

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
  if (0 < (int)_DAT_01d76f74) {
    from = (float *)&DAT_01d7877c;
    do {
      uVar2 = local_18 + 1;
      if (uVar2 == _DAT_01d76f74) {
        uVar2 = uVar2 ^ _DAT_01d76f74;
      }
      iVar3 = uVar2 * 0x40;
      bVar1 = from[1] <= -from[2];
      if (*(float *)(&DAT_01d78780 + iVar3) <= -*(float *)(&DAT_01d78784 + iVar3)) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        iVar4 = _DAT_01d76f78 * 0x40;
        _DAT_01d76f78 = _DAT_01d76f78 + 1;
        pfVar6 = from;
        pfVar7 = (float *)(&DAT_01d78f7c + iVar4);
        for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
          *pfVar7 = *pfVar6;
          pfVar6 = pfVar6 + (uint)bVar8 * -2 + 1;
          pfVar7 = pfVar7 + (uint)bVar8 * -2 + 1;
        }
        break;
      case 1:
        engine_mini3d_cpp_intersectClipPlane3_FUN_004f0770
                  ((float *)(&DAT_01d7877c + iVar3),from,
                   (float *)(&DAT_01d78f7c + _DAT_01d76f78 * 0x40));
        _DAT_01d76f78 = _DAT_01d76f78 + 1;
        break;
      case 2:
        iVar5 = _DAT_01d76f78 * 0x40;
        _DAT_01d76f78 = _DAT_01d76f78 + 1;
        pfVar6 = from;
        pfVar7 = (float *)(&DAT_01d78f7c + iVar5);
        for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
          *pfVar7 = *pfVar6;
          pfVar6 = pfVar6 + (uint)bVar8 * -2 + 1;
          pfVar7 = pfVar7 + (uint)bVar8 * -2 + 1;
        }
        engine_mini3d_cpp_intersectClipPlane3_FUN_004f0770
                  (from,(float *)(&DAT_01d7877c + iVar3),
                   (float *)(&DAT_01d78f7c + _DAT_01d76f78 * 0x40));
        _DAT_01d76f78 = _DAT_01d76f78 + 1;
      }
      local_18 = local_18 + 1;
      from = from + 0x10;
    } while (local_18 < (int)_DAT_01d76f74);
  }
  return;
}
