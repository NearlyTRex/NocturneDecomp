// Name: crt_unknown.c_FUN_005cd6c4
// Address: 005cd6c4
// Address Range: [[005cd6c4, 005cd880]]
// Convention: unknown
// Signature: double crt_unknown_c_FUN_005cd6c4(void)

#include "nocturne.h"

double FUN_005cd6c4(void)

{
  double dVar1;
  uint in_EAX;
  byte bVar2;
  short sVar3;
  ushort uVar4;
  short sVar5;
  uint in_ECX;
  uint uVar6;
  uint uVar7;
  uint in_EDX;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint unaff_EBX;
  ushort uVar12;
  uint uVar13;
  ushort uVar14;
  uint uVar15;
  bool bVar16;
  int iVar8;
  
  uVar6 = in_ECX ^ 0x80000000;
  if (unaff_EBX == 0) {
    bVar16 = CARRY4(uVar6,uVar6);
    uVar7 = in_EAX;
    uVar6 = in_EDX;
    if ((in_ECX & 0x7fffffff) == 0) goto LAB_005cd6e0;
    uVar6 = in_ECX & 0x7fffffff | (uint)bVar16 << 0x1f;
  }
  if (in_EAX == 0) {
    uVar7 = unaff_EBX;
    if ((in_EDX & 0x7fffffff) == 0) {
LAB_005cd6e0:
      return __BITCAST_DOUBLE(CONCAT44(uVar6,uVar7));
    }
    in_EDX = in_EDX & 0x7fffffff | (uint)CARRY4(in_EDX,in_EDX) << 0x1f;
  }
  if (DAT_0062621d != '\0') {
    dVar1 = __BITCAST_DOUBLE(CONCAT44(in_EDX,in_EAX)) + __BITCAST_DOUBLE(CONCAT44(uVar6,unaff_EBX));
    if ((int)((ulonglong)dVar1 >> 0x20) == -0x80000000) {
      dVar1 = 0.0;
    }
    return dVar1;
  }
  sVar5 = (short)(in_EDX >> 0x10);
  uVar7 = (int)uVar6 >> 0x14 & 0x800007ff;
  sVar3 = (short)(uVar7 >> 0x10) + (sVar5 >> 0xf & 0x8000U);
  uVar14 = sVar5 >> 4 & 0x7ff;
  uVar4 = (ushort)((int)uVar6 >> 0x14) & 0x7ff;
  uVar9 = in_EDX & 0xfffff;
  uVar6 = uVar6 & 0xfffff;
  if (uVar14 != 0) {
    uVar9 = uVar9 | 0x100000;
  }
  if (uVar4 != 0) {
    uVar6 = uVar6 | 0x100000;
  }
  uVar15 = in_EAX * 2;
  uVar10 = uVar9 * 2 + (uint)CARRY4(in_EAX,in_EAX);
  uVar9 = unaff_EBX * 2;
  uVar13 = uVar6 * 2 + (uint)CARRY4(unaff_EBX,unaff_EBX);
  sVar5 = uVar4 - uVar14;
  iVar8 = CONCAT22(sVar3,sVar5);
  uVar6 = uVar15;
  uVar11 = uVar10;
  if (sVar5 != 0) {
    if (uVar4 < uVar14) {
      iVar8 = CONCAT22(sVar3,-sVar5);
      uVar6 = uVar9;
      uVar11 = uVar13;
      uVar9 = uVar15;
      uVar7 = (int)in_EDX >> 0x14 & 0x800007ff;
      uVar13 = uVar10;
    }
    if (0x36 < (ushort)iVar8) {
      return __BITCAST_DOUBLE(CONCAT44(uVar13 >> 1 & 0x800fffff | (uint)CARRY4(uVar7,uVar7) << 0x1f |
                              uVar7 << 0x14,uVar9 >> 1 | (uint)((uVar13 & 1) != 0) << 0x1f));
    }
  }
  if (iVar8 < 0) {
    bVar16 = uVar9 != 0;
    uVar9 = -uVar9;
    uVar13 = -(uint)bVar16 - uVar13;
    uVar7 = uVar7 ^ 0x80000000;
  }
  uVar15 = 0;
  bVar2 = (byte)iVar8;
  if (bVar2 != 0) {
    uVar10 = uVar11;
    if (0x1f < bVar2) {
      uVar15 = (uint)(uVar6 != 0);
      uVar10 = 0;
      uVar6 = uVar11;
    }
    uVar15 = uVar15 | 0U >> (bVar2 & 0x1f) | uVar6 << 0x20 - (bVar2 & 0x1f);
    uVar6 = uVar6 >> (bVar2 & 0x1f) | uVar10 << 0x20 - (bVar2 & 0x1f);
    uVar11 = uVar10 >> (bVar2 & 0x1f) | 0 << 0x20 - (bVar2 & 0x1f);
  }
  uVar10 = uVar6 + uVar9;
  uVar6 = uVar11 + uVar13 + (uint)CARRY4(uVar6,uVar9);
  if ((int)uVar6 < 0) {
    if (0x34 < bVar2) {
      uVar9 = (uint)((uVar15 & 0x7fffffff) != 0);
      bVar16 = CARRY4(uVar10,uVar9);
      uVar10 = uVar10 + uVar9;
      uVar6 = uVar6 + bVar16;
    }
    bVar16 = uVar10 != 0;
    uVar10 = -uVar10;
    uVar6 = -(uint)bVar16 - uVar6;
    uVar7 = uVar7 ^ 0x80000000;
  }
  if (uVar10 != 0 || uVar6 != 0) {
    if ((short)uVar7 == 0) {
LAB_005cd86d:
      return __BITCAST_DOUBLE(CONCAT44(uVar6 >> 1 | (uint)CARRY4(uVar7,uVar7) << 0x1f,
                              uVar10 >> 1 | (uint)((uVar6 & 1) != 0) << 0x1f));
    }
    while( true ) {
      uVar12 = (ushort)(uVar7 >> 0x10);
      if ((uVar6 & 0x7fe00000) != 0) break;
      sVar5 = (short)uVar7 + -1;
      uVar7 = CONCAT22(uVar12,sVar5);
      if (sVar5 == 0) goto LAB_005cd86d;
      bVar16 = CARRY4(uVar10,uVar10);
      uVar10 = uVar10 * 2;
      uVar6 = uVar6 * 2 + (uint)bVar16;
    }
    if ((uVar6 & 0x400000) != 0) {
      uVar11 = uVar6 & 1;
      uVar6 = uVar6 >> 1;
      uVar9 = uVar10 & 1;
      uVar10 = uVar10 >> 1 | (uint)(uVar11 != 0) << 0x1f;
      uVar15 = uVar15 + (uVar9 != 0);
      sVar5 = (short)uVar7 + 1;
      uVar7 = CONCAT22(uVar12,sVar5);
      if (sVar5 == 0x7ff) goto LAB_005cd877;
    }
    uVar13 = uVar6 >> 1;
    uVar9 = uVar10 & 1;
    uVar11 = uVar10 >> 1;
    uVar10 = uVar11 | (uint)((uVar6 & 1) != 0) << 0x1f;
    if (uVar9 != 0) {
      uVar6 = (uint)(uVar15 != 0 || (uVar11 & 1) != 0);
      bVar16 = CARRY4(uVar10,uVar6);
      uVar10 = uVar10 + uVar6;
      uVar13 = uVar13 + bVar16;
      if ((uVar13 & 0x200000) != 0) {
        uVar6 = uVar13 & 1;
        uVar13 = uVar13 >> 1;
        uVar10 = uVar10 >> 1 | (uint)(uVar6 != 0) << 0x1f;
        sVar5 = (short)uVar7 + 1;
        uVar7 = CONCAT22((short)(uVar7 >> 0x10),sVar5);
        if (sVar5 == 0x7ff) {
LAB_005cd877:
          FUN_005c646c();
          FUN_005cebd0();
          return (double)((ulonglong)(uVar7 & 0x80000000) << 0x20 | 0x7ff0000000000000);
        }
      }
    }
    uVar6 = uVar13 & 0xfffff | (uVar7 & 0x7ff) << 0x14 | (uint)CARRY4(uVar7,uVar7) << 0x1f;
  }
  return __BITCAST_DOUBLE(CONCAT44(uVar6,uVar10));
}
