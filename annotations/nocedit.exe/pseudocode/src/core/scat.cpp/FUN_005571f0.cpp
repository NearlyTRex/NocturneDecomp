// Name: core_scat.cpp_FUN_005571f0
// Address: 005571f0
// Address Range: [[005571f0, 005578dd]]
// Convention: unknown
// Signature: undefined core_scat.cpp_FUN_005571f0()
// Globals:
//   void* switchdataD_005571b8 = 0055768d
//   TerminatedCString s_s_confused_while_walking_0064136f
//   double DOUBLE_0064139c = 12.5663706140000
//   double DOUBLE_006413a4 = 0.333333333333333
//   double DOUBLE_006413ac = 32
//   double DOUBLE_006413b4 = -1.57079632675000
//   float FLOAT_006413bc = 3.141593
//   double DOUBLE_006413c4 = 1.57079632675000
//   float FLOAT_006413cc = -3.141593
//   double DOUBLE_006413d4 = 3.14159265350000
//   CConsole* g_CConsolePtr = 0083b1a4
//   CGame* g_CGamePtr = 02d81a9c
//   CConsole g_ConsolePtr
//   undefined4 DAT_02d81cc4
//   undefined4 DAT_0310615c
// Function calls:
//   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
//   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0
//   core_charactr.cpp_CCharacter_FUN_00428f40
//   core_charactr.cpp_CCharacter_FUN_00429820
//   core_charactr.cpp_CCharacter_FUN_00429870
//   core_charactr.cpp_CCharacter_FUN_0042ca70
//   core_inv.cpp_CInventory_updateInventory_FUN_004ffad0
//   core_motion.cpp_CMotionController_FUN_0052dab0
//   core_motion.cpp_CMotionController_FUN_0052dd20
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   core_scat.cpp_FUN_005578e0
//   core_scat.cpp_FUN_00557d20
//   core_scat.cpp_FUN_00558010
//   core_scat.cpp_FUN_00558060
//   core_scat.cpp_FUN_005582c0
//   core_scat.cpp_FUN_00558720
//   core_scat.cpp_FUN_00558fd0
//   core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
//   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
//   core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
//   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   core_xform.cpp_eulerToQuaternion_FUN_005f7b20
//   engine_console.cpp_CConsole_printf_FUN_00441890

#include "nocturne.h"

/* Signature: undefined1 actors_hero_scat.cpp_FUN_005571f0(undefined4 param_1, undefined4 param_2)
    */

void core_scat_cpp_FUN_005571f0(void)

