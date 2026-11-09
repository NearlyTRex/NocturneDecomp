// Name: core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00416700
// Address: 00416700
// Address Range: [[00416700, 00416d6a]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_00416700(CBodyPart *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_00416700(CBodyPart *this_ptr)

{
  byte *puVar1;
  uint *puVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  float *pfVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  int *extraout_EDX;
  int iVar12;
  int iVar13;
  int iVar14;
  byte bVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float afStackY_1088 [24];
  byte *apuStackY_1028 [981];
  float local_a0;
  float afStack_9c [4];
  float local_8c;
  uint local_88;
  int local_7c;
  int local_78;
  int local_74;
  uint local_70;
  float local_6c [5];
  int local_58;
  int local_54;
  int local_50;
  float local_4c;
  float local_48;
  float local_44;
  uint local_40;
  byte *local_3c [4];
  byte *local_2c;
  int local_28;
  int local_24;
  int local_20;
  uint *local_1c;
  float local_18;
  int local_14;
  
  bVar15 = 0;
  if ((2 < *(int *)&this_ptr->field_0x2d0) && (0 < *(int *)&this_ptr->field_0x2dc)) {
    core_bodypart_cpp_FUN_00417270(this_ptr,(CVector3i *)&local_58,(CVector3i *)&local_7c);
    local_14 = -((local_54 + local_78) / 2);
    iVar14 = -((local_58 + local_7c) / 2);
    iVar11 = 0;
    iVar12 = -((local_50 + local_74) / 2);
    if (0 < *(int *)&this_ptr->field_0x2d0) {
      iVar13 = 0;
      do {
        iVar3 = *(int *)&this_ptr->field_0x2d4;
        *(int *)(iVar13 + iVar3) = *(int *)(iVar13 + iVar3) + iVar14;
        piVar9 = (int *)(iVar13 + 4 + iVar3);
        *piVar9 = *piVar9 + local_14;
        piVar9 = (int *)(iVar13 + 8 + iVar3);
        *piVar9 = *piVar9 + iVar12;
        iVar11 = iVar11 + 1;
        iVar13 = iVar13 + 0xc;
      } while (iVar11 < *(int *)&this_ptr->field_0x2d0);
    }
    local_58 = local_58 + iVar14;
    local_54 = local_54 + local_14;
    local_50 = local_50 + iVar12;
    local_7c = local_7c + iVar14;
    local_78 = local_78 + local_14;
    local_74 = local_74 + iVar12;
    fVar7 = (float)_DAT_005cbf5a;
    *(float *)&this_ptr->field_0x2b8 = (float)local_58 * fVar7;
    *(float *)&this_ptr->field_0x2bc = (float)local_54 * fVar7;
    *(float *)&this_ptr->field_0x2c0 = (float)local_50 * fVar7;
    *(float *)&this_ptr->field_0x2c4 = (float)local_7c * fVar7;
    local_4c = (float)iVar14 * fVar7;
    *(float *)&this_ptr->field_0x2c8 = (float)local_78 * fVar7;
    local_44 = (float)iVar12 * fVar7;
    local_48 = (float)local_14 * fVar7;
    *(float *)&this_ptr->field_0x2cc = (float)local_74 * fVar7;
    local_18 = local_44;
    core_actor_cpp_FUN_00408cf0(this_ptr,&local_4c);
    afStack_9c[2] = local_a0;
    afStack_9c[(uint)bVar15 * -2 + 3] = afStack_9c[(uint)bVar15 * -2];
    afStack_9c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4] =
         afStack_9c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
    *(float *)&this_ptr->field_0x20 = *(float *)&this_ptr->field_0x20 - afStack_9c[2];
    *(float *)&this_ptr->field_0x24 = *(float *)&this_ptr->field_0x24 - afStack_9c[3];
    *(float *)&this_ptr->field_0x28 = *(float *)&this_ptr->field_0x28 - local_8c;
    iVar11 = 0;
    if (0 < *(int *)&this_ptr->field_0x3e8) {
      pfVar8 = (float *)&this_ptr->field_0x3ec;
      do {
        *pfVar8 = *pfVar8 + local_4c;
        pfVar8[1] = pfVar8[1] + local_48;
        iVar11 = iVar11 + 1;
        pfVar8[2] = pfVar8[2] + local_44;
        pfVar8 = pfVar8 + 0x65;
      } while (iVar11 < *(int *)&this_ptr->field_0x3e8);
    }
    local_20 = 0;
    if (0 < *(int *)&this_ptr->field_0x8a8) {
      local_2c = &this_ptr->field_0x8ac;
      local_1c = (uint *)&this_ptr->field_0x8d8;
      do {
        pfVar8 = (float *)(local_2c + local_20 * 0x40c);
        *pfVar8 = *pfVar8 + local_4c;
        pfVar8[1] = pfVar8[1] + local_48;
        pfVar8[2] = pfVar8[2] + local_44;
        core_actor_cpp_FUN_00408d70(this_ptr,pfVar8);
        local_40 = local_6c[2];
        local_3c[(uint)bVar15 * -2] = (byte *)local_6c[(uint)bVar15 * -2 + 3];
        local_3c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
             (byte *)local_6c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
        *local_1c = local_40;
        local_1c[1] = local_3c[0];
        puVar2 = local_1c + 0x103;
        local_1c[2] = local_3c[1];
        local_20 = local_20 + 1;
        local_1c = puVar2;
      } while (local_20 < *(int *)&this_ptr->field_0x8a8);
    }
    memset
              (*(void **)&this_ptr->field_0x2d8,0,*(int *)&this_ptr->field_0x2d0 * 0xc);
    local_24 = 0;
    if (0 < *(int *)&this_ptr->field_0x2dc) {
      local_28 = 0;
      do {
        iVar12 = *(int *)&this_ptr->field_0x2e0 + local_28;
        *(uint *)(iVar12 + 4) = 3;
        iVar14 = 0;
        engine_keyframe_c_calculateSurfaceNormal_FUN_004df5f0
                  (*(uint *)&this_ptr->field_0x2d4,iVar12);
        iVar11 = iVar12;
        if (0 < *(int *)(iVar12 + 4)) {
          do {
            piVar9 = (int *)(*(int *)&this_ptr->field_0x2d8 + *(int *)(iVar11 + 0x18) * 0xc);
            *piVar9 = *piVar9 + *(int *)(iVar12 + 8);
            piVar9[1] = piVar9[1] + *(int *)(iVar12 + 0xc);
            piVar9[2] = piVar9[2] + *(int *)(iVar12 + 0x10);
            iVar14 = iVar14 + 1;
            iVar11 = iVar11 + 0xc;
          } while (iVar14 < *(int *)(iVar12 + 4));
        }
        local_28 = local_28 + 0x3c;
        local_24 = local_24 + 1;
      } while (local_24 < *(int *)&this_ptr->field_0x2dc);
    }
    iVar11 = 0;
    if (0 < *(int *)&this_ptr->field_0x2d0) {
      iVar12 = 0;
      do {
        piVar9 = (int *)(*(int *)&this_ptr->field_0x2d8 + iVar12);
        dVar4 = (double)*piVar9;
        dVar6 = (double)piVar9[1];
        dVar5 = (double)piVar9[2];
        dVar4 = SQRT(dVar5 * dVar5 + dVar6 * dVar6 + dVar4 * dVar4);
        if (dVar4 <= 0.0) {
          piVar9[2] = 0;
          piVar9[1] = piVar9[2];
          *piVar9 = piVar9[2];
        }
        else {
          fVar16 = (float10)_DAT_005cbf62 / (float10)dVar4;
          fVar17 = (float10)*piVar9 * fVar16;
          fVar18 = (float10)piVar9[1] * fVar16;
          fVar16 = (float10)piVar9[2] * fVar16;
          round();
          round();
          round();
          *extraout_EDX = (int)ROUND(fVar17);
          extraout_EDX[1] = (int)ROUND(fVar18);
          extraout_EDX[2] = (int)ROUND(fVar16);
        }
        iVar11 = iVar11 + 1;
        iVar12 = iVar12 + 0xc;
      } while (iVar11 < *(int *)&this_ptr->field_0x2d0);
    }
    core_bodypart_cpp_FUN_004178c0(this_ptr);
    if (&this_ptr->field_0x1120 != &this_ptr->field_0x3dc) {
      *(uint *)&this_ptr->field_0x1120 = *(uint *)&this_ptr->field_0x3dc;
      *(uint *)&this_ptr->field_0x1124 = *(uint *)&this_ptr->field_0x3e0;
      *(uint *)&this_ptr->field_0x1128 = *(uint *)&this_ptr->field_0x3e4;
    }
    core_dirmat_cpp_FUN_004495a0(&this_ptr->field_0x10f8,&this_ptr->field_0x3dc);
    local_70 = local_88;
    local_6c[(uint)bVar15 * -2] = afStack_9c[(uint)bVar15 * -2 + 6];
    local_6c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
         afStack_9c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7];
    if ((uint *)&this_ptr->field_0x112c != &local_70) {
      *(uint *)&this_ptr->field_0x112c = local_70;
      *(float *)&this_ptr->field_0x1130 = local_6c[0];
      *(float *)&this_ptr->field_0x1134 = local_6c[1];
    }
    local_14 = core_actor_cpp_FUN_0040cf60(0xc0490fdb,0x40490fdb);
    *(int *)&this_ptr->field_0x1150 = local_14;
    local_14 = core_actor_cpp_FUN_0040cf60(0xc0490fdb,0x40490fdb);
    *(int *)&this_ptr->field_0x1158 = local_14;
    uVar10 = core_actor_cpp_FUN_0040cf60(0xc116cbe4,0x4116cbe4);
    *(uint *)&this_ptr->field_0x1154 = uVar10;
    return;
  }
  *(uint *)&this_ptr->field_0x70 = 2;
  core_bodypart_cpp_FUN_00415890(this_ptr,0,0);
  puVar1 = &this_ptr->field_0x2c4;
  if (puVar1 != &DAT_0265370c) {
    *(uint *)puVar1 = _DAT_0265370c;
    *(uint *)&this_ptr->field_0x2c8 = _DAT_02653710;
    *(uint *)&this_ptr->field_0x2cc = _DAT_02653714;
  }
  if (&this_ptr->field_0x2b8 != puVar1) {
    *(uint *)&this_ptr->field_0x2b8 = *(uint *)puVar1;
    *(uint *)&this_ptr->field_0x2bc = *(uint *)&this_ptr->field_0x2c8;
    *(uint *)&this_ptr->field_0x2c0 = *(uint *)&this_ptr->field_0x2cc;
  }
  return;
}
