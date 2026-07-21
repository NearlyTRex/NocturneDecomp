// Name: core_bodypart.cpp_CBodyPart_optimizeBoundingBoxRotation_FUN_00417730
// Address: 00417730
// Address Range: [[00417730, 00417abb]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_optimizeBoundingBoxRotation_FUN_00417730(int param_1)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x00417a74) */
/* WARNING: Removing unreachable block (ram,0x00417a87) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_bodypart_cpp_CBodyPart_optimizeBoundingBoxRotation_FUN_00417730(int param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  float fVar6;
  int iVar7;
  byte bVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float afStackY_1090 [1001];
  uint uStack_e0;
  uint uStack_dc;
  uint uStack_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  int local_c0;
  byte local_b8 [4];
  float local_b4;
  uint local_b0;
  uint local_ac;
  int local_a8;
  float local_a4 [2];
  int local_9c;
  float local_98;
  int iStack_94;
  int local_90;
  int local_84;
  float fStack_80;
  int iStack_7c;
  float local_78;
  uint local_74;
  uint local_70;
  int iStack_68;
  int iStack_64;
  int local_60;
  int local_5c;
  int local_58;
  float local_54;
  float local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_2c;
  uint local_18;
  
  local_44 = 0x7fffffff;
  local_48 = 0;
  bVar8 = 0;
  local_c0 = 0;
  do {
    local_18 = 0;
    local_54 = (float)local_c0 * (float)_DAT_005790ca * (float)_DAT_005790d2;
    local_50 = (float)_DAT_005790ca * 0.0 * (float)_DAT_005790d2;
    local_4c = 0;
    uStack_cc = 0x4177b7;
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0(local_b8,&local_54);
    fVar9 = (float10)round();
    local_2c = (int)ROUND(fVar9);
    fVar10 = (float10)local_a4[1];
    fVar9 = (float10)_DAT_005790da;
    fVar11 = (float10)round();
    local_2c = (int)ROUND(fVar11);
    fVar12 = (float10)local_a4[1];
    fVar11 = (float10)_DAT_005790da;
    local_60 = 0x7fffffff;
    iStack_64 = 0x7fffffff;
    iStack_68 = 0x7fffffff;
    local_78 = -1.4013e-45;
    iStack_7c = -0x7fffffff;
    fStack_80 = -1.4013e-45;
    iVar3 = *(int *)(param_1 + 0x16c);
    iVar7 = 0;
    uStack_cc = 0x417864;
    fVar13 = (float10)round();
    uStack_d0 = 0x41786b;
    fVar14 = (float10)round();
    uStack_d4 = 0x417872;
    fVar15 = (float10)round();
    uStack_d8 = 0x417879;
    fVar16 = (float10)round();
    uStack_dc = 0x417880;
    fVar17 = (float10)round();
    uStack_e0 = 0x417887;
    fVar9 = (float10)round(fVar10 * fVar9);
    fVar11 = (float10)round(fVar12 * fVar11);
    local_60 = (int)ROUND(fVar13);
    local_44 = (int)ROUND(fVar14);
    local_58 = (int)ROUND(fVar15);
    local_50 = (float)(int)ROUND(fVar16);
    local_54 = (float)(int)ROUND(fVar17);
    local_5c = (int)ROUND(fVar9);
    iStack_64 = (int)ROUND(fVar11);
    if (0 < iVar3) {
      local_40 = 0;
      do {
        piVar4 = (int *)(*(int *)(param_1 + 0x170) + local_40);
        lVar1 = (longlong)(int)ROUND(fVar14) * (longlong)piVar4[1];
        lVar2 = (longlong)(int)ROUND(fVar17) * (longlong)piVar4[2];
        iVar5 = ((uint)((longlong)local_4c * (longlong)*piVar4) >> 0x10 |
                (int)((ulonglong)((longlong)local_4c * (longlong)*piVar4) >> 0x20) << 0x10) +
                ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
                ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        lVar1 = (longlong)(int)ROUND(fVar15) * (longlong)piVar4[1];
        lVar2 = (longlong)(int)ROUND(fVar9) * (longlong)piVar4[2];
        fVar6 = (float)(((uint)((longlong)local_48 * (longlong)*piVar4) >> 0x10 |
                        (int)((ulonglong)((longlong)local_48 * (longlong)*piVar4) >> 0x20) << 0x10)
                        + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
                       ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10));
        lVar1 = (longlong)(int)ROUND(fVar13) * (longlong)*piVar4;
        lVar2 = (longlong)(int)ROUND(fVar16) * (longlong)piVar4[1];
        local_3c = ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
                   ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        lVar1 = (longlong)(int)ROUND(fVar11) * (longlong)piVar4[2];
        iVar3 = ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) + local_3c;
        if (iVar5 < local_84) {
          local_84 = iVar5;
        }
        if (local_9c < iVar5) {
          local_9c = iVar5;
        }
        if ((int)fVar6 < (int)fStack_80) {
          fStack_80 = fVar6;
        }
        if ((int)local_98 < (int)fVar6) {
          local_98 = fVar6;
        }
        if (iVar3 < iStack_7c) {
          iStack_7c = iVar3;
        }
        if (iStack_94 < iVar3) {
          iStack_94 = iVar3;
        }
        iVar7 = iVar7 + 1;
        local_40 = local_40 + 0xc;
      } while (iVar7 < *(int *)(param_1 + 0x16c));
    }
    iVar3 = local_9c - local_84;
    if (local_9c - local_84 < (int)local_98 - (int)fStack_80) {
      iVar3 = (int)local_98 - (int)fStack_80;
    }
    if (iVar3 < iStack_68) {
      local_a8 = local_84;
      local_a4[(uint)bVar8 * -2] = (&local_98)[(uint)bVar8 * -2 + 6];
      local_a4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
           (&local_98)[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
      iStack_68 = iVar3;
      local_90 = local_9c;
      (&local_98)[(uint)bVar8 * -2 + 3] = (&local_98)[(uint)bVar8 * -2];
      (&local_98)[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
           (&local_98)[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
      if (&local_b4 != &local_78) {
        local_b4 = local_78;
        local_b0 = local_74;
        local_ac = local_70;
      }
    }
    local_c0 = 0x417890;
  } while( true );
}