{
  char *pcVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  CDemonActor *this_ptr;
  float fVar8;
  CCharacter *pCVar9;
  CGame *pCVar10;
  int iVar11;
  CVector3f *pCVar12;
  float fVar13;
  BADSPACEBASE *in_ESP;
  undefined4 *puVar14;
  int desired_state_index;
  CDeformableModelInstance *unaff_EDI;
  undefined4 *puVar15;
  byte bVar16;
  CCharacter *in_stack_00000004;
  float in_stack_00000008;
  float afStackY_184c [1518];
  CVector3f *in_stack_ffffff78;
  float in_stack_ffffff7c;
  CQuaternion4f *source_quaternions;
  SCollisionInfo *in_stack_ffffff84;
  code *blend_callback;
  CQuaternion4f CStack_70;
  float local_60;
  float local_5c;
  CVector3f local_58;
  float local_4c;
  float local_48;
  float local_44;
  CVector3f local_40;
  CVector3f local_34 [2];
  CVector3f *local_1c;
  CVector3f *local_18;
  CDemonActor_vtable *local_14;
  
  bVar16 = 0;
  iVar11 = core_charactr_cpp_CCharacter_FUN_00429870(in_stack_00000004);
  pCVar10 = g_CGamePtr;
  if (iVar11 == 0) {
    return;
  }
  *(float *)(in_stack_00000004->field2_0x240c + 0x2c) = in_stack_00000008 * (float)DOUBLE_0064139c;
  if (pCVar10->letterbox_mode != 0) {
    *(float *)(in_stack_00000004->field2_0x240c + 0x2c) =
         *(float *)(in_stack_00000004->field2_0x240c + 0x2c) * (float)DOUBLE_006413a4;
  }
  fVar13 = *(float *)in_stack_00000004[1].base_actor.actor_name - in_stack_00000008;
  *(float *)in_stack_00000004[1].base_actor.actor_name = fVar13;
  if (fVar13 < 0.0) {
    in_stack_00000004[1].base_actor.actor_name[0] = '\0';
    in_stack_00000004[1].base_actor.actor_name[1] = '\0';
    in_stack_00000004[1].base_actor.actor_name[2] = '\0';
    in_stack_00000004[1].base_actor.actor_name[3] = '\0';
  }
  pcVar1 = (in_stack_00000004->model).field17_0x2254;
  (in_stack_00000004->model).field17_0x2254[8] = '\0';
  (in_stack_00000004->model).field17_0x2254[9] = '\0';
  (in_stack_00000004->model).field17_0x2254[10] = '\0';
  (in_stack_00000004->model).field17_0x2254[0xb] = '\0';
  *(undefined4 *)((in_stack_00000004->model).field17_0x2254 + 4) =
       *(undefined4 *)((in_stack_00000004->model).field17_0x2254 + 8);
  *(undefined4 *)pcVar1 = *(undefined4 *)((in_stack_00000004->model).field17_0x2254 + 4);
  core_scat_cpp_FUN_00557d20();
  *(undefined4 *)(in_stack_00000004->field2_0x240c + 0x28) =
       *(undefined4 *)((in_stack_00000004->model).field17_0x2254 + 8);
  iVar11 = core_charactr_cpp_CCharacter_FUN_0042ca70(in_stack_00000004);
  if (iVar11 == 0) {
    if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 4) == 2) {
      core_scat_cpp_FUN_005578e0();
    }
    iVar11 = core_motion_cpp_CMotionController_FUN_0052dab0
                       (&(in_stack_00000004->model).motion_controller);
    switch(*(undefined4 *)(iVar11 + 0x24)) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 7:
    case 9:
    case 10:
      if (*(int *)(in_stack_00000004->field2_0x240c + 4) != 0) {
        iVar11 = core_scat_cpp_FUN_00558010();
        desired_state_index = 0;
        if (iVar11 != 0) {
          desired_state_index = 7;
        }
        if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 8) != 0) {
          iVar11 = core_scat_cpp_FUN_00558010();
          if (iVar11 == 0) {
            if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 0x10) == 0) {
              desired_state_index = 1;
            }
            else {
              desired_state_index = 2;
            }
          }
          else {
            desired_state_index = 9;
          }
        }
        if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 0xc) != 0) {
          iVar11 = core_scat_cpp_FUN_00558010();
          if (iVar11 == 0) {
            desired_state_index = 3;
          }
          else {
            desired_state_index = 10;
          }
        }
        if ((((*(int *)(in_stack_00000004[1].base_actor.actor_name + 0x14) != 0) &&
             (*(int *)(in_stack_00000004[2].cloth_data + 0x54f4) != 0)) &&
            (*(int *)(in_stack_00000004[2].cloth_data + 0x5508) != 0)) &&
           (iVar11 = (**(code **)(*(int *)(*(int *)(in_stack_00000004[2].cloth_data + 0x5508) +
                                          0x154) + 0xfc))(), iVar11 != 0)) {
          (**(code **)(*(int *)(*(int *)(in_stack_00000004[2].cloth_data + 0x5508) + 0x154) + 0xf8))
                    ();
          iVar11 = *(int *)(in_stack_00000004[2].cloth_data + 0x5508);
          pCVar9 = in_stack_00000004 + 1;
          (pCVar9->base_actor).actor_name[0x14] = '\0';
          (pCVar9->base_actor).actor_name[0x15] = '\0';
          (pCVar9->base_actor).actor_name[0x16] = '\0';
          (pCVar9->base_actor).actor_name[0x17] = '\0';
          if (*(int *)(iVar11 + 0x2e0) == 8) {
            desired_state_index = 0xb;
          }
        }
        *(float *)(in_stack_00000004->field2_0x240c + 0xc) =
             (float)in_stack_00000004[1].base_actor.location.area_id *
             *(float *)(in_stack_00000004->field2_0x240c + 0x2c) +
             *(float *)(in_stack_00000004->field2_0x240c + 0xc);
        iVar11 = core_motion_cpp_CMotionController_FUN_0052dab0
                           (&(in_stack_00000004->model).motion_controller);
        if (desired_state_index != *(int *)(iVar11 + 0x24)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(in_stack_00000004->model).motion_controller,desired_state_index,1);
        }
        if (in_stack_00000004[1].base_actor.location.position.x != 0.0) {
          in_stack_00000004[1].base_actor.location.position.x = 0.0;
          (*(in_stack_00000004->base_actor).vtable[1].getAllowedMeleeAttackTypes)
                    (&in_stack_00000004->base_actor);
        }
      }
      break;
    case 5:
      goto switchD_00557686_caseD_5;
    }
  }
  else {
    (in_stack_00000004->model).field17_0x2254[8] = '\0';
    (in_stack_00000004->model).field17_0x2254[9] = '\0';
    (in_stack_00000004->model).field17_0x2254[10] = '\0';
    (in_stack_00000004->model).field17_0x2254[0xb] = '\0';
    *(undefined4 *)((in_stack_00000004->model).field17_0x2254 + 4) =
         *(undefined4 *)((in_stack_00000004->model).field17_0x2254 + 8);
    *(undefined4 *)pcVar1 = *(undefined4 *)((in_stack_00000004->model).field17_0x2254 + 4);
    uVar7 = *(uint *)(in_stack_00000004->field11_0x25a0 + 0x10);
    if (uVar7 < 2) {
      if (uVar7 == 1) {
        iVar11 = core_scat_cpp_FUN_00558010();
        if (iVar11 == 0) {
          iVar11 = 1;
        }
        else {
LAB_005572db:
          iVar11 = 9;
        }
      }
      else {
LAB_00557637:
        iVar11 = core_scat_cpp_FUN_00558010();
        if (iVar11 == 0) {
          iVar11 = 0;
        }
        else {
          iVar11 = 7;
        }
      }
    }
    else if (uVar7 < 3) {
      iVar11 = core_scat_cpp_FUN_00558010();
      if (iVar11 != 0) goto LAB_005572db;
      iVar11 = 2;
    }
    else {
      if (uVar7 != 3) goto LAB_00557637;
      engine_console_cpp_CConsole_printf_FUN_00441890
                (g_CConsolePtr,"%s confused while walking to scriptDest!\n",in_stack_00000004);
      iVar11 = core_scat_cpp_FUN_00558010();
      if (iVar11 == 0) {
        iVar11 = 0;
      }
      else {
        iVar11 = 7;
      }
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(in_stack_00000004->model).motion_controller,iVar11,1);
  }
  if (in_stack_00000004->grabbed_by == (CDemonActor *)0x0) {
    pcVar1 = (in_stack_00000004->model).field17_0x2254;
    fVar13 = *(float *)pcVar1;
    fVar2 = *(float *)(in_stack_00000004->field2_0x240c + 0x10);
    fVar3 = *(float *)((in_stack_00000004->model).field17_0x2254 + 4);
    fVar4 = *(float *)(in_stack_00000004->field2_0x240c + 0x14);
    fVar5 = *(float *)((in_stack_00000004->model).field17_0x2254 + 8);
    fVar6 = *(float *)(in_stack_00000004->field2_0x240c + 0x18);
    fVar8 = (float)DOUBLE_006413ac;
    (in_stack_00000004->model).field17_0x2254[8] = '\0';
    (in_stack_00000004->model).field17_0x2254[9] = '\0';
    (in_stack_00000004->model).field17_0x2254[10] = '\0';
    (in_stack_00000004->model).field17_0x2254[0xb] = '\0';
    *(undefined4 *)((in_stack_00000004->model).field17_0x2254 + 4) =
         *(undefined4 *)((in_stack_00000004->model).field17_0x2254 + 8);
    *(undefined4 *)pcVar1 = *(undefined4 *)((in_stack_00000004->model).field17_0x2254 + 4);
    in_stack_00000004->field2_0x240c[0x18] = '\0';
    in_stack_00000004->field2_0x240c[0x19] = '\0';
    in_stack_00000004->field2_0x240c[0x1a] = '\0';
    in_stack_00000004->field2_0x240c[0x1b] = '\0';
    *(undefined4 *)(in_stack_00000004->field2_0x240c + 0x14) =
         *(undefined4 *)(in_stack_00000004->field2_0x240c + 0x18);
    *(float *)(in_stack_00000004->field2_0x240c + 0x10) =
         *(float *)(in_stack_00000004->field2_0x240c + 0x14);
    *(float *)(in_stack_00000004->field2_0x240c + 0x20) =
         *(float *)(in_stack_00000004->field2_0x240c + 0x20) - in_stack_00000008 * fVar8;
    CStack_70.z = *(float *)(in_stack_00000004->field2_0x240c + 0x1c) * in_stack_00000008;
    local_60 = *(float *)(in_stack_00000004->field2_0x240c + 0x20) * in_stack_00000008;
    local_5c = in_stack_00000008 * *(float *)(in_stack_00000004->field2_0x240c + 0x24);
    local_4c = fVar13 + fVar2 + CStack_70.z;
    local_48 = fVar3 + fVar4 + local_60;
    local_44 = fVar5 + fVar6 + local_5c;
    core_charactr_cpp_CCharacter_FUN_00428f40(in_stack_00000004);
  }
  else {
    pCVar12 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                        (&in_stack_00000004->base_actor,&local_40,
                         &(in_stack_00000004->grabbed_by->location).position);
    pCVar12 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_58,pCVar12);
    local_14 = (CDemonActor_vtable *)core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar12->y);
    in_stack_ffffff78 = (CVector3f *)local_14;
    if ((float)local_14 < (float)DOUBLE_006413b4) {
      in_stack_ffffff78 = (CVector3f *)((float)local_14 + FLOAT_006413bc);
    }
    if ((float)DOUBLE_006413c4 < (float)in_stack_ffffff78) {
      in_stack_ffffff78 = (CVector3f *)((float)in_stack_ffffff78 + FLOAT_006413cc);
    }
    local_18 = (CVector3f *)(in_stack_00000008 * (float)DOUBLE_006413d4);
    local_1c = (CVector3f *)-(float)local_18;
    if ((float)in_stack_ffffff78 < (float)local_1c) {
      in_stack_ffffff78 = local_1c;
    }
    if ((float)local_18 < (float)in_stack_ffffff78) {
      in_stack_ffffff78 = local_18;
    }
    (in_stack_00000004->base_actor).orient.bank =
         (in_stack_00000004->base_actor).orient.bank + (float)in_stack_ffffff78;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(&in_stack_00000004->base_actor);
    this_ptr = in_stack_00000004->grabbed_by;
    local_14 = this_ptr->vtable;
    pCVar12 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                        (&in_stack_00000004->model,local_34,0);
    fVar13 = (*local_14[1].cylinderGroundCheck)(this_ptr,(float)in_stack_00000004,pCVar12);
    if (fVar13 == 0.0) {
      in_stack_00000004->grabbed_by = (CDemonActor *)0x0;
LAB_005573f5:
      in_stack_ffffff7c = 0.0;
    }
    else {
      if (in_stack_00000004->grabbed_by == (CDemonActor *)0x0) goto LAB_005573f5;
      if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 0x14) == 0) goto LAB_00557408;
      in_stack_ffffff7c = 2.10195e-44;
    }
    in_stack_ffffff78 = (CVector3f *)&in_stack_00000004->model;
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              ((CMotionController *)in_stack_ffffff78,(int)in_stack_ffffff7c,1);
  }
