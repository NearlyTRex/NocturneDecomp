// Name: core_dstrender.cpp_verticalBlur3TapMMXStride128_FUN_004922c8
// Address: 004922c8
// Address Range: [[004922c8, 004923fe]]
// Convention: __cdecl
// Signature: void core_dstrender.cpp_verticalBlur3TapMMXStride128_FUN_004922c8(ulonglong * output_buffer, ulonglong * input_buffer, int pixel_count)

#include "nocturne.h"

void __cdecl
core_dstrender_cpp_verticalBlur3TapMMXStride128_FUN_004922c8
          (ulonglong *output_buffer,ulonglong *input_buffer,int pixel_count)

{
  ulonglong uVar1;
  ulonglong uVar2;
  bool bVar3;
  byte uVar4;
  byte uVar5;
  byte uVar6;
  byte uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ushort uVar14;
  ushort uVar16;
  ushort uVar17;
  ulonglong uVar15;
  ushort uVar18;
  ushort uVar19;
  ushort uVar21;
  ushort uVar22;
  ulonglong uVar20;
  ushort uVar23;
  
  uVar11 = input_buffer[-0x10];
  uVar1 = *input_buffer;
  uVar2 = input_buffer[0x10];
  uVar7 = (byte)((uint)(uint)g_FilterBlendConstant >> 0x18);
  uVar6 = (byte)((uint)(uint)g_FilterBlendConstant >> 0x10);
  uVar5 = (byte)((uint)(uint)g_FilterBlendConstant >> 8);
  uVar4 = (byte)(uint)g_FilterBlendConstant;
  uVar12 = CONCAT62 /* combine 2-byte values */(CONCAT51 /* combine 2-byte values */(CONCAT41 /* combine 2-byte values */(CONCAT31 /* combine 2-byte values */(CONCAT21 /* combine 2-byte values */(CONCAT11 /* combine 2-byte values */(uVar7,(char)(uVar1 >> 0x18)),uVar6)
                                               ,(char)(uVar1 >> 0x10)),uVar5),(char)(uVar1 >> 8)),
                    CONCAT11 /* combine 2-byte values */(uVar4,(char)uVar1));
  uVar9 = paddusw(CONCAT62 /* combine 2-byte values */(CONCAT51 /* combine 2-byte values */(CONCAT41 /* combine 2-byte values */(CONCAT31 /* combine 2-byte values */(CONCAT21 /* combine 2-byte values */(CONCAT11 /* combine 2-byte values */(uVar7,(char)(uVar11 >> 0x18)
                                                                       ),uVar6),
                                                      (char)(uVar11 >> 0x10)),uVar5),
                                    (char)(uVar11 >> 8)),CONCAT11 /* combine 2-byte values */(uVar4,(char)uVar11)),uVar12);
  uVar12 = paddusw(uVar12,CONCAT62 /* combine 2-byte values */(CONCAT51 /* combine 2-byte values */(CONCAT41 /* combine 2-byte values */(CONCAT31 /* combine 2-byte values */(CONCAT21 /* combine 2-byte values */(CONCAT11 /* combine 2-byte values */(uVar7,(char)(uVar2 
                                                  >> 0x18)),uVar6),(char)(uVar2 >> 0x10)),uVar5),
                                            (char)(uVar2 >> 8)),CONCAT11 /* combine 2-byte values */(uVar4,(char)uVar2)));
  uVar10 = paddusw(uVar9,uVar12);
  uVar11 = input_buffer[-0x11];
  uVar1 = input_buffer[-1];
  uVar2 = input_buffer[0xf];
  uVar4 = (byte)g_FilterBlendConstant._4_4_;
  uVar5 = (byte)((uint)g_FilterBlendConstant._4_4_ >> 8);
  uVar6 = (byte)((uint)g_FilterBlendConstant._4_4_ >> 0x10);
  uVar7 = (byte)((uint)g_FilterBlendConstant._4_4_ >> 0x18);
  uVar12 = CONCAT17 /* combine 2-byte values */(uVar7,CONCAT16 /* combine 2-byte values */((char)(uVar1 >> 0x38),
                                   CONCAT15 /* combine 2-byte values */(uVar6,CONCAT14 /* combine 2-byte values */((char)(uVar1 >> 0x30),
                                                           CONCAT13 /* combine 2-byte values */(uVar5,CONCAT12 /* combine 2-byte values */((char)(uVar1 >> 
                                                  0x28),CONCAT11 /* combine 2-byte values */(uVar4,(char)(uVar1 >> 0x20))))))));
  uVar9 = paddusw(CONCAT17 /* combine 2-byte values */(uVar7,CONCAT16 /* combine 2-byte values */((char)(uVar11 >> 0x38),
                                          CONCAT15 /* combine 2-byte values */(uVar6,CONCAT14 /* combine 2-byte values */((char)(uVar11 >> 0x30),
                                                                  CONCAT13 /* combine 2-byte values */(uVar5,CONCAT12 /* combine 2-byte values */((char)(
                                                  uVar11 >> 0x28),
                                                  CONCAT11 /* combine 2-byte values */(uVar4,(char)(uVar11 >> 0x20)))))))),
                  uVar12);
  uVar12 = paddusw(uVar12,CONCAT17 /* combine 2-byte values */(uVar7,CONCAT16 /* combine 2-byte values */((char)(uVar2 >> 0x38),
                                                  CONCAT15 /* combine 2-byte values */(uVar6,CONCAT14 /* combine 2-byte values */((char)(uVar2 >> 0x30),
                                                                          CONCAT13 /* combine 2-byte values */(uVar5,CONCAT12 /* combine 2-byte values */((
                                                  char)(uVar2 >> 0x28),
                                                  CONCAT11 /* combine 2-byte values */(uVar4,(char)(uVar2 >> 0x20)))))))));
  uVar11 = paddusw(uVar9,uVar12);
  do {
    uVar9 = paddusw(uVar11 >> 0x30,uVar10);
    uVar13 = paddusw(uVar10 >> 0x10,uVar10);
    uVar15 = paddusw(uVar10 << 0x10,uVar9);
    uVar11 = input_buffer[-0x10];
    uVar1 = *input_buffer;
    uVar2 = input_buffer[0x10];
    uVar4 = (byte)g_FilterBlendConstant._4_4_;
    uVar5 = (byte)((uint)g_FilterBlendConstant._4_4_ >> 8);
    uVar6 = (byte)((uint)g_FilterBlendConstant._4_4_ >> 0x10);
    uVar7 = (byte)((uint)g_FilterBlendConstant._4_4_ >> 0x18);
    uVar12 = CONCAT17 /* combine 2-byte values */(uVar7,CONCAT16 /* combine 2-byte values */((char)(uVar1 >> 0x38),
                                     CONCAT15 /* combine 2-byte values */(uVar6,CONCAT14 /* combine 2-byte values */((char)(uVar1 >> 0x30),
                                                             CONCAT13 /* combine 2-byte values */(uVar5,CONCAT12 /* combine 2-byte values */((char)(uVar1 >>
                                                                                           0x28),
                                                                                     CONCAT11 /* combine 2-byte values */(uVar4,
                                                  (char)(uVar1 >> 0x20))))))));
    uVar9 = paddusw(CONCAT17 /* combine 2-byte values */(uVar7,CONCAT16 /* combine 2-byte values */((char)(uVar11 >> 0x38),
                                            CONCAT15 /* combine 2-byte values */(uVar6,CONCAT14 /* combine 2-byte values */((char)(uVar11 >> 0x30),
                                                                    CONCAT13 /* combine 2-byte values */(uVar5,CONCAT12 /* combine 2-byte values */((char)(
                                                  uVar11 >> 0x28),
                                                  CONCAT11 /* combine 2-byte values */(uVar4,(char)(uVar11 >> 0x20)))))))),
                    uVar12);
    uVar12 = paddusw(uVar12,CONCAT17 /* combine 2-byte values */(uVar7,CONCAT16 /* combine 2-byte values */((char)(uVar2 >> 0x38),
                                                    CONCAT15 /* combine 2-byte values */(uVar6,CONCAT14 /* combine 2-byte values */((char)(uVar2 >> 0x30),
                                                                            CONCAT13 /* combine 2-byte values */(uVar5,CONCAT12 /* combine 2-byte values */(
                                                  (char)(uVar2 >> 0x28),
                                                  CONCAT11 /* combine 2-byte values */(uVar4,(char)(uVar2 >> 0x20)))))))));
    uVar11 = paddusw(uVar9,uVar12);
    uVar12 = paddusw(uVar15,uVar13);
    uVar9 = paddusw(uVar10 >> 0x30,uVar11);
    uVar15 = paddusw(uVar12,uVar11 << 0x30);
    uVar13 = paddusw(uVar11 >> 0x10,uVar11);
    uVar20 = paddusw(uVar11 << 0x10,uVar9);
    uVar1 = input_buffer[-0xf];
    uVar2 = input_buffer[1];
    uVar10 = input_buffer[0x11];
    uVar7 = (byte)((uint)(uint)g_FilterBlendConstant >> 0x18);
    uVar6 = (byte)((uint)(uint)g_FilterBlendConstant >> 0x10);
    uVar5 = (byte)((uint)(uint)g_FilterBlendConstant >> 8);
    uVar4 = (byte)(uint)g_FilterBlendConstant;
    uVar12 = CONCAT62 /* combine 2-byte values */(CONCAT51 /* combine 2-byte values */(CONCAT41 /* combine 2-byte values */(CONCAT31 /* combine 2-byte values */(CONCAT21 /* combine 2-byte values */(CONCAT11 /* combine 2-byte values */(uVar7,(char)(uVar2 >> 0x18)),
                                                          uVar6),(char)(uVar2 >> 0x10)),uVar5),
                               (char)(uVar2 >> 8)),CONCAT11 /* combine 2-byte values */(uVar4,(char)uVar2));
    uVar9 = paddusw(CONCAT62 /* combine 2-byte values */(CONCAT51 /* combine 2-byte values */(CONCAT41 /* combine 2-byte values */(CONCAT31 /* combine 2-byte values */(CONCAT21 /* combine 2-byte values */(CONCAT11 /* combine 2-byte values */(uVar7,(char)(uVar1 >> 0x18
                                                                                      )),uVar6),
                                                        (char)(uVar1 >> 0x10)),uVar5),
                                      (char)(uVar1 >> 8)),CONCAT11 /* combine 2-byte values */(uVar4,(char)uVar1)),uVar12);
    uVar12 = paddusw(uVar12,CONCAT62 /* combine 2-byte values */(CONCAT51 /* combine 2-byte values */(CONCAT41 /* combine 2-byte values */(CONCAT31 /* combine 2-byte values */(CONCAT21 /* combine 2-byte values */(CONCAT11 /* combine 2-byte values */(uVar7,(char)(
                                                  uVar10 >> 0x18)),uVar6),(char)(uVar10 >> 0x10)),
                                                  uVar5),(char)(uVar10 >> 8)),
                                     CONCAT11 /* combine 2-byte values */(uVar4,(char)uVar10)));
    uVar10 = paddusw(uVar9,uVar12);
    uVar9 = paddusw(uVar20,uVar13);
    uVar14 = (ushort)uVar15 >> 4;
    uVar16 = (ushort)((ulonglong)uVar15 >> 0x10) >> 4;
    uVar17 = (ushort)((ulonglong)uVar15 >> 0x20) >> 4;
    uVar18 = (ushort)((ulonglong)uVar15 >> 0x34);
    uVar9 = paddusw(uVar9,uVar10 << 0x30);
    uVar19 = (ushort)uVar9 >> 4;
    uVar21 = (ushort)((ulonglong)uVar9 >> 0x10) >> 4;
    uVar22 = (ushort)((ulonglong)uVar9 >> 0x20) >> 4;
    uVar23 = (ushort)((ulonglong)uVar9 >> 0x34);
    input_buffer = input_buffer + 1;
    *output_buffer =
         CONCAT17 /* combine 2-byte values */((uVar23 != 0) * (uVar23 < 0x100) * (char)uVar23 - (0xff < uVar23),
                  CONCAT16 /* combine 2-byte values */((uVar22 != 0) * (uVar22 < 0x100) * (char)uVar22 - (0xff < uVar22),
                           CONCAT15 /* combine 2-byte values */((uVar21 != 0) * (uVar21 < 0x100) * (char)uVar21 -
                                    (0xff < uVar21),
                                    CONCAT14 /* combine 2-byte values */((uVar19 != 0) * (uVar19 < 0x100) * (char)uVar19 -
                                             (0xff < uVar19),
                                             CONCAT13 /* combine 2-byte values */((uVar18 != 0) * (uVar18 < 0x100) *
                                                      (char)uVar18 - (0xff < uVar18),
                                                      CONCAT12 /* combine 2-byte values */((uVar17 != 0) * (uVar17 < 0x100) *
                                                               (char)uVar17 - (0xff < uVar17),
                                                               CONCAT11 /* combine 2-byte values */((uVar16 != 0) *
                                                                        (uVar16 < 0x100) *
                                                                        (char)uVar16 -
                                                                        (0xff < uVar16),
                                                                        (uVar14 != 0) *
                                                                        (uVar14 < 0x100) *
                                                                        (char)uVar14 -
                                                                        (0xff < uVar14))))))));
    output_buffer = output_buffer + 1;
    iVar8 = pixel_count + -8;
    bVar3 = 7 < pixel_count;
    pixel_count = iVar8;
  } while (iVar8 != 0 && bVar3);
  return;
}
