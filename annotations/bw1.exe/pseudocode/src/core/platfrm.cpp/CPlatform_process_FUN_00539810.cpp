// Name: core_platfrm.cpp_CPlatform_process_FUN_00539810
// Address: 00539810
// Address Range: [[00539810, 0053a334]]
// Convention: __cdecl
// Signature: void __cdecl core_platfrm_cpp_CPlatform_process_FUN_00539810(CPlatform *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_platfrm_cpp_CPlatform_process_FUN_00539810(CPlatform *this_ptr,float delta_time)

{
  CCharacter *this_ptr_00;
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  EDeathState EVar5;
  ECollisionType EVar6;
  float fVar7;
  int iVar8;
  UOrientationVector *euler_angles;
  char *name;
  char *pcVar9;
  CLocation *position;
  CDeformableModelInstance **ppCVar10;
  CMatrix3x4f *pCVar11;
  char *pcVar12;
  uint *puVar13;
  CMatrix3x4f *pCVar14;
  bool bVar15;
  byte bVar16;
  float afStackY_10d4 [838];
  CBoundingBox3D *in_stack_fffffc58;
  CCharacter *in_stack_fffffc60;
  char cVar17;
  uint in_stack_fffffc64;
  CVector3f *input_local_point;
  byte auStack_29c [48];
  byte auStack_26c [56];
  CMatrix3x4f CStack_234;
  CMatrix3x4f CStack_204;
  CMatrix3x4f CStack_1d4;
  CMatrix3x4f CStack_1a4;
  CMatrix3x4f CStack_174;
  SCollisionInfo SStack_13c;
  uint auStack_104 [3];
  float fStack_f8;
  float fStack_f0;
  float fStack_ec;
  uint uStack_e8;
  float afStack_e4 [4];
  float afStack_d4 [2];
  UOrientationVector UStack_cc;
  float afStack_c0 [3];
  CVector3f CStack_b4;
  CVector3f CStack_a8;
  float fStack_9c;
  float afStack_98 [4];
  byte auStack_88 [8];
  float afStack_80 [4];
  CVector3f CStack_70;
  float fStack_5c;
  float afStack_58 [7];
  float fStack_3c;
  float local_38 [4];
  CVector3f CStack_28;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  bVar16 = 0;
  if (1 < (int)this_ptr->one_shot) {
    return;
  }
  bVar15 = false;
  local_38[0] = this_ptr->param;
  local_38[2] = 0.0;
  local_38[1] = 0.0;
  switch(this_ptr->state) {
  case PLATFORM_STATE_TYPE_AT_START:
    iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                      (0x01C51D80,this_ptr->to_end_event);
    bVar15 = iVar3 != 0;
    if (bVar15) {
      core_platfrm_cpp_CPlatform_startMovement_FUN_0053a340
                (this_ptr,1.0,1.0 / this_ptr->travel_time_to_end);
    }
    this_ptr->param = 0.0;
    break;
  case PLATFORM_STATE_TYPE_AT_END:
    iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                      (0x01C51D80,this_ptr->to_start_event);
    bVar15 = iVar3 != 0;
    if (bVar15) {
      core_platfrm_cpp_CPlatform_startMovement_FUN_0053a340
                (this_ptr,0.0,1.0 / this_ptr->travel_time_to_start);
    }
    this_ptr->param = 1.0;
    break;
  case PLATFORM_STATE_TYPE_STOPPED:
    iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                      (0x01C51D80,this_ptr->to_end_event);
    if (iVar3 == 0) {
      iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                        (0x01C51D80,this_ptr->to_start_event);
      if (iVar3 != 0) {
        core_platfrm_cpp_CPlatform_startMovement_FUN_0053a340
                  (this_ptr,0.0,1.0 / this_ptr->travel_time_to_start);
      }
    }
    else {
      core_platfrm_cpp_CPlatform_startMovement_FUN_0053a340
                (this_ptr,1.0,1.0 / this_ptr->travel_time_to_end);
    }
    break;
  case PLATFORM_STATE_TYPE_MOVING_TO_END:
    iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                      (0x01C51D80,this_ptr->stop_event);
    if (iVar3 != 0) {
      this_ptr->state = PLATFORM_STATE_TYPE_STOPPED;
      if (this_ptr->stop_sound[0] != '\0') {
        (*((this_ptr->base).vtable._ub)->playSound)(&this_ptr->base,this_ptr->stop_sound);
      }
      break;
    }
    fVar7 = delta_time * this_ptr->current_movement_rate + this_ptr->param;
    this_ptr->param = fVar7;
    if (fVar7 <= this_ptr->goal_param) {
LAB_00539ca2:
      local_38[1] = 1.4013e-45;
      break;
    }
    this_ptr->param = this_ptr->goal_param;
    if (1.0 <= this_ptr->param) {
      this_ptr->state = PLATFORM_STATE_TYPE_AT_END;
      if (this_ptr->one_shot != ONE_SHOT_NO) {
        this_ptr->one_shot = ONE_SHOT_DONE;
      }
      local_38[2] = 1.4013e-45;
      break;
    }
    goto LAB_00539c90;
  case PLATFORM_STATE_TYPE_MOVING_TO_START:
    iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                      (0x01C51D80,this_ptr->stop_event);
    if (iVar3 != 0) {
      this_ptr->state = PLATFORM_STATE_TYPE_STOPPED;
      if (this_ptr->stop_sound[0] != '\0') {
        (*((this_ptr->base).vtable._ub)->playSound)(&this_ptr->base,this_ptr->stop_sound);
      }
      break;
    }
    fVar7 = this_ptr->param - delta_time * this_ptr->current_movement_rate;
    this_ptr->param = fVar7;
    if (this_ptr->goal_param <= fVar7) goto LAB_00539ca2;
    this_ptr->param = this_ptr->goal_param;
    if (this_ptr->param <= 0.0) {
      this_ptr->state = PLATFORM_STATE_TYPE_AT_START;
      if (this_ptr->one_shot != ONE_SHOT_NO) {
        this_ptr->one_shot = ONE_SHOT_DONE;
      }
      local_38[2] = 1.4013e-45;
      break;
    }
LAB_00539c90:
    this_ptr->state = PLATFORM_STATE_TYPE_STOPPED;
  }
  if (this_ptr->render_in_background_when_not_moving_flag != 0) {
    if (bVar15) {
      pcVar12 = &stack0xfffffc64;
      pcVar9 = this_ptr->camera_while_moving;
      name = &stack0xfffffc64;
      do {
        cVar17 = *pcVar9;
        *pcVar12 = cVar17;
        if (cVar17 == '\0') break;
        cVar17 = pcVar9[1];
        pcVar9 = pcVar9 + 2;
        pcVar12[1] = cVar17;
        pcVar12 = pcVar12 + 2;
      } while (cVar17 != '\0');
      cVar17 = (char)in_stack_fffffc64;
      while (pcVar9 = name, cVar17 != '\0') {
        while (*pcVar9 != ';') {
          pcVar9 = pcVar9 + 1;
          if (*pcVar9 == '\0') goto LAB_00539950;
        }
        *pcVar9 = '\0';
        iVar3 = core_set_cpp_CDemonSet_findCameraByName_FUN_0054fba0(g_CDemonSetPtr,name);
        if ((iVar3 != -1) && (iVar3 != g_CDemonSetPtr->selected_camera_index)) {
          core_setdir_cpp_CDemonSet_setPendingCamera_FUN_0055b1e0(g_CDemonSetPtr,iVar3,999.0);
          this_ptr->rendered_in_background = 0;
          break;
        }
        name = pcVar9 + 1;
        cVar17 = *name;
      }
LAB_00539950:
      iVar3 = core_set_cpp_CDemonSet_findCameraByName_FUN_0054fba0(g_CDemonSetPtr,name);
      if ((iVar3 != -1) && (iVar3 != g_CDemonSetPtr->selected_camera_index)) {
        core_setdir_cpp_CDemonSet_setPendingCamera_FUN_0055b1e0(g_CDemonSetPtr,iVar3,999.0);
        this_ptr->rendered_in_background = 0;
      }
    }
    if (CStack_28.x != 0.0) {
      core_setdir_cpp_CDemonSet_clearCameraSwitchCooldown_FUN_0055b200(g_CDemonSetPtr);
    }
  }
  if (this_ptr->param != local_38[2]) {
    if ((local_38[3] == 0.0) || (this_ptr->active_sound[0] == '\0')) {
      core_sound_cpp_CSound_killSound_FUN_0057d9d0(0x02C82A60,this_ptr->sfx_handle);
    }
    else {
      iVar3 = core_sound_cpp_CSound_isSoundPlaying_FUN_0057d9c0(0x02C82A60,this_ptr->sfx_handle);
      if (iVar3 == 0) {
        uVar4 = (*((this_ptr->base).vtable._ub)->playAmbientSound)
                          (&this_ptr->base,this_ptr->active_sound);
        this_ptr->sfx_handle = uVar4;
      }
    }
    euler_angles = &(this_ptr->base).orient;
    position = &(this_ptr->base).location;
    local_38[1] = (this_ptr->base).location.position.y;
    core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005b5620
              ((CMatrix3x4f *)auStack_26c,&position->position,&euler_angles->vec);
    core_platfrm_cpp_CPlatform_evaluatePosition_FUN_00539660(this_ptr);
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005b5760
              ((CMatrix3x4f *)auStack_29c,&position->position,&euler_angles->vec);
    (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,in_stack_fffffc58);
    ppCVar10 = &SStack_13c.deformable_model;
    puVar13 = auStack_104;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar13 = *ppCVar10;
      ppCVar10 = ppCVar10 + (uint)bVar16 * -2 + 1;
      puVar13 = puVar13 + (uint)bVar16 * -2 + 1;
    }
    iStack_18 = 0;
    for (iVar3 = 0; iVar3 < g_CDemonSetPtr->character_count; iVar3 = iVar3 + 1) {
      this_ptr_00 = *(CCharacter **)((int)g_CDemonSetPtr->characters + iStack_18);
      EVar5 = (*(((this_ptr_00->base).vtable._uc)->_uc).getDeathState)(this_ptr_00);
      if (((int)EVar5 < 1) &&
         (in_stack_fffffc60 = this_ptr_00,
         iVar8 = (*((this_ptr_00->base).vtable._ub)->shouldIgnoreForTargeting)(&this_ptr_00->base),
         iVar8 == 0)) {
        if (this_ptr->push_flag == 0) {
          if (((this_ptr->base).location.position.y < CStack_28.y) &&
             (in_stack_fffffc60 = (CCharacter *)this_ptr,
             iVar8 = core_platfrm_cpp_CPlatform_isActorOnPlatform_FUN_0053ab00
                               (this_ptr,&this_ptr_00->base), iVar8 != 0)) {
            in_stack_fffffc60 = (CCharacter *)0x0;
            (*(((this_ptr_00->base).vtable._uc)->_uc).kill)(this_ptr_00,8,(CVector3f *)0x0,-1.0);
          }
        }
        else {
          in_stack_fffffc60 = (CCharacter *)this_ptr;
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0
                    (&this_ptr->base,&(this_ptr_00->base).location.position,
                     (CVector3f *)(auStack_88 + 4));
          CStack_b4.x = (float)auStack_88._4_4_;
          *(float *)((int)&CStack_b4 + (uint)bVar16 * -8 + 4) = afStack_80[(uint)bVar16 * -2];
          *(float *)((int)&CStack_b4 + ((uint)bVar16 * -2 + (uint)bVar16 * -2) * 4 + 8) =
               afStack_80[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1];
          if ((CStack_b4.y <= fStack_ec) && (fStack_f8 + (float)_DAT_005ed423 <= CStack_b4.y)) {
            in_stack_fffffc60 = (CCharacter *)(auStack_104 + 2);
            core_box_cpp_CBoundingBox3D_clampPoint_FUN_00421af0
                      ((CBoundingBox3D *)in_stack_fffffc60,&CStack_b4,&CStack_a8);
            fVar1 = CStack_b4.y;
            fVar7 = CStack_b4.x;
            fStack_9c = CStack_a8.x;
            afStack_98[(uint)bVar16 * -2] = *(float *)((int)&CStack_a8 + (uint)bVar16 * -8 + 4);
            afStack_98[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1] =
                 *(float *)((int)&CStack_a8 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8);
            afStack_e4[3] = fVar7 - fStack_9c;
            afStack_d4[0] = fVar1 - afStack_98[0];
            afStack_d4[1] = CStack_b4.z - afStack_98[1];
            fStack_3c = fVar7 - fStack_9c;
            local_38[(uint)bVar16 * -2] = afStack_d4[(uint)bVar16 * -2];
            local_38[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1] =
                 afStack_d4[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1];
            if ((ABS(fStack_3c) <= (float)_DAT_005ed42b) &&
               (ABS(local_38[1]) <= (float)_DAT_005ed42b)) {
              local_38[0] = 0.0;
              core_setcolid_cpp_SCollisionInfo_ctor_FUN_005593c0(&SStack_13c);
              SStack_13c.ray_query.ray_type = 0;
              in_stack_fffffc60 = this_ptr_00;
              EVar6 = (*((this_ptr_00->base).vtable._ub)->getCollisionType)
                                (&this_ptr_00->base,&SStack_13c);
              if ((((EVar6 == COLLISION_TYPE_CYLINDER) &&
                   (CStack_a8.x + SStack_13c.cylinder_radius <= afStack_e4[0])) &&
                  (fStack_f0 <= CStack_a8.x + (float)SStack_13c.deformable_model)) &&
                 ((fVar7 = local_38[1] * local_38[1] + local_38[3] * local_38[3],
                  fVar7 <= (float)SStack_13c.keyframed_model * (float)SStack_13c.keyframed_model &&
                  (fVar7 = SQRT(fVar7), 0.0 < fVar7)))) {
                this_ptr = (CPlatform *)
                           (((float)SStack_13c.keyframed_model + (float)_DAT_005ed433) / fVar7);
                local_38[1] = local_38[1] * (float)this_ptr;
                local_38[3] = local_38[3] * (float)this_ptr;
                input_local_point = (CVector3f *)auStack_88;
                local_38[2] = (float)this_ptr * 0.0;
                afStack_58[0] = afStack_98[1] + local_38[1];
                afStack_58[1] = afStack_98[2] + (float)this_ptr * 0.0;
                afStack_58[2] = afStack_98[3] + local_38[3];
                auStack_88._0_4_ = afStack_58[0];
                afStack_80[(uint)bVar16 * -2 + -1] = afStack_58[(uint)bVar16 * -2 + 1];
                afStack_80[(uint)bVar16 * -2 + (uint)bVar16 * -2] =
                     afStack_58[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 2];
                core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
                          ((CDemonActor *)this_ptr,input_local_point,&CStack_28);
                CStack_70.x = CStack_28.x;
                *(uint *)((int)&CStack_70 + (uint)bVar16 * -8 + 4) =
                     *(uint *)((int)&CStack_28 + (uint)bVar16 * -8 + 4);
                *(uint *)((int)&CStack_70 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
                     *(uint *)((int)&CStack_28 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8);
                CStack_70.y = (this_ptr_00->base).location.position.y;
                in_stack_fffffc60 = (CCharacter *)0x53a10e;
                (*((this_ptr_00->base).vtable._ub)->setPositionAndOrientation)
                          (&this_ptr_00->base,&CStack_70,&(this_ptr_00->base).orient.vec);
              }
            }
          }
        }
      }
      iStack_18 = iStack_18 + 4;
    }
    iStack_1c = 0;
    for (iStack_14 = 0; iStack_14 < g_CDemonSetPtr->actor_count; iStack_14 = iStack_14 + 1) {
      iVar3 = *(int *)((int)g_CDemonSetPtr->actors + iStack_1c);
      if (this_ptr == *(CPlatform **)(iVar3 + 0xdc)) {
        core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005b5760
                  (&CStack_204,(CVector3f *)(iVar3 + 0x20),(CVector3f *)(iVar3 + 0x30));
        core_xform_cpp_multiplyMatrix3x4_FUN_005b5200
                  (&CStack_204,(CMatrix3x4f *)(auStack_26c + 8),&CStack_1a4);
        pCVar11 = &CStack_1a4;
        pCVar14 = &CStack_1d4;
        for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
          pCVar14->m[0].w = pCVar11->m[0].w;
          pCVar11 = (CMatrix3x4f *)((int)pCVar11 + ((uint)bVar16 * -2 + 1) * 4);
          pCVar14 = (CMatrix3x4f *)((int)pCVar14 + ((uint)bVar16 * -2 + 1) * 4);
        }
        core_xform_cpp_multiplyMatrix3x4_FUN_005b5200
                  (&CStack_1d4,(CMatrix3x4f *)(auStack_29c + 8),&CStack_174);
        pCVar11 = &CStack_174;
        pCVar14 = &CStack_234;
        for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
          pCVar14->m[0].w = pCVar11->m[0].w;
          pCVar11 = (CMatrix3x4f *)((int)pCVar11 + ((uint)bVar16 * -2 + 1) * 4);
          pCVar14 = (CMatrix3x4f *)((int)pCVar14 + ((uint)bVar16 * -2 + 1) * 4);
        }
        afStack_80[3] = CStack_234.m[0].z;
        CStack_70.x = CStack_234.m[1].z;
        CStack_70.y = CStack_234.m[2].z;
        fStack_5c = CStack_234.m[0].z;
        afStack_58[(uint)bVar16 * -2] = *(float *)((int)&CStack_70 + (uint)bVar16 * -8);
        afStack_58[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1] =
             *(float *)((int)&CStack_70 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 4);
        core_xform_cpp_matrixToEulerAngles_FUN_005b5930(&CStack_234,(CVector3f *)in_stack_fffffc60);
        fVar2 = afStack_58[1];
        fVar1 = afStack_58[0];
        fVar7 = fStack_5c;
        afStack_58[2] = UStack_cc.vec.y;
        afStack_58[(uint)bVar16 * -2 + 3] = afStack_c0[(uint)bVar16 * -2 + -1];
        afStack_58[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 4] =
             afStack_c0[(uint)bVar16 * -2 + (uint)bVar16 * -2];
        afStack_d4[0] = fVar7 - ((CVector3f *)(iVar3 + 0x20))->x;
        afStack_d4[1] = fVar1 - *(float *)(iVar3 + 0x24);
        UStack_cc.vec.x = fVar2 - *(float *)(iVar3 + 0x28);
        fStack_ec = afStack_d4[0];
        afStack_e4[(uint)bVar16 * -2 + -1] = afStack_d4[(uint)bVar16 * -2 + 1];
        afStack_e4[(uint)bVar16 * -2 + (uint)bVar16 * -2] =
             *(float *)((int)&UStack_cc + ((uint)bVar16 * -2 + (uint)bVar16 * -2) * 4);
        if ((float *)(iVar3 + 0xe0) != &fStack_ec) {
          *(float *)(iVar3 + 0xe0) = fStack_ec;
          *(uint *)(iVar3 + 0xe4) = uStack_e8;
          *(float *)(iVar3 + 0xe8) = afStack_e4[0];
        }
        *(uint *)(iVar3 + 0xec) = 0;
        *(uint *)(iVar3 + 0xf4) = 0;
        fVar7 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                          (afStack_58[3] - *(float *)(iVar3 + 0x34));
        *(float *)(iVar3 + 0xf0) = fVar7;
      }
      iStack_1c = iStack_1c + 4;
    }
    core_platfrm_cpp_CPlatform_updateAttachedActors_FUN_0053aef0(this_ptr);
  }
  return;
}
