// Name: core_bodypart.cpp_FUN_004157c0
// Address: 004157c0
// Address Range: [[004157c0, 00415e2a]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_FUN_004157c0(CBodyPart *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_bodypart_cpp_FUN_004157c0(CBodyPart *this_ptr)

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
  if ((2 < *(int *)&this_ptr->field_0x174) && (0 < *(int *)&this_ptr->field_0x180)) {
    core_bodypart_cpp_FUN_00416330(this_ptr,(CVector3i *)&local_58,(CVector3i *)&local_7c);
    local_14 = -((local_54 + local_78) / 2);
    iVar14 = -((local_58 + local_7c) / 2);
    iVar11 = 0;
    iVar12 = -((local_50 + local_74) / 2);
    if (0 < *(int *)&this_ptr->field_0x174) {
      iVar13 = 0;
      do {
        iVar3 = *(int *)&this_ptr->field_0x178;
        *(int *)(iVar13 + iVar3) = *(int *)(iVar13 + iVar3) + iVar14;
        piVar9 = (int *)(iVar13 + 4 + iVar3);
        *piVar9 = *piVar9 + local_14;
        piVar9 = (int *)(iVar13 + 8 + iVar3);
        *piVar9 = *piVar9 + iVar12;
        iVar11 = iVar11 + 1;
        iVar13 = iVar13 + 0xc;
      } while (iVar11 < *(int *)&this_ptr->field_0x174);
    }
    local_58 = local_58 + iVar14;
    local_54 = local_54 + local_14;
    local_50 = local_50 + iVar12;
    local_7c = local_7c + iVar14;
    local_78 = local_78 + local_14;
    local_74 = local_74 + iVar12;
    fVar7 = (float)_DAT_005b6c7a;
    *(float *)&this_ptr->field_0x15c = (float)local_58 * fVar7;
    *(float *)&this_ptr->field_0x160 = (float)local_54 * fVar7;
    *(float *)&this_ptr->field_0x164 = (float)local_50 * fVar7;
    *(float *)&this_ptr->field_0x168 = (float)local_7c * fVar7;
    local_4c = (float)iVar14 * fVar7;
    *(float *)&this_ptr->field_0x16c = (float)local_78 * fVar7;
    local_44 = (float)iVar12 * fVar7;
    local_48 = (float)local_14 * fVar7;
    *(float *)&this_ptr->field_0x170 = (float)local_74 * fVar7;
    local_18 = local_44;
    core_actor_cpp_FUN_00408b00(this_ptr,&local_4c);
    afStack_9c[2] = local_a0;
    afStack_9c[(uint)bVar15 * -2 + 3] = afStack_9c[(uint)bVar15 * -2];
    afStack_9c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4] =
         afStack_9c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
    *(float *)&this_ptr->field_0x20 = *(float *)&this_ptr->field_0x20 - afStack_9c[2];
    *(float *)&this_ptr->field_0x24 = *(float *)&this_ptr->field_0x24 - afStack_9c[3];
    *(float *)&this_ptr->field_0x28 = *(float *)&this_ptr->field_0x28 - local_8c;
    iVar11 = 0;
    if (0 < *(int *)&this_ptr->field_0x28c) {
      pfVar8 = (float *)&this_ptr->field_0x290;
      do {
        *pfVar8 = *pfVar8 + local_4c;
        pfVar8[1] = pfVar8[1] + local_48;
        iVar11 = iVar11 + 1;
        pfVar8[2] = pfVar8[2] + local_44;
        pfVar8 = pfVar8 + 0x65;
      } while (iVar11 < *(int *)&this_ptr->field_0x28c);
    }
    local_20 = 0;
    if (0 < *(int *)&this_ptr->field_0x74c) {
      local_2c = &this_ptr->field_0x750;
      local_1c = (uint *)&this_ptr->field_0x77c;
      do {
        pfVar8 = (float *)(local_2c + local_20 * 0x2b0);
        *pfVar8 = *pfVar8 + local_4c;
        pfVar8[1] = pfVar8[1] + local_48;
        pfVar8[2] = pfVar8[2] + local_44;
        core_actor_cpp_FUN_00408b80(this_ptr,pfVar8);
        local_40 = local_6c[2];
        local_3c[(uint)bVar15 * -2] = (byte *)local_6c[(uint)bVar15 * -2 + 3];
        local_3c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
             (byte *)local_6c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
        *local_1c = local_40;
        local_1c[1] = local_3c[0];
        puVar2 = local_1c + 0xac;
        local_1c[2] = local_3c[1];
        local_20 = local_20 + 1;
        local_1c = puVar2;
      } while (local_20 < *(int *)&this_ptr->field_0x74c);
    }
    memset
              (*(void **)&this_ptr->field_0x17c,0,*(int *)&this_ptr->field_0x174 * 0xc);
    local_24 = 0;
    if (0 < *(int *)&this_ptr->field_0x180) {
      local_28 = 0;
      do {
        iVar12 = *(int *)&this_ptr->field_0x184 + local_28;
        *(uint *)(iVar12 + 4) = 3;
        iVar14 = 0;
        engine_keyframe_c_calculateSurfaceNormal_FUN_004dece0
                  (*(uint *)&this_ptr->field_0x178,iVar12);
        iVar11 = iVar12;
        if (0 < *(int *)(iVar12 + 4)) {
          do {
            piVar9 = (int *)(*(int *)&this_ptr->field_0x17c + *(int *)(iVar11 + 0x18) * 0xc);
            *piVar9 = *piVar9 + *(int *)(iVar12 + 8);
            piVar9[1] = piVar9[1] + *(int *)(iVar12 + 0xc);
            piVar9[2] = piVar9[2] + *(int *)(iVar12 + 0x10);
            iVar14 = iVar14 + 1;
            iVar11 = iVar11 + 0xc;
          } while (iVar14 < *(int *)(iVar12 + 4));
        }
        local_28 = local_28 + 0x3c;
        local_24 = local_24 + 1;
      } while (local_24 < *(int *)&this_ptr->field_0x180);
    }
    iVar11 = 0;
    if (0 < *(int *)&this_ptr->field_0x174) {
      iVar12 = 0;
      do {
        piVar9 = (int *)(*(int *)&this_ptr->field_0x17c + iVar12);
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
          fVar16 = (float10)_DAT_005b6c82 / (float10)dVar4;
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
      } while (iVar11 < *(int *)&this_ptr->field_0x174);
    }
    core_bodypart_cpp_FUN_00416970(this_ptr);
    if (&this_ptr->field_0xd10 != &this_ptr->field_0x280) {
      *(uint *)&this_ptr->field_0xd10 = *(uint *)&this_ptr->field_0x280;
      *(uint *)&this_ptr->field_0xd14 = *(uint *)&this_ptr->field_0x284;
      *(uint *)&this_ptr->field_0xd18 = *(uint *)&this_ptr->field_0x288;
    }
    core_dirmat_cpp_FUN_0045b870(&this_ptr->field_0xce8,&this_ptr->field_0x280);
    local_70 = local_88;
    local_6c[(uint)bVar15 * -2] = afStack_9c[(uint)bVar15 * -2 + 6];
    local_6c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
         afStack_9c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7];
    if ((uint *)&this_ptr->field_0xd1c != &local_70) {
      *(uint *)&this_ptr->field_0xd1c = local_70;
      *(float *)&this_ptr->field_0xd20 = local_6c[0];
      *(float *)&this_ptr->field_0xd24 = local_6c[1];
    }
    local_14 = core_actor_cpp_FUN_0040ce40(0xc0490fdb,0x40490fdb);
    *(int *)&this_ptr->field_0xd40 = local_14;
    local_14 = core_actor_cpp_FUN_0040ce40(0xc0490fdb,0x40490fdb);
    *(int *)&this_ptr->field_0xd48 = local_14;
    uVar10 = core_actor_cpp_FUN_0040ce40(0xc116cbe4,0x4116cbe4);
    *(uint *)&this_ptr->field_0xd44 = uVar10;
    return;
  }
  *(uint *)&this_ptr->field_0x70 = 2;
  core_bodypart_cpp_FUN_00414910(this_ptr,0,0);
  puVar1 = &this_ptr->field_0x168;
  if (puVar1 != &DAT_02cfd900) {
    *(uint *)puVar1 = _DAT_02cfd900;
    *(uint *)&this_ptr->field_0x16c = _DAT_02cfd904;
    *(uint *)&this_ptr->field_0x170 = _DAT_02cfd908;
  }
  if (&this_ptr->field_0x15c != puVar1) {
    *(uint *)&this_ptr->field_0x15c = *(uint *)puVar1;
    *(uint *)&this_ptr->field_0x160 = *(uint *)&this_ptr->field_0x16c;
    *(uint *)&this_ptr->field_0x164 = *(uint *)&this_ptr->field_0x170;
  }
  return;
}
