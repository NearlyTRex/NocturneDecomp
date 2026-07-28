// Name: engine_special.cpp_renderAlphaRow32_FUN_0053055c
// Address: 0053055c
// Address Range: [[0053055c, 005305f6]]
// Convention: __cdecl
// Signature: void __cdecl engine_special_cpp_renderAlphaRow32_FUN_0053055c(uint *destPixels,uchar *srcIndices,uchar *srcAlpha,int globalAlpha,int pixelCount)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_special_cpp_renderAlphaRow32_FUN_0053055c(uint *destPixels,uchar *srcIndices,uchar *srcAlpha,int globalAlpha,int pixelCount)

{
  ulonglong uVar1;
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
  short sVar18;
  short sVar19;
  short sVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  uint5 uVar24;
  
  do {
    uVar8 = *(uint *)(&DAT_01c00024 + (uint)*srcIndices * 4);
    uVar4 = (uint)*srcAlpha * ((uint)globalAlpha >> 8);
    if (_DAT_01c03998 == 1) {
LAB_0053059d:
      uVar3 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar8 >> 0x18) << 0x30) >> 0x28
                                                     ),CONCAT14((char)(uVar8 >> 0x10),uVar8)) >>
                                    0x20),uVar8) >> 0x18);
      uVar11 = (uint5)uVar3 & 0xffffffff00;
      uVar7 = (ushort)CONCAT41(uVar3,(char)(uVar8 >> 8)) & 0xff;
      uVar1 = (&DAT_005bfe70)[uVar4 >> 8];
      uVar21 = uVar1 ^ 0x000000FF00FF00FF;
      uVar4 = *destPixels;
      uVar3 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar4 >> 0x18) << 0x30) >> 0x28
                                                     ),CONCAT14((char)(uVar4 >> 0x10),uVar4)) >>
                                    0x20),uVar4) >> 0x18);
      uVar24 = (uint5)uVar3 & 0xffffffff00;
      uVar6 = (ushort)uVar4;
      uVar22 = (ulonglong)CONCAT43(uVar3,CONCAT12((char)(uVar4 >> 8),uVar6)) & 0xffffffff00ffffff;
      sVar18 = (short)(uVar1 >> 0x10);
      sVar19 = (short)(uVar1 >> 0x20);
      sVar20 = (short)(uVar1 >> 0x30);
      sVar12 = (short)(uVar11 >> 8);
      sVar15 = (short)(uVar11 >> 0x18);
      if (_DAT_01c03998 == 1) {
        uVar23 = psllw(CONCAT62((int6)(uVar22 >> 0x10),uVar6) & 0xffffffffffff00ff,8);
        uVar23 = paddusw(CONCAT26(sVar15 * sVar20,
                                  CONCAT24(sVar12 * sVar19,
                                           CONCAT22(uVar7 * sVar18,
                                                    (ushort)(byte)uVar8 * (short)uVar1))),uVar23);
        uVar7 = (ushort)uVar23 >> 8;
        uVar6 = (ushort)((ulonglong)uVar23 >> 0x10) >> 8;
        uVar9 = (ushort)((ulonglong)uVar23 >> 0x20) >> 8;
        uVar10 = (ushort)((ulonglong)uVar23 >> 0x38);
        uVar8 = CONCAT13((uVar10 != 0) * (uVar10 < 0x100) * (char)((ulonglong)uVar23 >> 0x38) -
                         (0xff < uVar10),
                         CONCAT12((uVar9 != 0) * (uVar9 < 0x100) * (char)((ulonglong)uVar23 >> 0x28)
                                  - (0xff < uVar9),
                                  CONCAT11((uVar6 != 0) * (uVar6 < 0x100) *
                                           (char)((ulonglong)uVar23 >> 0x18) - (0xff < uVar6),
                                           (uVar7 != 0) * (uVar7 < 0x100) *
                                           (char)((ulonglong)uVar23 >> 8) - (0xff < uVar7))));
      }
      else {
        uVar6 = (ushort)(byte)uVar8 * (short)uVar1 + (uVar6 & 0xff) * (short)uVar21;
        uVar9 = uVar7 * sVar18 + (short)(uVar22 >> 0x10) * (short)(uVar21 >> 0x10);
        uVar13 = sVar12 * sVar19 + (short)(uVar24 >> 8) * (short)(uVar21 >> 0x20);
        uVar16 = sVar15 * sVar20 + (short)(uVar24 >> 0x18) * (short)(uVar21 >> 0x30);
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
LAB_005305e7:
      *destPixels = uVar8;
    }
    else {
      if (64999 < (int)uVar4) goto LAB_005305e7;
      if (0xff < (int)uVar4) goto LAB_0053059d;
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
