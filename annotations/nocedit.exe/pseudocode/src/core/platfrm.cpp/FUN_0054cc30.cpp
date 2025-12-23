// Name: core_platfrm.cpp_FUN_0054cc30
// Address: 0054cc30
// Address Range: [[0054cc30, 0054d687]]
// Convention: unknown
// Signature: undefined core_platfrm.cpp_FUN_0054cc30()

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* Signature: byte actors_other_platform.cpp_FUN_0054cc30(uint param_1, uint
   param_2) */

void core_platfrm_cpp_FUN_0054cc30(void)

{
  char cVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  int extraout_EAX;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  BADSPACEBASE *in_ESP;
  char *pcVar8;
  float *pfVar9;
  char *pcVar10;
  int iVar11;
  CMatrix3x4f *pCVar12;
  CVector3f *pCVar13;
  bool bVar14;
  byte bVar15;
  CDemonActor *in_stack_00000004;
  float in_stack_00000008;
  double in_stack_fffffcd4;
  char acStack_320 [256];
  CMatrix3x4f CStack_220;
  CVector3f CStack_1f0;
  float fStack_1e4;
  float fStack_1d4;
  float fStack_1c4;
  CMatrix3x4f CStack_1c0;
  float afStack_190 [12];
  CMatrix3x4f CStack_160;
  float afStack_130 [12];
  CMatrix3x4f CStack_100;
  SCollisionInfo SStack_d0;
  CBoundingBox3D CStack_a8;
  CMatrix3x3f CStack_90;
  CVector3f CStack_6c;
  CVector3f CStack_60;
  CVector3f CStack_54;
  CVector3f CStack_48;
  float fStack_3c;
  float fStack_38;
  float local_34;
  float local_30;
  int local_2c;
  int local_28;
  float fStack_24;
  int iStack_20;
  int iStack_1c;
  float fStack_18;
  CVector3f *pCStack_14;
  
  bVar15 = 0;
  if (1 < *(int *)(in_stack_00000004[3].create_event + 0x40)) {
    return;
  }
  bVar14 = false;
  local_34 = (float)in_stack_00000004[2].location.area_id;
  local_30 = 0.0;
  local_2c = 0;
  switch(in_stack_00000004[2].location.position.y) {
  case 0.0:
    iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                      (g_CEventListPtr,(char *)&in_stack_00000004[2].scale);
    bVar14 = iVar4 != 0;
    if (bVar14) {
      core_platfrm_cpp_FUN_0054d690();
    }
    in_stack_00000004[2].location.area_id = 0;
    break;
  case 1.4013e-45:
    iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                      (g_CEventListPtr,in_stack_00000004[2].create_event + 0x2c);
    bVar14 = iVar4 != 0;
    if (bVar14) {
      core_platfrm_cpp_FUN_0054d690();
    }
    in_stack_00000004[2].location.area_id = 0x3f800000;
    break;
  case 2.8026e-45:
    iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                      (g_CEventListPtr,(char *)&in_stack_00000004[2].scale);
    if (iVar4 == 0) {
      iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                        (g_CEventListPtr,in_stack_00000004[2].create_event + 0x2c);
      if (iVar4 != 0) {
        core_platfrm_cpp_FUN_0054d690();
      }
    }
    else {
      core_platfrm_cpp_FUN_0054d690();
    }
    break;
  case 4.2039e-45:
    iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                      (g_CEventListPtr,in_stack_00000004[3].actor_name + 0x14);
    if (iVar4 != 0) {
      cVar1 = in_stack_00000004[3].create_event[0x14];
      in_stack_00000004[2].location.position.y = 2.8026e-45;
      if (cVar1 != '\0') {
        (*in_stack_00000004->vtable->playSound)
                  (in_stack_00000004,in_stack_00000004[3].create_event + 0x14);
      }
      break;
    }
    fVar3 = in_stack_00000008 * in_stack_00000004[2].orient.bank +
            (float)in_stack_00000004[2].location.area_id;
    in_stack_00000004[2].location.area_id = (int)fVar3;
    if (fVar3 <= in_stack_00000004[2].orient.pitch) {
LAB_0054d0a2:
      local_2c = 1;
      break;
    }
    in_stack_00000004[2].location.area_id = (int)in_stack_00000004[2].orient.pitch;
    if (1.0 <= (float)in_stack_00000004[2].location.area_id) {
      iVar4 = *(int *)(in_stack_00000004[3].create_event + 0x40);
      in_stack_00000004[2].location.position.y = 1.4013e-45;
      if (iVar4 != 0) {
        in_stack_00000004[3].create_event[0x40] = '\x02';
        in_stack_00000004[3].create_event[0x41] = '\0';
        in_stack_00000004[3].create_event[0x42] = '\0';
        in_stack_00000004[3].create_event[0x43] = '\0';
      }
      local_30 = 1.4013e-45;
      break;
    }
    goto LAB_0054d090;
  case 5.60519e-45:
    iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                      (g_CEventListPtr,in_stack_00000004[3].actor_name + 0x14);
    if (iVar4 != 0) {
      cVar1 = in_stack_00000004[3].create_event[0x14];
      in_stack_00000004[2].location.position.y = 2.8026e-45;
      if (cVar1 != '\0') {
        (*in_stack_00000004->vtable->playSound)
                  (in_stack_00000004,in_stack_00000004[3].create_event + 0x14);
      }
      break;
    }
    fVar3 = (float)in_stack_00000004[2].location.area_id -
            in_stack_00000008 * in_stack_00000004[2].orient.bank;
    in_stack_00000004[2].location.area_id = (int)fVar3;
    if (in_stack_00000004[2].orient.pitch <= fVar3) goto LAB_0054d0a2;
    in_stack_00000004[2].location.area_id = (int)in_stack_00000004[2].orient.pitch;
    if ((float)in_stack_00000004[2].location.area_id <= 0.0) {
      iVar4 = *(int *)(in_stack_00000004[3].create_event + 0x40);
      in_stack_00000004[2].location.position.y = 0.0;
      if (iVar4 != 0) {
        in_stack_00000004[3].create_event[0x40] = '\x02';
        in_stack_00000004[3].create_event[0x41] = '\0';
        in_stack_00000004[3].create_event[0x42] = '\0';
        in_stack_00000004[3].create_event[0x43] = '\0';
      }
      local_30 = 1.4013e-45;
      break;
    }
LAB_0054d090:
    in_stack_00000004[2].location.position.y = 2.8026e-45;
  }
  if (*(int *)(in_stack_00000004[3].create_event + 0x48) != 0) {
    if (bVar14) {
      pcVar10 = acStack_320;
      pcVar8 = in_stack_00000004[3].create_event + 0x4c;
      pcVar7 = acStack_320;
      do {
        cVar1 = *pcVar8;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar8[1];
        pcVar8 = pcVar8 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
joined_r0x0054cd19:
      if (acStack_320[0] != '\0') {
        if (*pcVar7 == ';') {
          *pcVar7 = '\0';
          iVar4 = core_set_cpp_CDemonSet_FUN_0056b790(g_CDemonSetPtr);
          if ((iVar4 != -1) && (iVar4 != g_CDemonSetPtr->selected_camera_index)) {
            core_setdir_cpp_CDemonSet_setPendingCamera_FUN_00575b00(g_CDemonSetPtr,iVar4,999.0);
            in_stack_00000004[5].was_created = 0;
            goto LAB_0054cd70;
          }
          pcVar7 = pcVar7 + 1;
          acStack_320[0] = *pcVar7;
        }
        else {
          pcVar7 = pcVar7 + 1;
          acStack_320[0] = *pcVar7;
        }
        goto joined_r0x0054cd19;
      }
LAB_0054cd70:
      iVar4 = core_set_cpp_CDemonSet_FUN_0056b790(g_CDemonSetPtr);
      if ((iVar4 != -1) && (iVar4 != g_CDemonSetPtr->selected_camera_index)) {
        core_setdir_cpp_CDemonSet_setPendingCamera_FUN_00575b00(g_CDemonSetPtr,iVar4,999.0);
        in_stack_00000004[5].was_created = 0;
      }
    }
    if (local_2c != 0) {
      core_setdir_cpp_CDemonSet_clearCameraSwitchCooldown_FUN_00575b20(g_CDemonSetPtr);
    }
  }
  if ((float)in_stack_00000004[2].location.area_id == local_30) {
    return;
  }
  if ((local_28 == 0) || (in_stack_00000004[3].create_event[0x28] == '\0')) {
    core_sound_cpp_CSound_killSound_FUN_005b3b90
              (g_CSoundPtr,*(uint *)(in_stack_00000004[3].create_event + 0x3c));
  }
  else {
    core_sound_cpp_CSound_isSoundPlaying_FUN_005b3b80
              (g_CSoundPtr,*(uint *)(in_stack_00000004[3].create_event + 0x3c));
    if (extraout_EAX == 0) {
      uVar5 = (*in_stack_00000004->vtable->playAmbientSound)
                        (in_stack_00000004,in_stack_00000004[3].create_event + 0x28);
      *(uint *)(in_stack_00000004[3].create_event + 0x3c) = uVar5;
    }
  }
  fStack_24 = (in_stack_00000004->location).position.y;
  core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
            (&CStack_220,&(in_stack_00000004->location).position,
             (CVector3f *)&in_stack_00000004->orient);
  core_platfrm_cpp_FUN_0054cab0();
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
            (&CStack_100,&(in_stack_00000004->location).position,
             (CVector3f *)&in_stack_00000004->orient);
  iVar4 = 0;
  (*in_stack_00000004->vtable->getBoundingBox)(in_stack_00000004,&CStack_a8);
  iVar11 = 0;
  do {
    while( true ) {
      if (g_CDemonSetPtr->damage_listener_count <= iVar11) {
        iStack_20 = 0;
        for (iStack_1c = 0; iStack_1c < (int)g_CDemonSetPtr->actor_list_ptr;
            iStack_1c = iStack_1c + 1) {
          iVar4 = *(int *)(g_CDemonSetPtr->actor_list_data + iStack_20);
          if (in_stack_00000004 == *(CDemonActor **)(iVar4 + 0xdc)) {
            pCStack_14 = (CVector3f *)(iVar4 + 0x20);
            core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                      (&CStack_1c0,pCStack_14,(CVector3f *)(iVar4 + 0x30));
            core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                      (&CStack_1c0,&CStack_220,SUB84 /* extract 2-byte value */(in_stack_fffffcd4,0));
            pfVar9 = afStack_130;
            pCVar12 = &CStack_160;
            for (iVar11 = 0xc; iVar11 != 0; iVar11 = iVar11 + -1) {
              pCVar12->m[0].w = *pfVar9;
              pfVar9 = pfVar9 + (uint)bVar15 * -2 + 1;
              pCVar12 = (CMatrix3x4f *)((int)pCVar12 + ((uint)bVar15 * -2 + 1) * 4);
            }
            core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                      (&CStack_160,&CStack_100,SUB84 /* extract 2-byte value */(in_stack_fffffcd4,0));
            pfVar9 = afStack_190;
            pCVar13 = &CStack_1f0;
            for (iVar11 = 0xc; iVar11 != 0; iVar11 = iVar11 + -1) {
              pCVar13->x = *pfVar9;
              pfVar9 = pfVar9 + (uint)bVar15 * -2 + 1;
              pCVar13 = (CVector3f *)((int)pCVar13 + ((uint)bVar15 * -2 + 1) * 4);
            }
            CStack_90.m[2].x = fStack_1e4;
            CStack_90.m[2].y = fStack_1d4;
            CStack_90.m[2].z = fStack_1c4;
            core_xform_cpp_matrixToEulerAngles_FUN_005f5690(&CStack_1f0,&CStack_90);
            CStack_90.m[1].x = CStack_90.m[2].x - pCStack_14->x;
            CStack_90.m[1].y = CStack_90.m[2].y - pCStack_14->y;
            CStack_90.m[1].z = CStack_90.m[2].z - pCStack_14->z;
            if ((CVector3f *)(iVar4 + 0xe0) != CStack_90.m + 1) {
              *(float *)(iVar4 + 0xe0) = CStack_90.m[1].x;
              *(float *)(iVar4 + 0xe4) = CStack_90.m[1].y;
              *(float *)(iVar4 + 0xe8) = CStack_90.m[1].z;
            }
            *(uint *)(iVar4 + 0xec) = 0;
            *(uint *)(iVar4 + 0xf4) = 0;
            pCStack_14 = (CVector3f *)
                         core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                   (CStack_90.m[0].y - *(float *)(iVar4 + 0x34));
            *(CVector3f **)(iVar4 + 0xf0) = pCStack_14;
          }
          iStack_20 = iStack_20 + 4;
        }
        core_platfrm_cpp_FUN_0054e320();
        return;
      }
      iVar2 = *(int *)(g_CDemonSetPtr->field19_0x14f0a0 + iVar4 + -4);
      iVar6 = (**(code **)(*(int *)(iVar2 + 0x154) + 0x120))();
      if ((iVar6 < 1) && (iVar6 = (**(code **)(*(int *)(iVar2 + 0x154) + 0x68))(), iVar6 == 0))
      break;
LAB_0054d4f3:
      iVar11 = iVar11 + 1;
      iVar4 = iVar4 + 4;
    }
    if (in_stack_00000004[3].scale.x == 0) {
      if (((in_stack_00000004->location).position.y < fStack_24) &&
         (iVar6 = core_platfrm_cpp_FUN_0054df80(), iVar6 != 0)) {
        (**(code **)(*(int *)(iVar2 + 0x154) + 0xf0))();
      }
      goto LAB_0054d4f3;
    }
    core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
              (in_stack_00000004,&CStack_48,(CVector3f *)(iVar2 + 0x20));
    if ((CStack_a8.max.y < CStack_48.y) || (CStack_48.y < CStack_a8.min.y + (float)-20))
    goto LAB_0054d4f3;
    core_box_cpp_CBoundingBox3D_clampPoint_FUN_00421550(&CStack_a8,&CStack_6c,&CStack_48);
    fStack_3c = CStack_48.x - CStack_6c.x;
    fStack_38 = CStack_48.y - CStack_6c.y;
    local_34 = CStack_48.z - CStack_6c.z;
    if (((float)10 < ABS(fStack_3c)) || ((float)10 < ABS(local_34)))
    goto LAB_0054d4f3;
    fStack_38 = 0.0;
    core_setcolid_cpp_SCollisionInfo_ctor_FUN_005743c0(&SStack_d0);
    SStack_d0.ray_type = 0;
    iVar6 = (**(code **)(*(int *)(iVar2 + 0x154) + 0x34))();
    if ((((iVar6 != 2) || (CStack_a8.max.y < CStack_48.y + SStack_d0.cylinder_bottom_y)) ||
        (CStack_48.y + SStack_d0.cylinder_top_y < CStack_a8.min.y)) ||
       (fVar3 = fStack_3c * fStack_3c + local_34 * local_34,
       SStack_d0.cylinder_radius * SStack_d0.cylinder_radius < fVar3)) goto LAB_0054d4f3;
    fVar3 = SQRT(fVar3);
    in_stack_fffffcd4 = (double)fVar3;
    if (in_stack_fffffcd4 <= 0.0) goto LAB_0054d4f3;
    fStack_18 = (SStack_d0.cylinder_radius + (float)0.050000000000000003) / fVar3;
    fStack_3c = fStack_3c * fStack_18;
    fStack_38 = fStack_38 * fStack_18;
    local_34 = local_34 * fStack_18;
    CStack_54.x = CStack_6c.x + fStack_3c;
    CStack_54.y = CStack_6c.y + fStack_38;
    CStack_54.z = CStack_6c.z + local_34;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              (in_stack_00000004,&CStack_60,&CStack_54);
    CStack_60.y = *(float *)(iVar2 + 0x24);
    (**(code **)(*(int *)(iVar2 + 0x154) + 0x60))();
    iVar11 = iVar11 + 1;
    iVar4 = iVar4 + 4;
  } while( true );
}
