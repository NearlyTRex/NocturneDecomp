// Name: core_platfrm.cpp_CPlatform_process_FUN_005114f0
// Address: 005114f0
// Address Range: [[005114f0, 00512014]]
// Convention: __cdecl
// Signature: void __cdecl core_platfrm_cpp_CPlatform_process_FUN_005114f0(CPlatform *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_platfrm_cpp_CPlatform_process_FUN_005114f0(CPlatform *this_ptr,float delta_time)

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
  float *pfVar15;
  bool bVar16;
  byte bVar17;
  float afStackY_10d4 [838];
  CBoundingBox3D *in_stack_fffffc58;
  char cVar18;
  uint in_stack_fffffc64;
  byte auStack_29c [8];
  byte auStack_294 [48];
  CMatrix3x4f CStack_264;
  float afStack_234 [3];
  float fStack_228;
  float fStack_218;
  float fStack_208;
  CMatrix3x4f CStack_204;
  CMatrix3x4f CStack_1d4;
  CMatrix3x4f CStack_1a4;
  CMatrix3x4f CStack_174;
  SCollisionInfo SStack_13c;
  uint auStack_104 [2];
  byte auStack_fc [4];
  float fStack_f8;
  float fStack_f0;
  float fStack_ec;
  uint uStack_e8;
  float afStack_e4 [4];
  float afStack_d4 [8];
  float fStack_b4;
  float afStack_b0 [5];
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float afStack_84 [4];
  float fStack_74;
  CVector3f CStack_70;
  float fStack_5c;
  float afStack_58 [7];
  float fStack_3c;
  float afStack_38 [4];
  float fStack_28;
  float afStack_24 [2];
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  bVar17 = 0;
  if (1 < (int)this_ptr->one_shot) {
    return;
  }
  bVar16 = false;
  afStack_38[0] = this_ptr->param;
  afStack_38[2] = 0.0;
  afStack_38[1] = 0.0;
  switch(this_ptr->state) {
  case PLATFORM_STATE_TYPE_AT_START:
    iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                      (0x01C6E360,this_ptr->to_end_event);
    bVar16 = iVar3 != 0;
    if (bVar16) {
      core_platfrm_cpp_CPlatform_startMovement_FUN_00512020
                (this_ptr,1.0,1.0 / this_ptr->travel_time_to_end);
    }
    this_ptr->param = 0.0;
    break;
  case PLATFORM_STATE_TYPE_AT_END:
    iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                      (0x01C6E360,this_ptr->to_start_event);
    bVar16 = iVar3 != 0;
    if (bVar16) {
      core_platfrm_cpp_CPlatform_startMovement_FUN_00512020
                (this_ptr,0.0,1.0 / this_ptr->travel_time_to_start);
    }
    this_ptr->param = 1.0;
    break;
  case PLATFORM_STATE_TYPE_STOPPED:
    iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                      (0x01C6E360,this_ptr->to_end_event);
    if (iVar3 == 0) {
      iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                        (0x01C6E360,this_ptr->to_start_event);
      if (iVar3 != 0) {
        core_platfrm_cpp_CPlatform_startMovement_FUN_00512020
                  (this_ptr,0.0,1.0 / this_ptr->travel_time_to_start);
      }
    }
    else {
      core_platfrm_cpp_CPlatform_startMovement_FUN_00512020
                (this_ptr,1.0,1.0 / this_ptr->travel_time_to_end);
    }
    break;
  case PLATFORM_STATE_TYPE_MOVING_TO_END:
    iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                      (0x01C6E360,this_ptr->stop_event);
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
LAB_00511982:
      afStack_38[1] = 1.4013e-45;
      break;
    }
    this_ptr->param = this_ptr->goal_param;
    if (1.0 <= this_ptr->param) {
      this_ptr->state = PLATFORM_STATE_TYPE_AT_END;
      if (this_ptr->one_shot != ONE_SHOT_NO) {
        this_ptr->one_shot = ONE_SHOT_DONE;
      }
      afStack_38[2] = 1.4013e-45;
      break;
    }
    goto LAB_00511970;
  case PLATFORM_STATE_TYPE_MOVING_TO_START:
    iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                      (0x01C6E360,this_ptr->stop_event);
    if (iVar3 != 0) {
      this_ptr->state = PLATFORM_STATE_TYPE_STOPPED;
      if (this_ptr->stop_sound[0] != '\0') {
        (*((this_ptr->base).vtable._ub)->playSound)(&this_ptr->base,this_ptr->stop_sound);
      }
      break;
    }
    fVar7 = this_ptr->param - delta_time * this_ptr->current_movement_rate;
    this_ptr->param = fVar7;
    if (this_ptr->goal_param <= fVar7) goto LAB_00511982;
    this_ptr->param = this_ptr->goal_param;
    if (this_ptr->param <= 0.0) {
      this_ptr->state = PLATFORM_STATE_TYPE_AT_START;
      if (this_ptr->one_shot != ONE_SHOT_NO) {
        this_ptr->one_shot = ONE_SHOT_DONE;
      }
      afStack_38[2] = 1.4013e-45;
      break;
    }
