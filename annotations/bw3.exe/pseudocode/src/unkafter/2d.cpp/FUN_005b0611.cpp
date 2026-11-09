// Name: unkafter_2d.cpp_FUN_005b0611
// Address: 005b0611
// Address Range: [[005b0611, 005b07ad] [005b0e3e, 005b0e42] [005b0e5b, 005b0e7a]]
// Convention: unknown
// Signature: double unkafter_2d_cpp_FUN_005b0611(void)

#include "nocturne.h"

double unkafter_2d_cpp_FUN_005b0611(void)

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
  uint in_EAX;
  ushort uVar10;
  uint in_ECX;
  uint uVar11;
  ushort uVar12;
  uint in_EDX;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint unaff_EBX;
  uint uVar16;
  uint uVar17;
  short sVar18;
  uint uVar19;
  uint uVar20;
  bool bVar21;
  
  if (in_EAX == 0) {
    if ((in_EDX & 0x7fffffff) == 0) {
      return 0.0;
    }
    in_EDX = in_EDX & 0x7fffffff | (uint)CARRY4(in_EDX,in_EDX) << 0x1f;
  }
  if (unaff_EBX == 0) {
    if ((in_ECX & 0x7fffffff) == 0) {
      return 0.0;
    }
    in_ECX = in_ECX & 0x7fffffff | (uint)CARRY4(in_ECX,in_ECX) << 0x1f;
  }
  if (DAT_006075c1 != '\0') {
    dVar6 = __BITCAST_DOUBLE(CONCAT44(in_EDX,in_EAX)) * __BITCAST_DOUBLE(CONCAT44(in_ECX,unaff_EBX));
    if ((int)((ulonglong)dVar6 >> 0x20) == -0x80000000) {
      dVar6 = 0.0;
    }
    return dVar6;
  }
  uVar19 = (int)in_EDX >> 0x14 & 0x800007ff;
  uVar10 = ((ushort)((int)in_ECX >> 0x1f) & 0x8000) + (short)(uVar19 >> 0x10);
  sVar18 = (short)uVar19;
  uVar19 = (int)in_ECX >> 0x14 & 0x7ff;
  uVar11 = (uint)uVar10 << 0x10 | uVar19;
  uVar13 = in_EDX & 0xfffff;
  uVar16 = in_ECX & 0xfffff;
  if (sVar18 == 0) {
    sVar18 = 1;
    do {
      sVar18 = sVar18 + -1;
      bVar21 = CARRY4(in_EAX,in_EAX);
      in_EAX = in_EAX * 2;
      uVar13 = uVar13 * 2 + (uint)bVar21;
    } while ((uVar13 & 0x100000) == 0);
  }
  if ((short)uVar19 == 0) {
    uVar11 = CONCAT22(uVar10,1);
    do {
      uVar11 = CONCAT22((short)(uVar11 >> 0x10),(short)uVar11 + -1);
      bVar21 = CARRY4(unaff_EBX,unaff_EBX);
      unaff_EBX = unaff_EBX * 2;
      uVar16 = uVar16 * 2 + (uint)bVar21;
    } while ((uVar16 & 0x100000) == 0);
  }
  uVar10 = ((short)uVar11 + sVar18) - 0x3ff;
  uVar19 = CONCAT22((short)(uVar11 >> 0x10),uVar10);
  if (((short)uVar10 < 0) || (uVar10 < 0x7ff)) {
    if ((short)uVar10 < -0x35) {
      return 0.0;
    }
    uVar14 = (uVar13 | 0x100000) << 0xb | in_EAX >> 0x15;
    uVar17 = (uVar16 | 0x100000) << 0xb | unaff_EBX >> 0x15;
    lVar1 = (ulonglong)(in_EAX << 0xb) * (ulonglong)(unaff_EBX << 0xb);
    uVar16 = (uint)((ulonglong)lVar1 >> 0x20);
    lVar2 = (ulonglong)uVar17 * (ulonglong)(in_EAX << 0xb);
    lVar8 = lVar2 + (ulonglong)uVar16;
    uVar20 = (uint)((ulonglong)lVar8 >> 0x20);
    lVar3 = (ulonglong)(unaff_EBX << 0xb) * (ulonglong)uVar14;
    uVar15 = (uint)((ulonglong)lVar3 >> 0x20);
    uVar11 = (uint)CARRY4((uint)lVar8,(uint)lVar3);
    uVar13 = uVar20 + uVar15;
    uVar7 = (ulonglong)uVar14 * (ulonglong)uVar17 +
            CONCAT44((uint)CARRY4((uint)((ulonglong)lVar2 >> 0x20),(uint)CARRY4(uVar16,(uint)lVar2))
                     + (uint)(CARRY4(uVar20,uVar15) || CARRY4(uVar13,uVar11)),uVar13 + uVar11);
    uVar11 = (int)uVar7 << 0x16;
    uVar7 = uVar7 >> 10;
    do {
      uVar12 = (ushort)(uVar19 >> 0x10);
      if ((uVar7 & 0x20000000000000) == 0) {
        if (CARRY4(uVar11,uVar11)) {
          bVar21 = true;
          if (((uVar11 & 0x7fffffff) == 0) && (bVar21 = (int)lVar1 != 0, !bVar21)) {
            bVar21 = (uVar7 & 1) != 0;
          }
          uVar9 = uVar7 + (uint)bVar21;
          uVar7 = uVar7 + (uint)bVar21;
          if ((uVar9 & 0x20000000000000) != 0) {
            uVar7 = CONCAT44((uint)(uVar9 >> 0x21),
                             (uint)uVar9 >> 1 | (uint)((uVar9 & 0x100000000) != 0) << 0x1f);
            sVar18 = (short)uVar19 + 1;
            uVar19 = CONCAT22(uVar12,sVar18);
            if (sVar18 == 0x7ff) break;
          }
        }
        uVar11 = (uint)(uVar7 >> 0x20);
        sVar18 = (short)uVar19;
        if (sVar18 < 1) {
          if (sVar18 == 0) {
            uVar19 = CONCAT31((int3)(uVar19 >> 8),1);
          }
          else {
            uVar19 = CONCAT22((short)(uVar19 >> 0x10),-1 - sVar18);
          }
          bVar4 = (byte)uVar19 & 0x1f;
          bVar5 = (byte)uVar19 & 0x1f;
          uVar7 = CONCAT44(uVar11 >> bVar5 | 0 << 0x20 - bVar5,
                           (uint)uVar7 >> bVar4 | uVar11 << 0x20 - bVar4);
          uVar19 = uVar19 & 0xffff0000;
        }
        return __BITCAST_DOUBLE(CONCAT44((uint)(uVar7 >> 0x20) & 0xfffff |
                                (uVar19 & 0x7ff) << 0x14 | (uint)CARRY4(uVar19,uVar19) << 0x1f,
                                (int)uVar7));
      }
      uVar9 = uVar7 & 1;
      uVar7 = CONCAT44((uint)(uVar7 >> 0x21),
                       (uint)uVar7 >> 1 | (uint)((uVar7 & 0x100000000) != 0) << 0x1f);
      uVar11 = uVar11 >> 1 | (uint)(uVar9 != 0) << 0x1f;
      sVar18 = (short)uVar19 + 1;
      uVar19 = CONCAT22(uVar12,sVar18);
    } while (sVar18 != 0x7ff);
  }
  FUN_005a92dc();
  unkafter_2d_cpp_FUN_005b1960();
  return (double)((ulonglong)(uVar19 & 0x80000000) << 0x20 | 0x7ff0000000000000);
}