LAB_00557408:
  core_inv_cpp_CInventory_updateInventory_FUN_004ffad0
            ((CInventory *)(in_stack_00000004[2].cloth_data + 0x5058));
  if (*(int *)(in_stack_00000004[2].cloth_data + 0x5508) != 0) {
    (**(code **)(*(int *)(*(int *)(in_stack_00000004[2].cloth_data + 0x5508) + 0x154) + 4))();
  }
  core_scat_cpp_FUN_00558060();
  core_charactr_cpp_CCharacter_FUN_00429820(in_stack_00000004);
  (*(in_stack_00000004->base_actor).vtable[1].processFootstepAtOffset)
            (&in_stack_00000004->base_actor,in_stack_ffffff78,in_stack_ffffff7c);
  core_motion_cpp_CMotionController_FUN_0052dd20(&(in_stack_00000004->model).motion_controller);
  core_motion_cpp_CMotionController_FUN_0052dd20(&(in_stack_00000004->model).motion_controller);
  core_motion_cpp_CMotionController_FUN_0052dd20(&(in_stack_00000004->model).motion_controller);
  core_motion_cpp_CMotionController_FUN_0052dd20(&(in_stack_00000004->model).motion_controller);
  core_scat_cpp_FUN_00558720();
  local_14 = (CDemonActor_vtable *)&in_stack_00000004->model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
            ((CDeformableModelInstance *)local_14);
  core_scat_cpp_FUN_005582c0();
  iVar11 = core_scat_cpp_FUN_00558010();
  if ((iVar11 == 0) &&
     (iVar11 = (*(in_stack_00000004->base_actor).vtable[1].hasCollision)
                         (&in_stack_00000004->base_actor,in_stack_ffffff84), iVar11 == 0)) {
    blend_callback = core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0;
    pCVar12 = *(CVector3f **)(in_stack_00000004[2].cloth_data + 0x5504);
    iVar11 = DAT_0310615c;
    core_xform_cpp_eulerToQuaternion_FUN_005f7b20
              ((CQuaternion4f *)(in_stack_00000004[2].cloth_data + 0x54f8),pCVar12);
    source_quaternions = &CStack_70;
    CStack_70.w = local_60;
    puVar15 = (undefined4 *)((int)&CStack_70 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8);
    puVar14 = (undefined4 *)((int)&local_58 + (uint)bVar16 * -8 + (uint)bVar16 * -8);
    *(float *)((int)&CStack_70 + (uint)bVar16 * -8 + 4) = (&local_5c)[(uint)bVar16 * -2];
    *puVar15 = *puVar14;
    puVar15[(uint)bVar16 * -2 + 1] = puVar14[(uint)bVar16 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
              (unaff_EDI,source_quaternions,(float)pCVar12,iVar11,blend_callback);
  }
  core_charactr_cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0(in_stack_00000004);
  core_scat_cpp_FUN_00558fd0();
switchD_00557686_caseD_5:
  return;
}


