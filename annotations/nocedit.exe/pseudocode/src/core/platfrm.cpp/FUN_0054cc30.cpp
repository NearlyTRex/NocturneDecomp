// Name: core_platfrm.cpp_FUN_0054cc30
// Address: 0054cc30
// Address Range: [[0054cc30, 0054d687]]
// Convention: unknown
// Signature: undefined core_platfrm.cpp_FUN_0054cc30()

#include "nocturne.h"

/* Signature: byte actors_other_platform.cpp_FUN_0054cc30(uint param_1, uint
   param_2) */

void core_platfrm_cpp_FUN_0054cc30(void)

{
  char cVar1;
  int iVar2;
  int extraout_EAX;
  uint uVar3;
  int iVar4;
  float fVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  float *pfVar9;
  CMatrix3x4f *pCVar10;
  char *pcVar11;
  int iVar12;
  CMatrix3x3f *pCVar13;
  bool bVar14;
  byte bVar15;
  CDemonActor *in_stack_00000004;
  float in_stack_00000008;
  ulonglong uStack_320;
  float fStack_318;
  byte auStack_21c [56];
  CMatrix3x3f CStack_1e4;
  float fStack_1b8;
  CMatrix3x4f CStack_1b4;
  CMatrix3x4f CStack_184;
  CMatrix3x4f CStack_154;
  byte auStack_124 [48];
  CMatrix3x4f CStack_f4;
  byte auStack_c4 [40];
  CBoundingBox3D CStack_9c;
  CVector3f CStack_84;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  CVector3f CStack_60;
  CVector3f CStack_54;
  CVector3f CStack_48;
  CVector3f CStack_3c;
  float local_30;
  float local_2c;
  float local_28;
  int iStack_24;
  float fStack_20;
  float fStack_18;
  int iStack_14;
  
  bVar15 = 0;
  if (1 < *(int *)(in_stack_00000004[3].create_event + 0x40)) {
    return;
  }
  bVar14 = false;
  CStack_3c.z = (float)in_stack_00000004[2].location.area_id;
  local_30 = 0.0;
  local_2c = 0.0;
  switch(in_stack_00000004[2].location.position.y) {
  case 0.0:
    iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                      (g_CEventListPtr,(char *)&in_stack_00000004[2].scale);
    bVar14 = iVar2 != 0;
    if (bVar14) {
      core_platfrm_cpp_FUN_0054d690();
    }
    in_stack_00000004[2].location.area_id = 0;
    break;
  case 1.4013e-45:
    iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                      (g_CEventListPtr,in_stack_00000004[2].create_event + 0x2c);
    bVar14 = iVar2 != 0;
    if (bVar14) {
      core_platfrm_cpp_FUN_0054d690();
    }
    in_stack_00000004[2].location.area_id = 0x3f800000;
    break;
  case 2.8026e-45:
    iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                      (g_CEventListPtr,(char *)&in_stack_00000004[2].scale);
    if (iVar2 == 0) {
      iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                        (g_CEventListPtr,in_stack_00000004[2].create_event + 0x2c);
      if (iVar2 != 0) {
        core_platfrm_cpp_FUN_0054d690();
      }
    }
    else {
      core_platfrm_cpp_FUN_0054d690();
    }
    break;
  case 4.2039e-45:
    iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                      (g_CEventListPtr,in_stack_00000004[3].actor_name + 0x14);
    if (iVar2 != 0) {
      cVar1 = in_stack_00000004[3].create_event[0x14];
      in_stack_00000004[2].location.position.y = 2.8026e-45;
      if (cVar1 != '\0') {
        (*in_stack_00000004->vtable->playSound)
                  (in_stack_00000004,in_stack_00000004[3].create_event + 0x14);
      }
      break;
    }
    fVar5 = in_stack_00000008 * in_stack_00000004[2].orient.bank +
            (float)in_stack_00000004[2].location.area_id;
    in_stack_00000004[2].location.area_id = (int)fVar5;
    if (fVar5 <= in_stack_00000004[2].orient.pitch) {
LAB_0054d0a2:
      local_2c = 1.4013e-45;
      break;
    }
    in_stack_00000004[2].location.area_id = (int)in_stack_00000004[2].orient.pitch;
    if (1.0 <= (float)in_stack_00000004[2].location.area_id) {
      iVar2 = *(int *)(in_stack_00000004[3].create_event + 0x40);
      in_stack_00000004[2].location.position.y = 1.4013e-45;
      if (iVar2 != 0) {
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
    iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                      (g_CEventListPtr,in_stack_00000004[3].actor_name + 0x14);
    if (iVar2 != 0) {
      cVar1 = in_stack_00000004[3].create_event[0x14];
      in_stack_00000004[2].location.position.y = 2.8026e-45;
      if (cVar1 != '\0') {
        (*in_stack_00000004->vtable->playSound)
                  (in_stack_00000004,in_stack_00000004[3].create_event + 0x14);
      }
      break;
    }
    fVar5 = (float)in_stack_00000004[2].location.area_id -
            in_stack_00000008 * in_stack_00000004[2].orient.bank;
    in_stack_00000004[2].location.area_id = (int)fVar5;
    if (in_stack_00000004[2].orient.pitch <= fVar5) goto LAB_0054d0a2;
    in_stack_00000004[2].location.area_id = (int)in_stack_00000004[2].orient.pitch;
    if ((float)in_stack_00000004[2].location.area_id <= 0.0) {
      iVar2 = *(int *)(in_stack_00000004[3].create_event + 0x40);
      in_stack_00000004[2].location.position.y = 0.0;
      if (iVar2 != 0) {
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
      pcVar11 = (char *)((int)&uStack_320 + 4);
      pcVar8 = in_stack_00000004[3].create_event + 0x4c;
      pcVar7 = (char *)((int)&uStack_320 + 4);
      do {
        cVar1 = *pcVar8;
        *pcVar11 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar8[1];
        pcVar8 = pcVar8 + 2;
        pcVar11[1] = cVar1;
        pcVar11 = pcVar11 + 2;
      } while (cVar1 != '\0');
      cVar1 = uStack_320._4_1_;
      while (cVar1 != '\0') {
        while (*pcVar7 != ';') {
          pcVar7 = pcVar7 + 1;
          if (*pcVar7 == '\0') goto LAB_0054cd70;
        }
        *pcVar7 = '\0';
        iVar2 = core_set_cpp_CDemonSet_FUN_0056b790(g_CDemonSetPtr);
        if ((iVar2 != -1) && (iVar2 != g_CDemonSetPtr->selected_camera_index)) {
          core_setdir_cpp_CDemonSet_setPendingCamera_FUN_00575b00(g_CDemonSetPtr,iVar2,999.0);
          in_stack_00000004[5].was_created = 0;
          break;
        }
        pcVar7 = pcVar7 + 1;
        cVar1 = *pcVar7;
      }
LAB_0054cd70:
      iVar2 = core_set_cpp_CDemonSet_FUN_0056b790(g_CDemonSetPtr);
      if ((iVar2 != -1) && (iVar2 != g_CDemonSetPtr->selected_camera_index)) {
        core_setdir_cpp_CDemonSet_setPendingCamera_FUN_00575b00(g_CDemonSetPtr,iVar2,999.0);
        in_stack_00000004[5].was_created = 0;
      }
    }
    if (local_28 != 0.0) {
      core_setdir_cpp_CDemonSet_clearCameraSwitchCooldown_FUN_00575b20(g_CDemonSetPtr);
    }
  }
  if ((float)in_stack_00000004[2].location.area_id == local_2c) {
    return;
  }
  if ((iStack_24 == 0) || (in_stack_00000004[3].create_event[0x28] == '\0')) {
    core_sound_cpp_CSound_killSound_FUN_005b3b90
              (g_CSoundPtr,*(uint *)(in_stack_00000004[3].create_event + 0x3c));
  }
  else {
    core_sound_cpp_CSound_isSoundPlaying_FUN_005b3b80
              (g_CSoundPtr,*(uint *)(in_stack_00000004[3].create_event + 0x3c));
    if (extraout_EAX == 0) {
      uVar3 = (*in_stack_00000004->vtable->playAmbientSound)
                        (in_stack_00000004,in_stack_00000004[3].create_event + 0x28);
      *(uint *)(in_stack_00000004[3].create_event + 0x3c) = uVar3;
    }
  }
  fStack_20 = (in_stack_00000004->location).position.y;
  core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
            ((CMatrix3x4f *)auStack_21c,&(in_stack_00000004->location).position,
             (CVector3f *)&in_stack_00000004->orient);
  core_platfrm_cpp_FUN_0054cab0();
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
            ((CMatrix3x4f *)(auStack_124 + 0x28),&(in_stack_00000004->location).position,
             (CVector3f *)&in_stack_00000004->orient);
  iVar2 = 0;
  (*in_stack_00000004->vtable->getBoundingBox)
            (in_stack_00000004,(CBoundingBox3D *)(auStack_c4 + 0x20));
  iVar12 = 0;
  do {
    while( true ) {
      if (g_CDemonSetPtr->damage_listener_count <= iVar12) {
        iStack_14 = 0;
        for (iVar2 = 0; iVar2 < (int)g_CDemonSetPtr->actor_list_ptr; iVar2 = iVar2 + 1) {
          iVar12 = *(int *)(g_CDemonSetPtr->actor_list_data + iStack_14);
          if (in_stack_00000004 == *(CDemonActor **)(iVar12 + 0xdc)) {
            core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                      (&CStack_1b4,(CVector3f *)(iVar12 + 0x20),(CVector3f *)(iVar12 + 0x30));
            core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                      (&CStack_1b4,(CMatrix3x4f *)(auStack_21c + 8),(CMatrix3x4f *)auStack_124);
            pfVar9 = (float *)auStack_124;
            pCVar10 = &CStack_154;
            for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
              pCVar10->m[0].w = *pfVar9;
              pfVar9 = pfVar9 + (uint)bVar15 * -2 + 1;
              pCVar10 = (CMatrix3x4f *)((int)pCVar10 + ((uint)bVar15 * -2 + 1) * 4);
            }
            core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&CStack_154,&CStack_f4,&CStack_184);
            pCVar10 = &CStack_184;
            pCVar13 = &CStack_1e4;
            for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
              pCVar13->m[0].x = pCVar10->m[0].w;
              pCVar10 = (CMatrix3x4f *)((int)pCVar10 + ((uint)bVar15 * -2 + 1) * 4);
              pCVar13 = (CMatrix3x3f *)((int)pCVar13 + ((uint)bVar15 * -2 + 1) * 4);
            }
            fStack_6c = CStack_1e4.m[1].x;
            fStack_68 = CStack_1e4.m[2].y;
            fStack_64 = fStack_1b8;
            core_xform_cpp_matrixToEulerAngles_FUN_005f5690(&CStack_1e4,&CStack_84);
            fStack_78 = fStack_6c - ((CVector3f *)(iVar12 + 0x20))->x;
            fStack_74 = fStack_68 - *(float *)(iVar12 + 0x24);
            fStack_70 = fStack_64 - *(float *)(iVar12 + 0x28);
            if ((float *)(iVar12 + 0xe0) != &fStack_78) {
              *(float *)(iVar12 + 0xe0) = fStack_78;
              *(float *)(iVar12 + 0xe4) = fStack_74;
              *(float *)(iVar12 + 0xe8) = fStack_70;
            }
            *(uint *)(iVar12 + 0xec) = 0;
            *(uint *)(iVar12 + 0xf4) = 0;
            fVar5 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                              (CStack_84.y - *(float *)(iVar12 + 0x34));
            *(float *)(iVar12 + 0xf0) = fVar5;
          }
          iStack_14 = iStack_14 + 4;
        }
        core_platfrm_cpp_FUN_0054e320();
        return;
      }
      iVar6 = *(int *)(g_CDemonSetPtr->field19_0x14f0a0 + iVar2 + -4);
      iVar4 = (**(code **)(*(int *)(iVar6 + 0x154) + 0x120))();
      if ((iVar4 < 1) && (iVar4 = (**(code **)(*(int *)(iVar6 + 0x154) + 0x68))(), iVar4 == 0))
      break;
LAB_0054d4f3:
      iVar12 = iVar12 + 1;
      iVar2 = iVar2 + 4;
    }
    if (in_stack_00000004[3].scale.x == 0) {
      if (((in_stack_00000004->location).position.y < fStack_18) &&
         (iVar4 = core_platfrm_cpp_FUN_0054df80(), iVar4 != 0)) {
        (**(code **)(*(int *)(iVar6 + 0x154) + 0xf0))();
      }
      goto LAB_0054d4f3;
    }
    core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
              (in_stack_00000004,&CStack_3c,(CVector3f *)(iVar6 + 0x20));
    if ((CStack_9c.max.y < CStack_3c.y) || (CStack_3c.y < CStack_9c.min.y + (float)-20))
    goto LAB_0054d4f3;
    core_box_cpp_CBoundingBox3D_clampPoint_FUN_00421550(&CStack_9c,&CStack_60,&CStack_3c);
    local_30 = CStack_3c.x - CStack_60.x;
    local_2c = CStack_3c.y - CStack_60.y;
    local_28 = CStack_3c.z - CStack_60.z;
    if (((float)10 < ABS(local_30)) || ((float)10 < ABS(local_28)))
    goto LAB_0054d4f3;
    local_2c = 0.0;
    core_setcolid_cpp_SCollisionInfo_ctor_FUN_005743c0((SCollisionInfo *)auStack_c4);
    auStack_c4._0_4_ = 0;
    iVar4 = (**(code **)(*(int *)(iVar6 + 0x154) + 0x34))();
    if ((((iVar4 != 2) || (CStack_9c.max.y < CStack_3c.y + (float)auStack_c4._20_4_)) ||
        (CStack_3c.y + (float)auStack_c4._24_4_ < CStack_9c.min.y)) ||
       (fStack_318 = local_30 * local_30 + local_28 * local_28,
       (float)auStack_c4._28_4_ * (float)auStack_c4._28_4_ < fStack_318)) goto LAB_0054d4f3;
    fStack_318 = SQRT(fStack_318);
    uStack_320 = (double)fStack_318;
    if (uStack_320 <= 0.0) goto LAB_0054d4f3;
    fVar5 = ((float)auStack_c4._28_4_ + (float)0.050000000000000003) / fStack_318;
    local_30 = local_30 * fVar5;
    local_2c = local_2c * fVar5;
    local_28 = local_28 * fVar5;
    CStack_48.x = CStack_60.x + local_30;
    CStack_48.y = CStack_60.y + local_2c;
    CStack_48.z = CStack_60.z + local_28;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              (in_stack_00000004,&CStack_54,&CStack_48);
    CStack_54.y = *(float *)(iVar6 + 0x24);
    (**(code **)(*(int *)(iVar6 + 0x154) + 0x60))();
    iVar12 = iVar12 + 1;
    iVar2 = iVar2 + 4;
  } while( true );
}
