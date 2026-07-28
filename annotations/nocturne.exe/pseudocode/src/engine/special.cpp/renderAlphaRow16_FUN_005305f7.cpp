// Name: engine_special.cpp_renderAlphaRow16_FUN_005305f7
// Address: 005305f7
// Address Range: [[005305f7, 0053070f]]
// Convention: __cdecl
// Signature: void __cdecl engine_special_cpp_renderAlphaRow16_FUN_005305f7(ushort *destPixels,uchar *srcIndices,uchar *srcAlpha,int globalAlpha,int pixelCount)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_special_cpp_renderAlphaRow16_FUN_005305f7(ushort *destPixels,uchar *srcIndices,uchar *srcAlpha,int globalAlpha,int pixelCount)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  undefined7 uVar4;
  uint3 uVar5;
  uint uVar6;
  int iVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar11;
  ushort uVar12;
  short sVar14;
  ushort uVar15;
  ushort uVar16;
  ulonglong uVar10;
  uint5 uVar13;
  short sVar17;
  ushort uVar18;
  ushort uVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  ulonglong uVar23;
  uint7 uVar24;
  ulonglong uVar25;
  
  do {
    uVar1 = *(uint *)(&DAT_01c00024 + (uint)*srcIndices * 4);
    uVar10 = (ulonglong)uVar1;
    uVar6 = (uint)*srcAlpha * ((uint)globalAlpha >> 8);
    if (_DAT_01c03998 == 1) {
LAB_00530640:
      uVar3 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar1 >> 0x18) << 0x30) >> 0x28
                                                     ),CONCAT14((char)(uVar1 >> 0x10),uVar1)) >>
                                    0x20),uVar1) >> 0x18);
      uVar13 = (uint5)uVar3 & 0xffffffff00;
      uVar11 = (ushort)CONCAT41(uVar3,(char)(uVar1 >> 8)) & 0xff;
      uVar10 = (&DAT_005bfe70)[uVar6 >> 8];
      uVar23 = uVar10 ^ 0x000000FF00FF00FF;
      uVar6 = (uint)*destPixels;
      uVar24 = (uint7)((uVar6 & _DAT_005bf5c8) << _DAT_005bf658) |
               (uint7)((uVar6 & _DAT_005bf5c0) << _DAT_005bf638) |
               (uint7)((uVar6 & _DAT_005bf5b8) << _DAT_005bf618);
      uVar9 = (ushort)(((uVar24 >> 0x18) << 0x30) >> 0x28);
      uVar5 = CONCAT21(uVar9,(char)(uVar24 >> 0x10));
      uVar8 = (ushort)uVar24;
      uVar4 = CONCAT43((int)(((uint7)uVar5 << 0x20) >> 0x18),CONCAT12((char)(uVar24 >> 8),uVar8));
      sVar20 = (short)(uVar10 >> 0x10);
      sVar21 = (short)(uVar10 >> 0x20);
      sVar22 = (short)(uVar10 >> 0x30);
      sVar14 = (short)(uVar13 >> 8);
      sVar17 = (short)(uVar13 >> 0x18);
      if (_DAT_01c03998 == 1) {
        uVar25 = psllw((ulonglong)CONCAT52((int5)((uint7)uVar4 >> 0x10),uVar8) & 0xffffffffffff00ff,
                       8);
        uVar25 = paddusw(CONCAT26(sVar17 * sVar22,
                                  CONCAT24(sVar14 * sVar21,
                                           CONCAT22(uVar11 * sVar20,
                                                    (ushort)(byte)uVar1 * (short)uVar10))),uVar25);
        uVar9 = (ushort)uVar25 >> 8;
        uVar11 = (ushort)((ulonglong)uVar25 >> 0x10) >> 8;
        uVar8 = (ushort)((ulonglong)uVar25 >> 0x20) >> 8;
        uVar12 = (ushort)((ulonglong)uVar25 >> 0x38);
        uVar10 = (ulonglong)
                 CONCAT13((uVar12 != 0) * (uVar12 < 0x100) * (char)((ulonglong)uVar25 >> 0x38) -
                          (0xff < uVar12),
                          CONCAT12((uVar8 != 0) * (uVar8 < 0x100) *
                                   (char)((ulonglong)uVar25 >> 0x28) - (0xff < uVar8),
                                   CONCAT11((uVar11 != 0) * (uVar11 < 0x100) *
                                            (char)((ulonglong)uVar25 >> 0x18) - (0xff < uVar11),
                                            (uVar9 != 0) * (uVar9 < 0x100) *
                                            (char)((ulonglong)uVar25 >> 8) - (0xff < uVar9))));
      }
      else {
        uVar8 = (ushort)(byte)uVar1 * (short)uVar10 + (uVar8 & 0xff) * (short)uVar23;
        uVar11 = uVar11 * sVar20 + (short)((uint7)uVar4 >> 0x10) * (short)(uVar23 >> 0x10);
        uVar15 = sVar14 * sVar21 + (short)uVar5 * (short)(uVar23 >> 0x20);
        uVar18 = sVar17 * sVar22 + (uVar9 >> 8) * (short)(uVar23 >> 0x30);
        uVar9 = uVar8 >> 8;
        uVar12 = uVar11 >> 8;
        uVar16 = uVar15 >> 8;
        uVar19 = uVar18 >> 8;
        uVar10 = (ulonglong)
                 CONCAT13((uVar19 != 0) * (uVar19 < 0x100) * (char)(uVar18 >> 8) - (0xff < uVar19),
                          CONCAT12((uVar16 != 0) * (uVar16 < 0x100) * (char)(uVar15 >> 8) -
                                   (0xff < uVar16),
                                   CONCAT11((uVar12 != 0) * (uVar12 < 0x100) * (char)(uVar11 >> 8) -
                                            (0xff < uVar12),
                                            (uVar9 != 0) * (uVar9 < 0x100) * (char)(uVar8 >> 8) -
                                            (0xff < uVar9))));
      }
LAB_005306c3:
      *destPixels = (ushort)((uVar10 & _DAT_005bf610) >> _DAT_005bf658) |
                    (ushort)((uVar10 & _DAT_005bf5f0) >> _DAT_005bf638) |
                    (ushort)((uVar10 & _DAT_005bf5d0) >> _DAT_005bf618);
    }
    else {
      if (64999 < (int)uVar6) goto LAB_005306c3;
      if (0xff < (int)uVar6) goto LAB_00530640;
    }
    srcIndices = srcIndices + 1;
    srcAlpha = srcAlpha + 1;
    destPixels = destPixels + 1;
    iVar7 = pixelCount + -1;
    bVar2 = pixelCount < 1;
    pixelCount = iVar7;
    if (iVar7 == 0 || bVar2) {
      return;
    }
  } while( true );
}
