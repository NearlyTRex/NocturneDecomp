// Name: unkafter_2d.cpp_FUN_005b024e
// Address: 005b024e
// Address Range: [[005b024e, 005b0453] [005b0e4f, 005b0e5a]]
// Convention: unknown
// Signature: double unkafter_2d_cpp_FUN_005b024e(void)

#include "nocturne.h"

double unkafter_2d_cpp_FUN_005b024e(void)

{
  double dVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint in_EAX;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  uint in_ECX;
  uint uVar10;
  uint in_EDX;
  uint uVar11;
  uint uVar12;
  uint unaff_EBX;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  short sVar16;
  ushort uVar17;
  uint uVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  float10 fVar22;
  uint uStack_24;
  uint uStack_20;
  
  if (unaff_EBX == 0) {
    if ((in_ECX & 0x7fffffff) == 0) {
      uVar8 = unkafter_2d_cpp_FUN_005b1960();
      goto LAB_005b0e6c;
    }
    in_ECX = in_ECX & 0x7fffffff | (uint)CARRY4(in_ECX,in_ECX) << 0x1f;
  }
  if (in_EAX == 0) {
    if ((in_EDX & 0x7fffffff) == 0) {
      return 0.0;
    }
    in_EDX = in_EDX & 0x7fffffff | (uint)CARRY4(in_EDX,in_EDX) << 0x1f;
  }
  if (DAT_006075c1 != '\0') {
    fVar22 = (float10)__BITCAST_DOUBLE(CONCAT44(in_EDX,in_EAX));
    if ((DAT_00607b5c & 1) == 0) {
      fVar22 = fVar22 / (float10)__BITCAST_DOUBLE(CONCAT44(in_ECX,unaff_EBX));
    }
    else {
      FUN_005aab44();
    }
    dVar1 = (double)fVar22;
    if ((int)((ulonglong)dVar1 >> 0x20) == -0x80000000) {
      dVar1 = 0.0;
    }
    return dVar1;
  }
  sVar16 = (short)(in_ECX >> 0x10);
  uVar7 = (int)in_EDX >> 0x14 & 0x7ff;
  uVar18 = (uint)(ushort)(((ushort)((int)in_EDX >> 0x1f) & 0x8000) + (sVar16 >> 0xf & 0x8000U)) <<
           0x10 | uVar7;
  uVar8 = (int)in_ECX >> 0x14 & 0x800007ff;
  uVar11 = in_EDX & 0xfffff;
  uVar13 = in_ECX & 0xfffff;
  if ((short)uVar7 == 0) {
    do {
      bVar19 = CARRY4(in_EAX,in_EAX);
      in_EAX = in_EAX * 2;
      uVar11 = uVar11 * 2 + (uint)bVar19;
      uVar18 = CONCAT22((short)(uVar18 >> 0x10),(short)uVar18 + -1);
    } while ((uVar11 & 0x100000) == 0);
  }
  else {
    uVar11 = uVar11 | 0x100000;
  }
  if ((sVar16 >> 4 & 0x7ffU) == 0) {
    do {
      bVar19 = CARRY4(unaff_EBX,unaff_EBX);
      unaff_EBX = unaff_EBX * 2;
      uVar13 = uVar13 * 2 + (uint)bVar19;
      uVar8 = CONCAT22((short)(uVar8 >> 0x10),(short)uVar8 + -1);
    } while ((uVar13 & 0x100000) == 0);
  }
  else {
    uVar13 = uVar13 | 0x100000;
  }
  sVar16 = (short)uVar18 - (short)uVar8;
  uVar17 = sVar16 + 0x3ff;
  if (((short)uVar17 < 0) || (uVar17 < 0x7ff)) {
    if (-0x35 < (short)uVar17) {
      uVar12 = uVar11 << 0xb | in_EAX >> 0x15;
      uVar8 = in_EAX * 0x800;
      uVar13 = uVar13 << 0xb | unaff_EBX >> 0x15;
      uVar7 = unaff_EBX * 0x800;
      bVar19 = uVar13 <= uVar12;
      uVar11 = uVar12;
      if (bVar19) {
        uVar11 = uVar12 - uVar13;
      }
      uVar2 = CONCAT44(uVar11,uVar8) / (ulonglong)uVar13;
      uStack_20 = (uint)uVar2;
      uVar3 = (ulonglong)uVar7 * (uVar2 & 0xffffffff);
      iVar5 = (int)uVar3;
      lVar4 = (ulonglong)uVar13 * (uVar2 & 0xffffffff) + (uVar3 >> 0x20);
      if (bVar19) {
        lVar4 = lVar4 + CONCAT44(uVar13,uVar7);
      }
      uVar10 = -iVar5;
      uVar11 = (uint)(iVar5 != 0);
      uVar15 = uVar8 - (uint)lVar4;
      uVar14 = uVar15 - uVar11;
      for (iVar5 = (uVar12 - (int)((ulonglong)lVar4 >> 0x20)) -
                   (uint)(uVar8 < (uint)lVar4 || uVar15 < uVar11); iVar5 != 0;
          iVar5 = iVar5 + (uint)(bVar21 || CARRY4(uVar8,(uint)bVar20))) {
        bVar20 = uStack_20 == 0;
        uStack_20 = uStack_20 - 1;
        bVar19 = (bool)(bVar19 ^ bVar20);
        bVar20 = CARRY4(uVar10,uVar7);
        uVar10 = uVar10 + uVar7;
        bVar21 = CARRY4(uVar14,uVar13);
        uVar8 = uVar14 + uVar13;
        uVar14 = uVar8 + bVar20;
      }
      if (uVar13 <= uVar14) {
        uVar14 = uVar14 - uVar13;
        bVar20 = 0xfffffffe < uStack_20;
        uStack_20 = uStack_20 + 1;
        bVar19 = (bool)(bVar19 ^ bVar20);
      }
      uVar2 = CONCAT44(uVar14,uVar10) / (ulonglong)uVar13;
      uStack_24 = (uint)uVar2;
      if (uStack_24 != 0) {
        uVar3 = (ulonglong)uVar7 * (uVar2 & 0xffffffff);
        iVar5 = (int)uVar3;
        lVar4 = (ulonglong)uVar13 * (uVar2 & 0xffffffff) + (uVar3 >> 0x20);
        uVar6 = (uint)lVar4;
        uVar12 = -iVar5;
        uVar8 = (uint)(iVar5 != 0);
        uVar11 = uVar10 - uVar6;
        uVar15 = uVar11 - uVar8;
        for (iVar5 = (uVar14 - (int)((ulonglong)lVar4 >> 0x20)) -
                     (uint)(uVar10 < uVar6 || uVar11 < uVar8); iVar5 != 0;
            iVar5 = iVar5 + (uint)(bVar21 || CARRY4(uVar8,(uint)bVar20))) {
          bVar21 = uStack_24 == 0;
          uStack_24 = uStack_24 - 1;
          bVar20 = uStack_20 < bVar21;
          uStack_20 = uStack_20 - bVar21;
          bVar19 = (bool)(bVar19 ^ bVar20);
          bVar20 = CARRY4(uVar12,uVar7);
          uVar12 = uVar12 + uVar7;
          bVar21 = CARRY4(uVar15,uVar13);
          uVar8 = uVar15 + uVar13;
          uVar15 = uVar8 + bVar20;
        }
      }
      iVar5 = CONCAT22((short)(uVar18 >> 0x10),sVar16 + 0x3fe);
      if (bVar19) {
        uVar8 = uStack_20 & 1;
        uStack_20 = uStack_20 >> 1 | 0x80000000;
        uStack_24 = uStack_24 >> 1 | (uint)(uVar8 != 0) << 0x1f;
        iVar5 = iVar5 + 1;
      }
      uVar7 = uStack_24 >> 0xb | uStack_20 << 0x15;
      uVar8 = (uint)((uStack_24 >> 10 & 1) != 0) << 0x1f;
      uVar13 = uStack_20 >> 0xb | 0xfff00000;
      uVar8 = (uint)CARRY4(uVar8,uVar8);
      uVar11 = uVar7 + uVar8;
      uVar8 = (uint)CARRY4(uVar7,uVar8);
      uVar7 = uVar13 + uVar8;
      uVar8 = iVar5 + (uint)CARRY4(uVar13,uVar8);
      sVar16 = (short)uVar8;
      if (sVar16 < 1) {
        if (sVar16 == 0) {
          bVar9 = 1;
        }
        else {
          uVar8 = CONCAT22((short)(uVar8 >> 0x10),-sVar16);
          bVar9 = (byte)-sVar16;
        }
        uVar11 = uVar11 >> (bVar9 & 0x1f) | (uVar7 & 0x1fffff) << 0x20 - (bVar9 & 0x1f);
        uVar7 = (uVar7 & 0x1fffff) >> (bVar9 & 0x1f) | 0 << 0x20 - (bVar9 & 0x1f);
        uVar8 = uVar8 & 0xffff0000;
      }
      return __BITCAST_DOUBLE(CONCAT44(uVar7 & 0xfffff |
                              (uVar8 & 0x7ff) << 0x14 | (uint)CARRY4(uVar8,uVar8) << 0x1f,uVar11));
    }
    return 0.0;
  }
  FUN_005a92dc();
  unkafter_2d_cpp_FUN_005b1960();
LAB_005b0e6c:
  return (double)((ulonglong)(uVar8 & 0x80000000) << 0x20 | 0x7ff0000000000000);
}
