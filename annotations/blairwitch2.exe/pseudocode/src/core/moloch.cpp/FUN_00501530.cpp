// Name: core_moloch.cpp_FUN_00501530
// Address: 00501530
// Address Range: [[00501530, 00501c55]]
// Convention: unknown
// Signature: void core_moloch_cpp_FUN_00501530(CMoloch *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_moloch_cpp_FUN_00501530(CMoloch *param_1,float param_2)

{
  byte *this_ptr;
  byte *this_ptr_00;
  float fVar1;
  int iVar2;
  CMotionController *this_ptr_01;
  char *pcVar3;
  byte *this_ptr_02;
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
  char *pcStack_14;
  
  bVar4 = 0;
  if (*(int *)&param_1->field_0x25638 == 4) {
    return;
  }
  iVar2 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0((CCharacter *)param_1,param_2);
  if (iVar2 == 0) {
    return;
  }
  fVar1 = *(float *)&param_1->field_0x10a60 - param_2;
  *(float *)&param_1->field_0x10a60 = fVar1;
  if (fVar1 < 0.0) {
    *(uint *)&param_1->field_0x10a60 = 0;
  }
  *(uint *)&param_1->field_0x2510 = 0;
  *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
  *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
  fStack_1b60 = param_2;
  while (0.0 < fStack_1b60) {
    iVar2 = core_motion_cpp_CMotionController_advance_FUN_005030c0
                      ((CMotionController *)&param_1->field_0x2b4,&fStack_1b60);
    core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)param_1,iVar2);
  }
  *(uint *)&param_1->field_0x2594 = *(uint *)&param_1->field_0x2510;
  core_charactr_cpp_FUN_0042b2a0(param_1,param_2);
  iVar2 = core_charactr_cpp_FUN_004287f0((CCharacter *)param_1,param_2);
  if (iVar2 == 0) {
    if (*(int *)&param_1->field_0x10a64 == 2) {
      core_moloch_cpp_FUN_00501c60(param_1,param_2);
    }
    iVar2 = core_motion_cpp_FUN_005035c0(&param_1->field_0x2b4);
    uVar5 = *(uint *)(iVar2 + 0x24);
    if ((((uVar5 == 0) || (uVar5 < 2)) || (uVar5 == 2)) && (*(int *)&param_1->field_0x2570 != 0)) {
      uVar5 = (uint)(*(int *)&param_1->field_0x10a68 != 0);
      if (*(int *)&param_1->field_0x10a6c != 0) {
        uVar5 = 2;
      }
      if (*(int *)&param_1->field_0x10a80 != 0) {
        if (*(int *)&param_1->field_0x278f8 == 0) {
          core_moloch_cpp_FUN_00502280(param_1);
        }
        *(uint *)&param_1->field_0x10a80 = 0;
      }
      *(float *)&param_1->field_0x2578 =
           *(float *)&param_1->field_0x10a90 * *(float *)&param_1->field_0x2598;
      iVar2 = core_motion_cpp_FUN_005035c0(&param_1->field_0x2b4);
      if (uVar5 != *(uint *)(iVar2 + 0x24)) goto LAB_00501615;
    }
  }
  else {
    uVar5 = *(uint *)&param_1->field_0x27ac;
    if (uVar5 < 2) {
      if (uVar5 == 1) goto LAB_00501614;
LAB_005018a5:
      uVar5 = 0;
    }
    else {
      if (2 < uVar5) {
        if (uVar5 == 3) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)&param_1->field_0x2b4,0,1);
          engine_console_cpp_FUN_00436710(g_CConsolePtr,"%s confused while walking to scriptDest!\n",param_1)
          ;
          goto LAB_0050161d;
        }
        goto LAB_005018a5;
      }
LAB_00501614:
      uVar5 = 1;
    }
LAB_00501615:
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)&param_1->field_0x2b4,uVar5,1);
  }
