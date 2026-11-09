// Name: core_colonel.cpp_FUN_00435830
// Address: 00435830
// Address Range: [[00435830, 00435e24]]
// Convention: unknown
// Signature: void core_colonel_cpp_FUN_00435830(CCharacter *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_colonel_cpp_FUN_00435830(CCharacter *param_1,float param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  float afStackY_18b0 [1522];
  CDeformableModelInstance *this_ptr;
  CQuaternion4f *source_quaternions;
  float fVar6;
  CCharacter *pCVar7;
  uint *puVar8;
  code *blend_callback;
  uint uStack_d4;
  float afStack_d0 [7];
  float fStack_b4;
  uint auStack_b0 [5];
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  uint uStack_90;
  uint uStack_8c;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  uint uStack_6c;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  uint auStack_48 [3];
  uint uStack_3c;
  uint uStack_30;
  int iStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar5 = 0;
  iVar3 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0(param_1,param_2);
  if (iVar3 == 0) {
    return;
  }
  fVar6 = *(float *)(param_1 + 1);
  *(float *)(param_1 + 1) = fVar6 - param_2;
  if (fVar6 - param_2 < 0.0) {
    *(uint *)(param_1 + 1) = 0;
  }
  *(uint *)&param_1->field_0x2510 = 0;
  *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
  *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
  core_colonel_cpp_FUN_00436420(param_1,param_2);
  if (*(int *)&param_1[1].field_0x4 == 2) {
    core_colonel_cpp_FUN_00435e30(param_1,param_2);
  }
  *(uint *)&param_1->field_0x2594 = *(uint *)&param_1->field_0x2510;
  core_charactr_cpp_FUN_0042b2a0(param_1,param_2);
  iVar3 = core_charactr_cpp_FUN_004287f0(param_1,param_2);
  if (iVar3 == 0) {
    iVar3 = core_motion_cpp_FUN_005035c0(&param_1->field_0x2b4);
    switch(*(uint *)(iVar3 + 0x24)) {
    case 0:
    case 1:
    case 2:
    case 3:
      if (*(int *)&param_1->field_0x2570 != 0) {
        iVar3 = 0;
        if (*(int *)&param_1[1].field_0x8 != 0) {
          if (*(int *)&param_1[1].field_0x10 == 0) {
            iVar3 = 1;
          }
          else {
            iVar3 = 2;
          }
        }
        if (*(int *)&param_1[1].field_0xc != 0) {
          iVar3 = 3;
        }
        if (*(int *)&param_1[1].field_0x20 != 0) {
          iVar4 = *(int *)&param_1[2].field_0x4180;
          *(uint *)&param_1[1].field_0x20 = 0;
          iVar3 = 0;
          *(uint *)&param_1[2].field_0x4180 = (uint)(iVar4 == 0);
        }
        if (*(int *)&param_1[1].field_0x14 != 0) {
          bVar2 = true;
          if ((*(int *)&param_1[2].field_0x4180 == 0) && (*(int *)&param_1[1].field_0x4 != 2)) {
            iVar4 = core_hero_cpp_FUN_004cec50(param_1);
            bVar2 = false;
            if (iVar4 != 0) goto LAB_00435c28;
            iVar4 = core_hero_cpp_FUN_004cf030(param_1,0);
            if ((iVar4 != 0) && (iVar4 != 1)) {
              core_hero_cpp_FUN_004cf230((CHero *)param_1);
            }
            if ((iVar4 != 0) ||
               (iVar4 = core_hero_cpp_CHero_tryTalkToNearbyCharacter_FUN_004cee90((CHero *)param_1),
               iVar4 != 0)) goto LAB_00435c28;
            iVar4 = core_hero_cpp_FUN_004cf2b0((CHero *)param_1);
            if (iVar4 != 0) {
              core_hero_cpp_FUN_004cf440(param_1);
              goto LAB_00435c28;
            }
          }
          else {
LAB_00435c28:
            if (!bVar2) goto LAB_00435c36;
          }
          *(uint *)&param_1[1].field_0x14 = 0;
        }
LAB_00435c36:
        *(float *)&param_1->field_0x2578 =
             *(float *)&param_1[1].field_0x30 * *(float *)&param_1->field_0x2598;
        iVar4 = core_motion_cpp_FUN_005035c0(&param_1->field_0x2b4);
        if (iVar3 != *(int *)(iVar4 + 0x24)) goto LAB_00435919;
      }
      break;
    case 6:
      goto switchD_00435cf7_caseD_6;
    }
  }
  else {
    uVar1 = *(uint *)&param_1->field_0x27ac;
    if (uVar1 < 2) {
      if (uVar1 == 1) {
        iVar3 = 1;
      }
      else {
LAB_00435b9d:
        iVar3 = 0;
      }
    }
    else {
      if (2 < uVar1) {
        if (uVar1 == 3) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)&param_1->field_0x2b4,0,1);
          engine_console_cpp_FUN_00436710(g_CConsolePtr,"%s confused while walking to scriptDest!\n",param_1)
          ;
          goto switchD_00435cf7_caseD_4;
        }
        goto LAB_00435b9d;
      }
      iVar3 = 2;
    }
LAB_00435919:
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)&param_1->field_0x2b4,iVar3,1);
  }
