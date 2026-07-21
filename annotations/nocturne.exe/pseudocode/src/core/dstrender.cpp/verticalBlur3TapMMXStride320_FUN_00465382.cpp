// Name: core_dstrender.cpp_verticalBlur3TapMMXStride320_FUN_00465382
// Address: 00465382
// Address Range: [[00465382, 004654c4]]
// Convention: __cdecl
// Signature: void __cdecl core_dstrender_cpp_verticalBlur3TapMMXStride320_FUN_00465382(undefined8 *param_1,undefined8 *param_2,int param_3)

#include "nocturne.h"

void __cdecl core_dstrender_cpp_verticalBlur3TapMMXStride320_FUN_00465382(ulonglong *param_1,ulonglong *param_2,int param_3)

{
  ulonglong uVar1;
  bool bVar2;
  byte uVar3;
  byte uVar4;
  byte uVar5;
  byte uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ushort uVar13;
  ushort uVar15;
  ushort uVar16;
  ulonglong uVar14;
  ushort uVar17;
  ushort uVar18;
  ushort uVar20;
  ushort uVar21;
  ulonglong uVar19;
  ushort uVar22;
  
  uVar8 = param_2[-0x28];
  uVar11 = *param_2;
  uVar1 = param_2[0x28];
  uVar6 = (byte)((uint)(uint)DAT_005b4748 >> 0x18);
  uVar5 = (byte)((uint)(uint)DAT_005b4748 >> 0x10);
  uVar4 = (byte)((uint)(uint)DAT_005b4748 >> 8);
  uVar3 = (byte)(uint)DAT_005b4748;
  uVar11 = CONCAT62(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(uVar6,(char)((ulonglong)uVar11 >>
                                                                             0x18)),uVar5),
                                               (char)((ulonglong)uVar11 >> 0x10)),uVar4),
                             (char)((ulonglong)uVar11 >> 8)),CONCAT11(uVar3,(char)uVar11));
  uVar8 = paddusw(CONCAT62(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(uVar6,(char)((ulonglong)
                                                                                     uVar8 >> 0x18))
                                                               ,uVar5),
                                                      (char)((ulonglong)uVar8 >> 0x10)),uVar4),
                                    (char)((ulonglong)uVar8 >> 8)),CONCAT11(uVar3,(char)uVar8)),
                  uVar11);
  uVar11 = paddusw(uVar11,CONCAT62(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(uVar6,(char)((
                                                  ulonglong)uVar1 >> 0x18)),uVar5),
                                                  (char)((ulonglong)uVar1 >> 0x10)),uVar4),
                                            (char)((ulonglong)uVar1 >> 8)),
                                   CONCAT11(uVar3,(char)uVar1)));
  uVar9 = paddusw(uVar8,uVar11);
  uVar8 = param_2[-0x29];
  uVar11 = param_2[-1];
  uVar1 = param_2[0x27];
  uVar3 = (byte)DAT_005b4748._4_4_;
  uVar4 = (byte)((uint)DAT_005b4748._4_4_ >> 8);
  uVar5 = (byte)((uint)DAT_005b4748._4_4_ >> 0x10);
  uVar6 = (byte)((uint)DAT_005b4748._4_4_ >> 0x18);
  uVar11 = CONCAT17(uVar6,CONCAT16((char)((ulonglong)uVar11 >> 0x38),
                                   CONCAT15(uVar5,CONCAT14((char)((ulonglong)uVar11 >> 0x30),
                                                           CONCAT13(uVar4,CONCAT12((char)((ulonglong
                                                                                          )uVar11 >>
                                                                                         0x28),
                                                                                   CONCAT11(uVar3,(
                                                  char)((ulonglong)uVar11 >> 0x20))))))));
  uVar8 = paddusw(CONCAT17(uVar6,CONCAT16((char)((ulonglong)uVar8 >> 0x38),
                                          CONCAT15(uVar5,CONCAT14((char)((ulonglong)uVar8 >> 0x30),
                                                                  CONCAT13(uVar4,CONCAT12((char)((
                                                  ulonglong)uVar8 >> 0x28),
                                                  CONCAT11(uVar3,(char)((ulonglong)uVar8 >> 0x20))))
                                                  )))),uVar11);
  uVar11 = paddusw(uVar11,CONCAT17(uVar6,CONCAT16((char)((ulonglong)uVar1 >> 0x38),
                                                  CONCAT15(uVar5,CONCAT14((char)((ulonglong)uVar1 >>
                                                                                0x30),
                                                                          CONCAT13(uVar4,CONCAT12((
                                                  char)((ulonglong)uVar1 >> 0x28),
                                                  CONCAT11(uVar3,(char)((ulonglong)uVar1 >> 0x20))))
                                                  )))));
  uVar10 = paddusw(uVar8,uVar11);
  do {
    uVar8 = paddusw(uVar10 >> 0x30,uVar9);
    uVar12 = paddusw(uVar9 >> 0x10,uVar9);
    uVar14 = paddusw(uVar9 << 0x10,uVar8);
    uVar8 = param_2[-0x28];
    uVar11 = *param_2;
    uVar1 = param_2[0x28];
    uVar3 = (byte)DAT_005b4748._4_4_;
    uVar4 = (byte)((uint)DAT_005b4748._4_4_ >> 8);
    uVar5 = (byte)((uint)DAT_005b4748._4_4_ >> 0x10);
    uVar6 = (byte)((uint)DAT_005b4748._4_4_ >> 0x18);
    uVar11 = CONCAT17(uVar6,CONCAT16((char)((ulonglong)uVar11 >> 0x38),
                                     CONCAT15(uVar5,CONCAT14((char)((ulonglong)uVar11 >> 0x30),
                                                             CONCAT13(uVar4,CONCAT12((char)((
                                                  ulonglong)uVar11 >> 0x28),
                                                  CONCAT11(uVar3,(char)((ulonglong)uVar11 >> 0x20)))
                                                  )))));
    uVar8 = paddusw(CONCAT17(uVar6,CONCAT16((char)((ulonglong)uVar8 >> 0x38),
                                            CONCAT15(uVar5,CONCAT14((char)((ulonglong)uVar8 >> 0x30)
                                                                    ,CONCAT13(uVar4,CONCAT12((char)(
                                                  (ulonglong)uVar8 >> 0x28),
                                                  CONCAT11(uVar3,(char)((ulonglong)uVar8 >> 0x20))))
                                                  )))),uVar11);
    uVar11 = paddusw(uVar11,CONCAT17(uVar6,CONCAT16((char)((ulonglong)uVar1 >> 0x38),
                                                    CONCAT15(uVar5,CONCAT14((char)((ulonglong)uVar1
                                                                                  >> 0x30),
                                                                            CONCAT13(uVar4,CONCAT12(
                                                  (char)((ulonglong)uVar1 >> 0x28),
                                                  CONCAT11(uVar3,(char)((ulonglong)uVar1 >> 0x20))))
                                                  )))));
    uVar10 = paddusw(uVar8,uVar11);
    uVar11 = paddusw(uVar14,uVar12);
    uVar8 = paddusw(uVar9 >> 0x30,uVar10);
    uVar14 = paddusw(uVar11,uVar10 << 0x30);
    uVar12 = paddusw(uVar10 >> 0x10,uVar10);
    uVar19 = paddusw(uVar10 << 0x10,uVar8);
    uVar8 = param_2[-0x27];
    uVar11 = param_2[1];
    uVar1 = param_2[0x29];
    uVar6 = (byte)((uint)(uint)DAT_005b4748 >> 0x18);
    uVar5 = (byte)((uint)(uint)DAT_005b4748 >> 0x10);
    uVar4 = (byte)((uint)(uint)DAT_005b4748 >> 8);
    uVar3 = (byte)(uint)DAT_005b4748;
    uVar11 = CONCAT62(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(uVar6,(char)((ulonglong)uVar11 >>
                                                                               0x18)),uVar5),
                                                 (char)((ulonglong)uVar11 >> 0x10)),uVar4),
                               (char)((ulonglong)uVar11 >> 8)),CONCAT11(uVar3,(char)uVar11));
    uVar8 = paddusw(CONCAT62(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(uVar6,(char)((ulonglong)
                                                                                       uVar8 >> 0x18
                                                                                      )),uVar5),
                                                        (char)((ulonglong)uVar8 >> 0x10)),uVar4),
                                      (char)((ulonglong)uVar8 >> 8)),CONCAT11(uVar3,(char)uVar8)),
                    uVar11);
    uVar11 = paddusw(uVar11,CONCAT62(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(uVar6,(char)((
                                                  ulonglong)uVar1 >> 0x18)),uVar5),
                                                  (char)((ulonglong)uVar1 >> 0x10)),uVar4),
                                              (char)((ulonglong)uVar1 >> 8)),
                                     CONCAT11(uVar3,(char)uVar1)));
    uVar9 = paddusw(uVar8,uVar11);
    uVar8 = paddusw(uVar19,uVar12);
    uVar13 = (ushort)uVar14 >> 4;
    uVar15 = (ushort)((ulonglong)uVar14 >> 0x10) >> 4;
    uVar16 = (ushort)((ulonglong)uVar14 >> 0x20) >> 4;
    uVar17 = (ushort)((ulonglong)uVar14 >> 0x34);
    uVar8 = paddusw(uVar8,uVar9 << 0x30);
    uVar18 = (ushort)uVar8 >> 4;
    uVar20 = (ushort)((ulonglong)uVar8 >> 0x10) >> 4;
    uVar21 = (ushort)((ulonglong)uVar8 >> 0x20) >> 4;
    uVar22 = (ushort)((ulonglong)uVar8 >> 0x34);
    param_2 = param_2 + 1;
    *param_1 = CONCAT17((uVar22 != 0) * (uVar22 < 0x100) * (char)uVar22 - (0xff < uVar22),
                        CONCAT16((uVar21 != 0) * (uVar21 < 0x100) * (char)uVar21 - (0xff < uVar21),
                                 CONCAT15((uVar20 != 0) * (uVar20 < 0x100) * (char)uVar20 -
                                          (0xff < uVar20),
                                          CONCAT14((uVar18 != 0) * (uVar18 < 0x100) * (char)uVar18 -
                                                   (0xff < uVar18),
                                                   CONCAT13((uVar17 != 0) * (uVar17 < 0x100) *
                                                            (char)uVar17 - (0xff < uVar17),
                                                            CONCAT12((uVar16 != 0) *
                                                                     (uVar16 < 0x100) * (char)uVar16
                                                                     - (0xff < uVar16),
                                                                     CONCAT11((uVar15 != 0) *
                                                                              (uVar15 < 0x100) *
                                                                              (char)uVar15 -
                                                                              (0xff < uVar15),
                                                                              (uVar13 != 0) *
                                                                              (uVar13 < 0x100) *
                                                                              (char)uVar13 -
                                                                              (0xff < uVar13))))))))
    ;
    param_1 = param_1 + 1;
    iVar7 = param_3 + -8;
    bVar2 = 7 < param_3;
    param_3 = iVar7;
  } while (iVar7 != 0 && bVar2);
  return;
}
