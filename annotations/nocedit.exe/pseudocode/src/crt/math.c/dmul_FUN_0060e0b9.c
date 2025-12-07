// Name: crt_math.c_dmul_FUN_0060e0b9
// Address: 0060e0b9
// Address Range: [[0060e0b9, 0060e255]]
// Convention: __softfp_double
// Signature: double crt_math.c_dmul_FUN_0060e0b9(double a, double b)

#include "nocturne.h"

double __softfp_double
crt_math_c_dmul_FUN_0060e0b9(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  byte bVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ushort uVar10;
  uint uVar11;
  ushort uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  short sVar17;
  uint uVar18;
  uint uVar19;
  bool bVar20;
  double dVar21;
  
  if (param_1 == 0) {
    if ((param_2 & 0x7fffffff) == 0) {
      return 0.0;
    }
    param_2 = param_2 & 0x7fffffff | (uint)CARRY4(param_2,param_2) << 0x1f;
  }
  if (param_3 == 0) {
    if ((param_4 & 0x7fffffff) == 0) {
      return 0.0;
    }
    param_4 = param_4 & 0x7fffffff | (uint)CARRY4(param_4,param_4) << 0x1f;
  }
  if (DAT_00684acd != '\0') {
    dVar21 = (double)CONCAT44 /* combine 2-byte values */(param_2,param_1) * (double)CONCAT44 /* combine 2-byte values */(param_4,param_3);
    if ((int)((ulonglong)dVar21 >> 0x20) == -0x80000000) {
      dVar21 = 0.0;
    }
    return dVar21;
  }
  uVar18 = (int)param_2 >> 0x14 & 0x800007ff;
  uVar10 = ((ushort)((int)param_4 >> 0x1f) & 0x8000) + (short)(uVar18 >> 0x10);
  sVar17 = (short)uVar18;
  uVar18 = (int)param_4 >> 0x14 & 0x7ff;
  uVar11 = (uint)uVar10 << 0x10 | uVar18;
  param_2 = param_2 & 0xfffff;
  param_4 = param_4 & 0xfffff;
  if (sVar17 == 0) {
    sVar17 = 1;
    do {
      sVar17 = sVar17 + -1;
      bVar20 = CARRY4(param_1,param_1);
      param_1 = param_1 * 2;
      param_2 = param_2 * 2 + (uint)bVar20;
    } while ((param_2 & 0x100000) == 0);
  }
  if ((short)uVar18 == 0) {
    uVar11 = CONCAT22 /* combine 2-byte values */(uVar10,1);
    do {
      uVar11 = CONCAT22 /* combine 2-byte values */((short)(uVar11 >> 0x10),(short)uVar11 + -1);
      bVar20 = CARRY4(param_3,param_3);
      param_3 = param_3 * 2;
      param_4 = param_4 * 2 + (uint)bVar20;
    } while ((param_4 & 0x100000) == 0);
  }
  uVar10 = ((short)uVar11 + sVar17) - 0x3ff;
  uVar18 = CONCAT22 /* combine 2-byte values */((short)(uVar11 >> 0x10),uVar10);
  if ((-1 < (short)uVar10) && (0x7fe < uVar10)) {
    dVar21 = (double)crt_unknown_c_FUN_0060eb57(uVar18);
    return dVar21;
  }
  if ((short)uVar10 < -0x35) {
    dVar21 = (double)crt_unknown_c_FUN_0060eb3a();
    return dVar21;
  }
  uVar13 = (param_2 | 0x100000) << 0xb | param_1 >> 0x15;
  uVar16 = (param_4 | 0x100000) << 0xb | param_3 >> 0x15;
  lVar2 = (ulonglong)(param_1 << 0xb) * (ulonglong)(param_3 << 0xb);
  uVar14 = (uint)((ulonglong)lVar2 >> 0x20);
  lVar3 = (ulonglong)uVar16 * (ulonglong)(param_1 << 0xb);
  lVar8 = lVar3 + (ulonglong)uVar14;
  uVar19 = (uint)((ulonglong)lVar8 >> 0x20);
  lVar4 = (ulonglong)(param_3 << 0xb) * (ulonglong)uVar13;
  uVar15 = (uint)((ulonglong)lVar4 >> 0x20);
  uVar11 = (uint)CARRY4((uint)lVar8,(uint)lVar4);
  uVar1 = uVar19 + uVar15;
  uVar7 = (ulonglong)uVar13 * (ulonglong)uVar16 +
          CONCAT44 /* combine 2-byte values */((uint)CARRY4((uint)((ulonglong)lVar3 >> 0x20),(uint)CARRY4(uVar14,(uint)lVar3)) +
                   (uint)(CARRY4(uVar19,uVar15) || CARRY4(uVar1,uVar11)),uVar1 + uVar11);
  uVar11 = (int)uVar7 << 0x16;
  uVar7 = uVar7 >> 10;
  do {
    uVar12 = (ushort)(uVar18 >> 0x10);
    if ((uVar7 & 0x20000000000000) == 0) {
      bVar20 = CARRY4(uVar11,uVar11);
      if (bVar20) {
        if (((uVar11 & 0x7fffffff) == 0) && (bVar20 = (int)lVar2 != 0, !bVar20)) {
          bVar20 = (uVar7 & 1) != 0;
        }
        uVar9 = uVar7 + (uint)bVar20;
        uVar7 = uVar7 + (uint)bVar20;
        if ((uVar9 & 0x20000000000000) != 0) {
          uVar7 = CONCAT44 /* combine 2-byte values */((uint)(uVar9 >> 0x21),
                           (uint)uVar9 >> 1 | (uint)((uVar9 & 0x100000000) != 0) << 0x1f);
          sVar17 = (short)uVar18 + 1;
          uVar18 = CONCAT22 /* combine 2-byte values */(uVar12,sVar17);
          if (sVar17 == 0x7ff) break;
        }
      }
      uVar11 = (uint)(uVar7 >> 0x20);
      sVar17 = (short)uVar18;
      if (sVar17 < 1) {
        if (sVar17 == 0) {
          uVar18 = CONCAT31 /* combine 2-byte values */((int3)(uVar18 >> 8),1);
        }
        else {
          uVar18 = CONCAT22 /* combine 2-byte values */((short)(uVar18 >> 0x10),-1 - sVar17);
        }
        bVar5 = (byte)uVar18 & 0x1f;
        bVar6 = (byte)uVar18 & 0x1f;
        uVar7 = CONCAT44 /* combine 2-byte values */(uVar11 >> bVar6 | 0 << 0x20 - bVar6,
                         (uint)uVar7 >> bVar5 | uVar11 << 0x20 - bVar5);
        uVar18 = uVar18 & 0xffff0000;
      }
      return (double)CONCAT44 /* combine 2-byte values */((uint)(uVar7 >> 0x20) & 0xfffff |
                              (uVar18 << 0x15) >> 1 | (uint)CARRY4(uVar18,uVar18) << 0x1f,(int)uVar7
                             );
    }
    uVar9 = uVar7 & 1;
    uVar7 = CONCAT44 /* combine 2-byte values */((uint)(uVar7 >> 0x21),
                     (uint)uVar7 >> 1 | (uint)((uVar7 & 0x100000000) != 0) << 0x1f);
    uVar11 = uVar11 >> 1 | (uint)(uVar9 != 0) << 0x1f;
    sVar17 = (short)uVar18 + 1;
    uVar18 = CONCAT22 /* combine 2-byte values */(uVar12,sVar17);
  } while (sVar17 != 0x7ff);
  dVar21 = (double)crt_unknown_c_FUN_0060eb57(uVar18);
  return dVar21;
}
