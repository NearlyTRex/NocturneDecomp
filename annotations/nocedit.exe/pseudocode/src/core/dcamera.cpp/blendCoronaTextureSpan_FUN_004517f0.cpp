// Name: core_dcamera.cpp_blendCoronaTextureSpan_FUN_004517f0
// Address: 004517f0
// Address Range: [[004517f0, 004518e3]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_blendCoronaTextureSpan_FUN_004517f0(int scanline_y, int x_start, int x_end, int source_buffer_offset)
// Cross-references:
//   core_dcamera.cpp_CDemonCamera_renderLightCoronas_FUN_004518f0 (004518f0) at 00451e6d [UNCONDITIONAL_CALL]
// Globals:
//   char[241][320] g_CoronaBlurOutputBuffer
//   char[4096] g_CameraLookupTable
//   CDemonGlobe* g_CurrentGlobe

#include "nocturne.h"

void __cdecl
core_dcamera_cpp_blendCoronaTextureSpan_FUN_004517f0
          (int scanline_y,int x_start,int x_end,int source_buffer_offset)

{
  undefined4 uVar1;
  bool bVar2;
  ushort uVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  ushort uVar10;
  short sVar11;
  ushort uVar12;
  ushort uVar14;
  uint5 uVar13;
  ushort uVar15;
  uint7 uVar16;
  
  pcVar9 = g_CoronaBlurOutputBuffer[scanline_y] + x_start;
  pbVar5 = (byte *)(scanline_y * 0x140 + source_buffer_offset + 0x784 + x_start);
  uVar8 = (uint)g_CurrentGlobe->intensity_multiplier >> 10;
  uVar16 = (uint7)uVar8 | (uint7)uVar8 << 0x18 | (uint7)uVar8 << 0x10 | (uint7)uVar8 << 8;
  uVar3 = (ushort)(((uVar16 >> 0x18) << 0x30) >> 0x28);
  iVar7 = x_end - x_start;
  while (((uint)pcVar9 & 3) != 0) {
    *pcVar9 = *pcVar9 + g_CameraLookupTable[(uint)*pbVar5 * 0x40 + uVar8];
    pbVar5 = pbVar5 + 1;
    pcVar9 = pcVar9 + 1;
    iVar6 = iVar7 + -1;
    bVar2 = iVar7 < 1;
    iVar7 = iVar6;
    if (iVar6 == 0 || bVar2) {
      return;
    }
  }
  while (3 < iVar7) {
    uVar1 = *(undefined4 *)pbVar5;
    uVar4 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar1 >> 0x18) << 0x30) >>
                                                   0x28),CONCAT14((char)((uint)uVar1 >> 0x10),uVar1)
                                           ) >> 0x20),uVar1) >> 0x18);
    uVar13 = (uint5)uVar4 & 0xffffffff00;
    uVar10 = (ushort)(((ushort)uVar1 & 0xff) * (ushort)(byte)uVar8) >> 6;
    uVar12 = (ushort)(((ushort)(CONCAT43(uVar4,CONCAT12((char)((uint)uVar1 >> 8),(ushort)uVar1)) >>
                               0x10) & 0xff) * (ushort)(byte)(uVar16 >> 8)) >> 6;
    uVar14 = (ushort)((short)(uVar13 >> 8) * (short)CONCAT21(uVar3,(char)(uVar16 >> 0x10))) >> 6;
    uVar15 = (ushort)((short)(uVar13 >> 0x18) * (uVar3 >> 8)) >> 6;
    sVar11 = CONCAT11((uVar12 != 0) * (uVar12 < 0x100) * (char)uVar12 - (0xff < uVar12),
                      (uVar10 != 0) * (uVar10 < 0x100) * (char)uVar10 - (0xff < uVar10));
    *(uint *)pcVar9 =
         CONCAT22((short)(CONCAT13((uVar15 != 0) * (uVar15 < 0x100) * (char)uVar15 - (0xff < uVar15)
                                   ,CONCAT12((uVar14 != 0) * (uVar14 < 0x100) * (char)uVar14 -
                                             (0xff < uVar14),sVar11)) >> 0x10) +
                  (short)((uint)*(undefined4 *)pcVar9 >> 0x10),sVar11 + (short)*(undefined4 *)pcVar9
                 );
    pbVar5 = pbVar5 + 4;
    pcVar9 = pcVar9 + 4;
    iVar7 = iVar7 + -4;
  }
  if (iVar7 == 0) {
    return;
  }
  do {
    *pcVar9 = *pcVar9 + g_CameraLookupTable[(uint)*pbVar5 * 0x40 + uVar8];
    pbVar5 = pbVar5 + 1;
    pcVar9 = pcVar9 + 1;
    iVar6 = iVar7 + -1;
    bVar2 = 0 < iVar7;
    iVar7 = iVar6;
  } while (iVar6 != 0 && bVar2);
  return;
}


