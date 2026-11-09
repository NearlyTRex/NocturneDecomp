// Name: core_moloch.cpp_FUN_005204e0
// Address: 005204e0
// Address Range: [[005204e0, 00520c05]]
// Convention: unknown
// Signature: void core_moloch_cpp_FUN_005204e0(CMoloch *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_moloch_cpp_FUN_005204e0(CMoloch *param_1,float param_2)

{
  byte *this_ptr;
  byte *this_ptr_00;
  float fVar1;
  int iVar2;
  CMotionController *this_ptr_01;
  SMotion *pSVar3;
  byte *this_ptr_02;
  char *pcVar4;
  byte bVar5;
  uint uVar6;
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
  uint auStack_54 [3];
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
  
  bVar5 = 0;
  if (*(int *)&param_1->field_0x1ffa8 == 4) {
    return;
  }
  iVar2 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0((CCharacter *)param_1,param_2);
  if (iVar2 == 0) {
    return;
  }
  fVar1 = *(float *)&param_1->field_0xc1d0 - param_2;
  *(float *)&param_1->field_0xc1d0 = fVar1;
  if (fVar1 < 0.0) {
    *(uint *)&param_1->field_0xc1d0 = 0;
  }
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
  fStack_1b60 = param_2;
  while (0.0 < fStack_1b60) {
    iVar2 = core_motion_cpp_CMotionController_advance_FUN_00524270
                      ((CMotionController *)&param_1->field_0x158,&fStack_1b60);
    core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)param_1,iVar2);
  }
  *(uint *)&param_1->field_0x2524 = *(uint *)&param_1->field_0x24a4;
  core_charactr_cpp_FUN_00435320(param_1,param_2);
  iVar2 = core_charactr_cpp_FUN_00432240((CCharacter *)param_1,param_2);
  if (iVar2 == 0) {
    if (*(int *)&param_1->field_0xc1d4 == 2) {
      core_moloch_cpp_FUN_00520c10(param_1,param_2);
    }
    pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                       ((CMotionController *)&param_1->field_0x158);
    uVar6 = *(uint *)(pSVar3 + 0x24);
    if ((((uVar6 == 0) || (uVar6 < 2)) || (uVar6 == 2)) && (*(int *)&param_1->field_0x2500 != 0)) {
      uVar6 = (uint)(*(int *)&param_1->field_0xc1d8 != 0);
      if (*(int *)&param_1->field_0xc1dc != 0) {
        uVar6 = 2;
      }
      if (*(int *)&param_1->field_0xc1f0 != 0) {
        if (*(int *)&param_1->field_0x22354 == 0) {
          core_moloch_cpp_FUN_00521230(param_1);
        }
        *(uint *)&param_1->field_0xc1f0 = 0;
      }
      *(float *)&param_1->field_0x2508 =
           *(float *)&param_1->field_0xc200 * *(float *)&param_1->field_0x2528;
      pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                         ((CMotionController *)&param_1->field_0x158);
      if (uVar6 != *(uint *)(pSVar3 + 0x24)) goto LAB_005205c5;
    }
  }
  else {
    uVar6 = *(uint *)&param_1->field_0x273c;
    if (uVar6 < 2) {
      if (uVar6 == 1) goto LAB_005205c4;
LAB_00520855:
      uVar6 = 0;
    }
    else {
      if (2 < uVar6) {
        if (uVar6 == 3) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)&param_1->field_0x158,0,1);
          engine_console_cpp_FUN_00445430(g_CConsolePtr,"%s confused while walking to scriptDest!\n",param_1)
          ;
          goto LAB_005205cd;
        }
        goto LAB_00520855;
      }
LAB_005205c4:
      uVar6 = 1;
    }
LAB_005205c5:
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              ((CMotionController *)&param_1->field_0x158,uVar6,1);
  }
