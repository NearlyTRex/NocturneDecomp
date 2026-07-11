// Name: FUN_00466520
// Address: 00466520
// Address Range: [[00466520, 00466756] [00466760, 00466885]]
// Convention: unknown
// Signature: void FUN_00466520(uint *param_1,undefined8 *param_2,byte *param_3,byte *param_4,int param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00466520(uint *param_1,ulonglong *param_2,byte *param_3,byte *param_4,int param_5)

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
  ushort uVar15;
  ushort uVar16;
  ulonglong uVar13;
  ushort uVar17;
  ulonglong uVar14;
  short sVar20;
  uint5 uVar19;
  short sVar21;
  ulonglong uVar18;
  ulonglong uVar22;
  short sVar23;
  ulonglong uVar24;
  uint5 uVar25;
  
  uVar24 = psllw((ulonglong)
                 CONCAT52(CONCAT41((int)(((uint7)CONCAT21((short)(((uint7)(byte)((uint)_DAT_01c039a8
                                                                                >> 0x18) << 0x30) >>
                                                                 0x28),
                                                          (char)((uint)_DAT_01c039a8 >> 0x10)) <<
                                         0x20) >> 0x18),(char)((uint)_DAT_01c039a8 >> 8)),
                          (ushort)(byte)_DAT_01c039a8),6);
  do {
    uVar13 = *param_2;
    uVar1 = *(uint *)(&DAT_00b0e1fc + ((uint)*param_3 + (uint)param_3[0x140] >> 1) * 4);
    uVar7 = (ushort)(((uint7)(byte)((ulonglong)uVar13 >> 0x18) << 0x30) >> 0x28);
    uVar2 = *(uint *)(&DAT_00b0e1fc + ((uint)param_3[1] + (uint)param_3[0x141] >> 1) * 4);
    uVar4 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar2 >> 0x18) << 0x30) >>
                                                   0x28),CONCAT14((char)((uint)uVar2 >> 0x10),uVar2)
                                           ) >> 0x20),uVar2) >> 0x18);
    uVar25 = (uint5)uVar4 & 0xffffffff00;
    uVar5 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar1 >> 0x18) << 0x30) >>
                                                   0x28),CONCAT14((char)((uint)uVar1 >> 0x10),uVar1)
                                           ) >> 0x20),uVar1) >> 0x18);
    uVar19 = (uint5)uVar5 & 0xffffffff00;
    uVar11 = (ushort)(CONCAT43(uVar5,CONCAT12((char)((uint)uVar1 >> 8),(ushort)uVar1)) >> 0x10) &
             0xff;
    uVar10 = (ushort)uVar1 & 0xff;
    sVar20 = (short)(uVar19 >> 8);
    sVar21 = (short)(uVar19 >> 0x18);
    uVar9 = (ushort)(((uint7)(byte)((ulonglong)uVar13 >> 0x38) << 0x30) >> 0x28);
    uVar18 = *(ulonglong *)
              (&DAT_005b5d00 + ((uint)*param_4 + ((uint)param_3[1] + (uint)param_3[0x141] >> 2)) * 2
              ) ^ _DAT_005b64f8;
    uVar8 = pmulhw(CONCAT26((uVar7 >> 8) * sVar21,
                            CONCAT24((short)CONCAT21(uVar7,(char)((ulonglong)uVar13 >> 0x10)) *
                                     sVar20,CONCAT22((byte)((ulonglong)uVar13 >> 8) * uVar11,
                                                     ((ushort)uVar13 & 0xff) * uVar10))),uVar18);
    uVar13 = pmulhw(CONCAT26((uVar9 >> 8) * ((ushort)((short)(uVar25 >> 0x18) + sVar21) >> 1),
                             CONCAT24((short)CONCAT21(uVar9,(char)((ulonglong)uVar13 >> 0x30)) *
                                      ((ushort)((short)(uVar25 >> 8) + sVar20) >> 1),
                                      CONCAT22((ushort)(byte)((ulonglong)uVar13 >> 0x28) *
                                               ((ushort)(((ushort)CONCAT41(uVar4,(char)((uint)uVar2
                                                                                       >> 8)) & 0xff
                                                         ) + uVar11) >> 1),
                                               ((ushort)((ulonglong)uVar13 >> 0x20) & 0xff) *
                                               ((ushort)((byte)uVar2 + uVar10) >> 1)))),uVar18);
    uVar22 = pmulhw(uVar24,*(ulonglong *)
                            (&DAT_005b5d00 +
                            ((uint)*param_4 + ((uint)param_3[1] + (uint)param_3[0x141] >> 2)) * 2));
    sVar20 = (short)((ulonglong)uVar22 >> 0x10);
    sVar21 = (short)((ulonglong)uVar22 >> 0x20);
    sVar23 = (short)((ulonglong)uVar22 >> 0x30);
    uVar7 = (ushort)((short)uVar8 + (short)uVar22 + (short)0x0020002000200020) >> 4;
    uVar9 = (ushort)((short)((ulonglong)uVar8 >> 0x10) + sVar20 +
                    (short)((ulonglong)0x0020002000200020 >> 0x10)) >> 4;
    uVar10 = (ushort)((short)((ulonglong)uVar8 >> 0x20) + sVar21 +
                     (short)((ulonglong)0x0020002000200020 >> 0x20)) >> 4;
    uVar11 = (ushort)((short)((ulonglong)uVar8 >> 0x30) + sVar23 +
                     (short)((ulonglong)0x0020002000200020 >> 0x30)) >> 4;
    uVar12 = (ushort)((short)uVar13 + (short)uVar22 + (short)0x0060006000600060) >> 4;
    uVar15 = (ushort)((short)((ulonglong)uVar13 >> 0x10) + sVar20 +
                     (short)((ulonglong)0x0060006000600060 >> 0x10)) >> 4;
    uVar16 = (ushort)((short)((ulonglong)uVar13 >> 0x20) + sVar21 +
                     (short)((ulonglong)0x0060006000600060 >> 0x20)) >> 4;
    uVar17 = (ushort)((short)((ulonglong)uVar13 >> 0x30) + sVar23 +
                     (short)((ulonglong)0x0060006000600060 >> 0x30)) >> 4;
    uVar18 = (ulonglong)
             CONCAT13((uVar11 != 0) * (uVar11 < 0x100) * (char)uVar11 - (0xff < uVar11),
                      CONCAT12((uVar10 != 0) * (uVar10 < 0x100) * (char)uVar10 - (0xff < uVar10),
                               CONCAT11((uVar9 != 0) * (uVar9 < 0x100) * (char)uVar9 -
                                        (0xff < uVar9),
                                        (uVar7 != 0) * (uVar7 < 0x100) * (char)uVar7 -
                                        (0xff < uVar7))));
    uVar14 = (ulonglong)
             CONCAT13((uVar17 != 0) * (uVar17 < 0x100) * (char)uVar17 - (0xff < uVar17),
                      CONCAT12((uVar16 != 0) * (uVar16 < 0x100) * (char)uVar16 - (0xff < uVar16),
                               CONCAT11((uVar15 != 0) * (uVar15 < 0x100) * (char)uVar15 -
                                        (0xff < uVar15),
                                        (uVar12 != 0) * (uVar12 < 0x100) * (char)uVar12 -
                                        (0xff < uVar12))));
    param_2 = param_2 + 1;
    param_3 = param_3 + 1;
    param_4 = param_4 + 1;
    *param_1 = (uint)((uVar18 & _DAT_005bf610) >> _DAT_005bf658) |
               (uint)((uVar18 & _DAT_005bf5f0) >> _DAT_005bf638) |
               (uint)((uVar18 & _DAT_005bf5d0) >> _DAT_005bf618) |
               (uint)(((uVar14 & _DAT_005bf610) >> _DAT_005bf658 |
                       (uVar14 & _DAT_005bf5f0) >> _DAT_005bf638 |
                      (uVar14 & _DAT_005bf5d0) >> _DAT_005bf618) << 0x10);
    param_1 = param_1 + 1;
    iVar6 = param_5 + -2;
    bVar3 = 1 < param_5;
    param_5 = iVar6;
  } while (iVar6 != 0 && bVar3);
  return;
}