LAB_0050161d:
  if (*(int *)&param_1->field_0x276c == 0) {
    core_charactr_cpp_FUN_00423a10(param_1,param_2);
    afStack_10a8[0x3fd] = *(float *)&param_1->field_0x2588 * param_2;
    afStack_10a8[0x3fe] = *(float *)&param_1->field_0x258c * param_2;
    afStack_10a8[0x3ff] = *(float *)&param_1->field_0x2590 * param_2;
    afStack_98[2] = afStack_10a8[0x3fd];
    afStack_98[(uint)bVar4 * -2 + 3] = afStack_10a8[(uint)bVar4 * -2 + 0x3fe];
    afStack_98[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
         afStack_10a8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x3ff];
    fStack_9c = *(float *)&param_1->field_0x2508 + *(float *)&param_1->field_0x257c;
    afStack_98[0] = *(float *)&param_1->field_0x250c + *(float *)&param_1->field_0x2580;
    afStack_98[1] = *(float *)&param_1->field_0x2510 + *(float *)&param_1->field_0x2584;
    fStack_78 = fStack_9c;
    afStack_98[(uint)bVar4 * -2 + 9] = afStack_98[(uint)bVar4 * 0xfffffffe];
    afStack_98[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10] =
         afStack_98[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    fStack_48 = fStack_78 + afStack_98[2];
    fStack_44 = fStack_74 + afStack_98[3];
    fStack_40 = fStack_70 + fStack_88;
    CStack_a8._0_4_ = fStack_78 + afStack_98[2];
    *(float *)((int)&CStack_a8 + (uint)bVar4 * -8 + 4) = afStack_98[(uint)bVar4 * -2 + 0x15];
    *(float *)((int)&CStack_a8 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
         afStack_98[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x16];
    *(uint *)&param_1->field_0x2510 = 0;
    *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
    *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
    *(uint *)&param_1->field_0x2584 = 0;
    *(uint *)&param_1->field_0x2580 = *(uint *)&param_1->field_0x2584;
    *(uint *)&param_1->field_0x257c = *(uint *)&param_1->field_0x2580;
    core_charactr_cpp_FUN_00423a60((CCharacter *)param_1,&CStack_a8);
    goto LAB_005017f4;
  }
  if (*(int *)&param_1->field_0x2770 == 0) {
    core_actor_cpp_FUN_00408de0(param_1,*(int *)&param_1->field_0x276c + 0x20);
    afStack_10a8[0x3fa] = (float)uStack_3c;
    afStack_10a8[(uint)bVar4 * -2 + 0x3fb] = afStack_98[(uint)bVar4 * -2 + 0x18];
    afStack_10a8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x3fc] =
         afStack_98[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x19];
    core_vecdir_cpp_FUN_005838f0(afStack_10a8 + 0x3fa);
    uStack_6c = uStack_84;
    afStack_98[(uint)bVar4 * -2 + 0xc] = afStack_98[(uint)bVar4 * -2 + 6];
    afStack_98[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd] =
         afStack_98[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
    pcStack_14 = (char *)core_actor_cpp_FUN_0040d0c0(uStack_68);
    fStack_18 = (float)pcStack_14;
    if ((float)pcStack_14 < _DAT_005df235) {
      fStack_18 = (float)pcStack_14 + _DAT_005df239;
    }
    if (_DAT_005df23d < fStack_18) {
      fStack_18 = fStack_18 + _DAT_005df241;
    }
    fStack_1c = param_2 * _DAT_005df239;
    fStack_20 = -fStack_1c;
    if (fStack_18 < fStack_20) {
      fStack_18 = fStack_20;
    }
    if (fStack_1c < fStack_18) {
      fStack_18 = fStack_1c;
    }
    *(float *)&param_1->field_0x34 = *(float *)&param_1->field_0x34 + fStack_18;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0((CDemonActor *)param_1);
  }
  iStack_30 = *(int *)&param_1->field_0x276c;
  pcStack_14 = *(char **)(iStack_30 + 0x2b0);
  pCStack_28 = (CMotionController *)&param_1->field_0x2b4;
  core_skeleton_cpp_FUN_00546a90(pCStack_28,0);
  pcVar3 = pcStack_14;
  iVar2 = iStack_30;
  auStack_54[0] = uStack_60;
  afStack_98[(uint)bVar4 * -2 + 0x12] = afStack_98[(uint)bVar4 * -2 + 0xf];
  afStack_98[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x13] =
       afStack_98[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x10];
  iVar2 = (**(code **)((int)pcVar3 + 0x118))(iVar2,param_1,auStack_54);
  if (iVar2 == 0) {
    *(uint *)&param_1->field_0x276c = 0;
LAB_005017e1:
    this_ptr_01 = (CMotionController *)&param_1->field_0x2b4;
  }
  else {
    if (*(int *)&param_1->field_0x276c == 0) goto LAB_005017e1;
    this_ptr_01 = pCStack_28;
    if (*(int *)&param_1->field_0x10a74 == 0) goto LAB_005017f4;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(this_ptr_01,0,1);
LAB_005017f4:
  core_charactr_cpp_FUN_00424470((CCharacter *)param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00
            ((CDeformableModelInstance *)&param_1->field_0x2b4);
  (**(code **)(*(int *)&param_1->field_0x2b0 + 0x114))(param_1);
  core_charactr_cpp_FUN_00429e90((CCharacter *)param_1,param_2);
  if (*(int *)&param_1->field_0x278f8 == 0) {
    if (*(int *)&param_1->field_0x278f4 == 0) {
      iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                        (0x01C38BC0,&param_1->field_0x27964);
      if (iVar2 != 0) {
        core_moloch_cpp_FUN_00502280(param_1);
        return;
      }
    }
    else {
      iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                        (0x01C38BC0,&param_1->field_0x27900);
      if (iVar2 != 0) {
        core_moloch_cpp_FUN_00502280(param_1);
        return;
      }
    }
  }
  else {
    pcVar3 = (char *)core_motion_cpp_FUN_005035c0(&param_1->field_0x2b4);
    core_motion_cpp_CMotionController_jumpToMotionByName_FUN_00503950
              ((CMotionController *)&param_1->field_0x25640,pcVar3,*(float *)&param_1->field_0x2bc);
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00544ee0
              ((CDeformableModelInstance *)&param_1->field_0x25640);
    param_2 = *(float *)&param_1->field_0x278fc + param_2;
    *(float *)&param_1->field_0x278fc = param_2;
    if (_DAT_005fa3d8 < param_2) {
      if (*(int *)&param_1->field_0x278f4 == 0) {
        pcVar3 = "moloch_h.dfm";
        *(uint *)&param_1->field_0x278f4 = 1;
        pcStack_24 = "moloch_d.dfm";
      }
      else {
        pcVar3 = "moloch_d.dfm";
        *(uint *)&param_1->field_0x278f4 = 0;
        pcStack_24 = "moloch_h.dfm";
      }
      this_ptr = &param_1->field_0x25640;
      *(uint *)&param_1->field_0x278f8 = 0;
      *(uint *)&param_1->field_0x278fc = 0;
      core_skeleton_cpp_FUN_00548620((CDeformableModelInstance *)this_ptr,aSStack_1b5c);
      pcStack_14 = (char *)core_motion_cpp_FUN_005035c0(this_ptr);
      this_ptr_00 = &param_1->field_0x2b4;
      fStack_2c = *(float *)&param_1->field_0x25648;
      core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
                ((CDeformableModelInstance *)this_ptr_00,pcVar3);
      core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00547480
                ((CDeformableModelInstance *)this_ptr_00);
      core_motion_cpp_CMotionController_jumpToMotionByName_FUN_00503950
                ((CMotionController *)this_ptr_00,pcStack_14,fStack_2c);
      core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
                ((CDeformableModelInstance *)this_ptr,pcStack_24);
      core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00547480
                ((CDeformableModelInstance *)this_ptr);
      this_ptr_02 = &param_1->field_0x279c8;
      core_morph_cpp_CMorph_setupModelFromDeformable_FUN_005b6f80
                ((CMorph *)this_ptr_02,0,(CDeformableModelInstance *)this_ptr_00);
      core_morph_cpp_CMorph_setupModelFromDeformable_FUN_005b6f80
                ((CMorph *)this_ptr_02,1,(CDeformableModelInstance *)this_ptr);
      core_morph_cpp_CMorph_getReady_FUN_005b71d0((CMorph *)this_ptr_02);
      return;
    }
  }
  return;
}
