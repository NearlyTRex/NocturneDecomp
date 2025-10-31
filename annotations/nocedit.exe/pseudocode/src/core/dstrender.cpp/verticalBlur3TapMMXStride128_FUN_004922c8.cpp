// Name: core_dstrender.cpp_verticalBlur3TapMMXStride128_FUN_004922c8
// Address: 004922c8
// Address Range: [[004922c8, 004923fe]]
// Convention: __cdecl
// Signature: void core_dstrender.cpp_verticalBlur3TapMMXStride128_FUN_004922c8(ulonglong * output_buffer, ulonglong * input_buffer, int pixel_count)
// Globals:
//   ulonglong g_FilterBlendConstant = 0x0

#include "nocturne.h"

void __cdecl
core_dstrender_cpp_verticalBlur3TapMMXStride128_FUN_004922c8
          (ulonglong *output_buffer,ulonglong *input_buffer,int pixel_count)

{
  ulonglong uVar1;
  ulonglong uVar2;
  bool bVar3;
  int iVar4;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ushort uVar14;
  ushort uVar16;
  ushort uVar17;
  undefined8 uVar15;
  ushort uVar18;
  ushort uVar19;
  ushort uVar21;
  ushort uVar22;
  undefined8 uVar20;
  ushort uVar23;
  
  uVar11 = input_buffer[-0x10];
  uVar1 = *input_buffer;
  uVar2 = input_buffer[0x10];
  uVar10 = (undefined1)((uint)(undefined4)g_FilterBlendConstant >> 0x18);
  uVar9 = (undefined1)((uint)(undefined4)g_FilterBlendConstant >> 0x10);
  uVar8 = (undefined1)((uint)(undefined4)g_FilterBlendConstant >> 8);
  uVar7 = (undefined1)(undefined4)g_FilterBlendConstant;
  uVar12 = CONCAT62(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(uVar10,(char)(uVar1 >> 0x18)),uVar9
                                                       ),(char)(uVar1 >> 0x10)),uVar8),
                             (char)(uVar1 >> 8)),CONCAT11(uVar7,(char)uVar1));
  uVar5 = paddusw(CONCAT62(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(uVar10,(char)(uVar11 >> 0x18
                                                                                     )),uVar9),
                                                      (char)(uVar11 >> 0x10)),uVar8),
                                    (char)(uVar11 >> 8)),CONCAT11(uVar7,(char)uVar11)),uVar12);
  uVar12 = paddusw(uVar12,CONCAT62(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(uVar10,(char)(uVar2 
                                                  >> 0x18)),uVar9),(char)(uVar2 >> 0x10)),uVar8),
                                            (char)(uVar2 >> 8)),CONCAT11(uVar7,(char)uVar2)));
  uVar6 = paddusw(uVar5,uVar12);
  uVar11 = input_buffer[-0x11];
  uVar1 = input_buffer[-1];
  uVar2 = input_buffer[0xf];
  uVar7 = (undefined1)g_FilterBlendConstant._4_4_;
  uVar8 = (undefined1)((uint)g_FilterBlendConstant._4_4_ >> 8);
  uVar9 = (undefined1)((uint)g_FilterBlendConstant._4_4_ >> 0x10);
  uVar10 = (undefined1)((uint)g_FilterBlendConstant._4_4_ >> 0x18);
  uVar12 = CONCAT17(uVar10,CONCAT16((char)(uVar1 >> 0x38),
                                    CONCAT15(uVar9,CONCAT14((char)(uVar1 >> 0x30),
                                                            CONCAT13(uVar8,CONCAT12((char)(uVar1 >> 
                                                  0x28),CONCAT11(uVar7,(char)(uVar1 >> 0x20))))))));
  uVar5 = paddusw(CONCAT17(uVar10,CONCAT16((char)(uVar11 >> 0x38),
                                           CONCAT15(uVar9,CONCAT14((char)(uVar11 >> 0x30),
                                                                   CONCAT13(uVar8,CONCAT12((char)(
                                                  uVar11 >> 0x28),
                                                  CONCAT11(uVar7,(char)(uVar11 >> 0x20)))))))),
                  uVar12);
  uVar12 = paddusw(uVar12,CONCAT17(uVar10,CONCAT16((char)(uVar2 >> 0x38),
                                                   CONCAT15(uVar9,CONCAT14((char)(uVar2 >> 0x30),
                                                                           CONCAT13(uVar8,CONCAT12((
                                                  char)(uVar2 >> 0x28),
                                                  CONCAT11(uVar7,(char)(uVar2 >> 0x20)))))))));
  uVar11 = paddusw(uVar5,uVar12);
  do {
    uVar5 = paddusw(uVar11 >> 0x30,uVar6);
    uVar13 = paddusw(uVar6 >> 0x10,uVar6);
    uVar15 = paddusw(uVar6 << 0x10,uVar5);
    uVar11 = input_buffer[-0x10];
    uVar1 = *input_buffer;
    uVar2 = input_buffer[0x10];
    uVar7 = (undefined1)g_FilterBlendConstant._4_4_;
    uVar8 = (undefined1)((uint)g_FilterBlendConstant._4_4_ >> 8);
    uVar9 = (undefined1)((uint)g_FilterBlendConstant._4_4_ >> 0x10);
    uVar10 = (undefined1)((uint)g_FilterBlendConstant._4_4_ >> 0x18);
    uVar12 = CONCAT17(uVar10,CONCAT16((char)(uVar1 >> 0x38),
                                      CONCAT15(uVar9,CONCAT14((char)(uVar1 >> 0x30),
                                                              CONCAT13(uVar8,CONCAT12((char)(uVar1 
                                                  >> 0x28),CONCAT11(uVar7,(char)(uVar1 >> 0x20))))))
                                     ));
    uVar5 = paddusw(CONCAT17(uVar10,CONCAT16((char)(uVar11 >> 0x38),
                                             CONCAT15(uVar9,CONCAT14((char)(uVar11 >> 0x30),
                                                                     CONCAT13(uVar8,CONCAT12((char)(
                                                  uVar11 >> 0x28),
                                                  CONCAT11(uVar7,(char)(uVar11 >> 0x20)))))))),
                    uVar12);
    uVar12 = paddusw(uVar12,CONCAT17(uVar10,CONCAT16((char)(uVar2 >> 0x38),
                                                     CONCAT15(uVar9,CONCAT14((char)(uVar2 >> 0x30),
                                                                             CONCAT13(uVar8,CONCAT12
                                                  ((char)(uVar2 >> 0x28),
                                                   CONCAT11(uVar7,(char)(uVar2 >> 0x20)))))))));
    uVar11 = paddusw(uVar5,uVar12);
    uVar12 = paddusw(uVar15,uVar13);
    uVar5 = paddusw(uVar6 >> 0x30,uVar11);
    uVar15 = paddusw(uVar12,uVar11 << 0x30);
    uVar13 = paddusw(uVar11 >> 0x10,uVar11);
    uVar20 = paddusw(uVar11 << 0x10,uVar5);
    uVar1 = input_buffer[-0xf];
    uVar2 = input_buffer[1];
    uVar6 = input_buffer[0x11];
    uVar10 = (undefined1)((uint)(undefined4)g_FilterBlendConstant >> 0x18);
    uVar9 = (undefined1)((uint)(undefined4)g_FilterBlendConstant >> 0x10);
    uVar8 = (undefined1)((uint)(undefined4)g_FilterBlendConstant >> 8);
    uVar7 = (undefined1)(undefined4)g_FilterBlendConstant;
    uVar12 = CONCAT62(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(uVar10,(char)(uVar2 >> 0x18)),
                                                          uVar9),(char)(uVar2 >> 0x10)),uVar8),
                               (char)(uVar2 >> 8)),CONCAT11(uVar7,(char)uVar2));
    uVar5 = paddusw(CONCAT62(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(uVar10,(char)(uVar1 >> 
                                                  0x18)),uVar9),(char)(uVar1 >> 0x10)),uVar8),
                                      (char)(uVar1 >> 8)),CONCAT11(uVar7,(char)uVar1)),uVar12);
    uVar12 = paddusw(uVar12,CONCAT62(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(uVar10,(char)(
                                                  uVar6 >> 0x18)),uVar9),(char)(uVar6 >> 0x10)),
                                                  uVar8),(char)(uVar6 >> 8)),
                                     CONCAT11(uVar7,(char)uVar6)));
    uVar6 = paddusw(uVar5,uVar12);
    uVar5 = paddusw(uVar20,uVar13);
    uVar14 = (ushort)uVar15 >> 4;
    uVar16 = (ushort)((ulonglong)uVar15 >> 0x10) >> 4;
    uVar17 = (ushort)((ulonglong)uVar15 >> 0x20) >> 4;
    uVar18 = (ushort)((ulonglong)uVar15 >> 0x34);
    uVar5 = paddusw(uVar5,uVar6 << 0x30);
    uVar19 = (ushort)uVar5 >> 4;
    uVar21 = (ushort)((ulonglong)uVar5 >> 0x10) >> 4;
    uVar22 = (ushort)((ulonglong)uVar5 >> 0x20) >> 4;
    uVar23 = (ushort)((ulonglong)uVar5 >> 0x34);
    input_buffer = input_buffer + 1;
    *output_buffer =
         CONCAT17((uVar23 != 0) * (uVar23 < 0x100) * (char)uVar23 - (0xff < uVar23),
                  CONCAT16((uVar22 != 0) * (uVar22 < 0x100) * (char)uVar22 - (0xff < uVar22),
                           CONCAT15((uVar21 != 0) * (uVar21 < 0x100) * (char)uVar21 -
                                    (0xff < uVar21),
                                    CONCAT14((uVar19 != 0) * (uVar19 < 0x100) * (char)uVar19 -
                                             (0xff < uVar19),
                                             CONCAT13((uVar18 != 0) * (uVar18 < 0x100) *
                                                      (char)uVar18 - (0xff < uVar18),
                                                      CONCAT12((uVar17 != 0) * (uVar17 < 0x100) *
                                                               (char)uVar17 - (0xff < uVar17),
                                                               CONCAT11((uVar16 != 0) *
                                                                        (uVar16 < 0x100) *
                                                                        (char)uVar16 -
                                                                        (0xff < uVar16),
                                                                        (uVar14 != 0) *
                                                                        (uVar14 < 0x100) *
                                                                        (char)uVar14 -
                                                                        (0xff < uVar14))))))));
    output_buffer = output_buffer + 1;
    iVar4 = pixel_count + -8;
    bVar3 = 7 < pixel_count;
    pixel_count = iVar4;
  } while (iVar4 != 0 && bVar3);
  return;
}