switchD_00435cf7_caseD_4:
  if (*(int *)&param_1->field_0x276c == 0) {
    core_charactr_cpp_FUN_00423a10(param_1,param_2);
    fStack_60 = *(float *)&param_1->field_0x2588 * param_2;
    fStack_5c = *(float *)&param_1->field_0x258c * param_2;
    fStack_58 = *(float *)&param_1->field_0x2590 * param_2;
    fStack_9c = fStack_60;
    auStack_b0[(uint)bVar5 * -2 + 6] = auStack_b0[(uint)bVar5 * -2 + 0x15];
    auStack_b0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
         auStack_b0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x16];
    fStack_54 = *(float *)&param_1->field_0x2508 + *(float *)&param_1->field_0x257c;
    fStack_50 = *(float *)&param_1->field_0x250c + *(float *)&param_1->field_0x2580;
    fStack_4c = *(float *)&param_1->field_0x2510 + *(float *)&param_1->field_0x2584;
    fStack_84 = fStack_54;
    auStack_b0[(uint)bVar5 * -2 + 0xc] = auStack_b0[(uint)bVar5 * -2 + 0x18];
    auStack_b0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd] =
         auStack_b0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x19];
    fStack_78 = fStack_84 + fStack_9c;
    fStack_74 = fStack_80 + fStack_98;
    fStack_70 = fStack_7c + fStack_94;
    fStack_b4 = fStack_84 + fStack_9c;
    auStack_b0[(uint)bVar5 * -2] = auStack_b0[(uint)bVar5 * -2 + 0xf];
    auStack_b0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         auStack_b0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x10];
    *(uint *)&param_1->field_0x2510 = 0;
    *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
    *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
    *(uint *)&param_1->field_0x2584 = 0;
    *(uint *)&param_1->field_0x2580 = *(uint *)&param_1->field_0x2584;
    *(uint *)&param_1->field_0x257c = *(uint *)&param_1->field_0x2580;
    core_charactr_cpp_FUN_00423a60(param_1,(CVector3f *)&fStack_b4);
  }
  else {
    if (*(int *)&param_1->field_0x2770 == 0) {
      core_actor_cpp_FUN_00408de0(param_1,*(int *)&param_1->field_0x276c + 0x20);
      auStack_b0[2] = uStack_6c;
      auStack_b0[(uint)bVar5 * -2 + 3] = auStack_b0[(uint)bVar5 * -2 + 0x12];
      auStack_b0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
           auStack_b0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x13];
      core_vecdir_cpp_FUN_005838f0(auStack_b0 + 2);
      uStack_90 = uStack_30;
      auStack_b0[(uint)bVar5 * -2 + 9] = auStack_b0[(uint)bVar5 * -2 + 0x21];
      auStack_b0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10] =
           auStack_b0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x22];
      fStack_14 = (float)core_actor_cpp_FUN_0040d0c0(uStack_8c);
      fStack_18 = fStack_14;
      if (fStack_14 < _DAT_005cdbe1) {
        fStack_18 = fStack_14 + _DAT_005cdbe5;
      }
      if (_DAT_005cdbe9 < fStack_18) {
        fStack_18 = fStack_18 + _DAT_005cdbed;
      }
      fStack_1c = param_2 * _DAT_005cdbe5;
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
    iStack_24 = *(int *)&param_1->field_0x276c;
    fStack_14 = *(float *)(iStack_24 + 0x2b0);
    core_skeleton_cpp_FUN_00546a90(&param_1->field_0x2b4,0);
    fVar6 = fStack_14;
    iVar3 = iStack_24;
    puVar8 = auStack_48;
    auStack_48[0] = uStack_3c;
    auStack_b0[(uint)bVar5 * -2 + 0x1b] = auStack_b0[(uint)bVar5 * -2 + 0x1e];
    pCVar7 = param_1;
    auStack_b0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x1c] =
         auStack_b0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x1f];
    iVar3 = (**(code **)((int)fVar6 + 0x118))(iVar3,pCVar7,puVar8);
    if (iVar3 == 0) {
      *(uint *)&param_1->field_0x276c = 0;
LAB_00435ad0:
      iVar3 = 0;
    }
    else {
      if (*(int *)&param_1->field_0x276c == 0) goto LAB_00435ad0;
      if (*(int *)&param_1[1].field_0x14 == 0) goto LAB_00435ae3;
      iVar3 = 9;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)&param_1->field_0x2b4,iVar3,1);
  }
LAB_00435ae3:
  core_charactr_cpp_FUN_00424470(param_1);
  this_ptr = (CDeformableModelInstance *)&param_1->field_0x2b4;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00(this_ptr);
  iVar3 = (**(code **)(*(int *)&param_1->field_0x2b0 + 0x114))(param_1);
  if (iVar3 == 0) {
    blend_callback = core_skeleton_cpp_FUN_00544cc0;
    fVar6 = *(float *)&param_1[2].field_0x4194;
    iVar3 = DAT_007c150c;
    core_xform_cpp_FUN_00594380(&param_1[2].field_0x4188);
    source_quaternions = (CQuaternion4f *)&uStack_d4;
    uStack_d4 = afStack_d0[3];
    afStack_d0[(uint)bVar5 * -2] = afStack_d0[(uint)bVar5 * -2 + 4];
    afStack_d0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         afStack_d0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 5];
    (afStack_d0 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
         (afStack_d0 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 5)[(uint)bVar5 * -2 + 1];
    core_skeleton_cpp_FUN_005466c0(this_ptr,source_quaternions,fVar6,iVar3,blend_callback);
  }
  core_charactr_cpp_FUN_00429e90(param_1,param_2);
switchD_00435cf7_caseD_6:
  return;
}
