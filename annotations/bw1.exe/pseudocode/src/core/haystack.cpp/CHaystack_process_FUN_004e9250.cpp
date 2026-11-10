// Name: core_haystack.cpp_CHaystack_process_FUN_004e9250
// Address: 004e9250
// Address Range: [[004e9250, 004e98a3]]
// Convention: __cdecl
// Signature: void __cdecl core_haystack_cpp_CHaystack_process_FUN_004e9250(CHaystack *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_haystack_cpp_CHaystack_process_FUN_004e9250(CHaystack *this_ptr,float delta_time)

{
  bool bVar1;
  int iVar2;
  SMotion *pSVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  float afStackY_1898 [1522];
  CDeformableModelInstance *this_ptr_00;
  CQuaternion4f *source_quaternions;
  float fVar7;
  uint *puVar8;
  code *blend_callback;
  CVector3f *velocity;
  float fStack_bc;
  CQuaternion4f CStack_ac;
  uint uStack_9c;
  float afStack_98 [4];
  float fStack_88;
  CVector3f CStack_84;
  uint uStack_78;
  float afStack_74 [4];
  float fStack_64;
  float afStack_60 [3];
  uint uStack_54;
  uint uStack_48;
  uint uStack_3c;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  int iStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar6 = 0;
  iVar2 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar2 == 0) {
    return;
  }
  if (*(int *)&this_ptr->field_0xc1d4 == 2) {
    core_haystack_cpp_CHaystack_updateAI_FUN_004e98b0(this_ptr,delta_time);
  }
  core_charactr_cpp_FUN_00435320(this_ptr,delta_time);
  fVar7 = *(float *)&this_ptr->field_0xc1d0 - delta_time;
  *(float *)&this_ptr->field_0xc1d0 = fVar7;
  if (fVar7 < 0.0) {
    *(uint *)&this_ptr->field_0xc1d0 = 0;
  }
  *(uint *)&this_ptr->field_0x24a4 = 0;
  *(uint *)&this_ptr->field_0x24a0 = *(uint *)&this_ptr->field_0x24a4;
  *(uint *)&this_ptr->field_0x249c = *(uint *)&this_ptr->field_0x24a0;
  core_haystack_cpp_CHaystack_advanceMotion_FUN_004e9f20(this_ptr,delta_time);
  iVar2 = core_charactr_cpp_CCharacter_processWalking_FUN_00432240
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar2 == 0) {
    pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                       ((CMotionController *)&this_ptr->field_0x158);
    switch(*(uint *)(pSVar3 + 0x24)) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 10:
      if (*(int *)&this_ptr->field_0x2500 != 0) {
        iVar2 = 0;
        if (this_ptr->guns_drawn != 0) {
          iVar2 = 10;
        }
        if (*(int *)&this_ptr->field_0xc1d8 != 0) {
          if (*(int *)&this_ptr->field_0xc1e0 == 0) {
            iVar2 = 1;
          }
          else {
            iVar2 = 2;
          }
        }
        if (*(int *)&this_ptr->field_0xc1dc != 0) {
          iVar2 = 3;
        }
        if (*(int *)&this_ptr->field_0xc1f0 != 0) {
          *(uint *)&this_ptr->field_0xc1f0 = 0;
          uVar4 = (uint)(this_ptr->guns_drawn == 0);
          this_ptr->guns_drawn = uVar4;
          if (uVar4 == 0) {
            iVar2 = 0;
          }
          else {
            iVar2 = 10;
          }
        }
        if (*(int *)&this_ptr->field_0xc1e4 != 0) {
          bVar1 = true;
          if ((this_ptr->guns_drawn == 0) && (*(int *)&this_ptr->field_0xc1d4 != 2)) {
            iVar5 = core_hero_cpp_CHero_tryInteract_FUN_004eb090((CHero *)this_ptr);
            bVar1 = false;
            if (iVar5 != 0) goto LAB_004e965f;
            iVar5 = core_hero_cpp_FUN_004eb3e0(this_ptr,0);
            if ((iVar5 != 0) && (iVar5 != 1)) {
              core_hero_cpp_CHero_tryOpenDoor_FUN_004eb5e0((CHero *)this_ptr);
            }
            if ((iVar5 != 0) ||
               (iVar5 = core_hero_cpp_CHero_tryTalkToNearbyCharacter_FUN_004eb240((CHero *)this_ptr)
               , iVar5 != 0)) goto LAB_004e965f;
            iVar5 = core_hero_cpp_FUN_004eb660((CHero *)this_ptr);
            if (iVar5 != 0) {
              core_hero_cpp_FUN_004eb7f0(this_ptr);
              goto LAB_004e965f;
            }
          }
          else {
LAB_004e965f:
            if (!bVar1) goto LAB_004e9680;
          }
          *(uint *)&this_ptr->field_0xc1e4 = 0;
          if (this_ptr->attack_side == 0) {
            iVar2 = 0xf;
          }
          else {
            iVar2 = 0xe;
          }
        }
LAB_004e9680:
        *(float *)&this_ptr->field_0x2508 =
             *(float *)&this_ptr->field_0xc200 * *(float *)&this_ptr->field_0x2528;
        pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                           ((CMotionController *)&this_ptr->field_0x158);
        if (iVar2 != *(int *)(pSVar3 + 0x24)) goto LAB_004e931f;
      }
      break;
    case 9:
      goto switchD_004e9753_caseD_9;
    }
  }
  else {
    uVar4 = *(uint *)&this_ptr->field_0x273c;
    if (uVar4 < 2) {
      if (uVar4 == 1) {
        iVar2 = 1;
      }
      else {
LAB_004e95bd:
        iVar2 = 0;
      }
    }
    else {
      if (2 < uVar4) {
        if (uVar4 == 3) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)&this_ptr->field_0x158,0,1);
          engine_console_cpp_FUN_00445430
                    (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
          goto switchD_004e9753_caseD_4;
        }
        goto LAB_004e95bd;
      }
      iVar2 = 2;
    }
