// Name: core_dcamera.cpp_blendCoronaTextureSpan_FUN_00445650
// Address: 00445650
// Address Range: [[00445650, 00445743]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_blendCoronaTextureSpan_FUN_00445650(int scanline_y,int x_start,int x_end,SCoronaLightEntry *source_entry)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_blendCoronaTextureSpan_FUN_00445650(int scanline_y,int x_start,int x_end,SCoronaLightEntry *source_entry)

{
  uint uVar1;
  bool bVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  char *pcVar9;
  ushort uVar10;
  short sVar11;
  ushort uVar12;
  ushort uVar14;
  uint5 uVar13;
  ushort uVar15;
  uint7 uVar16;
  
  pcVar7 = (char *)(scanline_y * 0x140 + 0xa9d078 + x_start);
  pcVar9 = source_entry->lightmap[scanline_y] + x_start;
  uVar8 = *(uint *)(_DAT_014b8458 + 0x3c) >> 10;
  uVar16 = (uint7)uVar8 | (uint7)uVar8 << 0x18 | (uint7)uVar8 << 0x10 | (uint7)uVar8 << 8;
  uVar3 = (ushort)(((uVar16 >> 0x18) << 0x30) >> 0x28);
  iVar6 = x_end - x_start;
  while (((uint)pcVar7 & 3) != 0) {
    *pcVar7 = *pcVar7 + *(char *)((uint)(byte)*pcVar9 * 0x40 + uVar8 + 0x12cdb58);
    pcVar9 = pcVar9 + 1;
    pcVar7 = pcVar7 + 1;
    iVar5 = iVar6 + -1;
    bVar2 = iVar6 < 1;
    iVar6 = iVar5;
    if (iVar5 == 0 || bVar2) {
      return;
    }
  }
  while (3 < iVar6) {
    uVar1 = *(uint *)pcVar9;
    uVar4 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar1 >> 0x18) << 0x30) >>
                                                   0x28),CONCAT14((char)((uint)uVar1 >> 0x10),uVar1)
                                           ) >> 0x20),uVar1) >> 0x18);
    uVar13 = (uint5)uVar4 & 0xffffffff00;
    uVar10 = (ushort)(((ushort)uVar1 & 0xff) * (ushort)(byte)uVar8) >> 6;
    uVar12 = (ushort)(((ushort)(CONCAT43(uVar4,CONCAT12((char)((uint)uVar1 >> 8),(ushort)uVar1)) >>
                               0x10) & 0xff) * (ushort)(byte)(uVar16 >> 8)) >> 6;
    uVar14 = (ushort)((short)(uVar13 >> 8) * (short)CONCAT21(uVar3,(char)(uVar16 >> 0x10))) >> 6;
    uVar15 = (ushort)((short)(uVar13 >> 0x18) * (uVar3 >> 8)) >> 6;
    sVar11 = CONCAT11((uVar12 != 0) * (uVar12 < 0x100) * (char)uVar12 - (0xff < uVar12),
                      (uVar10 != 0) * (uVar10 < 0x100) * (char)uVar10 - (0xff < uVar10));
    *(uint *)pcVar7 =
         CONCAT22((short)(CONCAT13((uVar15 != 0) * (uVar15 < 0x100) * (char)uVar15 - (0xff < uVar15)
                                   ,CONCAT12((uVar14 != 0) * (uVar14 < 0x100) * (char)uVar14 -
                                             (0xff < uVar14),sVar11)) >> 0x10) +
                  (short)((uint)*(uint *)pcVar7 >> 0x10),sVar11 + (short)*(uint *)pcVar7
                 );
    pcVar9 = pcVar9 + 4;
    pcVar7 = pcVar7 + 4;
    iVar6 = iVar6 + -4;
  }
  if (iVar6 == 0) {
    return;
  }
  do {
    *pcVar7 = *pcVar7 + *(char *)((uint)(byte)*pcVar9 * 0x40 + uVar8 + 0x12cdb58);
    pcVar9 = pcVar9 + 1;
    pcVar7 = pcVar7 + 1;
    iVar5 = iVar6 + -1;
    bVar2 = 0 < iVar6;
    iVar6 = iVar5;
  } while (iVar5 != 0 && bVar2);
  return;
}
