// Name: engine_mini3d.cpp_clipAgainstPlane0_FUN_004f6300
// Address: 004f6300
// Address Range: [[004f6300, 004f6413]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_clipAgainstPlane0_FUN_004f6300(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_clipAgainstPlane0_FUN_004f6300(void)

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
  if (0 < (int)_DAT_01d09b84) {
    from = (float *)&DAT_01d0a398;
    do {
      uVar2 = local_18 + 1;
      if (uVar2 == _DAT_01d09b84) {
        uVar2 = uVar2 ^ _DAT_01d09b84;
      }
      pfVar4 = (float *)(&DAT_01d0a398 + uVar2 * 0x40);
      bVar1 = from[2] <= *from;
      if (*(float *)(&DAT_01d0a3a0 + uVar2 * 0x40) <= *pfVar4) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        iVar5 = _DAT_01d09b88 * 0x40;
        _DAT_01d09b88 = _DAT_01d09b88 + 1;
        pfVar4 = from;
        pfVar6 = (float *)(&DAT_01d09b98 + iVar5);
        for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
          *pfVar6 = *pfVar4;
          pfVar4 = pfVar4 + (uint)bVar8 * -2 + 1;
          pfVar6 = pfVar6 + (uint)bVar8 * -2 + 1;
        }
        break;
      case 1:
        engine_mini3d_cpp_intersectClipPlane0_FUN_004f5fc0
                  (pfVar4,from,(float *)(&DAT_01d09b98 + _DAT_01d09b88 * 0x40));
        _DAT_01d09b88 = _DAT_01d09b88 + 1;
        break;
      case 2:
        iVar5 = _DAT_01d09b88 * 0x40;
        _DAT_01d09b88 = _DAT_01d09b88 + 1;
        pfVar6 = from;
        pfVar7 = (float *)(&DAT_01d09b98 + iVar5);
        for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
          *pfVar7 = *pfVar6;
          pfVar6 = pfVar6 + (uint)bVar8 * -2 + 1;
          pfVar7 = pfVar7 + (uint)bVar8 * -2 + 1;
        }
        engine_mini3d_cpp_intersectClipPlane0_FUN_004f5fc0
                  (from,pfVar4,(float *)(&DAT_01d09b98 + _DAT_01d09b88 * 0x40));
        _DAT_01d09b88 = _DAT_01d09b88 + 1;
      }
      local_18 = local_18 + 1;
      from = from + 0x10;
    } while (local_18 < (int)_DAT_01d09b84);
  }
  return;
}
