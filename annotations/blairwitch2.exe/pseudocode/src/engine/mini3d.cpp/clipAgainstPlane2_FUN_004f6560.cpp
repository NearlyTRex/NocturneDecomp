// Name: engine_mini3d.cpp_clipAgainstPlane2_FUN_004f6560
// Address: 004f6560
// Address Range: [[004f6560, 004f6674]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_clipAgainstPlane2_FUN_004f6560(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_clipAgainstPlane2_FUN_004f6560(void)

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
  if (0 < (int)_DAT_01d09b8c) {
    from = (float *)&DAT_01d0ab98;
    do {
      uVar2 = local_18 + 1;
      if (uVar2 == _DAT_01d09b8c) {
        uVar2 = uVar2 ^ _DAT_01d09b8c;
      }
      iVar3 = uVar2 * 0x40;
      bVar1 = from[2] <= from[1];
      if (*(float *)(&DAT_01d0aba0 + iVar3) <= *(float *)(&DAT_01d0ab9c + iVar3)) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        iVar4 = _DAT_01d09b90 * 0x40;
        _DAT_01d09b90 = _DAT_01d09b90 + 1;
        pfVar6 = from;
        pfVar7 = (float *)(&DAT_01d0b398 + iVar4);
        for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
          *pfVar7 = *pfVar6;
          pfVar6 = pfVar6 + (uint)bVar8 * -2 + 1;
          pfVar7 = pfVar7 + (uint)bVar8 * -2 + 1;
        }
        break;
      case 1:
        engine_mini3d_cpp_intersectClipPlane2_FUN_004f6150
                  ((float *)(&DAT_01d0ab98 + iVar3),from,
                   (float *)(&DAT_01d0b398 + _DAT_01d09b90 * 0x40));
        _DAT_01d09b90 = _DAT_01d09b90 + 1;
        break;
      case 2:
        iVar5 = _DAT_01d09b90 * 0x40;
        _DAT_01d09b90 = _DAT_01d09b90 + 1;
        pfVar6 = from;
        pfVar7 = (float *)(&DAT_01d0b398 + iVar5);
        for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
          *pfVar7 = *pfVar6;
          pfVar6 = pfVar6 + (uint)bVar8 * -2 + 1;
          pfVar7 = pfVar7 + (uint)bVar8 * -2 + 1;
        }
        engine_mini3d_cpp_intersectClipPlane2_FUN_004f6150
                  (from,(float *)(&DAT_01d0ab98 + iVar3),
                   (float *)(&DAT_01d0b398 + _DAT_01d09b90 * 0x40));
        _DAT_01d09b90 = _DAT_01d09b90 + 1;
      }
      local_18 = local_18 + 1;
      from = from + 0x10;
    } while (local_18 < (int)_DAT_01d09b8c);
  }
  return;
}
