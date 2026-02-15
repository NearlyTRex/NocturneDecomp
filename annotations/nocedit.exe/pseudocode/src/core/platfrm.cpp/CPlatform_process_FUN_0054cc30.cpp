// Name: core_platfrm.cpp_CPlatform_process_FUN_0054cc30
// Address: 0054cc30
// Address Range: [[0054cc30, 0054d687]]
// Convention: __cdecl
// Signature: void __cdecl core_platfrm_cpp_CPlatform_process_FUN_0054cc30(CPlatform *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_platfrm_cpp_CPlatform_process_FUN_0054cc30(CPlatform *this_ptr,float delta_time)

{
  char cVar1;
  int iVar2;
  char *name;
  int iVar3;
  uint uVar4;
  int iVar5;
  UOrientationVector *euler_angles;
  char *pcVar6;
  char *pcVar7;
  CLocation *position;
  CMatrix3x4f *pCVar8;
  char *pcVar9;
  int iVar10;
  CMatrix3x4f *pCVar11;
  CMatrix3x3f *pCVar12;
  bool bVar13;
  byte bVar14;
  double dVar15;
  float fVar16;
  char local_324 [256];
  CMatrix3x4f local_224;
  CMatrix3x3f CStack_1f4;
  float fStack_1c8;
  CMatrix3x4f CStack_1c4;
  CMatrix3x4f CStack_194;
  CMatrix3x4f CStack_164;
  CMatrix3x4f CStack_134;
  CMatrix3x4f local_104;
  SCollisionInfo SStack_d4;
  CBoundingBox3D local_ac;
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
  float local_28;
  int iStack_24;
  int iStack_20;
  float fStack_1c;
  CVector3f *pCStack_18;
  
  bVar14 = 0;
  if (1 < this_ptr->one_shot) {
    return;
  }
  bVar13 = false;
  local_34 = this_ptr->param;
  local_30 = 0;
  local_2c = 0;
  switch(this_ptr->state) {
  case PLATFORM_STATE_TYPE_AT_START:
    iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                      (g_CEventListPtr,this_ptr->to_end_event);
    bVar13 = iVar3 != 0;
    if (bVar13) {
      core_platfrm_cpp_CPlatform_FUN_0054d690(this_ptr);
    }
    this_ptr->param = 0.0;
    break;
  case PLATFORM_STATE_TYPE_AT_END:
    iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                      (g_CEventListPtr,this_ptr->to_start_event);
    bVar13 = iVar3 != 0;
    if (bVar13) {
      core_platfrm_cpp_CPlatform_FUN_0054d690(this_ptr);
    }
    this_ptr->param = 1.0;
    break;
  case PLATFORM_STATE_TYPE_WTF:
    iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                      (g_CEventListPtr,this_ptr->to_end_event);
    if (iVar3 == 0) {
      iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                        (g_CEventListPtr,this_ptr->to_start_event);
      if (iVar3 != 0) {
        core_platfrm_cpp_CPlatform_FUN_0054d690(this_ptr);
      }
    }
    else {
      core_platfrm_cpp_CPlatform_FUN_0054d690(this_ptr);
    }
    break;
  case PLATFORM_STATE_TYPE_WTF|PLATFORM_STATE_TYPE_AT_END:
    iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                      (g_CEventListPtr,this_ptr->stop_event);
    if (iVar3 != 0) {
      this_ptr->state = PLATFORM_STATE_TYPE_WTF;
      if (this_ptr->stop_sound[0] != '\0') {
        (*((this_ptr->base).vtable._ub)->playSound)(&this_ptr->base,this_ptr->stop_sound);
      }
      break;
    }
    fVar16 = delta_time * this_ptr->current_movement_rate + this_ptr->param;
    this_ptr->param = fVar16;
    if (fVar16 <= this_ptr->goal_param) {
LAB_0054d0a2:
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
    goto LAB_0054d090;
  case 4:
    iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                      (g_CEventListPtr,this_ptr->stop_event);
    if (iVar3 != 0) {
      this_ptr->state = PLATFORM_STATE_TYPE_WTF;
      if (this_ptr->stop_sound[0] != '\0') {
        (*((this_ptr->base).vtable._ub)->playSound)(&this_ptr->base,this_ptr->stop_sound);
      }
      break;
    }
    fVar16 = this_ptr->param - delta_time * this_ptr->current_movement_rate;
    this_ptr->param = fVar16;
    if (this_ptr->goal_param <= fVar16) goto LAB_0054d0a2;
    this_ptr->param = this_ptr->goal_param;
    if (this_ptr->param <= 0.0) {
      this_ptr->state = PLATFORM_STATE_TYPE_AT_START;
      if (this_ptr->one_shot != 0) {
        this_ptr->one_shot = 2;
      }
      local_30 = 1;
      break;
    }
LAB_0054d090:
    this_ptr->state = PLATFORM_STATE_TYPE_WTF;
  }
  if (this_ptr->render_in_background_when_not_moving_flag != 0) {
    if (bVar13) {
      pcVar9 = local_324;
      pcVar7 = this_ptr->camera_while_moving;
      pcVar6 = local_324;
      do {
        cVar1 = *pcVar7;
        *pcVar9 = cVar1;
        name = pcVar6;
        if (cVar1 == '\0') break;
        cVar1 = pcVar7[1];
        pcVar7 = pcVar7 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
joined_r0x0054cd19:
      if (local_324[0] != '\0') {
        if (*pcVar6 == ';') {
          *pcVar6 = '\0';
          iVar3 = core_set_cpp_CDemonSet_findCameraByName_FUN_0056b790(g_CDemonSetPtr,name);
          if ((iVar3 != -1) && (iVar3 != g_CDemonSetPtr->selected_camera_index)) {
            core_setdir_cpp_CDemonSet_setPendingCamera_FUN_00575b00(g_CDemonSetPtr,iVar3,999.0);
            this_ptr->unk3 = 0;
            goto LAB_0054cd70;
          }
          pcVar6 = pcVar6 + 1;
          local_324[0] = *pcVar6;
          name = pcVar6;
        }
        else {
          pcVar6 = pcVar6 + 1;
          local_324[0] = *pcVar6;
        }
        goto joined_r0x0054cd19;
      }
LAB_0054cd70:
      iVar3 = core_set_cpp_CDemonSet_findCameraByName_FUN_0056b790(g_CDemonSetPtr,name);
      if ((iVar3 != -1) && (iVar3 != g_CDemonSetPtr->selected_camera_index)) {
        core_setdir_cpp_CDemonSet_setPendingCamera_FUN_00575b00(g_CDemonSetPtr,iVar3,999.0);
        this_ptr->unk3 = 0;
      }
    }
    if (local_30 != 0) {
      core_setdir_cpp_CDemonSet_clearCameraSwitchCooldown_FUN_00575b20(g_CDemonSetPtr);
    }
  }
  if (this_ptr->param == local_34) {
    return;
  }
  if ((local_2c == 0) || (this_ptr->active_sound[0] == '\0')) {
    core_sound_cpp_CSound_killSound_FUN_005b3b90(g_CSoundPtr,this_ptr->sfx_handle);
  }
  else {
    iVar3 = core_sound_cpp_CSound_isSoundPlaying_FUN_005b3b80(g_CSoundPtr,this_ptr->sfx_handle);
    if (iVar3 == 0) {
      uVar4 = (*((this_ptr->base).vtable._ub)->playAmbientSound)
                        (&this_ptr->base,this_ptr->active_sound);
      this_ptr->sfx_handle = uVar4;
    }
  }
  euler_angles = &(this_ptr->base).orient;
  position = &(this_ptr->base).location;
  local_28 = (this_ptr->base).location.position.y;
  core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
            (&local_224,&position->position,&euler_angles->vec);
  core_platfrm_cpp_CPlatform_FUN_0054cab0(this_ptr);
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
            (&local_104,&position->position,&euler_angles->vec);
  iVar3 = 0;
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&local_ac);
  iVar10 = 0;
  do {
    while( true ) {
      if (g_CDemonSetPtr->character_count <= iVar10) {
        iStack_24 = 0;
        for (iStack_20 = 0; iStack_20 < g_CDemonSetPtr->actor_count; iStack_20 = iStack_20 + 1) {
          iVar3 = *(int *)((int)g_CDemonSetPtr->actors + iStack_24);
          if (this_ptr == *(CPlatform **)(iVar3 + 0xdc)) {
            pCStack_18 = (CVector3f *)(iVar3 + 0x20);
            core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                      (&CStack_1c4,pCStack_18,(CVector3f *)(iVar3 + 0x30));
            core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&CStack_1c4,&local_224,&CStack_134);
            pCVar8 = &CStack_134;
            pCVar11 = &CStack_164;
            for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
              pCVar11->m[0].w = pCVar8->m[0].w;
              pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar14 * -2 + 1) * 4);
              pCVar11 = (CMatrix3x4f *)((int)pCVar11 + ((uint)bVar14 * -2 + 1) * 4);
            }
            core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&CStack_164,&local_104,&CStack_194);
            pCVar8 = &CStack_194;
            pCVar12 = &CStack_1f4;
            for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
              pCVar12->m[0].x = pCVar8->m[0].w;
              pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar14 * -2 + 1) * 4);
              pCVar12 = (CMatrix3x3f *)((int)pCVar12 + ((uint)bVar14 * -2 + 1) * 4);
            }
            fStack_7c = CStack_1f4.m[1].x;
            fStack_78 = CStack_1f4.m[2].y;
            fStack_74 = fStack_1c8;
            core_xform_cpp_matrixToEulerAngles_FUN_005f5690(&CStack_1f4,&CStack_94);
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
                         core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                   (CStack_94.y - *(float *)(iVar3 + 0x34));
            *(CVector3f **)(iVar3 + 0xf0) = pCStack_18;
          }
          iStack_24 = iStack_24 + 4;
        }
        core_platfrm_cpp_CPlatform_FUN_0054e320(this_ptr);
        return;
      }
      iVar2 = *(int *)((int)g_CDemonSetPtr->characters + iVar3);
      iVar5 = (**(code **)(*(int *)(iVar2 + 0x154) + 0x120))(iVar2);
      if ((iVar5 < 1) && (iVar5 = (**(code **)(*(int *)(iVar2 + 0x154) + 0x68))(iVar2), iVar5 == 0))
      break;
