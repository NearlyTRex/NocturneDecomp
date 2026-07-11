// Name: FUN_00465f50
// Address: 00465f50
// Address Range: [[00465f50, 00465fc8]]
// Convention: unknown
// Signature: void FUN_00465f50(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,undefined4 param_5,int param_6)

#include "nocturne.h"

void FUN_00465f50(uint *param_1,uint *param_2,uint *param_3,uint param_4,uint param_5,int param_6)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  ushort uVar5;
  ushort uVar7;
  ushort uVar8;
  ulonglong uVar6;
  ushort uVar9;
  ulonglong uVar10;
  ushort uVar11;
  ushort uVar12;
  
  uVar11 = (ushort)((uint)param_5 >> 0x10);
  uVar12 = (ushort)((uint)param_4 >> 0x10);
  do {
    uVar1 = *param_2;
    uVar2 = *param_3;
    uVar6 = psllw((ulonglong)
                  CONCAT52(CONCAT41((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)
                                                  uVar1 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar1 >> 0x10),uVar1)) >>
                                                  0x20),uVar1) >> 0x18),(char)((uint)uVar1 >> 8)),
                           (ushort)(byte)uVar1) & 0xffffffff00ffffff,7);
    uVar10 = psllw((ulonglong)
                   CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((
                                                  uint)uVar2 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar2 >> 0x10),uVar2)) >>
                                                  0x20),uVar2) >> 0x18),
                                            CONCAT12((char)((uint)uVar2 >> 8),(short)uVar2)) >> 0x10
                                  ),(short)uVar2) & 0xffffffff00ff00ff,7);
    uVar6 = pmulhw(uVar6,CONCAT26(uVar11 >> 1,
                                  CONCAT24((ushort)param_5 >> 1,
                                           CONCAT22(uVar11 >> 1,(ushort)param_5 >> 1))));
    uVar10 = pmulhw(uVar10,CONCAT26(uVar12 >> 1,
                                    CONCAT24((ushort)param_4 >> 1,
                                             CONCAT22(uVar12 >> 1,(ushort)param_4 >> 1))));
    uVar5 = (ushort)((short)uVar6 + (short)uVar10) >> 6;
    uVar7 = (ushort)((short)((ulonglong)uVar6 >> 0x10) + (short)((ulonglong)uVar10 >> 0x10)) >> 6;
    uVar8 = (ushort)((short)((ulonglong)uVar6 >> 0x20) + (short)((ulonglong)uVar10 >> 0x20)) >> 6;
    uVar9 = (ushort)((short)((ulonglong)uVar6 >> 0x30) + (short)((ulonglong)uVar10 >> 0x30)) >> 6;
    *param_1 = CONCAT13((uVar9 != 0) * (uVar9 < 0x100) * (char)uVar9 - (0xff < uVar9),
                        CONCAT12((uVar8 != 0) * (uVar8 < 0x100) * (char)uVar8 - (0xff < uVar8),
                                 CONCAT11((uVar7 != 0) * (uVar7 < 0x100) * (char)uVar7 -
                                          (0xff < uVar7),
                                          (uVar5 != 0) * (uVar5 < 0x100) * (char)uVar5 -
                                          (0xff < uVar5))));
    param_2 = param_2 + 1;
    param_3 = param_3 + 1;
    param_1 = param_1 + 1;
    iVar4 = param_6 + -4;
    bVar3 = 3 < param_6;
    param_6 = iVar4;
  } while (iVar4 != 0 && bVar3);
  return;
}