LAB_004e931f:
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              ((CMotionController *)&this_ptr->field_0x158,iVar2,1);
  }
switchD_004e9753_caseD_4:
  if (*(int *)&this_ptr->field_0x26fc == 0) {
    core_charactr_cpp_FUN_0042d700(this_ptr,delta_time);
    afStack_98[2] = *(float *)&this_ptr->field_0x249c + *(float *)&this_ptr->field_0x250c;
    afStack_98[3] = *(float *)&this_ptr->field_0x24a0 + *(float *)&this_ptr->field_0x2510;
    fStack_88 = *(float *)&this_ptr->field_0x24a4 + *(float *)&this_ptr->field_0x2514;
    CStack_84.x = afStack_98[2];
    *(float *)((int)&CStack_84 + (uint)bVar6 * -8 + 4) = afStack_98[(uint)bVar6 * -2 + 3];
    *(float *)((int)&CStack_84 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
         afStack_98[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
    *(uint *)&this_ptr->field_0x24a4 = 0;
    *(uint *)&this_ptr->field_0x24a0 = *(uint *)&this_ptr->field_0x24a4;
    *(uint *)&this_ptr->field_0x249c = *(uint *)&this_ptr->field_0x24a0;
    *(uint *)&this_ptr->field_0x2514 = 0;
    *(uint *)&this_ptr->field_0x2510 = *(uint *)&this_ptr->field_0x2514;
    *(uint *)&this_ptr->field_0x250c = *(uint *)&this_ptr->field_0x2514;
    pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                       ((CMotionController *)&this_ptr->field_0x158);
    if ((*(int *)(pSVar3 + 0x24) == 0xe) || (*(int *)(pSVar3 + 0x24) == 0xf)) {
      CStack_84.y = 0.0;
      CStack_84.x = 0.0;
      CStack_84.z = 0.0;
    }
    afStack_74[2] = *(float *)&this_ptr->field_0x2518 * delta_time;
    velocity = &CStack_84;
    afStack_74[3] = *(float *)&this_ptr->field_0x251c * delta_time;
    fStack_64 = *(float *)&this_ptr->field_0x2520 * delta_time;
    fStack_30 = afStack_74[2];
    afStack_74[(uint)bVar6 * -2 + 0x12] = afStack_74[(uint)bVar6 * -2 + 3];
    afStack_74[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x13] =
         afStack_74[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
    CStack_84.x = CStack_84.x + fStack_30;
    CStack_84.y = CStack_84.y + fStack_2c;
    CStack_84.z = CStack_84.z + fStack_28;
    core_charactr_cpp_FUN_0042d750((CCharacter *)this_ptr,velocity);
  }
  else {
    if (*(int *)&this_ptr->field_0x2700 == 0) {
      core_actor_cpp_FUN_00408bb0(this_ptr,*(int *)&this_ptr->field_0x26fc + 0x20);
      afStack_60[0] = (float)uStack_54;
      afStack_74[(uint)bVar6 * -2 + 6] = afStack_74[(uint)bVar6 * -2 + 9];
      afStack_74[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
           afStack_74[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10];
      core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(afStack_74 + 5);
      uStack_78 = uStack_48;
      afStack_74[(uint)bVar6 * -2] = afStack_74[(uint)bVar6 * -2 + 0xc];
      afStack_74[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
           afStack_74[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
      fStack_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cd60(afStack_74[0]);
      fStack_1c = fStack_14;
      if (fStack_14 < _DAT_005e4533) {
        fStack_1c = fStack_14 + _DAT_005e4537;
      }
      if (_DAT_005e453b < fStack_1c) {
        fStack_1c = fStack_1c + _DAT_005e453f;
      }
      fStack_24 = delta_time * _DAT_005e4537;
      fStack_18 = -fStack_24;
      if (fStack_1c < fStack_18) {
        fStack_1c = fStack_18;
      }
      if (fStack_24 < fStack_1c) {
        fStack_1c = fStack_24;
      }
      *(float *)&this_ptr->field_0x34 = *(float *)&this_ptr->field_0x34 + fStack_1c;
      core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0((CDemonActor *)this_ptr);
    }
    iStack_20 = *(int *)&this_ptr->field_0x26fc;
    fStack_14 = *(float *)(iStack_20 + 0x154);
    core_skeleton_cpp_FUN_00569130(&this_ptr->field_0x158,0);
    puVar8 = &uStack_9c;
    uStack_9c = uStack_3c;
    afStack_98[(uint)bVar6 * -2] = afStack_74[(uint)bVar6 * -2 + 0xf];
    afStack_98[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
         afStack_74[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10];
    iVar2 = (**(code **)((int)fStack_14 + 0x110))(iStack_20,this_ptr,puVar8);
    if (iVar2 == 0) {
      *(uint *)&this_ptr->field_0x26fc = 0;
LAB_004e94ca:
      iVar2 = 0;
    }
    else {
      if (*(int *)&this_ptr->field_0x26fc == 0) goto LAB_004e94ca;
      if (*(int *)&this_ptr->field_0xc1e4 == 0) goto LAB_004e94dd;
      iVar2 = 0x11;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              ((CMotionController *)&this_ptr->field_0x158,iVar2,1);
  }
LAB_004e94dd:
  core_charactr_cpp_CCharacter_preProcess_FUN_0042e160((CCharacter *)this_ptr);
  this_ptr_00 = (CDeformableModelInstance *)&this_ptr->field_0x158;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0(this_ptr_00);
  iVar2 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x10c))(this_ptr);
  if ((iVar2 == 0) &&
     (pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                         ((CMotionController *)this_ptr_00), *(int *)(pSVar3 + 0x24) != 0x13)) {
    blend_callback = core_skeleton_cpp_FUN_00567360;
    fVar7 = this_ptr->head_look_blend_weight;
    iVar2 = _DAT_01d069d8;
    core_xform_cpp_FUN_005b7ed0(&this_ptr->head_look_euler);
    source_quaternions = &CStack_ac;
    CStack_ac.w = fStack_bc;
    puVar8 = (uint *)((int)&CStack_ac + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(uint *)((int)&CStack_ac + (uint)bVar6 * -8 + 4) =
         *(uint *)(&stack0xffffff48 + (uint)bVar6 * -8);
    *puVar8 = *(uint *)(&stack0xffffff4c + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    puVar8[(uint)bVar6 * -2 + 1] =
         *(uint *)
          ((int)(&stack0xffffff4c + (uint)bVar6 * -8 + (uint)bVar6 * -8) +
          ((uint)bVar6 * -2 + 1) * 4);
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_00568d60
              (this_ptr_00,source_quaternions,fVar7,iVar2,blend_callback);
  }
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433e80((CCharacter *)this_ptr,delta_time);
switchD_004e9753_caseD_9:
  return;
}
