// Name: engine_mini3d.cpp_clipAgainstPlane0_FUN_004f0850
// Address: 004f0850
// Address Range: [[004f0850, 004f0963]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_clipAgainstPlane0_FUN_004f0850(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_clipAgainstPlane0_FUN_004f0850(void)

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
  if (0 < (int)_DAT_01d76f68) {
    from = (float *)&DAT_01d7777c;
    do {
      uVar2 = local_18 + 1;
      if (uVar2 == _DAT_01d76f68) {
        uVar2 = uVar2 ^ _DAT_01d76f68;
      }
      pfVar4 = (float *)(&DAT_01d7777c + uVar2 * 0x40);
      bVar1 = from[2] <= *from;
      if (*(float *)(&DAT_01d77784 + uVar2 * 0x40) <= *pfVar4) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        iVar5 = _DAT_01d76f6c * 0x40;
        _DAT_01d76f6c = _DAT_01d76f6c + 1;
        pfVar4 = from;
        pfVar6 = (float *)(&DAT_01d76f7c + iVar5);
        for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
          *pfVar6 = *pfVar4;
          pfVar4 = pfVar4 + (uint)bVar8 * -2 + 1;
          pfVar6 = pfVar6 + (uint)bVar8 * -2 + 1;
        }
        break;
      case 1:
        engine_mini3d_cpp_intersectClipPlane0_FUN_004f0510
                  (pfVar4,from,(float *)(&DAT_01d76f7c + _DAT_01d76f6c * 0x40));
        _DAT_01d76f6c = _DAT_01d76f6c + 1;
        break;
      case 2:
        iVar5 = _DAT_01d76f6c * 0x40;
        _DAT_01d76f6c = _DAT_01d76f6c + 1;
        pfVar6 = from;
        pfVar7 = (float *)(&DAT_01d76f7c + iVar5);
        for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
          *pfVar7 = *pfVar6;
          pfVar6 = pfVar6 + (uint)bVar8 * -2 + 1;
          pfVar7 = pfVar7 + (uint)bVar8 * -2 + 1;
        }
        engine_mini3d_cpp_intersectClipPlane0_FUN_004f0510
                  (from,pfVar4,(float *)(&DAT_01d76f7c + _DAT_01d76f6c * 0x40));
        _DAT_01d76f6c = _DAT_01d76f6c + 1;
      }
      local_18 = local_18 + 1;
      from = from + 0x10;
    } while (local_18 < (int)_DAT_01d76f68);
  }
  return;
}
