// Name: core_dstrender.cpp_verticalBlur3TapMMXStride320_FUN_00492042
// Address: 00492042
// Address Range: [[00492042, 00492184]]
// Convention: __cdecl
// Signature: void core_dstrender.cpp_verticalBlur3TapMMXStride320_FUN_00492042(ulonglong * output_buffer, ulonglong * input_buffer, int pixel_count)
// Cross-references:
//   core_dcamera.cpp_CDemonCamera_blurCoronaBufferAndClearEdges_FUN_004509b0 (004509b0) at 00450a75 [UNCONDITIONAL_CALL]
// Globals:
//   ulonglong g_FilterBlendConstant = 0x0

#include "nocturne.h"

void __cdecl
core_dstrender_cpp_verticalBlur3TapMMXStride320_FUN_00492042
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
  
  uVar11 = input_buffer[-0x28];
  uVar1 = *input_buffer;
  uVar2 = input_buffer[0x28];
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
  uVar11 = input_buffer[-0x29];
  uVar1 = input_buffer[-1];
  uVar2 = input_buffer[0x27];
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
    uVar11 = input_buffer[-0x28];
    uVar1 = *input_buffer;
    uVar2 = input_buffer[0x28];
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
    uVar1 = input_buffer[-0x27];
    uVar2 = input_buffer[1];
    uVar6 = input_buffer[0x29];
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
// 00492042: PUSH EBP
//   Label: core_dstrender.cpp_verticalBlur3TapMMXStride320_FUN_00492042
// 00492043: MOV EBP,ESP
// 00492045: PUSH ESI
// 00492046: PUSH EDI
// 00492047: MOV ESI,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0049204a: MOV EDI,dword ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0049204d: MOV ECX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 00492050: MOVQ MM0,qword ptr [ESI + 0xfffffec0]
// 00492057: MOVQ MM2,qword ptr [ESI]
// 0049205a: MOVQ MM3,qword ptr [ESI + 0x140]
// 00492061: PUNPCKLBW MM0,dword ptr [0x00676438]
//   XREF to: 00676438 (READ)
// 00492068: PUNPCKLBW MM2,dword ptr [0x00676438]
//   XREF to: 00676438 (READ)
// 0049206f: PUNPCKLBW MM3,dword ptr [0x00676438]
//   XREF to: 00676438 (READ)
// 00492076: PADDUSW MM0,MM2
// 00492079: PADDUSW MM2,MM3
// 0049207c: PADDUSW MM0,MM2
// 0049207f: MOVQ MM1,qword ptr [ESI + 0xfffffeb8]
// 00492086: MOVQ MM2,qword ptr [ESI + -0x8]
// 0049208a: MOVQ MM3,qword ptr [ESI + 0x138]
// 00492091: PUNPCKHBW MM1,qword ptr [0x00676438]
//   XREF to: 00676438 (READ)
// 00492098: PUNPCKHBW MM2,qword ptr [0x00676438]
//   XREF to: 00676438 (READ)
// 0049209f: PUNPCKHBW MM3,qword ptr [0x00676438]
//   XREF to: 00676438 (READ)
// 004920a6: PADDUSW MM1,MM2
// 004920a9: PADDUSW MM2,MM3
// 004920ac: PADDUSW MM1,MM2
// 004920af: PSRLQ MM1,0x30
// 004920b3: MOVQ MM6,MM0
//   Label: LAB_004920b3
// 004920b6: MOVQ MM5,MM0
// 004920b9: PADDUSW MM1,MM0
// 004920bc: PSLLQ MM6,0x10
// 004920c0: PSRLQ MM5,0x10
// 004920c4: PADDUSW MM5,MM0
// 004920c7: PADDUSW MM6,MM1
// 004920ca: MOVQ MM1,qword ptr [ESI + 0xfffffec0]
// 004920d1: MOVQ MM2,qword ptr [ESI]
// 004920d4: MOVQ MM3,qword ptr [ESI + 0x140]
// 004920db: PUNPCKHBW MM1,qword ptr [0x00676438]
//   XREF to: 00676438 (READ)
// 004920e2: PUNPCKHBW MM2,qword ptr [0x00676438]
//   XREF to: 00676438 (READ)
// 004920e9: PUNPCKHBW MM3,qword ptr [0x00676438]
//   XREF to: 00676438 (READ)
// 004920f0: PADDUSW MM1,MM2
// 004920f3: PADDUSW MM2,MM3
// 004920f6: PADDUSW MM1,MM2
// 004920f9: PADDUSW MM6,MM5
// 004920fc: MOVQ MM4,MM1
// 004920ff: PSLLQ MM4,0x30
// 00492103: PSRLQ MM0,0x30
// 00492107: MOVQ MM7,MM1
// 0049210a: MOVQ MM5,MM1
// 0049210d: PADDUSW MM0,MM1
// 00492110: PSLLQ MM7,0x10
// 00492114: PSRLQ MM5,0x10
// 00492118: PADDUSW MM6,MM4
// 0049211b: PADDUSW MM5,MM1
// 0049211e: PADDUSW MM7,MM0
// 00492121: MOVQ MM0,qword ptr [ESI + 0xfffffec8]
// 00492128: MOVQ MM2,qword ptr [ESI + 0x8]
// 0049212c: MOVQ MM3,qword ptr [ESI + 0x148]
// 00492133: PUNPCKLBW MM0,dword ptr [0x00676438]
//   XREF to: 00676438 (READ)
// 0049213a: PUNPCKLBW MM2,dword ptr [0x00676438]
//   XREF to: 00676438 (READ)
// 00492141: PUNPCKLBW MM3,dword ptr [0x00676438]
//   XREF to: 00676438 (READ)
// 00492148: PADDUSW MM0,MM2
// 0049214b: PADDUSW MM2,MM3
// 0049214e: PADDUSW MM0,MM2
// 00492151: PADDUSW MM7,MM5
// 00492154: MOVQ MM4,MM0
// 00492157: PSRLW MM6,0x4
// 0049215b: PSLLQ MM4,0x30
// 0049215f: PSRLQ MM1,0x30
// 00492163: PADDUSW MM7,MM4
// 00492166: PSRLW MM7,0x4
// 0049216a: ADD ESI,0x8
// 0049216d: PACKUSWB MM6,MM7
// 00492170: MOVQ qword ptr [EDI],MM6
// 00492173: ADD EDI,0x8
// 00492176: SUB ECX,0x8
// 00492179: JG 0x004920b3
//   XREF to: 004920b3 (CONDITIONAL_JUMP)
// 0049217f: EMMS
// 00492181: POP EDI
// 00492182: POP ESI
// 00492183: LEAVE
// 00492184: RET
