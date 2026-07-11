// Name: FUN_00464afc
// Address: 00464afc
// Address Range: [[00464afc, 00464f35] [00464f40, 00464fd9]]
// Convention: unknown
// Signature: void FUN_00464afc(undefined8 *param_1,undefined8 *param_2,byte *param_3,byte *param_4,int param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00464afc(ulonglong *param_1,ulonglong *param_2,byte *param_3,byte *param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ushort uVar7;
  ushort uVar9;
  ushort uVar10;
  ulonglong uVar8;
  ushort uVar11;
  ushort uVar12;
  ushort uVar14;
  ushort uVar15;
  ulonglong uVar13;
  ushort uVar16;
  short sVar19;
  uint5 uVar18;
  short sVar20;
  ulonglong uVar17;
  ulonglong uVar21;
  short sVar22;
  ulonglong uVar23;
  uint5 uVar24;
  
  uVar23 = psllw((ulonglong)
                 CONCAT52(CONCAT41((int)(((uint7)CONCAT21((short)(((uint7)(byte)((uint)_DAT_01c039a8
                                                                                >> 0x18) << 0x30) >>
                                                                 0x28),
                                                          (char)((uint)_DAT_01c039a8 >> 0x10)) <<
                                         0x20) >> 0x18),(char)((uint)_DAT_01c039a8 >> 8)),
                          (ushort)(byte)_DAT_01c039a8),6);
  do {
    uVar13 = *param_2;
    uVar1 = *(uint *)(&DAT_00b0e1fc + (uint)*param_3 * 4);
    uVar2 = *(uint *)(&DAT_00b0e1fc + (uint)param_3[1] * 4);
    uVar4 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar2 >> 0x18) << 0x30) >>
                                                   0x28),CONCAT14((char)((uint)uVar2 >> 0x10),uVar2)
                                           ) >> 0x20),uVar2) >> 0x18);
    uVar24 = (uint5)uVar4 & 0xffffffff00;
    uVar7 = (ushort)(((uint7)(byte)((ulonglong)uVar13 >> 0x18) << 0x30) >> 0x28);
    uVar5 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar1 >> 0x18) << 0x30) >>
                                                   0x28),CONCAT14((char)((uint)uVar1 >> 0x10),uVar1)
                                           ) >> 0x20),uVar1) >> 0x18);
    uVar18 = (uint5)uVar5 & 0xffffffff00;
    uVar11 = (ushort)(CONCAT43(uVar5,CONCAT12((char)((uint)uVar1 >> 8),(ushort)uVar1)) >> 0x10) &
             0xff;
    uVar10 = (ushort)uVar1 & 0xff;
    sVar19 = (short)(uVar18 >> 8);
    sVar20 = (short)(uVar18 >> 0x18);
    uVar9 = (ushort)(((uint7)(byte)((ulonglong)uVar13 >> 0x38) << 0x30) >> 0x28);
    uVar17 = *(ulonglong *)(&DAT_005b5d00 + ((uint)*param_4 + (uint)(param_3[1] >> 1)) * 2) ^
             _DAT_005b64f8;
    uVar8 = pmulhw(CONCAT26((uVar7 >> 8) * sVar20,
                            CONCAT24((short)CONCAT21(uVar7,(char)((ulonglong)uVar13 >> 0x10)) *
                                     sVar19,CONCAT22((byte)((ulonglong)uVar13 >> 8) * uVar11,
                                                     (byte)uVar13 * uVar10))),uVar17);
    uVar13 = pmulhw(CONCAT26((uVar9 >> 8) * ((ushort)((short)(uVar24 >> 0x18) + sVar20) >> 1),
                             CONCAT24((short)CONCAT21(uVar9,(char)((ulonglong)uVar13 >> 0x30)) *
                                      ((ushort)((short)(uVar24 >> 8) + sVar19) >> 1),
                                      CONCAT22((ushort)(byte)((ulonglong)uVar13 >> 0x28) *
                                               ((ushort)(((ushort)(CONCAT43(uVar4,CONCAT12((char)((
                                                  uint)uVar2 >> 8),(ushort)uVar2)) >> 0x10) & 0xff)
                                                  + uVar11) >> 1),
                                               ((ushort)((ulonglong)uVar13 >> 0x20) & 0xff) *
                                               ((ushort)(((ushort)uVar2 & 0xff) + uVar10) >> 1)))),
                    uVar17);
    uVar21 = pmulhw(uVar23,*(ulonglong *)
                            (&DAT_005b5d00 + ((uint)*param_4 + (uint)(param_3[1] >> 1)) * 2));
    sVar19 = (short)((ulonglong)uVar21 >> 0x10);
    sVar20 = (short)((ulonglong)uVar21 >> 0x20);
    sVar22 = (short)((ulonglong)uVar21 >> 0x30);
    uVar7 = (ushort)((short)uVar8 + (short)uVar21 + (short)DAT_005b4788) >> 4;
    uVar9 = (ushort)((short)((ulonglong)uVar8 >> 0x10) + sVar19 +
                    (short)((ulonglong)DAT_005b4788 >> 0x10)) >> 4;
    uVar10 = (ushort)((short)((ulonglong)uVar8 >> 0x20) + sVar20 +
                     (short)((ulonglong)DAT_005b4788 >> 0x20)) >> 4;
    uVar11 = (ushort)((short)((ulonglong)uVar8 >> 0x30) + sVar22 +
                     (short)((ulonglong)DAT_005b4788 >> 0x30)) >> 4;
    uVar12 = (ushort)((short)uVar13 + (short)uVar21 + (short)0x0008000800080008) >> 4;
    uVar14 = (ushort)((short)((ulonglong)uVar13 >> 0x10) + sVar19 +
                     (short)((ulonglong)0x0008000800080008 >> 0x10)) >> 4;
    uVar15 = (ushort)((short)((ulonglong)uVar13 >> 0x20) + sVar20 +
                     (short)((ulonglong)0x0008000800080008 >> 0x20)) >> 4;
    uVar16 = (ushort)((short)((ulonglong)uVar13 >> 0x30) + sVar22 +
                     (short)((ulonglong)0x0008000800080008 >> 0x30)) >> 4;
    param_2 = param_2 + 1;
    param_3 = param_3 + 1;
    param_4 = param_4 + 1;
    *param_1 = CONCAT17((uVar16 != 0) * (uVar16 < 0x100) * (char)uVar16 - (0xff < uVar16),
                        CONCAT16((uVar15 != 0) * (uVar15 < 0x100) * (char)uVar15 - (0xff < uVar15),
                                 CONCAT15((uVar14 != 0) * (uVar14 < 0x100) * (char)uVar14 -
                                          (0xff < uVar14),
                                          CONCAT14((uVar12 != 0) * (uVar12 < 0x100) * (char)uVar12 -
                                                   (0xff < uVar12),
                                                   CONCAT13((uVar11 != 0) * (uVar11 < 0x100) *
                                                            (char)uVar11 - (0xff < uVar11),
                                                            CONCAT12((uVar10 != 0) *
                                                                     (uVar10 < 0x100) * (char)uVar10
                                                                     - (0xff < uVar10),
                                                                     CONCAT11((uVar9 != 0) *
                                                                              (uVar9 < 0x100) *
                                                                              (char)uVar9 -
                                                                              (0xff < uVar9),
                                                                              (uVar7 != 0) *
                                                                              (uVar7 < 0x100) *
                                                                              (char)uVar7 -
                                                                              (0xff < uVar7))))))));
    param_1 = param_1 + 1;
    iVar6 = param_5 + -2;
    bVar3 = 1 < param_5;
    param_5 = iVar6;
  } while (iVar6 != 0 && bVar3);
  return;
}
