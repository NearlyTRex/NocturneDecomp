// Name: crt_math.c_dmul_FUN_0060e0b9
// Address: 0060e0b9
// Address Range: [[0060e0b9, 0060e255]]
// Convention: __watcallRegister
// Signature: double crt_math_c_dmul_FUN_0060e0b9(double a,double b)

#include "nocturne.h"

double crt_math_c_dmul_FUN_0060e0b9(double a,double b)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  byte bVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ushort uVar9;
  uint uVar10;
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
  
  uVar10 = (uint)((ulonglong)b >> 0x20);
  uVar14 = SUB84(b,0);
  uVar13 = (uint)((ulonglong)a >> 0x20);
  uVar15 = SUB84(a,0);
  if (uVar15 == 0) {
    if (((ulonglong)a & 0x7fffffff00000000) == 0) {
      return 0.0;
    }
    uVar13 = uVar13 & 0x7fffffff | (uint)CARRY4(uVar13,uVar13) << 0x1f;
  }
  if (uVar14 == 0) {
    if (((ulonglong)b & 0x7fffffff00000000) == 0) {
      return 0.0;
    }
    uVar10 = uVar10 & 0x7fffffff | (uint)CARRY4(uVar10,uVar10) << 0x1f;
  }
  if (BYTE_00684acd != 0) {
    dVar21 = (double)CONCAT44(uVar13,uVar15) * (double)CONCAT44(uVar10,uVar14);
    if ((int)((ulonglong)dVar21 >> 0x20) == -0x80000000) {
      dVar21 = 0.0;
    }
    return dVar21;
  }
  uVar18 = (int)uVar13 >> 0x14 & 0x800007ff;
  uVar9 = ((ushort)((int)uVar10 >> 0x1f) & 0x8000) + (short)(uVar18 >> 0x10);
  sVar17 = (short)uVar18;
  uVar18 = (int)uVar10 >> 0x14 & 0x7ff;
  uVar11 = (uint)uVar9 << 0x10 | uVar18;
  uVar13 = uVar13 & 0xfffff;
  uVar10 = uVar10 & 0xfffff;
  if (sVar17 == 0) {
    sVar17 = 1;
    do {
      sVar17 = sVar17 + -1;
      bVar20 = CARRY4(uVar15,uVar15);
      uVar15 = uVar15 * 2;
      uVar13 = uVar13 * 2 + (uint)bVar20;
    } while ((uVar13 & 0x100000) == 0);
  }
  if ((short)uVar18 == 0) {
    uVar11 = CONCAT22(uVar9,1);
    do {
      uVar11 = CONCAT22((short)(uVar11 >> 0x10),(short)uVar11 + -1);
      bVar20 = CARRY4(uVar14,uVar14);
      uVar14 = uVar14 * 2;
      uVar10 = uVar10 * 2 + (uint)bVar20;
    } while ((uVar10 & 0x100000) == 0);
  }
  uVar9 = ((short)uVar11 + sVar17) - 0x3ff;
  uVar18 = CONCAT22((short)(uVar11 >> 0x10),uVar9);
  if ((-1 < (short)uVar9) && (0x7fe < uVar9)) {
    dVar21 = (double)crt_unknown_c_FUN_0060eb57(uVar18);
    return dVar21;
  }
  if ((short)uVar9 < -0x35) {
    dVar21 = (double)crt_unknown_c_FUN_0060eb3a();
    return dVar21;
  }
  uVar13 = (uVar13 | 0x100000) << 0xb | uVar15 >> 0x15;
  uVar16 = (uVar10 | 0x100000) << 0xb | uVar14 >> 0x15;
  lVar1 = (ulonglong)(uVar15 << 0xb) * (ulonglong)(uVar14 << 0xb);
  uVar10 = (uint)((ulonglong)lVar1 >> 0x20);
  lVar2 = (ulonglong)uVar16 * (ulonglong)(uVar15 << 0xb);
  lVar7 = lVar2 + (ulonglong)uVar10;
  uVar19 = (uint)((ulonglong)lVar7 >> 0x20);
  lVar3 = (ulonglong)(uVar14 << 0xb) * (ulonglong)uVar13;
  uVar11 = (uint)((ulonglong)lVar3 >> 0x20);
  uVar15 = (uint)CARRY4((uint)lVar7,(uint)lVar3);
  uVar14 = uVar19 + uVar11;
  uVar6 = (ulonglong)uVar13 * (ulonglong)uVar16 +
          CONCAT44((uint)CARRY4((uint)((ulonglong)lVar2 >> 0x20),(uint)CARRY4(uVar10,(uint)lVar2)) +
                   (uint)(CARRY4(uVar19,uVar11) || CARRY4(uVar14,uVar15)),uVar14 + uVar15);
  uVar15 = (int)uVar6 << 0x16;
  uVar6 = uVar6 >> 10;
  do {
    uVar12 = (ushort)(uVar18 >> 0x10);
    if ((uVar6 & 0x20000000000000) == 0) {
      if (CARRY4(uVar15,uVar15)) {
        bVar20 = true;
        if (((uVar15 & 0x7fffffff) == 0) && (bVar20 = (int)lVar1 != 0, !bVar20)) {
          bVar20 = (uVar6 & 1) != 0;
        }
        uVar8 = uVar6 + (uint)bVar20;
        uVar6 = uVar6 + (uint)bVar20;
        if ((uVar8 & 0x20000000000000) != 0) {
          uVar6 = CONCAT44((uint)(uVar8 >> 0x21),
                           (uint)uVar8 >> 1 | (uint)((uVar8 & 0x100000000) != 0) << 0x1f);
          sVar17 = (short)uVar18 + 1;
          uVar18 = CONCAT22(uVar12,sVar17);
          if (sVar17 == 0x7ff) break;
        }
      }
      uVar15 = (uint)(uVar6 >> 0x20);
      sVar17 = (short)uVar18;
      if (sVar17 < 1) {
        if (sVar17 == 0) {
          uVar18 = CONCAT31((int3)(uVar18 >> 8),1);
        }
        else {
          uVar18 = CONCAT22((short)(uVar18 >> 0x10),-1 - sVar17);
        }
        bVar4 = (byte)uVar18 & 0x1f;
        bVar5 = (byte)uVar18 & 0x1f;
        uVar6 = CONCAT44(uVar15 >> bVar5 | 0 << 0x20 - bVar5,
                         (uint)uVar6 >> bVar4 | uVar15 << 0x20 - bVar4);
        uVar18 = uVar18 & 0xffff0000;
      }
      return (double)CONCAT44((uint)(uVar6 >> 0x20) & 0xfffff |
                              (uVar18 << 0x15) >> 1 | (uint)CARRY4(uVar18,uVar18) << 0x1f,(int)uVar6
                             );
    }
    uVar8 = uVar6 & 1;
    uVar6 = CONCAT44((uint)(uVar6 >> 0x21),
                     (uint)uVar6 >> 1 | (uint)((uVar6 & 0x100000000) != 0) << 0x1f);
    uVar15 = uVar15 >> 1 | (uint)(uVar8 != 0) << 0x1f;
    sVar17 = (short)uVar18 + 1;
    uVar18 = CONCAT22(uVar12,sVar17);
  } while (sVar17 != 0x7ff);
  dVar21 = (double)crt_unknown_c_FUN_0060eb57(uVar18);
  return dVar21;
}
