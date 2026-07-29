// Name: wincore_wddvmem.cpp_initializeColorMasks_FUN_004b6220
// Address: 004b6220
// Address Range: [[004b6220, 004b6360]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_initializeColorMasks_FUN_004b6220(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_wddvmem_cpp_initializeColorMasks_FUN_004b6220(void)

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
    pbVar1 = &DAT_01c00648 + iVar5;
    pbVar2 = (byte *)(iVar5 + 0x1c00649);
    pbVar3 = (byte *)(iVar5 + 0x1c0064a);
    iVar8 = iVar7 + 2;
    iVar5 = iVar5 + 3;
    *(ushort *)(&DAT_01bff720 + iVar7) =
         (ushort)(*pbVar3 / _DAT_01c00640 << (DAT_01c0063c & 0x1f)) |
         (ushort)(*pbVar2 / _DAT_01c00634 << (DAT_01c00630 & 0x1f)) |
         (ushort)(*pbVar1 / _DAT_01c00628 << (DAT_01c00624 & 0x1f));
    iVar7 = iVar8;
  } while (iVar8 != 0x200);
  uVar9 = 0xff >> (DAT_01c0062c & 0x1f);
  DAT_005bf5b8 = uVar9 << ((byte)_DAT_01c00624 & 0x1f);
  uVar6 = 0xff >> (DAT_01c00638 & 0x1f);
  DAT_005bf5c0 = uVar6 << ((byte)_DAT_01c00630 & 0x1f);
  uVar4 = 0xff >> (DAT_01c00644 & 0x1f);
  DAT_005bf5c8 = uVar4 << ((byte)_DAT_01c0063c & 0x1f);
  _DAT_005bf610 = uVar4 << (DAT_01c00644 & 0x1f);
  _DAT_005bf5d0 = (uVar9 << (DAT_01c0062c & 0x1f)) << 0x10;
  _DAT_005bf5f0 = (uVar6 << (DAT_01c00638 & 0x1f)) << 8;
  _DAT_005bf618 = _DAT_01c0062c + _DAT_01c00638 + _DAT_01c00644;
  _DAT_005bf658 = _DAT_01c00644;
  _DAT_005bf638 = _DAT_01c00638 + _DAT_01c00644;
  return;
}
