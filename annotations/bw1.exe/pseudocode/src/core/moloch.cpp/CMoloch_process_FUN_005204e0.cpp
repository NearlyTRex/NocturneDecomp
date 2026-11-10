// Name: core_moloch.cpp_CMoloch_process_FUN_005204e0
// Address: 005204e0
// Address Range: [[005204e0, 00520c05]]
// Convention: __cdecl
// Signature: void __cdecl core_moloch_cpp_CMoloch_process_FUN_005204e0(CMoloch *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_moloch_cpp_CMoloch_process_FUN_005204e0(CMoloch *this_ptr,float delta_time)

{
  byte *this_ptr_00;
  byte *this_ptr_01;
  float fVar1;
  int iVar2;
  CMotionController *this_ptr_02;
  SMotion *pSVar3;
  byte *this_ptr_03;
  char *model_name;
  byte bVar4;
  uint uVar5;
  float fStack_1b60;
  SPose aSStack_1b5c [2740];
  float afStack_10a8 [1024];
  CVector3f CStack_a8;
  float fStack_9c;
  float afStack_98 [4];
  float fStack_88;
  uint uStack_84;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_60;
  float afStack_54 [3];
  float fStack_48;
  float fStack_44;
  float fStack_40;
  uint uStack_3c;
  int iStack_30;
  float fStack_2c;
  CMotionController *pCStack_28;
  char *pcStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  SMotion *pSStack_14;
  
  bVar4 = 0;
  if (*(int *)&this_ptr->field_0x1ffa8 == 4) {
    return;
  }
  iVar2 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar2 == 0) {
    return;
  }
  fVar1 = *(float *)&this_ptr->field_0xc1d0 - delta_time;
  *(float *)&this_ptr->field_0xc1d0 = fVar1;
  if (fVar1 < 0.0) {
    *(uint *)&this_ptr->field_0xc1d0 = 0;
  }
  *(uint *)&this_ptr->field_0x24a4 = 0;
  *(uint *)&this_ptr->field_0x24a0 = *(uint *)&this_ptr->field_0x24a4;
  *(uint *)&this_ptr->field_0x249c = *(uint *)&this_ptr->field_0x24a0;
  fStack_1b60 = delta_time;
  while (0.0 < fStack_1b60) {
    iVar2 = core_motion_cpp_CMotionController_advance_FUN_00524270
                      ((CMotionController *)&this_ptr->field_0x158,&fStack_1b60);
    core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)this_ptr,iVar2);
  }
  *(uint *)&this_ptr->field_0x2524 = *(uint *)&this_ptr->field_0x24a4;
  core_charactr_cpp_FUN_00435320(this_ptr,delta_time);
  iVar2 = core_charactr_cpp_CCharacter_processWalking_FUN_00432240
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar2 == 0) {
    if (*(int *)&this_ptr->field_0xc1d4 == 2) {
      core_moloch_cpp_CMoloch_processAI_FUN_00520c10(this_ptr,delta_time);
    }
    pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                       ((CMotionController *)&this_ptr->field_0x158);
    uVar5 = *(uint *)(pSVar3 + 0x24);
    if ((((uVar5 == 0) || (uVar5 < 2)) || (uVar5 == 2)) && (*(int *)&this_ptr->field_0x2500 != 0)) {
      uVar5 = (uint)(*(int *)&this_ptr->field_0xc1d8 != 0);
      if (*(int *)&this_ptr->field_0xc1dc != 0) {
        uVar5 = 2;
      }
      if (*(int *)&this_ptr->field_0xc1f0 != 0) {
        if (this_ptr->morphing == 0) {
          core_moloch_cpp_CMoloch_startMorph_FUN_00521230(this_ptr);
        }
        *(uint *)&this_ptr->field_0xc1f0 = 0;
      }
      *(float *)&this_ptr->field_0x2508 =
           *(float *)&this_ptr->field_0xc200 * *(float *)&this_ptr->field_0x2528;
      pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                         ((CMotionController *)&this_ptr->field_0x158);
      if (uVar5 != *(uint *)(pSVar3 + 0x24)) goto LAB_005205c5;
    }
  }
  else {
    uVar5 = *(uint *)&this_ptr->field_0x273c;
    if (uVar5 < 2) {
      if (uVar5 == 1) goto LAB_005205c4;
LAB_00520855:
      uVar5 = 0;
    }
    else {
      if (2 < uVar5) {
        if (uVar5 == 3) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)&this_ptr->field_0x158,0,1);
          engine_console_cpp_FUN_00445430
                    (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
          goto LAB_005205cd;
        }
        goto LAB_00520855;
      }
