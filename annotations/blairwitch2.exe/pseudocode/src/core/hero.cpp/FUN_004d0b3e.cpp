// Name: core_hero.cpp_FUN_004d0b3e
// Address: 004d0b3e
// Address Range: [[004d0b3e, 004d0c80]]
// Convention: unknown
// Signature: undefined8 core_hero_cpp_FUN_004d0b3e(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong core_hero_cpp_FUN_004d0b3e(void)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  
  iVar5 = 0;
  iVar7 = 0;
  do {
    pbVar1 = &DAT_01c35838 + iVar5;
    pbVar2 = &DAT_01c35839 + iVar5;
    pbVar3 = &DAT_01c3583a + iVar5;
    iVar8 = iVar7 + 2;
    iVar5 = iVar5 + 3;
    *(ushort *)(&DAT_01c34910 + iVar7) =
         (ushort)(*pbVar3 / _DAT_01c35830 << (DAT_01c3582c & 0x1f)) |
         (ushort)(*pbVar2 / _DAT_01c35824 << (DAT_01c35820 & 0x1f)) |
         (ushort)(*pbVar1 / _DAT_01c35818 << (DAT_01c35814 & 0x1f));
    iVar7 = iVar8;
  } while (iVar8 != 0x200);
  uVar9 = 0xff >> (DAT_01c3581c & 0x1f);
  DAT_0061c8d0 = uVar9 << ((byte)_DAT_01c35814 & 0x1f);
  uVar6 = 0xff >> (DAT_01c35828 & 0x1f);
  DAT_0061c8d8 = uVar6 << ((byte)_DAT_01c35820 & 0x1f);
  uVar4 = 0xff >> (DAT_01c35834 & 0x1f);
  DAT_0061c8e0 = uVar4 << ((byte)_DAT_01c3582c & 0x1f);
  _DAT_0061c928 = uVar4 << (DAT_01c35834 & 0x1f);
  _DAT_0061c8e8 = (uVar9 << (DAT_01c3581c & 0x1f)) << 0x10;
  _DAT_0061c908 = (uVar6 << (DAT_01c35828 & 0x1f)) << 8;
  _DAT_0061c930 = _DAT_01c3581c + _DAT_01c35828 + _DAT_01c35834;
  _DAT_0061c970 = _DAT_01c35834;
  _DAT_0061c950 = _DAT_01c35828 + _DAT_01c35834;
  return CONCAT44(_DAT_01c35828,_DAT_01c35828 + _DAT_01c35834);
}
