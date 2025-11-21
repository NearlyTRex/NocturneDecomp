// Name: core_platfrm.cpp_FUN_0054cc30
// Address: 0054cc30
// Address Range: [[0054cc30, 0054d687]]
// Convention: unknown
// Signature: undefined core_platfrm.cpp_FUN_0054cc30()
// Cross-references:
//   core_minecar.cpp_FUN_00520eb0 (00520eb0) at 00520eba [UNCONDITIONAL_CALL]
// Globals:
//   void* switchdataD_0054cc10 = 0054cc81
//   double DOUBLE_0063f786 = -20
//   double DOUBLE_0063f78e = 10
//   double DOUBLE_0063f796 = 0.0500000000000000
//   CEventList* g_CEventListPtr = 02d05310
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CSound* g_CSoundPtr = 03f6af64
//   CEventList g_CEventListInstance
//   CDemonSet g_CDemonSetInstance
//   undefined4 g_CDemonSetInstance.actor_list_ptr
//   undefined4 g_CDemonSetInstance.actor_list_data[0]
//   undefined4 DAT_032613d4
//   undefined4 g_CDemonSetInstance.damage_listener_count
//   undefined4 g_CDemonSetInstance.damage_listeners
//   undefined4 g_CDemonSetInstance.selected_camera_index
//   CSound g_CSoundInstance
// Function calls:
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   core_box.cpp_CBoundingBox3D_clampPoint_FUN_00421550
//   core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
//   core_platfrm.cpp_FUN_0054cab0
//   core_platfrm.cpp_FUN_0054d690
//   core_platfrm.cpp_FUN_0054df80
//   core_platfrm.cpp_FUN_0054e320
//   core_set.cpp_CDemonSet_FUN_0056b790
//   core_setcolid.cpp_SCollisionInfo_ctor_FUN_005743c0
//   core_setdir.cpp_CDemonSet_clearCameraSwitchCooldown_FUN_00575b20
//   core_setdir.cpp_CDemonSet_setPendingCamera_FUN_00575b00
//   core_sound.cpp_CSound_isSoundPlaying_FUN_005b3b80
//   core_sound.cpp_CSound_killSound_FUN_005b3b90
//   core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
//   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   core_xform.cpp_matrixToEulerAngles_FUN_005f5690
//   core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10

#include "nocturne.h"

/* Signature: undefined1 actors_other_platform.cpp_FUN_0054cc30(undefined4 param_1, undefined4
   param_2) */

void core_platfrm_cpp_FUN_0054cc30(void)

