// Name: core_bugs.cpp_CBugs_FUN_00425fe0
// Address: 00425fe0
// Address Range: [[00425fe0, 00426400]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_CBugs_FUN_00425fe0(CBugs *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_bugs_cpp_CBugs_FUN_00425fe0(CBugs *this_ptr)

{
  CLocation *dest_position;
  CDemonActor *pCVar1;
  float fVar2;
  uint class_name_hash;
  int iVar3;
  CCharacter *this_ptr_00;
  CPathMap *this_ptr_01;
  CBugs *pCVar4;
  CMatrix3x4f *pCVar5;
  float *pfVar6;
  CMatrix3x4f *pCVar7;
  byte bVar8;
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
  
  bVar8 = 0;
  if (this_ptr->swarm_target == (CDemonActor *)0x0) {
    this_ptr->state = 0;
    return;
  }
  iVar3 = 0;
  pfVar6 = (float *)0x0;
  pCVar4 = this_ptr;
  if (0 < this_ptr->count) {
    do {
      if (-1 < pCVar4->bugs[0].current_vertex) {
        pfVar6 = (float *)((int)pfVar6 + 1);
      }
      iVar3 = iVar3 + 1;
      pCVar4 = (CBugs *)&(pCVar4->base).base.base.orient_matrix.m[0].y;
    } while (iVar3 < this_ptr->count);
  }
  if ((int)pfVar6 < this_ptr->count) {
    pCVar1 = this_ptr->swarm_target;
    local_4c = (this_ptr->base).base.base.location.position.x - (pCVar1->location).position.x;
    local_48 = (this_ptr->base).base.base.location.position.y - (pCVar1->location).position.y;
    local_44 = (this_ptr->base).base.base.location.position.z - (pCVar1->location).position.z;
    if ((((float)2 < ABS(local_48)) || ((float)2 < ABS(local_4c))) ||
       ((float)2 < ABS(local_44))) {
      this_ptr_01 = (*((this_ptr->swarm_target->vtable)._ub)->getPathMap)(this_ptr->swarm_target);
      if (this_ptr_01 == (CPathMap *)0x0) {
        this_ptr_01 = core_path_cpp_getPathMap_FUN_00548500(&this_ptr->swarm_target->location);
      }
      dest_position = &(this_ptr->base).base.base.location;
      iVar3 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00547d00
                        (this_ptr_01,&dest_position->position,&CStack_64,
                         (this_ptr->base).base.base.direction_hint);
      if (iVar3 != 0) {
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
        core_charactr_cpp_CCharacter_moveAndCollide_FUN_00428f40((CCharacter *)this_ptr,&CStack_7c);
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
  if ((0 < (int)pfVar6) &&
     (fVar2 = this_ptr->damage_timer - in_stack_00000008, this_ptr->damage_timer = fVar2,
     class_name_hash = g_CCharacterClassInfo.name_hash, fVar2 <= 0.0)) {
    this_ptr->damage_timer = 0.2;
    this_ptr_00 = (CCharacter *)
                  core_actor_cpp_castToClassHash_FUN_0040c790
                            (this_ptr->swarm_target,class_name_hash);
    if (this_ptr_00 != (CCharacter *)0x0) {
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&SStack_188);
      SStack_188.damage_amount = (float)(int)pfVar6 * (float)0.050000000000000003;
      SStack_188.attacker = (CDemonActor *)this_ptr;
      SStack_188.wielder = (CDemonActor *)this_ptr;
      local_18 = pfVar6;
      (*(((this_ptr_00->base).vtable._uc)->_uc).processDamage)(this_ptr_00,&SStack_188);
    }
  }
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
            (&local_11c,&(this_ptr->swarm_target->location).position,
             &(this_ptr->swarm_target->orient).vec);
  core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
            (&CStack_14c,&(this_ptr->base).base.base.location.position,
             &(this_ptr->base).base.base.orient.vec);
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_11c,&CStack_14c,&CStack_ec);
  pCVar5 = &CStack_ec;
  pCVar7 = &this_ptr->model_world_matrix;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    pCVar7->m[0].w = pCVar5->m[0].w;
    pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar8 * -2 + 1) * 4);
    pCVar7 = (CMatrix3x4f *)((int)pCVar7 + (uint)bVar8 * -8 + 4);
  }
  if (this_ptr->lod_index !=
      ((CDeformableModelInstance *)this_ptr->deformable_model_ptr)->cached_skinned_lod_index) {
    core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0
              ((CDeformableModelInstance *)this_ptr->deformable_model_ptr,this_ptr->lod_index);
  }
  iVar3 = 0;
  if (0 < this_ptr->count) {
    do {
      iVar3 = iVar3 + 1;
      core_bugs_cpp_CBugs_FUN_004268e0(this_ptr);
    } while (iVar3 < this_ptr->count);
  }
  core_bugs_cpp_CBugs_FUN_004272f0(this_ptr);
  fStack_58 = (this_ptr->bounds).min.x + (this_ptr->bounds).max.x;
  fStack_54 = (this_ptr->bounds).min.y + (this_ptr->bounds).max.y;
  fStack_88 = fStack_58 * 0.5f;
  fStack_50 = (this_ptr->bounds).min.z + (this_ptr->bounds).max.z;
  fStack_84 = fStack_54 * 0.5f;
  fStack_80 = fStack_50 * 0.5f;
  fStack_34 = (this_ptr->base).base.base.location.position.x + fStack_88;
  fStack_30 = (this_ptr->base).base.base.location.position.y + fStack_84;
  fStack_2c = (this_ptr->base).base.base.location.position.z + fStack_80;
  core_bugs_cpp_CBugs_FUN_004276c0(this_ptr);
  return;
}
