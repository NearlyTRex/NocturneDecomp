// Name: core_baron.cpp_CBaron_process_FUN_00412e80
// Address: 00412e80
// Address Range: [[00412e80, 00413463]]
// Convention: __cdecl
// Signature: void core_baron.cpp_CBaron_process_FUN_00412e80(CBaron * this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_baron_cpp_CBaron_process_FUN_00412e80(CBaron *this_ptr)

{
  uint uVar1;
  CGame *pCVar2;
  int iVar3;
  CVector3f *pCVar4;
  SMotion *pSVar5;
  int iVar6;
  BADSPACEBASE *in_ESP;
  uint unaff_EBP;
  byte bVar7;
  float in_stack_00000018;
  float in_stack_00000024;
  float in_stack_00000044;
  float afStackY_1858 [1514];
  CBaron *this_ptr_00;
  CDeformableModelInstance *pCVar8;
  CQuaternion4f *source_quaternions;
  float fVar9;
  code *bone_index;
  CDeformableModel_MotionBlendWeightFunc *in_stack_ffffff7c;
  float in_stack_ffffff84;
  byte local_6c [8];
  uint local_64 [5];
  float local_50;
  float local_4c;
  float local_48;
  CVector3f CStack_40;
  uint local_34;
  uint local_30;
  float local_2c;
  byte local_28 [8];
  float fStack_20;
  float fStack_1c;
  CVector3f CStack_18;
  
  bVar7 = 0;
  pCVar8 = &(this_ptr->field0_0x0).base_character.model;
  if (*(int *)(this_ptr->field1_0x1fbd4 + 0xf8) == 0) {
    iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                      (g_CEventListPtr,this_ptr->field1_0x1fbd4);
    if (iVar3 != 0) {
      this_ptr->field1_0x1fbd4[0xf8] = '\x01';
      this_ptr->field1_0x1fbd4[0xf9] = '\0';
      this_ptr->field1_0x1fbd4[0xfa] = '\0';
      this_ptr->field1_0x1fbd4[0xfb] = '\0';
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&pCVar8->motion_controller,6,1)
      ;
      this_ptr->field1_0x1fbd4[0xfc] = '\x01';
      this_ptr->field1_0x1fbd4[0xfd] = '\0';
      this_ptr->field1_0x1fbd4[0xfe] = '\0';
      this_ptr->field1_0x1fbd4[0xff] = '\0';
    }
  }
  else {
    iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                      (g_CEventListPtr,this_ptr->field1_0x1fbd4 + 100);
    if (iVar3 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&pCVar8->motion_controller,7,1)
      ;
    }
  }
  if (((*(int *)(this_ptr->field1_0x1fbd4 + 0xf8) == 0) &&
      ((this_ptr->field0_0x0).control_type == 2)) ||
     (iVar3 = core_charactr_cpp_CCharacter_FUN_00429870((CCharacter *)this_ptr), iVar3 == 0)) {
    return;
  }
  if ((this_ptr->field0_0x0).control_type == 2) {
    core_baron_cpp_FUN_004135e0();
  }
  pCVar2 = g_CGamePtr;
  *(float *)((this_ptr->field0_0x0).base_character.field2_0x240c + 0x2c) =
       in_stack_00000018 * (float)12.566370614;
  if (pCVar2->letterbox_mode != 0) {
    *(float *)((this_ptr->field0_0x0).base_character.field2_0x240c + 0x2c) =
         *(float *)((this_ptr->field0_0x0).base_character.field2_0x240c + 0x2c) *
         (float)0.33333333333333298;
  }
  fVar9 = (float)(this_ptr->field0_0x0).field1_0xbe24 - in_stack_00000018;
  (this_ptr->field0_0x0).field1_0xbe24 = (int)fVar9;
  if (fVar9 < 0.0) {
    (this_ptr->field0_0x0).field1_0xbe24 = 0;
  }
  (this_ptr->field0_0x0).base_character.model.accumulated_root_motion.z = 0.0;
  (this_ptr->field0_0x0).base_character.model.accumulated_root_motion.y =
       (this_ptr->field0_0x0).base_character.model.accumulated_root_motion.z;
  (this_ptr->field0_0x0).base_character.model.accumulated_root_motion.x =
       (this_ptr->field0_0x0).base_character.model.accumulated_root_motion.y;
  core_baron_cpp_FUN_00413a00();
  if (*(int *)(this_ptr->field1_0x1fbd4 + 0xf8) == 0) {
    return;
  }
  this_ptr_00 = this_ptr;
  iVar3 = core_charactr_cpp_CCharacter_FUN_0042ca70((CCharacter *)this_ptr);
  pCVar8 = &(this_ptr->field0_0x0).base_character.model;
  if (iVar3 == 0) {
    iVar3 = 0x41344e;
    pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&pCVar8->motion_controller);
    switch(pSVar5->state_index) {
    case 0:
    case 1:
    case 2:
    case 3:
      iVar6 = 0;
      if (*(int *)(this_ptr->field0_0x0).field3_0xbe2c != 0) {
        if (*(int *)((this_ptr->field0_0x0).field3_0xbe2c + 8) == 0) {
          iVar6 = 1;
        }
        else {
          iVar6 = 3;
        }
      }
      if (*(int *)((this_ptr->field0_0x0).field3_0xbe2c + 4) != 0) {
        iVar6 = 2;
      }
      if (*(int *)((this_ptr->field0_0x0).field3_0xbe2c + 0xc) != 0) {
        this_ptr->field1_0x1fbd4[0xdc] = '\x01';
        this_ptr->field1_0x1fbd4[0xdd] = '\0';
        this_ptr->field1_0x1fbd4[0xde] = '\0';
        this_ptr->field1_0x1fbd4[0xdf] = '\0';
        iVar6 = 4;
        (this_ptr->field0_0x0).field3_0xbe2c[0xc] = '\0';
        (this_ptr->field0_0x0).field3_0xbe2c[0xd] = '\0';
        (this_ptr->field0_0x0).field3_0xbe2c[0xe] = '\0';
        (this_ptr->field0_0x0).field3_0xbe2c[0xf] = '\0';
      }
      pCVar8 = &(this_ptr->field0_0x0).base_character.model;
      *(float *)((this_ptr->field0_0x0).base_character.field2_0x240c + 0xc) =
           *(float *)((this_ptr->field0_0x0).field3_0xbe2c + 0x24) *
           *(float *)((this_ptr->field0_0x0).base_character.field2_0x240c + 0x2c);
      pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                         (&pCVar8->motion_controller);
      if (iVar6 == pSVar5->state_index) break;
      goto LAB_0041300c;
    case 4:
      pCVar4 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                         ((CVector3f *)(local_6c + 4),&g_ZeroVector,
                          (this_ptr->field0_0x0).base_character.model.bone_transform.
                          bone_world_matrices + DAT_008224cc);
      pCVar4 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                         ((CDemonActor *)this_ptr,&CStack_40,pCVar4);
      if ((CVector3f *)(local_28 + 4) != pCVar4) {
        local_28._4_4_ = pCVar4->x;
        fStack_20 = pCVar4->y;
        fStack_1c = pCVar4->z;
      }
      pCVar4 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                         (&CStack_18,&g_ZeroVector,
                          (this_ptr->field0_0x0).base_character.model.bone_transform.
                          bone_world_matrices + DAT_008224d0);
      pCVar4 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                         ((CDemonActor *)this_ptr,(CVector3f *)(local_6c + 4),pCVar4);
      if (&CStack_40 != pCVar4) {
        CStack_40.x = pCVar4->x;
        CStack_40.y = pCVar4->y;
        CStack_40.z = pCVar4->z;
      }
      if (*(int *)(this_ptr->field1_0x1fbd4 + 0xdc) == 0) {
        core_fire_cpp_CFireEffect_FUN_004c90c0(g_CFireEffectPtr);
        core_fire_cpp_CFireEffect_FUN_004c90c0(g_CFireEffectPtr);
      }
      if ((float *)(this_ptr->field1_0x1fbd4 + 0xe0) != &CStack_18.y) {
        *(float *)(this_ptr->field1_0x1fbd4 + 0xe0) = CStack_18.y;
        *(float *)(this_ptr->field1_0x1fbd4 + 0xe4) = CStack_18.z;
        *(uint *)(this_ptr->field1_0x1fbd4 + 0xe8) = unaff_EBP;
      }
      if ((float *)(this_ptr->field1_0x1fbd4 + 0xec) != &CStack_40.z) {
        *(float *)(this_ptr->field1_0x1fbd4 + 0xec) = CStack_40.z;
        *(uint *)(this_ptr->field1_0x1fbd4 + 0xf0) = local_34;
        *(uint *)(this_ptr->field1_0x1fbd4 + 0xf4) = local_30;
      }
      this_ptr->field1_0x1fbd4[0xdc] = '\0';
      this_ptr->field1_0x1fbd4[0xdd] = '\0';
      this_ptr->field1_0x1fbd4[0xde] = '\0';
      this_ptr->field1_0x1fbd4[0xdf] = '\0';
    }
  }
  else {
    uVar1 = *(uint *)((this_ptr->field0_0x0).base_character.field11_0x25a0 + 0x10);
    if (uVar1 < 2) {
      if (uVar1 != 1) goto LAB_00413237;
      iVar3 = 1;
    }
    else if (uVar1 < 3) {
      iVar3 = 3;
    }
    else {
      if (uVar1 == 3) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar8->motion_controller,0,1);
        engine_console_cpp_CConsole_printf_FUN_00441890
                  (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
        goto switchD_0041345d_default;
      }
LAB_00413237:
      iVar3 = 0;
    }
    pCVar8 = (CDeformableModelInstance *)&DAT_00000001;
    this_ptr_00 = (CBaron *)&(this_ptr->field0_0x0).base_character.model;