// Assembly code:
// 004517f0: PUSH EBX
//   Label: core_dcamera.cpp_blendCoronaTextureSpan_FUN_004517f0
// 004517f1: PUSH ESI
// 004517f2: PUSH EDI
// 004517f3: PUSH EBP
// 004517f4: MOV EBP,ESP
// 004517f6: SUB ESP,0x10
// 004517f9: MOV ECX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004517fc: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004517ff: LEA EAX,[EDX*0x4 + 0x0]
// 00451806: ADD EAX,EDX
// 00451808: MOV EDX,0xba8c78
//   XREF to: 00ba8c78 (DATA)
// 0045180d: SHL EAX,0x6
// 00451810: ADD EDX,EAX
// 00451812: ADD EDX,ECX
// 00451814: MOV dword ptr [EBP + -0x10],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 00451817: MOV EDX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0045181a: ADD EDX,0x784
// 00451820: ADD EAX,EDX
// 00451822: ADD EAX,ECX
// 00451824: MOV dword ptr [EBP + -0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00451827: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0045182a: SUB EAX,ECX
// 0045182c: MOV dword ptr [EBP + -0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0045182f: MOV EAX,[0x015c4170]
//   XREF to: 015c4170 (READ)
// 00451834: MOV EAX,dword ptr [EAX + 0x3c]
// 00451837: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0045183a: MOV ECX,dword ptr [EBP + 0xfffffff8]
//   XREF to: Stack[-0x18] (READ)
// 00451840: MOV ESI,dword ptr [EBP + 0xfffffff4]
//   XREF to: Stack[-0x1c] (READ)
// 00451846: MOV EDI,dword ptr [EBP + 0xfffffff0]
//   XREF to: Stack[-0x20] (READ)
// 0045184c: MOV EBX,dword ptr [EBP + 0xfffffffc]
//   XREF to: Stack[-0x14] (READ)
// 00451852: SHR EBX,0xa
// 00451855: PXOR MM7,MM7
// 00451858: MOVD MM3,EBX
// 0045185b: MOVD MM4,EBX
// 0045185e: MOVD MM5,EBX
// 00451861: MOVD MM6,EBX
// 00451864: PSLLQ MM3,0x18
// 00451868: PSLLQ MM4,0x10
// 0045186c: PSLLQ MM5,0x8
// 00451870: POR MM6,MM3
// 00451873: POR MM6,MM4
// 00451876: POR MM6,MM5
// 00451879: PUNPCKLBW MM6,MM7
// 0045187c: TEST EDI,0x3
//   Label: LAB_0045187c
// 00451882: JZ 0x0045189b
//   XREF to: 0045189b (CONDITIONAL_JUMP)
// 00451884: MOVZX EAX,byte ptr [ESI]
// 00451887: SHL EAX,0x6
// 0045188a: ADD EAX,EBX
// 0045188c: MOV AL,byte ptr [EAX + 0x13d9758]
//   XREF to: 013d9758 (DATA)
// 00451892: ADD byte ptr [EDI],AL
// 00451894: INC ESI
// 00451895: INC EDI
// 00451896: DEC ECX
// 00451897: JG 0x0045187c
//   XREF to: 0045187c (CONDITIONAL_JUMP)
// 00451899: JMP 0x004518db
//   XREF to: 004518db (UNCONDITIONAL_JUMP)
// 0045189b: SUB ECX,0x4
//   Label: LAB_0045189b
// 0045189e: JL 0x004518c1
//   XREF to: 004518c1 (CONDITIONAL_JUMP)
// 004518a0: MOVD MM0,dword ptr [ESI]
// 004518a3: MOVD MM1,dword ptr [EDI]
// 004518a6: PUNPCKLBW MM0,MM7
// 004518a9: PMULLW MM0,MM6
// 004518ac: PSRLW MM0,0x6
// 004518b0: PACKUSWB MM0,MM7
// 004518b3: PADDW MM0,MM1
// 004518b6: MOVD dword ptr [EDI],MM0
// 004518b9: ADD ESI,0x4
// 004518bc: ADD EDI,0x4
// 004518bf: JMP 0x0045189b
//   XREF to: 0045189b (UNCONDITIONAL_JUMP)
// 004518c1: ADD ECX,0x4
//   Label: LAB_004518c1
// 004518c4: JZ 0x004518db
//   XREF to: 004518db (CONDITIONAL_JUMP)
// 004518c6: MOVZX EAX,byte ptr [ESI]
//   Label: LAB_004518c6
// 004518c9: SHL EAX,0x6
// 004518cc: ADD EAX,EBX
// 004518ce: MOV AL,byte ptr [EAX + 0x13d9758]
//   XREF to: 013d9758 (DATA)
// 004518d4: ADD byte ptr [EDI],AL
// 004518d6: INC ESI
// 004518d7: INC EDI
// 004518d8: DEC ECX
// 004518d9: JG 0x004518c6
//   XREF to: 004518c6 (CONDITIONAL_JUMP)
// 004518db: EMMS
//   Label: LAB_004518db
// 004518dd: MOV ESP,EBP
// 004518df: POP EBP
// 004518e0: POP EDI
// 004518e1: POP ESI
// 004518e2: POP EBX
// 004518e3: RET
