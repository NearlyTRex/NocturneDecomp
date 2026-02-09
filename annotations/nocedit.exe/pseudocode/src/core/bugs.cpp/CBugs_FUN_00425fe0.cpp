// Name: core_bugs.cpp_CBugs_FUN_00425fe0
// Address: 00425fe0
// Address Range: [[00425fe0, 00426400]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_CBugs_FUN_00425fe0(CBugs *this_ptr)

#include "nocturne.h"

void __cdecl core_bugs_cpp_CBugs_FUN_00425fe0(CBugs *this_ptr)

{
  CLocation *dest_position;
  CDemonActor *actor_ptr;
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  uint class_name_hash;
  int iVar2;
  CCharacter *this_ptr_01;
  CPathMap *this_ptr_02;
  CPathMap *extraout_EAX;
  CBugs *pCVar3;
  CMatrix3x4f *pCVar4;
  float *pfVar5;
  int *piVar6;
  byte bVar7;
  float in_stack_00000008;
  SDamageInfo SStack_188;
  CMatrix3x4f CStack_14c;
  CMatrix3x4f local_11c;
  CMatrix3x4f CStack_ec;
  CMatrix3x3f CStack_bc;
  CVector3f CStack_94;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  CVector3f CStack_7c;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  CVector3f CStack_64;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float local_4c;
  float local_48;
  float local_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float *pfStack_1c;
  float *local_18;
  
  bVar7 = 0;
  if (*(int *)(this_ptr->unk3 + 0x830) == 0) {
    this_ptr->unk = 0;
    return;
  }
  iVar2 = 0;
  pfVar5 = (float *)0x0;
  pCVar3 = this_ptr;
  if (0 < this_ptr->count) {
    do {
      if (-1 < *(int *)(pCVar3->bugs[0].unk + 0x2c)) {
        pfVar5 = (float *)((int)pfVar5 + 1);
      }
      iVar2 = iVar2 + 1;
      pCVar3 = (CBugs *)&(pCVar3->base).base.base.orient_matrix.m[0].y;
    } while (iVar2 < this_ptr->count);
  }
  if ((int)pfVar5 < this_ptr->count) {
    iVar2 = *(int *)(this_ptr->unk3 + 0x830);
    local_4c = (this_ptr->base).base.base.location.position.x - *(float *)(iVar2 + 0x20);
    local_48 = (this_ptr->base).base.base.location.position.y - *(float *)(iVar2 + 0x24);
    local_44 = (this_ptr->base).base.base.location.position.z - *(float *)(iVar2 + 0x28);
    if ((((float)2 < ABS(local_48)) || ((float)2 < ABS(local_4c))) ||
       ((float)2 < ABS(local_44))) {
      this_ptr_02 = (CPathMap *)
                    (**(code **)(*(int *)(*(int *)(this_ptr->unk3 + 0x830) + 0x154) + 0xbc))();
      if (this_ptr_02 == (CPathMap *)0x0) {
        core_path_cpp_FUN_00548500();
        this_ptr_02 = extraout_EAX;
      }
      dest_position = &(this_ptr->base).base.base.location;
      iVar2 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00547d00
                        (this_ptr_02,&dest_position->position,&CStack_64,
                         (this_ptr->base).base.base.unk1);
      if (iVar2 != 0) {
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&CStack_bc,&CStack_64);
        CStack_94.z = 2.0f * in_stack_00000008;
        CStack_94.x = 0.0;
        CStack_94.y = 0.0;
        pfStack_1c = (float *)CStack_94.z;
        core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0(&CStack_bc,&CStack_7c,&CStack_94);
        fStack_40 = (dest_position->position).x;
        pfStack_1c = &(this_ptr->base).base.base.location.position.y;
        fStack_3c = *pfStack_1c;
        local_18 = &(this_ptr->base).base.base.location.position.z;
        fStack_38 = *local_18;
        core_charactr_cpp_CCharacter_FUN_00428f40((CCharacter *)this_ptr);
        fStack_70 = (dest_position->position).x;
        fStack_6c = *pfStack_1c;
        fStack_68 = *local_18;
        (dest_position->position).x = fStack_40;
        (this_ptr->base).base.base.location.position.y = fStack_3c;
        (this_ptr->base).base.base.location.position.z = fStack_38;
        core_bugs_cpp_CBugs_FUN_004276c0(this_ptr);
      }
      core_bugs_cpp_CBugs_FUN_004257f0(this_ptr);
    }
    else {
      core_bugs_cpp_CBugs_FUN_004257f0(this_ptr);
    }
  }
  if ((0 < (int)pfVar5) &&
     (fVar1 = *(float *)(this_ptr->unk5 + 0x28) - in_stack_00000008,
     *(float *)(this_ptr->unk5 + 0x28) = fVar1, class_name_hash = g_CCharacterClassInfo.name_hash,
     fVar1 <= 0.0)) {
    actor_ptr = *(CDemonActor **)(this_ptr->unk3 + 0x830);
    this_ptr->unk5[0x28] = -0x33;
    this_ptr->unk5[0x29] = -0x34;
    this_ptr->unk5[0x2a] = 'L';
    this_ptr->unk5[0x2b] = '>';
    this_ptr_01 = (CCharacter *)
                  core_actor_cpp_castToClassHash_FUN_0040c790(actor_ptr,class_name_hash);
    if (this_ptr_01 != (CCharacter *)0x0) {
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&SStack_188);
      SStack_188.damage_amount = (float)(int)pfVar5 * (float)0.050000000000000003;
      SStack_188.attacker = (CDemonActor *)this_ptr;
      SStack_188.wielder = (CDemonActor *)this_ptr;
      local_18 = pfVar5;
      (*(((this_ptr_01->base).vtable._uc)->_uc).processDamage)(this_ptr_01,&SStack_188);
    }
  }
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
            (&local_11c,(CVector3f *)(*(int *)(this_ptr->unk3 + 0x830) + 0x20),
             (CVector3f *)(*(int *)(this_ptr->unk3 + 0x830) + 0x30));
  core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
            (&CStack_14c,&(this_ptr->base).base.base.location.position,
             (CVector3f *)&(this_ptr->base).base.base.orient);
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_11c,&CStack_14c,&CStack_ec);
  pCVar4 = &CStack_ec;
  piVar6 = (this_ptr->model).part_visibility_flags + 1;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar6 = (int)pCVar4->m[0].w;
    pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar7 * -2 + 1) * 4);
    piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
  }
  this_ptr_00 = (CDeformableModelInstance *)(this_ptr->model).part_visibility_flags[0];
  iVar2 = (this_ptr->model).part_visibility_flags[0xd];
  if (iVar2 != this_ptr_00->cached_skinned_lod_index) {
    core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0(this_ptr_00,iVar2);
  }
  iVar2 = 0;
  if (0 < this_ptr->count) {
    do {
      iVar2 = iVar2 + 1;
      core_bugs_cpp_CBugs_FUN_004268e0(this_ptr);
    } while (iVar2 < this_ptr->count);
  }
  core_bugs_cpp_CBugs_FUN_004272f0(this_ptr);
  fStack_58 = *(float *)this_ptr->unk5 + *(float *)(this_ptr->unk5 + 0xc);
  fStack_54 = *(float *)(this_ptr->unk5 + 4) + *(float *)(this_ptr->unk5 + 0x10);
  fStack_88 = fStack_58 * 0.5f;
  fStack_50 = *(float *)(this_ptr->unk5 + 8) + *(float *)(this_ptr->unk5 + 0x14);
  fStack_84 = fStack_54 * 0.5f;
  fStack_80 = fStack_50 * 0.5f;
  fStack_34 = (this_ptr->base).base.base.location.position.x + fStack_88;
  fStack_30 = (this_ptr->base).base.base.location.position.y + fStack_84;
  fStack_2c = (this_ptr->base).base.base.location.position.z + fStack_80;
  core_bugs_cpp_CBugs_FUN_004276c0(this_ptr);
  return;
}
