// Name: core_bugs.cpp_CBugs_attackSwarmTarget_FUN_00425fe0
// Address: 00425fe0
// Address Range: [[00425fe0, 00426400] [03fc4786, 03fc47ed]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_CBugs_attackSwarmTarget_FUN_00425fe0(CBugs *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_bugs_cpp_CBugs_attackSwarmTarget_FUN_00425fe0(CBugs *this_ptr,float delta_time)

{
  CLocation *dest_position_00;
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar3;
  CCharacter *this_ptr_00;
  CPathMap *this_ptr_01;
  CBugs *pCVar4;
  CMatrix3x4f *pCVar5;
  SBug *bug_data;
  float *pfVar6;
  CMatrix3x4f *pCVar7;
  int iVar6;
  byte bVar8;
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
  CVector3f CStack_70;
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
  CVector3f aCStack_34 [2];
  float *pfStack_1c;
  float *local_18;
  uint class_name_hash;
  CDemonActor *pCVar1;
  float fVar2;
  CLocation *dest_position;
  
  if (this_ptr->swarm_target == (CDemonActor *)0x0) {
    this_ptr->state = BUGS_STATE_IDLE;
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
    if ((((float)2 <
          ABS((this_ptr->base).base.base.location.position.y - (pCVar1->location).position.y)) ||
        ((float)2 <
         ABS((this_ptr->base).base.base.location.position.x - (pCVar1->location).position.x))) ||
       ((float)2 <
        ABS((this_ptr->base).base.base.location.position.z - (pCVar1->location).position.z))) {
      this_ptr_01 = (*((this_ptr->swarm_target->vtable)._ub)->getPathMap)(this_ptr->swarm_target);
      if (this_ptr_01 == (CPathMap *)0x0) {
        this_ptr_01 = core_path_cpp_getPathMap_FUN_00548500(&this_ptr->swarm_target->location);
      }
      dest_position_00 = &(this_ptr->base).base.base.location;
      iVar6 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00547d00
                        (this_ptr_01,&dest_position_00->position,&CStack_64,
                         (this_ptr->base).base.base.direction_hint);
      if (iVar6 != 0) {
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&CStack_bc,&CStack_64);
        CStack_94.z = 2.0f * delta_time;
        CStack_94.x = 0.0;
        CStack_94.y = 0.0;
        core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0(&CStack_bc,&CStack_7c,&CStack_94);
        fVar3 = (dest_position_00->position).x;
        pfVar1 = &(this_ptr->base).base.base.location.position.y;
        fVar4 = *pfVar1;
        pfVar2 = &(this_ptr->base).base.base.location.position.z;
        fVar5 = *pfVar2;
        core_charactr_cpp_CCharacter_moveAndCollide_FUN_00428f40((CCharacter *)this_ptr,&CStack_7c);
        CStack_70.x = (dest_position_00->position).x;
        CStack_70.y = *pfVar1;
        CStack_70.z = *pfVar2;
        (dest_position_00->position).x = fVar3;
        (this_ptr->base).base.base.location.position.y = fVar4;
        (this_ptr->base).base.base.location.position.z = fVar5;
        core_bugs_cpp_CBugs_applySwarmTranslation_FUN_004276c0(this_ptr,&CStack_70);
      }
      core_bugs_cpp_CBugs_updateGroundHeightGrid_FUN_004257f0(this_ptr);
    }
    else {
      core_bugs_cpp_CBugs_updateGroundHeightGrid_FUN_004257f0(this_ptr);
    }
  }
  if ((0 < (int)pfVar6) &&
     (fVar2 = this_ptr->damage_timer - delta_time, this_ptr->damage_timer = fVar2,
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
  (this_ptr->model_world_matrix).m[0].w = CStack_ec.m[0].w;
  (this_ptr->model_world_matrix).m[0].x = CStack_ec.m[0].x;
  (this_ptr->model_world_matrix).m[0].y = CStack_ec.m[0].y;
  (this_ptr->model_world_matrix).m[0].z = CStack_ec.m[0].z;
  (this_ptr->model_world_matrix).m[1].w = CStack_ec.m[1].w;
  (this_ptr->model_world_matrix).m[1].x = CStack_ec.m[1].x;
  (this_ptr->model_world_matrix).m[1].y = CStack_ec.m[1].y;
  (this_ptr->model_world_matrix).m[1].z = CStack_ec.m[1].z;
  (this_ptr->model_world_matrix).m[2].w = CStack_ec.m[2].w;
  (this_ptr->model_world_matrix).m[2].x = CStack_ec.m[2].x;
  (this_ptr->model_world_matrix).m[2].y = CStack_ec.m[2].y;
  (this_ptr->model_world_matrix).m[2].z = CStack_ec.m[2].z;
  if (this_ptr->lod_index !=
      ((CDeformableModelInstance *)this_ptr->deformable_model_ptr)->cached_skinned_lod_index) {
    core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0
              ((CDeformableModelInstance *)this_ptr->deformable_model_ptr,this_ptr->lod_index);
  }
  iVar6 = 0;
  if (0 < this_ptr->count) {
    bug_data = this_ptr->bugs;
    do {
      iVar6 = iVar6 + 1;
      core_bugs_cpp_CBugs_updateBugRenderingData_FUN_004268e0(this_ptr,bug_data,delta_time);
      bug_data = bug_data + 1;
    } while (iVar6 < this_ptr->count);
  }
  core_bugs_cpp_CBugs_recalculateBoundingBox_FUN_004272f0(this_ptr);
  aCStack_34[0].x =
       (this_ptr->base).base.base.location.position.x +
       ((this_ptr->bounds).min.x + (this_ptr->bounds).max.x) * 0.5f;
  aCStack_34[0].y =
       (this_ptr->base).base.base.location.position.y +
       ((this_ptr->bounds).min.y + (this_ptr->bounds).max.y) * 0.5f;
  aCStack_34[0].z =
       (this_ptr->base).base.base.location.position.z +
       ((this_ptr->bounds).min.z + (this_ptr->bounds).max.z) * 0.5f;
  core_bugs_cpp_CBugs_applySwarmTranslation_FUN_004276c0(this_ptr,aCStack_34);
  return;
}
