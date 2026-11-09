// Name: core_svetlana.cpp_FUN_00570510
// Address: 00570510
// Address Range: [[00570510, 00570c77]]
// Convention: unknown
// Signature: void core_svetlana_cpp_FUN_00570510(CSvetlana *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_svetlana_cpp_FUN_00570510(CSvetlana *param_1,float param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  float afStackY_18ac [1521];
  CDeformableModelInstance *this_ptr;
  CQuaternion4f *source_quaternions;
  float fVar6;
  float *pfVar7;
  code *blend_callback;
  uint uStack_d0;
  float afStack_cc [7];
  uint auStack_b0 [3];
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  uint auStack_98 [3];
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  uint uStack_80;
  float afStack_7c [4];
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  uint uStack_5c;
  uint uStack_50;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  uint uStack_38;
  int iStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar5 = 0;
  if ((*(float *)&param_1->field_0x25a8 < (float)_DAT_005ec2fb) &&
     (fVar6 = *(float *)&param_1->field_0x25a8 + param_2, *(float *)&param_1->field_0x25a8 = fVar6,
     (float)_DAT_005ec2fb < fVar6)) {
    *(uint *)&param_1->field_0x25a8 = 0x42c80000;
  }
  iVar2 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0((CCharacter *)param_1,param_2);
  if ((iVar2 == 0) || (*(int *)&param_1->field_0x25638 == 4)) {
switchD_0057096f_caseD_9:
    return;
  }
  core_charactr_cpp_FUN_0042a7a0((CCharacter *)param_1,param_2);
  core_charactr_cpp_FUN_0042b2a0(param_1,param_2);
  fVar6 = *(float *)&param_1->field_0x10a60 - param_2;
  *(float *)&param_1->field_0x10a60 = fVar6;
  if (fVar6 < 0.0) {
    *(uint *)&param_1->field_0x10a60 = 0;
  }
  *(uint *)&param_1->field_0x2510 = 0;
  *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
  *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
  core_svetlana_cpp_FUN_00571460(param_1,param_2);
  *(uint *)&param_1->field_0x2594 = *(uint *)&param_1->field_0x2510;
  iVar2 = core_charactr_cpp_FUN_004287f0((CCharacter *)param_1,param_2);
  if (iVar2 == 0) {
    if (*(int *)&param_1->field_0x10a64 == 2) {
      core_svetlana_cpp_FUN_00570c80(param_1,param_2);
    }
    iVar2 = core_motion_cpp_FUN_005035c0(&param_1->field_0x2b4);
    switch(*(uint *)(iVar2 + 0x24)) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 10:
      if (*(int *)&param_1->field_0x2570 != 0) {
        iVar2 = 0;
        if (*(int *)&param_1->field_0x25640 != 0) {
          iVar2 = 10;
        }
        if (*(int *)&param_1->field_0x10a68 != 0) {
          if (*(int *)&param_1->field_0x10a70 == 0) {
            iVar2 = 1;
          }
          else {
            iVar2 = 2;
          }
        }
        if (*(int *)&param_1->field_0x10a6c != 0) {
          iVar2 = 3;
        }
        if (*(int *)&param_1->field_0x10a80 != 0) {
          *(uint *)&param_1->field_0x10a80 = 0;
          uVar3 = (uint)(*(int *)&param_1->field_0x25640 == 0);
          *(uint *)&param_1->field_0x25640 = uVar3;
          if (uVar3 == 0) {
            iVar2 = 0;
          }
          else {
            iVar2 = 10;
          }
        }
        if (*(int *)&param_1->field_0x10a74 != 0) {
          bVar1 = true;
          if ((*(int *)&param_1->field_0x25640 == 0) && (*(int *)&param_1->field_0x10a64 != 2)) {
            iVar4 = core_hero_cpp_FUN_004cec50(param_1);
            bVar1 = false;
            if (iVar4 != 0) goto LAB_00570a09;
            iVar4 = core_hero_cpp_FUN_004cf030(param_1,0);
            if ((iVar4 != 0) && (iVar4 != 1)) {
              core_hero_cpp_FUN_004cf230((CHero *)param_1);
            }
            if ((iVar4 != 0) ||
               (iVar4 = core_hero_cpp_CHero_tryTalkToNearbyCharacter_FUN_004cee90((CHero *)param_1),
               iVar4 != 0)) goto LAB_00570a09;
            iVar4 = core_hero_cpp_FUN_004cf2b0((CHero *)param_1);
            if (iVar4 != 0) {
              core_hero_cpp_FUN_004cf440(param_1);
              goto LAB_00570a09;
            }
          }
          else {
LAB_00570a09:
            if (!bVar1) goto LAB_00570a2a;
          }
          *(uint *)&param_1->field_0x10a74 = 0;
          if (*(int *)&param_1->field_0x25644 == 0) {
            iVar2 = 0xf;
          }
          else {
            iVar2 = 0xe;
          }
        }
LAB_00570a2a:
        *(float *)&param_1->field_0x2578 =
             *(float *)&param_1->field_0x10a90 * *(float *)&param_1->field_0x2598;
        iVar4 = core_motion_cpp_FUN_005035c0(&param_1->field_0x2b4);
        if (iVar2 != *(int *)(iVar4 + 0x24)) goto LAB_00570663;
      }
      break;
    case 9:
      goto switchD_0057096f_caseD_9;
    }
  }
  else {
    iVar2 = core_motion_cpp_FUN_005035c0(&param_1->field_0x2b4);
    if ((*(int *)(iVar2 + 0x24) != 0x1a) && (*(int *)(iVar2 + 0x24) != 0x1b)) {
      *(uint *)&param_1->field_0x2510 = 0;
      *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
      *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
    }
    uVar3 = *(uint *)&param_1->field_0x27ac;
    if (uVar3 < 2) {
      if (uVar3 == 1) {
        iVar2 = 1;
      }
      else {
LAB_0057092b:
        iVar2 = 0;
      }
    }
    else {
      if (2 < uVar3) {
        if (uVar3 == 3) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)&param_1->field_0x2b4,0,1);
          engine_console_cpp_FUN_00436710(g_CConsolePtr,"%s confused while walking to scriptDest!\n",param_1)
          ;
          goto switchD_0057096f_caseD_4;
        }
        goto LAB_0057092b;
      }
      iVar2 = 2;
    }