// Assembly code:
// 005571f0: PUSH EBX
//   Label: core_scat.cpp_FUN_005571f0
// 005571f1: PUSH ESI
// 005571f2: PUSH EDI
// 005571f3: PUSH EBP
// 005571f4: MOV EBP,ESP
// 005571f6: SUB ESP,0x78
// 005571f9: AND ESP,0xfffffff8
// 005571fc: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005571ff: PUSH dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00557202: PUSH EBX
// 00557203: CALL core_charactr.cpp_CCharacter_FUN_00429870
//   XREF to: 00429870 (UNCONDITIONAL_CALL)
// 00557208: ADD ESP,0x8
// 0055720b: TEST EAX,EAX
// 0055720d: JZ 0x005575b3
//   XREF to: 005575b3 (CONDITIONAL_JUMP)
// 00557213: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00557216: FMUL double ptr [0x0064139c]
//   XREF to: 0064139c (READ)
// 0055721c: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 00557221: FSTP float ptr [EBX + 0x2438]
// 00557227: CMP dword ptr [EAX + 0x228],0x0
//   XREF to: 02d81cc4 (READ)
// 0055722e: JNZ 0x005575ba
//   XREF to: 005575ba (CONDITIONAL_JUMP)
// 00557234: FLD float ptr [EBX + 0xbe24]
//   Label: LAB_00557234
// 0055723a: FSUB float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0055723d: FST float ptr [EBX + 0xbe24]
// 00557243: FLDZ
// 00557245: FCOMPP
// 00557247: FNSTSW AX
// 00557249: SAHF
// 0055724a: JBE 0x00557256
//   XREF to: 00557256 (CONDITIONAL_JUMP)
// 0055724c: MOV dword ptr [EBX + 0xbe24],0x0
// 00557256: LEA ESI,[EBX + 0x23ac]
//   Label: LAB_00557256
// 0055725c: PUSH dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0055725f: MOV dword ptr [ESI + 0x8],0x0
// 00557266: PUSH EBX
// 00557267: MOV EAX,dword ptr [ESI + 0x8]
// 0055726a: MOV dword ptr [ESI + 0x4],EAX
// 0055726d: MOV EAX,dword ptr [ESI + 0x4]
// 00557270: MOV dword ptr [ESI],EAX
// 00557272: CALL core_scat.cpp_FUN_00557d20
//   XREF to: 00557d20 (UNCONDITIONAL_CALL)
// 00557277: ADD ESP,0x8
// 0055727a: PUSH dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0055727d: FLD float ptr [EBX + 0x23b4]
// 00557283: PUSH EBX
// 00557284: FSTP float ptr [EBX + 0x2434]
// 0055728a: CALL core_charactr.cpp_CCharacter_FUN_0042ca70
//   XREF to: 0042ca70 (UNCONDITIONAL_CALL)
// 0055728f: ADD ESP,0x8
// 00557292: TEST EAX,EAX
// 00557294: JZ 0x00557656
//   XREF to: 00557656 (CONDITIONAL_JUMP)
// 0055729a: MOV dword ptr [ESI + 0x8],0x0
// 005572a1: MOV EAX,dword ptr [ESI + 0x8]
// 005572a4: MOV dword ptr [ESI + 0x4],EAX
// 005572a7: MOV EAX,dword ptr [ESI + 0x4]
// 005572aa: MOV dword ptr [ESI],EAX
// 005572ac: MOV EAX,dword ptr [EBX + 0x25b0]
// 005572b2: LEA ESI,[EBX + 0x158]
// 005572b8: CMP EAX,0x2
// 005572bb: JNC 0x00557630
//   XREF to: 00557630 (CONDITIONAL_JUMP)
// 005572c1: CMP EAX,0x1
// 005572c4: JNZ 0x00557637
//   XREF to: 00557637 (CONDITIONAL_JUMP)
// 005572ca: PUSH EBX
// 005572cb: CALL core_scat.cpp_FUN_00558010
//   XREF to: 00558010 (UNCONDITIONAL_CALL)
// 005572d0: ADD ESP,0x4
// 005572d3: TEST EAX,EAX
// 005572d5: JZ 0x00557604
//   XREF to: 00557604 (CONDITIONAL_JUMP)
// 005572db: PUSH 0x1
//   Label: LAB_005572db
// 005572dd: PUSH 0x9
// 005572df: PUSH ESI
//   Label: LAB_005572df
// 005572e0: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   Label: LAB_005572e0
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005572e5: ADD ESP,0xc
// 005572e8: MOV ESI,dword ptr [EBX + 0x2598]
//   Label: caseD_8
// 005572ee: TEST ESI,ESI
// 005572f0: JZ 0x00557812
//   XREF to: 00557812 (CONDITIONAL_JUMP)
// 005572f6: LEA EAX,[ESI + 0x20]
// 005572f9: PUSH EAX
// 005572fa: LEA EAX,[ESP + 0x4c]
//   XREF to: Stack[-0x40] (DATA)
// 005572fe: PUSH EAX
// 005572ff: PUSH EBX
// 00557300: CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 00557305: ADD ESP,0xc
// 00557308: PUSH EAX
// 00557309: LEA EAX,[ESP + 0x34]
//   XREF to: Stack[-0x58] (DATA)
// 0055730d: PUSH EAX
// 0055730e: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 00557313: ADD ESP,0x8
// 00557316: PUSH dword ptr [EAX + 0x4]
// 00557319: CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 0055731e: MOV dword ptr [ESP + 0x78],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00557322: FLD float ptr [ESP + 0x78]
//   XREF to: Stack[-0x14] (READ)
// 00557326: ADD ESP,0x4
// 00557329: FST float ptr [ESP]
//   XREF to: Stack[-0x88] (DATA)
// 0055732c: FCOMP double ptr [0x006413b4]
//   XREF to: 006413b4 (READ)
// 00557332: FNSTSW AX
// 00557334: SAHF
// 00557335: JNC 0x00557343
//   XREF to: 00557343 (CONDITIONAL_JUMP)
// 00557337: FLD float ptr [ESP]
//   XREF to: Stack[-0x88] (DATA)
// 0055733a: FADD float ptr [0x006413bc]
//   XREF to: 006413bc (READ)
// 00557340: FSTP float ptr [ESP]
//   XREF to: Stack[-0x88] (DATA)
// 00557343: FLD float ptr [ESP]
//   Label: LAB_00557343
//   XREF to: Stack[-0x88] (DATA)
// 00557346: FCOMP double ptr [0x006413c4]
//   XREF to: 006413c4 (READ)
// 0055734c: FNSTSW AX
// 0055734e: SAHF
// 0055734f: JBE 0x0055735d
//   XREF to: 0055735d (CONDITIONAL_JUMP)
// 00557351: FLD float ptr [ESP]
//   XREF to: Stack[-0x88] (DATA)
// 00557354: FADD float ptr [0x006413cc]
//   XREF to: 006413cc (READ)
// 0055735a: FSTP float ptr [ESP]
//   XREF to: Stack[-0x88] (DATA)
// 0055735d: FLD float ptr [EBP + 0x18]
//   Label: LAB_0055735d
//   XREF to: Stack[0x8] (READ)
// 00557360: FMUL double ptr [0x006413d4]
//   XREF to: 006413d4 (READ)
// 00557366: FLD float ptr [ESP]
//   XREF to: Stack[-0x88] (DATA)
// 00557369: FXCH
// 0055736b: FST float ptr [ESP + 0x70]
//   XREF to: Stack[-0x18] (WRITE)
// 0055736f: FCHS
// 00557371: FSTP float ptr [ESP + 0x6c]
//   XREF to: Stack[-0x1c] (WRITE)
// 00557375: FCOMP float ptr [ESP + 0x6c]
//   XREF to: Stack[-0x1c] (READ)
// 00557379: FNSTSW AX
// 0055737b: SAHF
// 0055737c: JNC 0x00557385
//   XREF to: 00557385 (CONDITIONAL_JUMP)
// 0055737e: MOV EAX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[-0x1c] (READ)
// 00557382: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x88] (DATA)
// 00557385: FLD float ptr [ESP]
//   Label: LAB_00557385
//   XREF to: Stack[-0x88] (DATA)
// 00557388: FCOMP float ptr [ESP + 0x70]
//   XREF to: Stack[-0x18] (READ)
// 0055738c: FNSTSW AX
// 0055738e: SAHF
// 0055738f: JBE 0x00557398
//   XREF to: 00557398 (CONDITIONAL_JUMP)
// 00557391: MOV EAX,dword ptr [ESP + 0x70]
//   XREF to: Stack[-0x18] (READ)
// 00557395: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x88] (DATA)
// 00557398: FLD float ptr [EBX + 0x34]
//   Label: LAB_00557398
// 0055739b: FADD float ptr [ESP]
//   XREF to: Stack[-0x88] (DATA)
// 0055739e: PUSH EBX
// 0055739f: FSTP float ptr [EBX + 0x34]
// 005573a2: CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
//   XREF to: 00408c10 (UNCONDITIONAL_CALL)
// 005573a7: MOV ESI,dword ptr [EBX + 0x2598]
// 005573ad: ADD ESP,0x4
// 005573b0: MOV EAX,dword ptr [ESI + 0x154]
// 005573b6: PUSH 0x0
// 005573b8: MOV dword ptr [ESP + 0x78],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005573bc: LEA EAX,[ESP + 0x58]
//   XREF to: Stack[-0x34] (DATA)
// 005573c0: PUSH EAX
// 005573c1: LEA EDI,[EBX + 0x158]
// 005573c7: PUSH EDI
// 005573c8: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
//   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
// 005573cd: ADD ESP,0xc
// 005573d0: PUSH EAX
// 005573d1: PUSH EBX
// 005573d2: MOV EAX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[-0x14] (READ)
// 005573d6: PUSH ESI
// 005573d7: CALL dword ptr [EAX + 0x124]
// 005573dd: ADD ESP,0xc
// 005573e0: TEST EAX,EAX
// 005573e2: JZ 0x005577f0
//   XREF to: 005577f0 (CONDITIONAL_JUMP)
// 005573e8: CMP dword ptr [EBX + 0x2598],0x0
// 005573ef: JNZ 0x005577fb
//   XREF to: 005577fb (CONDITIONAL_JUMP)
// 005573f5: PUSH 0x1
//   Label: LAB_005573f5
// 005573f7: PUSH 0x0
// 005573f9: LEA EAX,[EBX + 0x158]
// 005573ff: PUSH EAX
// 00557400: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   Label: LAB_00557400
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00557405: ADD ESP,0xc
// 00557408: LEA EAX,[EBX + 0x1f738]
//   Label: LAB_00557408
// 0055740e: PUSH EAX
// 0055740f: CALL core_inv.cpp_CInventory_updateInventory_FUN_004ffad0
//   XREF to: 004ffad0 (UNCONDITIONAL_CALL)
// 00557414: MOV ECX,dword ptr [EBX + 0x1fbe8]
// 0055741a: ADD ESP,0x4
// 0055741d: TEST ECX,ECX
// 0055741f: JZ 0x00557431
//   XREF to: 00557431 (CONDITIONAL_JUMP)
// 00557421: PUSH dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00557424: MOV ESI,dword ptr [ECX + 0x154]
// 0055742a: PUSH ECX
// 0055742b: CALL dword ptr [ESI + 0x4]
// 0055742e: ADD ESP,0x8
// 00557431: PUSH dword ptr [EBP + 0x18]
//   Label: LAB_00557431
//   XREF to: Stack[0x8] (READ)
// 00557434: PUSH EBX
// 00557435: CALL core_scat.cpp_FUN_00558060
//   XREF to: 00558060 (UNCONDITIONAL_CALL)
// 0055743a: ADD ESP,0x8
// 0055743d: PUSH EBX
// 0055743e: XOR ESI,ESI
// 00557440: CALL core_charactr.cpp_CCharacter_FUN_00429820
//   XREF to: 00429820 (UNCONDITIONAL_CALL)
// 00557445: FLD float ptr [EBX + 0x243c]
// 0055744b: FLDZ
// 0055744d: ADD ESP,0x4
// 00557450: FCOMPP
// 00557452: FNSTSW AX
// 00557454: SAHF
// 00557455: JC 0x0055745c
//   XREF to: 0055745c (CONDITIONAL_JUMP)
// 00557457: MOV ESI,0x1
// 0055745c: PUSH EBX
//   Label: LAB_0055745c
// 0055745d: MOV EAX,dword ptr [EBX + 0x154]
// 00557463: CALL dword ptr [EAX + 0x108]
// 00557469: ADD ESP,0x4
// 0055746c: TEST EAX,EAX
// 0055746e: JZ 0x00557475
//   XREF to: 00557475 (CONDITIONAL_JUMP)
// 00557470: MOV ESI,0x1
// 00557475: PUSH 0xc
//   Label: LAB_00557475
// 00557477: LEA EAX,[EBX + 0x158]
// 0055747d: PUSH EAX
// 0055747e: CALL core_motion.cpp_CMotionController_FUN_0052dd20
//   XREF to: 0052dd20 (UNCONDITIONAL_CALL)
// 00557483: MOV dword ptr [ESP + 0x7c],EAX
// 00557487: FLD float ptr [ESP + 0x7c]
// 0055748b: FLDZ
// 0055748d: ADD ESP,0x8
// 00557490: FCOMPP
// 00557492: FNSTSW AX
// 00557494: SAHF
// 00557495: JNC 0x0055749c
//   XREF to: 0055749c (CONDITIONAL_JUMP)
// 00557497: MOV ESI,0x1
// 0055749c: PUSH 0xd
//   Label: LAB_0055749c
// 0055749e: LEA EAX,[EBX + 0x158]
// 005574a4: PUSH EAX
// 005574a5: CALL core_motion.cpp_CMotionController_FUN_0052dd20
//   XREF to: 0052dd20 (UNCONDITIONAL_CALL)
// 005574aa: MOV dword ptr [ESP + 0x7c],EAX
// 005574ae: FLD float ptr [ESP + 0x7c]
// 005574b2: FLDZ
// 005574b4: ADD ESP,0x8
// 005574b7: FCOMPP
// 005574b9: FNSTSW AX
// 005574bb: SAHF
// 005574bc: JNC 0x005574c3
//   XREF to: 005574c3 (CONDITIONAL_JUMP)
// 005574be: MOV ESI,0x1
// 005574c3: PUSH 0x4
//   Label: LAB_005574c3
// 005574c5: LEA EAX,[EBX + 0x158]
// 005574cb: PUSH EAX
// 005574cc: CALL core_motion.cpp_CMotionController_FUN_0052dd20
//   XREF to: 0052dd20 (UNCONDITIONAL_CALL)
// 005574d1: MOV dword ptr [ESP + 0x7c],EAX
// 005574d5: FLD float ptr [ESP + 0x7c]
// 005574d9: FLDZ
// 005574db: ADD ESP,0x8
// 005574de: FCOMPP
// 005574e0: FNSTSW AX
// 005574e2: SAHF
// 005574e3: JNC 0x005574ea
//   XREF to: 005574ea (CONDITIONAL_JUMP)
// 005574e5: MOV ESI,0x1
// 005574ea: PUSH 0x5
//   Label: LAB_005574ea
// 005574ec: LEA EAX,[EBX + 0x158]
// 005574f2: PUSH EAX
// 005574f3: CALL core_motion.cpp_CMotionController_FUN_0052dd20
//   XREF to: 0052dd20 (UNCONDITIONAL_CALL)
// 005574f8: MOV dword ptr [ESP + 0x7c],EAX
// 005574fc: FLD float ptr [ESP + 0x7c]
// 00557500: FLDZ
// 00557502: ADD ESP,0x8
// 00557505: FCOMPP
// 00557507: FNSTSW AX
// 00557509: SAHF
// 0055750a: JNC 0x00557511
//   XREF to: 00557511 (CONDITIONAL_JUMP)
// 0055750c: MOV ESI,0x1
// 00557511: PUSH ESI
//   Label: LAB_00557511
// 00557512: PUSH dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00557515: PUSH EBX
// 00557516: CALL core_scat.cpp_FUN_00558720
//   XREF to: 00558720 (UNCONDITIONAL_CALL)
// 0055751b: ADD ESP,0xc
// 0055751e: LEA EAX,[EBX + 0x158]
// 00557524: PUSH EAX
// 00557525: MOV dword ptr [ESP + 0x6c],EAX
// 00557529: CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
//   XREF to: 0059e020 (UNCONDITIONAL_CALL)
// 0055752e: ADD ESP,0x4
// 00557531: PUSH EBX
// 00557532: CALL core_scat.cpp_FUN_005582c0
//   XREF to: 005582c0 (UNCONDITIONAL_CALL)
// 00557537: ADD ESP,0x4
// 0055753a: PUSH EBX
// 0055753b: CALL core_scat.cpp_FUN_00558010
//   XREF to: 00558010 (UNCONDITIONAL_CALL)
// 00557540: ADD ESP,0x4
// 00557543: TEST EAX,EAX
// 00557545: JNZ 0x0055759e
//   XREF to: 0055759e (CONDITIONAL_JUMP)
// 00557547: PUSH EBX
// 00557548: MOV EAX,dword ptr [EBX + 0x154]
// 0055754e: CALL dword ptr [EAX + 0x120]
// 00557554: ADD ESP,0x4
// 00557557: TEST EAX,EAX
// 00557559: JNZ 0x0055759e
//   XREF to: 0055759e (CONDITIONAL_JUMP)
// 0055755b: PUSH 0x59ddb0
//   XREF to: 0059ddb0 (DATA)
// 00557560: MOV EDI,dword ptr [0x0310615c]
//   XREF to: 0310615c (READ)
// 00557566: PUSH EDI
// 00557567: LEA EAX,[EBX + 0x1fbd8]
// 0055756d: PUSH dword ptr [EBX + 0x1fbe4]
// 00557573: PUSH EAX
// 00557574: LEA ESI,[ESP + 0x24]
// 00557578: CALL core_xform.cpp_eulerToQuaternion_FUN_005f7b20
//   XREF to: 005f7b20 (UNCONDITIONAL_CALL)
// 0055757d: ADD ESP,0x4
// 00557580: LEA EAX,[ESP + 0x10]
// 00557584: LEA EDI,[ESP + 0x10]
// 00557588: PUSH EAX
// 00557589: MOV EAX,dword ptr [ESP + 0x78]
// 0055758d: LEA ESI,[ESP + 0x24]
// 00557591: PUSH EAX
// 00557592: MOVSD ES:EDI,ESI
// 00557593: MOVSD ES:EDI,ESI
// 00557594: MOVSD ES:EDI,ESI
// 00557595: MOVSD ES:EDI,ESI
// 00557596: CALL core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
//   XREF to: 0059f750 (UNCONDITIONAL_CALL)
// 0055759b: ADD ESP,0x14
// 0055759e: PUSH dword ptr [EBP + 0x18]
//   Label: LAB_0055759e
//   XREF to: Stack[0x8] (READ)
// 005575a1: PUSH EBX
// 005575a2: CALL core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0
//   XREF to: 0042dfc0 (UNCONDITIONAL_CALL)
// 005575a7: ADD ESP,0x8
// 005575aa: PUSH EBX
// 005575ab: CALL core_scat.cpp_FUN_00558fd0
//   XREF to: 00558fd0 (UNCONDITIONAL_CALL)
// 005575b0: ADD ESP,0x4
// 005575b3: MOV ESP,EBP
//   Label: caseD_5
// 005575b5: POP EBP
// 005575b6: POP EDI
// 005575b7: POP ESI
// 005575b8: POP EBX
// 005575b9: RET
// 005575ba: FLD float ptr [EBX + 0x2438]
//   Label: LAB_005575ba
// 005575c0: FMUL double ptr [0x006413a4]
//   XREF to: 006413a4 (READ)
// 005575c6: FSTP float ptr [EBX + 0x2438]
// 005575cc: JMP 0x00557234
//   XREF to: 00557234 (UNCONDITIONAL_JUMP)
// 005575d1: PUSH EBX
//   Label: LAB_005575d1
// 005575d2: PUSH 0x64136f
//   XREF to: 0064136f (DATA)
// 005575d7: MOV ECX,dword ptr [0x0066e8e0]
//   XREF to: 0083b1a4 (PARAM)
//   XREF to: 0066e8e0 (READ)
// 005575dd: PUSH ECX
//   XREF to: 0083b1a4 (DATA)
// 005575de: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 005575e3: ADD ESP,0xc
// 005575e6: PUSH EBX
// 005575e7: CALL core_scat.cpp_FUN_00558010
//   XREF to: 00558010 (UNCONDITIONAL_CALL)
// 005575ec: ADD ESP,0x4
// 005575ef: TEST EAX,EAX
// 005575f1: JZ 0x005575fc
//   XREF to: 005575fc (CONDITIONAL_JUMP)
// 005575f3: PUSH 0x1
// 005575f5: PUSH 0x7
// 005575f7: JMP 0x005572df
//   XREF to: 005572df (UNCONDITIONAL_JUMP)
// 005575fc: PUSH 0x1
//   Label: LAB_005575fc
// 005575fe: PUSH EAX
// 005575ff: JMP 0x005572df
//   XREF to: 005572df (UNCONDITIONAL_JUMP)
// 00557604: PUSH 0x1
//   Label: LAB_00557604
// 00557606: PUSH 0x1
// 00557608: JMP 0x005572df
//   XREF to: 005572df (UNCONDITIONAL_JUMP)
// 0055760d: PUSH EBX
//   Label: LAB_0055760d
// 0055760e: CALL core_scat.cpp_FUN_00558010
//   XREF to: 00558010 (UNCONDITIONAL_CALL)
// 00557613: ADD ESP,0x4
// 00557616: TEST EAX,EAX
// 00557618: JNZ 0x005572db
//   XREF to: 005572db (CONDITIONAL_JUMP)
// 0055761e: PUSH 0x1
// 00557620: PUSH 0x2
// 00557622: JMP 0x005572df
//   XREF to: 005572df (UNCONDITIONAL_JUMP)
// 00557627: PUSH 0x1
//   Label: LAB_00557627
// 00557629: PUSH ESI
// 0055762a: PUSH EAX
// 0055762b: JMP 0x005572e0
//   XREF to: 005572e0 (UNCONDITIONAL_JUMP)
// 00557630: JBE 0x0055760d
//   Label: LAB_00557630
//   XREF to: 0055760d (CONDITIONAL_JUMP)
// 00557632: CMP EAX,0x3
// 00557635: JZ 0x005575d1
//   XREF to: 005575d1 (CONDITIONAL_JUMP)
// 00557637: PUSH EBX
//   Label: LAB_00557637
// 00557638: CALL core_scat.cpp_FUN_00558010
//   XREF to: 00558010 (UNCONDITIONAL_CALL)
// 0055763d: MOV ESI,EAX
// 0055763f: ADD ESP,0x4
// 00557642: LEA EAX,[EBX + 0x158]
// 00557648: TEST ESI,ESI
// 0055764a: JZ 0x00557627
//   XREF to: 00557627 (CONDITIONAL_JUMP)
// 0055764c: PUSH 0x1
// 0055764e: PUSH 0x7
// 00557650: PUSH EAX
// 00557651: JMP 0x005572e0
//   XREF to: 005572e0 (UNCONDITIONAL_JUMP)
// 00557656: CMP dword ptr [EBX + 0xbe28],0x2
//   Label: LAB_00557656
// 0055765d: JNZ 0x0055766b
//   XREF to: 0055766b (CONDITIONAL_JUMP)
// 0055765f: PUSH dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00557662: PUSH EBX
// 00557663: CALL core_scat.cpp_FUN_005578e0
//   XREF to: 005578e0 (UNCONDITIONAL_CALL)
// 00557668: ADD ESP,0x8
// 0055766b: LEA EAX,[EBX + 0x158]
//   Label: LAB_0055766b
// 00557671: PUSH EAX
// 00557672: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 00557677: MOV EAX,dword ptr [EAX + 0x24]
// 0055767a: ADD ESP,0x4
// 0055767d: CMP EAX,0xa
// 00557680: JA 0x005572e8
//   XREF to: 005572e8 (CONDITIONAL_JUMP)
// 00557686: JMP dword ptr [EAX*0x4 + 0x5571b8]
//   Label: switchD
//   XREF to: 005572e8 (COMPUTED_JUMP)
//   XREF to: 005575b3 (COMPUTED_JUMP)
//   XREF to: 0055768d (COMPUTED_JUMP)
//   XREF to: 005571b8 (DATA)
// 0055768d: CMP dword ptr [EBX + 0x2410],0x0
//   Label: caseD_a
// 00557694: JZ 0x005572e8
//   XREF to: 005572e8 (CONDITIONAL_JUMP)
// 0055769a: PUSH EBX
// 0055769b: CALL core_scat.cpp_FUN_00558010
//   XREF to: 00558010 (UNCONDITIONAL_CALL)
// 005576a0: XOR ESI,ESI
// 005576a2: ADD ESP,0x4
// 005576a5: TEST EAX,EAX
// 005576a7: JZ 0x005576ae
//   XREF to: 005576ae (CONDITIONAL_JUMP)
// 005576a9: MOV ESI,0x7
// 005576ae: CMP dword ptr [EBX + 0xbe2c],0x0
//   Label: LAB_005576ae
// 005576b5: JZ 0x005576cd
//   XREF to: 005576cd (CONDITIONAL_JUMP)
// 005576b7: PUSH EBX
// 005576b8: CALL core_scat.cpp_FUN_00558010
//   XREF to: 00558010 (UNCONDITIONAL_CALL)
// 005576bd: ADD ESP,0x4
// 005576c0: TEST EAX,EAX
// 005576c2: JZ 0x005577c9
//   XREF to: 005577c9 (CONDITIONAL_JUMP)
// 005576c8: MOV ESI,0x9
// 005576cd: CMP dword ptr [EBX + 0xbe30],0x0
//   Label: LAB_005576cd
// 005576d4: JZ 0x005576ec
//   XREF to: 005576ec (CONDITIONAL_JUMP)
// 005576d6: PUSH EBX
// 005576d7: CALL core_scat.cpp_FUN_00558010
//   XREF to: 00558010 (UNCONDITIONAL_CALL)
// 005576dc: ADD ESP,0x4
// 005576df: TEST EAX,EAX
// 005576e1: JZ 0x005577e6
//   XREF to: 005577e6 (CONDITIONAL_JUMP)
// 005576e7: MOV ESI,0xa
// 005576ec: CMP dword ptr [EBX + 0xbe38],0x0
//   Label: LAB_005576ec
// 005576f3: JZ 0x00557752
//   XREF to: 00557752 (CONDITIONAL_JUMP)
// 005576f5: CMP dword ptr [EBX + 0x1fbd4],0x0
// 005576fc: JZ 0x00557752
//   XREF to: 00557752 (CONDITIONAL_JUMP)
// 005576fe: MOV EAX,dword ptr [EBX + 0x1fbe8]
// 00557704: TEST EAX,EAX
// 00557706: JZ 0x00557752
//   XREF to: 00557752 (CONDITIONAL_JUMP)
// 00557708: PUSH EAX
// 00557709: MOV EDI,dword ptr [EAX + 0x154]
// 0055770f: CALL dword ptr [EDI + 0xfc]
// 00557715: ADD ESP,0x4
// 00557718: TEST EAX,EAX
// 0055771a: JZ 0x00557752
//   XREF to: 00557752 (CONDITIONAL_JUMP)
// 0055771c: MOV EAX,dword ptr [EBX + 0x1fbe8]
// 00557722: PUSH EAX
// 00557723: MOV EDI,dword ptr [EAX + 0x154]
// 00557729: CALL dword ptr [EDI + 0xf8]
// 0055772f: MOV EAX,dword ptr [EBX + 0x1fbe8]
// 00557735: MOV dword ptr [EBX + 0xbe38],0x0
// 0055773f: MOV EDX,dword ptr [EAX + 0x2e0]
// 00557745: ADD ESP,0x4
// 00557748: CMP EDX,0x8
// 0055774b: JNZ 0x00557752
//   XREF to: 00557752 (CONDITIONAL_JUMP)
// 0055774d: MOV ESI,0xb
// 00557752: FLD float ptr [EBX + 0xbe50]
//   Label: LAB_00557752
// 00557758: FMUL float ptr [EBX + 0x2438]
// 0055775e: LEA EDI,[EBX + 0x158]
// 00557764: FADD float ptr [EBX + 0x2418]
// 0055776a: PUSH EDI
// 0055776b: FSTP float ptr [EBX + 0x2418]
// 00557771: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 00557776: MOV EAX,dword ptr [EAX + 0x24]
// 00557779: ADD ESP,0x4
// 0055777c: CMP ESI,EAX
// 0055777e: JZ 0x0055778c
//   XREF to: 0055778c (CONDITIONAL_JUMP)
// 00557780: PUSH 0x1
// 00557782: PUSH ESI
// 00557783: PUSH EDI
// 00557784: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00557789: ADD ESP,0xc
// 0055778c: CMP dword ptr [EBX + 0xbe44],0x0
//   Label: LAB_0055778c
// 00557793: JZ 0x005572e8
//   XREF to: 005572e8 (CONDITIONAL_JUMP)
// 00557799: MOV dword ptr [EBX + 0xbe44],0x0
// 005577a3: MOV EDX,dword ptr [EBX + 0x1fbd4]
// 005577a9: MOV ESI,dword ptr [EBX + 0x154]
// 005577af: TEST EDX,EDX
// 005577b1: SETZ AL
// 005577b4: AND EAX,0xff
// 005577b9: PUSH EAX
// 005577ba: PUSH EBX
// 005577bb: CALL dword ptr [ESI + 0x158]
// 005577c1: ADD ESP,0x8
// 005577c4: JMP 0x005572e8
//   XREF to: 005572e8 (UNCONDITIONAL_JUMP)
// 005577c9: CMP dword ptr [EBX + 0xbe34],0x0
//   Label: LAB_005577c9
// 005577d0: JZ 0x005577dc
//   XREF to: 005577dc (CONDITIONAL_JUMP)
// 005577d2: MOV ESI,0x2
// 005577d7: JMP 0x005576cd
//   XREF to: 005576cd (UNCONDITIONAL_JUMP)
// 005577dc: MOV ESI,0x1
//   Label: LAB_005577dc
// 005577e1: JMP 0x005576cd
//   XREF to: 005576cd (UNCONDITIONAL_JUMP)
// 005577e6: MOV ESI,0x3
//   Label: LAB_005577e6
// 005577eb: JMP 0x005576ec
//   XREF to: 005576ec (UNCONDITIONAL_JUMP)
// 005577f0: MOV dword ptr [EBX + 0x2598],EAX
//   Label: LAB_005577f0
// 005577f6: JMP 0x005573f5
//   XREF to: 005573f5 (UNCONDITIONAL_JUMP)
// 005577fb: CMP dword ptr [EBX + 0xbe38],0x0
//   Label: LAB_005577fb
// 00557802: JZ 0x00557408
//   XREF to: 00557408 (CONDITIONAL_JUMP)
// 00557808: PUSH 0x1
// 0055780a: PUSH 0xf
// 0055780c: PUSH EDI
// 0055780d: JMP 0x00557400
//   XREF to: 00557400 (UNCONDITIONAL_JUMP)
// 00557812: LEA EAX,[EBX + 0x23ac]
//   Label: LAB_00557812
// 00557818: LEA ESI,[EBX + 0x241c]
// 0055781e: FLD float ptr [EAX]
// 00557820: FADD float ptr [ESI]
// 00557822: FSTP float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x4c] (WRITE)
// 00557826: FLD float ptr [EAX + 0x4]
// 00557829: FADD float ptr [ESI + 0x4]
// 0055782c: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0055782f: FLD ST0
// 00557831: FXCH ST2
// 00557833: FSTP float ptr [ESP + 0x40]
//   XREF to: Stack[-0x48] (WRITE)
// 00557837: FLD float ptr [EAX + 0x8]
// 0055783a: FADD float ptr [ESI + 0x8]
// 0055783d: FXCH ST2
// 0055783f: FMUL double ptr [0x006413ac]
//   XREF to: 006413ac (READ)
// 00557845: FXCH ST2
// 00557847: FSTP float ptr [ESP + 0x44]
//   XREF to: Stack[-0x44] (WRITE)
// 0055784b: MOV dword ptr [EAX + 0x8],0x0
// 00557852: MOV EDX,dword ptr [EAX + 0x8]
// 00557855: MOV dword ptr [EAX + 0x4],EDX
// 00557858: MOV EDX,dword ptr [EAX + 0x4]
// 0055785b: MOV dword ptr [EAX],EDX
// 0055785d: MOV dword ptr [ESI + 0x8],0x0
// 00557864: MOV EAX,dword ptr [ESI + 0x8]
// 00557867: MOV dword ptr [ESI + 0x4],EAX
// 0055786a: MOV EAX,dword ptr [ESI + 0x4]
// 0055786d: MOV dword ptr [ESI],EAX
// 0055786f: FLD float ptr [EBX + 0x242c]
// 00557875: FXCH ST2
// 00557877: FSUBR ST0,ST2
// 00557879: LEA EAX,[EBX + 0x2428]
// 0055787f: FSTP ST2
// 00557881: FXCH
// 00557883: FSTP float ptr [EBX + 0x242c]
// 00557889: FLD float ptr [EAX]
// 0055788b: FMUL ST1
// 0055788d: FSTP float ptr [ESP + 0x24]
//   XREF to: Stack[-0x64] (WRITE)
// 00557891: FLD float ptr [EAX + 0x4]
// 00557894: FMUL ST1
// 00557896: FSTP float ptr [ESP + 0x28]
//   XREF to: Stack[-0x60] (WRITE)
// 0055789a: FMUL float ptr [EAX + 0x8]
// 0055789d: FLD float ptr [ESP + 0x40]
//   XREF to: Stack[-0x48] (READ)
// 005578a1: FLD float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x4c] (READ)
// 005578a5: FADD float ptr [ESP + 0x24]
//   XREF to: Stack[-0x64] (READ)
// 005578a9: FLD float ptr [ESP + 0x44]
//   XREF to: Stack[-0x44] (READ)
// 005578ad: FXCH
// 005578af: FSTP float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x4c] (WRITE)
// 005578b3: FXCH
// 005578b5: FADD float ptr [ESP + 0x28]
//   XREF to: Stack[-0x60] (READ)
// 005578b9: LEA EAX,[ESP + 0x3c]
//   XREF to: Stack[-0x4c] (DATA)
// 005578bd: FSTP float ptr [ESP + 0x40]
//   XREF to: Stack[-0x48] (WRITE)
// 005578c1: FXCH
// 005578c3: FSTP float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x5c] (WRITE)
// 005578c7: PUSH EAX
// 005578c8: FADD float ptr [ESP + 0x30]
//   XREF to: Stack[-0x5c] (READ)
// 005578cc: PUSH EBX
// 005578cd: FSTP float ptr [ESP + 0x4c]
//   XREF to: Stack[-0x44] (WRITE)
// 005578d1: CALL core_charactr.cpp_CCharacter_FUN_00428f40
//   XREF to: 00428f40 (UNCONDITIONAL_CALL)
// 005578d6: ADD ESP,0x8
// 005578d9: JMP 0x00557408
//   XREF to: 00557408 (UNCONDITIONAL_JUMP)
