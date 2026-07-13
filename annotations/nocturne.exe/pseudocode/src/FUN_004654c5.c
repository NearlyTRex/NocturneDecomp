// Name: FUN_004654c5
// Address: 004654c5
// Address Range: [[004654c5, 0046556e]]
// Convention: unknown
// Signature: void FUN_004654c5(undefined4 *param_1,undefined4 *param_2,int param_3)

#include "nocturne.h"

void FUN_004654c5(uint *param_1,uint *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  ushort uVar12;
  ushort uVar14;
  ushort uVar15;
  ulonglong uVar13;
  ushort uVar16;
  ulonglong uVar17;
  uint5 uVar18;
  ulonglong uVar19;
  uint5 uVar20;
  ulonglong uVar21;
  uint5 uVar22;
  ulonglong uVar23;
  uint5 uVar24;
  
  do {
    uVar1 = param_2[-1];
    uVar2 = *param_2;
    uVar3 = param_2[1];
    uVar4 = param_2[-0x140];
    uVar5 = param_2[0x140];
    uVar13 = psllw((ulonglong)
                   CONCAT52(CONCAT41((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)
                                                  uVar2 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar2 >> 0x10),uVar2)) >>
                                                  0x20),uVar2) >> 0x18),(char)((uint)uVar2 >> 8)),
                            (ushort)(byte)uVar2) & 0xffffffff00ffffff,2);
    uVar17 = psllw((ulonglong)
                   CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((
                                                  uint)uVar1 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar1 >> 0x10),uVar1)) >>
                                                  0x20),uVar1) >> 0x18),
                                            CONCAT12((char)((uint)uVar1 >> 8),(short)uVar1)) >> 0x10
                                  ),(short)uVar1) & 0xffffffff00ff00ff,1);
    uVar19 = psllw((ulonglong)
                   CONCAT52(CONCAT41((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)
                                                  uVar3 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar3 >> 0x10),uVar3)) >>
                                                  0x20),uVar3) >> 0x18),(char)((uint)uVar3 >> 8)),
                            (ushort)(byte)uVar3) & 0xffffffff00ffffff,1);
    uVar21 = psllw((ulonglong)
                   CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((
                                                  uint)uVar4 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar4 >> 0x10),uVar4)) >>
                                                  0x20),uVar4) >> 0x18),
                                            CONCAT12((char)((uint)uVar4 >> 8),(short)uVar4)) >> 0x10
                                  ),(short)uVar4) & 0xffffffff00ff00ff,1);
    uVar23 = psllw((ulonglong)
                   CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((
                                                  uint)uVar5 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar5 >> 0x10),uVar5)) >>
                                                  0x20),uVar5) >> 0x18),
                                            CONCAT12((char)((uint)uVar5 >> 8),(short)uVar5)) >> 0x10
                                  ),(short)uVar5) & 0xffffffff00ff00ff,1);
    uVar1 = param_2[-0x141];
    uVar2 = param_2[-0x13f];
    uVar3 = param_2[0x13f];
    uVar4 = param_2[0x141];
    uVar7 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar1 >> 0x18) << 0x30) >>
                                                   0x28),CONCAT14((char)((uint)uVar1 >> 0x10),uVar1)
                                           ) >> 0x20),uVar1) >> 0x18);
    uVar18 = (uint5)uVar7 & 0xffffffff00;
    uVar8 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar2 >> 0x18) << 0x30) >>
                                                   0x28),CONCAT14((char)((uint)uVar2 >> 0x10),uVar2)
                                           ) >> 0x20),uVar2) >> 0x18);
    uVar20 = (uint5)uVar8 & 0xffffffff00;
    uVar9 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar3 >> 0x18) << 0x30) >>
                                                   0x28),CONCAT14((char)((uint)uVar3 >> 0x10),uVar3)
                                           ) >> 0x20),uVar3) >> 0x18);
    uVar22 = (uint5)uVar9 & 0xffffffff00;
    uVar10 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar4 >> 0x18) << 0x30) >>
                                                    0x28),
                                             CONCAT14((char)((uint)uVar4 >> 0x10),uVar4)) >> 0x20),
                             uVar4) >> 0x18);
    uVar24 = (uint5)uVar10 & 0xffffffff00;
    uVar12 = (ushort)((short)uVar13 + (short)uVar17 + (short)uVar19 + (short)uVar21 + (short)uVar23
                      + ((ushort)uVar1 & 0xff) + ((ushort)uVar2 & 0xff) + ((ushort)uVar3 & 0xff) +
                     ((ushort)uVar4 & 0xff)) >> 4;
    uVar14 = (ushort)((short)((ulonglong)uVar13 >> 0x10) + (short)((ulonglong)uVar17 >> 0x10) +
                      (short)((ulonglong)uVar19 >> 0x10) + (short)((ulonglong)uVar21 >> 0x10) +
                      (short)((ulonglong)uVar23 >> 0x10) +
                      ((ushort)(CONCAT43(uVar7,CONCAT12((char)((uint)uVar1 >> 8),(ushort)uVar1)) >>
                               0x10) & 0xff) +
                      ((ushort)(CONCAT43(uVar8,CONCAT12((char)((uint)uVar2 >> 8),(ushort)uVar2)) >>
                               0x10) & 0xff) +
                      ((ushort)(CONCAT43(uVar9,CONCAT12((char)((uint)uVar3 >> 8),(ushort)uVar3)) >>
                               0x10) & 0xff) +
                     ((ushort)(CONCAT43(uVar10,CONCAT12((char)((uint)uVar4 >> 8),(ushort)uVar4)) >>
                              0x10) & 0xff)) >> 4;
    uVar15 = (ushort)((short)((ulonglong)uVar13 >> 0x20) + (short)((ulonglong)uVar17 >> 0x20) +
                      (short)((ulonglong)uVar19 >> 0x20) + (short)((ulonglong)uVar21 >> 0x20) +
                      (short)((ulonglong)uVar23 >> 0x20) + (short)(uVar18 >> 8) +
                      (short)(uVar20 >> 8) + (short)(uVar22 >> 8) + (short)(uVar24 >> 8)) >> 4;
    uVar16 = (ushort)((short)((ulonglong)uVar13 >> 0x30) + (short)((ulonglong)uVar17 >> 0x30) +
                      (short)((ulonglong)uVar19 >> 0x30) + (short)((ulonglong)uVar21 >> 0x30) +
                      (short)((ulonglong)uVar23 >> 0x30) + (short)(uVar18 >> 0x18) +
                      (short)(uVar20 >> 0x18) + (short)(uVar22 >> 0x18) + (short)(uVar24 >> 0x18))
             >> 4;
    *param_1 = CONCAT13((uVar16 != 0) * (uVar16 < 0x100) * (char)uVar16 - (0xff < uVar16),
                        CONCAT12((uVar15 != 0) * (uVar15 < 0x100) * (char)uVar15 - (0xff < uVar15),
                                 CONCAT11((uVar14 != 0) * (uVar14 < 0x100) * (char)uVar14 -
                                          (0xff < uVar14),
                                          (uVar12 != 0) * (uVar12 < 0x100) * (char)uVar12 -
                                          (0xff < uVar12))));
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
    iVar11 = param_3 + -1;
    bVar6 = 0 < param_3;
    param_3 = iVar11;
  } while (iVar11 != 0 && bVar6);
  return;
}