// Assembly code:
// 004922c8: PUSH EBP
//   Label: core_dstrender.cpp_verticalBlur3TapMMXStride128_FUN_004922c8
// 004922c9: MOV EBP,ESP
// 004922cb: PUSH ESI
// 004922cc: PUSH EDI
// 004922cd: MOV ESI,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004922d0: MOV EDI,dword ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004922d3: MOV ECX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 004922d6: MOVQ MM0,qword ptr [ESI + -0x80]
// 004922da: MOVQ MM2,qword ptr [ESI]
// 004922dd: MOVQ MM3,qword ptr [ESI + 0x80]
// 004922e4: PUNPCKLBW MM0,dword ptr [0x00676438]
//   XREF to: 00676438 (READ)
// 004922eb: PUNPCKLBW MM2,dword ptr [0x00676438]
//   XREF to: 00676438 (READ)
// 004922f2: PUNPCKLBW MM3,dword ptr [0x00676438]
//   XREF to: 00676438 (READ)
// 004922f9: PADDUSW MM0,MM2
// 004922fc: PADDUSW MM2,MM3
// 004922ff: PADDUSW MM0,MM2
// 00492302: MOVQ MM1,qword ptr [ESI + 0xffffff78]
// 00492309: MOVQ MM2,qword ptr [ESI + -0x8]
// 0049230d: MOVQ MM3,qword ptr [ESI + 0x78]
// 00492311: PUNPCKHBW MM1,qword ptr [0x00676438]
//   XREF to: 00676438 (READ)
// 00492318: PUNPCKHBW MM2,qword ptr [0x00676438]
//   XREF to: 00676438 (READ)
// 0049231f: PUNPCKHBW MM3,qword ptr [0x00676438]
//   XREF to: 00676438 (READ)
// 00492326: PADDUSW MM1,MM2
// 00492329: PADDUSW MM2,MM3
// 0049232c: PADDUSW MM1,MM2
// 0049232f: PSRLQ MM1,0x30
// 00492333: MOVQ MM6,MM0
//   Label: LAB_00492333
// 00492336: MOVQ MM5,MM0
// 00492339: PADDUSW MM1,MM0
// 0049233c: PSLLQ MM6,0x10
// 00492340: PSRLQ MM5,0x10
// 00492344: PADDUSW MM5,MM0
// 00492347: PADDUSW MM6,MM1
// 0049234a: MOVQ MM1,qword ptr [ESI + -0x80]
// 0049234e: MOVQ MM2,qword ptr [ESI]
// 00492351: MOVQ MM3,qword ptr [ESI + 0x80]
// 00492358: PUNPCKHBW MM1,qword ptr [0x00676438]
//   XREF to: 00676438 (READ)
// 0049235f: PUNPCKHBW MM2,qword ptr [0x00676438]
//   XREF to: 00676438 (READ)
// 00492366: PUNPCKHBW MM3,qword ptr [0x00676438]
//   XREF to: 00676438 (READ)
// 0049236d: PADDUSW MM1,MM2
// 00492370: PADDUSW MM2,MM3
// 00492373: PADDUSW MM1,MM2
// 00492376: PADDUSW MM6,MM5
// 00492379: MOVQ MM4,MM1
// 0049237c: PSLLQ MM4,0x30
// 00492380: PSRLQ MM0,0x30
// 00492384: MOVQ MM7,MM1
// 00492387: MOVQ MM5,MM1
// 0049238a: PADDUSW MM0,MM1
// 0049238d: PSLLQ MM7,0x10
// 00492391: PSRLQ MM5,0x10
// 00492395: PADDUSW MM6,MM4
// 00492398: PADDUSW MM5,MM1
// 0049239b: PADDUSW MM7,MM0
// 0049239e: MOVQ MM0,qword ptr [ESI + -0x78]
// 004923a2: MOVQ MM2,qword ptr [ESI + 0x8]
// 004923a6: MOVQ MM3,qword ptr [ESI + 0x88]
// 004923ad: PUNPCKLBW MM0,dword ptr [0x00676438]
//   XREF to: 00676438 (READ)
// 004923b4: PUNPCKLBW MM2,dword ptr [0x00676438]
//   XREF to: 00676438 (READ)
// 004923bb: PUNPCKLBW MM3,dword ptr [0x00676438]
//   XREF to: 00676438 (READ)
// 004923c2: PADDUSW MM0,MM2
// 004923c5: PADDUSW MM2,MM3
// 004923c8: PADDUSW MM0,MM2
// 004923cb: PADDUSW MM7,MM5
// 004923ce: MOVQ MM4,MM0
// 004923d1: PSRLW MM6,0x4
// 004923d5: PSLLQ MM4,0x30
// 004923d9: PSRLQ MM1,0x30
// 004923dd: PADDUSW MM7,MM4
// 004923e0: PSRLW MM7,0x4
// 004923e4: ADD ESI,0x8
// 004923e7: PACKUSWB MM6,MM7
// 004923ea: MOVQ qword ptr [EDI],MM6
// 004923ed: ADD EDI,0x8
// 004923f0: SUB ECX,0x8
// 004923f3: JG 0x00492333
//   XREF to: 00492333 (CONDITIONAL_JUMP)
// 004923f9: EMMS
// 004923fb: POP EDI
// 004923fc: POP ESI
// 004923fd: LEAVE
// 004923fe: RET