LAB_0054d4f3:
      iVar10 = iVar10 + 1;
      iVar3 = iVar3 + 4;
    }
    if (this_ptr->push_flag == 0) {
      if (((this_ptr->base).location.position.y < local_28) &&
         (iVar5 = core_platfrm_cpp_CPlatform_FUN_0054df80(this_ptr), iVar5 != 0)) {
        (**(code **)(*(int *)(iVar2 + 0x154) + 0xf0))(iVar2,8,0,0xbf800000);
      }
      goto LAB_0054d4f3;
    }
    core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
              (&this_ptr->base,&CStack_4c,(CVector3f *)(iVar2 + 0x20));
    if ((local_ac.max.y < CStack_4c.y) || (CStack_4c.y < local_ac.min.y + (float)-20))
    goto LAB_0054d4f3;
    core_box_cpp_CBoundingBox3D_clampPoint_FUN_00421550(&local_ac,&CStack_70,&CStack_4c);
    fStack_40 = CStack_4c.x - CStack_70.x;
    fStack_3c = CStack_4c.y - CStack_70.y;
    fStack_38 = CStack_4c.z - CStack_70.z;
    if (((float)10 < ABS(fStack_40)) || ((float)10 < ABS(fStack_38)))
    goto LAB_0054d4f3;
    fStack_3c = 0.0;
    core_setcolid_cpp_SCollisionInfo_ctor_FUN_005743c0(&SStack_d4);
    SStack_d4.ray_type = 0;
    iVar5 = (**(code **)(*(int *)(iVar2 + 0x154) + 0x34))(iVar2,&SStack_d4);
    if ((((iVar5 != 2) || (local_ac.max.y < CStack_4c.y + SStack_d4.cylinder_bottom_y)) ||
        (CStack_4c.y + SStack_d4.cylinder_top_y < local_ac.min.y)) ||
       (fVar16 = fStack_40 * fStack_40 + fStack_38 * fStack_38,
       SStack_d4.cylinder_radius * SStack_d4.cylinder_radius < fVar16)) goto LAB_0054d4f3;
    fVar16 = SQRT(fVar16);
    dVar15 = (double)fVar16;
    if (dVar15 <= 0.0) goto LAB_0054d4f3;
    fStack_1c = (SStack_d4.cylinder_radius + (float)0.050000000000000003) / fVar16;
    fStack_40 = fStack_40 * fStack_1c;
    fStack_3c = fStack_3c * fStack_1c;
    fStack_38 = fStack_38 * fStack_1c;
    CStack_58.x = CStack_70.x + fStack_40;
    CStack_58.y = CStack_70.y + fStack_3c;
    CStack_58.z = CStack_70.z + fStack_38;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(&this_ptr->base,&CStack_64,&CStack_58)
    ;
    CStack_64.y = *(float *)(iVar2 + 0x24);
    (**(code **)(*(int *)(iVar2 + 0x154) + 0x60))(iVar2,&CStack_64,iVar2 + 0x30,dVar15,fVar16);
    iVar10 = iVar10 + 1;
    iVar3 = iVar3 + 4;
  } while( true );
}
