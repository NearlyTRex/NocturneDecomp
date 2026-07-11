// Name: FUN_00466930
// Address: 00466930
// Address Range: [[00466930, 00466e93]]
// Convention: unknown
// Signature: void FUN_00466930(uint *param_1,undefined4 *param_2,byte *param_3,byte *param_4,int param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00466930(uint *param_1,uint *param_2,byte *param_3,byte *param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ushort uVar7;
  ushort uVar11;
  ushort uVar13;
  uint5 uVar12;
  ulonglong uVar8;
  ushort uVar14;
  ulonglong uVar9;
  ulonglong uVar10;
  uint5 uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  
  uVar17 = psllw((ulonglong)
                 CONCAT52(CONCAT41((int)(((uint7)CONCAT21((short)(((uint7)(byte)((uint)_DAT_01c039a8
                                                                                >> 0x18) << 0x30) >>
                                                                 0x28),
                                                          (char)((uint)_DAT_01c039a8 >> 0x10)) <<
                                         0x20) >> 0x18),(char)((uint)_DAT_01c039a8 >> 8)),
                          (ushort)(byte)_DAT_01c039a8),6);
  do {
    uVar1 = *param_2;
    uVar2 = *(uint *)(&DAT_00b0e1fc + (uint)*param_3 * 4);
    uVar4 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar1 >> 0x18) << 0x30) >>
                                                   0x28),CONCAT14((char)((uint)uVar1 >> 0x10),uVar1)
                                           ) >> 0x20),uVar1) >> 0x18);
    uVar12 = (uint5)uVar4 & 0xffffffff00;
    uVar5 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar2 >> 0x18) << 0x30) >>
                                                   0x28),CONCAT14((char)((uint)uVar2 >> 0x10),uVar2)
                                           ) >> 0x20),uVar2) >> 0x18);
    uVar15 = (uint5)uVar5 & 0xffffffff00;
    uVar8 = pmulhw(CONCAT26((short)(uVar12 >> 0x18) * (short)(uVar15 >> 0x18),
                            CONCAT24((short)(uVar12 >> 8) * (short)(uVar15 >> 8),
                                     CONCAT22(((ushort)(CONCAT43(uVar4,CONCAT12((char)((uint)uVar1
                                                                                      >> 8),
                                                                                (ushort)uVar1)) >>
                                                       0x10) & 0xff) *
                                              ((ushort)CONCAT41(uVar5,(char)((uint)uVar2 >> 8)) &
                                              0xff),((ushort)uVar1 & 0xff) * (ushort)(byte)uVar2))),
                   *(ulonglong *)(&DAT_005b5d00 + ((uint)*param_4 + (uint)(*param_3 >> 1)) * 2) ^
                   _DAT_005b64f8);
    uVar16 = pmulhw(uVar17,*(ulonglong *)
                            (&DAT_005b5d00 + ((uint)*param_4 + (uint)(*param_3 >> 1)) * 2));
    uVar7 = (ushort)((short)uVar8 + (short)uVar16 + (short)DAT_005b4788) >> 4;
    uVar11 = (ushort)((short)((ulonglong)uVar8 >> 0x10) + (short)((ulonglong)uVar16 >> 0x10) +
                     (short)((ulonglong)DAT_005b4788 >> 0x10)) >> 4;
    uVar13 = (ushort)((short)((ulonglong)uVar8 >> 0x20) + (short)((ulonglong)uVar16 >> 0x20) +
                     (short)((ulonglong)DAT_005b4788 >> 0x20)) >> 4;
    uVar14 = (ushort)((short)((ulonglong)uVar8 >> 0x30) + (short)((ulonglong)uVar16 >> 0x30) +
                     (short)((ulonglong)DAT_005b4788 >> 0x30)) >> 4;
    uVar9 = (ulonglong)
            CONCAT13((uVar14 != 0) * (uVar14 < 0x100) * (char)uVar14 - (0xff < uVar14),
                     CONCAT12((uVar13 != 0) * (uVar13 < 0x100) * (char)uVar13 - (0xff < uVar13),
                              CONCAT11((uVar11 != 0) * (uVar11 < 0x100) * (char)uVar11 -
                                       (0xff < uVar11),
                                       (uVar7 != 0) * (uVar7 < 0x100) * (char)uVar7 - (0xff < uVar7)
                                      )));
    uVar1 = param_2[1];
    uVar2 = *(uint *)(&DAT_00b0e1fc + (uint)param_3[1] * 4);
    uVar4 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar1 >> 0x18) << 0x30) >>
                                                   0x28),CONCAT14((char)((uint)uVar1 >> 0x10),uVar1)
                                           ) >> 0x20),uVar1) >> 0x18);
    uVar12 = (uint5)uVar4 & 0xffffffff00;
    uVar7 = (ushort)(((uint7)(byte)((uint)uVar2 >> 0x18) << 0x30) >> 0x28);
    uVar8 = pmulhw(CONCAT26((short)(uVar12 >> 0x18) * (uVar7 >> 8),
                            CONCAT24((short)(uVar12 >> 8) *
                                     (short)(CONCAT25(uVar7,CONCAT14((char)((uint)uVar2 >> 0x10),
                                                                     uVar2)) >> 0x20),
                                     CONCAT22(((ushort)(CONCAT43(uVar4,CONCAT12((char)((uint)uVar1
                                                                                      >> 8),
                                                                                (ushort)uVar1)) >>
                                                       0x10) & 0xff) *
                                              (ushort)(byte)((uint)uVar2 >> 8),
                                              ((ushort)uVar1 & 0xff) * ((ushort)uVar2 & 0xff)))),
                   *(ulonglong *)(&DAT_005b5d00 + ((uint)param_4[1] + (uint)(param_3[1] >> 1)) * 2)
                   ^ _DAT_005b64f8);
    uVar16 = pmulhw(uVar17,*(ulonglong *)
                            (&DAT_005b5d00 + ((uint)param_4[1] + (uint)(param_3[1] >> 1)) * 2));
    uVar7 = (ushort)((short)uVar8 + (short)uVar16 + (short)0x0008000800080008) >> 4;
    uVar11 = (ushort)((short)((ulonglong)uVar8 >> 0x10) + (short)((ulonglong)uVar16 >> 0x10) +
                     (short)((ulonglong)0x0008000800080008 >> 0x10)) >> 4;
    uVar13 = (ushort)((short)((ulonglong)uVar8 >> 0x20) + (short)((ulonglong)uVar16 >> 0x20) +
                     (short)((ulonglong)0x0008000800080008 >> 0x20)) >> 4;
    uVar14 = (ushort)((short)((ulonglong)uVar8 >> 0x30) + (short)((ulonglong)uVar16 >> 0x30) +
                     (short)((ulonglong)0x0008000800080008 >> 0x30)) >> 4;
    uVar10 = (ulonglong)
             CONCAT13((uVar14 != 0) * (uVar14 < 0x100) * (char)uVar14 - (0xff < uVar14),
                      CONCAT12((uVar13 != 0) * (uVar13 < 0x100) * (char)uVar13 - (0xff < uVar13),
                               CONCAT11((uVar11 != 0) * (uVar11 < 0x100) * (char)uVar11 -
                                        (0xff < uVar11),
                                        (uVar7 != 0) * (uVar7 < 0x100) * (char)uVar7 -
                                        (0xff < uVar7))));
    *param_1 = (uint)(((uVar10 & _DAT_005bf610) >> _DAT_005bf658 |
                       (uVar10 & _DAT_005bf5f0) >> _DAT_005bf638 |
                      (uVar10 & _DAT_005bf5d0) >> _DAT_005bf618) << 0x10) |
               (uint)((uVar9 & _DAT_005bf610) >> _DAT_005bf658) |
               (uint)((uVar9 & _DAT_005bf5f0) >> _DAT_005bf638) |
               (uint)((uVar9 & _DAT_005bf5d0) >> _DAT_005bf618);
    param_2 = param_2 + 2;
    param_3 = param_3 + 2;
    param_4 = param_4 + 2;
    param_1 = param_1 + 1;
    iVar6 = param_5 + -2;
    bVar3 = 1 < param_5;
    param_5 = iVar6;
  } while (iVar6 != 0 && bVar3);
  return;
}
