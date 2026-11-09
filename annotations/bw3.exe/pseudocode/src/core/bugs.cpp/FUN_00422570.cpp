// Name: core_bugs.cpp_FUN_00422570
// Address: 00422570
// Address Range: [[00422570, 004229e2]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_FUN_00422570(CBugs *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_bugs_cpp_FUN_00422570(CBugs *this_ptr,float delta_time)

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
  float afStackY_10ac [953];
  CVector3f *velocity;
  SDamageInfo aSStack_1b8 [4];
  uint local_1b4;
  CBugs *local_184;
  CBugs *local_180;
  CMatrix3x4f aCStack_17c [48];
  byte local_14c [48];
  uint auStack_11c [12];
  CMatrix3x3f aCStack_ec [40];
  float fStack_c4;
  float afStack_c0 [2];
  CVector3f CStack_b8;
  uint uStack_ac;
  uint uStack_a8;
  float fStack_a4;
  float fStack_a0;
  float afStack_9c [2];
  CVector3f CStack_94;
  float fStack_88;
  float afStack_84 [5];
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  float local_58;
  float local_54;
  float local_50;
  CVector3f CStack_4c;
  float fStack_40;
  float afStack_3c [4];
  float local_2c;
  float fStack_28;
  float afStack_24 [3];
  uint *puStack_18;
  int local_14;
  
  bVar9 = 0;
  if (*(int *)&this_ptr->field_0x1381c == 0) {
    *(uint *)&this_ptr->field_0xd054 = 0;
    return;
  }
  iVar4 = 0;
  local_14 = 0;
  pCVar3 = this_ptr;
  if (0 < *(int *)&this_ptr->field_0xd058) {
    do {
      if (-1 < *(int *)&pCVar3->field_0xd088) {
        local_14 = local_14 + 1;
      }
      iVar4 = iVar4 + 1;
      pCVar3 = (CBugs *)&pCVar3->field_0x40;
    } while (iVar4 < *(int *)&this_ptr->field_0xd058);
  }
  if (local_14 < *(int *)&this_ptr->field_0xd058) {
    iVar4 = *(int *)&this_ptr->field_0x1381c;
    local_58 = *(float *)&this_ptr->field_0x20 - *(float *)(iVar4 + 0x20);
    local_54 = *(float *)&this_ptr->field_0x24 - *(float *)(iVar4 + 0x24);
    local_50 = *(float *)&this_ptr->field_0x28 - *(float *)(iVar4 + 0x28);
    afStack_3c[2] = local_58;
    afStack_3c[3] = local_54;
    local_2c = local_50;
    if ((((float)_DAT_005b7861 < ABS(local_54)) || ((float)_DAT_005b7861 < ABS(local_58))) ||
       ((float)_DAT_005b7861 < ABS(local_50))) {
      this_ptr_00 = (CPathMap *)
                    (**(code **)(*(int *)(*(int *)&this_ptr->field_0x1381c + 0x154) + 0xc4))
                              (*(int *)&this_ptr->field_0x1381c);
      if (this_ptr_00 == (CPathMap *)0x0) {
        this_ptr_00 = core_path_cpp_getPathMap_FUN_0050ced0
                                ((CLocation *)(*(int *)&this_ptr->field_0x1381c + 0x20));
      }
      puStack_18 = (uint *)&this_ptr->field_0x20;
      iVar4 = core_path_cpp_CPathMap_findPathWithRetry_FUN_0050c680
                        (this_ptr_00,(CVector3f *)puStack_18,&CStack_b8,
                         *(int *)&this_ptr->field_0x6c);
      if (iVar4 != 0) {
        core_dirmat_cpp_FUN_0045b550(aCStack_ec,&CStack_b8);
        fStack_a4 = _DAT_005dcbd4 * delta_time;
        uStack_ac = 0;
        uStack_a8 = 0;
        afStack_24[2] = fStack_a4;
        core_dirmat_cpp_FUN_0045b800(aCStack_ec,&uStack_ac);
        velocity = &CStack_4c;
        CStack_4c._0_4_ = CStack_94._0_4_;
        *(uint *)((int)&CStack_4c + (uint)bVar9 * -8 + 4) =
             *(uint *)((int)&CStack_94 + (uint)bVar9 * -8 + 4);
        *(uint *)((int)&CStack_4c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
             *(uint *)((int)&CStack_94 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
        pfVar6 = (float *)((int)this_ptr + (uint)bVar9 * -8 + 0x24);
        uStack_64 = *(uint *)&this_ptr->field_0x20;
        afStack_84[(uint)bVar9 * -2 + 9] = *pfVar6;
        pCVar3 = this_ptr;
        afStack_84[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10] = pfVar6[(uint)bVar9 * -2 + 1];
        core_charactr_cpp_FUN_0042c230((CCharacter *)pCVar3,velocity);
        pfVar6 = (float *)((int)this_ptr + (uint)bVar9 * -8 + 0x24);
        afStack_84[2] = *(float *)&this_ptr->field_0x20;
        afStack_84[(uint)bVar9 * -2 + 3] = *pfVar6;
        afStack_84[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] = pfVar6[(uint)bVar9 * -2 + 1];
        *puStack_18 = uStack_64;
        puStack_18[1] = uStack_60;
        puStack_18[2] = uStack_5c;
        core_bugs_cpp_FUN_00423fb0(this_ptr,afStack_84 + 2);
      }
      core_bugs_cpp_FUN_00421c90(this_ptr);
    }
    else {
      core_bugs_cpp_FUN_00421c90(this_ptr);
    }
  }
  if ((0 < local_14) &&
     (fVar1 = *(float *)&this_ptr->field_0x1be90 - delta_time,
     *(float *)&this_ptr->field_0x1be90 = fVar1, uVar2 = g_CCharacterClassInfo.name_hash,
     fVar1 <= 0.0)) {
    *(uint *)&this_ptr->field_0x1be90 = 0x3e4ccccd;
    iVar4 = core_actor_cpp_castToClassHash_FUN_0040c840
                      (*(uint *)&this_ptr->field_0x1381c,uVar2);
    if (iVar4 != 0) {
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(aSStack_1b8);
      local_184 = this_ptr;
      local_180 = this_ptr;
      local_1b4 = 0x3f800000;
      (**(code **)(*(int *)(iVar4 + 0x154) + 0x108))(iVar4,aSStack_1b8);
    }
  }
  core_xform_cpp_FUN_00583940
            (local_14c,*(int *)&this_ptr->field_0x1381c + 0x20,
             *(int *)&this_ptr->field_0x1381c + 0x30);
  core_xform_cpp_FUN_00583800
            (aCStack_17c,(CVector3f *)&this_ptr->field_0x20,(CVector3f *)&this_ptr->field_0x30);
  core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(local_14c,aCStack_17c);
  puVar5 = auStack_11c;
  puVar7 = (uint *)&this_ptr->field_0x13824;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + (uint)bVar9 * -2 + 1;
    puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
  }
  if (*(int *)&this_ptr->field_0x13854 !=
      *(int *)&(*(CDeformableModelInstance **)&this_ptr->field_0x13820)->field_0x2320) {
    core_skeleton_cpp_FUN_0054e420
              (*(CDeformableModelInstance **)&this_ptr->field_0x13820,
               *(int *)&this_ptr->field_0x13854);
  }
  iVar4 = 0;
  if (0 < *(int *)&this_ptr->field_0xd058) {
    puVar8 = &this_ptr->field_0xd05c;
    do {
      iVar4 = iVar4 + 1;
      core_bugs_cpp_FUN_00423050(this_ptr,puVar8,delta_time);
      puVar8 = puVar8 + 0x40;
    } while (iVar4 < *(int *)&this_ptr->field_0xd058);
  }
  core_bugs_cpp_FUN_00423bc0(this_ptr);
  fStack_40 = *(float *)&this_ptr->field_0x1be68 + *(float *)&this_ptr->field_0x1be74;
  afStack_3c[0] = *(float *)&this_ptr->field_0x1be6c + *(float *)&this_ptr->field_0x1be78;
  afStack_3c[1] = *(float *)&this_ptr->field_0x1be70 + *(float *)&this_ptr->field_0x1be7c;
  fStack_c4 = fStack_40;
  afStack_c0[(uint)bVar9 * -2] = afStack_3c[(uint)bVar9 * -2];
  afStack_c0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
       afStack_3c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
  fStack_28 = fStack_c4 * _DAT_005b7869;
  afStack_24[0] = afStack_c0[0] * _DAT_005b7869;
  afStack_24[1] = afStack_c0[1] * _DAT_005b7869;
  fStack_88 = fStack_c4 * _DAT_005b7869;
  afStack_84[(uint)bVar9 * -2] = afStack_24[(uint)bVar9 * -2];
  afStack_84[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
       afStack_24[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
  pfVar6 = &fStack_a0;
  fStack_70 = *(float *)&this_ptr->field_0x20 + fStack_88;
  fStack_6c = *(float *)&this_ptr->field_0x24 + afStack_84[0];
  fStack_68 = *(float *)&this_ptr->field_0x28 + afStack_84[1];
  fStack_a0 = fStack_70;
  afStack_9c[(uint)bVar9 * -2] = afStack_84[(uint)bVar9 * -2 + 6];
  afStack_9c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
       afStack_84[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
  core_bugs_cpp_FUN_00423fb0(this_ptr,pfVar6);
  return;
}
