// Name: crt_math.c_dadd_FUN_0060defc
// Address: 0060defc
// Address Range: [[0060defc, 0060e0b8]]
// Convention: __watcallRegister
// Signature: double __watcallRegister crt_math_c_dadd_FUN_0060defc(double a,double b)

#include "nocturne.h"

double __watcallRegister dadd(double a,double b)

{
  double dVar1;
  uint uVar2;
  byte bVar3;
  short sVar4;
  ushort uVar5;
  short sVar6;
  uint uVar7;
  uint uVar8;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint extraout_EDX;
  uint uVar15;
  ushort uVar16;
  ushort uVar17;
  bool bVar18;
  int iVar9;
  
  uVar8 = (uint)((ulonglong)b >> 0x20);
  uVar14 = SUB84(b,0);
  uVar10 = (uint)((ulonglong)a >> 0x20);
  uVar15 = SUB84(a,0);
  uVar7 = uVar8 ^ 0x80000000;
  if (uVar14 == 0) {
    if (((ulonglong)b & 0x7fffffff00000000) == 0) {
      return a;
    }
    uVar7 = uVar8 & 0x7fffffff | (uint)CARRY4(uVar7,uVar7) << 0x1f;
  }
  if (uVar15 == 0) {
    if (((ulonglong)a & 0x7fffffff00000000) == 0) {
      return (double)CONCAT44(uVar7,uVar14);
    }
    uVar10 = uVar10 & 0x7fffffff | (uint)CARRY4(uVar10,uVar10) << 0x1f;
  }
  if (BYTE_00684acd != 0) {
    dVar1 = (double)CONCAT44(uVar10,uVar15) + (double)CONCAT44(uVar7,uVar14);
    if ((int)((ulonglong)dVar1 >> 0x20) == -0x80000000) {
      dVar1 = 0.0;
    }
    return dVar1;
  }
  sVar6 = (short)(uVar10 >> 0x10);
  uVar8 = (int)uVar7 >> 0x14 & 0x800007ff;
  sVar4 = (short)(uVar8 >> 0x10) + (sVar6 >> 0xf & 0x8000U);
  uVar17 = sVar6 >> 4 & 0x7ff;
  uVar5 = (ushort)((int)uVar7 >> 0x14) & 0x7ff;
  uVar11 = uVar10 & 0xfffff;
  uVar7 = uVar7 & 0xfffff;
  if (uVar17 != 0) {
    uVar11 = uVar11 | 0x100000;
  }
  if (uVar5 != 0) {
    uVar7 = uVar7 | 0x100000;
  }
  uVar13 = uVar15 * 2;
  uVar12 = uVar11 * 2 + (uint)CARRY4(uVar15,uVar15);
  uVar15 = uVar14 * 2;
  uVar11 = uVar7 * 2 + (uint)CARRY4(uVar14,uVar14);
  sVar6 = uVar5 - uVar17;
  iVar9 = CONCAT22(sVar4,sVar6);
  uVar7 = uVar13;
  uVar14 = uVar12;
  if (sVar6 != 0) {
    if (uVar5 < uVar17) {
      iVar9 = CONCAT22(sVar4,-sVar6);
      uVar7 = uVar15;
      uVar14 = uVar11;
      uVar15 = uVar13;
      uVar8 = (int)uVar10 >> 0x14 & 0x800007ff;
      uVar11 = uVar12;
    }
    if (0x36 < (ushort)iVar9) {
      return (double)CONCAT44(uVar11 >> 1 & 0x800fffff | (uint)CARRY4(uVar8,uVar8) << 0x1f |
                              uVar8 << 0x14,uVar15 >> 1 | (uint)((uVar11 & 1) != 0) << 0x1f);
    }
  }
  if (iVar9 < 0) {
    bVar18 = uVar15 != 0;
    uVar15 = -uVar15;
    uVar11 = -(uint)bVar18 - uVar11;
    uVar8 = uVar8 ^ 0x80000000;
  }
  uVar10 = 0;
  bVar3 = (byte)iVar9;
  if (bVar3 != 0) {
    uVar13 = uVar14;
    if (0x1f < bVar3) {
      uVar10 = (uint)(uVar7 != 0);
      uVar13 = 0;
      uVar7 = uVar14;
    }
    uVar10 = uVar10 | 0U >> (bVar3 & 0x1f) | uVar7 << 0x20 - (bVar3 & 0x1f);
    uVar7 = uVar7 >> (bVar3 & 0x1f) | uVar13 << 0x20 - (bVar3 & 0x1f);
    uVar14 = uVar13 >> (bVar3 & 0x1f) | 0 << 0x20 - (bVar3 & 0x1f);
  }
  uVar13 = uVar7 + uVar15;
  uVar15 = uVar14 + uVar11 + (uint)CARRY4(uVar7,uVar15);
  if ((int)uVar15 < 0) {
    if (0x34 < bVar3) {
      uVar7 = (uint)((uVar10 & 0x7fffffff) != 0);
      bVar18 = CARRY4(uVar13,uVar7);
      uVar13 = uVar13 + uVar7;
      uVar15 = uVar15 + bVar18;
    }
    bVar18 = uVar13 != 0;
    uVar13 = -uVar13;
    uVar15 = -(uint)bVar18 - uVar15;
    uVar8 = uVar8 ^ 0x80000000;
  }
  if (uVar13 != 0 || uVar15 != 0) {
    if ((short)uVar8 == 0) {
LAB_0060e0a5:
      return (double)CONCAT44(uVar15 >> 1 | (uint)CARRY4(uVar8,uVar8) << 0x1f,
                              uVar13 >> 1 | (uint)((uVar15 & 1) != 0) << 0x1f);
    }
    while( true ) {
      uVar16 = (ushort)(uVar8 >> 0x10);
      if ((uVar15 & 0x7fe00000) != 0) break;
      sVar6 = (short)uVar8 + -1;
      uVar8 = CONCAT22(uVar16,sVar6);
      if (sVar6 == 0) goto LAB_0060e0a5;
      bVar18 = CARRY4(uVar13,uVar13);
      uVar13 = uVar13 * 2;
      uVar15 = uVar15 * 2 + (uint)bVar18;
    }
    if ((uVar15 & 0x400000) != 0) {
      uVar14 = uVar15 & 1;
      uVar15 = uVar15 >> 1;
      uVar7 = uVar13 & 1;
      uVar13 = uVar13 >> 1 | (uint)(uVar14 != 0) << 0x1f;
      uVar10 = uVar10 + (uVar7 != 0);
      sVar6 = (short)uVar8 + 1;
      uVar8 = CONCAT22(uVar16,sVar6);
      if (sVar6 == 0x7ff) goto LAB_0060e0af;
    }
    uVar11 = uVar15 >> 1;
    uVar7 = uVar13 & 1;
    uVar14 = uVar13 >> 1;
    uVar13 = uVar14 | (uint)((uVar15 & 1) != 0) << 0x1f;
    if (uVar7 != 0) {
      uVar15 = (uint)(uVar10 != 0 || (uVar14 & 1) != 0);
      bVar18 = CARRY4(uVar13,uVar15);
      uVar13 = uVar13 + uVar15;
      uVar11 = uVar11 + bVar18;
      if ((uVar11 & 0x200000) != 0) {
        uVar15 = uVar11 & 1;
        uVar11 = uVar11 >> 1;
        uVar13 = uVar13 >> 1 | (uint)(uVar15 != 0) << 0x1f;
        sVar6 = (short)uVar8 + 1;
        uVar8 = CONCAT22((short)(uVar8 >> 0x10),sVar6);
        if (sVar6 == 0x7ff) {
LAB_0060e0af:
          uVar2 = FUN_0060eb57();
          return (double)CONCAT44(extraout_EDX,uVar2);
        }
      }
    }
    uVar15 = uVar11 & 0xfffff | (uVar8 << 0x15) >> 1 | (uint)CARRY4(uVar8,uVar8) << 0x1f;
  }
  return (double)CONCAT44(uVar15,uVar13);
}
