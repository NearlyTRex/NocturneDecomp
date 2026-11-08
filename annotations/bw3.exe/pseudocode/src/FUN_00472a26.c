// Name: FUN_00472a26
// Address: 00472a26
// Address Range: [[00472a26, 00472acf]]
// Convention: unknown
// Signature: void FUN_00472a26(ushort *param_1,undefined4 *param_2,byte *param_3,byte *param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00472a26(ushort *param_1,uint *param_2,byte *param_3,byte *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  ushort uVar8;
  ushort uVar10;
  uint5 uVar9;
  ulonglong uVar6;
  ushort uVar11;
  ulonglong uVar7;
  uint5 uVar12;
  ulonglong uVar13;
  
  uVar13 = psllw((ulonglong)
                 CONCAT52(CONCAT41((int)(((uint7)CONCAT21((short)(((uint7)(byte)((uint)_DAT_01c6e2bc
                                                                                >> 0x18) << 0x30) >>
                                                                 0x28),
                                                          (char)((uint)_DAT_01c6e2bc >> 0x10)) <<
                                         0x20) >> 0x18),(char)((uint)_DAT_01c6e2bc >> 8)),
                          (ushort)(byte)_DAT_01c6e2bc),6);
  uVar1 = *param_2;
  uVar2 = *(uint *)(&DAT_00b9e14c + (uint)*param_3 * 4);
  uVar3 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar1 >> 0x18) << 0x30) >>
                                                 0x28),CONCAT14((char)((uint)uVar1 >> 0x10),uVar1))
                                >> 0x20),uVar1) >> 0x18);
  uVar9 = (uint5)uVar3 & 0xffffffff00;
  uVar4 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar2 >> 0x18) << 0x30) >>
                                                 0x28),CONCAT14((char)((uint)uVar2 >> 0x10),uVar2))
                                >> 0x20),uVar2) >> 0x18);
  uVar12 = (uint5)uVar4 & 0xffffffff00;
  uVar6 = pmulhw(CONCAT26((short)(uVar9 >> 0x18) * (short)(uVar12 >> 0x18),
                          CONCAT24((short)(uVar9 >> 8) * (short)(uVar12 >> 8),
                                   CONCAT22(((ushort)(CONCAT43(uVar3,CONCAT12((char)((uint)uVar1 >>
                                                                                    8),(ushort)uVar1
                                                                             )) >> 0x10) & 0xff) *
                                            ((ushort)CONCAT41(uVar4,(char)((uint)uVar2 >> 8)) & 0xff
                                            ),((ushort)uVar1 & 0xff) * (ushort)(byte)uVar2))),
                 *(ulonglong *)(&DAT_005fa0e0 + ((uint)*param_4 + (uint)(*param_3 >> 1)) * 2) ^
                 _DAT_005fa8d8);
  uVar13 = pmulhw(uVar13,*(ulonglong *)
                          (&DAT_005fa0e0 + ((uint)*param_4 + (uint)(*param_3 >> 1)) * 2));
  uVar5 = (ushort)((short)uVar6 + (short)uVar13) >> 4;
  uVar8 = (ushort)((short)((ulonglong)uVar6 >> 0x10) + (short)((ulonglong)uVar13 >> 0x10)) >> 4;
  uVar10 = (ushort)((short)((ulonglong)uVar6 >> 0x20) + (short)((ulonglong)uVar13 >> 0x20)) >> 4;
  uVar11 = (ushort)((short)((ulonglong)uVar6 >> 0x30) + (short)((ulonglong)uVar13 >> 0x30)) >> 4;
  uVar7 = (ulonglong)
          CONCAT13((uVar11 != 0) * (uVar11 < 0x100) * (char)uVar11 - (0xff < uVar11),
                   CONCAT12((uVar10 != 0) * (uVar10 < 0x100) * (char)uVar10 - (0xff < uVar10),
                            CONCAT11((uVar8 != 0) * (uVar8 < 0x100) * (char)uVar8 - (0xff < uVar8),
                                     (uVar5 != 0) * (uVar5 < 0x100) * (char)uVar5 - (0xff < uVar5)))
                  );
  *param_1 = (ushort)((uVar7 & _DAT_00604eb8) >> _DAT_00604f00) |
             (ushort)((uVar7 & _DAT_00604e98) >> _DAT_00604ee0) |
             (ushort)((uVar7 & _DAT_00604e78) >> _DAT_00604ec0);
  return;
}
