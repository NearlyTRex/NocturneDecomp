// Name: core_dstrender.cpp_FUN_0046568b
// Address: 0046568b
// Address Range: [[0046568b, 004657a6]]
// Convention: unknown
// Signature: void core_dstrender_cpp_FUN_0046568b(undefined8 *param_1,undefined8 *param_2,byte *param_3,byte *param_4,int param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dstrender_cpp_FUN_0046568b(ulonglong *param_1,ulonglong *param_2,byte *param_3,byte *param_4,int param_5)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  ushort uVar7;
  ushort uVar8;
  ulonglong uVar6;
  ushort uVar9;
  ushort uVar10;
  ushort uVar12;
  ushort uVar13;
  ulonglong uVar11;
  ushort uVar14;
  short sVar17;
  uint5 uVar16;
  short sVar18;
  ulonglong uVar15;
  ulonglong uVar19;
  short sVar20;
  ulonglong uVar21;
  
  uVar21 = psllw((ulonglong)
                 CONCAT52(CONCAT41((int)(((uint7)CONCAT21((short)(((uint7)(byte)(g_SolidColorMode >>
                                                                                0x18) << 0x30) >>
                                                                 0x28),
                                                          (char)(g_SolidColorMode >> 0x10)) << 0x20)
                                        >> 0x18),(char)(g_SolidColorMode >> 8)),
                          (ushort)(byte)g_SolidColorMode),6);
  do {
    uVar11 = *param_2;
    uVar1 = *(uint *)(&DAT_00b0e1fc + (uint)*param_3 * 4);
    uVar5 = (ushort)(((uint7)(byte)((ulonglong)uVar11 >> 0x18) << 0x30) >> 0x28);
    uVar3 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar1 >> 0x18) << 0x30) >>
                                                   0x28),CONCAT14((char)((uint)uVar1 >> 0x10),uVar1)
                                           ) >> 0x20),uVar1) >> 0x18);
    uVar16 = (uint5)uVar3 & 0xffffffff00;
    uVar8 = (ushort)CONCAT41(uVar3,(char)((uint)uVar1 >> 8)) & 0xff;
    uVar7 = (ushort)(((uint7)(byte)((ulonglong)uVar11 >> 0x38) << 0x30) >> 0x28);
    sVar17 = (short)(uVar16 >> 8);
    sVar18 = (short)(uVar16 >> 0x18);
    uVar15 = *(ulonglong *)(&DAT_005b5d00 + ((uint)*param_4 + (uint)(*param_3 >> 1)) * 2) ^
             _DAT_005b64f8;
    uVar6 = pmulhw(CONCAT26((uVar5 >> 8) * sVar18,
                            CONCAT24((short)CONCAT21(uVar5,(char)((ulonglong)uVar11 >> 0x10)) *
                                     sVar17,CONCAT22((byte)((ulonglong)uVar11 >> 8) * uVar8,
                                                     ((ushort)uVar11 & 0xff) * (ushort)(byte)uVar1))
                           ),uVar15);
    uVar11 = pmulhw(CONCAT26((uVar7 >> 8) * sVar18,
                             CONCAT24((short)CONCAT21(uVar7,(char)((ulonglong)uVar11 >> 0x30)) *
                                      sVar17,CONCAT22((byte)((ulonglong)uVar11 >> 0x28) * uVar8,
                                                      ((ushort)((ulonglong)uVar11 >> 0x20) & 0xff) *
                                                      (ushort)(byte)uVar1))),uVar15);
    uVar19 = pmulhw(uVar21,*(ulonglong *)
                            (&DAT_005b5d00 + ((uint)*param_4 + (uint)(*param_3 >> 1)) * 2));
    sVar17 = (short)((ulonglong)uVar19 >> 0x10);
    sVar18 = (short)((ulonglong)uVar19 >> 0x20);
    sVar20 = (short)((ulonglong)uVar19 >> 0x30);
    uVar5 = (ushort)((short)uVar6 + (short)uVar19 + (short)0x0004000400040004) >> 4;
    uVar7 = (ushort)((short)((ulonglong)uVar6 >> 0x10) + sVar17 +
                    (short)((ulonglong)0x0004000400040004 >> 0x10)) >> 4;
    uVar8 = (ushort)((short)((ulonglong)uVar6 >> 0x20) + sVar18 +
                    (short)((ulonglong)0x0004000400040004 >> 0x20)) >> 4;
    uVar9 = (ushort)((short)((ulonglong)uVar6 >> 0x30) + sVar20 +
                    (short)((ulonglong)0x0004000400040004 >> 0x30)) >> 4;
    uVar10 = (ushort)((short)uVar11 + (short)uVar19 + (short)0x000C000C000C000C) >> 4;
    uVar12 = (ushort)((short)((ulonglong)uVar11 >> 0x10) + sVar17 +
                     (short)((ulonglong)0x000C000C000C000C >> 0x10)) >> 4;
    uVar13 = (ushort)((short)((ulonglong)uVar11 >> 0x20) + sVar18 +
                     (short)((ulonglong)0x000C000C000C000C >> 0x20)) >> 4;
    uVar14 = (ushort)((short)((ulonglong)uVar11 >> 0x30) + sVar20 +
                     (short)((ulonglong)0x000C000C000C000C >> 0x30)) >> 4;
    *param_1 = CONCAT17((uVar14 != 0) * (uVar14 < 0x100) * (char)uVar14 - (0xff < uVar14),
                        CONCAT16((uVar13 != 0) * (uVar13 < 0x100) * (char)uVar13 - (0xff < uVar13),
                                 CONCAT15((uVar12 != 0) * (uVar12 < 0x100) * (char)uVar12 -
                                          (0xff < uVar12),
                                          CONCAT14((uVar10 != 0) * (uVar10 < 0x100) * (char)uVar10 -
                                                   (0xff < uVar10),
                                                   CONCAT13((uVar9 != 0) * (uVar9 < 0x100) *
                                                            (char)uVar9 - (0xff < uVar9),
                                                            CONCAT12((uVar8 != 0) * (uVar8 < 0x100)
                                                                     * (char)uVar8 - (0xff < uVar8),
                                                                     CONCAT11((uVar7 != 0) *
                                                                              (uVar7 < 0x100) *
                                                                              (char)uVar7 -
                                                                              (0xff < uVar7),
                                                                              (uVar5 != 0) *
                                                                              (uVar5 < 0x100) *
                                                                              (char)uVar5 -
                                                                              (0xff < uVar5))))))));
    uVar11 = param_2[1];
    uVar1 = *(uint *)(&DAT_00b0e1fc + (uint)*param_3 * 4);
    uVar5 = (ushort)(((uint7)(byte)((ulonglong)uVar11 >> 0x18) << 0x30) >> 0x28);
    uVar3 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar1 >> 0x18) << 0x30) >>
                                                   0x28),CONCAT14((char)((uint)uVar1 >> 0x10),uVar1)
                                           ) >> 0x20),uVar1) >> 0x18);
    uVar16 = (uint5)uVar3 & 0xffffffff00;
    uVar9 = (ushort)(CONCAT43(uVar3,CONCAT12((char)((uint)uVar1 >> 8),(ushort)uVar1)) >> 0x10) &
            0xff;
    uVar8 = (ushort)uVar1 & 0xff;
    uVar7 = (ushort)(((uint7)(byte)((ulonglong)uVar11 >> 0x38) << 0x30) >> 0x28);
    sVar17 = (short)(uVar16 >> 8);
    sVar18 = (short)(uVar16 >> 0x18);
    uVar15 = *(ulonglong *)(&DAT_005b5d00 + ((uint)*param_4 + (uint)(*param_3 >> 1)) * 2) ^
             _DAT_005b64f8;
    uVar6 = pmulhw(CONCAT26((uVar5 >> 8) * sVar18,
                            CONCAT24((short)CONCAT21(uVar5,(char)((ulonglong)uVar11 >> 0x10)) *
                                     sVar17,CONCAT22((byte)((ulonglong)uVar11 >> 8) * uVar9,
                                                     ((ushort)uVar11 & 0xff) * uVar8))),uVar15);
    uVar11 = pmulhw(CONCAT26((uVar7 >> 8) * sVar18,
                             CONCAT24((short)CONCAT21(uVar7,(char)((ulonglong)uVar11 >> 0x30)) *
                                      sVar17,CONCAT22((byte)((ulonglong)uVar11 >> 0x28) * uVar9,
                                                      ((ushort)((ulonglong)uVar11 >> 0x20) & 0xff) *
                                                      uVar8))),uVar15);
    uVar19 = pmulhw(uVar21,*(ulonglong *)
                            (&DAT_005b5d00 + ((uint)*param_4 + (uint)(*param_3 >> 1)) * 2));
    sVar17 = (short)((ulonglong)uVar19 >> 0x10);
    sVar18 = (short)((ulonglong)uVar19 >> 0x20);
    sVar20 = (short)((ulonglong)uVar19 >> 0x30);
    uVar5 = (ushort)((short)uVar6 + (short)uVar19 + (short)0x0004000400040004) >> 4;
    uVar7 = (ushort)((short)((ulonglong)uVar6 >> 0x10) + sVar17 +
                    (short)((ulonglong)0x0004000400040004 >> 0x10)) >> 4;
    uVar8 = (ushort)((short)((ulonglong)uVar6 >> 0x20) + sVar18 +
                    (short)((ulonglong)0x0004000400040004 >> 0x20)) >> 4;
    uVar9 = (ushort)((short)((ulonglong)uVar6 >> 0x30) + sVar20 +
                    (short)((ulonglong)0x0004000400040004 >> 0x30)) >> 4;
    uVar10 = (ushort)((short)uVar11 + (short)uVar19 + (short)0x000C000C000C000C) >> 4;
    uVar12 = (ushort)((short)((ulonglong)uVar11 >> 0x10) + sVar17 +
                     (short)((ulonglong)0x000C000C000C000C >> 0x10)) >> 4;
    uVar13 = (ushort)((short)((ulonglong)uVar11 >> 0x20) + sVar18 +
                     (short)((ulonglong)0x000C000C000C000C >> 0x20)) >> 4;
    uVar14 = (ushort)((short)((ulonglong)uVar11 >> 0x30) + sVar20 +
                     (short)((ulonglong)0x000C000C000C000C >> 0x30)) >> 4;
    param_2 = param_2 + 2;
    param_1[1] = CONCAT17((uVar14 != 0) * (uVar14 < 0x100) * (char)uVar14 - (0xff < uVar14),
                          CONCAT16((uVar13 != 0) * (uVar13 < 0x100) * (char)uVar13 - (0xff < uVar13)
                                   ,CONCAT15((uVar12 != 0) * (uVar12 < 0x100) * (char)uVar12 -
                                             (0xff < uVar12),
                                             CONCAT14((uVar10 != 0) * (uVar10 < 0x100) *
                                                      (char)uVar10 - (0xff < uVar10),
                                                      CONCAT13((uVar9 != 0) * (uVar9 < 0x100) *
                                                               (char)uVar9 - (0xff < uVar9),
                                                               CONCAT12((uVar8 != 0) *
                                                                        (uVar8 < 0x100) *
                                                                        (char)uVar8 - (0xff < uVar8)
                                                                        ,CONCAT11((uVar7 != 0) *
                                                                                  (uVar7 < 0x100) *
                                                                                  (char)uVar7 -
                                                                                  (0xff < uVar7),
                                                                                  (uVar5 != 0) *
                                                                                  (uVar5 < 0x100) *
                                                                                  (char)uVar5 -
                                                                                  (0xff < uVar5)))))
                                            )));
    param_1 = param_1 + 2;
    param_3 = param_3 + 1;
    param_4 = param_4 + 1;
    iVar4 = param_5 + -4;
    bVar2 = 3 < param_5;
    param_5 = iVar4;
  } while (iVar4 != 0 && bVar2);
  return;
}
