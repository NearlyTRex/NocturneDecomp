// Name: core_dstrender.cpp_verticalBlur3TapMMXStride256_FUN_00492185
// Address: 00492185
// Address Range: [[00492185, 004922c7]]
// Convention: __cdecl
// Signature: void core_dstrender.cpp_verticalBlur3TapMMXStride256_FUN_00492185(ulonglong * output_buffer, ulonglong * input_buffer, int pixel_count)
// Globals:
//   ulonglong g_FilterBlendConstant = 0x0

#include "nocturne.h"

void __cdecl
core_dstrender_cpp_verticalBlur3TapMMXStride256_FUN_00492185
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
  
  uVar11 = input_buffer[-0x20];
  uVar1 = *input_buffer;
  uVar2 = input_buffer[0x20];
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
  uVar11 = input_buffer[-0x21];
  uVar1 = input_buffer[-1];
  uVar2 = input_buffer[0x1f];
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
    uVar11 = input_buffer[-0x20];
    uVar1 = *input_buffer;
    uVar2 = input_buffer[0x20];
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
    uVar1 = input_buffer[-0x1f];
    uVar2 = input_buffer[1];
    uVar6 = input_buffer[0x21];
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
// 00492185: PUSH EBP
//   Label: core_dstrender.cpp_verticalBlur3TapMMXStride256_FUN_00492185
// 00492186: MOV EBP,ESP
// 00492188: PUSH ESI
// 00492189: PUSH EDI
// 0049218a: MOV ESI,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0049218d: MOV EDI,dword ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00492190: MOV ECX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 00492193: MOVQ MM0,qword ptr [ESI + 0xffffff00]
// 0049219a: MOVQ MM2,qword ptr [ESI]
// 0049219d: MOVQ MM3,qword ptr [ESI + 0x100]
// 004921a4: PUNPCKLBW MM0,dword ptr [0x00676438]
//   XREF to: 00676438 (READ)
// 004921ab: PUNPCKLBW MM2,dword ptr [0x00676438]
//   XREF to: 00676438 (READ)
// 004921b2: PUNPCKLBW MM3,dword ptr [0x00676438]
//   XREF to: 00676438 (READ)
// 004921b9: PADDUSW MM0,MM2
// 004921bc: PADDUSW MM2,MM3
// 004921bf: PADDUSW MM0,MM2
// 004921c2: MOVQ MM1,qword ptr [ESI + 0xfffffef8]
// 004921c9: MOVQ MM2,qword ptr [ESI + -0x8]
// 004921cd: MOVQ MM3,qword ptr [ESI + 0xf8]
// 004921d4: PUNPCKHBW MM1,qword ptr [0x00676438]
//   XREF to: 00676438 (READ)
// 004921db: PUNPCKHBW MM2,qword ptr [0x00676438]
//   XREF to: 00676438 (READ)
// 004921e2: PUNPCKHBW MM3,qword ptr [0x00676438]
//   XREF to: 00676438 (READ)
// 004921e9: PADDUSW MM1,MM2
// 004921ec: PADDUSW MM2,MM3
// 004921ef: PADDUSW MM1,MM2
// 004921f2: PSRLQ MM1,0x30
// 004921f6: MOVQ MM6,MM0
//   Label: LAB_004921f6
// 004921f9: MOVQ MM5,MM0
// 004921fc: PADDUSW MM1,MM0
// 004921ff: PSLLQ MM6,0x10
// 00492203: PSRLQ MM5,0x10
// 00492207: PADDUSW MM5,MM0
// 0049220a: PADDUSW MM6,MM1
// 0049220d: MOVQ MM1,qword ptr [ESI + 0xffffff00]
// 00492214: MOVQ MM2,qword ptr [ESI]
// 00492217: MOVQ MM3,qword ptr [ESI + 0x100]
// 0049221e: PUNPCKHBW MM1,qword ptr [0x00676438]
//   XREF to: 00676438 (READ)
// 00492225: PUNPCKHBW MM2,qword ptr [0x00676438]
//   XREF to: 00676438 (READ)
// 0049222c: PUNPCKHBW MM3,qword ptr [0x00676438]
//   XREF to: 00676438 (READ)
// 00492233: PADDUSW MM1,MM2
// 00492236: PADDUSW MM2,MM3
// 00492239: PADDUSW MM1,MM2
// 0049223c: PADDUSW MM6,MM5
// 0049223f: MOVQ MM4,MM1
// 00492242: PSLLQ MM4,0x30
// 00492246: PSRLQ MM0,0x30
// 0049224a: MOVQ MM7,MM1
// 0049224d: MOVQ MM5,MM1
// 00492250: PADDUSW MM0,MM1
// 00492253: PSLLQ MM7,0x10
// 00492257: PSRLQ MM5,0x10
// 0049225b: PADDUSW MM6,MM4
// 0049225e: PADDUSW MM5,MM1
// 00492261: PADDUSW MM7,MM0
// 00492264: MOVQ MM0,qword ptr [ESI + 0xffffff08]
// 0049226b: MOVQ MM2,qword ptr [ESI + 0x8]
// 0049226f: MOVQ MM3,qword ptr [ESI + 0x108]
// 00492276: PUNPCKLBW MM0,dword ptr [0x00676438]
//   XREF to: 00676438 (READ)
// 0049227d: PUNPCKLBW MM2,dword ptr [0x00676438]
//   XREF to: 00676438 (READ)
// 00492284: PUNPCKLBW MM3,dword ptr [0x00676438]
//   XREF to: 00676438 (READ)
// 0049228b: PADDUSW MM0,MM2
// 0049228e: PADDUSW MM2,MM3
// 00492291: PADDUSW MM0,MM2
// 00492294: PADDUSW MM7,MM5
// 00492297: MOVQ MM4,MM0
// 0049229a: PSRLW MM6,0x4
// 0049229e: PSLLQ MM4,0x30
// 004922a2: PSRLQ MM1,0x30
// 004922a6: PADDUSW MM7,MM4
// 004922a9: PSRLW MM7,0x4
// 004922ad: ADD ESI,0x8
// 004922b0: PACKUSWB MM6,MM7
// 004922b3: MOVQ qword ptr [EDI],MM6
// 004922b6: ADD EDI,0x8
// 004922b9: SUB ECX,0x8
// 004922bc: JG 0x004921f6
//   XREF to: 004921f6 (CONDITIONAL_JUMP)
// 004922c2: EMMS
// 004922c4: POP EDI
// 004922c5: POP ESI
// 004922c6: LEAVE
// 004922c7: RET
