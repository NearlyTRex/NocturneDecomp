// Name: core_bugs.cpp_FUN_004203a0
// Address: 004203a0
// Address Range: [[004203a0, 00420822]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_FUN_004203a0(CBugs *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_bugs_cpp_FUN_004203a0(CBugs *this_ptr,float delta_time)

{
  float fVar1;
  uint uVar2;
  CBugs *pCVar3;
  CPathMap *this_ptr_00;
  int iVar4;
  uint *puVar5;
  float *pfVar6;
  uint *puVar7;
  byte *puVar8;
  byte bVar9;
  float afStackY_10a8 [39];
  CVector3f *apCStackY_100c [913];
  CVector3f *velocity;
  float local_1b8;
  SDamageInfo local_1b4 [4];
  float local_1b0;
  CBugs *local_180;
  CBugs *local_17c;
  CMatrix3x4f aCStack_178 [48];
  byte local_148 [48];
  uint auStack_118 [12];
  CMatrix3x3f aCStack_e8 [40];
  float fStack_c0;
  float afStack_bc [4];
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float local_84;
  float local_80;
  float local_7c;
  float fStack_78;
  float afStack_74 [5];
  CVector3f CStack_60;
  CVector3f CStack_54;
  uint uStack_48;
  float afStack_44 [4];
  float local_34;
  CVector3f CStack_30;
  uint uStack_24;
  CVector3f *apCStack_20 [3];
  float local_14;
  
  bVar9 = 0;
  if (*(int *)&this_ptr->field_0x17734 == 0) {
    *(uint *)&this_ptr->field_0x10af8 = 0;
    return;
  }
  iVar4 = 0;
  local_1b8 = 0.0;
  pCVar3 = this_ptr;
  if (0 < *(int *)&this_ptr->field_0x10afc) {
    do {
      if (-1 < *(int *)&pCVar3->field_0x10b2c) {
        local_1b8 = (float)((int)local_1b8 + 1);
      }
      iVar4 = iVar4 + 1;
      pCVar3 = (CBugs *)&pCVar3->field_0x40;
    } while (iVar4 < *(int *)&this_ptr->field_0x10afc);
  }
  if ((int)local_1b8 < *(int *)&this_ptr->field_0x10afc) {
    iVar4 = *(int *)&this_ptr->field_0x17734;
    local_84 = *(float *)&this_ptr->field_0x20 - *(float *)(iVar4 + 0x20);
    local_80 = *(float *)&this_ptr->field_0x24 - *(float *)(iVar4 + 0x24);
    local_7c = *(float *)&this_ptr->field_0x28 - *(float *)(iVar4 + 0x28);
    afStack_44[2] = local_84;
    afStack_44[3] = local_80;
    local_34 = local_7c;
    if ((((float)_DAT_005cca31 < ABS(local_80)) || ((float)_DAT_005cca31 < ABS(local_84))) ||
       ((float)_DAT_005cca31 < ABS(local_7c))) {
      this_ptr_00 = (CPathMap *)
                    (**(code **)(*(int *)(*(int *)&this_ptr->field_0x17734 + 0x2b0) + 0xcc))
                              (*(int *)&this_ptr->field_0x17734);
      if (this_ptr_00 == (CPathMap *)0x0) {
        this_ptr_00 = core_path_cpp_getPathMap_FUN_00513ea0
                                ((CLocation *)(*(int *)&this_ptr->field_0x17734 + 0x20));
      }
      apCStack_20[2] = (CVector3f *)&this_ptr->field_0x20;
      iVar4 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00513650
                        (this_ptr_00,apCStack_20[2],&CStack_54,*(int *)&this_ptr->field_0x6c);
      if (iVar4 != 0) {
        core_dirmat_cpp_FUN_00449280(aCStack_e8,&CStack_54);
        afStack_74[4] = _DAT_005f3e34 * delta_time;
        afStack_74[2] = 0.0;
        afStack_74[3] = 0.0;
        local_14 = afStack_74[4];
        core_dirmat_cpp_FUN_00449530(aCStack_e8,afStack_74 + 2);
        velocity = &CStack_60;
        CStack_60._0_4_ = CStack_30._0_4_;
        *(uint *)((int)&CStack_60 + (uint)bVar9 * -8 + 4) =
             *(uint *)((int)&CStack_30 + (uint)bVar9 * -8 + 4);
        *(uint *)((int)&CStack_60 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
             *(uint *)((int)&CStack_30 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
        puVar5 = (uint *)((int)this_ptr + (uint)bVar9 * -8 + 0x24);
        uStack_24 = *(uint *)&this_ptr->field_0x20;
        apCStack_20[(uint)bVar9 * -2] = (CVector3f *)*puVar5;
        pCVar3 = this_ptr;
        apCStack_20[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
             (CVector3f *)puVar5[(uint)bVar9 * -2 + 1];
        core_charactr_cpp_FUN_00423a60((CCharacter *)pCVar3,velocity);
        pfVar6 = (float *)((int)this_ptr + (uint)bVar9 * -8 + 0x24);
        uStack_48 = *(uint *)&this_ptr->field_0x20;
        afStack_44[(uint)bVar9 * -2] = *pfVar6;
        afStack_44[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] = pfVar6[(uint)bVar9 * -2 + 1];
        *(uint *)apCStack_20[2] = uStack_24;
        *(CVector3f **)((int)apCStack_20[2] + 4) = apCStack_20[0];
        *(CVector3f **)((int)apCStack_20[2] + 8) = apCStack_20[1];
        core_bugs_cpp_FUN_00421dd0(this_ptr,&uStack_48);
      }
      core_bugs_cpp_CBugs_updateGroundHeightGrid_FUN_0041fad0(this_ptr);
    }
    else {
      core_bugs_cpp_CBugs_updateGroundHeightGrid_FUN_0041fad0(this_ptr);
    }
  }
  if ((0 < (int)local_1b8) &&
     (fVar1 = *(float *)&this_ptr->field_0x1e630 - delta_time,
     *(float *)&this_ptr->field_0x1e630 = fVar1, uVar2 = g_CCharacterClassInfo.name_hash,
     fVar1 <= 0.0)) {
    *(uint *)&this_ptr->field_0x1e630 = 0x3e4ccccd;
    iVar4 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                      (*(uint *)&this_ptr->field_0x17734,uVar2);
    if (iVar4 != 0) {
      core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(local_1b4);
      local_14 = local_1b8;
      local_1b0 = (float)(int)local_1b8 * (float)_DAT_005cca39;
      local_180 = this_ptr;
      local_17c = this_ptr;
      (**(code **)(*(int *)(iVar4 + 0x2b0) + 0x110))(iVar4,local_1b4);
    }
  }
  core_xform_cpp_FUN_00591c10
            (local_148,*(int *)&this_ptr->field_0x17734 + 0x20,
             *(int *)&this_ptr->field_0x17734 + 0x30);
  core_xform_cpp_FUN_00591ad0
            (aCStack_178,(CVector3f *)&this_ptr->field_0x20,(CVector3f *)&this_ptr->field_0x30);
  core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(local_148,aCStack_178);
  puVar5 = auStack_118;
  puVar7 = (uint *)&this_ptr->field_0x1773c;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + (uint)bVar9 * -2 + 1;
    puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
  }
  if (*(int *)&this_ptr->field_0x1776c !=
      *(int *)&(*(CDeformableModelInstance **)&this_ptr->field_0x17738)->field_0x2230) {
    core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005471f0
              (*(CDeformableModelInstance **)&this_ptr->field_0x17738,
               *(int *)&this_ptr->field_0x1776c);
  }
  iVar4 = 0;
  if (0 < *(int *)&this_ptr->field_0x10afc) {
    puVar8 = &this_ptr->field_0x10b00;
    do {
      iVar4 = iVar4 + 1;
      core_bugs_cpp_FUN_00420e90(this_ptr,puVar8,delta_time);
      puVar8 = puVar8 + 0x40;
    } while (iVar4 < *(int *)&this_ptr->field_0x10afc);
  }
  core_bugs_cpp_FUN_00421a00(this_ptr);
  fStack_a8 = *(float *)&this_ptr->field_0x1e608 + *(float *)&this_ptr->field_0x1e614;
  fStack_a4 = *(float *)&this_ptr->field_0x1e60c + *(float *)&this_ptr->field_0x1e618;
  fStack_a0 = *(float *)&this_ptr->field_0x1e610 + *(float *)&this_ptr->field_0x1e61c;
  afStack_bc[2] = fStack_a8;
  afStack_bc[(uint)bVar9 * -2 + 3] = afStack_bc[(uint)bVar9 * -2 + 6];
  afStack_bc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
       afStack_bc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
  fStack_9c = afStack_bc[2] * _DAT_005cca41;
  fStack_98 = afStack_bc[3] * _DAT_005cca41;
  fStack_94 = fStack_ac * _DAT_005cca41;
  fStack_c0 = afStack_bc[2] * _DAT_005cca41;
  afStack_bc[(uint)bVar9 * -2] = afStack_bc[(uint)bVar9 * -2 + 9];
  afStack_bc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
       afStack_bc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10];
  pfVar6 = &fStack_78;
  fStack_90 = *(float *)&this_ptr->field_0x20 + fStack_c0;
  fStack_8c = *(float *)&this_ptr->field_0x24 + afStack_bc[0];
  fStack_88 = *(float *)&this_ptr->field_0x28 + afStack_bc[1];
  fStack_78 = fStack_90;
  afStack_74[(uint)bVar9 * -2] = afStack_bc[(uint)bVar9 * -2 + 0xc];
  afStack_74[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
       afStack_bc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd];
  core_bugs_cpp_FUN_00421dd0(this_ptr,pfVar6);
  return;
}
