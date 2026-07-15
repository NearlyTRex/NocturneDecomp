// Name: wincore_windll.cpp_renderAlphaRow16_FUN_005b55f7
// Address: 005b55f7
// Address Range: [[005b55f7, 005b570f]]
// Convention: __cdecl
// Signature: void __cdecl wincore_windll_cpp_renderAlphaRow16_FUN_005b55f7(ushort *destPixels,uchar *srcIndices,uchar *srcAlpha,int globalAlpha,int pixelCount)

#include "nocturne.h"

void __cdecl wincore_windll_cpp_renderAlphaRow16_FUN_005b55f7(ushort *destPixels,uchar *srcIndices,uchar *srcAlpha,int globalAlpha,int pixelCount)

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
  ulonglong uVar22;
  
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
      uVar21 = (uint7)((uVar7 & g_BlueMask16.mm) << g_BlueBitShift.mm) |
               (uint7)((uVar7 & g_GreenMask16.mm) << g_GreenBlueDitherShift.mm) |
               (uint7)((uVar7 & g_RedMask16.mm) << g_TotalDitherShift.mm);
      uVar10 = (ushort)(((uVar21 >> 0x18) << 0x30) >> 0x28);
      uVar6 = CONCAT21(uVar10,(char)(uVar21 >> 0x10));
      uVar9 = (ushort)uVar21;
      uVar5 = CONCAT43((int)(((uint7)uVar6 << 0x20) >> 0x18),CONCAT12((char)(uVar21 >> 8),uVar9));
      sVar15 = (short)(uVar14 >> 8);
      sVar18 = (short)(uVar14 >> 0x18);
      if (g_BlendMode == 1) {
        uVar22 = psllw((ulonglong)CONCAT52((int5)((uint7)uVar5 >> 0x10),uVar9) & 0xffffffffffff00ff,
                       8);
        uVar22 = paddusw(CONCAT26(sVar18 * SVar1.alignment,
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
        uVar19 = sVar18 * SVar1.alignment + (uVar10 >> 8) * (short)(uVar11 >> 0x30);
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
      *destPixels = (ushort)((uVar11 & g_BlueMask32.mm) >> g_BlueBitShift.mm) |
                    (ushort)((uVar11 & g_GreenMask32.mm) >> g_GreenBlueDitherShift.mm) |
                    (ushort)((uVar11 & g_RedMask32.mm) >> g_TotalDitherShift.mm);
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
