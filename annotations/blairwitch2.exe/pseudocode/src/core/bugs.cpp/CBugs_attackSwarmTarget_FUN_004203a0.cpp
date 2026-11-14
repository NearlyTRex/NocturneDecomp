// Name: core_bugs.cpp_CBugs_attackSwarmTarget_FUN_004203a0
// Address: 004203a0
// Address Range: [[004203a0, 00420822]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_CBugs_attackSwarmTarget_FUN_004203a0(CBugs *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_bugs_cpp_CBugs_attackSwarmTarget_FUN_004203a0(CBugs *this_ptr,float delta_time)

{
  CDemonActor *pCVar1;
  float fVar2;
  uint class_name_hash;
  CBugs *pCVar3;
  CCharacter *this_ptr_00;
  CPathMap *this_ptr_01;
  int iVar4;
  CMatrix3x4f *pCVar5;
  float *pfVar6;
  uint *puVar7;
  CMatrix3x4f *pCVar8;
  SBug *bug_data;
  byte bVar9;
  float afStackY_10a8 [952];
  CVector3f *pCVar10;
  float local_1b8;
  SDamageInfo local_1b4;
  CMatrix3x4f CStack_178;
  CMatrix3x4f local_148;
  CMatrix3x4f CStack_118;
  CMatrix3x3f CStack_e8;
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
  CVector3f CStack_78;
  uint uStack_6c;
  uint uStack_68;
  float fStack_64;
  CVector3f CStack_60;
  CVector3f CStack_54;
  CVector3f CStack_48;
  float local_3c;
  float local_38;
  float local_34;
  float fStack_30;
  float afStack_2c [4];
  float fStack_1c;
  CLocation *pCStack_18;
  float local_14;
  
  bVar9 = 0;
  if (this_ptr->swarm_target == (CDemonActor *)0x0) {
    this_ptr->state = BUGS_STATE_IDLE;
    return;
  }
  iVar4 = 0;
  local_1b8 = 0.0;
  pCVar3 = this_ptr;
  if (0 < this_ptr->count) {
    do {
      if (-1 < pCVar3->bugs[0].current_vertex) {
        local_1b8 = (float)((int)local_1b8 + 1);
      }
      iVar4 = iVar4 + 1;
      pCVar3 = (CBugs *)&(pCVar3->base).base.base.orient_matrix.m[0].y;
    } while (iVar4 < this_ptr->count);
  }
  if ((int)local_1b8 < this_ptr->count) {
    pCVar1 = this_ptr->swarm_target;
    local_84 = (this_ptr->base).base.base.location.position.x - (pCVar1->location).position.x;
    local_80 = (this_ptr->base).base.base.location.position.y - (pCVar1->location).position.y;
    local_7c = (this_ptr->base).base.base.location.position.z - (pCVar1->location).position.z;
    local_3c = local_84;
    local_38 = local_80;
    local_34 = local_7c;
    if ((((float)_DAT_005cca31 < ABS(local_80)) || ((float)_DAT_005cca31 < ABS(local_84))) ||
       ((float)_DAT_005cca31 < ABS(local_7c))) {
      this_ptr_01 = (*((this_ptr->swarm_target->vtable)._ub)->getPathMap)(this_ptr->swarm_target);
      if (this_ptr_01 == (CPathMap *)0x0) {
        this_ptr_01 = core_path_cpp_getPathMap_FUN_00513ea0(&this_ptr->swarm_target->location);
      }
      pCStack_18 = &(this_ptr->base).base.base.location;
      iVar4 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00513650
                        (this_ptr_01,&pCStack_18->position,&CStack_54,
                         (this_ptr->base).base.base.direction_hint);
      if (iVar4 != 0) {
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280(&CStack_e8,&CStack_54);
        fStack_64 = _DAT_005f3e34 * delta_time;
        uStack_6c = 0;
        uStack_68 = 0;
        local_14 = fStack_64;
        core_dirmat_cpp_FUN_00449530(&CStack_e8,&uStack_6c);
        pCVar10 = &CStack_60;
        CStack_60.x = fStack_30;
        *(float *)((int)&CStack_60 + (uint)bVar9 * -8 + 4) = afStack_2c[(uint)bVar9 * -2];
        *(float *)((int)&CStack_60 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
             afStack_2c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
        pfVar6 = (float *)((int)this_ptr + (uint)bVar9 * -8 + 0x24);
        afStack_2c[2] = (this_ptr->base).base.base.location.position.x;
        afStack_2c[(uint)bVar9 * -2 + 3] = *pfVar6;
        pCVar3 = this_ptr;
        afStack_2c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] = pfVar6[(uint)bVar9 * -2 + 1];
        core_charactr_cpp_CCharacter_moveAndCollide_FUN_00423a60((CCharacter *)pCVar3,pCVar10);
        puVar7 = (uint *)((int)this_ptr + (uint)bVar9 * -8 + 0x24);
        CStack_48.x = (this_ptr->base).base.base.location.position.x;
        *(uint *)((int)&CStack_48 + (uint)bVar9 * -8 + 4) = *puVar7;
        *(uint *)((int)&CStack_48 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
             puVar7[(uint)bVar9 * -2 + 1];
        (pCStack_18->position).x = afStack_2c[2];
        (pCStack_18->position).y = afStack_2c[3];
        (pCStack_18->position).z = fStack_1c;
        core_bugs_cpp_CBugs_applySwarmTranslation_FUN_00421dd0(this_ptr,&CStack_48);
      }
      core_bugs_cpp_CBugs_updateGroundHeightGrid_FUN_0041fad0(this_ptr);
    }
    else {
      core_bugs_cpp_CBugs_updateGroundHeightGrid_FUN_0041fad0(this_ptr);
    }
  }
  if ((0 < (int)local_1b8) &&
     (fVar2 = this_ptr->damage_timer - delta_time, this_ptr->damage_timer = fVar2,
     class_name_hash = g_CCharacterClassInfo.name_hash, fVar2 <= 0.0)) {
    this_ptr->damage_timer = 0.2;
    this_ptr_00 = (CCharacter *)
                  core_actor_cpp_castToClassHash_FUN_0040c8f0
                            (this_ptr->swarm_target,class_name_hash);
    if (this_ptr_00 != (CCharacter *)0x0) {
      core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(&local_1b4);
      local_14 = local_1b8;
      local_1b4.damage_amount = (float)(int)local_1b8 * (float)_DAT_005cca39;
      local_1b4.attacker = (CDemonActor *)this_ptr;
      local_1b4.wielder = (CDemonActor *)this_ptr;
      (*(((this_ptr_00->base).vtable._uc)->_uc).processDamage)(this_ptr_00,&local_1b4);
    }
  }
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00591c10
            (&local_148,&this_ptr->swarm_target->location,&this_ptr->swarm_target->orient);
  core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_00591ad0
            (&CStack_178,&(this_ptr->base).base.base.location.position,
             &(this_ptr->base).base.base.orient.vec);
  core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&local_148,&CStack_178,&CStack_118);
  pCVar5 = &CStack_118;
  pCVar8 = &this_ptr->model_world_matrix;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    pCVar8->m[0].w = pCVar5->m[0].w;
    pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar9 * -2 + 1) * 4);
    pCVar8 = (CMatrix3x4f *)((int)pCVar8 + (uint)bVar9 * -8 + 4);
  }
  if (this_ptr->lod_index != this_ptr->deformable_model_ptr->cached_skinned_lod_index) {
    core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005471f0
              (this_ptr->deformable_model_ptr,this_ptr->lod_index);
  }
  iVar4 = 0;
  if (0 < this_ptr->count) {
    bug_data = this_ptr->bugs;
    do {
      iVar4 = iVar4 + 1;
      core_bugs_cpp_CBugs_updateBugRenderingData_FUN_00420e90(this_ptr,bug_data,delta_time);
      bug_data = bug_data + 1;
    } while (iVar4 < this_ptr->count);
  }
  core_bugs_cpp_CBugs_recalculateBoundingBox_FUN_00421a00(this_ptr);
  fStack_a8 = (this_ptr->bounds).min.x + (this_ptr->bounds).max.x;
  fStack_a4 = (this_ptr->bounds).min.y + (this_ptr->bounds).max.y;
  fStack_a0 = (this_ptr->bounds).min.z + (this_ptr->bounds).max.z;
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
  pCVar10 = &CStack_78;
  fStack_90 = (this_ptr->base).base.base.location.position.x + fStack_c0;
  fStack_8c = (this_ptr->base).base.base.location.position.y + afStack_bc[0];
  fStack_88 = (this_ptr->base).base.base.location.position.z + afStack_bc[1];
  CStack_78.x = fStack_90;
  *(float *)((int)&CStack_78 + (uint)bVar9 * -8 + 4) = afStack_bc[(uint)bVar9 * -2 + 0xc];
  *(float *)((int)&CStack_78 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
       afStack_bc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd];
  core_bugs_cpp_CBugs_applySwarmTranslation_FUN_00421dd0(this_ptr,pCVar10);
  return;
}
