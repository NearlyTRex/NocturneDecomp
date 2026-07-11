// Name: FUN_00491160
// Address: 00491160
// Address Range: [[00491160, 004911ec]]
// Convention: unknown
// Signature: void FUN_00491160(undefined4 *param_1,byte *param_2,int param_3,int param_4,undefined4 param_5)

#include "nocturne.h"

void FUN_00491160(uint *param_1,byte *param_2,int param_3,int param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ushort uVar10;
  ushort uVar12;
  uint5 uVar11;
  ushort uVar13;
  ushort uVar14;
  uint5 uVar15;
  ushort uVar16;
  ushort uVar17;
  ushort uVar18;
  ushort uVar19;
  ulonglong uVar20;
  byte bVar21;
  
  uVar8 = (uint)DAT_005acab4 >> 0x10;
  uVar4 = (ushort)(((uint7)(byte)((uint)DAT_005acab4 >> 0x18) << 0x30) >> 0x28);
  uVar7 = (uint)DAT_005acab4 >> 8;
  bVar21 = (byte)DAT_005acab4;
  do {
    if (*param_2 != 0) {
      uVar1 = *(uint *)((uint)*param_2 * 4 + param_3);
      uVar2 = *param_1;
      uVar5 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)param_5 >> 0x18) << 0x30)
                                                     >> 0x28),
                                              CONCAT14((char)((uint)param_5 >> 0x10),param_5)) >>
                                    0x20),param_5) >> 0x18);
      uVar11 = (uint5)uVar5 & 0xffffffff00;
      uVar6 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar2 >> 0x18) << 0x30)
                                                     >> 0x28),
                                              CONCAT14((char)((uint)uVar2 >> 0x10),uVar2)) >> 0x20),
                              uVar2) >> 0x18);
      uVar15 = (uint5)uVar6 & 0xffffffff00;
      uVar10 = (ushort)(((uint7)(byte)((uint)uVar1 >> 0x18) << 0x30) >> 0x28);
      uVar16 = (ushort)(((ushort)uVar1 & 0xff) * (ushort)bVar21) >> 8;
      uVar17 = (ushort)((ushort)(byte)((uint)uVar1 >> 8) * (ushort)(byte)uVar7) >> 8;
      uVar18 = (ushort)((short)(CONCAT25(uVar10,CONCAT14((char)((uint)uVar1 >> 0x10),uVar1)) >> 0x20
                               ) * (short)CONCAT21(uVar4,(char)uVar8)) >> 8;
      uVar19 = (ushort)((uVar10 >> 8) * (uVar4 >> 8)) >> 8;
      uVar20 = CONCAT26(uVar19,CONCAT24(uVar18,CONCAT22(uVar17,uVar16))) ^ 0xff00ff00ff00ff;
      uVar10 = (byte)param_5 * uVar16 + ((ushort)uVar2 & 0xff) * (short)uVar20;
      uVar17 = ((ushort)CONCAT41(uVar5,(char)((uint)param_5 >> 8)) & 0xff) * uVar17 +
               ((ushort)(CONCAT43(uVar6,CONCAT12((char)((uint)uVar2 >> 8),(ushort)uVar2)) >> 0x10) &
               0xff) * (short)(uVar20 >> 0x10);
      uVar12 = (short)(uVar11 >> 8) * uVar18 + (short)(uVar15 >> 8) * (short)(uVar20 >> 0x20);
      uVar13 = (short)(uVar11 >> 0x18) * uVar19 + (short)(uVar15 >> 0x18) * (short)(uVar20 >> 0x30);
      uVar16 = uVar10 >> 8;
      uVar18 = uVar17 >> 8;
      uVar19 = uVar12 >> 8;
      uVar14 = uVar13 >> 8;
      *param_1 = CONCAT13((uVar14 != 0) * (uVar14 < 0x100) * (char)(uVar13 >> 8) - (0xff < uVar14),
                          CONCAT12((uVar19 != 0) * (uVar19 < 0x100) * (char)(uVar12 >> 8) -
                                   (0xff < uVar19),
                                   CONCAT11((uVar18 != 0) * (uVar18 < 0x100) * (char)(uVar17 >> 8) -
                                            (0xff < uVar18),
                                            (uVar16 != 0) * (uVar16 < 0x100) * (char)(uVar10 >> 8) -
                                            (0xff < uVar16))));
    }
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
    iVar9 = param_4 + -1;
    bVar3 = 0 < param_4;
    param_4 = iVar9;
  } while (iVar9 != 0 && bVar3);
  return;
}
