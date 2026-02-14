// Name: crt_math.c_dmul_FUN_0060e0b9
// Address: 0060e0b9
// Address Range: [[0060e0b9, 0060e255]]
// Convention: __watcallRegister
// Signature: double __watcallRegister crt_math_c_dmul_FUN_0060e0b9(double a,double b)

#include "nocturne.h"

double __watcallRegister dmul(double a,double b)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  byte bVar5;
  double dVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  ushort uVar11;
  uint uVar12;
  uint uVar13;
  ushort uVar14;
  uint uVar15;
  uint extraout_EDX;
  uint extraout_EDX_00;
  uint extraout_EDX_01;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  short sVar19;
  uint uVar20;
  uint uVar21;
  bool bVar22;
  
  uVar12 = (uint)((ulonglong)b >> 0x20);
  uVar16 = SUB84(b,0);
  uVar15 = (uint)((ulonglong)a >> 0x20);
  uVar17 = SUB84(a,0);
  if (uVar17 == 0) {
    if (((ulonglong)a & 0x7fffffff00000000) == 0) {
      return 0.0;
    }
    uVar15 = uVar15 & 0x7fffffff | (uint)CARRY4(uVar15,uVar15) << 0x1f;
  }
  if (uVar16 == 0) {
    if (((ulonglong)b & 0x7fffffff00000000) == 0) {
      return 0.0;
    }
    uVar12 = uVar12 & 0x7fffffff | (uint)CARRY4(uVar12,uVar12) << 0x1f;
  }
  if (BYTE_00684acd != 0) {
    dVar6 = (double)CONCAT44(uVar15,uVar17) * (double)CONCAT44(uVar12,uVar16);
    if ((int)((ulonglong)dVar6 >> 0x20) == -0x80000000) {
      dVar6 = 0.0;
    }
    return dVar6;
  }
  uVar20 = (int)uVar15 >> 0x14 & 0x800007ff;
  uVar11 = ((ushort)((int)uVar12 >> 0x1f) & 0x8000) + (short)(uVar20 >> 0x10);
  sVar19 = (short)uVar20;
  uVar20 = (int)uVar12 >> 0x14 & 0x7ff;
  uVar13 = (uint)uVar11 << 0x10 | uVar20;
  uVar15 = uVar15 & 0xfffff;
  uVar12 = uVar12 & 0xfffff;
  if (sVar19 == 0) {
    sVar19 = 1;
    do {
      sVar19 = sVar19 + -1;
      bVar22 = CARRY4(uVar17,uVar17);
      uVar17 = uVar17 * 2;
      uVar15 = uVar15 * 2 + (uint)bVar22;
    } while ((uVar15 & 0x100000) == 0);
  }
  if ((short)uVar20 == 0) {
    uVar13 = CONCAT22(uVar11,1);
    do {
      uVar13 = CONCAT22((short)(uVar13 >> 0x10),(short)uVar13 + -1);
      bVar22 = CARRY4(uVar16,uVar16);
      uVar16 = uVar16 * 2;
      uVar12 = uVar12 * 2 + (uint)bVar22;
    } while ((uVar12 & 0x100000) == 0);
  }
  uVar11 = ((short)uVar13 + sVar19) - 0x3ff;
  uVar20 = CONCAT22((short)(uVar13 >> 0x10),uVar11);
  if ((-1 < (short)uVar11) && (0x7fe < uVar11)) {
    uVar10 = FUN_0060eb57();
    return (double)CONCAT44(extraout_EDX,uVar10);
  }
  if ((short)uVar11 < -0x35) {
    uVar10 = FUN_0060eb3a();
    return (double)CONCAT44(extraout_EDX_00,uVar10);
  }
  uVar15 = (uVar15 | 0x100000) << 0xb | uVar17 >> 0x15;
  uVar18 = (uVar12 | 0x100000) << 0xb | uVar16 >> 0x15;
  lVar1 = (ulonglong)(uVar17 << 0xb) * (ulonglong)(uVar16 << 0xb);
  uVar12 = (uint)((ulonglong)lVar1 >> 0x20);
  lVar2 = (ulonglong)uVar18 * (ulonglong)(uVar17 << 0xb);
  lVar8 = lVar2 + (ulonglong)uVar12;
  uVar21 = (uint)((ulonglong)lVar8 >> 0x20);
  lVar3 = (ulonglong)(uVar16 << 0xb) * (ulonglong)uVar15;
  uVar13 = (uint)((ulonglong)lVar3 >> 0x20);
  uVar17 = (uint)CARRY4((uint)lVar8,(uint)lVar3);
  uVar16 = uVar21 + uVar13;
  uVar7 = (ulonglong)uVar15 * (ulonglong)uVar18 +
          CONCAT44((uint)CARRY4((uint)((ulonglong)lVar2 >> 0x20),(uint)CARRY4(uVar12,(uint)lVar2)) +
                   (uint)(CARRY4(uVar21,uVar13) || CARRY4(uVar16,uVar17)),uVar16 + uVar17);
  uVar17 = (int)uVar7 << 0x16;
  uVar7 = uVar7 >> 10;
  do {
    uVar14 = (ushort)(uVar20 >> 0x10);
    if ((uVar7 & 0x20000000000000) == 0) {
      if (CARRY4(uVar17,uVar17)) {
        bVar22 = true;
        if (((uVar17 & 0x7fffffff) == 0) && (bVar22 = (int)lVar1 != 0, !bVar22)) {
          bVar22 = (uVar7 & 1) != 0;
        }
        uVar9 = uVar7 + (uint)bVar22;
        uVar7 = uVar7 + (uint)bVar22;
        if ((uVar9 & 0x20000000000000) != 0) {
          uVar7 = CONCAT44((uint)(uVar9 >> 0x21),
                           (uint)uVar9 >> 1 | (uint)((uVar9 & 0x100000000) != 0) << 0x1f);
          sVar19 = (short)uVar20 + 1;
          uVar20 = CONCAT22(uVar14,sVar19);
          if (sVar19 == 0x7ff) break;
        }
      }
      uVar17 = (uint)(uVar7 >> 0x20);
      sVar19 = (short)uVar20;
      if (sVar19 < 1) {
        if (sVar19 == 0) {
          uVar20 = CONCAT31((int3)(uVar20 >> 8),1);
        }
        else {
          uVar20 = CONCAT22((short)(uVar20 >> 0x10),-1 - sVar19);
        }
        bVar4 = (byte)uVar20 & 0x1f;
        bVar5 = (byte)uVar20 & 0x1f;
        uVar7 = CONCAT44(uVar17 >> bVar5 | 0 << 0x20 - bVar5,
                         (uint)uVar7 >> bVar4 | uVar17 << 0x20 - bVar4);
        uVar20 = uVar20 & 0xffff0000;
      }
      return (double)CONCAT44((uint)(uVar7 >> 0x20) & 0xfffff |
                              (uVar20 << 0x15) >> 1 | (uint)CARRY4(uVar20,uVar20) << 0x1f,(int)uVar7
                             );
    }
    uVar9 = uVar7 & 1;
    uVar7 = CONCAT44((uint)(uVar7 >> 0x21),
                     (uint)uVar7 >> 1 | (uint)((uVar7 & 0x100000000) != 0) << 0x1f);
    uVar17 = uVar17 >> 1 | (uint)(uVar9 != 0) << 0x1f;
    sVar19 = (short)uVar20 + 1;
    uVar20 = CONCAT22(uVar14,sVar19);
  } while (sVar19 != 0x7ff);
  uVar10 = FUN_0060eb57();
  return (double)CONCAT44(extraout_EDX_01,uVar10);
}
