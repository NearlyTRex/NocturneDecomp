// Name: crt_unknown.c_FUN_0060dcf6
// Address: 0060dcf6
// Address Range: [[0060dcf6, 0060defb]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_0060dcf6()

#include "nocturne.h"

uint crt_unknown_c_FUN_0060dcf6(uint param_1,uint param_2,uint unaff_EBX,uint param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  byte bVar13;
  short sVar14;
  ushort uVar15;
  ushort uVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  float10 fVar20;
  uint local_24;
  uint local_20;
  
  if (unaff_EBX == 0) {
    if ((param_4 & 0x7fffffff) == 0) {
      uVar4 = crt_unknown_c_FUN_0060eb4b();
      return uVar4;
    }
    param_4 = param_4 & 0x7fffffff | (uint)CARRY4(param_4,param_4) << 0x1f;
  }
  if (param_1 == 0) {
    if ((param_2 & 0x7fffffff) == 0) {
      return 0;
    }
    param_2 = param_2 & 0x7fffffff | (uint)CARRY4(param_2,param_2) << 0x1f;
  }
  if (BYTE_00684acd == 0) {
    uVar4 = (int)param_2 >> 0x14 & 0x7ff;
    uVar7 = (int)param_4 >> 0x14 & 0x800007ff;
    param_2 = param_2 & 0xfffff;
    uVar10 = param_4 & 0xfffff;
    uVar15 = (ushort)uVar4;
    if (uVar15 == 0) {
      do {
        bVar17 = CARRY4(param_1,param_1);
        param_1 = param_1 * 2;
        param_2 = param_2 * 2 + (uint)bVar17;
        uVar15 = (short)uVar4 - 1;
        uVar4 = (uint)uVar15;
      } while ((param_2 & 0x100000) == 0);
    }
    else {
      param_2 = param_2 | 0x100000;
    }
    if (((ushort)((int)param_4 >> 0x14) & 0x7ff) == 0) {
      do {
        bVar17 = CARRY4(unaff_EBX,unaff_EBX);
        unaff_EBX = unaff_EBX * 2;
        uVar10 = uVar10 * 2 + (uint)bVar17;
        uVar7 = CONCAT22((short)(uVar7 >> 0x10),(short)uVar7 + -1);
      } while ((uVar10 & 0x100000) == 0);
    }
    else {
      uVar10 = uVar10 | 0x100000;
    }
    sVar14 = uVar15 - (short)uVar7;
    uVar15 = sVar14 + 0x3ff;
    if ((-1 < (short)uVar15) && (0x7fe < uVar15)) {
      uVar4 = crt_unknown_c_FUN_0060eb57(uVar7);
      return uVar4;
    }
    if (-0x35 < (short)uVar15) {
      uVar7 = param_2 << 0xb | param_1 >> 0x15;
      param_1 = param_1 * 0x800;
      uVar10 = uVar10 << 0xb | unaff_EBX >> 0x15;
      unaff_EBX = unaff_EBX * 0x800;
      bVar17 = uVar10 <= uVar7;
      uVar4 = uVar7;
      if (bVar17) {
        uVar4 = uVar7 - uVar10;
      }
      uVar1 = CONCAT44(uVar4,param_1) / (ulonglong)uVar10;
      local_20 = (uint)uVar1;
      uVar2 = (ulonglong)unaff_EBX * (uVar1 & 0xffffffff);
      iVar5 = (int)uVar2;
      lVar3 = (ulonglong)uVar10 * (uVar1 & 0xffffffff) + (uVar2 >> 0x20);
      if (bVar17) {
        lVar3 = lVar3 + CONCAT44(uVar10,unaff_EBX);
      }
      uVar8 = -iVar5;
      uVar4 = (uint)(iVar5 != 0);
      uVar9 = param_1 - (uint)lVar3;
      uVar11 = uVar9 - uVar4;
      for (iVar5 = (uVar7 - (int)((ulonglong)lVar3 >> 0x20)) -
                   (uint)(param_1 < (uint)lVar3 || uVar9 < uVar4); iVar5 != 0;
          iVar5 = iVar5 + (uint)(bVar19 || CARRY4(uVar4,(uint)bVar18))) {
        bVar18 = local_20 == 0;
        local_20 = local_20 - 1;
        bVar17 = (bool)(bVar17 ^ bVar18);
        bVar18 = CARRY4(uVar8,unaff_EBX);
        uVar8 = uVar8 + unaff_EBX;
        bVar19 = CARRY4(uVar11,uVar10);
        uVar4 = uVar11 + uVar10;
        uVar11 = uVar4 + bVar18;
      }
      if (uVar10 <= uVar11) {
        uVar11 = uVar11 - uVar10;
        bVar18 = 0xfffffffe < local_20;
        local_20 = local_20 + 1;
        bVar17 = (bool)(bVar17 ^ bVar18);
      }
      uVar1 = CONCAT44(uVar11,uVar8) / (ulonglong)uVar10;
      local_24 = (uint)uVar1;
      if (local_24 != 0) {
        uVar2 = (ulonglong)unaff_EBX * (uVar1 & 0xffffffff);
        iVar5 = (int)uVar2;
        lVar3 = (ulonglong)uVar10 * (uVar1 & 0xffffffff) + (uVar2 >> 0x20);
        uVar6 = (uint)lVar3;
        uVar9 = -iVar5;
        uVar4 = (uint)(iVar5 != 0);
        uVar7 = uVar8 - uVar6;
        uVar12 = uVar7 - uVar4;
        for (iVar5 = (uVar11 - (int)((ulonglong)lVar3 >> 0x20)) -
                     (uint)(uVar8 < uVar6 || uVar7 < uVar4); iVar5 != 0;
            iVar5 = iVar5 + (uint)(bVar19 || CARRY4(uVar4,(uint)bVar18))) {
          bVar19 = local_24 == 0;
          local_24 = local_24 - 1;
          bVar18 = local_20 < bVar19;
          local_20 = local_20 - bVar19;
          bVar17 = (bool)(bVar17 ^ bVar18);
          bVar18 = CARRY4(uVar9,unaff_EBX);
          uVar9 = uVar9 + unaff_EBX;
          bVar19 = CARRY4(uVar12,uVar10);
          uVar4 = uVar12 + uVar10;
          uVar12 = uVar4 + bVar18;
        }
      }
      uVar16 = sVar14 + 0x3fe;
      if (bVar17) {
        uVar4 = local_20 & 1;
        local_20 = local_20 >> 1 | 0x80000000;
        local_24 = local_24 >> 1 | (uint)(uVar4 != 0) << 0x1f;
        uVar16 = uVar15;
      }
      uVar7 = local_24 >> 0xb | local_20 << 0x15;
      uVar4 = (uint)((local_24 >> 10 & 1) != 0) << 0x1f;
      uVar9 = local_20 >> 0xb | 0xfff00000;
      uVar4 = (uint)CARRY4(uVar4,uVar4);
      uVar10 = uVar7 + uVar4;
      uVar4 = (uint)CARRY4(uVar7,uVar4);
      sVar14 = uVar16 + CARRY4(uVar9,uVar4);
      if (sVar14 < 1) {
        if (sVar14 == 0) {
          bVar13 = 1;
        }
        else {
          bVar13 = -(char)sVar14;
        }
        uVar10 = uVar10 >> (bVar13 & 0x1f) | (uVar9 + uVar4 & 0x1fffff) << 0x20 - (bVar13 & 0x1f);
      }
      return uVar10;
    }
    uVar4 = crt_unknown_c_FUN_0060eb3a();
    return uVar4;
  }
  if ((g_UseSoftwareMath & 1) == 0) {
    fVar20 = (float10)(double)CONCAT44(param_2,param_1) /
             (float10)(double)CONCAT44(param_4,unaff_EBX);
  }
  else {
    fVar20 = crt_math_c_pentiumFdivBugWorkaroundDouble_FUN_00606f98
                       ((float10)(double)CONCAT44(param_2,param_1),
                        (double)CONCAT44(param_4,unaff_EBX));
  }
  uVar4 = SUB84((double)fVar20,0);
  if ((int)((ulonglong)(double)fVar20 >> 0x20) == -0x80000000) {
    uVar4 = 0;
  }
  return uVar4;
}
