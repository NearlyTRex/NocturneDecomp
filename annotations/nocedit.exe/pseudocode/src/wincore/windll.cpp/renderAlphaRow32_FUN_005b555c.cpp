// Name: wincore_windll.cpp_renderAlphaRow32_FUN_005b555c
// Address: 005b555c
// Address Range: [[005b555c, 005b55f6]]
// Convention: __cdecl
// Signature: void wincore_windll.cpp_renderAlphaRow32_FUN_005b555c(uint * destPixels, uchar * srcIndices, uchar * srcAlpha, int globalAlpha, int pixelCount)
// Cross-references:
//   engine_alphabit.cpp_CAlphaBitmap_display_FUN_00410950 (00410950) at 00410a17 [UNCONDITIONAL_CALL]
//   engine_alphabit.cpp_CAlphaBitmap_render_FUN_00410b00 (00410b00) at 00410b8e [UNCONDITIONAL_CALL]
// Globals:
//   SAlphaEntry[256] g_AlphaTable
//   undefined4 g_AlphaTable[255].red
//   uint[256] g_Hardware32BitPalette
//   int g_BlendMode

#include "nocturne.h"

void __cdecl
wincore_windll_cpp_renderAlphaRow32_FUN_005b555c
          (uint *destPixels,uchar *srcIndices,uchar *srcAlpha,int globalAlpha,int pixelCount)

{
  SAlphaEntry SVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar9;
  ushort uVar10;
  uint uVar8;
  short sVar12;
  ushort uVar13;
  ushort uVar14;
  uint5 uVar11;
  short sVar15;
  ushort uVar16;
  ushort uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined8 uVar20;
  uint5 uVar21;
  
  do {
    uVar8 = g_Hardware32BitPalette[*srcIndices];
    uVar4 = (uint)*srcAlpha * ((uint)globalAlpha >> 8);
    if (g_BlendMode == 1) {
LAB_005b559d:
      uVar3 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar8 >> 0x18) << 0x30) >> 0x28
                                                     ),CONCAT14((char)(uVar8 >> 0x10),uVar8)) >>
                                    0x20),uVar8) >> 0x18);
      uVar11 = (uint5)uVar3 & 0xffffffff00;
      uVar7 = (ushort)CONCAT41(uVar3,(char)(uVar8 >> 8)) & 0xff;
      SVar1 = g_AlphaTable[uVar4 >> 8];
      uVar18 = (ulonglong)SVar1 ^ (ulonglong)g_AlphaTable[0xff];
      uVar4 = *destPixels;
      uVar3 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar4 >> 0x18) << 0x30) >> 0x28
                                                     ),CONCAT14((char)(uVar4 >> 0x10),uVar4)) >>
                                    0x20),uVar4) >> 0x18);
      uVar21 = (uint5)uVar3 & 0xffffffff00;
      uVar6 = (ushort)uVar4;
      uVar19 = (ulonglong)CONCAT43(uVar3,CONCAT12((char)(uVar4 >> 8),uVar6)) & 0xffffffff00ffffff;
      sVar12 = (short)(uVar11 >> 8);
      sVar15 = (short)(uVar11 >> 0x18);
      if (g_BlendMode == 1) {
        uVar20 = psllw(CONCAT62((int6)(uVar19 >> 0x10),uVar6) & 0xffffffffffff00ff,8);
        uVar20 = paddusw(CONCAT26(sVar15 * SVar1.pad,
                                  CONCAT24(sVar12 * SVar1.blue,
                                           CONCAT22(uVar7 * SVar1.green,
                                                    (ushort)(byte)uVar8 * SVar1.red))),uVar20);
        uVar7 = (ushort)uVar20 >> 8;
        uVar6 = (ushort)((ulonglong)uVar20 >> 0x10) >> 8;
        uVar9 = (ushort)((ulonglong)uVar20 >> 0x20) >> 8;
        uVar10 = (ushort)((ulonglong)uVar20 >> 0x38);
        uVar8 = CONCAT13((uVar10 != 0) * (uVar10 < 0x100) * (char)((ulonglong)uVar20 >> 0x38) -
                         (0xff < uVar10),
                         CONCAT12((uVar9 != 0) * (uVar9 < 0x100) * (char)((ulonglong)uVar20 >> 0x28)
                                  - (0xff < uVar9),
                                  CONCAT11((uVar6 != 0) * (uVar6 < 0x100) *
                                           (char)((ulonglong)uVar20 >> 0x18) - (0xff < uVar6),
                                           (uVar7 != 0) * (uVar7 < 0x100) *
                                           (char)((ulonglong)uVar20 >> 8) - (0xff < uVar7))));
      }
      else {
        uVar6 = (ushort)(byte)uVar8 * SVar1.red + (uVar6 & 0xff) * (short)uVar18;
        uVar9 = uVar7 * SVar1.green + (short)(uVar19 >> 0x10) * (short)(uVar18 >> 0x10);
        uVar13 = sVar12 * SVar1.blue + (short)(uVar21 >> 8) * (short)(uVar18 >> 0x20);
        uVar16 = sVar15 * SVar1.pad + (short)(uVar21 >> 0x18) * (short)(uVar18 >> 0x30);
        uVar7 = uVar6 >> 8;
        uVar10 = uVar9 >> 8;
        uVar14 = uVar13 >> 8;
        uVar17 = uVar16 >> 8;
        uVar8 = CONCAT13((uVar17 != 0) * (uVar17 < 0x100) * (char)(uVar16 >> 8) - (0xff < uVar17),
                         CONCAT12((uVar14 != 0) * (uVar14 < 0x100) * (char)(uVar13 >> 8) -
                                  (0xff < uVar14),
                                  CONCAT11((uVar10 != 0) * (uVar10 < 0x100) * (char)(uVar9 >> 8) -
                                           (0xff < uVar10),
                                           (uVar7 != 0) * (uVar7 < 0x100) * (char)(uVar6 >> 8) -
                                           (0xff < uVar7))));
      }
