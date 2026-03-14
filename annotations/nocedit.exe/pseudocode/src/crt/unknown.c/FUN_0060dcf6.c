// Name: crt_unknown.c_FUN_0060dcf6
// Address: 0060dcf6
// Address Range: [[0060dcf6, 0060defb]]
// Convention: unknown
// Signature: double crt_unknown_c_FUN_0060dcf6(void)

#include "nocturne.h"

double FUN_0060dcf6(void)

{
  ulonglong uVar3;
  ulonglong uVar5;
  ushort uVar15;
  longlong lVar16;
  uint in_EAX;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ushort uVar7;
  byte bVar17;
  uint in_ECX;
  uint uVar18;
  uint uVar8;
  uint in_EDX;
  uint uVar9;
  uint uVar10;
  uint uVar19;
  uint unaff_EBX;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  byte bVar15;
  ushort uVar16;
  short sVar20;
  ushort uVar17;
  short sVar18;
  uint uVar21;
  int iVar22;
  bool bVar24;
  bool bVar19;
  bool bVar20;
  bool bVar25;
  bool bVar21;
  bool bVar26;
  float10 fVar22;
  double dVar27;
  uint local_24;
  uint local_20;
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar23;
  
  if (unaff_EBX == 0) {
    if ((in_ECX & 0x7fffffff) == 0) {
      dVar27 = (double)FUN_0060eb4b();
      return dVar27;
    }
    in_ECX = in_ECX & 0x7fffffff | (uint)CARRY4(in_ECX,in_ECX) << 0x1f;
  }
  if (in_EAX == 0) {
    if ((in_EDX & 0x7fffffff) == 0) {
      return 0.0;
    }
    in_EDX = in_EDX & 0x7fffffff | (uint)CARRY4(in_EDX,in_EDX) << 0x1f;
  }
  if (BYTE_00684acd == 0) {
    uVar18 = (int)in_ECX >> 0x14 & 0x800007ff;
    uVar23 = (int)in_EDX >> 0x14 & 0x7ff;
    uVar21 = (uint)(ushort)(((ushort)((int)in_EDX >> 0x1f) & 0x8000) + (short)(uVar18 >> 0x10)) <<
             0x10 | uVar23;
    uVar15 = (ushort)uVar18;
    uVar9 = in_EDX & 0xfffff;
    uVar11 = in_ECX & 0xfffff;
    if ((short)uVar23 == 0) {
      do {
        bVar24 = CARRY4(in_EAX,in_EAX);
        in_EAX = in_EAX * 2;
        uVar9 = uVar9 * 2 + (uint)bVar24;
        uVar16 = (ushort)uVar21;
        uVar16 = uVar16 - 1;
        uVar21 = CONCAT22((short)(uVar21 >> 0x10),uVar16);
      } while ((uVar9 & 0x100000) == 0);
    }
    else {
      uVar9 = uVar9 | 0x100000;
    }
    uVar7 = 0;
    if (uVar15 == 0) {
      do {
        bVar19 = CARRY4(unaff_EBX,unaff_EBX);
        unaff_EBX = unaff_EBX * 2;
        uVar11 = uVar11 * 2 + (uint)bVar19;
        uVar7 = uVar7 - 1;
      } while ((uVar11 & 0x100000) == 0);
    }
    else {
      uVar11 = uVar11 | 0x100000;
      uVar7 = uVar15;
    }
    sVar20 = (short)uVar21 - uVar7;
    uVar17 = sVar20 + 0x3ff;
    if ((-1 < (short)uVar17) && (0x7fe < uVar17)) {
      dVar27 = (double)FUN_0060eb57();
      return dVar27;
    }
    if (-0x35 < (short)uVar17) {
      uVar10 = uVar9 << 0xb | in_EAX >> 0x15;
      uVar23 = in_EAX * 0x800;
      uVar12 = uVar11 << 0xb | unaff_EBX >> 0x15;
      uVar18 = unaff_EBX * 0x800;
      bVar24 = uVar12 <= uVar10;
      uVar19 = uVar10;
      if (bVar24) {
        uVar19 = uVar10 - uVar12;
      }
      uVar1 = CONCAT44(uVar19,uVar23) / (ulonglong)uVar12;
      local_20 = (uint)uVar1;
      uVar2 = (ulonglong)uVar18 * (uVar1 & 0xffffffff);
      iVar5 = (int)uVar2;
      lVar3 = (ulonglong)uVar12 * (uVar1 & 0xffffffff) + (uVar2 >> 0x20);
      if (bVar24) {
        lVar3 = lVar3 + CONCAT44(uVar12,uVar18);
      }
      uVar8 = -iVar5;
      uVar19 = uVar23 - (uint)lVar3;
      uVar13 = uVar19 - (iVar5 != 0);
      for (iVar22 = (uVar10 - (int)((ulonglong)lVar3 >> 0x20)) -
                    (uint)(uVar23 < (uint)lVar3 || uVar19 < (iVar5 != 0)); iVar22 != 0;
          iVar22 = iVar22 + (uint)bVar21) {
        bVar20 = local_20 == 0;
        local_20 = local_20 - 1;
        bVar24 = (bool)(bVar24 ^ bVar20);
        bVar25 = CARRY4(uVar8,uVar18);
        uVar8 = uVar8 + uVar18;
        bVar21 = CARRY4(uVar13,uVar12);
        bVar21 = bVar21 || CARRY4(uVar13 + uVar12,(uint)bVar25);
        uVar13 = uVar13 + uVar12 + (uint)bVar25;
      }
      if (uVar12 <= uVar13) {
        uVar13 = uVar13 - uVar12;
        bVar25 = 0xfffffffe < local_20;
        local_20 = local_20 + 1;
        bVar24 = (bool)(bVar24 ^ bVar25);
      }
      uVar3 = CONCAT44(uVar13,uVar8) / (ulonglong)uVar12;
      local_24 = (uint)uVar3;
      if (local_24 != 0) {
        uVar5 = (ulonglong)uVar18 * (uVar3 & 0xffffffff);
        iVar22 = (int)uVar5;
        lVar16 = (ulonglong)uVar12 * (uVar3 & 0xffffffff) + (uVar5 >> 0x20);
        uVar6 = (uint)lVar16;
        uVar19 = -iVar22;
        uVar23 = (uint)(iVar22 != 0);
        uVar14 = (uVar8 - uVar6) - uVar23;
        for (iVar22 = (uVar13 - (int)((ulonglong)lVar16 >> 0x20)) -
                      (uint)(uVar8 < uVar6 || uVar8 - uVar6 < uVar23); iVar22 != 0;
            iVar22 = iVar22 + (uint)(bVar26 || CARRY4(uVar23,(uint)bVar25))) {
          bVar26 = local_24 == 0;
          local_24 = local_24 - 1;
          bVar25 = local_20 < bVar26;
          local_20 = local_20 - bVar26;
          bVar24 = (bool)(bVar24 ^ bVar25);
          bVar25 = CARRY4(uVar19,uVar18);
          uVar19 = uVar19 + uVar18;
          bVar26 = CARRY4(uVar14,uVar12);
          uVar23 = uVar14 + uVar12;
          uVar14 = uVar23 + bVar25;
        }
      }
      iVar22 = CONCAT22((short)(uVar21 >> 0x10),sVar20 + 0x3fe);
      if (bVar24) {
        uVar23 = local_20 & 1;
        local_20 = local_20 >> 1 | 0x80000000;
        local_24 = local_24 >> 1 | (uint)(uVar23 != 0) << 0x1f;
        iVar22 = iVar22 + 1;
      }
      uVar18 = local_24 >> 0xb | local_20 << 0x15;
      uVar23 = (uint)((local_24 >> 10 & 1) != 0) << 0x1f;
      uVar19 = local_20 >> 0xb | 0xfff00000;
      uVar23 = (uint)CARRY4(uVar23,uVar23);
      uVar21 = uVar18 + uVar23;
      uVar23 = (uint)CARRY4(uVar18,uVar23);
      uVar18 = uVar19 + uVar23;
      uVar23 = iVar22 + (uint)CARRY4(uVar19,uVar23);
      sVar20 = (short)uVar23;
      if (sVar20 < 1) {
        if (sVar20 == 0) {
          bVar17 = 1;
        }
        else {
          uVar23 = CONCAT22((short)(uVar23 >> 0x10),-sVar20);
          bVar17 = (byte)-sVar20;
        }
        uVar21 = uVar21 >> (bVar17 & 0x1f) | (uVar18 & 0x1fffff) << 0x20 - (bVar17 & 0x1f);
        uVar18 = (uVar18 & 0x1fffff) >> (bVar17 & 0x1f) | 0 << 0x20 - (bVar17 & 0x1f);
        uVar23 = uVar23 & 0xffff0000;
      }
      return __BITCAST_DOUBLE(CONCAT44(uVar18 & 0xfffff |
                              (uVar23 & 0x7ff) << 0x14 | (uint)CARRY4(uVar23,uVar23) << 0x1f,uVar21))
      ;
    }
    dVar27 = (double)FUN_0060eb3a();
    return dVar27;
  }
  if ((g_UseSoftwareMath & 1) == 0) {
    fVar22 = (float10)__BITCAST_DOUBLE(CONCAT44(in_EDX,in_EAX)) / (float10)__BITCAST_DOUBLE(CONCAT44(in_ECX,unaff_EBX));
  }
  else {
    fVar22 = pentiumFdivBugWorkaroundDouble
                       ((float10)__BITCAST_DOUBLE(CONCAT44(in_EDX,in_EAX)),__BITCAST_DOUBLE(CONCAT44(in_ECX,unaff_EBX)))
    ;
  }
  dVar27 = (double)fVar22;
  if ((int)((ulonglong)dVar27 >> 0x20) == -0x80000000) {
    dVar27 = 0.0;
  }
  return dVar27;
}