LAB_00511970:
    this_ptr->state = PLATFORM_STATE_TYPE_STOPPED;
  }
  if (this_ptr->render_in_background_when_not_moving_flag != 0) {
    if (bVar16) {
      pcVar12 = &stack0xfffffc64;
      pcVar9 = this_ptr->camera_while_moving;
      name = &stack0xfffffc64;
      do {
        cVar18 = *pcVar9;
        *pcVar12 = cVar18;
        if (cVar18 == '\0') break;
        cVar18 = pcVar9[1];
        pcVar9 = pcVar9 + 2;
        pcVar12[1] = cVar18;
        pcVar12 = pcVar12 + 2;
      } while (cVar18 != '\0');
      cVar18 = (char)in_stack_fffffc64;
      while (pcVar9 = name, cVar18 != '\0') {
        while (*pcVar9 != ';') {
          pcVar9 = pcVar9 + 1;
          if (*pcVar9 == '\0') goto LAB_00511630;
        }
        *pcVar9 = '\0';
        iVar3 = core_set_cpp_CDemonSet_findCameraByName_FUN_00535360(g_CDemonSetPtr,name);
        if ((iVar3 != -1) && (iVar3 != g_CDemonSetPtr->selected_camera_index)) {
          core_setdir_cpp_CDemonSet_setPendingCamera_FUN_00540ba0(g_CDemonSetPtr,iVar3,999.0);
          this_ptr->rendered_in_background = 0;
          break;
        }
        name = pcVar9 + 1;
        cVar18 = *name;
      }
LAB_00511630:
      iVar3 = core_set_cpp_CDemonSet_findCameraByName_FUN_00535360(g_CDemonSetPtr,name);
      if ((iVar3 != -1) && (iVar3 != g_CDemonSetPtr->selected_camera_index)) {
        core_setdir_cpp_CDemonSet_setPendingCamera_FUN_00540ba0(g_CDemonSetPtr,iVar3,999.0);
        this_ptr->rendered_in_background = 0;
      }
    }
    if (fStack_28 != 0.0) {
      core_setdir_cpp_CDemonSet_clearCameraSwitchCooldown_FUN_00540bc0(g_CDemonSetPtr);
    }
  }
  if (this_ptr->param != afStack_38[2]) {
    if ((afStack_38[3] == 0.0) || (this_ptr->active_sound[0] == '\0')) {
      core_sound_cpp_CSound_killSound_FUN_00560b00(0x02CF5680,this_ptr->sfx_handle);
    }
    else {
      iVar3 = core_sound_cpp_CSound_isSoundPlaying_FUN_00560af0(0x02CF5680,this_ptr->sfx_handle);
      if (iVar3 == 0) {
        uVar4 = (*((this_ptr->base).vtable._ub)->playAmbientSound)
                          (&this_ptr->base,this_ptr->active_sound);
        this_ptr->sfx_handle = uVar4;
      }
    }
    euler_angles = &(this_ptr->base).orient;
    position = &(this_ptr->base).location;
    afStack_38[1] = (this_ptr->base).location.position.y;
    core_xform_cpp_FUN_00583800
              ((CMatrix3x4f *)(auStack_294 + 0x28),&position->position,&euler_angles->vec);
    core_platfrm_cpp_CPlatform_evaluatePosition_FUN_00511340(this_ptr);
    core_xform_cpp_FUN_00583940(auStack_29c,position,euler_angles);
    (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,in_stack_fffffc58);
    ppCVar10 = &SStack_13c.deformable_model;
    puVar13 = auStack_104;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar13 = *ppCVar10;
      ppCVar10 = ppCVar10 + (uint)bVar17 * -2 + 1;
      puVar13 = puVar13 + (uint)bVar17 * -2 + 1;
    }
    iStack_18 = 0;
    for (iVar3 = 0; iVar3 < g_CDemonSetPtr->character_count; iVar3 = iVar3 + 1) {
      this_ptr_00 = *(CCharacter **)((int)g_CDemonSetPtr->characters + iStack_18);
      EVar5 = (*(((this_ptr_00->base).vtable._uc)->_uc).getDeathState)(this_ptr_00);
      if (((int)EVar5 < 1) &&
         (iVar8 = (*((this_ptr_00->base).vtable._ub)->shouldIgnoreForTargeting)(&this_ptr_00->base),
         iVar8 == 0)) {
        if (this_ptr->push_flag == 0) {
          if (((this_ptr->base).location.position.y < afStack_24[0]) &&
             (iVar8 = core_platfrm_cpp_CPlatform_isActorOnPlatform_FUN_005127f0
                                (this_ptr,&this_ptr_00->base), iVar8 != 0)) {
            (*(((this_ptr_00->base).vtable._uc)->_uc).kill)(this_ptr_00,8,(CVector3f *)0x0,-1.0);
          }
        }
        else {
          core_actor_cpp_FUN_00408bf0(this_ptr);
          fStack_b4 = afStack_84[0];
          afStack_b0[(uint)bVar17 * -2] = afStack_84[(uint)bVar17 * -2 + 1];
          afStack_b0[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1] =
               afStack_84[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 2];
          if ((afStack_b0[0] <= fStack_ec) && (fStack_f8 + (float)_DAT_005cc28b <= afStack_b0[0])) {
            core_box_cpp_FUN_0041ee30(auStack_fc);
            fVar1 = afStack_b0[0];
            fVar7 = fStack_b4;
            fStack_9c = afStack_b0[2];
            afStack_b0[(uint)bVar17 * -2 + 6] = afStack_b0[(uint)bVar17 * -2 + 3];
            afStack_b0[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 7] =
                 afStack_b0[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 4];
            afStack_e4[3] = fVar7 - fStack_9c;
            afStack_d4[0] = fVar1 - fStack_98;
            afStack_d4[1] = afStack_b0[1] - fStack_94;
            fStack_3c = fVar7 - fStack_9c;
            afStack_38[(uint)bVar17 * -2] = afStack_d4[(uint)bVar17 * -2];
            afStack_38[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1] =
                 afStack_d4[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1];
            if ((ABS(fStack_3c) <= (float)_DAT_005cc293) &&
               (ABS(afStack_38[1]) <= (float)_DAT_005cc293)) {
              afStack_38[0] = 0.0;
              core_setcolid_cpp_SCollisionInfo_ctor_FUN_0053ed80(&SStack_13c);
              SStack_13c.ray_query.ray_type = 0;
              EVar6 = (*((this_ptr_00->base).vtable._ub)->getCollisionType)
                                (&this_ptr_00->base,&SStack_13c);
              if ((((EVar6 == COLLISION_TYPE_CYLINDER) &&
                   (afStack_b0[2] + SStack_13c.cylinder_radius <= afStack_e4[0])) &&
                  (fStack_f0 <= afStack_b0[2] + (float)SStack_13c.deformable_model)) &&
                 ((fVar7 = afStack_38[1] * afStack_38[1] + afStack_38[3] * afStack_38[3],
                  fVar7 <= (float)SStack_13c.keyframed_model * (float)SStack_13c.keyframed_model &&
                  (fVar7 = SQRT(fVar7), 0.0 < fVar7)))) {
                this_ptr = (CPlatform *)
                           (((float)SStack_13c.keyframed_model + (float)_DAT_005cc29b) / fVar7);
                afStack_38[1] = afStack_38[1] * (float)this_ptr;
                afStack_38[3] = afStack_38[3] * (float)this_ptr;
                afStack_38[2] = (float)this_ptr * 0.0;
                afStack_58[0] = fStack_94 + afStack_38[1];
                afStack_58[1] = fStack_90 + (float)this_ptr * 0.0;
                afStack_58[2] = fStack_8c + afStack_38[3];
                fStack_88 = afStack_58[0];
                afStack_84[(uint)bVar17 * -2] = afStack_58[(uint)bVar17 * -2 + 1];
                afStack_84[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1] =
                     afStack_58[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 2];
                core_actor_cpp_FUN_00408b80();
                CStack_70.x = fStack_28;
                *(float *)((int)&CStack_70 + (uint)bVar17 * -8 + 4) = afStack_24[(uint)bVar17 * -2];
                *(float *)((int)&CStack_70 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8) =
                     afStack_24[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1];
                CStack_70.y = (this_ptr_00->base).location.position.y;
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
        core_xform_cpp_FUN_00583940(&CStack_204,(float *)(iVar3 + 0x20),iVar3 + 0x30);
        core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(&CStack_204,&CStack_264,&CStack_1a4);
        pCVar11 = &CStack_1a4;
        pCVar14 = &CStack_1d4;
        for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
          pCVar14->m[0].w = pCVar11->m[0].w;
          pCVar11 = (CMatrix3x4f *)((int)pCVar11 + ((uint)bVar17 * -2 + 1) * 4);
          pCVar14 = (CMatrix3x4f *)((int)pCVar14 + ((uint)bVar17 * -2 + 1) * 4);
        }
        core_xform_cpp_multiplyMatrix3x4_FUN_005833e0
                  (&CStack_1d4,(CMatrix3x4f *)auStack_294,&CStack_174);
        pCVar11 = &CStack_174;
        pfVar15 = afStack_234;
        for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
          *pfVar15 = pCVar11->m[0].w;
          pCVar11 = (CMatrix3x4f *)((int)pCVar11 + ((uint)bVar17 * -2 + 1) * 4);
          pfVar15 = pfVar15 + (uint)bVar17 * -2 + 1;
        }
        fStack_74 = fStack_228;
        CStack_70.x = fStack_218;
        CStack_70.y = fStack_208;
        fStack_5c = fStack_228;
        afStack_58[(uint)bVar17 * -2] = *(float *)((int)&CStack_70 + (uint)bVar17 * -8);
        afStack_58[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1] =
             *(float *)((int)&CStack_70 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 4);
        core_xform_cpp_matrixToEulerAngles_FUN_00583b10(afStack_234);
        fVar2 = afStack_58[1];
        fVar1 = afStack_58[0];
        fVar7 = fStack_5c;
        afStack_58[2] = afStack_d4[3];
        afStack_58[(uint)bVar17 * -2 + 3] = afStack_d4[(uint)bVar17 * -2 + 4];
        afStack_58[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 4] =
             afStack_d4[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 5];
        afStack_d4[0] = fVar7 - *(float *)(iVar3 + 0x20);
        afStack_d4[1] = fVar1 - *(float *)(iVar3 + 0x24);
        afStack_d4[2] = fVar2 - *(float *)(iVar3 + 0x28);
        fStack_ec = afStack_d4[0];
        afStack_e4[(uint)bVar17 * -2 + -1] = afStack_d4[(uint)bVar17 * -2 + 1];
        afStack_e4[(uint)bVar17 * -2 + (uint)bVar17 * -2] =
             afStack_d4[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 2];
        if ((float *)(iVar3 + 0xe0) != &fStack_ec) {
          *(float *)(iVar3 + 0xe0) = fStack_ec;
          *(uint *)(iVar3 + 0xe4) = uStack_e8;
          *(float *)(iVar3 + 0xe8) = afStack_e4[0];
        }
        *(uint *)(iVar3 + 0xec) = 0;
        *(uint *)(iVar3 + 0xf4) = 0;
        fVar7 = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                          (afStack_58[3] - *(float *)(iVar3 + 0x34));
        *(float *)(iVar3 + 0xf0) = fVar7;
      }
      iStack_1c = iStack_1c + 4;
    }
    core_platfrm_cpp_FUN_00512be0(this_ptr);
  }
  return;
}