LAB_005b55e7:
      *destPixels = uVar8;
    }
    else {
      if (64999 < (int)uVar4) goto LAB_005b55e7;
      if (0xff < (int)uVar4) goto LAB_005b559d;
    }
    srcIndices = srcIndices + 1;
    srcAlpha = srcAlpha + 1;
    destPixels = destPixels + 1;
    iVar5 = pixelCount + -1;
    bVar2 = pixelCount < 1;
    pixelCount = iVar5;
    if (iVar5 == 0 || bVar2) {
      return;
    }
  } while( true );
}


// Assembly code:
// 005b555c: PUSH EBP
//   Label: wincore_windll.cpp_renderAlphaRow32_FUN_005b555c
// 005b555d: MOV EBP,ESP
// 005b555f: PUSHAD
// 005b5560: MOV EDI,dword ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005b5563: MOV ESI,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005b5566: MOV EBX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 005b5569: MOV ECX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x14] (READ)
// 005b556c: MOV EBP,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x10] (READ)
// 005b556f: PXOR MM7,MM7
// 005b5572: SHR EBP,0x8
// 005b5575: MOVZX EAX,byte ptr [ESI]
//   Label: LAB_005b5575
// 005b5578: MOVD MM0,dword ptr [EAX*0x4 + 0x2d01924]
//   XREF to: 02d01924 (DATA)
// 005b5580: MOVZX EAX,byte ptr [EBX]
// 005b5583: IMUL EAX,EBP
// 005b5586: CMP dword ptr [0x02d05298],0x1
//   XREF to: 02d05298 (READ)
// 005b558d: JZ 0x005b559d
//   XREF to: 005b559d (CONDITIONAL_JUMP)
// 005b558f: CMP EAX,0xfde8
// 005b5594: JGE 0x005b55e7
//   XREF to: 005b55e7 (CONDITIONAL_JUMP)
// 005b5596: CMP EAX,0xff
// 005b559b: JLE 0x005b55ea
//   XREF to: 005b55ea (CONDITIONAL_JUMP)
// 005b559d: SHR EAX,0x8
//   Label: LAB_005b559d
// 005b55a0: PUNPCKLBW MM0,MM7
// 005b55a3: MOVQ MM1,qword ptr [EAX*0x8 + 0x683000]
//   XREF to: 00683000 (DATA)
// 005b55ab: MOVQ MM2,MM1
// 005b55ae: PXOR MM2,qword ptr [0x006837f8]
//   XREF to: 006837f8 (READ)
// 005b55b5: MOVD MM3,dword ptr [EDI]
// 005b55b8: PUNPCKLBW MM3,MM7
// 005b55bb: CMP dword ptr [0x02d05298],0x1
//   XREF to: 02d05298 (READ)
// 005b55c2: JZ 0x005b55d6
//   XREF to: 005b55d6 (CONDITIONAL_JUMP)
// 005b55c4: PMULLW MM0,MM1
// 005b55c7: PMULLW MM3,MM2
// 005b55ca: PADDW MM0,MM3
// 005b55cd: PSRLW MM0,0x8
// 005b55d1: PACKUSWB MM0,MM7
// 005b55d4: JMP 0x005b55e7
//   XREF to: 005b55e7 (UNCONDITIONAL_JUMP)
// 005b55d6: PSLLW MM3,0x8
//   Label: LAB_005b55d6
// 005b55da: PMULLW MM0,MM1
// 005b55dd: PADDUSW MM0,MM3
// 005b55e0: PSRLW MM0,0x8
// 005b55e4: PACKUSWB MM0,MM7
// 005b55e7: MOVD dword ptr [EDI],MM0
//   Label: LAB_005b55e7
// 005b55ea: INC ESI
//   Label: LAB_005b55ea
// 005b55eb: INC EBX
// 005b55ec: ADD EDI,0x4
// 005b55ef: DEC ECX
// 005b55f0: JG 0x005b5575
//   XREF to: 005b5575 (CONDITIONAL_JUMP)
// 005b55f2: POPAD
// 005b55f3: EMMS
// 005b55f5: LEAVE
// 005b55f6: RET
