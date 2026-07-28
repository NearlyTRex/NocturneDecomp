// Name: core_platfrm.cpp_FUN_004f6170
// Address: 004f6170
// Address Range: [[004f6170, 004f6bc7]]
// Convention: unknown
// Signature: void core_platfrm_cpp_FUN_004f6170(CPlatform *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void core_platfrm_cpp_FUN_004f6170(CPlatform *param_1,float param_2)

{
  char cVar1;
  int iVar2;
  float fVar3;
  char *name;
  CDemonActor *pCVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
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
  byte auStack_1c4 [48];
  float afStack_194 [12];
  uint auStack_164 [12];
  uint auStack_134 [12];
  byte auStack_104 [48];
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
  float *pfStack_18;
  
  bVar17 = 0;
  if (1 < param_1->one_shot) {
    return;
  }
  bVar16 = false;
  local_34 = param_1->param;
  local_30 = 0;
  local_2c = 0;
  switch(param_1->state) {
  case PLATFORM_STATE_TYPE_AT_START:
    iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                      (0x01C03A10,param_1->to_end_event);
    bVar16 = iVar5 != 0;
    if (bVar16) {
      core_platfrm_cpp_CPlatform_startMovement_FUN_004f6bd0
                (param_1,1.0,1.0 / param_1->travel_time_to_end);
    }
    param_1->param = 0.0;
    break;
  case PLATFORM_STATE_TYPE_AT_END:
    iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                      (0x01C03A10,param_1->to_start_event);
    bVar16 = iVar5 != 0;
    if (bVar16) {
      core_platfrm_cpp_CPlatform_startMovement_FUN_004f6bd0
                (param_1,0.0,1.0 / param_1->travel_time_to_start);
    }
    param_1->param = 1.0;
    break;
  case PLATFORM_STATE_TYPE_WTF:
    iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                      (0x01C03A10,param_1->to_end_event);
    if (iVar5 == 0) {
      iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                        (0x01C03A10,param_1->to_start_event);
      if (iVar5 != 0) {
        core_platfrm_cpp_CPlatform_startMovement_FUN_004f6bd0
                  (param_1,0.0,1.0 / param_1->travel_time_to_start);
      }
    }
    else {
      core_platfrm_cpp_CPlatform_startMovement_FUN_004f6bd0
                (param_1,1.0,1.0 / param_1->travel_time_to_end);
    }
    break;
  case PLATFORM_STATE_TYPE_WTF|PLATFORM_STATE_TYPE_AT_END:
    iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                      (0x01C03A10,param_1->stop_event);
    if (iVar5 != 0) {
      param_1->state = PLATFORM_STATE_TYPE_WTF;
      if (param_1->stop_sound[0] != '\0') {
        (*((param_1->base).vtable._ub)->playSound)(&param_1->base,param_1->stop_sound);
      }
      break;
    }
    fVar3 = param_2 * param_1->current_movement_rate + param_1->param;
    param_1->param = fVar3;
    if (fVar3 <= param_1->goal_param) {
LAB_004f65e2:
      local_2c = 1;
      break;
    }
    param_1->param = param_1->goal_param;
    if (1.0 <= param_1->param) {
      param_1->state = PLATFORM_STATE_TYPE_AT_END;
      if (param_1->one_shot != 0) {
        param_1->one_shot = 2;
      }
      local_30 = 1;
      break;
    }
    goto LAB_004f65d0;
  case 4:
    iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                      (0x01C03A10,param_1->stop_event);
    if (iVar5 != 0) {
      param_1->state = PLATFORM_STATE_TYPE_WTF;
      if (param_1->stop_sound[0] != '\0') {
        (*((param_1->base).vtable._ub)->playSound)(&param_1->base,param_1->stop_sound);
      }
      break;
    }
    fVar3 = param_1->param - param_2 * param_1->current_movement_rate;
    param_1->param = fVar3;
    if (param_1->goal_param <= fVar3) goto LAB_004f65e2;
    param_1->param = param_1->goal_param;
    if (param_1->param <= 0.0) {
      param_1->state = PLATFORM_STATE_TYPE_AT_START;
      if (param_1->one_shot != 0) {
        param_1->one_shot = 2;
      }
      local_30 = 1;
      break;
    }
LAB_004f65d0:
    param_1->state = PLATFORM_STATE_TYPE_WTF;
  }
  if (param_1->render_in_background_when_not_moving_flag != 0) {
    if (bVar16) {
      pcVar12 = local_324;
      pcVar9 = param_1->camera_while_moving;
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
          pCVar4 = (CDemonActor *)
                   core_set_cpp_CDemonSet_findCameraByName_FUN_005090a0(0x01E57284,name);
          if ((pCVar4 != (CDemonActor *)0xffffffff) &&
             (pCVar4 != 0x01E57284->renderable_actors[0x773])) {
            core_setdir_cpp_CDemonSet_setPendingCamera_FUN_005135d0(0x01E57284,(int)pCVar4,999.0);
            param_1->platform_type = PLATFORM_TYPE_DISABLED;
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
      pCVar4 = (CDemonActor *)
               core_set_cpp_CDemonSet_findCameraByName_FUN_005090a0(0x01E57284,name);
      if ((pCVar4 != (CDemonActor *)0xffffffff) &&
         (pCVar4 != 0x01E57284->renderable_actors[0x773])) {
        core_setdir_cpp_CDemonSet_setPendingCamera_FUN_005135d0(0x01E57284,(int)pCVar4,999.0);
        param_1->platform_type = PLATFORM_TYPE_DISABLED;
      }
    }
    if (local_30 != 0) {
      core_setdir_cpp_CDemonSet_clearCameraSwitchCooldown_FUN_005135f0(0x01E57284);
    }
  }
  if (param_1->param == local_34) {
    return;
  }
  if ((local_2c == 0) || (param_1->active_sound[0] == '\0')) {
    core_sound_cpp_CSound_killSound_FUN_0052ebb0(0x02DC9450,param_1->sfx_handle);
  }
  else {
    iVar5 = core_sound_cpp_CSound_isSoundPlaying_FUN_0052eba0(0x02DC9450,param_1->sfx_handle);
    if (iVar5 == 0) {
      uVar6 = (*((param_1->base).vtable._ub)->playAmbientSound)
                        (&param_1->base,param_1->active_sound);
      param_1->sfx_handle = uVar6;
    }
  }
  euler_angles = &(param_1->base).orient;
  position = &(param_1->base).location;
  fStack_28 = (param_1->base).location.position.y;
  core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_0055ae80
            (&CStack_224,&position->position,&euler_angles->vec);
  core_platfrm_cpp_CPlatform_evaluatePosition_FUN_004f5ff0(param_1);
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
            (auStack_104,position,euler_angles);
  iVar5 = 0;
  (*((param_1->base).vtable._ub)->getBoundingBox)(&param_1->base,&CStack_ac);
  iVar13 = 0;
  do {
    while( true ) {
      if ((int)0x01E57284->actors[0x6d6] <= iVar13) {
        iStack_24 = 0;
        for (iStack_20 = 0; iStack_20 < *(int *)0x01E57284->lights[199].filter_names[0x14];
            iStack_20 = iStack_20 + 1) {
          iVar5 = *(int *)(0x01E57284->lights[199].filter_names[0x14] + iStack_24 + 4);
          if (param_1 == *(CPlatform **)(iVar5 + 0xdc)) {
            pfStack_18 = (float *)(iVar5 + 0x20);
            core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
                      (auStack_1c4,pfStack_18,iVar5 + 0x30);
            core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(auStack_1c4,&CStack_224);
            puVar10 = auStack_134;
            puVar14 = auStack_164;
            for (iVar13 = 0xc; iVar13 != 0; iVar13 = iVar13 + -1) {
              *puVar14 = *puVar10;
              puVar10 = puVar10 + (uint)bVar17 * -2 + 1;
              puVar14 = puVar14 + (uint)bVar17 * -2 + 1;
            }
            core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(auStack_164,auStack_104);
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
            fStack_88 = fStack_7c - *pfStack_18;
            fStack_84 = fStack_78 - pfStack_18[1];
            fStack_80 = fStack_74 - pfStack_18[2];
            if ((float *)(iVar5 + 0xe0) != &fStack_88) {
              *(float *)(iVar5 + 0xe0) = fStack_88;
              *(float *)(iVar5 + 0xe4) = fStack_84;
              *(float *)(iVar5 + 0xe8) = fStack_80;
            }
            *(uint *)(iVar5 + 0xec) = 0;
            *(uint *)(iVar5 + 0xf4) = 0;
            pfStack_18 = (float *)core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                                            (CStack_94.y - *(float *)(iVar5 + 0x34));
            *(float **)(iVar5 + 0xf0) = pfStack_18;
          }
          iStack_24 = iStack_24 + 4;
        }
        core_platfrm_cpp_CPlatform_updateAttachedActors_FUN_004f7700(param_1);
        return;
      }
      iVar2 = *(int *)((int)0x01E57284->actors + iVar5 + 0x1b5c);
      iVar7 = (**(code **)(*(int *)(iVar2 + 0x14c) + 0x104))(iVar2);
      if ((iVar7 < 1) && (iVar7 = (**(code **)(*(int *)(iVar2 + 0x14c) + 0x68))(iVar2), iVar7 == 0))
      break;
LAB_004f6a33:
      iVar13 = iVar13 + 1;
      iVar5 = iVar5 + 4;
    }
    if (param_1->push_flag == 0) {
      if (((param_1->base).location.position.y < fStack_28) &&
         (iVar7 = core_platfrm_cpp_FUN_004f7360(param_1,iVar2), iVar7 != 0)) {
        (**(code **)(*(int *)(iVar2 + 0x14c) + 0xd4))(iVar2,8,0,0xbf800000);
      }
      goto LAB_004f6a33;
    }
    core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
              (&param_1->base,&CStack_4c,(CVector3f *)(iVar2 + 0x20));
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
    iVar7 = (**(code **)(*(int *)(iVar2 + 0x14c) + 0x34))(iVar2,&SStack_d4);
    if ((((iVar7 != 2) || (CStack_ac.max.y < CStack_4c.y + SStack_d4.cylinder_bottom_y)) ||
        (CStack_4c.y + SStack_d4.cylinder_top_y < CStack_ac.min.y)) ||
       ((fVar3 = fStack_40 * fStack_40 + fStack_38 * fStack_38,
        SStack_d4.cylinder_radius * SStack_d4.cylinder_radius < fVar3 ||
        (fVar3 = SQRT(fVar3), fVar3 <= 0.0)))) goto LAB_004f6a33;
    fStack_1c = (SStack_d4.cylinder_radius + (float)0.050000000000000003) / fVar3;
    fStack_40 = fStack_40 * fStack_1c;
    fStack_3c = fStack_3c * fStack_1c;
    fStack_38 = fStack_38 * fStack_1c;
    CStack_58.x = CStack_70.x + fStack_40;
    CStack_58.y = CStack_70.y + fStack_3c;
    CStack_58.z = CStack_70.z + fStack_38;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(&param_1->base,&CStack_64,&CStack_58);
    CStack_64.y = *(float *)(iVar2 + 0x24);
    (**(code **)(*(int *)(iVar2 + 0x14c) + 0x60))(iVar2,&CStack_64,iVar2 + 0x30);
    iVar13 = iVar13 + 1;
    iVar5 = iVar5 + 4;
  } while( true );
}
