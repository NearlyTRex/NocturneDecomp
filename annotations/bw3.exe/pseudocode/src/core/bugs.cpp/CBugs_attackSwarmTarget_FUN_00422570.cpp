// Name: core_bugs.cpp_CBugs_attackSwarmTarget_FUN_00422570
// Address: 00422570
// Address Range: [[00422570, 004229e2]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_CBugs_attackSwarmTarget_FUN_00422570(CBugs *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_bugs_cpp_CBugs_attackSwarmTarget_FUN_00422570(CBugs *this_ptr,float delta_time)

{
  CDemonActor *pCVar1;
  float fVar2;
  uint uVar3;
  CBugs *pCVar4;
  CPathMap *this_ptr_00;
  int iVar5;
  float *pfVar6;
  CMatrix3x4f *pCVar7;
  SBug *pSVar8;
  byte bVar9;
  float afStackY_10ac [953];
  CVector3f *velocity;
  SDamageInfo aSStack_1b8 [4];
  uint local_1b4;
  CBugs *local_184;
  CBugs *local_180;
  CMatrix3x4f CStack_17c;
  byte local_14c [48];
  float afStack_11c [12];
  CMatrix3x3f CStack_ec;
  float fStack_c4;
  float afStack_c0 [2];
  CVector3f CStack_b8;
  uint uStack_ac;
  uint uStack_a8;
  float fStack_a4;
  float fStack_a0;
  float afStack_9c [5];
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float afStack_7c [3];
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float local_54;
  float local_50;
  CVector3f CStack_4c;
  float fStack_40;
  float afStack_3c [4];
  float local_2c;
  float fStack_28;
  float afStack_24 [3];
  CLocation *pCStack_18;
  int local_14;
  
  bVar9 = 0;
  if (this_ptr->swarm_target == (CDemonActor *)0x0) {
    this_ptr->state = BUGS_STATE_IDLE;
    return;
  }
  iVar5 = 0;
  local_14 = 0;
  pCVar4 = this_ptr;
  if (0 < this_ptr->count) {
    do {
      if (-1 < *(int *)&pCVar4->bugs[0].field_0x2c) {
        local_14 = local_14 + 1;
      }
      iVar5 = iVar5 + 1;
      pCVar4 = (CBugs *)&(pCVar4->base).base.base.orient_matrix.m[0].y;
    } while (iVar5 < this_ptr->count);
  }
  if (local_14 < this_ptr->count) {
    pCVar1 = this_ptr->swarm_target;
    local_58 = (this_ptr->base).base.base.location.position.x - (pCVar1->location).position.x;
    local_54 = (this_ptr->base).base.base.location.position.y - (pCVar1->location).position.y;
    local_50 = (this_ptr->base).base.base.location.position.z - (pCVar1->location).position.z;
    afStack_3c[2] = local_58;
    afStack_3c[3] = local_54;
    local_2c = local_50;
    if ((((float)_DAT_005b7861 < ABS(local_54)) || ((float)_DAT_005b7861 < ABS(local_58))) ||
       ((float)_DAT_005b7861 < ABS(local_50))) {
      this_ptr_00 = (*((this_ptr->swarm_target->vtable)._ub)->getPathMap)(this_ptr->swarm_target);
      if (this_ptr_00 == (CPathMap *)0x0) {
        this_ptr_00 = core_path_cpp_getPathMap_FUN_0050ced0(&this_ptr->swarm_target->location);
      }
      pCStack_18 = &(this_ptr->base).base.base.location;
      iVar5 = core_path_cpp_CPathMap_findPathWithRetry_FUN_0050c680
                        (this_ptr_00,&pCStack_18->position,&CStack_b8,
                         (this_ptr->base).base.base.direction_hint);
      if (iVar5 != 0) {
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550(&CStack_ec,&CStack_b8);
        fStack_a4 = _DAT_005dcbd4 * delta_time;
        uStack_ac = 0;
        uStack_a8 = 0;
        afStack_24[2] = fStack_a4;
        core_dirmat_cpp_FUN_0045b800(&CStack_ec,&uStack_ac);
        velocity = &CStack_4c;
        CStack_4c.x = afStack_9c[2];
        *(float *)((int)&CStack_4c + (uint)bVar9 * -8 + 4) = afStack_9c[(uint)bVar9 * -2 + 3];
        *(float *)((int)&CStack_4c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
             afStack_9c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
        pfVar6 = (float *)((int)this_ptr + (uint)bVar9 * -8 + 0x24);
        fStack_64 = (this_ptr->base).base.base.location.position.x;
        afStack_9c[(uint)bVar9 * -2 + 0xf] = *pfVar6;
        pCVar4 = this_ptr;
        afStack_9c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x10] = pfVar6[(uint)bVar9 * -2 + 1];
        core_charactr_cpp_FUN_0042c230((CCharacter *)pCVar4,velocity);
        pfVar6 = (float *)((int)this_ptr + (uint)bVar9 * -8 + 0x24);
        afStack_7c[0] = (this_ptr->base).base.base.location.position.x;
        afStack_9c[(uint)bVar9 * -2 + 9] = *pfVar6;
        afStack_9c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10] = pfVar6[(uint)bVar9 * -2 + 1];
        (pCStack_18->position).x = fStack_64;
        (pCStack_18->position).y = fStack_60;
        (pCStack_18->position).z = fStack_5c;
        core_bugs_cpp_FUN_00423fb0(this_ptr,afStack_9c + 8);
      }
      core_bugs_cpp_CBugs_updateGroundHeightGrid_FUN_00421c90(this_ptr);
    }
    else {
      core_bugs_cpp_CBugs_updateGroundHeightGrid_FUN_00421c90(this_ptr);
    }
  }
  if ((0 < local_14) &&
     (fVar2 = this_ptr->damage_timer - delta_time, this_ptr->damage_timer = fVar2,
     uVar3 = g_CCharacterClassInfo.name_hash, fVar2 <= 0.0)) {
    this_ptr->damage_timer = 0.2;
    iVar5 = core_actor_cpp_castToClassHash_FUN_0040c840(this_ptr->swarm_target,uVar3);
    if (iVar5 != 0) {
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(aSStack_1b8);
      local_184 = this_ptr;
      local_180 = this_ptr;
      local_1b4 = 0x3f800000;
      (**(code **)(*(int *)(iVar5 + 0x154) + 0x108))(iVar5,aSStack_1b8);
    }
  }
  core_xform_cpp_FUN_00583940
            (local_14c,&this_ptr->swarm_target->location,&this_ptr->swarm_target->orient);
  core_xform_cpp_FUN_00583800
            (&CStack_17c,&(this_ptr->base).base.base.location.position,
             &(this_ptr->base).base.base.orient.vec);
  core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(local_14c,&CStack_17c);
  pfVar6 = afStack_11c;
  pCVar7 = &this_ptr->model_world_matrix;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    pCVar7->m[0].w = *pfVar6;
    pfVar6 = pfVar6 + (uint)bVar9 * -2 + 1;
    pCVar7 = (CMatrix3x4f *)((int)pCVar7 + (uint)bVar9 * -8 + 4);
  }
  if (this_ptr->lod_index != this_ptr->deformable_model_ptr->cached_skinned_lod_index) {
    core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_0054e420
              (this_ptr->deformable_model_ptr,this_ptr->lod_index);
  }
  iVar5 = 0;
  if (0 < this_ptr->count) {
    pSVar8 = this_ptr->bugs;
    do {
      iVar5 = iVar5 + 1;
      core_bugs_cpp_FUN_00423050(this_ptr,pSVar8,delta_time);
      pSVar8 = pSVar8 + 1;
    } while (iVar5 < this_ptr->count);
  }
  core_bugs_cpp_CBugs_recalculateBoundingBox_FUN_00423bc0(this_ptr);
  fStack_40 = (this_ptr->bounds).min.x + (this_ptr->bounds).max.x;
  afStack_3c[0] = (this_ptr->bounds).min.y + (this_ptr->bounds).max.y;
  afStack_3c[1] = (this_ptr->bounds).min.z + (this_ptr->bounds).max.z;
  fStack_c4 = fStack_40;
  afStack_c0[(uint)bVar9 * -2] = afStack_3c[(uint)bVar9 * -2];
  afStack_c0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
       afStack_3c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
  fStack_28 = fStack_c4 * _DAT_005b7869;
  afStack_24[0] = afStack_c0[0] * _DAT_005b7869;
  afStack_24[1] = afStack_c0[1] * _DAT_005b7869;
  fStack_88 = fStack_c4 * _DAT_005b7869;
  afStack_9c[(uint)bVar9 * -2 + 6] = afStack_24[(uint)bVar9 * -2];
  afStack_9c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
       afStack_24[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
  pfVar6 = &fStack_a0;
  fStack_70 = (this_ptr->base).base.base.location.position.x + fStack_88;
  fStack_6c = (this_ptr->base).base.base.location.position.y + fStack_84;
  fStack_68 = (this_ptr->base).base.base.location.position.z + fStack_80;
  fStack_a0 = fStack_70;
  afStack_9c[(uint)bVar9 * -2] = afStack_9c[(uint)bVar9 * -2 + 0xc];
  afStack_9c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
       afStack_9c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd];
  core_bugs_cpp_FUN_00423fb0(this_ptr,pfVar6);
  return;
}
