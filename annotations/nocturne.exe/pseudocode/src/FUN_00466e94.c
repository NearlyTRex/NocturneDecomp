// Name: FUN_00466e94
// Address: 00466e94
// Address Range: [[00466e94, 004671b8]]
// Convention: unknown
// Signature: void FUN_00466e94(uint *param_1,undefined8 *param_2,byte *param_3,byte *param_4,int param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00466e94(uint *param_1,ulonglong *param_2,byte *param_3,byte *param_4,int param_5)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  ushort uVar9;
  ushort uVar10;
  ulonglong uVar6;
  ushort uVar11;
  ulonglong uVar7;
  ulonglong uVar8;
  uint5 uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  uVar14 = psllw((ulonglong)
                 CONCAT52(CONCAT41((int)(((uint7)CONCAT21((short)(((uint7)(byte)((uint)_DAT_01c039a8
                                                                                >> 0x18) << 0x30) >>
                                                                 0x28),
                                                          (char)((uint)_DAT_01c039a8 >> 0x10)) <<
                                         0x20) >> 0x18),(char)((uint)_DAT_01c039a8 >> 8)),
                          (ushort)(byte)_DAT_01c039a8),6);
  do {
    uVar6 = *param_2;
    uVar1 = *(uint *)(&DAT_00b0e1fc + (uint)*param_3 * 4);
    uVar5 = (ushort)(((uint7)(byte)((ulonglong)uVar6 >> 0x18) << 0x30) >> 0x28);
    uVar3 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar1 >> 0x18) << 0x30) >>
                                                   0x28),CONCAT14((char)((uint)uVar1 >> 0x10),uVar1)
                                           ) >> 0x20),uVar1) >> 0x18);
    uVar12 = (uint5)uVar3 & 0xffffffff00;
    uVar6 = pmulhw(CONCAT26((uVar5 >> 8) * (short)(uVar12 >> 0x18),
                            CONCAT24((short)CONCAT21(uVar5,(char)((ulonglong)uVar6 >> 0x10)) *
                                     (short)(uVar12 >> 8),
                                     CONCAT22((ushort)(byte)((ulonglong)uVar6 >> 8) *
                                              ((ushort)CONCAT41(uVar3,(char)((uint)uVar1 >> 8)) &
                                              0xff),((ushort)uVar6 & 0xff) * (ushort)(byte)uVar1))),
                   *(ulonglong *)(&DAT_005b5d00 + ((uint)*param_4 + (uint)(*param_3 >> 1)) * 2) ^
                   _DAT_005b64f8);
    uVar13 = pmulhw(uVar14,*(ulonglong *)
                            (&DAT_005b5d00 + ((uint)*param_4 + (uint)(*param_3 >> 1)) * 2));
    uVar5 = (ushort)((short)uVar6 + (short)uVar13 + (short)0x0004000400040004) >> 4;
    uVar9 = (ushort)((short)((ulonglong)uVar6 >> 0x10) + (short)((ulonglong)uVar13 >> 0x10) +
                    (short)((ulonglong)0x0004000400040004 >> 0x10)) >> 4;
    uVar10 = (ushort)((short)((ulonglong)uVar6 >> 0x20) + (short)((ulonglong)uVar13 >> 0x20) +
                     (short)((ulonglong)0x0004000400040004 >> 0x20)) >> 4;
    uVar11 = (ushort)((short)((ulonglong)uVar6 >> 0x30) + (short)((ulonglong)uVar13 >> 0x30) +
                     (short)((ulonglong)0x0004000400040004 >> 0x30)) >> 4;
    uVar7 = (ulonglong)
            CONCAT13((uVar11 != 0) * (uVar11 < 0x100) * (char)uVar11 - (0xff < uVar11),
                     CONCAT12((uVar10 != 0) * (uVar10 < 0x100) * (char)uVar10 - (0xff < uVar10),
                              CONCAT11((uVar9 != 0) * (uVar9 < 0x100) * (char)uVar9 - (0xff < uVar9)
                                       ,(uVar5 != 0) * (uVar5 < 0x100) * (char)uVar5 -
                                        (0xff < uVar5))));
    uVar6 = *(ulonglong *)((int)param_2 + 4);
    uVar1 = *(uint *)(&DAT_00b0e1fc + (uint)param_3[1] * 4);
    uVar5 = (ushort)(((uint7)(byte)((ulonglong)uVar6 >> 0x18) << 0x30) >> 0x28);
    uVar9 = (ushort)(((uint7)(byte)((uint)uVar1 >> 0x18) << 0x30) >> 0x28);
    uVar6 = pmulhw(CONCAT26((uVar5 >> 8) * (uVar9 >> 8),
                            CONCAT24((short)CONCAT21(uVar5,(char)((ulonglong)uVar6 >> 0x10)) *
                                     (short)(CONCAT25(uVar9,CONCAT14((char)((uint)uVar1 >> 0x10),
                                                                     uVar1)) >> 0x20),
                                     CONCAT22((ushort)(byte)((ulonglong)uVar6 >> 8) *
                                              (ushort)(byte)((uint)uVar1 >> 8),
                                              ((ushort)uVar6 & 0xff) * ((ushort)uVar1 & 0xff)))),
                   *(ulonglong *)(&DAT_005b5d00 + ((uint)param_4[1] + (uint)(param_3[1] >> 1)) * 2)
                   ^ _DAT_005b64f8);
    uVar13 = pmulhw(uVar14,*(ulonglong *)
                            (&DAT_005b5d00 + ((uint)param_4[1] + (uint)(param_3[1] >> 1)) * 2));
    uVar5 = (ushort)((short)uVar6 + (short)uVar13 + (short)0x000C000C000C000C) >> 4;
    uVar9 = (ushort)((short)((ulonglong)uVar6 >> 0x10) + (short)((ulonglong)uVar13 >> 0x10) +
                    (short)((ulonglong)0x000C000C000C000C >> 0x10)) >> 4;
    uVar10 = (ushort)((short)((ulonglong)uVar6 >> 0x20) + (short)((ulonglong)uVar13 >> 0x20) +
                     (short)((ulonglong)0x000C000C000C000C >> 0x20)) >> 4;
    uVar11 = (ushort)((short)((ulonglong)uVar6 >> 0x30) + (short)((ulonglong)uVar13 >> 0x30) +
                     (short)((ulonglong)0x000C000C000C000C >> 0x30)) >> 4;
    uVar8 = (ulonglong)
            CONCAT13((uVar11 != 0) * (uVar11 < 0x100) * (char)uVar11 - (0xff < uVar11),
                     CONCAT12((uVar10 != 0) * (uVar10 < 0x100) * (char)uVar10 - (0xff < uVar10),
                              CONCAT11((uVar9 != 0) * (uVar9 < 0x100) * (char)uVar9 - (0xff < uVar9)
                                       ,(uVar5 != 0) * (uVar5 < 0x100) * (char)uVar5 -
                                        (0xff < uVar5))));
    *param_1 = (uint)(((uVar8 & _DAT_005bf610) >> _DAT_005bf658 |
                       (uVar8 & _DAT_005bf5f0) >> _DAT_005bf638 |
                      (uVar8 & _DAT_005bf5d0) >> _DAT_005bf618) << 0x10) |
               (uint)((uVar7 & _DAT_005bf610) >> _DAT_005bf658) |
               (uint)((uVar7 & _DAT_005bf5f0) >> _DAT_005bf638) |
               (uint)((uVar7 & _DAT_005bf5d0) >> _DAT_005bf618);
    param_2 = param_2 + 1;
    param_3 = param_3 + 2;
    param_4 = param_4 + 2;
    param_1 = param_1 + 1;
    iVar4 = param_5 + -2;
    bVar2 = 1 < param_5;
    param_5 = iVar4;
  } while (iVar4 != 0 && bVar2);
  return;
}
