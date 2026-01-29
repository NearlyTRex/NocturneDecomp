// Name: crt_math.c_dadd_FUN_0060defc
// Address: 0060defc
// Address Range: [[0060defc, 0060e0b8]]
// Convention: __watcallRegister
// Signature: double crt_math_c_dadd_FUN_0060defc(double a,double b)

#include "nocturne.h"

double dadd(double a,double b)

{
  byte bVar1;
  short sVar2;
  ushort uVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ushort uVar14;
  ushort uVar15;
  bool bVar16;
  double dVar17;
  int iVar7;
  
  uVar6 = (uint)((ulonglong)b >> 0x20);
  uVar12 = SUB84(b,0);
  uVar8 = (uint)((ulonglong)a >> 0x20);
  uVar13 = SUB84(a,0);
  uVar5 = uVar6 ^ 0x80000000;
  if (uVar12 == 0) {
    if (((ulonglong)b & 0x7fffffff00000000) == 0) {
      return a;
    }
    uVar5 = uVar6 & 0x7fffffff | (uint)CARRY4(uVar5,uVar5) << 0x1f;
  }
  if (uVar13 == 0) {
    if (((ulonglong)a & 0x7fffffff00000000) == 0) {
      return (double)CONCAT44(uVar5,uVar12);
    }
    uVar8 = uVar8 & 0x7fffffff | (uint)CARRY4(uVar8,uVar8) << 0x1f;
  }
  if (BYTE_00684acd != 0) {
    dVar17 = (double)CONCAT44(uVar8,uVar13) + (double)CONCAT44(uVar5,uVar12);
    if ((int)((ulonglong)dVar17 >> 0x20) == -0x80000000) {
      dVar17 = 0.0;
    }
    return dVar17;
  }
  sVar4 = (short)(uVar8 >> 0x10);
  uVar6 = (int)uVar5 >> 0x14 & 0x800007ff;
  sVar2 = (short)(uVar6 >> 0x10) + (sVar4 >> 0xf & 0x8000U);
  uVar15 = sVar4 >> 4 & 0x7ff;
  uVar3 = (ushort)((int)uVar5 >> 0x14) & 0x7ff;
  uVar9 = uVar8 & 0xfffff;
  uVar5 = uVar5 & 0xfffff;
  if (uVar15 != 0) {
    uVar9 = uVar9 | 0x100000;
  }
  if (uVar3 != 0) {
    uVar5 = uVar5 | 0x100000;
  }
  uVar11 = uVar13 * 2;
  uVar10 = uVar9 * 2 + (uint)CARRY4(uVar13,uVar13);
  uVar13 = uVar12 * 2;
  uVar9 = uVar5 * 2 + (uint)CARRY4(uVar12,uVar12);
  sVar4 = uVar3 - uVar15;
  iVar7 = CONCAT22(sVar2,sVar4);
  uVar5 = uVar11;
  uVar12 = uVar10;
  if (sVar4 != 0) {
    if (uVar3 < uVar15) {
      iVar7 = CONCAT22(sVar2,-sVar4);
      uVar5 = uVar13;
      uVar12 = uVar9;
      uVar13 = uVar11;
      uVar6 = (int)uVar8 >> 0x14 & 0x800007ff;
      uVar9 = uVar10;
    }
    if (0x36 < (ushort)iVar7) {
      return (double)CONCAT44(uVar9 >> 1 & 0x800fffff | (uint)CARRY4(uVar6,uVar6) << 0x1f |
                              uVar6 << 0x14,uVar13 >> 1 | (uint)((uVar9 & 1) != 0) << 0x1f);
    }
  }
  if (iVar7 < 0) {
    bVar16 = uVar13 != 0;
    uVar13 = -uVar13;
    uVar9 = -(uint)bVar16 - uVar9;
    uVar6 = uVar6 ^ 0x80000000;
  }
  uVar8 = 0;
  bVar1 = (byte)iVar7;
  if (bVar1 != 0) {
    uVar11 = uVar12;
    if (0x1f < bVar1) {
      uVar8 = (uint)(uVar5 != 0);
      uVar11 = 0;
      uVar5 = uVar12;
    }
    uVar8 = uVar8 | 0U >> (bVar1 & 0x1f) | uVar5 << 0x20 - (bVar1 & 0x1f);
    uVar5 = uVar5 >> (bVar1 & 0x1f) | uVar11 << 0x20 - (bVar1 & 0x1f);
    uVar12 = uVar11 >> (bVar1 & 0x1f) | 0 << 0x20 - (bVar1 & 0x1f);
  }
  uVar11 = uVar5 + uVar13;
  uVar13 = uVar12 + uVar9 + (uint)CARRY4(uVar5,uVar13);
  if ((int)uVar13 < 0) {
    if (0x34 < bVar1) {
      uVar5 = (uint)((uVar8 & 0x7fffffff) != 0);
      bVar16 = CARRY4(uVar11,uVar5);
      uVar11 = uVar11 + uVar5;
      uVar13 = uVar13 + bVar16;
    }
    bVar16 = uVar11 != 0;
    uVar11 = -uVar11;
    uVar13 = -(uint)bVar16 - uVar13;
    uVar6 = uVar6 ^ 0x80000000;
  }
  uVar5 = uVar11 | uVar13;
  if (uVar5 != 0) {
    if ((short)uVar6 == 0) {
LAB_0060e0a5:
      return (double)CONCAT44(uVar13 >> 1 | (uint)CARRY4(uVar6,uVar6) << 0x1f,
                              uVar11 >> 1 | (uint)((uVar13 & 1) != 0) << 0x1f);
    }
    while( true ) {
      uVar14 = (ushort)(uVar6 >> 0x10);
      if ((uVar13 & 0x7fe00000) != 0) break;
      sVar4 = (short)uVar6 + -1;
      uVar6 = CONCAT22(uVar14,sVar4);
      if (sVar4 == 0) goto LAB_0060e0a5;
      bVar16 = CARRY4(uVar11,uVar11);
      uVar11 = uVar11 * 2;
      uVar13 = uVar13 * 2 + (uint)bVar16;
    }
    if ((uVar13 & 0x400000) != 0) {
      uVar9 = uVar13 & 1;
      uVar13 = uVar13 >> 1;
      uVar12 = uVar11 & 1;
      uVar11 = uVar11 >> 1 | (uint)(uVar9 != 0) << 0x1f;
      uVar8 = uVar8 + (uVar12 != 0);
      sVar4 = (short)uVar6 + 1;
      uVar6 = CONCAT22(uVar14,sVar4);
      if (sVar4 == 0x7ff) goto LAB_0060e0af;
    }
    uVar9 = uVar13 & 1;
    uVar13 = uVar13 >> 1;
    uVar12 = uVar11 & 1;
    uVar11 = uVar11 >> 1 | (uint)(uVar9 != 0) << 0x1f;
    if (uVar12 != 0) {
      uVar8 = CONCAT31((int3)(uVar5 >> 8),uVar8 != 0) | uVar11;
      uVar5 = uVar8 >> 1;
      uVar8 = (uint)((uVar8 & 1) != 0);
      bVar16 = CARRY4(uVar11,uVar8);
      uVar11 = uVar11 + uVar8;
      uVar13 = uVar13 + bVar16;
      if ((uVar13 & 0x200000) != 0) {
        uVar8 = uVar13 & 1;
        uVar13 = uVar13 >> 1;
        uVar11 = uVar11 >> 1 | (uint)(uVar8 != 0) << 0x1f;
        sVar4 = (short)uVar6 + 1;
        uVar6 = CONCAT22((short)(uVar6 >> 0x10),sVar4);
        if (sVar4 == 0x7ff) {
LAB_0060e0af:
          dVar17 = (double)crt_unknown_c_FUN_0060eb57(uVar6,uVar13,uVar5);
          return dVar17;
        }
      }
    }
    uVar13 = uVar13 & 0xfffff | (uVar6 << 0x15) >> 1 | (uint)CARRY4(uVar6,uVar6) << 0x1f;
  }
  return (double)CONCAT44(uVar13,uVar11);
}