{
  char cVar1;
  int iVar2;
  int extraout_EAX;
  undefined4 uVar3;
  int iVar4;
  float fVar5;
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
  CMatrix3x4f *matrix_b;
  double dStack_320;
  char acStack_31c [4];
  float fStack_318;
  undefined1 auStack_21c [56];
  CVector3f CStack_1e4;
  float fStack_1d8;
  float fStack_1c8;
  float fStack_1b8;
  CMatrix3x4f CStack_1b4;
  float afStack_184 [12];
  CMatrix3x4f CStack_154;
  float afStack_124 [10];
  undefined1 auStack_fc [56];
  undefined1 auStack_c4 [40];
  CBoundingBox3D CStack_9c;
  CMatrix3x3f CStack_84;
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
      pcVar10 = acStack_31c;
      pcVar8 = in_stack_00000004[3].create_event + 0x4c;
      pcVar7 = acStack_31c;
      do {
        cVar1 = *pcVar8;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar8[1];
        pcVar8 = pcVar8 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
      cVar1 = acStack_31c[0];
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
      *(undefined4 *)(in_stack_00000004[3].create_event + 0x3c) = uVar3;
    }
  }
  fStack_20 = (in_stack_00000004->location).position.y;
  core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
            ((CMatrix3x4f *)auStack_21c,&(in_stack_00000004->location).position,
             (CVector3f *)&in_stack_00000004->orient);
  core_platfrm_cpp_FUN_0054cab0();
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
            ((CMatrix3x4f *)auStack_fc,&(in_stack_00000004->location).position,
             (CVector3f *)&in_stack_00000004->orient);
  iVar2 = 0;
  (*in_stack_00000004->vtable->getBoundingBox)
            (in_stack_00000004,(CBoundingBox3D *)(auStack_c4 + 0x20));
  iVar11 = 0;
  do {
    while( true ) {
      if (g_CDemonSetPtr->damage_listener_count <= iVar11) {
        iStack_14 = 0;
        for (iVar2 = 0; iVar2 < (int)g_CDemonSetPtr->actor_list_ptr; iVar2 = iVar2 + 1) {
          iVar11 = *(int *)(g_CDemonSetPtr->actor_list_data + iStack_14);
          if (in_stack_00000004 == *(CDemonActor **)(iVar11 + 0xdc)) {
            core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                      (&CStack_1b4,(CVector3f *)(iVar11 + 0x20),(CVector3f *)(iVar11 + 0x30));
            core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                      (&CStack_1b4,(CMatrix3x4f *)(auStack_21c + 8),matrix_b);
            pfVar9 = afStack_124;
            pCVar12 = &CStack_154;
            for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
              pCVar12->m[0].w = *pfVar9;
              pfVar9 = pfVar9 + (uint)bVar15 * -2 + 1;
              pCVar12 = (CMatrix3x4f *)((int)pCVar12 + ((uint)bVar15 * -2 + 1) * 4);
            }
            core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                      (&CStack_154,(CMatrix3x4f *)(auStack_fc + 8),matrix_b);
            pfVar9 = afStack_184;
            pCVar13 = &CStack_1e4;
            for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
              pCVar13->x = *pfVar9;
              pfVar9 = pfVar9 + (uint)bVar15 * -2 + 1;
              pCVar13 = (CVector3f *)((int)pCVar13 + ((uint)bVar15 * -2 + 1) * 4);
            }
            CStack_84.m[2].x = fStack_1d8;
            CStack_84.m[2].y = fStack_1c8;
            CStack_84.m[2].z = fStack_1b8;
            core_xform_cpp_matrixToEulerAngles_FUN_005f5690(&CStack_1e4,&CStack_84);
            CStack_84.m[1].x = CStack_84.m[2].x - ((CVector3f *)(iVar11 + 0x20))->x;
            CStack_84.m[1].y = CStack_84.m[2].y - *(float *)(iVar11 + 0x24);
            CStack_84.m[1].z = CStack_84.m[2].z - *(float *)(iVar11 + 0x28);
            if ((CVector3f *)(iVar11 + 0xe0) != CStack_84.m + 1) {
              *(float *)(iVar11 + 0xe0) = CStack_84.m[1].x;
              *(float *)(iVar11 + 0xe4) = CStack_84.m[1].y;
              *(float *)(iVar11 + 0xe8) = CStack_84.m[1].z;
            }
            *(undefined4 *)(iVar11 + 0xec) = 0;
            *(undefined4 *)(iVar11 + 0xf4) = 0;
            fVar5 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                              (CStack_84.m[0].y - *(float *)(iVar11 + 0x34));
            *(float *)(iVar11 + 0xf0) = fVar5;
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
      iVar11 = iVar11 + 1;
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
    if ((CStack_9c.max.y < CStack_3c.y) || (CStack_3c.y < CStack_9c.min.y + (float)DOUBLE_0063f786))
    goto LAB_0054d4f3;
    core_box_cpp_CBoundingBox3D_clampPoint_FUN_00421550(&CStack_9c,&CStack_60,&CStack_3c);
    local_30 = CStack_3c.x - CStack_60.x;
    local_2c = CStack_3c.y - CStack_60.y;
    local_28 = CStack_3c.z - CStack_60.z;
    if (((float)DOUBLE_0063f78e < ABS(local_30)) || ((float)DOUBLE_0063f78e < ABS(local_28)))
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
    dStack_320 = (double)fStack_318;
    if (dStack_320 <= 0.0) goto LAB_0054d4f3;
    fVar5 = ((float)auStack_c4._28_4_ + (float)DOUBLE_0063f796) / fStack_318;
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
    iVar11 = iVar11 + 1;
    iVar2 = iVar2 + 4;
  } while( true );
}


// Assembly code:
// 0054cc30: PUSH EBX
//   Label: core_platfrm.cpp_FUN_0054cc30
// 0054cc31: PUSH ESI
// 0054cc32: PUSH EDI
// 0054cc33: PUSH EBP
// 0054cc34: MOV EBP,ESP
// 0054cc36: SUB ESP,0x31c
// 0054cc3c: AND ESP,0xfffffff8
// 0054cc3f: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0054cc42: CMP dword ptr [EAX + 0x4c0],0x2
// 0054cc49: JGE 0x0054d681
//   XREF to: 0054d681 (CONDITIONAL_JUMP)
// 0054cc4f: MOV EAX,dword ptr [EAX + 0x2dc]
// 0054cc55: XOR EBX,EBX
// 0054cc57: MOV dword ptr [ESP + 0x2fc],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 0054cc5e: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0054cc61: MOV dword ptr [ESP + 0x300],EBX
//   XREF to: Stack[-0x30] (WRITE)
// 0054cc68: MOV EAX,dword ptr [EAX + 0x2d4]
// 0054cc6e: MOV dword ptr [ESP + 0x304],EBX
//   XREF to: Stack[-0x2c] (WRITE)
// 0054cc75: CMP EAX,0x4
// 0054cc78: JA 0x0054cccf
//   XREF to: 0054cccf (CONDITIONAL_JUMP)
// 0054cc7a: JMP dword ptr [EAX*0x4 + 0x54cc10]
//   Label: switchD
//   XREF to: 0054cc81 (COMPUTED_JUMP)
//   XREF to: 0054cef7 (COMPUTED_JUMP)
//   XREF to: 0054cf48 (COMPUTED_JUMP)
//   XREF to: 0054cfcc (COMPUTED_JUMP)
//   XREF to: 0054d0b2 (COMPUTED_JUMP)
//   XREF to: 0054cc10 (DATA)
// 0054cc81: MOV EAX,dword ptr [EBP + 0x14]
//   Label: caseD_0
//   XREF to: Stack[0x4] (READ)
// 0054cc84: ADD EAX,0x3b8
// 0054cc89: PUSH EAX
// 0054cc8a: MOV EAX,[0x006793d0]
//   XREF to: 02d05310 (PARAM)
//   XREF to: 006793d0 (READ)
// 0054cc8f: PUSH EAX
//   XREF to: 02d05310 (DATA)
// 0054cc90: CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
//   XREF to: 004adca0 (UNCONDITIONAL_CALL)
// 0054cc95: ADD ESP,0x8
// 0054cc98: TEST EAX,EAX
// 0054cc9a: JZ 0x0054ccc2
//   XREF to: 0054ccc2 (CONDITIONAL_JUMP)
// 0054cc9c: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0054cc9f: FLD float ptr [EAX + 0x2e8]
// 0054cca5: FLD1
// 0054cca7: FDIVRP
// 0054cca9: SUB ESP,0x4
// 0054ccac: FSTP float ptr [ESP]
//   XREF to: Stack[-0x334] (DATA)
// 0054ccaf: PUSH 0x3f800000
// 0054ccb4: PUSH EAX
// 0054ccb5: MOV EBX,0x1
// 0054ccba: CALL core_platfrm.cpp_FUN_0054d690
//   XREF to: 0054d690 (UNCONDITIONAL_CALL)
// 0054ccbf: ADD ESP,0xc
// 0054ccc2: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0054ccc2
//   XREF to: Stack[0x4] (READ)
// 0054ccc5: MOV dword ptr [EAX + 0x2dc],0x0
// 0054cccf: MOV EAX,dword ptr [EBP + 0x14]
//   Label: default
//   XREF to: Stack[0x4] (READ)
// 0054ccd2: CMP dword ptr [EAX + 0x4c8],0x0
// 0054ccd9: JZ 0x0054cdc9
//   XREF to: 0054cdc9 (CONDITIONAL_JUMP)
// 0054ccdf: TEST EBX,EBX
// 0054cce1: JZ 0x0054cdb0
//   XREF to: 0054cdb0 (CONDITIONAL_JUMP)
// 0054cce7: LEA EDI,[ESP + 0xc]
//   XREF to: Stack[-0x324] (DATA)
// 0054cceb: LEA ESI,[EAX + 0x4cc]
// 0054ccf1: LEA EBX,[ESP + 0xc]
//   XREF to: Stack[-0x324] (DATA)
// 0054ccf5: PUSH EDI
// 0054ccf6: MOV AL,byte ptr [ESI]
//   Label: LAB_0054ccf6
// 0054ccf8: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x324] (DATA)
// 0054ccfa: CMP AL,0x0
// 0054ccfc: JZ 0x0054cd0e
//   XREF to: 0054cd0e (CONDITIONAL_JUMP)
// 0054ccfe: MOV AL,byte ptr [ESI + 0x1]
// 0054cd01: ADD ESI,0x2
// 0054cd04: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x323] (WRITE)
// 0054cd07: ADD EDI,0x2
// 0054cd0a: CMP AL,0x0
// 0054cd0c: JNZ 0x0054ccf6
//   XREF to: 0054ccf6 (CONDITIONAL_JUMP)
// 0054cd0e: POP EDI
//   Label: LAB_0054cd0e
// 0054cd0f: MOV CL,byte ptr [ESP + 0xc]
//   XREF to: Stack[-0x324] (READ)
// 0054cd13: LEA ESI,[ESP + 0xc]
//   XREF to: Stack[-0x324] (DATA)
// 0054cd17: TEST CL,CL
// 0054cd19: JZ 0x0054cd70
//   XREF to: 0054cd70 (CONDITIONAL_JUMP)
// 0054cd1b: CMP byte ptr [EBX],0x3b
//   Label: LAB_0054cd1b
//   XREF to: Stack[-0x324] (DATA)
// 0054cd1e: JNZ 0x0054d18b
//   XREF to: 0054d18b (CONDITIONAL_JUMP)
// 0054cd24: PUSH ESI
// 0054cd25: MOV EDI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 0054cd2b: PUSH EDI
//   XREF to: 03114278 (DATA)
// 0054cd2c: MOV byte ptr [EBX],0x0
//   XREF to: Stack[-0x324] (DATA)
// 0054cd2f: CALL core_set.cpp_CDemonSet_FUN_0056b790
//   XREF to: 0056b790 (UNCONDITIONAL_CALL)
// 0054cd34: ADD ESP,0x8
// 0054cd37: CMP EAX,-0x1
// 0054cd3a: JZ 0x0054d17a
//   XREF to: 0054d17a (CONDITIONAL_JUMP)
// 0054cd40: MOV EDX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 0054cd46: MOV EDI,dword ptr [EDX + 0x15aea4]
//   XREF to: 0326f11c (READ)
// 0054cd4c: CMP EAX,EDI
// 0054cd4e: JZ 0x0054d17a
//   XREF to: 0054d17a (CONDITIONAL_JUMP)
// 0054cd54: PUSH 0x4479c000
// 0054cd59: PUSH EAX
// 0054cd5a: PUSH EDX
//   XREF to: 03114278 (DATA)
// 0054cd5b: CALL core_setdir.cpp_CDemonSet_setPendingCamera_FUN_00575b00
//   XREF to: 00575b00 (UNCONDITIONAL_CALL)
// 0054cd60: ADD ESP,0xc
// 0054cd63: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0054cd66: MOV dword ptr [EAX + 0x728],0x0
// 0054cd70: PUSH ESI
//   Label: LAB_0054cd70
// 0054cd71: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 0054cd76: PUSH EAX
//   XREF to: 03114278 (DATA)
// 0054cd77: CALL core_set.cpp_CDemonSet_FUN_0056b790
//   XREF to: 0056b790 (UNCONDITIONAL_CALL)
// 0054cd7c: ADD ESP,0x8
// 0054cd7f: CMP EAX,-0x1
// 0054cd82: JZ 0x0054cdb0
//   XREF to: 0054cdb0 (CONDITIONAL_JUMP)
// 0054cd84: MOV EDX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 0054cd8a: MOV EBX,dword ptr [EDX + 0x15aea4]
//   XREF to: 0326f11c (READ)
// 0054cd90: CMP EAX,EBX
// 0054cd92: JZ 0x0054cdb0
//   XREF to: 0054cdb0 (CONDITIONAL_JUMP)
// 0054cd94: PUSH 0x4479c000
// 0054cd99: PUSH EAX
// 0054cd9a: PUSH EDX
//   XREF to: 03114278 (DATA)
// 0054cd9b: CALL core_setdir.cpp_CDemonSet_setPendingCamera_FUN_00575b00
//   XREF to: 00575b00 (UNCONDITIONAL_CALL)
// 0054cda0: ADD ESP,0xc
// 0054cda3: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0054cda6: MOV dword ptr [EAX + 0x728],0x0
// 0054cdb0: CMP dword ptr [ESP + 0x300],0x0
//   Label: LAB_0054cdb0
//   XREF to: Stack[-0x30] (READ)
// 0054cdb8: JZ 0x0054cdc9
//   XREF to: 0054cdc9 (CONDITIONAL_JUMP)
// 0054cdba: MOV ECX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 0054cdc0: PUSH ECX
//   XREF to: 03114278 (DATA)
// 0054cdc1: CALL core_setdir.cpp_CDemonSet_clearCameraSwitchCooldown_FUN_00575b20
//   XREF to: 00575b20 (UNCONDITIONAL_CALL)
// 0054cdc6: ADD ESP,0x4
// 0054cdc9: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0054cdc9
//   XREF to: Stack[0x4] (READ)
// 0054cdcc: FLD float ptr [EAX + 0x2dc]
// 0054cdd2: FCOMP float ptr [ESP + 0x2fc]
//   XREF to: Stack[-0x34] (READ)
// 0054cdd9: FNSTSW AX
// 0054cddb: SAHF
// 0054cddc: JZ 0x0054d681
//   XREF to: 0054d681 (CONDITIONAL_JUMP)
// 0054cde2: CMP dword ptr [ESP + 0x304],0x0
//   XREF to: Stack[-0x2c] (READ)
// 0054cdea: JZ 0x0054d1c1
//   XREF to: 0054d1c1 (CONDITIONAL_JUMP)
// 0054cdf0: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0054cdf3: CMP byte ptr [EAX + 0x4a8],0x0
// 0054cdfa: JZ 0x0054d1c1
//   XREF to: 0054d1c1 (CONDITIONAL_JUMP)
// 0054ce00: MOV EDX,dword ptr [EAX + 0x4bc]
// 0054ce06: PUSH EDX
// 0054ce07: MOV ECX,dword ptr [0x00681ef8]
//   XREF to: 03f6af64 (PARAM)
//   XREF to: 00681ef8 (READ)
// 0054ce0d: PUSH ECX
//   XREF to: 03f6af64 (DATA)
// 0054ce0e: CALL core_sound.cpp_CSound_isSoundPlaying_FUN_005b3b80
//   XREF to: 005b3b80 (UNCONDITIONAL_CALL)
// 0054ce13: ADD ESP,0x8
// 0054ce16: TEST EAX,EAX
// 0054ce18: JZ 0x0054d19a
//   XREF to: 0054d19a (CONDITIONAL_JUMP)
// 0054ce1e: MOV EBX,dword ptr [EBP + 0x14]
//   Label: LAB_0054ce1e
//   XREF to: Stack[0x4] (READ)
// 0054ce21: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0054ce24: ADD EBX,0x30
// 0054ce27: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0054ce2a: PUSH EBX
// 0054ce2b: ADD ESI,0x20
// 0054ce2e: MOV EAX,dword ptr [EAX + 0x24]
// 0054ce31: PUSH ESI
// 0054ce32: MOV dword ptr [ESP + 0x310],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0054ce39: LEA EAX,[ESP + 0x114]
//   XREF to: Stack[-0x224] (DATA)
// 0054ce40: PUSH EAX
// 0054ce41: CALL core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
//   XREF to: 005f5390 (UNCONDITIONAL_CALL)
// 0054ce46: ADD ESP,0xc
// 0054ce49: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0054ce4c: PUSH EDI
// 0054ce4d: CALL core_platfrm.cpp_FUN_0054cab0
//   XREF to: 0054cab0 (UNCONDITIONAL_CALL)
// 0054ce52: ADD ESP,0x4
// 0054ce55: PUSH EBX
// 0054ce56: PUSH ESI
// 0054ce57: LEA EAX,[ESP + 0x234]
//   XREF to: Stack[-0x104] (DATA)
// 0054ce5e: PUSH EAX
// 0054ce5f: CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   XREF to: 005f54c0 (UNCONDITIONAL_CALL)
// 0054ce64: ADD ESP,0xc
// 0054ce67: LEA EDX,[ESP + 0x284]
//   XREF to: Stack[-0xac] (DATA)
// 0054ce6e: PUSH EDX
// 0054ce6f: MOV EAX,dword ptr [EDI + 0x154]
// 0054ce75: PUSH EDI
// 0054ce76: XOR ESI,ESI
// 0054ce78: CALL dword ptr [EAX + 0x14]
// 0054ce7b: ADD ESP,0x8
// 0054ce7e: XOR EDI,EDI
// 0054ce80: MOV EAX,[0x006810c8]
//   Label: LAB_0054ce80
//   XREF to: 006810c8 (READ)
// 0054ce85: CMP EDI,dword ptr [EAX + 0x14f098]
//   XREF to: 03263310 (READ)
// 0054ce8b: JL 0x0054d1df
//   XREF to: 0054d1df (CONDITIONAL_JUMP)
// 0054ce91: XOR EBX,EBX
// 0054ce93: MOV dword ptr [ESP + 0x310],EBX
// 0054ce9a: MOV dword ptr [ESP + 0x30c],EBX
// 0054cea1: MOV EAX,[0x006810c8]
//   Label: LAB_0054cea1
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 0054cea6: MOV EDX,dword ptr [ESP + 0x310]
// 0054cead: CMP EDX,dword ptr [EAX + 0x14d154]
//   XREF to: 032613cc (READ)
// 0054ceb3: JGE 0x0054d675
//   XREF to: 0054d675 (CONDITIONAL_JUMP)
// 0054ceb9: ADD EAX,dword ptr [ESP + 0x30c]
// 0054cec0: MOV EBX,dword ptr [EAX + 0x14d158]
//   XREF to: 032613d0 (DATA)
//   XREF to: 032613d4 (DATA)
// 0054cec6: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0054cec9: CMP EDI,dword ptr [EBX + 0xdc]
// 0054cecf: JZ 0x0054d4fc
//   XREF to: 0054d4fc (CONDITIONAL_JUMP)
// 0054ced5: MOV ECX,dword ptr [ESP + 0x310]
//   Label: LAB_0054ced5
// 0054cedc: MOV EDX,dword ptr [ESP + 0x30c]
// 0054cee3: INC ECX
// 0054cee4: ADD EDX,0x4
// 0054cee7: MOV dword ptr [ESP + 0x310],ECX
// 0054ceee: MOV dword ptr [ESP + 0x30c],EDX
// 0054cef5: JMP 0x0054cea1
//   XREF to: 0054cea1 (UNCONDITIONAL_JUMP)
// 0054cef7: MOV EAX,dword ptr [EBP + 0x14]
//   Label: caseD_1
//   XREF to: Stack[0x4] (READ)
// 0054cefa: ADD EAX,0x354
// 0054ceff: PUSH EAX
// 0054cf00: MOV ESI,dword ptr [0x006793d0]
//   XREF to: 006793d0 (READ)
// 0054cf06: PUSH ESI
//   XREF to: 02d05310 (DATA)
// 0054cf07: CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
//   XREF to: 004adca0 (UNCONDITIONAL_CALL)
// 0054cf0c: ADD ESP,0x8
// 0054cf0f: TEST EAX,EAX
// 0054cf11: JZ 0x0054cf36
//   XREF to: 0054cf36 (CONDITIONAL_JUMP)
// 0054cf13: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0054cf16: FLD float ptr [EAX + 0x2ec]
// 0054cf1c: FLD1
// 0054cf1e: FDIVRP
// 0054cf20: SUB ESP,0x4
// 0054cf23: FSTP float ptr [ESP]
//   XREF to: Stack[-0x334] (DATA)
// 0054cf26: PUSH 0x0
// 0054cf28: PUSH EAX
// 0054cf29: MOV EBX,0x1
// 0054cf2e: CALL core_platfrm.cpp_FUN_0054d690
//   XREF to: 0054d690 (UNCONDITIONAL_CALL)
// 0054cf33: ADD ESP,0xc
// 0054cf36: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0054cf36
//   XREF to: Stack[0x4] (READ)
// 0054cf39: MOV dword ptr [EAX + 0x2dc],0x3f800000
// 0054cf43: JMP 0x0054cccf
//   XREF to: 0054cccf (UNCONDITIONAL_JUMP)
// 0054cf48: MOV EAX,dword ptr [EBP + 0x14]
//   Label: caseD_2
//   XREF to: Stack[0x4] (READ)
// 0054cf4b: ADD EAX,0x3b8
// 0054cf50: PUSH EAX
// 0054cf51: MOV EDI,dword ptr [0x006793d0]
//   XREF to: 006793d0 (READ)
// 0054cf57: PUSH EDI
//   XREF to: 02d05310 (DATA)
// 0054cf58: CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
//   XREF to: 004adca0 (UNCONDITIONAL_CALL)
// 0054cf5d: ADD ESP,0x8
// 0054cf60: TEST EAX,EAX
// 0054cf62: JZ 0x0054cf8a
//   XREF to: 0054cf8a (CONDITIONAL_JUMP)
// 0054cf64: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0054cf67: FLD float ptr [EAX + 0x2e8]
// 0054cf6d: FLD1
// 0054cf6f: FDIVRP
// 0054cf71: SUB ESP,0x4
// 0054cf74: FSTP float ptr [ESP]
//   XREF to: Stack[-0x334] (DATA)
// 0054cf77: PUSH 0x3f800000
// 0054cf7c: PUSH EAX
// 0054cf7d: CALL core_platfrm.cpp_FUN_0054d690
//   XREF to: 0054d690 (UNCONDITIONAL_CALL)
// 0054cf82: ADD ESP,0xc
// 0054cf85: JMP 0x0054cccf
//   XREF to: 0054cccf (UNCONDITIONAL_JUMP)
// 0054cf8a: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0054cf8a
//   XREF to: Stack[0x4] (READ)
// 0054cf8d: ADD EAX,0x354
// 0054cf92: PUSH EAX
// 0054cf93: MOV EAX,[0x006793d0]
//   XREF to: 02d05310 (PARAM)
//   XREF to: 006793d0 (READ)
// 0054cf98: PUSH EAX
//   XREF to: 02d05310 (DATA)
// 0054cf99: CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
//   XREF to: 004adca0 (UNCONDITIONAL_CALL)
// 0054cf9e: ADD ESP,0x8
// 0054cfa1: TEST EAX,EAX
// 0054cfa3: JZ 0x0054cccf
//   XREF to: 0054cccf (CONDITIONAL_JUMP)
// 0054cfa9: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0054cfac: FLD float ptr [EAX + 0x2ec]
// 0054cfb2: FLD1
// 0054cfb4: FDIVRP
// 0054cfb6: SUB ESP,0x4
// 0054cfb9: FSTP float ptr [ESP]
//   XREF to: Stack[-0x334] (DATA)
// 0054cfbc: PUSH 0x0
// 0054cfbe: PUSH EAX
// 0054cfbf: CALL core_platfrm.cpp_FUN_0054d690
//   XREF to: 0054d690 (UNCONDITIONAL_CALL)
// 0054cfc4: ADD ESP,0xc
// 0054cfc7: JMP 0x0054cccf
//   XREF to: 0054cccf (UNCONDITIONAL_JUMP)
// 0054cfcc: MOV EAX,dword ptr [EBP + 0x14]
//   Label: caseD_3
//   XREF to: Stack[0x4] (READ)
// 0054cfcf: ADD EAX,0x41c
// 0054cfd4: PUSH EAX
// 0054cfd5: MOV EDI,dword ptr [0x006793d0]
//   XREF to: 006793d0 (READ)
// 0054cfdb: PUSH EDI
//   XREF to: 02d05310 (DATA)
// 0054cfdc: CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
//   XREF to: 004adca0 (UNCONDITIONAL_CALL)
// 0054cfe1: ADD ESP,0x8
// 0054cfe4: TEST EAX,EAX
// 0054cfe6: JZ 0x0054d01e
//   XREF to: 0054d01e (CONDITIONAL_JUMP)
// 0054cfe8: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0054cfeb: MOV DH,byte ptr [EAX + 0x494]
// 0054cff1: MOV dword ptr [EAX + 0x2d4],0x2
// 0054cffb: TEST DH,DH
// 0054cffd: JZ 0x0054cccf
//   XREF to: 0054cccf (CONDITIONAL_JUMP)
// 0054d003: ADD EAX,0x494
// 0054d008: PUSH EAX
// 0054d009: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0054d00c: MOV EDX,dword ptr [EAX + 0xfffffcc0]
// 0054d012: PUSH ESI
// 0054d013: CALL dword ptr [EDX + 0x24]
// 0054d016: ADD ESP,0x8
// 0054d019: JMP 0x0054cccf
//   XREF to: 0054cccf (UNCONDITIONAL_JUMP)
// 0054d01e: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0054d01e
//   XREF to: Stack[0x4] (READ)
// 0054d021: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0054d024: FMUL float ptr [EAX + 0x2e4]
// 0054d02a: FADD float ptr [EAX + 0x2dc]
// 0054d030: FST float ptr [EAX + 0x2dc]
// 0054d036: FCOMP float ptr [EAX + 0x2e0]
// 0054d03c: FNSTSW AX
// 0054d03e: SAHF
// 0054d03f: JBE 0x0054d0a2
//   XREF to: 0054d0a2 (CONDITIONAL_JUMP)
// 0054d041: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0054d044: MOV EDX,dword ptr [EAX + 0x2e0]
// 0054d04a: MOV dword ptr [EAX + 0x2dc],EDX
// 0054d050: FLD float ptr [EAX + 0x2dc]
// 0054d056: FLD1
// 0054d058: FCOMPP
// 0054d05a: FNSTSW AX
// 0054d05c: SAHF
// 0054d05d: JA 0x0054d090
//   XREF to: 0054d090 (CONDITIONAL_JUMP)
// 0054d05f: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0054d062: MOV EDX,dword ptr [EAX + 0x4c0]
// 0054d068: MOV dword ptr [EAX + 0x2d4],0x1
// 0054d072: TEST EDX,EDX
// 0054d074: JZ 0x0054d080
//   XREF to: 0054d080 (CONDITIONAL_JUMP)
// 0054d076: MOV dword ptr [EAX + 0x4c0],0x2
// 0054d080: MOV dword ptr [ESP + 0x300],0x1
//   Label: LAB_0054d080
//   XREF to: Stack[-0x30] (WRITE)
// 0054d08b: JMP 0x0054cccf
//   XREF to: 0054cccf (UNCONDITIONAL_JUMP)
// 0054d090: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0054d090
//   XREF to: Stack[0x4] (READ)
// 0054d093: MOV dword ptr [EAX + 0x2d4],0x2
// 0054d09d: JMP 0x0054cccf
//   XREF to: 0054cccf (UNCONDITIONAL_JUMP)
// 0054d0a2: MOV dword ptr [ESP + 0x304],0x1
//   Label: LAB_0054d0a2
//   XREF to: Stack[-0x2c] (WRITE)
// 0054d0ad: JMP 0x0054cccf
//   XREF to: 0054cccf (UNCONDITIONAL_JUMP)
// 0054d0b2: MOV EAX,dword ptr [EBP + 0x14]
//   Label: caseD_4
//   XREF to: Stack[0x4] (READ)
// 0054d0b5: ADD EAX,0x41c
// 0054d0ba: PUSH EAX
// 0054d0bb: MOV EDI,dword ptr [0x006793d0]
//   XREF to: 006793d0 (READ)
// 0054d0c1: PUSH EDI
//   XREF to: 02d05310 (DATA)
// 0054d0c2: CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
//   XREF to: 004adca0 (UNCONDITIONAL_CALL)
// 0054d0c7: ADD ESP,0x8
// 0054d0ca: TEST EAX,EAX
// 0054d0cc: JZ 0x0054d104
//   XREF to: 0054d104 (CONDITIONAL_JUMP)
// 0054d0ce: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0054d0d1: MOV DL,byte ptr [EAX + 0x494]
// 0054d0d7: MOV dword ptr [EAX + 0x2d4],0x2
// 0054d0e1: TEST DL,DL
// 0054d0e3: JZ 0x0054cccf
//   XREF to: 0054cccf (CONDITIONAL_JUMP)
// 0054d0e9: ADD EAX,0x494
// 0054d0ee: PUSH EAX
// 0054d0ef: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0054d0f2: MOV EDX,dword ptr [EAX + 0xfffffcc0]
// 0054d0f8: PUSH ESI
// 0054d0f9: CALL dword ptr [EDX + 0x24]
// 0054d0fc: ADD ESP,0x8
// 0054d0ff: JMP 0x0054cccf
//   XREF to: 0054cccf (UNCONDITIONAL_JUMP)
// 0054d104: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0054d104
//   XREF to: Stack[0x4] (READ)
// 0054d107: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0054d10a: FMUL float ptr [EAX + 0x2e4]
// 0054d110: FSUBR float ptr [EAX + 0x2dc]
// 0054d116: FST float ptr [EAX + 0x2dc]
// 0054d11c: FCOMP float ptr [EAX + 0x2e0]
// 0054d122: FNSTSW AX
// 0054d124: SAHF
// 0054d125: JNC 0x0054d0a2
//   XREF to: 0054d0a2 (CONDITIONAL_JUMP)
// 0054d12b: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0054d12e: MOV EDX,dword ptr [EAX + 0x2e0]
// 0054d134: MOV dword ptr [EAX + 0x2dc],EDX
// 0054d13a: FLD float ptr [EAX + 0x2dc]
// 0054d140: FLDZ
// 0054d142: FCOMPP
// 0054d144: FNSTSW AX
// 0054d146: SAHF
// 0054d147: JC 0x0054d090
//   XREF to: 0054d090 (CONDITIONAL_JUMP)
// 0054d14d: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0054d150: MOV EDX,dword ptr [EAX + 0x4c0]
// 0054d156: MOV dword ptr [EAX + 0x2d4],EBX
// 0054d15c: TEST EDX,EDX
// 0054d15e: JZ 0x0054d16a
//   XREF to: 0054d16a (CONDITIONAL_JUMP)
// 0054d160: MOV dword ptr [EAX + 0x4c0],0x2
// 0054d16a: MOV dword ptr [ESP + 0x300],0x1
//   Label: LAB_0054d16a
//   XREF to: Stack[-0x30] (WRITE)
// 0054d175: JMP 0x0054cccf
//   XREF to: 0054cccf (UNCONDITIONAL_JUMP)
// 0054d17a: INC EBX
//   Label: LAB_0054d17a
// 0054d17b: MOV ESI,EBX
// 0054d17d: CMP byte ptr [EBX],0x0
//   XREF to: Stack[-0x323] (DATA)
// 0054d180: JNZ 0x0054cd1b
//   XREF to: 0054cd1b (CONDITIONAL_JUMP)
// 0054d186: JMP 0x0054cd70
//   XREF to: 0054cd70 (UNCONDITIONAL_JUMP)
// 0054d18b: INC EBX
//   Label: LAB_0054d18b
// 0054d18c: CMP byte ptr [EBX],0x0
//   XREF to: Stack[-0x323] (DATA)
// 0054d18f: JNZ 0x0054cd1b
//   XREF to: 0054cd1b (CONDITIONAL_JUMP)
// 0054d195: JMP 0x0054cd70
//   XREF to: 0054cd70 (UNCONDITIONAL_JUMP)
// 0054d19a: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0054d19a
//   XREF to: Stack[0x4] (READ)
// 0054d19d: ADD EAX,0x4a8
// 0054d1a2: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0054d1a5: PUSH EAX
// 0054d1a6: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0054d1a9: MOV EDX,dword ptr [EDX + 0x154]
// 0054d1af: PUSH EBX
// 0054d1b0: CALL dword ptr [EDX + 0x28]
// 0054d1b3: ADD ESP,0x8
// 0054d1b6: MOV dword ptr [EBX + 0x4bc],EAX
// 0054d1bc: JMP 0x0054ce1e
//   XREF to: 0054ce1e (UNCONDITIONAL_JUMP)
// 0054d1c1: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0054d1c1
//   XREF to: Stack[0x4] (READ)
// 0054d1c4: MOV ESI,dword ptr [EAX + 0x4bc]
// 0054d1ca: PUSH ESI
// 0054d1cb: MOV EDI,dword ptr [0x00681ef8]
//   XREF to: 00681ef8 (READ)
// 0054d1d1: PUSH EDI
//   XREF to: 03f6af64 (DATA)
// 0054d1d2: CALL core_sound.cpp_CSound_killSound_FUN_005b3b90
//   XREF to: 005b3b90 (UNCONDITIONAL_CALL)
// 0054d1d7: ADD ESP,0x8
// 0054d1da: JMP 0x0054ce1e
//   XREF to: 0054ce1e (UNCONDITIONAL_JUMP)
// 0054d1df: MOV EBX,dword ptr [ESI + EAX*0x1 + 0x14f09c]
//   Label: LAB_0054d1df
//   XREF to: 03263314 (READ)
// 0054d1e6: PUSH EBX
// 0054d1e7: MOV EAX,dword ptr [EBX + 0x154]
// 0054d1ed: CALL dword ptr [EAX + 0x120]
// 0054d1f3: ADD ESP,0x4
// 0054d1f6: TEST EAX,EAX
// 0054d1f8: JG 0x0054d4f3
//   XREF to: 0054d4f3 (CONDITIONAL_JUMP)
// 0054d1fe: PUSH EBX
// 0054d1ff: MOV EAX,dword ptr [EBX + 0x154]
// 0054d205: CALL dword ptr [EAX + 0x68]
// 0054d208: ADD ESP,0x4
// 0054d20b: TEST EAX,EAX
// 0054d20d: JNZ 0x0054d4f3
//   XREF to: 0054d4f3 (CONDITIONAL_JUMP)
// 0054d213: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0054d216: CMP dword ptr [EAX + 0x510],0x0
// 0054d21d: JZ 0x0054d4ba
//   XREF to: 0054d4ba (CONDITIONAL_JUMP)
// 0054d223: LEA EAX,[EBX + 0x20]
// 0054d226: PUSH EAX
// 0054d227: LEA EAX,[ESP + 0x2e8]
// 0054d22e: PUSH EAX
// 0054d22f: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0054d232: PUSH EAX
// 0054d233: CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 0054d238: ADD ESP,0xc
// 0054d23b: FLD float ptr [ESP + 0x2e8]
// 0054d242: FCOMP float ptr [ESP + 0x294]
// 0054d249: FNSTSW AX
// 0054d24b: SAHF
// 0054d24c: JA 0x0054d4f3
//   XREF to: 0054d4f3 (CONDITIONAL_JUMP)
// 0054d252: FLD float ptr [ESP + 0x288]
// 0054d259: FADD double ptr [0x0063f786]
//   XREF to: 0063f786 (READ)
// 0054d25f: FLD float ptr [ESP + 0x2e8]
// 0054d266: FCOMPP
// 0054d268: FNSTSW AX
// 0054d26a: SAHF
// 0054d26b: JC 0x0054d4f3
//   XREF to: 0054d4f3 (CONDITIONAL_JUMP)
// 0054d271: LEA EAX,[ESP + 0x2e4]
// 0054d278: PUSH EAX
// 0054d279: LEA EAX,[ESP + 0x2c4]
// 0054d280: PUSH EAX
// 0054d281: LEA EAX,[ESP + 0x28c]
// 0054d288: PUSH EAX
// 0054d289: CALL core_box.cpp_CBoundingBox3D_clampPoint_FUN_00421550
//   XREF to: 00421550 (UNCONDITIONAL_CALL)
// 0054d28e: ADD ESP,0xc
// 0054d291: FLD float ptr [ESP + 0x2e4]
// 0054d298: FSUB float ptr [ESP + 0x2c0]
// 0054d29f: FST float ptr [ESP + 0x2f0]
// 0054d2a6: FABS
// 0054d2a8: FLD float ptr [ESP + 0x2ec]
// 0054d2af: FLD float ptr [ESP + 0x2e8]
// 0054d2b6: FSUB float ptr [ESP + 0x2c4]
// 0054d2bd: FXCH
// 0054d2bf: FSUB float ptr [ESP + 0x2c8]
// 0054d2c6: FXCH
// 0054d2c8: FSTP float ptr [ESP + 0x2f4]
// 0054d2cf: FSTP float ptr [ESP + 0x2f8]
// 0054d2d6: FCOMP double ptr [0x0063f78e]
//   XREF to: 0063f78e (READ)
// 0054d2dc: FNSTSW AX
// 0054d2de: SAHF
// 0054d2df: JA 0x0054d4f3
//   XREF to: 0054d4f3 (CONDITIONAL_JUMP)
// 0054d2e5: FLD float ptr [ESP + 0x2f8]
// 0054d2ec: FABS
// 0054d2ee: FCOMP double ptr [0x0063f78e]
//   XREF to: 0063f78e (READ)
// 0054d2f4: FNSTSW AX
// 0054d2f6: SAHF
// 0054d2f7: JA 0x0054d4f3
//   XREF to: 0054d4f3 (CONDITIONAL_JUMP)
// 0054d2fd: LEA EAX,[ESP + 0x25c]
// 0054d304: XOR EDX,EDX
// 0054d306: PUSH EAX
// 0054d307: MOV dword ptr [ESP + 0x2f8],EDX
// 0054d30e: CALL core_setcolid.cpp_SCollisionInfo_ctor_FUN_005743c0
//   XREF to: 005743c0 (UNCONDITIONAL_CALL)
// 0054d313: ADD ESP,0x4
// 0054d316: LEA EAX,[ESP + 0x25c]
// 0054d31d: XOR ECX,ECX
// 0054d31f: PUSH EAX
// 0054d320: MOV dword ptr [ESP + 0x260],ECX
// 0054d327: PUSH EBX
// 0054d328: MOV EDX,dword ptr [EBX + 0x154]
// 0054d32e: CALL dword ptr [EDX + 0x34]
// 0054d331: ADD ESP,0x8
// 0054d334: CMP EAX,0x2
// 0054d337: JNZ 0x0054d4f3
//   XREF to: 0054d4f3 (CONDITIONAL_JUMP)
// 0054d33d: FLD float ptr [ESP + 0x2e8]
// 0054d344: FADD float ptr [ESP + 0x270]
// 0054d34b: FCOMP float ptr [ESP + 0x294]
// 0054d352: FNSTSW AX
// 0054d354: SAHF
// 0054d355: JA 0x0054d4f3
//   XREF to: 0054d4f3 (CONDITIONAL_JUMP)
// 0054d35b: FLD float ptr [ESP + 0x2e8]
// 0054d362: FADD float ptr [ESP + 0x274]
// 0054d369: FCOMP float ptr [ESP + 0x288]
// 0054d370: FNSTSW AX
// 0054d372: SAHF
// 0054d373: JC 0x0054d4f3
//   XREF to: 0054d4f3 (CONDITIONAL_JUMP)
// 0054d379: FLD float ptr [ESP + 0x2f8]
// 0054d380: FMUL ST0
// 0054d382: FLD float ptr [ESP + 0x2f0]
// 0054d389: FMUL ST0
// 0054d38b: FLD float ptr [ESP + 0x278]
// 0054d392: FXCH
// 0054d394: FADDP ST2,ST0
// 0054d396: FMUL float ptr [ESP + 0x278]
// 0054d39d: FXCH
// 0054d39f: FSTP float ptr [ESP + 0x8]
// 0054d3a3: FCOMP float ptr [ESP + 0x8]
// 0054d3a7: FNSTSW AX
// 0054d3a9: SAHF
// 0054d3aa: JC 0x0054d4f3
//   XREF to: 0054d4f3 (CONDITIONAL_JUMP)
// 0054d3b0: FLD float ptr [ESP + 0x8]
// 0054d3b4: FSQRT
// 0054d3b6: FLDZ
// 0054d3b8: FXCH
// 0054d3ba: FST float ptr [ESP + 0x8]
// 0054d3be: FSTP double ptr [ESP]
// 0054d3c1: FCOMP double ptr [ESP]
// 0054d3c4: FNSTSW AX
// 0054d3c6: SAHF
// 0054d3c7: JNC 0x0054d4f3
//   XREF to: 0054d4f3 (CONDITIONAL_JUMP)
// 0054d3cd: FLD float ptr [ESP + 0x278]
// 0054d3d4: FADD double ptr [0x0063f796]
//   XREF to: 0063f796 (READ)
// 0054d3da: FDIV double ptr [ESP]
// 0054d3dd: FLD float ptr [ESP + 0x2f0]
// 0054d3e4: FXCH
// 0054d3e6: FSTP float ptr [ESP + 0x314]
// 0054d3ed: FMUL float ptr [ESP + 0x314]
// 0054d3f4: FLD float ptr [ESP + 0x2f4]
// 0054d3fb: FMUL float ptr [ESP + 0x314]
// 0054d402: FLD float ptr [ESP + 0x2f8]
// 0054d409: FMUL float ptr [ESP + 0x314]
// 0054d410: LEA EAX,[ESP + 0x2d8]
// 0054d417: FLD float ptr [ESP + 0x2c0]
// 0054d41e: PUSH EAX
// 0054d41f: LEA EAX,[ESP + 0x2d0]
// 0054d426: FLD float ptr [ESP + 0x2c8]
// 0054d42d: PUSH EAX
// 0054d42e: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0054d431: FLD float ptr [ESP + 0x2d0]
// 0054d438: PUSH EAX
// 0054d439: FXCH ST5
// 0054d43b: FSTP float ptr [ESP + 0x2fc]
// 0054d442: FXCH ST3
// 0054d444: FSTP float ptr [ESP + 0x300]
// 0054d44b: FXCH
// 0054d44d: FSTP float ptr [ESP + 0x304]
// 0054d454: FADD float ptr [ESP + 0x2fc]
// 0054d45b: FXCH
// 0054d45d: FADD float ptr [ESP + 0x300]
// 0054d464: FXCH ST2
// 0054d466: FADD float ptr [ESP + 0x304]
// 0054d46d: FXCH
// 0054d46f: FSTP float ptr [ESP + 0x2e4]
// 0054d476: FXCH
// 0054d478: FSTP float ptr [ESP + 0x2e8]
// 0054d47f: FSTP float ptr [ESP + 0x2ec]
// 0054d486: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 0054d48b: ADD ESP,0xc
// 0054d48e: MOV EAX,dword ptr [EBX + 0x24]
// 0054d491: MOV dword ptr [ESP + 0x2d0],EAX
// 0054d498: LEA EAX,[EBX + 0x30]
// 0054d49b: PUSH EAX
// 0054d49c: LEA EAX,[ESP + 0x2d0]
// 0054d4a3: PUSH EAX
// 0054d4a4: MOV EDX,dword ptr [EBX + 0x154]
// 0054d4aa: PUSH EBX
// 0054d4ab: CALL dword ptr [EDX + 0x60]
// 0054d4ae: ADD ESP,0xc
// 0054d4b1: INC EDI
// 0054d4b2: ADD ESI,0x4
// 0054d4b5: JMP 0x0054ce80
//   XREF to: 0054ce80 (UNCONDITIONAL_JUMP)
// 0054d4ba: FLD float ptr [EAX + 0x24]
//   Label: LAB_0054d4ba
// 0054d4bd: FCOMP float ptr [ESP + 0x308]
// 0054d4c4: FNSTSW AX
// 0054d4c6: SAHF
// 0054d4c7: JNC 0x0054d4f3
//   XREF to: 0054d4f3 (CONDITIONAL_JUMP)
// 0054d4c9: PUSH EBX
// 0054d4ca: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0054d4cd: PUSH ECX
// 0054d4ce: CALL core_platfrm.cpp_FUN_0054df80
//   XREF to: 0054df80 (UNCONDITIONAL_CALL)
// 0054d4d3: ADD ESP,0x8
// 0054d4d6: TEST EAX,EAX
// 0054d4d8: JZ 0x0054d4f3
//   XREF to: 0054d4f3 (CONDITIONAL_JUMP)
// 0054d4da: PUSH 0xbf800000
// 0054d4df: PUSH 0x0
// 0054d4e1: PUSH 0x8
// 0054d4e3: MOV EAX,dword ptr [EBX + 0x154]
// 0054d4e9: PUSH EBX
// 0054d4ea: CALL dword ptr [EAX + 0xf0]
// 0054d4f0: ADD ESP,0x10
// 0054d4f3: INC EDI
//   Label: LAB_0054d4f3
// 0054d4f4: ADD ESI,0x4
// 0054d4f7: JMP 0x0054ce80
//   XREF to: 0054ce80 (UNCONDITIONAL_JUMP)
// 0054d4fc: LEA EAX,[EBX + 0x30]
//   Label: LAB_0054d4fc
// 0054d4ff: PUSH EAX
// 0054d500: LEA EAX,[EBX + 0x20]
// 0054d503: PUSH EAX
// 0054d504: MOV dword ptr [ESP + 0x320],EAX
// 0054d50b: LEA EAX,[ESP + 0x174]
// 0054d512: PUSH EAX
// 0054d513: CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   XREF to: 005f54c0 (UNCONDITIONAL_CALL)
// 0054d518: ADD ESP,0xc
// 0054d51b: LEA EAX,[ESP + 0x10c]
// 0054d522: PUSH EAX
// 0054d523: LEA EAX,[ESP + 0x170]
// 0054d52a: PUSH EAX
// 0054d52b: LEA ESI,[ESP + 0x204]
// 0054d532: LEA EDI,[ESP + 0x1d4]
// 0054d539: CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   XREF to: 005f4f10 (UNCONDITIONAL_CALL)
// 0054d53e: MOV ECX,0xc
// 0054d543: ADD ESP,0x8
// 0054d546: LEA EAX,[ESP + 0x22c]
// 0054d54d: LEA ESI,[ESP + 0x1fc]
// 0054d554: PUSH EAX
// 0054d555: LEA EAX,[ESP + 0x1d0]
// 0054d55c: MOVSD.REP ES:EDI,ESI
// 0054d55e: PUSH EAX
// 0054d55f: LEA ESI,[ESP + 0x1a4]
// 0054d566: LEA EDI,[ESP + 0x144]
// 0054d56d: CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   XREF to: 005f4f10 (UNCONDITIONAL_CALL)
// 0054d572: MOV ECX,0xc
// 0054d577: LEA ESI,[ESP + 0x1a4]
// 0054d57e: ADD ESP,0x8
// 0054d581: MOVSD.REP ES:EDI,ESI
// 0054d583: MOV EAX,dword ptr [ESP + 0x148]
// 0054d58a: MOV dword ptr [ESP + 0x2b4],EAX
// 0054d591: MOV EAX,dword ptr [ESP + 0x158]
// 0054d598: MOV dword ptr [ESP + 0x2b8],EAX
// 0054d59f: MOV EAX,dword ptr [ESP + 0x168]
// 0054d5a6: MOV dword ptr [ESP + 0x2bc],EAX
// 0054d5ad: LEA EAX,[ESP + 0x29c]
// 0054d5b4: PUSH EAX
// 0054d5b5: LEA EAX,[ESP + 0x140]
// 0054d5bc: PUSH EAX
// 0054d5bd: CALL core_xform.cpp_matrixToEulerAngles_FUN_005f5690
//   XREF to: 005f5690 (UNCONDITIONAL_CALL)
// 0054d5c2: ADD ESP,0x8
// 0054d5c5: LEA EDX,[EBX + 0xe0]
// 0054d5cb: MOV EAX,dword ptr [ESP + 0x318]
// 0054d5d2: FLD float ptr [ESP + 0x2b4]
// 0054d5d9: FSUB float ptr [EAX]
// 0054d5db: FLD float ptr [ESP + 0x2b8]
// 0054d5e2: FXCH
// 0054d5e4: FSTP float ptr [ESP + 0x2a8]
// 0054d5eb: FSUB float ptr [EAX + 0x4]
// 0054d5ee: FLD float ptr [ESP + 0x2bc]
// 0054d5f5: FXCH
// 0054d5f7: FSTP float ptr [ESP + 0x2ac]
// 0054d5fe: FSUB float ptr [EAX + 0x8]
// 0054d601: LEA EAX,[ESP + 0x2a8]
// 0054d608: FSTP float ptr [ESP + 0x2b0]
// 0054d60f: CMP EDX,EAX
// 0054d611: JZ 0x0054d630
//   XREF to: 0054d630 (CONDITIONAL_JUMP)
// 0054d613: MOV EAX,dword ptr [ESP + 0x2a8]
// 0054d61a: MOV dword ptr [EDX],EAX
// 0054d61c: MOV EAX,dword ptr [ESP + 0x2ac]
// 0054d623: MOV dword ptr [EDX + 0x4],EAX
// 0054d626: MOV EAX,dword ptr [ESP + 0x2b0]
// 0054d62d: MOV dword ptr [EDX + 0x8],EAX
// 0054d630: MOV dword ptr [EBX + 0xec],0x0
//   Label: LAB_0054d630
// 0054d63a: MOV dword ptr [EBX + 0xf4],0x0
// 0054d644: FLD float ptr [ESP + 0x2a0]
// 0054d64b: FSUB float ptr [EBX + 0x34]
// 0054d64e: SUB ESP,0x4
// 0054d651: FSTP float ptr [ESP]
// 0054d654: CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 0054d659: MOV dword ptr [ESP + 0x31c],EAX
// 0054d660: MOV EAX,dword ptr [ESP + 0x31c]
// 0054d667: MOV dword ptr [EBX + 0xf0],EAX
// 0054d66d: ADD ESP,0x4
// 0054d670: JMP 0x0054ced5
//   XREF to: 0054ced5 (UNCONDITIONAL_JUMP)
// 0054d675: MOV EBX,dword ptr [EBP + 0x14]
//   Label: LAB_0054d675
//   XREF to: Stack[0x4] (READ)
// 0054d678: PUSH EBX
// 0054d679: CALL core_platfrm.cpp_FUN_0054e320
//   XREF to: 0054e320 (UNCONDITIONAL_CALL)
// 0054d67e: ADD ESP,0x4
// 0054d681: MOV ESP,EBP
//   Label: LAB_0054d681
// 0054d683: POP EBP
// 0054d684: POP EDI
// 0054d685: POP ESI
// 0054d686: POP EBX
// 0054d687: RET