LAB_005205cd:
  if (*(int *)&param_1->field_0x26fc == 0) {
    core_charactr_cpp_FUN_0042d700(param_1,param_2);
    afStack_10a8[0x3fd] = *(float *)&param_1->field_0x2518 * param_2;
    afStack_10a8[0x3fe] = *(float *)&param_1->field_0x251c * param_2;
    afStack_10a8[0x3ff] = *(float *)&param_1->field_0x2520 * param_2;
    afStack_98[2] = afStack_10a8[0x3fd];
    afStack_98[(uint)bVar5 * -2 + 3] = afStack_10a8[(uint)bVar5 * -2 + 0x3fe];
    afStack_98[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
         afStack_10a8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x3ff];
    fStack_9c = *(float *)&param_1->field_0x249c + *(float *)&param_1->field_0x250c;
    afStack_98[0] = *(float *)&param_1->field_0x24a0 + *(float *)&param_1->field_0x2510;
    afStack_98[1] = *(float *)&param_1->field_0x24a4 + *(float *)&param_1->field_0x2514;
    fStack_78 = fStack_9c;
    afStack_98[(uint)bVar5 * -2 + 9] = afStack_98[(uint)bVar5 * 0xfffffffe];
    afStack_98[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10] =
         afStack_98[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
    fStack_48 = fStack_78 + afStack_98[2];
    fStack_44 = fStack_74 + afStack_98[3];
    fStack_40 = fStack_70 + fStack_88;
    CStack_a8._0_4_ = fStack_78 + afStack_98[2];
    *(float *)((int)&CStack_a8 + (uint)bVar5 * -8 + 4) = afStack_98[(uint)bVar5 * -2 + 0x15];
    *(float *)((int)&CStack_a8 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
         afStack_98[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x16];
    *(uint *)&param_1->field_0x24a4 = 0;
    *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
    *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
    *(uint *)&param_1->field_0x2514 = 0;
    *(uint *)&param_1->field_0x2510 = *(uint *)&param_1->field_0x2514;
    *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
    core_charactr_cpp_FUN_0042d750((CCharacter *)param_1,&CStack_a8);
    goto LAB_005207a4;
  }
  if (*(int *)&param_1->field_0x2700 == 0) {
    core_actor_cpp_FUN_00408bb0(param_1,*(int *)&param_1->field_0x26fc + 0x20);
    afStack_10a8[0x3fa] = (float)uStack_3c;
    afStack_10a8[(uint)bVar5 * -2 + 0x3fb] = afStack_98[(uint)bVar5 * -2 + 0x18];
    afStack_10a8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x3fc] =
         afStack_98[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x19];
    core_vecdir_cpp_FUN_005a7520(afStack_10a8 + 0x3fa);
    uStack_6c = uStack_84;
    afStack_98[(uint)bVar5 * -2 + 0xc] = afStack_98[(uint)bVar5 * -2 + 6];
    afStack_98[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd] =
         afStack_98[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
    pSStack_14 = (SMotion *)core_actor_cpp_FUN_0040cd60(uStack_68);
    fStack_18 = (float)pSStack_14;
    if ((float)pSStack_14 < _DAT_005ea282) {
      fStack_18 = (float)pSStack_14 + _DAT_005ea286;
    }
    if (_DAT_005ea28a < fStack_18) {
      fStack_18 = fStack_18 + _DAT_005ea28e;
    }
    fStack_1c = param_2 * _DAT_005ea286;
    fStack_20 = -fStack_1c;
    if (fStack_18 < fStack_20) {
      fStack_18 = fStack_20;
    }
    if (fStack_1c < fStack_18) {
      fStack_18 = fStack_1c;
    }
    *(float *)&param_1->field_0x34 = *(float *)&param_1->field_0x34 + fStack_18;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0((CDemonActor *)param_1);
  }
  iStack_30 = *(int *)&param_1->field_0x26fc;
  pSStack_14 = *(SMotion **)(iStack_30 + 0x154);
  pCStack_28 = (CMotionController *)&param_1->field_0x158;
  core_skeleton_cpp_FUN_00569130(pCStack_28,0);
  pSVar3 = pSStack_14;
  iVar2 = iStack_30;
  auStack_54[0] = uStack_60;
  afStack_98[(uint)bVar5 * -2 + 0x12] = afStack_98[(uint)bVar5 * -2 + 0xf];
  afStack_98[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x13] =
       afStack_98[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x10];
  iVar2 = (**(code **)((int)pSVar3 + 0x110))(iVar2,param_1,auStack_54);
  if (iVar2 == 0) {
    *(uint *)&param_1->field_0x26fc = 0;
LAB_00520791:
    this_ptr_01 = (CMotionController *)&param_1->field_0x158;
  }
  else {
    if (*(int *)&param_1->field_0x26fc == 0) goto LAB_00520791;
    this_ptr_01 = pCStack_28;
    if (*(int *)&param_1->field_0xc1e4 == 0) goto LAB_005207a4;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(this_ptr_01,0,1);
LAB_005207a4:
  core_charactr_cpp_FUN_0042e160((CCharacter *)param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
            ((CDeformableModelInstance *)&param_1->field_0x158);
  (**(code **)(*(int *)&param_1->field_0x154 + 0x10c))(param_1);
  core_charactr_cpp_FUN_00433e80((CCharacter *)param_1,param_2);
  if (*(int *)&param_1->field_0x22354 == 0) {
    if (*(int *)&param_1->field_0x22350 == 0) {
      iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                        (0x01C51D80,&param_1->field_0x223c0);
      if (iVar2 != 0) {
        core_moloch_cpp_FUN_00521230(param_1);
        return;
      }
    }
    else {
      iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                        (0x01C51D80,&param_1->field_0x2235c);
      if (iVar2 != 0) {
        core_moloch_cpp_FUN_00521230(param_1);
        return;
      }
    }
  }
  else {
    pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                       ((CMotionController *)&param_1->field_0x158);
    core_motion_cpp_CMotionController_jumpToMotionByName_FUN_00524ae0
              ((CMotionController *)&param_1->field_0x1ffac,(char *)pSVar3,
               *(float *)&param_1->field_0x160);
    core_skeleton_cpp_FUN_00567580((CDeformableModelInstance *)&param_1->field_0x1ffac);
    param_2 = *(float *)&param_1->field_0x22358 + param_2;
    *(float *)&param_1->field_0x22358 = param_2;
    if (_DAT_00603ef8 < param_2) {
      if (*(int *)&param_1->field_0x22350 == 0) {
        pcVar4 = "moloch_h.dfm";
        *(uint *)&param_1->field_0x22350 = 1;
        pcStack_24 = "moloch_d.dfm";
      }
      else {
        pcVar4 = "moloch_d.dfm";
        *(uint *)&param_1->field_0x22350 = 0;
        pcStack_24 = "moloch_h.dfm";
      }
      this_ptr = &param_1->field_0x1ffac;
      *(uint *)&param_1->field_0x22354 = 0;
      *(uint *)&param_1->field_0x22358 = 0;
      core_skeleton_cpp_FUN_0056acc0((CDeformableModelInstance *)this_ptr,aSStack_1b5c);
      pSStack_14 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                             ((CMotionController *)this_ptr);
      this_ptr_00 = &param_1->field_0x158;
      fStack_2c = *(float *)&param_1->field_0x1ffb4;
      core_skeleton_cpp_FUN_00569f50(this_ptr_00,pcVar4);
      core_skeleton_cpp_FUN_00569b20((CDeformableModelInstance *)this_ptr_00);
      core_motion_cpp_CMotionController_jumpToMotionByName_FUN_00524ae0
                ((CMotionController *)this_ptr_00,(char *)pSStack_14,fStack_2c);
      core_skeleton_cpp_FUN_00569f50(this_ptr,pcStack_24);
      core_skeleton_cpp_FUN_00569b20((CDeformableModelInstance *)this_ptr);
      this_ptr_02 = &param_1->field_0x22424;
      core_morph_cpp_CMorph_setupModelFromDeformable_FUN_005230c0
                ((CMorph *)this_ptr_02,0,(CDeformableModelInstance *)this_ptr_00);
      core_morph_cpp_CMorph_setupModelFromDeformable_FUN_005230c0
                ((CMorph *)this_ptr_02,1,(CDeformableModelInstance *)this_ptr);
      core_morph_cpp_CMorph_getReady_FUN_00523310((CMorph *)this_ptr_02);
      return;
    }
  }
  return;
}
