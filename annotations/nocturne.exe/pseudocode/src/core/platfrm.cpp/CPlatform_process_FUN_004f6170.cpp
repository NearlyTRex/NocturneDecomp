// Name: core_platfrm.cpp_CPlatform_process_FUN_004f6170
// Address: 004f6170
// Address Range: [[004f6170, 004f6bc7]]
// Convention: __cdecl
// Signature: void __cdecl core_platfrm_cpp_CPlatform_process_FUN_004f6170(CPlatform *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_platfrm_cpp_CPlatform_process_FUN_004f6170(CPlatform *this_ptr,float delta_time)

{
  char cVar1;
  CCharacter *this_ptr_00;
  float fVar2;
  char *name;
  int iVar3;
  uint uVar4;
  EDeathState EVar5;
  int iVar6;
  ECollisionType EVar7;
  UOrientationVector *euler_angles;
  char *pcVar8;
  char *pcVar9;
  CLocation *position;
  uint *puVar10;
  float *pfVar11;
  char *pcVar12;
  int iVar13;
  uint *puVar14;
  CMatrix3x4f *pCVar15;
  bool bVar16;
  byte bVar17;
  char local_324 [256];
  CMatrix3x4f CStack_224;
  CMatrix3x4f CStack_1f4;
  CMatrix3x4f CStack_1c4;
  float afStack_194 [12];
  uint auStack_164 [12];
  uint auStack_134 [12];
  CMatrix3x4f CStack_104;
  SCollisionInfo SStack_d4;
  CBoundingBox3D CStack_ac;
  CVector3f CStack_94;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  CVector3f CStack_70;
  CVector3f CStack_64;
  CVector3f CStack_58;
  CVector3f CStack_4c;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float local_34;
  int local_30;
  int local_2c;
  float fStack_28;
  int iStack_24;
  int iStack_20;
  float fStack_1c;
  CVector3f *pCStack_18;
  
  bVar17 = 0;
  if (1 < this_ptr->one_shot) {
    return;
  }
  bVar16 = false;
  local_34 = this_ptr->param;
  local_30 = 0;
  local_2c = 0;
  switch(this_ptr->state) {
  case PLATFORM_STATE_TYPE_AT_START:
    iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                      (0x01C03A10,this_ptr->to_end_event);
    bVar16 = iVar3 != 0;
    if (bVar16) {
      core_platfrm_cpp_CPlatform_startMovement_FUN_004f6bd0
                (this_ptr,1.0,1.0 / this_ptr->travel_time_to_end);
    }
    this_ptr->param = 0.0;
    break;
  case PLATFORM_STATE_TYPE_AT_END:
    iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                      (0x01C03A10,this_ptr->to_start_event);
    bVar16 = iVar3 != 0;
    if (bVar16) {
      core_platfrm_cpp_CPlatform_startMovement_FUN_004f6bd0
                (this_ptr,0.0,1.0 / this_ptr->travel_time_to_start);
    }
    this_ptr->param = 1.0;
    break;
  case PLATFORM_STATE_TYPE_WTF:
    iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                      (0x01C03A10,this_ptr->to_end_event);
    if (iVar3 == 0) {
      iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                        (0x01C03A10,this_ptr->to_start_event);
      if (iVar3 != 0) {
        core_platfrm_cpp_CPlatform_startMovement_FUN_004f6bd0
                  (this_ptr,0.0,1.0 / this_ptr->travel_time_to_start);
      }
    }
    else {
      core_platfrm_cpp_CPlatform_startMovement_FUN_004f6bd0
                (this_ptr,1.0,1.0 / this_ptr->travel_time_to_end);
    }
    break;
  case PLATFORM_STATE_TYPE_WTF|PLATFORM_STATE_TYPE_AT_END:
    iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                      (0x01C03A10,this_ptr->stop_event);
    if (iVar3 != 0) {
      this_ptr->state = PLATFORM_STATE_TYPE_WTF;
      if (this_ptr->stop_sound[0] != '\0') {
        (*((this_ptr->base).vtable._ub)->playSound)(&this_ptr->base,this_ptr->stop_sound);
      }
      break;
    }
    fVar2 = delta_time * this_ptr->current_movement_rate + this_ptr->param;
    this_ptr->param = fVar2;
    if (fVar2 <= this_ptr->goal_param) {
LAB_004f65e2:
      local_2c = 1;
      break;
    }
    this_ptr->param = this_ptr->goal_param;
    if (1.0 <= this_ptr->param) {
      this_ptr->state = PLATFORM_STATE_TYPE_AT_END;
      if (this_ptr->one_shot != 0) {
        this_ptr->one_shot = 2;
      }
      local_30 = 1;
      break;
    }
    goto LAB_004f65d0;
  case 4:
    iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                      (0x01C03A10,this_ptr->stop_event);
    if (iVar3 != 0) {
      this_ptr->state = PLATFORM_STATE_TYPE_WTF;
      if (this_ptr->stop_sound[0] != '\0') {
        (*((this_ptr->base).vtable._ub)->playSound)(&this_ptr->base,this_ptr->stop_sound);
      }
      break;
    }
    fVar2 = this_ptr->param - delta_time * this_ptr->current_movement_rate;
    this_ptr->param = fVar2;
    if (this_ptr->goal_param <= fVar2) goto LAB_004f65e2;
    this_ptr->param = this_ptr->goal_param;
    if (this_ptr->param <= 0.0) {
      this_ptr->state = PLATFORM_STATE_TYPE_AT_START;
      if (this_ptr->one_shot != 0) {
        this_ptr->one_shot = 2;
      }
      local_30 = 1;
      break;
    }
LAB_004f65d0:
    this_ptr->state = PLATFORM_STATE_TYPE_WTF;
  }
  if (this_ptr->render_in_background_when_not_moving_flag != 0) {
    if (bVar16) {
      pcVar12 = local_324;
      pcVar9 = this_ptr->camera_while_moving;
      pcVar8 = local_324;
      do {
        cVar1 = *pcVar9;
        *pcVar12 = cVar1;
        name = pcVar8;
        if (cVar1 == '\0') break;
        cVar1 = pcVar9[1];
        pcVar9 = pcVar9 + 2;
        pcVar12[1] = cVar1;
        pcVar12 = pcVar12 + 2;
      } while (cVar1 != '\0');
joined_r0x004f6259:
      if (local_324[0] != '\0') {
        if (*pcVar8 == ';') {
          *pcVar8 = '\0';
          iVar3 = core_set_cpp_CDemonSet_findCameraByName_FUN_005090a0
                            (g_CDemonSet_PTR_005be368,name);
          if ((iVar3 != -1) && (iVar3 != g_CDemonSet_PTR_005be368->selected_camera_index)) {
            core_setdir_cpp_CDemonSet_setPendingCamera_FUN_005135d0
                      (g_CDemonSet_PTR_005be368,iVar3,999.0);
            this_ptr->rendered_in_background = 0;
            goto LAB_004f62b0;
          }
          pcVar8 = pcVar8 + 1;
          local_324[0] = *pcVar8;
          name = pcVar8;
        }
        else {
          pcVar8 = pcVar8 + 1;
          local_324[0] = *pcVar8;
        }
        goto joined_r0x004f6259;
      }
LAB_004f62b0:
      iVar3 = core_set_cpp_CDemonSet_findCameraByName_FUN_005090a0(g_CDemonSet_PTR_005be368,name);
      if ((iVar3 != -1) && (iVar3 != g_CDemonSet_PTR_005be368->selected_camera_index)) {
        core_setdir_cpp_CDemonSet_setPendingCamera_FUN_005135d0
                  (g_CDemonSet_PTR_005be368,iVar3,999.0);
        this_ptr->rendered_in_background = 0;
      }
    }
    if (local_30 != 0) {
      core_setdir_cpp_CDemonSet_clearCameraSwitchCooldown_FUN_005135f0(g_CDemonSet_PTR_005be368);
    }
  }
  if (this_ptr->param == local_34) {
    return;
  }
  if ((local_2c == 0) || (this_ptr->active_sound[0] == '\0')) {
    core_sound_cpp_CSound_killSound_FUN_0052ebb0(g_CSound_PTR_005bed68,this_ptr->sfx_handle);
  }
  else {
    iVar3 = core_sound_cpp_CSound_isSoundPlaying_FUN_0052eba0
                      (g_CSound_PTR_005bed68,this_ptr->sfx_handle);
    if (iVar3 == 0) {
      uVar4 = (*((this_ptr->base).vtable._ub)->playAmbientSound)
                        (&this_ptr->base,this_ptr->active_sound);
      this_ptr->sfx_handle = uVar4;
    }
  }
  euler_angles = &(this_ptr->base).orient;
  position = &(this_ptr->base).location;
  fStack_28 = (this_ptr->base).location.position.y;
  core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_0055ae80
            (&CStack_224,&position->position,&euler_angles->vec);
  core_platfrm_cpp_CPlatform_evaluatePosition_FUN_004f5ff0(this_ptr);
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
            (&CStack_104,&position->position,&euler_angles->vec);
  iVar3 = 0;
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&CStack_ac);
  iVar13 = 0;
  do {
    while( true ) {
      if (g_CDemonSet_PTR_005be368->character_count <= iVar13) {
        iStack_24 = 0;
        for (iStack_20 = 0; iStack_20 < g_CDemonSet_PTR_005be368->actor_count;
            iStack_20 = iStack_20 + 1) {
          iVar3 = *(int *)((int)g_CDemonSet_PTR_005be368->actors + iStack_24);
          if (this_ptr == *(CPlatform **)(iVar3 + 0xdc)) {
            pCStack_18 = (CVector3f *)(iVar3 + 0x20);
            core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
                      (&CStack_1c4,pCStack_18,(CVector3f *)(iVar3 + 0x30));
            core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(&CStack_1c4,&CStack_224);
            puVar10 = auStack_134;
            puVar14 = auStack_164;
            for (iVar13 = 0xc; iVar13 != 0; iVar13 = iVar13 + -1) {
              *puVar14 = *puVar10;
              puVar10 = puVar10 + (uint)bVar17 * -2 + 1;
              puVar14 = puVar14 + (uint)bVar17 * -2 + 1;
            }
            core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(auStack_164,&CStack_104);
            pfVar11 = afStack_194;
            pCVar15 = &CStack_1f4;
            for (iVar13 = 0xc; iVar13 != 0; iVar13 = iVar13 + -1) {
              pCVar15->m[0].w = *pfVar11;
              pfVar11 = pfVar11 + (uint)bVar17 * -2 + 1;
              pCVar15 = (CMatrix3x4f *)((int)pCVar15 + ((uint)bVar17 * -2 + 1) * 4);
            }
            fStack_7c = CStack_1f4.m[0].z;
            fStack_78 = CStack_1f4.m[1].z;
            fStack_74 = CStack_1f4.m[2].z;
            core_xform_cpp_matrixToEulerAngles_FUN_0055b180(&CStack_1f4,&CStack_94);
            fStack_88 = fStack_7c - pCStack_18->x;
            fStack_84 = fStack_78 - pCStack_18->y;
            fStack_80 = fStack_74 - pCStack_18->z;
            if ((float *)(iVar3 + 0xe0) != &fStack_88) {
              *(float *)(iVar3 + 0xe0) = fStack_88;
              *(float *)(iVar3 + 0xe4) = fStack_84;
              *(float *)(iVar3 + 0xe8) = fStack_80;
            }
            *(uint *)(iVar3 + 0xec) = 0;
            *(uint *)(iVar3 + 0xf4) = 0;
            pCStack_18 = (CVector3f *)
                         core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                                   (CStack_94.y - *(float *)(iVar3 + 0x34));
            *(CVector3f **)(iVar3 + 0xf0) = pCStack_18;
          }
          iStack_24 = iStack_24 + 4;
        }
        core_platfrm_cpp_CPlatform_updateAttachedActors_FUN_004f7700(this_ptr);
        return;
      }
      this_ptr_00 = *(CCharacter **)((int)g_CDemonSet_PTR_005be368->characters + iVar3);
      EVar5 = (*(((this_ptr_00->base).vtable._uc)->_uc).getDeathState)(this_ptr_00);
      if (((int)EVar5 < 1) &&
         (iVar6 = (*((this_ptr_00->base).vtable._ub)->shouldIgnoreForTargeting)(&this_ptr_00->base),
         iVar6 == 0)) break;
LAB_004f6a33:
      iVar13 = iVar13 + 1;
      iVar3 = iVar3 + 4;
    }
    if (this_ptr->push_flag == 0) {
      if (((this_ptr->base).location.position.y < fStack_28) &&
         (iVar6 = core_platfrm_cpp_FUN_004f7360(this_ptr,&this_ptr_00->base), iVar6 != 0)) {
        (*(((this_ptr_00->base).vtable._uc)->_uc).kill)(this_ptr_00,8,(CVector3f *)0x0,-1.0);
      }
      goto LAB_004f6a33;
    }
    core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
              (&this_ptr->base,&CStack_4c,&(this_ptr_00->base).location.position);
    if ((CStack_ac.max.y < CStack_4c.y) || (CStack_4c.y < CStack_ac.min.y + (float)-20))
    goto LAB_004f6a33;
    core_box_cpp_CBoundingBox3D_clampPoint_FUN_0041e160(&CStack_ac,&CStack_70,&CStack_4c);
    fStack_40 = CStack_4c.x - CStack_70.x;
    fStack_3c = CStack_4c.y - CStack_70.y;
    fStack_38 = CStack_4c.z - CStack_70.z;
    if (((float)10 < ABS(fStack_40)) || ((float)10 < ABS(fStack_38)))
    goto LAB_004f6a33;
    fStack_3c = 0.0;
    core_setcolid_cpp_SCollisionInfo_ctor_FUN_00511990(&SStack_d4);
    SStack_d4.ray_query.ray_type = 0;
    EVar7 = (*((this_ptr_00->base).vtable._ub)->getCollisionType)(&this_ptr_00->base,&SStack_d4);
    if ((((EVar7 != COLLISION_TYPE_CYLINDER) ||
         (CStack_ac.max.y < CStack_4c.y + SStack_d4.cylinder_bottom_y)) ||
        (CStack_4c.y + SStack_d4.cylinder_top_y < CStack_ac.min.y)) ||
       ((fVar2 = fStack_40 * fStack_40 + fStack_38 * fStack_38,
        SStack_d4.cylinder_radius * SStack_d4.cylinder_radius < fVar2 ||
        (fVar2 = SQRT(fVar2), fVar2 <= 0.0)))) goto LAB_004f6a33;
    fStack_1c = (SStack_d4.cylinder_radius + (float)0.050000000000000003) / fVar2;
    fStack_40 = fStack_40 * fStack_1c;
    fStack_3c = fStack_3c * fStack_1c;
    fStack_38 = fStack_38 * fStack_1c;
    CStack_58.x = CStack_70.x + fStack_40;
    CStack_58.y = CStack_70.y + fStack_3c;
    CStack_58.z = CStack_70.z + fStack_38;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(&this_ptr->base,&CStack_64,&CStack_58)
    ;
    CStack_64.y = (this_ptr_00->base).location.position.y;
    (*((this_ptr_00->base).vtable._ub)->setPositionAndOrientation)
              (&this_ptr_00->base,&CStack_64,(CVector3f *)&(this_ptr_00->base).orient);
    iVar13 = iVar13 + 1;
    iVar3 = iVar3 + 4;
  } while( true );
}
