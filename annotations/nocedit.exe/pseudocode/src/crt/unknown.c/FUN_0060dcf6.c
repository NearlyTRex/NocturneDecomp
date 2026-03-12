// Name: crt_unknown.c_FUN_0060dcf6
// Address: 0060dcf6
// Address Range: [[0060dcf6, 0060defb]]
// Convention: unknown
// Signature: uint crt_unknown_c_FUN_0060dcf6(void)

#include "nocturne.h"

uint FUN_0060dcf6(void)

{
  ulonglong uVar3;
  ulonglong uVar5;
  longlong lVar6;
  uint in_EAX;
  uint uVar4;
  uint uVar15;
  int iVar5;
  uint uVar6;
  ushort uVar7;
  uint uVar18;
  uint in_ECX;
  uint uVar8;
  uint in_EDX;
  uint uVar9;
  uint uVar10;
  uint uVar19;
  uint uVar20;
  uint unaff_EBX;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  byte bVar15;
  ushort uVar16;
  ushort uVar17;
  ushort uVar21;
  short sVar18;
  int iVar22;
  bool bVar23;
  bool bVar19;
  bool bVar20;
  bool bVar24;
  bool bVar21;
  bool bVar25;
  float10 fVar22;
  uint local_24;
  uint local_20;
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  if (unaff_EBX == 0) {
    if ((in_ECX & 0x7fffffff) == 0) {
      uVar4 = FUN_0060eb4b();
      return uVar4;
    }
    in_ECX = in_ECX & 0x7fffffff | (uint)CARRY4(in_ECX,in_ECX) << 0x1f;
  }
  if (in_EAX == 0) {
    if ((in_EDX & 0x7fffffff) == 0) {
      return 0;
    }
    in_EDX = in_EDX & 0x7fffffff | (uint)CARRY4(in_EDX,in_EDX) << 0x1f;
  }
  if (BYTE_00684acd == 0) {
    uVar21 = (ushort)((int)in_ECX >> 0x14) & 0x7ff;
    uVar15 = (int)in_EDX >> 0x14 & 0x7ff;
    uVar9 = in_EDX & 0xfffff;
    uVar11 = in_ECX & 0xfffff;
    uVar16 = (ushort)uVar15;
    if (uVar16 == 0) {
      do {
        bVar23 = CARRY4(in_EAX,in_EAX);
        in_EAX = in_EAX * 2;
        uVar9 = uVar9 * 2 + (uint)bVar23;
        uVar16 = (ushort)uVar15;
        uVar16 = uVar16 - 1;
        uVar15 = (uint)uVar16;
      } while ((uVar9 & 0x100000) == 0);
    }
    else {
      uVar9 = uVar9 | 0x100000;
    }
    uVar7 = 0;
    if (uVar21 == 0) {
      do {
        bVar19 = CARRY4(unaff_EBX,unaff_EBX);
        unaff_EBX = unaff_EBX * 2;
        uVar11 = uVar11 * 2 + (uint)bVar19;
        uVar7 = uVar7 - 1;
      } while ((uVar11 & 0x100000) == 0);
    }
    else {
      uVar11 = uVar11 | 0x100000;
      uVar7 = uVar21;
    }
    uVar17 = (uVar16 - uVar7) + 0x3ff;
    if ((-1 < (short)uVar17) && (0x7fe < uVar17)) {
      uVar15 = FUN_0060eb57();
      return uVar15;
    }
    if (-0x35 < (short)uVar17) {
      uVar10 = uVar9 << 0xb | in_EAX >> 0x15;
      uVar15 = in_EAX * 0x800;
      uVar12 = uVar11 << 0xb | unaff_EBX >> 0x15;
      uVar18 = unaff_EBX * 0x800;
      bVar23 = uVar12 <= uVar10;
      uVar19 = uVar10;
      if (bVar23) {
        uVar19 = uVar10 - uVar12;
      }
      uVar1 = CONCAT44(uVar19,uVar15) / (ulonglong)uVar12;
      local_20 = (uint)uVar1;
      uVar2 = (ulonglong)uVar18 * (uVar1 & 0xffffffff);
      iVar5 = (int)uVar2;
      lVar3 = (ulonglong)uVar12 * (uVar1 & 0xffffffff) + (uVar2 >> 0x20);
      if (bVar23) {
        lVar3 = lVar3 + CONCAT44(uVar12,uVar18);
      }
      uVar8 = -iVar5;
      uVar19 = uVar15 - (uint)lVar3;
      uVar13 = uVar19 - (iVar5 != 0);
      for (iVar22 = (uVar10 - (int)((ulonglong)lVar3 >> 0x20)) -
                    (uint)(uVar15 < (uint)lVar3 || uVar19 < (iVar5 != 0)); iVar22 != 0;
          iVar22 = iVar22 + (uint)bVar21) {
        bVar20 = local_20 == 0;
        local_20 = local_20 - 1;
        bVar23 = (bool)(bVar23 ^ bVar20);
        bVar24 = CARRY4(uVar8,uVar18);
        uVar8 = uVar8 + uVar18;
        bVar21 = CARRY4(uVar13,uVar12);
        bVar21 = bVar21 || CARRY4(uVar13 + uVar12,(uint)bVar24);
        uVar13 = uVar13 + uVar12 + (uint)bVar24;
      }
      if (uVar12 <= uVar13) {
        uVar13 = uVar13 - uVar12;
        bVar24 = 0xfffffffe < local_20;
        local_20 = local_20 + 1;
        bVar23 = (bool)(bVar23 ^ bVar24);
      }
      uVar3 = CONCAT44(uVar13,uVar8) / (ulonglong)uVar12;
      local_24 = (uint)uVar3;
      if (local_24 != 0) {
        uVar5 = (ulonglong)uVar18 * (uVar3 & 0xffffffff);
        iVar22 = (int)uVar5;
        lVar6 = (ulonglong)uVar12 * (uVar3 & 0xffffffff) + (uVar5 >> 0x20);
        uVar6 = (uint)lVar6;
        uVar19 = -iVar22;
        uVar15 = (uint)(iVar22 != 0);
        uVar14 = (uVar8 - uVar6) - uVar15;
        for (iVar22 = (uVar13 - (int)((ulonglong)lVar6 >> 0x20)) -
                      (uint)(uVar8 < uVar6 || uVar8 - uVar6 < uVar15); iVar22 != 0;
            iVar22 = iVar22 + (uint)(bVar25 || CARRY4(uVar15,(uint)bVar24))) {
          bVar25 = local_24 == 0;
          local_24 = local_24 - 1;
          bVar24 = local_20 < bVar25;
          local_20 = local_20 - bVar25;
          bVar23 = (bool)(bVar23 ^ bVar24);
          bVar24 = CARRY4(uVar19,uVar18);
          uVar19 = uVar19 + uVar18;
          bVar25 = CARRY4(uVar14,uVar12);
          uVar15 = uVar14 + uVar12;
          uVar14 = uVar15 + bVar24;
        }
      }
      uVar21 = (uVar16 - uVar7) + 0x3fe;
      if (bVar23) {
        uVar15 = local_20 & 1;
        local_20 = local_20 >> 1 | 0x80000000;
        local_24 = local_24 >> 1 | (uint)(uVar15 != 0) << 0x1f;
        uVar21 = uVar17;
      }
      uVar18 = local_24 >> 0xb | local_20 << 0x15;
      uVar15 = (uint)((local_24 >> 10 & 1) != 0) << 0x1f;
      uVar20 = local_20 >> 0xb | 0xfff00000;
      uVar15 = (uint)CARRY4(uVar15,uVar15);
      uVar19 = uVar18 + uVar15;
      uVar15 = (uint)CARRY4(uVar18,uVar15);
      sVar18 = uVar21 + CARRY4(uVar20,uVar15);
      if (sVar18 < 1) {
        if (sVar18 == 0) {
          bVar15 = 1;
        }
        else {
          bVar15 = -(char)sVar18;
        }
        uVar19 = uVar19 >> (bVar15 & 0x1f) | (uVar20 + uVar15 & 0x1fffff) << 0x20 - (bVar15 & 0x1f);
      }
      return uVar19;
    }
    uVar15 = FUN_0060eb3a();
    return uVar15;
  }
  if ((g_UseSoftwareMath & 1) == 0) {
    fVar22 = (float10)__BITCAST_DOUBLE(CONCAT44(in_EDX,in_EAX)) / (float10)__BITCAST_DOUBLE(CONCAT44(in_ECX,unaff_EBX));
  }
  else {
    fVar22 = pentiumFdivBugWorkaroundDouble
                       ((float10)__BITCAST_DOUBLE(CONCAT44(in_EDX,in_EAX)),__BITCAST_DOUBLE(CONCAT44(in_ECX,unaff_EBX)))
    ;
  }
  uVar15 = SUB84(__BITCAST_UINT64((double)fVar22),0);
  if ((int)((ulonglong)(double)fVar22 >> 0x20) == -0x80000000) {
    uVar15 = 0;
  }
  return uVar15;
}
