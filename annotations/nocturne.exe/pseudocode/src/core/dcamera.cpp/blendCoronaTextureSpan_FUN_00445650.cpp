// Name: core_dcamera.cpp_blendCoronaTextureSpan_FUN_00445650
// Address: 00445650
// Address Range: [[00445650, 00445743]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_blendCoronaTextureSpan_FUN_00445650(int param_1,int param_2,int param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_blendCoronaTextureSpan_FUN_00445650(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  bool bVar2;
  ushort uVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  ushort uVar10;
  short sVar11;
  ushort uVar12;
  ushort uVar14;
  uint5 uVar13;
  ushort uVar15;
  uint7 uVar16;
  
  pcVar8 = (char *)(param_1 * 0x140 + 0xa9d078 + param_2);
  pbVar5 = (byte *)(param_1 * 0x140 + param_4 + 0x784 + param_2);
  uVar9 = *(uint *)(_DAT_014b8458 + 0x3c) >> 10;
  uVar16 = (uint7)uVar9 | (uint7)uVar9 << 0x18 | (uint7)uVar9 << 0x10 | (uint7)uVar9 << 8;
  uVar3 = (ushort)(((uVar16 >> 0x18) << 0x30) >> 0x28);
  iVar7 = param_3 - param_2;
  while (((uint)pcVar8 & 3) != 0) {
    *pcVar8 = *pcVar8 + *(char *)((uint)*pbVar5 * 0x40 + uVar9 + 0x12cdb58);
    pbVar5 = pbVar5 + 1;
    pcVar8 = pcVar8 + 1;
    iVar6 = iVar7 + -1;
    bVar2 = iVar7 < 1;
    iVar7 = iVar6;
    if (iVar6 == 0 || bVar2) {
      return;
    }
  }
  while (3 < iVar7) {
    uVar1 = *(uint *)pbVar5;
    uVar4 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar1 >> 0x18) << 0x30) >>
                                                   0x28),CONCAT14((char)((uint)uVar1 >> 0x10),uVar1)
                                           ) >> 0x20),uVar1) >> 0x18);
    uVar13 = (uint5)uVar4 & 0xffffffff00;
    uVar10 = (ushort)(((ushort)uVar1 & 0xff) * (ushort)(byte)uVar9) >> 6;
    uVar12 = (ushort)(((ushort)(CONCAT43(uVar4,CONCAT12((char)((uint)uVar1 >> 8),(ushort)uVar1)) >>
                               0x10) & 0xff) * (ushort)(byte)(uVar16 >> 8)) >> 6;
    uVar14 = (ushort)((short)(uVar13 >> 8) * (short)CONCAT21(uVar3,(char)(uVar16 >> 0x10))) >> 6;
    uVar15 = (ushort)((short)(uVar13 >> 0x18) * (uVar3 >> 8)) >> 6;
    sVar11 = CONCAT11((uVar12 != 0) * (uVar12 < 0x100) * (char)uVar12 - (0xff < uVar12),
                      (uVar10 != 0) * (uVar10 < 0x100) * (char)uVar10 - (0xff < uVar10));
    *(uint *)pcVar8 =
         CONCAT22((short)(CONCAT13((uVar15 != 0) * (uVar15 < 0x100) * (char)uVar15 - (0xff < uVar15)
                                   ,CONCAT12((uVar14 != 0) * (uVar14 < 0x100) * (char)uVar14 -
                                             (0xff < uVar14),sVar11)) >> 0x10) +
                  (short)((uint)*(uint *)pcVar8 >> 0x10),sVar11 + (short)*(uint *)pcVar8
                 );
    pbVar5 = pbVar5 + 4;
    pcVar8 = pcVar8 + 4;
    iVar7 = iVar7 + -4;
  }
  if (iVar7 == 0) {
    return;
  }
  do {
    *pcVar8 = *pcVar8 + *(char *)((uint)*pbVar5 * 0x40 + uVar9 + 0x12cdb58);
    pbVar5 = pbVar5 + 1;
    pcVar8 = pcVar8 + 1;
    iVar6 = iVar7 + -1;
    bVar2 = 0 < iVar7;
    iVar7 = iVar6;
  } while (iVar6 != 0 && bVar2);
  return;
}
