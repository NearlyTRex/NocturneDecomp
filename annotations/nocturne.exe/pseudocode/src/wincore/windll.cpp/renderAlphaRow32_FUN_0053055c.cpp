// Name: wincore_windll.cpp_renderAlphaRow32_FUN_0053055c
// Address: 0053055c
// Address Range: [[0053055c, 005305f6]]
// Convention: __cdecl
// Signature: undefined8 __cdecl wincore_windll_cpp_renderAlphaRow32_FUN_0053055c(undefined4 *param_1,byte *param_2,byte *param_3,uint param_4,int param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong __cdecl wincore_windll_cpp_renderAlphaRow32_FUN_0053055c(uint *param_1,byte *param_2,byte *param_3,uint param_4,int param_5)

{
  ulonglong uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  uint in_EAX;
  uint uVar5;
  int iVar6;
  uint in_EDX;
  ushort uVar7;
  ushort uVar8;
  ushort uVar10;
  ushort uVar11;
  uint uVar9;
  short sVar13;
  ushort uVar14;
  ushort uVar15;
  uint5 uVar12;
  short sVar16;
  ushort uVar17;
  ushort uVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  uint5 uVar25;
  
  do {
    uVar9 = *(uint *)(&DAT_01c00024 + (uint)*param_2 * 4);
    uVar5 = (uint)*param_3 * (param_4 >> 8);
    if (_DAT_01c03998 == 1) {
LAB_0053059d:
      uVar4 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar9 >> 0x18) << 0x30)
                                                     >> 0x28),
                                              CONCAT14((char)((uint)uVar9 >> 0x10),uVar9)) >> 0x20),
                              uVar9) >> 0x18);
      uVar12 = (uint5)uVar4 & 0xffffffff00;
      uVar8 = (ushort)CONCAT41(uVar4,(char)((uint)uVar9 >> 8)) & 0xff;
      uVar1 = (&DAT_005bfe70)[uVar5 >> 8];
      uVar22 = uVar1 ^ 0x000000FF00FF00FF;
      uVar2 = *param_1;
      uVar5 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar2 >> 0x18) << 0x30)
                                                     >> 0x28),
                                              CONCAT14((char)((uint)uVar2 >> 0x10),uVar2)) >> 0x20),
                              uVar2) >> 0x18);
      uVar25 = (uint5)uVar5 & 0xffffffff00;
      uVar7 = (ushort)uVar2;
      uVar23 = (ulonglong)CONCAT43(uVar5,CONCAT12((char)((uint)uVar2 >> 8),uVar7)) &
               0xffffffff00ffffff;
      sVar19 = (short)(uVar1 >> 0x10);
      sVar20 = (short)(uVar1 >> 0x20);
      sVar21 = (short)(uVar1 >> 0x30);
      sVar13 = (short)(uVar12 >> 8);
      sVar16 = (short)(uVar12 >> 0x18);
      if (_DAT_01c03998 == 1) {
        uVar24 = psllw(CONCAT62((int6)(uVar23 >> 0x10),uVar7) & 0xffffffffffff00ff,8);
        uVar24 = paddusw(CONCAT26(sVar16 * sVar21,
                                  CONCAT24(sVar13 * sVar20,
                                           CONCAT22(uVar8 * sVar19,
                                                    (ushort)(byte)uVar9 * (short)uVar1))),uVar24);
        uVar8 = (ushort)uVar24 >> 8;
        uVar7 = (ushort)((ulonglong)uVar24 >> 0x10) >> 8;
        uVar10 = (ushort)((ulonglong)uVar24 >> 0x20) >> 8;
        uVar11 = (ushort)((ulonglong)uVar24 >> 0x38);
        uVar9 = CONCAT13((uVar11 != 0) * (uVar11 < 0x100) * (char)((ulonglong)uVar24 >> 0x38) -
                         (0xff < uVar11),
                         CONCAT12((uVar10 != 0) * (uVar10 < 0x100) *
                                  (char)((ulonglong)uVar24 >> 0x28) - (0xff < uVar10),
                                  CONCAT11((uVar7 != 0) * (uVar7 < 0x100) *
                                           (char)((ulonglong)uVar24 >> 0x18) - (0xff < uVar7),
                                           (uVar8 != 0) * (uVar8 < 0x100) *
                                           (char)((ulonglong)uVar24 >> 8) - (0xff < uVar8))));
      }
      else {
        uVar7 = (ushort)(byte)uVar9 * (short)uVar1 + (uVar7 & 0xff) * (short)uVar22;
        uVar10 = uVar8 * sVar19 + (short)(uVar23 >> 0x10) * (short)(uVar22 >> 0x10);
        uVar14 = sVar13 * sVar20 + (short)(uVar25 >> 8) * (short)(uVar22 >> 0x20);
        uVar17 = sVar16 * sVar21 + (short)(uVar25 >> 0x18) * (short)(uVar22 >> 0x30);
        uVar8 = uVar7 >> 8;
        uVar11 = uVar10 >> 8;
        uVar15 = uVar14 >> 8;
        uVar18 = uVar17 >> 8;
        uVar9 = CONCAT13((uVar18 != 0) * (uVar18 < 0x100) * (char)(uVar17 >> 8) - (0xff < uVar18),
                         CONCAT12((uVar15 != 0) * (uVar15 < 0x100) * (char)(uVar14 >> 8) -
                                  (0xff < uVar15),
                                  CONCAT11((uVar11 != 0) * (uVar11 < 0x100) * (char)(uVar10 >> 8) -
                                           (0xff < uVar11),
                                           (uVar8 != 0) * (uVar8 < 0x100) * (char)(uVar7 >> 8) -
                                           (0xff < uVar8))));
      }
LAB_005305e7:
      *param_1 = uVar9;
    }
    else {
      if (64999 < (int)uVar5) goto LAB_005305e7;
      if (0xff < (int)uVar5) goto LAB_0053059d;
    }
    param_2 = param_2 + 1;
    param_3 = param_3 + 1;
    param_1 = param_1 + 1;
    iVar6 = param_5 + -1;
    bVar3 = param_5 < 1;
    param_5 = iVar6;
    if (iVar6 == 0 || bVar3) {
      return CONCAT44(in_EDX,in_EAX);
    }
  } while( true );
}