LAB_0041300c:
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              ((CMotionController *)this_ptr_00,iVar3,(int)pCVar8);
  }
switchD_0041345d_default:
  pCVar4 = &(this_ptr->field0_0x0).base_character.model.accumulated_root_motion;
  fVar9 = (float)32;
  local_50 = pCVar4->x;
  local_4c = (this_ptr->field0_0x0).base_character.model.accumulated_root_motion.y;
  local_48 = (this_ptr->field0_0x0).base_character.model.accumulated_root_motion.z;
  (this_ptr->field0_0x0).base_character.model.accumulated_root_motion.z = 0.0;
  (this_ptr->field0_0x0).base_character.model.accumulated_root_motion.y =
       (this_ptr->field0_0x0).base_character.model.accumulated_root_motion.z;
  pCVar4->x = (this_ptr->field0_0x0).base_character.model.accumulated_root_motion.y;
  *(float *)((this_ptr->field0_0x0).base_character.field2_0x240c + 0x20) =
       *(float *)((this_ptr->field0_0x0).base_character.field2_0x240c + 0x20) -
       in_stack_00000024 * fVar9;
  fStack_20 = *(float *)((this_ptr->field0_0x0).base_character.field2_0x240c + 0x1c) *
              in_stack_00000024;
  fStack_1c = *(float *)((this_ptr->field0_0x0).base_character.field2_0x240c + 0x20) *
              in_stack_00000024;
  CStack_18.x = *(float *)((this_ptr->field0_0x0).base_character.field2_0x240c + 0x24) *
                in_stack_00000024;
  local_50 = local_50 + fStack_20;
  local_4c = local_4c + fStack_1c;
  local_48 = local_48 + CStack_18.x;
  core_charactr_cpp_CCharacter_FUN_00429820((CCharacter *)this_ptr);
  pCVar8 = &(this_ptr->field0_0x0).base_character.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(pCVar8);
  bone_index = core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0;
  fVar9 = DAT_00822498;
  core_xform_cpp_eulerToQuaternion_FUN_005f7b20
            ((CQuaternion4f *)(this_ptr->field1_0x1fbd4 + 200),
             *(CVector3f **)(this_ptr->field1_0x1fbd4 + 0xd4));
  source_quaternions = (CQuaternion4f *)local_6c;
  local_6c._0_4_ = in_stack_ffffff84;
  *(uint *)(local_6c + (uint)bVar7 * -8 + 4) = local_64[(uint)bVar7 * -2 + -5];
  local_64[(uint)bVar7 * -2 + (uint)bVar7 * -2] = local_64[(uint)bVar7 * -2 + (uint)bVar7 * -2 + -4]
  ;
  (local_64 + (uint)bVar7 * -2 + (uint)bVar7 * -2)[(uint)bVar7 * -2 + 1] =
       (local_64 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + -4)[(uint)bVar7 * -2 + 1];
  core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
            (pCVar8,source_quaternions,fVar9,(int)bone_index,in_stack_ffffff7c);
  iVar3 = 0;
  core_charactr_cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0((CCharacter *)this_ptr);
  do {
    local_2c = core_actor_cpp_getRandomFloat_FUN_0040cc10(-2.0,2.0);
    iVar3 = iVar3 + 1;
    local_28._0_4_ = 2.0;
    fStack_20 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-2.0,2.0);
    local_28._0_4_ =
         (float)local_28._0_4_ +
         (this_ptr->field0_0x0).base_character.base_actor.location.position.x;
    local_28._4_4_ =
         (float)local_28._4_4_ +
         (this_ptr->field0_0x0).base_character.base_actor.location.position.y;
    fStack_20 = fStack_20 + (this_ptr->field0_0x0).base_character.base_actor.location.position.z;
    core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004c7b20
              (g_CFireEffectPtr,(CVector3f *)local_28,2.0,(CVector3f *)0x0,0xffff);
  } while (iVar3 < 2);
  DAT_008224dc = DAT_008224dc + in_stack_00000044;
  return;
}
