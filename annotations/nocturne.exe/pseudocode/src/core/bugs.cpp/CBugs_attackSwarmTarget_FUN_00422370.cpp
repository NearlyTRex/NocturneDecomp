// Name: core_bugs.cpp_CBugs_attackSwarmTarget_FUN_00422370
// Address: 00422370
// Address Range: [[00422370, 00422790]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_CBugs_attackSwarmTarget_FUN_00422370(CBugs *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_bugs_cpp_CBugs_attackSwarmTarget_FUN_00422370(CBugs *this_ptr,float delta_time)

{
  CLocation *dest_position;
  CDemonActor *pCVar1;
  float fVar2;
  uint class_name_hash;
  int iVar3;
  CCharacter *this_ptr_00;
  CPathMap *this_ptr_01;
  CBugs *pCVar4;
  SBug *pSVar5;
  float *pfVar6;
  CMatrix3x4f *pCVar7;
  byte bVar8;
  CBugs *in_stack_fffffe78;
  CMatrix3x4f CStack_14c;
  byte local_11c [48];
  float afStack_ec [13];
  CMatrix3x3f CStack_b8;
  int iStack_90;
  int iStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  CVector3f CStack_78;
  UActorVTable UStack_6c;
  float fStack_68;
  float fStack_64;
  CVector3f CStack_60;
  UOrientationVector UStack_54;
  float local_48;
  CDemonActor *local_44;
  UActorVTable UStack_3c;
  float fStack_38;
  CVector3f aCStack_34 [2];
  float *local_18;
  float *pfStack_14;
  
  bVar8 = 0;
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
    UStack_54.vec.z = (this_ptr->base).base.base.location.position.x - (pCVar1->location).position.x
    ;
    local_48 = (this_ptr->base).base.base.location.position.y - (pCVar1->location).position.y;
    local_44 = (CDemonActor *)
               ((this_ptr->base).base.base.location.position.z - (pCVar1->location).position.z);
    if ((((float)2 < ABS(local_48)) || ((float)2 < ABS(UStack_54.vec.z))
        ) || ((float)2 < ABS((float)local_44))) {
      this_ptr_01 = (*((this_ptr->swarm_target->vtable)._ub)->getPathMap)(this_ptr->swarm_target);
      if (this_ptr_01 == (CPathMap *)0x0) {
        this_ptr_01 = core_path_cpp_getPathMap_FUN_004f1e00(&this_ptr->swarm_target->location);
      }
      dest_position = &(this_ptr->base).base.base.location;
      iVar3 = core_path_cpp_CPathMap_findPathWithRetry_FUN_004f1600
                        (this_ptr_01,&dest_position->position,&CStack_60,
                         (this_ptr->base).base.base.direction_hint);
      if (iVar3 != 0) {
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0(&CStack_b8,&CStack_60);
        fStack_88 = 2.0f * delta_time;
        iStack_90 = 0;
        iStack_8c = 0;
        local_18 = (float *)fStack_88;
        core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40(&CStack_b8,&CStack_78);
        UStack_3c = (UActorVTable)(dest_position->position).x;
        local_18 = &(this_ptr->base).base.base.location.position.y;
        fStack_38 = *local_18;
        pfStack_14 = &(this_ptr->base).base.base.location.position.z;
        aCStack_34[0].x = *pfStack_14;
        core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050((CCharacter *)this_ptr,&CStack_78);
        UStack_6c = (UActorVTable)(dest_position->position).x;
        fStack_68 = *local_18;
        fStack_64 = *pfStack_14;
        (dest_position->position).x = (float)UStack_3c;
        (this_ptr->base).base.base.location.position.y = fStack_38;
        (this_ptr->base).base.base.location.position.z = aCStack_34[0].x;
        core_bugs_cpp_CBugs_applySwarmTranslation_FUN_00423a50(this_ptr,(CVector3f *)&UStack_6c);
      }
      in_stack_fffffe78 = this_ptr;
      core_bugs_cpp_FUN_00421b80();
    }
    else {
      core_bugs_cpp_FUN_00421b80(this_ptr);
    }
  }
  if ((0 < (int)pfVar6) &&
     (fVar2 = this_ptr->damage_timer - delta_time, this_ptr->damage_timer = fVar2,
     class_name_hash = g_CCharacterActorType_00765a60.name_hash, fVar2 <= 0.0)) {
    this_ptr->damage_timer = 0.2;
    this_ptr_00 = (CCharacter *)
                  core_actor_cpp_castToClassHash_FUN_0040d890
                            (this_ptr->swarm_target,class_name_hash);
    if (this_ptr_00 != (CCharacter *)0x0) {
      core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0((SDamageInfo *)&stack0xfffffe78);
      local_18 = pfVar6;
      (*(((this_ptr_00->base).vtable._uc)->_uc).getGrabbed)
                (this_ptr_00,(CDemonActor *)&stack0xfffffe78,(int)in_stack_fffffe78);
    }
  }
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
            (local_11c,&this_ptr->swarm_target->location,&this_ptr->swarm_target->orient);
  core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_0055ae80
            (&CStack_14c,&(this_ptr->base).base.base.location.position,
             &(this_ptr->base).base.base.orient.vec);
  core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(local_11c,&CStack_14c);
  pfVar6 = afStack_ec;
  pCVar7 = &this_ptr->model_world_matrix;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    pCVar7->m[0].w = *pfVar6;
    pfVar6 = pfVar6 + (uint)bVar8 * -2 + 1;
    pCVar7 = (CMatrix3x4f *)((int)pCVar7 + (uint)bVar8 * -8 + 4);
  }
  if (this_ptr->lod_index != this_ptr->deformable_model_ptr->cached_skinned_lod_index) {
    core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_0051da50
              (this_ptr->deformable_model_ptr,this_ptr->lod_index);
  }
  iVar3 = 0;
  if (0 < this_ptr->count) {
    pSVar5 = this_ptr->bugs;
    do {
      iVar3 = iVar3 + 1;
      core_bugs_cpp_CBugs_updateBugRenderingData_FUN_00422c70(this_ptr,pSVar5,delta_time);
      pSVar5 = pSVar5 + 1;
    } while (iVar3 < this_ptr->count);
  }
  core_bugs_cpp_CBugs_recalculateBoundingBox_FUN_00423680(this_ptr);
  CStack_60.z = (this_ptr->bounds).min.x + (this_ptr->bounds).max.x;
  UStack_54.vec.x = (this_ptr->bounds).min.y + (this_ptr->bounds).max.y;
  fStack_88 = CStack_60.z * 0.5f;
  UStack_54.vec.y = (this_ptr->bounds).min.z + (this_ptr->bounds).max.z;
  fStack_84 = UStack_54.vec.x * 0.5f;
  fStack_80 = UStack_54.vec.y * 0.5f;
  aCStack_34[0].x = (this_ptr->base).base.base.location.position.x + fStack_88;
  aCStack_34[0].y = (this_ptr->base).base.base.location.position.y + fStack_84;
  aCStack_34[0].z = (this_ptr->base).base.base.location.position.z + fStack_80;
  core_bugs_cpp_CBugs_applySwarmTranslation_FUN_00423a50(this_ptr,aCStack_34);
  return;
}
