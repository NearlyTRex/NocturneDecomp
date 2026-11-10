// Name: core_baron.cpp_CBaron_process_FUN_0040f950
// Address: 0040f950
// Address Range: [[0040f950, 0040fee5]]
// Convention: __cdecl
// Signature: void __cdecl core_baron_cpp_CBaron_process_FUN_0040f950(CBaron *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_baron_cpp_CBaron_process_FUN_0040f950(CBaron *this_ptr,float delta_time)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  float afStackY_1894 [1520];
  CDeformableModelInstance *this_ptr_00;
  CQuaternion4f *source_quaternions;
  float fVar5;
  code *blend_callback;
  uint *puVar6;
  float *pfVar7;
  float fStack_b8;
  CQuaternion4f CStack_a8;
  CVector3f CStack_98;
  float fStack_8c;
  float afStack_88 [5];
  float fStack_74;
  CVector3f CStack_68;
  CVector3f CStack_5c;
  float fStack_50;
  float afStack_4c [2];
  CVector3f CStack_44;
  uint uStack_38;
  float afStack_34 [5];
  CVector3f CStack_20;
  float fStack_14;
  
  bVar4 = 0;
  if (this_ptr->summoned == 0) {
    iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                      (0x01C38BC0,this_ptr->summon_event);
    if (iVar2 != 0) {
      this_ptr->summoned = 1;
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)&this_ptr->field_0x2b4,6,1);
      this_ptr->shell_visible = 1;
    }
  }
  else {
    iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                      (0x01C38BC0,this_ptr->go_away_event);
    if (iVar2 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)&this_ptr->field_0x2b4,7,1);
    }
  }
  if (((this_ptr->summoned == 0) && (*(int *)&this_ptr->field_0x10a64 == 2)) ||
     (iVar2 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0
                        ((CCharacter *)this_ptr,delta_time), iVar2 == 0)) {
    return;
  }
  if (*(int *)&this_ptr->field_0x10a64 == 2) {
    core_baron_cpp_CBaron_updateMountedPosition_FUN_00410080(this_ptr,delta_time);
  }
  core_charactr_cpp_FUN_0042b2a0(this_ptr,delta_time);
  fVar5 = *(float *)&this_ptr->field_0x10a60 - delta_time;
  *(float *)&this_ptr->field_0x10a60 = fVar5;
  if (fVar5 < 0.0) {
    *(uint *)&this_ptr->field_0x10a60 = 0;
  }
  *(uint *)&this_ptr->field_0x2510 = 0;
  *(uint *)&this_ptr->field_0x250c = *(uint *)&this_ptr->field_0x2510;
  *(uint *)&this_ptr->field_0x2508 = *(uint *)&this_ptr->field_0x250c;
  core_baron_cpp_CBaron_advanceMotion_FUN_00410590(this_ptr,delta_time);
  if (this_ptr->summoned == 0) {
    return;
  }
  iVar2 = core_charactr_cpp_CCharacter_processWalking_FUN_004287f0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar2 == 0) {
    iVar2 = core_motion_cpp_FUN_005035c0(&this_ptr->field_0x2b4);
    switch(*(uint *)(iVar2 + 0x24)) {
    case 0:
    case 1:
    case 2:
    case 3:
      iVar2 = 0;
      if (*(int *)&this_ptr->field_0x10a68 != 0) {
        if (*(int *)&this_ptr->field_0x10a70 == 0) {
          iVar2 = 1;
        }
        else {
          iVar2 = 3;
        }
      }
      if (*(int *)&this_ptr->field_0x10a6c != 0) {
        iVar2 = 2;
      }
      if (*(int *)&this_ptr->field_0x10a74 != 0) {
        this_ptr->new_attack = 1;
        iVar2 = 4;
        *(uint *)&this_ptr->field_0x10a74 = 0;
      }
      *(float *)&this_ptr->field_0x2578 =
           *(float *)&this_ptr->field_0x10a90 * *(float *)&this_ptr->field_0x2598;
      iVar3 = core_motion_cpp_FUN_005035c0(&this_ptr->field_0x2b4);
      if (iVar2 == *(int *)(iVar3 + 0x24)) break;
      goto LAB_0040faba;
    case 4:
      core_xform_cpp_FUN_00591530(&DAT_0265370c,&this_ptr->field_0x1134 + DAT_007bc4cc * 0x30);
      puVar6 = &uStack_38;
      uStack_38 = afStack_34[2];
      afStack_34[(uint)bVar4 * -2] = afStack_34[(uint)bVar4 * -2 + 3];
      afStack_34[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
           afStack_34[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
      core_actor_cpp_FUN_00408d70(this_ptr,puVar6);
      CStack_98.x = fStack_74;
      *(float *)((int)&CStack_98 + (uint)bVar4 * -8 + 4) = afStack_88[(uint)bVar4 * -2 + 6];
      *(float *)((int)&CStack_98 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
           afStack_88[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
      if (&CStack_44 != &CStack_98) {
        CStack_44.x = CStack_98.x;
        CStack_44.y = CStack_98.y;
        CStack_44.z = CStack_98.z;
      }
      core_xform_cpp_FUN_00591530(&DAT_0265370c,&this_ptr->field_0x1134 + DAT_007bc4d0 * 0x30);
      pfVar7 = &fStack_50;
      fStack_50 = afStack_88[2];
      afStack_4c[(uint)bVar4 * -2] = afStack_88[(uint)bVar4 * -2 + 3];
      afStack_4c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
           afStack_88[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
      core_actor_cpp_FUN_00408d70(this_ptr,pfVar7);
      CStack_5c.x = fStack_8c;
      *(float *)((int)&CStack_5c + (uint)bVar4 * -8 + 4) = afStack_88[(uint)bVar4 * -2];
      *(float *)((int)&CStack_5c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
           afStack_88[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
      if (&CStack_20 != &CStack_5c) {
        CStack_20.x = CStack_5c.x;
        CStack_20.y = CStack_5c.y;
        CStack_20.z = CStack_5c.z;
      }
      if (this_ptr->new_attack == 0) {
        core_fire_cpp_CFireEffect_createTrailFromPoints_FUN_0049e850
                  (0x01C3DEB4,&CStack_44,&this_ptr->left_hand_pos,2.0,0.5,0.5,
                   (SMRGLTextureBasic *)&DAT_00609810);
        core_fire_cpp_CFireEffect_createTrailFromPoints_FUN_0049e850
                  (0x01C3DEB4,&CStack_20,&this_ptr->right_hand_pos,2.0,0.5,0.5,
                   (SMRGLTextureBasic *)&DAT_00609810);
      }
      if (&this_ptr->left_hand_pos != &CStack_44) {
        (this_ptr->left_hand_pos).x = CStack_44.x;
        (this_ptr->left_hand_pos).y = CStack_44.y;
        (this_ptr->left_hand_pos).z = CStack_44.z;
      }
      if (&this_ptr->right_hand_pos != &CStack_20) {
        (this_ptr->right_hand_pos).x = CStack_20.x;
        (this_ptr->right_hand_pos).y = CStack_20.y;
        (this_ptr->right_hand_pos).z = CStack_20.z;
      }
      this_ptr->new_attack = 0;
    }
    goto switchD_0040fedf_default;
  }
  uVar1 = *(uint *)&this_ptr->field_0x27ac;
  if (uVar1 < 2) {
    if (uVar1 != 1) goto LAB_0040fc5d;
    iVar2 = 1;
  }
  else if (uVar1 < 3) {
    iVar2 = 3;
  }
  else {
    if (uVar1 == 3) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)&this_ptr->field_0x2b4,0,1);
      engine_console_cpp_FUN_00436710(g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
      goto switchD_0040fedf_default;
    }
LAB_0040fc5d:
    iVar2 = 0;
  }
LAB_0040faba:
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            ((CMotionController *)&this_ptr->field_0x2b4,iVar2,1);
switchD_0040fedf_default:
  *(uint *)&this_ptr->field_0x2510 = 0;
  *(uint *)&this_ptr->field_0x250c = *(uint *)&this_ptr->field_0x2510;
  *(uint *)&this_ptr->field_0x2508 = *(uint *)&this_ptr->field_0x250c;
  core_charactr_cpp_FUN_00423a10(this_ptr,delta_time);
  core_charactr_cpp_CCharacter_preProcess_FUN_00424470((CCharacter *)this_ptr);
  this_ptr_00 = (CDeformableModelInstance *)&this_ptr->field_0x2b4;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00(this_ptr_00);
  blend_callback = core_skeleton_cpp_FUN_00544cc0;
  fVar5 = this_ptr->head_blend_weight;
  iVar2 = DAT_007bc498;
  core_xform_cpp_FUN_00594380(&this_ptr->head_rotation);
  source_quaternions = &CStack_a8;
  CStack_a8.w = fStack_b8;
  puVar6 = (uint *)((int)&CStack_a8 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  *(uint *)((int)&CStack_a8 + (uint)bVar4 * -8 + 4) =
       *(uint *)(&stack0xffffff4c + (uint)bVar4 * -8);
  *puVar6 = *(uint *)(&stack0xffffff50 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  puVar6[(uint)bVar4 * -2 + 1] =
       *(uint *)
        ((int)(&stack0xffffff50 + (uint)bVar4 * -8 + (uint)bVar4 * -8) + ((uint)bVar4 * -2 + 1) * 4)
  ;
  core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_005466c0
            (this_ptr_00,source_quaternions,fVar5,iVar2,blend_callback);
  iVar2 = 0;
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00429e90((CCharacter *)this_ptr,delta_time);
  do {
    CStack_68.x = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(-2.0,2.0);
    iVar2 = iVar2 + 1;
    CStack_68.y = 2.0;
    fStack_14 = CStack_68.x;
    fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(-2.0,2.0);
    CStack_68.x = CStack_68.x + *(float *)&this_ptr->field_0x20;
    CStack_68.y = CStack_68.y + *(float *)&this_ptr->field_0x24;
    CStack_68.z = fStack_14 + *(float *)&this_ptr->field_0x28;
    core_fire_cpp_CFireEffect_createSmokeParticle_FUN_0049d230
              (0x01C3DEB4,&CStack_68,2.0,(CVector3f *)0x0,0xffff);
  } while (iVar2 < 2);
  DAT_007bc4dc = DAT_007bc4dc + delta_time;
  return;
}
