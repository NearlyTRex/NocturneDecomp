// Name: wincore_windll.cpp_renderAlphaRow16_FUN_005b55f7
// Address: 005b55f7
// Address Range: [[005b55f7, 005b570f]]
// Convention: __cdecl
// Signature: void wincore_windll.cpp_renderAlphaRow16_FUN_005b55f7(ushort * destPixels, uchar * srcIndices, uchar * srcAlpha, int globalAlpha, int pixelCount)
// Cross-references:
//   engine_alphabit.cpp_CAlphaBitmap_display_FUN_00410950 (00410950) at 00410abb [UNCONDITIONAL_CALL]
//   engine_alphabit.cpp_CAlphaBitmap_render_FUN_00410b00 (00410b00) at 00410beb [UNCONDITIONAL_CALL]
// Globals:
//   uint g_RedMask16 = 0xf800
//   uint g_GreenMask16 = 0x7e0
//   uint g_BlueMask16 = 0x1f
//   ulonglong g_RedMask32 = 0xf80000
//   ulonglong g_GreenMask32 = 0xfc00
//   ulonglong g_BlueMask32 = 0xf8
//   ulonglong g_TotalColorBits = 0x8
//   ulonglong g_GreenBlueBits = 0x5
//   ulonglong g_BlueBitShift = 0x3
//   SAlphaEntry[256] g_AlphaTable
//   undefined4 g_AlphaTable[255].red
//   uint[256] g_Hardware32BitPalette
//   int g_BlendMode

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
wincore_windll_cpp_renderAlphaRow16_FUN_005b55f7
          (ushort *destPixels,uchar *srcIndices,uchar *srcAlpha,int globalAlpha,int pixelCount)

{
  SAlphaEntry SVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  undefined7 uVar5;
  uint3 uVar6;
  uint uVar7;
  int iVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar12;
  ushort uVar13;
  short sVar15;
  ushort uVar16;
  ushort uVar17;
  ulonglong uVar11;
  uint5 uVar14;
  short sVar18;
  ushort uVar19;
  ushort uVar20;
  uint7 uVar21;
  undefined8 uVar22;
  
  do {
    uVar2 = g_Hardware32BitPalette[*srcIndices];
    uVar11 = (ulonglong)uVar2;
    uVar7 = (uint)*srcAlpha * ((uint)globalAlpha >> 8);
    if (g_BlendMode == 1) {
LAB_005b5640:
      uVar4 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar2 >> 0x18) << 0x30) >> 0x28
                                                     ),CONCAT14((char)(uVar2 >> 0x10),uVar2)) >>
                                    0x20),uVar2) >> 0x18);
      uVar14 = (uint5)uVar4 & 0xffffffff00;
      uVar12 = (ushort)CONCAT41(uVar4,(char)(uVar2 >> 8)) & 0xff;
      SVar1 = g_AlphaTable[uVar7 >> 8];
      uVar11 = (ulonglong)SVar1 ^ (ulonglong)g_AlphaTable[0xff];
      uVar7 = (uint)*destPixels;
      uVar21 = (uint7)((uVar7 & _g_BlueMask16) << g_BlueBitShift) |
               (uint7)((uVar7 & _g_GreenMask16) << g_GreenBlueBits) |
               (uint7)((uVar7 & _g_RedMask16) << g_TotalColorBits);
      uVar10 = (ushort)(((uVar21 >> 0x18) << 0x30) >> 0x28);
      uVar6 = CONCAT21(uVar10,(char)(uVar21 >> 0x10));
      uVar9 = (ushort)uVar21;
      uVar5 = CONCAT43((int)(((uint7)uVar6 << 0x20) >> 0x18),CONCAT12((char)(uVar21 >> 8),uVar9));
      sVar15 = (short)(uVar14 >> 8);
      sVar18 = (short)(uVar14 >> 0x18);
      if (g_BlendMode == 1) {
        uVar22 = psllw((ulonglong)CONCAT52((int5)((uint7)uVar5 >> 0x10),uVar9) & 0xffffffffffff00ff,
                       8);
        uVar22 = paddusw(CONCAT26(sVar18 * SVar1.pad,
                                  CONCAT24(sVar15 * SVar1.blue,
                                           CONCAT22(uVar12 * SVar1.green,
                                                    (ushort)(byte)uVar2 * SVar1.red))),uVar22);
        uVar10 = (ushort)uVar22 >> 8;
        uVar12 = (ushort)((ulonglong)uVar22 >> 0x10) >> 8;
        uVar9 = (ushort)((ulonglong)uVar22 >> 0x20) >> 8;
        uVar13 = (ushort)((ulonglong)uVar22 >> 0x38);
        uVar11 = (ulonglong)
                 CONCAT13((uVar13 != 0) * (uVar13 < 0x100) * (char)((ulonglong)uVar22 >> 0x38) -
                          (0xff < uVar13),
                          CONCAT12((uVar9 != 0) * (uVar9 < 0x100) *
                                   (char)((ulonglong)uVar22 >> 0x28) - (0xff < uVar9),
                                   CONCAT11((uVar12 != 0) * (uVar12 < 0x100) *
                                            (char)((ulonglong)uVar22 >> 0x18) - (0xff < uVar12),
                                            (uVar10 != 0) * (uVar10 < 0x100) *
                                            (char)((ulonglong)uVar22 >> 8) - (0xff < uVar10))));
      }
      else {
        uVar9 = (ushort)(byte)uVar2 * SVar1.red + (uVar9 & 0xff) * (short)uVar11;
        uVar12 = uVar12 * SVar1.green + (short)((uint7)uVar5 >> 0x10) * (short)(uVar11 >> 0x10);
        uVar16 = sVar15 * SVar1.blue + (short)uVar6 * (short)(uVar11 >> 0x20);
        uVar19 = sVar18 * SVar1.pad + (uVar10 >> 8) * (short)(uVar11 >> 0x30);
        uVar10 = uVar9 >> 8;
        uVar13 = uVar12 >> 8;
        uVar17 = uVar16 >> 8;
        uVar20 = uVar19 >> 8;
        uVar11 = (ulonglong)
                 CONCAT13((uVar20 != 0) * (uVar20 < 0x100) * (char)(uVar19 >> 8) - (0xff < uVar20),
                          CONCAT12((uVar17 != 0) * (uVar17 < 0x100) * (char)(uVar16 >> 8) -
                                   (0xff < uVar17),
                                   CONCAT11((uVar13 != 0) * (uVar13 < 0x100) * (char)(uVar12 >> 8) -
                                            (0xff < uVar13),
                                            (uVar10 != 0) * (uVar10 < 0x100) * (char)(uVar9 >> 8) -
                                            (0xff < uVar10))));
      }
