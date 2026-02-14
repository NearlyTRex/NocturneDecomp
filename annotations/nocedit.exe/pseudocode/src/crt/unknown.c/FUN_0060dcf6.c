// Name: crt_unknown.c_FUN_0060dcf6
// Address: 0060dcf6
// Address Range: [[0060dcf6, 0060defb]]
// Convention: unknown
// Signature: uint crt_unknown_c_FUN_0060dcf6(void)

#include "nocturne.h"

uint FUN_0060dcf6(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint in_EAX;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ushort uVar7;
  uint in_ECX;
  uint uVar8;
  uint in_EDX;
  uint uVar9;
  uint uVar10;
  uint unaff_EBX;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  byte bVar15;
  ushort uVar16;
  ushort uVar17;
  short sVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  float10 fVar22;
  uint local_24;
  uint local_20;
  
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
    uVar17 = (ushort)((int)in_ECX >> 0x14) & 0x7ff;
    uVar4 = (int)in_EDX >> 0x14 & 0x7ff;
    uVar9 = in_EDX & 0xfffff;
    uVar11 = in_ECX & 0xfffff;
    uVar16 = (ushort)uVar4;
    if (uVar16 == 0) {
      do {
        bVar19 = CARRY4(in_EAX,in_EAX);
        in_EAX = in_EAX * 2;
        uVar9 = uVar9 * 2 + (uint)bVar19;
        uVar16 = (short)uVar4 - 1;
        uVar4 = (uint)uVar16;
      } while ((uVar9 & 0x100000) == 0);
    }
    else {
      uVar9 = uVar9 | 0x100000;
    }
    uVar7 = 0;
    if (uVar17 == 0) {
      do {
        bVar19 = CARRY4(unaff_EBX,unaff_EBX);
        unaff_EBX = unaff_EBX * 2;
        uVar11 = uVar11 * 2 + (uint)bVar19;
        uVar7 = uVar7 - 1;
      } while ((uVar11 & 0x100000) == 0);
    }
    else {
      uVar11 = uVar11 | 0x100000;
      uVar7 = uVar17;
    }
    uVar17 = (uVar16 - uVar7) + 0x3ff;
    if ((-1 < (short)uVar17) && (0x7fe < uVar17)) {
      uVar4 = FUN_0060eb57();
      return uVar4;
    }
    if (-0x35 < (short)uVar17) {
      uVar10 = uVar9 << 0xb | in_EAX >> 0x15;
      uVar4 = in_EAX * 0x800;
      uVar12 = uVar11 << 0xb | unaff_EBX >> 0x15;
      uVar9 = unaff_EBX * 0x800;
      bVar19 = uVar12 <= uVar10;
      uVar11 = uVar10;
      if (bVar19) {
        uVar11 = uVar10 - uVar12;
      }
      uVar1 = CONCAT44(uVar11,uVar4) / (ulonglong)uVar12;
      local_20 = (uint)uVar1;
      uVar2 = (ulonglong)uVar9 * (uVar1 & 0xffffffff);
      iVar5 = (int)uVar2;
      lVar3 = (ulonglong)uVar12 * (uVar1 & 0xffffffff) + (uVar2 >> 0x20);
      if (bVar19) {
        lVar3 = lVar3 + CONCAT44(uVar12,uVar9);
      }
      uVar8 = -iVar5;
      uVar11 = (uint)(iVar5 != 0);
      uVar14 = uVar4 - (uint)lVar3;
      uVar13 = uVar14 - uVar11;
      for (iVar5 = (uVar10 - (int)((ulonglong)lVar3 >> 0x20)) -
                   (uint)(uVar4 < (uint)lVar3 || uVar14 < uVar11); iVar5 != 0;
          iVar5 = iVar5 + (uint)(bVar21 || CARRY4(uVar4,(uint)bVar20))) {
        bVar20 = local_20 == 0;
        local_20 = local_20 - 1;
        bVar19 = (bool)(bVar19 ^ bVar20);
        bVar20 = CARRY4(uVar8,uVar9);
        uVar8 = uVar8 + uVar9;
        bVar21 = CARRY4(uVar13,uVar12);
        uVar4 = uVar13 + uVar12;
        uVar13 = uVar4 + bVar20;
      }
      if (uVar12 <= uVar13) {
        uVar13 = uVar13 - uVar12;
        bVar20 = 0xfffffffe < local_20;
        local_20 = local_20 + 1;
        bVar19 = (bool)(bVar19 ^ bVar20);
      }
      uVar1 = CONCAT44(uVar13,uVar8) / (ulonglong)uVar12;
      local_24 = (uint)uVar1;
      if (local_24 != 0) {
        uVar2 = (ulonglong)uVar9 * (uVar1 & 0xffffffff);
        iVar5 = (int)uVar2;
        lVar3 = (ulonglong)uVar12 * (uVar1 & 0xffffffff) + (uVar2 >> 0x20);
        uVar6 = (uint)lVar3;
        uVar10 = -iVar5;
        uVar4 = (uint)(iVar5 != 0);
        uVar11 = uVar8 - uVar6;
        uVar14 = uVar11 - uVar4;
        for (iVar5 = (uVar13 - (int)((ulonglong)lVar3 >> 0x20)) -
                     (uint)(uVar8 < uVar6 || uVar11 < uVar4); iVar5 != 0;
            iVar5 = iVar5 + (uint)(bVar21 || CARRY4(uVar4,(uint)bVar20))) {
          bVar21 = local_24 == 0;
          local_24 = local_24 - 1;
          bVar20 = local_20 < bVar21;
          local_20 = local_20 - bVar21;
          bVar19 = (bool)(bVar19 ^ bVar20);
          bVar20 = CARRY4(uVar10,uVar9);
          uVar10 = uVar10 + uVar9;
          bVar21 = CARRY4(uVar14,uVar12);
          uVar4 = uVar14 + uVar12;
          uVar14 = uVar4 + bVar20;
        }
      }
      uVar16 = (uVar16 - uVar7) + 0x3fe;
      if (bVar19) {
        uVar4 = local_20 & 1;
        local_20 = local_20 >> 1 | 0x80000000;
        local_24 = local_24 >> 1 | (uint)(uVar4 != 0) << 0x1f;
        uVar16 = uVar17;
      }
      uVar9 = local_24 >> 0xb | local_20 << 0x15;
      uVar4 = (uint)((local_24 >> 10 & 1) != 0) << 0x1f;
      uVar10 = local_20 >> 0xb | 0xfff00000;
      uVar4 = (uint)CARRY4(uVar4,uVar4);
      uVar11 = uVar9 + uVar4;
      uVar4 = (uint)CARRY4(uVar9,uVar4);
      sVar18 = uVar16 + CARRY4(uVar10,uVar4);
      if (sVar18 < 1) {
        if (sVar18 == 0) {
          bVar15 = 1;
        }
        else {
          bVar15 = -(char)sVar18;
        }
        uVar11 = uVar11 >> (bVar15 & 0x1f) | (uVar10 + uVar4 & 0x1fffff) << 0x20 - (bVar15 & 0x1f);
      }
      return uVar11;
    }
    uVar4 = FUN_0060eb3a();
    return uVar4;
  }
  if ((g_UseSoftwareMath & 1) == 0) {
    fVar22 = (float10)(double)CONCAT44(in_EDX,in_EAX) / (float10)(double)CONCAT44(in_ECX,unaff_EBX);
  }
  else {
    fVar22 = pentiumFdivBugWorkaroundDouble
                       ((float10)(double)CONCAT44(in_EDX,in_EAX),(double)CONCAT44(in_ECX,unaff_EBX))
    ;
  }
  uVar4 = SUB84((double)fVar22,0);
  if ((int)((ulonglong)(double)fVar22 >> 0x20) == -0x80000000) {
    uVar4 = 0;
  }
  return uVar4;
}