LAB_005205c4:
      uVar5 = 1;
    }
LAB_005205c5:
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              ((CMotionController *)&this_ptr->field_0x158,uVar5,1);
  }
LAB_005205cd:
  if (*(int *)&this_ptr->field_0x26fc == 0) {
    core_charactr_cpp_FUN_0042d700(this_ptr,delta_time);
    afStack_10a8[0x3fd] = *(float *)&this_ptr->field_0x2518 * delta_time;
    afStack_10a8[0x3fe] = *(float *)&this_ptr->field_0x251c * delta_time;
    afStack_10a8[0x3ff] = *(float *)&this_ptr->field_0x2520 * delta_time;
    afStack_98[2] = afStack_10a8[0x3fd];
    afStack_98[(uint)bVar4 * -2 + 3] = afStack_10a8[(uint)bVar4 * -2 + 0x3fe];
    afStack_98[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
         afStack_10a8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x3ff];
    fStack_9c = *(float *)&this_ptr->field_0x249c + *(float *)&this_ptr->field_0x250c;
    afStack_98[0] = *(float *)&this_ptr->field_0x24a0 + *(float *)&this_ptr->field_0x2510;
    afStack_98[1] = *(float *)&this_ptr->field_0x24a4 + *(float *)&this_ptr->field_0x2514;
    fStack_78 = fStack_9c;
    afStack_98[(uint)bVar4 * -2 + 9] = afStack_98[(uint)bVar4 * -2];
    afStack_98[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10] =
         afStack_98[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    fStack_48 = fStack_78 + afStack_98[2];
    fStack_44 = fStack_74 + afStack_98[3];
    fStack_40 = fStack_70 + fStack_88;
    CStack_a8.x = fStack_78 + afStack_98[2];
    *(float *)((int)&CStack_a8 + (uint)bVar4 * -8 + 4) = afStack_98[(uint)bVar4 * -2 + 0x15];
    *(float *)((int)&CStack_a8 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
         afStack_98[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x16];
    *(uint *)&this_ptr->field_0x24a4 = 0;
    *(uint *)&this_ptr->field_0x24a0 = *(uint *)&this_ptr->field_0x24a4;
    *(uint *)&this_ptr->field_0x249c = *(uint *)&this_ptr->field_0x24a0;
    *(uint *)&this_ptr->field_0x2514 = 0;
    *(uint *)&this_ptr->field_0x2510 = *(uint *)&this_ptr->field_0x2514;
    *(uint *)&this_ptr->field_0x250c = *(uint *)&this_ptr->field_0x2510;
    core_charactr_cpp_FUN_0042d750((CCharacter *)this_ptr,&CStack_a8);
    goto LAB_005207a4;
  }
  if (*(int *)&this_ptr->field_0x2700 == 0) {
    core_actor_cpp_FUN_00408bb0(this_ptr,*(int *)&this_ptr->field_0x26fc + 0x20);
    afStack_10a8[0x3fa] = (float)uStack_3c;
    afStack_10a8[(uint)bVar4 * -2 + 0x3fb] = afStack_98[(uint)bVar4 * -2 + 0x18];
    afStack_10a8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x3fc] =
         afStack_98[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x19];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(afStack_10a8 + 0x3fa);
    uStack_6c = uStack_84;
    afStack_98[(uint)bVar4 * -2 + 0xc] = afStack_98[(uint)bVar4 * -2 + 6];
    afStack_98[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd] =
         afStack_98[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
    pSStack_14 = (SMotion *)core_actor_cpp_normalizeAngleToPi_FUN_0040cd60(uStack_68);
    fStack_18 = (float)pSStack_14;
    if ((float)pSStack_14 < _DAT_005ea282) {
      fStack_18 = (float)pSStack_14 + _DAT_005ea286;
    }
    if (_DAT_005ea28a < fStack_18) {
      fStack_18 = fStack_18 + _DAT_005ea28e;
    }
    fStack_1c = delta_time * _DAT_005ea286;
    fStack_20 = -fStack_1c;
    if (fStack_18 < fStack_20) {
      fStack_18 = fStack_20;
    }
    if (fStack_1c < fStack_18) {
      fStack_18 = fStack_1c;
    }
    *(float *)&this_ptr->field_0x34 = *(float *)&this_ptr->field_0x34 + fStack_18;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0((CDemonActor *)this_ptr);
  }
  iStack_30 = *(int *)&this_ptr->field_0x26fc;
  pSStack_14 = *(SMotion **)(iStack_30 + 0x154);
  pCStack_28 = (CMotionController *)&this_ptr->field_0x158;
  core_skeleton_cpp_FUN_00569130(pCStack_28,0);
  pSVar3 = pSStack_14;
  iVar2 = iStack_30;
  afStack_54[0] = (float)uStack_60;
  afStack_98[(uint)bVar4 * -2 + 0x12] = afStack_98[(uint)bVar4 * -2 + 0xf];
  afStack_98[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x13] =
       afStack_98[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x10];
  iVar2 = (**(code **)((int)pSVar3 + 0x110))(iVar2,this_ptr,afStack_98 + 0x11);
  if (iVar2 == 0) {
    *(uint *)&this_ptr->field_0x26fc = 0;
LAB_00520791:
    this_ptr_02 = (CMotionController *)&this_ptr->field_0x158;
  }
  else {
    if (*(int *)&this_ptr->field_0x26fc == 0) goto LAB_00520791;
    this_ptr_02 = pCStack_28;
    if (*(int *)&this_ptr->field_0xc1e4 == 0) goto LAB_005207a4;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(this_ptr_02,0,1);
LAB_005207a4:
  core_charactr_cpp_CCharacter_preProcess_FUN_0042e160((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
            ((CDeformableModelInstance *)&this_ptr->field_0x158);
  (**(code **)(*(int *)&this_ptr->field_0x154 + 0x10c))(this_ptr);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433e80((CCharacter *)this_ptr,delta_time);
  if (this_ptr->morphing == 0) {
    if (this_ptr->in_human_form == 0) {
      iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                        (0x01C51D80,this_ptr->demon_to_human_condition);
      if (iVar2 != 0) {
        core_moloch_cpp_CMoloch_startMorph_FUN_00521230(this_ptr);
        return;
      }
    }
    else {
      iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                        (0x01C51D80,this_ptr->human_to_demon_condition);
      if (iVar2 != 0) {
        core_moloch_cpp_CMoloch_startMorph_FUN_00521230(this_ptr);
        return;
      }
    }
  }
  else {
    pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                       ((CMotionController *)&this_ptr->field_0x158);
    core_motion_cpp_CMotionController_jumpToMotionByName_FUN_00524ae0
              ((CMotionController *)&this_ptr->field_0x1ffac,(char *)pSVar3,
               *(float *)&this_ptr->field_0x160);
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00567580
              ((CDeformableModelInstance *)&this_ptr->field_0x1ffac);
    fVar1 = this_ptr->morph_timer + delta_time;
    this_ptr->morph_timer = fVar1;
    if (_DAT_00603ef8 < fVar1) {
      if (this_ptr->in_human_form == 0) {
        model_name = "moloch_h.dfm";
        this_ptr->in_human_form = 1;
        pcStack_24 = "moloch_d.dfm";
      }
      else {
        model_name = "moloch_d.dfm";
        this_ptr->in_human_form = 0;
        pcStack_24 = "moloch_h.dfm";
      }
      this_ptr_00 = &this_ptr->field_0x1ffac;
      this_ptr->morphing = 0;
      this_ptr->morph_timer = 0.0;
      core_skeleton_cpp_CDeformableModelInstance_getBoneTransform_FUN_0056acc0
                ((CDeformableModelInstance *)this_ptr_00,aSStack_1b5c);
      pSStack_14 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                             ((CMotionController *)this_ptr_00);
      this_ptr_01 = &this_ptr->field_0x158;
      fStack_2c = *(float *)&this_ptr->field_0x1ffb4;
      core_skeleton_cpp_CDeformableModelInstance_init_FUN_00569f50
                ((CDeformableModelInstance *)this_ptr_01,model_name);
      core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00569b20
                ((CDeformableModelInstance *)this_ptr_01);
      core_motion_cpp_CMotionController_jumpToMotionByName_FUN_00524ae0
                ((CMotionController *)this_ptr_01,(char *)pSStack_14,fStack_2c);
      core_skeleton_cpp_CDeformableModelInstance_init_FUN_00569f50
                ((CDeformableModelInstance *)this_ptr_00,pcStack_24);
      core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00569b20
                ((CDeformableModelInstance *)this_ptr_00);
      this_ptr_03 = &this_ptr->field_0x22424;
      core_morph_cpp_CMorph_setupModelFromDeformable_FUN_005230c0
                ((CMorph *)this_ptr_03,0,(CDeformableModelInstance *)this_ptr_01);
      core_morph_cpp_CMorph_setupModelFromDeformable_FUN_005230c0
                ((CMorph *)this_ptr_03,1,(CDeformableModelInstance *)this_ptr_00);
      core_morph_cpp_CMorph_getReady_FUN_00523310((CMorph *)this_ptr_03);
      return;
    }
  }
  return;
}