LAB_005b56c3:
      *destPixels = (ushort)((uVar11 & g_BlueMask32) >> g_BlueBitShift) |
                    (ushort)((uVar11 & g_GreenMask32) >> g_GreenBlueBits) |
                    (ushort)((uVar11 & g_RedMask32) >> g_TotalColorBits);
    }
    else {
      if (64999 < (int)uVar7) goto LAB_005b56c3;
      if (0xff < (int)uVar7) goto LAB_005b5640;
    }
    srcIndices = srcIndices + 1;
    srcAlpha = srcAlpha + 1;
    destPixels = destPixels + 1;
    iVar8 = pixelCount + -1;
    bVar3 = pixelCount < 1;
    pixelCount = iVar8;
    if (iVar8 == 0 || bVar3) {
      return;
    }
  } while( true );
}


// Assembly code:
// 005b55f7: PUSH EBP
//   Label: wincore_windll.cpp_renderAlphaRow16_FUN_005b55f7
// 005b55f8: MOV EBP,ESP
// 005b55fa: PUSHAD
// 005b55fb: MOV EDI,dword ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005b55fe: MOV ESI,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005b5601: MOV EBX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 005b5604: MOV ECX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x14] (READ)
// 005b5607: MOV EBP,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x10] (READ)
// 005b560a: PXOR MM7,MM7
// 005b560d: SHR EBP,0x8
// 005b5610: MOVZX EAX,byte ptr [ESI]
//   Label: LAB_005b5610
// 005b5613: MOVD MM0,dword ptr [EAX*0x4 + 0x2d01924]
//   XREF to: 02d01924 (DATA)
// 005b561b: MOVZX EAX,byte ptr [EBX]
// 005b561e: IMUL EAX,EBP
// 005b5621: CMP dword ptr [0x02d05298],0x1
//   XREF to: 02d05298 (READ)
// 005b5628: JZ 0x005b5640
//   XREF to: 005b5640 (CONDITIONAL_JUMP)
// 005b562a: CMP EAX,0xfde8
// 005b562f: JGE 0x005b56c3
//   XREF to: 005b56c3 (CONDITIONAL_JUMP)
// 005b5635: CMP EAX,0xff
// 005b563a: JLE 0x005b56ff
//   XREF to: 005b56ff (CONDITIONAL_JUMP)
// 005b5640: SHR EAX,0x8
//   Label: LAB_005b5640
// 005b5643: PUNPCKLBW MM0,MM7
// 005b5646: MOVQ MM1,qword ptr [EAX*0x8 + 0x683000]
//   XREF to: 00683000 (DATA)
// 005b564e: MOVQ MM2,MM1
// 005b5651: PXOR MM2,qword ptr [0x006837f8]
//   XREF to: 006837f8 (READ)
// 005b5658: MOVZX EAX,word ptr [EDI]
// 005b565b: MOVD MM3,EAX
// 005b565e: PAND MM3,qword ptr [0x00682758]
//   XREF to: 00682758 (READ)
// 005b5665: PSLLQ MM3,qword ptr [0x006827e8]
//   XREF to: 006827e8 (READ)
// 005b566c: MOVD MM4,EAX
// 005b566f: PAND MM4,qword ptr [0x00682750]
//   XREF to: 00682750 (READ)
// 005b5676: PSLLQ MM4,qword ptr [0x006827c8]
//   XREF to: 006827c8 (READ)
// 005b567d: POR MM3,MM4
// 005b5680: MOVD MM5,EAX
// 005b5683: PAND MM5,qword ptr [0x00682748]
//   XREF to: 00682748 (READ)
// 005b568a: PSLLQ MM5,qword ptr [0x006827a8]
//   XREF to: 006827a8 (READ)
// 005b5691: POR MM3,MM5
// 005b5694: PUNPCKLBW MM3,MM7
// 005b5697: CMP dword ptr [0x02d05298],0x1
//   XREF to: 02d05298 (READ)
// 005b569e: JZ 0x005b56b2
//   XREF to: 005b56b2 (CONDITIONAL_JUMP)
// 005b56a0: PMULLW MM0,MM1
// 005b56a3: PMULLW MM3,MM2
// 005b56a6: PADDW MM0,MM3
// 005b56a9: PSRLW MM0,0x8
// 005b56ad: PACKUSWB MM0,MM7
// 005b56b0: JMP 0x005b56c3
//   XREF to: 005b56c3 (UNCONDITIONAL_JUMP)
// 005b56b2: PSLLW MM3,0x8
//   Label: LAB_005b56b2
// 005b56b6: PMULLW MM0,MM1
// 005b56b9: PADDUSW MM0,MM3
// 005b56bc: PSRLW MM0,0x8
// 005b56c0: PACKUSWB MM0,MM7
// 005b56c3: MOVQ MM2,MM0
//   Label: LAB_005b56c3
// 005b56c6: MOVQ MM4,MM0
// 005b56c9: PAND MM0,qword ptr [0x006827a0]
//   XREF to: 006827a0 (READ)
// 005b56d0: PAND MM2,qword ptr [0x00682780]
//   XREF to: 00682780 (READ)
// 005b56d7: PAND MM4,qword ptr [0x00682760]
//   XREF to: 00682760 (READ)
// 005b56de: PSRLQ MM0,qword ptr [0x006827e8]
//   XREF to: 006827e8 (READ)
// 005b56e5: PSRLQ MM2,qword ptr [0x006827c8]
//   XREF to: 006827c8 (READ)
// 005b56ec: PSRLQ MM4,qword ptr [0x006827a8]
//   XREF to: 006827a8 (READ)
// 005b56f3: POR MM0,MM2
// 005b56f6: POR MM0,MM4
// 005b56f9: MOVD EAX,MM0
// 005b56fc: MOV word ptr [EDI],AX
// 005b56ff: INC ESI
//   Label: LAB_005b56ff
// 005b5700: INC EBX
// 005b5701: ADD EDI,0x2
// 005b5704: DEC ECX
// 005b5705: JG 0x005b5610
//   XREF to: 005b5610 (CONDITIONAL_JUMP)
// 005b570b: POPAD
// 005b570c: EMMS
// 005b570e: LEAVE
// 005b570f: RET
