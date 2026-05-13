// Name: core_bugs.cpp_CBugs_attackSwarmTarget_FUN_00425fe0
// Address: 00425fe0
// MANUAL RECONSTRUCTION
// Address Range: [[00425fe0, 00426400] [03fc4786, 03fc47ed]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_CBugs_attackSwarmTarget_FUN_00425fe0(CBugs *this_ptr,float delta_time)

#include "nocturne.h"

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
  SBug *bug_data;
  int active_count;
  int iVar6;
  SDamageInfo SStack_188;
  CMatrix3x4f CStack_14c;
  CMatrix3x4f local_11c;
  CMatrix3x4f CStack_ec;
  CMatrix3x3f CStack_bc;
  CVector3f CStack_94;
  CVector3f CStack_7c;
  CVector3f CStack_70;
  CVector3f CStack_64;
  CVector3f aCStack_34 [2];
  uint class_name_hash;
  CDemonActor *pCVar1;
  float fVar2;
  
  if (this_ptr->swarm_target == (CDemonActor *)0x0) {
    this_ptr->state = BUGS_STATE_IDLE;
    return;
  }
  iVar3 = 0;
  active_count = 0;
  if (0 < this_ptr->count) {
    do {
      if (-1 < this_ptr->bugs[iVar3].current_vertex) {
        active_count = active_count + 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < this_ptr->count);
  }
  if (active_count < this_ptr->count) {
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
  if ((0 < active_count) &&
     (fVar2 = this_ptr->damage_timer - delta_time, this_ptr->damage_timer = fVar2,
     class_name_hash = g_CCharacterClassInfo.name_hash, fVar2 <= 0.0)) {
    this_ptr->damage_timer = 0.2;
    this_ptr_00 = (CCharacter *)
                  core_actor_cpp_castToClassHash_FUN_0040c790
                            (this_ptr->swarm_target,class_name_hash);
    if (this_ptr_00 != (CCharacter *)0x0) {
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&SStack_188);
      SStack_188.damage_amount = (float)active_count * (float)0.050000000000000003;
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
  this_ptr->model_world_matrix = CStack_ec;
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
