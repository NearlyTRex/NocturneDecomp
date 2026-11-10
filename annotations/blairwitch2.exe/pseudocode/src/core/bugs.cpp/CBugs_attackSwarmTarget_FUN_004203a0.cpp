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
  uint uVar3;
  CBugs *pCVar4;
  CPathMap *this_ptr_00;
  int iVar5;
  float *pfVar6;
  CMatrix3x4f *pCVar7;
  SBug *pSVar8;
  byte bVar9;
  float afStackY_10a8 [952];
  CVector3f *velocity;
  float local_1b8;
  SDamageInfo local_1b4 [4];
  float local_1b0;
  CBugs *local_180;
  CBugs *local_17c;
  CMatrix3x4f CStack_178;
  byte local_148 [48];
  float afStack_118 [12];
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
  float fStack_78;
  float afStack_74 [5];
  CVector3f CStack_60;
  CVector3f CStack_54;
  uint uStack_48;
  float afStack_44 [4];
  float local_34;
  float fStack_30;
  float afStack_2c [4];
  uint uStack_1c;
  uint *puStack_18;
  float local_14;
  
  bVar9 = 0;
  if (this_ptr->swarm_target == (CDemonActor *)0x0) {
    this_ptr->state = BUGS_STATE_IDLE;
    return;
  }
  iVar5 = 0;
  local_1b8 = 0.0;
  pCVar4 = this_ptr;
  if (0 < this_ptr->count) {
    do {
      if (-1 < *(int *)&pCVar4->bugs[0].field_0x2c) {
        local_1b8 = (float)((int)local_1b8 + 1);
      }
      iVar5 = iVar5 + 1;
      pCVar4 = (CBugs *)&(pCVar4->base).base.base.orient_matrix.m[0].y;
    } while (iVar5 < this_ptr->count);
  }
  if ((int)local_1b8 < this_ptr->count) {
    pCVar1 = this_ptr->swarm_target;
    local_84 = *(float *)&(this_ptr->base).base.base.field_0x20 - *(float *)&pCVar1->field_0x20;
    local_80 = *(float *)&(this_ptr->base).base.base.field_0x24 - *(float *)&pCVar1->field_0x24;
    local_7c = *(float *)&(this_ptr->base).base.base.field_0x28 - *(float *)&pCVar1->field_0x28;
    afStack_44[2] = local_84;
    afStack_44[3] = local_80;
    local_34 = local_7c;
    if ((((float)_DAT_005cca31 < ABS(local_80)) || ((float)_DAT_005cca31 < ABS(local_84))) ||
       ((float)_DAT_005cca31 < ABS(local_7c))) {
      this_ptr_00 = (*((this_ptr->swarm_target->vtable)._ub)->getPathMap)(this_ptr->swarm_target);
      if (this_ptr_00 == (CPathMap *)0x0) {
        this_ptr_00 = core_path_cpp_getPathMap_FUN_00513ea0
                                ((CLocation *)&this_ptr->swarm_target->field_0x20);
      }
      puStack_18 = (uint *)&(this_ptr->base).base.base.field_0x20;
      iVar5 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00513650
                        (this_ptr_00,(CVector3f *)puStack_18,&CStack_54,
                         (this_ptr->base).base.base.direction_hint);
      if (iVar5 != 0) {
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280(&CStack_e8,&CStack_54);
        afStack_74[4] = _DAT_005f3e34 * delta_time;
        afStack_74[2] = 0.0;
        afStack_74[3] = 0.0;
        local_14 = afStack_74[4];
        core_dirmat_cpp_FUN_00449530(&CStack_e8,afStack_74 + 2);
        velocity = &CStack_60;
        CStack_60.x = fStack_30;
        *(float *)((int)&CStack_60 + (uint)bVar9 * -8 + 4) = afStack_2c[(uint)bVar9 * -2];
        *(float *)((int)&CStack_60 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
             afStack_2c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
        pfVar6 = (float *)((int)this_ptr + (uint)bVar9 * -8 + 0x24);
        afStack_2c[2] = *(float *)&(this_ptr->base).base.base.field_0x20;
        afStack_2c[(uint)bVar9 * -2 + 3] = *pfVar6;
        pCVar4 = this_ptr;
        afStack_2c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] = pfVar6[(uint)bVar9 * -2 + 1];
        core_charactr_cpp_FUN_00423a60((CCharacter *)pCVar4,velocity);
        pfVar6 = (float *)((int)this_ptr + (uint)bVar9 * -8 + 0x24);
        uStack_48 = *(uint *)&(this_ptr->base).base.base.field_0x20;
        afStack_44[(uint)bVar9 * -2] = *pfVar6;
        afStack_44[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] = pfVar6[(uint)bVar9 * -2 + 1];
        *puStack_18 = afStack_2c[2];
        puStack_18[1] = afStack_2c[3];
        puStack_18[2] = uStack_1c;
        core_bugs_cpp_FUN_00421dd0(this_ptr,&uStack_48);
      }
      core_bugs_cpp_CBugs_updateGroundHeightGrid_FUN_0041fad0(this_ptr);
    }
    else {
      core_bugs_cpp_CBugs_updateGroundHeightGrid_FUN_0041fad0(this_ptr);
    }
  }
  if ((0 < (int)local_1b8) &&
     (fVar2 = this_ptr->damage_timer - delta_time, this_ptr->damage_timer = fVar2,
     uVar3 = g_CCharacterClassInfo.name_hash, fVar2 <= 0.0)) {
    this_ptr->damage_timer = 0.2;
    iVar5 = core_actor_cpp_castToClassHash_FUN_0040c8f0(this_ptr->swarm_target,uVar3);
    if (iVar5 != 0) {
      core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(local_1b4);
      local_14 = local_1b8;
      local_1b0 = (float)(int)local_1b8 * (float)_DAT_005cca39;
      local_180 = this_ptr;
      local_17c = this_ptr;
      (**(code **)(*(int *)(iVar5 + 0x2b0) + 0x110))(iVar5,local_1b4);
    }
  }
  core_xform_cpp_FUN_00591c10
            (local_148,&this_ptr->swarm_target->field_0x20,&this_ptr->swarm_target->orient);
  core_xform_cpp_FUN_00591ad0
            (&CStack_178,(CVector3f *)&(this_ptr->base).base.base.field_0x20,
             &(this_ptr->base).base.base.orient.vec);
  core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(local_148,&CStack_178);
  pfVar6 = afStack_118;
  pCVar7 = &this_ptr->model_world_matrix;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    pCVar7->m[0].w = *pfVar6;
    pfVar6 = pfVar6 + (uint)bVar9 * -2 + 1;
    pCVar7 = (CMatrix3x4f *)((int)pCVar7 + (uint)bVar9 * -8 + 4);
  }
  if (this_ptr->lod_index != *(int *)&this_ptr->deformable_model_ptr->field_0x2230) {
    core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005471f0
              (this_ptr->deformable_model_ptr,this_ptr->lod_index);
  }
  iVar5 = 0;
  if (0 < this_ptr->count) {
    pSVar8 = this_ptr->bugs;
    do {
      iVar5 = iVar5 + 1;
      core_bugs_cpp_FUN_00420e90(this_ptr,pSVar8,delta_time);
      pSVar8 = pSVar8 + 1;
    } while (iVar5 < this_ptr->count);
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
  pfVar6 = &fStack_78;
  fStack_90 = *(float *)&(this_ptr->base).base.base.field_0x20 + fStack_c0;
  fStack_8c = *(float *)&(this_ptr->base).base.base.field_0x24 + afStack_bc[0];
  fStack_88 = *(float *)&(this_ptr->base).base.base.field_0x28 + afStack_bc[1];
  fStack_78 = fStack_90;
  afStack_74[(uint)bVar9 * -2] = afStack_bc[(uint)bVar9 * -2 + 0xc];
  afStack_74[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
       afStack_bc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd];
  core_bugs_cpp_FUN_00421dd0(this_ptr,pfVar6);
  return;
}
