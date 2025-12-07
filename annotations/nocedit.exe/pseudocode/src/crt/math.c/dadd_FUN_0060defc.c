// Name: crt_math.c_dadd_FUN_0060defc
// Address: 0060defc
// Address Range: [[0060defc, 0060e0b8]]
// Convention: __softfp_double
// Signature: double crt_math.c_dadd_FUN_0060defc(double a, double b)

#include "nocturne.h"

double __softfp_double
crt_math_c_dadd_FUN_0060defc(uint param_1,uint param_2,uint param_3,uint param_4)

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
  ushort uVar11;
  uint uVar12;
  ushort uVar13;
  uint uVar14;
  bool bVar15;
  double dVar16;
  int iVar7;
  
  uVar5 = param_4 ^ 0x80000000;
  if (param_3 == 0) {
    bVar15 = CARRY4(uVar5,uVar5);
    uVar6 = param_1;
    uVar5 = param_2;
    if ((param_4 & 0x7fffffff) == 0) goto LAB_0060df18;
    uVar5 = param_4 & 0x7fffffff | (uint)bVar15 << 0x1f;
  }
  if (param_1 == 0) {
    uVar6 = param_3;
    if ((param_2 & 0x7fffffff) == 0) {
LAB_0060df18:
      return (double)CONCAT44 /* combine 2-byte values */(uVar5,uVar6);
    }
    param_2 = param_2 & 0x7fffffff | (uint)CARRY4(param_2,param_2) << 0x1f;
  }
  if (DAT_00684acd != '\0') {
    dVar16 = (double)CONCAT44 /* combine 2-byte values */(param_2,param_1) + (double)CONCAT44 /* combine 2-byte values */(uVar5,param_3);
    if ((int)((ulonglong)dVar16 >> 0x20) == -0x80000000) {
      dVar16 = 0.0;
    }
    return dVar16;
  }
  sVar4 = (short)(param_2 >> 0x10);
  uVar6 = (int)uVar5 >> 0x14 & 0x800007ff;
  sVar2 = (short)(uVar6 >> 0x10) + (sVar4 >> 0xf & 0x8000U);
  uVar13 = sVar4 >> 4 & 0x7ff;
  uVar3 = (ushort)((int)uVar5 >> 0x14) & 0x7ff;
  uVar8 = param_2 & 0xfffff;
  uVar5 = uVar5 & 0xfffff;
  if (uVar13 != 0) {
    uVar8 = uVar8 | 0x100000;
  }
  if (uVar3 != 0) {
    uVar5 = uVar5 | 0x100000;
  }
  uVar14 = param_1 * 2;
  uVar9 = uVar8 * 2 + (uint)CARRY4(param_1,param_1);
  uVar8 = param_3 * 2;
  uVar12 = uVar5 * 2 + (uint)CARRY4(param_3,param_3);
  sVar4 = uVar3 - uVar13;
  iVar7 = CONCAT22 /* combine 2-byte values */(sVar2,sVar4);
  uVar5 = uVar14;
  uVar10 = uVar9;
  if (sVar4 != 0) {
    if (uVar3 < uVar13) {
      iVar7 = CONCAT22 /* combine 2-byte values */(sVar2,-sVar4);
      uVar5 = uVar8;
      uVar10 = uVar12;
      uVar8 = uVar14;
      uVar6 = (int)param_2 >> 0x14 & 0x800007ff;
      uVar12 = uVar9;
    }
    if (0x36 < (ushort)iVar7) {
      return (double)CONCAT44 /* combine 2-byte values */(uVar12 >> 1 & 0x800fffff | (uint)CARRY4(uVar6,uVar6) << 0x1f |
                              uVar6 << 0x14,uVar8 >> 1 | (uint)((uVar12 & 1) != 0) << 0x1f);
    }
  }
  if (iVar7 < 0) {
    bVar15 = uVar8 != 0;
    uVar8 = -uVar8;
    uVar12 = -(uint)bVar15 - uVar12;
    uVar6 = uVar6 ^ 0x80000000;
  }
  uVar14 = 0;
  bVar1 = (byte)iVar7;
  if (bVar1 != 0) {
    uVar9 = uVar10;
    if (0x1f < bVar1) {
      uVar14 = (uint)(uVar5 != 0);
      uVar9 = 0;
      uVar5 = uVar10;
    }
    uVar14 = uVar14 | 0U >> (bVar1 & 0x1f) | uVar5 << 0x20 - (bVar1 & 0x1f);
    uVar5 = uVar5 >> (bVar1 & 0x1f) | uVar9 << 0x20 - (bVar1 & 0x1f);
    uVar10 = uVar9 >> (bVar1 & 0x1f) | 0 << 0x20 - (bVar1 & 0x1f);
  }
  uVar9 = uVar5 + uVar8;
  uVar5 = uVar10 + uVar12 + (uint)CARRY4(uVar5,uVar8);
  if ((int)uVar5 < 0) {
    if (0x34 < bVar1) {
      uVar8 = (uint)((uVar14 & 0x7fffffff) != 0);
      bVar15 = CARRY4(uVar9,uVar8);
      uVar9 = uVar9 + uVar8;
      uVar5 = uVar5 + bVar15;
    }
    bVar15 = uVar9 != 0;
    uVar9 = -uVar9;
    uVar5 = -(uint)bVar15 - uVar5;
    uVar6 = uVar6 ^ 0x80000000;
  }
  uVar8 = uVar9 | uVar5;
  if (uVar8 != 0) {
    if ((short)uVar6 == 0) {
LAB_0060e0a5:
      return (double)CONCAT44 /* combine 2-byte values */(uVar5 >> 1 | (uint)CARRY4(uVar6,uVar6) << 0x1f,
                              uVar9 >> 1 | (uint)((uVar5 & 1) != 0) << 0x1f);
    }
    while( true ) {
      uVar11 = (ushort)(uVar6 >> 0x10);
      if ((uVar5 & 0x7fe00000) != 0) break;
      sVar4 = (short)uVar6 + -1;
      uVar6 = CONCAT22 /* combine 2-byte values */(uVar11,sVar4);
      if (sVar4 == 0) goto LAB_0060e0a5;
      bVar15 = CARRY4(uVar9,uVar9);
      uVar9 = uVar9 * 2;
      uVar5 = uVar5 * 2 + (uint)bVar15;
    }
    if ((uVar5 & 0x400000) != 0) {
      uVar12 = uVar5 & 1;
      uVar5 = uVar5 >> 1;
      uVar10 = uVar9 & 1;
      uVar9 = uVar9 >> 1 | (uint)(uVar12 != 0) << 0x1f;
      uVar14 = uVar14 + (uVar10 != 0);
      sVar4 = (short)uVar6 + 1;
      uVar6 = CONCAT22 /* combine 2-byte values */(uVar11,sVar4);
      if (sVar4 == 0x7ff) goto LAB_0060e0af;
    }
    uVar12 = uVar5 & 1;
    uVar5 = uVar5 >> 1;
    uVar10 = uVar9 & 1;
    uVar9 = uVar9 >> 1 | (uint)(uVar12 != 0) << 0x1f;
    if (uVar10 != 0) {
      uVar14 = CONCAT31 /* combine 2-byte values */((int3)(uVar8 >> 8),uVar14 != 0) | uVar9;
      uVar8 = uVar14 >> 1;
      uVar14 = (uint)((uVar14 & 1) != 0);
      bVar15 = CARRY4(uVar9,uVar14);
      uVar9 = uVar9 + uVar14;
      uVar5 = uVar5 + bVar15;
      if ((uVar5 & 0x200000) != 0) {
        uVar14 = uVar5 & 1;
        uVar5 = uVar5 >> 1;
        uVar9 = uVar9 >> 1 | (uint)(uVar14 != 0) << 0x1f;
        sVar4 = (short)uVar6 + 1;
        uVar6 = CONCAT22 /* combine 2-byte values */((short)(uVar6 >> 0x10),sVar4);
        if (sVar4 == 0x7ff) {
LAB_0060e0af:
          dVar16 = (double)crt_unknown_c_FUN_0060eb57(uVar6,uVar5,uVar8);
          return dVar16;
        }
      }
    }
    uVar5 = uVar5 & 0xfffff | (uVar6 << 0x15) >> 1 | (uint)CARRY4(uVar6,uVar6) << 0x1f;
  }
  return (double)CONCAT44 /* combine 2-byte values */(uVar5,uVar9);
}