LAB_00570663:
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)&param_1->field_0x2b4,iVar2,1);
  }
switchD_0057096f_caseD_4:
  if (*(int *)&param_1->field_0x276c == 0) {
    fStack_8c = *(float *)&param_1->field_0x2508;
    fStack_88 = *(float *)&param_1->field_0x250c;
    fStack_84 = *(float *)&param_1->field_0x2510;
    iVar2 = core_motion_cpp_FUN_005035c0(&param_1->field_0x2b4);
    if (*(int *)(iVar2 + 0x24) != 0x1a) {
      core_charactr_cpp_FUN_00423a10(param_1,param_2);
    }
    afStack_7c[2] = *(float *)&param_1->field_0x2588 * param_2;
    afStack_7c[3] = *(float *)&param_1->field_0x258c * param_2;
    fStack_6c = *(float *)&param_1->field_0x2590 * param_2;
    fStack_44 = afStack_7c[2];
    afStack_7c[(uint)bVar5 * -2 + 0xf] = afStack_7c[(uint)bVar5 * -2 + 3];
    afStack_7c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x10] =
         afStack_7c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
    fStack_68 = fStack_44 + *(float *)&param_1->field_0x257c;
    fStack_64 = fStack_40 + *(float *)&param_1->field_0x2580;
    fStack_60 = fStack_3c + *(float *)&param_1->field_0x2584;
    fStack_a4 = fStack_68;
    afStack_cc[(uint)bVar5 * -2 + 0xb] = afStack_7c[(uint)bVar5 * -2 + 6];
    afStack_cc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xc] =
         afStack_7c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
    fStack_8c = fStack_8c + fStack_a4;
    fStack_88 = fStack_88 + fStack_a0;
    fStack_84 = fStack_84 + fStack_9c;
    iVar2 = core_motion_cpp_FUN_005035c0(&param_1->field_0x2b4);
    iVar2 = *(int *)(iVar2 + 0x24);
    if ((((iVar2 != 0x17) && (iVar2 != 0x18)) && (iVar2 != 0x19)) &&
       (((iVar2 != 0x25 && (iVar2 != 0x26)) && ((iVar2 != 0x27 && (iVar2 != 0x28)))))) {
      core_charactr_cpp_FUN_00423a60((CCharacter *)param_1,(CVector3f *)&fStack_8c);
    }
    iVar2 = core_motion_cpp_FUN_005035c0(&param_1->field_0x2b4);
    if (*(int *)(iVar2 + 0x24) == 0x1a) {
      *(float *)&param_1->field_0x24 =
           param_2 * (float)_DAT_005ec303 + *(float *)&param_1->field_0x24;
    }
    goto LAB_00570827;
  }
  if (*(int *)&param_1->field_0x2770 == 0) {
    core_actor_cpp_FUN_00408de0(param_1,*(int *)&param_1->field_0x276c + 0x20);
    auStack_98[0] = uStack_5c;
    afStack_cc[(uint)bVar5 * -2 + 0xe] = afStack_7c[(uint)bVar5 * -2 + 9];
    afStack_cc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xf] =
         afStack_7c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10];
    core_vecdir_cpp_FUN_005838f0(afStack_cc + 0xd);
    uStack_80 = uStack_50;
    afStack_7c[(uint)bVar5 * -2] = afStack_7c[(uint)bVar5 * -2 + 0xc];
    afStack_7c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         afStack_7c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd];
    fStack_14 = (float)core_actor_cpp_FUN_0040d0c0(afStack_7c[0]);
    fStack_18 = fStack_14;
    if (fStack_14 < _DAT_005ec30b) {
      fStack_18 = fStack_14 + _DAT_005ec30f;
    }
    if (_DAT_005ec313 < fStack_18) {
      fStack_18 = fStack_18 + _DAT_005ec317;
    }
    fStack_1c = param_2 * _DAT_005ec30f;
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
  pfVar7 = afStack_cc + 7;
  auStack_b0[0] = uStack_38;
  afStack_cc[(uint)bVar5 * -2 + 8] = afStack_7c[(uint)bVar5 * -2 + 0x12];
  afStack_cc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 9] =
       afStack_7c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x13];
  iVar2 = (**(code **)((int)fStack_14 + 0x118))(iStack_24,param_1,pfVar7);
  if (iVar2 == 0) {
    *(uint *)&param_1->field_0x276c = 0;
LAB_00570814:
    iVar2 = 0;
  }
  else {
    if (*(int *)&param_1->field_0x276c == 0) goto LAB_00570814;
    if (*(int *)&param_1->field_0x10a74 == 0) goto LAB_00570827;
    iVar2 = 0x10;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            ((CMotionController *)&param_1->field_0x2b4,iVar2,1);
LAB_00570827:
  core_charactr_cpp_FUN_00424470((CCharacter *)param_1);
  this_ptr = (CDeformableModelInstance *)&param_1->field_0x2b4;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00(this_ptr);
  iVar2 = (**(code **)(*(int *)&param_1->field_0x2b0 + 0x114))(param_1);
  if (iVar2 == 0) {
    blend_callback = core_skeleton_cpp_FUN_00544cc0;
    fVar6 = *(float *)&param_1->field_0x9acb8;
    iVar2 = _DAT_0264bf38;
    core_xform_cpp_FUN_00594380(&param_1->field_0x9acac);
    source_quaternions = (CQuaternion4f *)&uStack_d0;
    uStack_d0 = afStack_cc[3];
    afStack_cc[(uint)bVar5 * -2] = afStack_cc[(uint)bVar5 * -2 + 4];
    afStack_cc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         afStack_cc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 5];
    (afStack_cc + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
         (afStack_cc + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 5)[(uint)bVar5 * -2 + 1];
    core_skeleton_cpp_FUN_005466c0(this_ptr,source_quaternions,fVar6,iVar2,blend_callback);
  }
  core_charactr_cpp_FUN_00429e90((CCharacter *)param_1,param_2);
  core_cloth_cpp_CCloth_process_FUN_005afdf0
            ((CCloth *)&param_1->field_0x25648,(CVector3f *)&param_1->field_0x20,
             (CVector3f *)&param_1->field_0x30,param_2,*(float *)&param_1->field_0x2574,
             (CDeformableModelInstance *)&param_1->field_0x2b4);
  core_cloth_cpp_CCloth_process_FUN_005afdf0
            ((CCloth *)&param_1->field_0x60178,(CVector3f *)&param_1->field_0x20,
             (CVector3f *)&param_1->field_0x30,param_2,*(float *)&param_1->field_0x2574,
             (CDeformableModelInstance *)&param_1->field_0x2b4);
  return;
}
