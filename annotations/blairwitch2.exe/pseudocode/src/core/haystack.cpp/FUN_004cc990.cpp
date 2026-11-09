// Name: core_haystack.cpp_FUN_004cc990
// Address: 004cc990
// Address Range: [[004cc990, 004ccfe3]]
// Convention: unknown
// Signature: void core_haystack_cpp_FUN_004cc990(CCharacter *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_haystack_cpp_FUN_004cc990(CCharacter *param_1,float param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  float afStackY_1898 [1522];
  CDeformableModelInstance *this_ptr;
  CQuaternion4f *source_quaternions;
  float fVar6;
  float *pfVar7;
  code *blend_callback;
  CVector3f *velocity;
  uint uStack_bc;
  uint uStack_ac;
  float afStack_a8 [6];
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float afStack_80 [5];
  float fStack_6c;
  float fStack_68;
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
  
  bVar5 = 0;
  iVar2 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0(param_1,param_2);
  if (iVar2 == 0) {
    return;
  }
  if (*(int *)&param_1[1].field_0x4 == 2) {
    core_haystack_cpp_FUN_004ccff0(param_1,param_2);
  }
  core_charactr_cpp_FUN_0042b2a0(param_1,param_2);
  fVar6 = *(float *)(param_1 + 1);
  *(float *)(param_1 + 1) = fVar6 - param_2;
  if (fVar6 - param_2 < 0.0) {
    *(uint *)(param_1 + 1) = 0;
  }
  *(uint *)&param_1->field_0x2510 = 0;
  *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
  *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
  core_haystack_cpp_FUN_004cd660(param_1,param_2);
  iVar2 = core_charactr_cpp_FUN_004287f0(param_1,param_2);
  if (iVar2 == 0) {
    iVar2 = core_motion_cpp_FUN_005035c0(&param_1->field_0x2b4);
    switch(*(uint *)(iVar2 + 0x24)) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 10:
      if (*(int *)&param_1->field_0x2570 != 0) {
        iVar2 = 0;
        if (*(int *)&param_1[2].field_0x4180 != 0) {
          iVar2 = 10;
        }
        if (*(int *)&param_1[1].field_0x8 != 0) {
          if (*(int *)&param_1[1].field_0x10 == 0) {
            iVar2 = 1;
          }
          else {
            iVar2 = 2;
          }
        }
        if (*(int *)&param_1[1].field_0xc != 0) {
          iVar2 = 3;
        }
        if (*(int *)&param_1[1].field_0x20 != 0) {
          iVar2 = *(int *)&param_1[2].field_0x4180;
          *(uint *)&param_1[1].field_0x20 = 0;
          uVar3 = (uint)(iVar2 == 0);
          *(uint *)&param_1[2].field_0x4180 = uVar3;
          if (uVar3 == 0) {
            iVar2 = 0;
          }
          else {
            iVar2 = 10;
          }
        }
        if (*(int *)&param_1[1].field_0x14 != 0) {
          bVar1 = true;
          if ((*(int *)&param_1[2].field_0x4180 == 0) && (*(int *)&param_1[1].field_0x4 != 2)) {
            iVar4 = core_hero_cpp_FUN_004cec50(param_1);
            bVar1 = false;
            if (iVar4 != 0) goto LAB_004ccd9f;
            iVar4 = core_hero_cpp_FUN_004cf030(param_1,0);
            if ((iVar4 != 0) && (iVar4 != 1)) {
              core_hero_cpp_FUN_004cf230((CHero *)param_1);
            }
            if ((iVar4 != 0) ||
               (iVar4 = core_hero_cpp_CHero_tryTalkToNearbyCharacter_FUN_004cee90((CHero *)param_1),
               iVar4 != 0)) goto LAB_004ccd9f;
            iVar4 = core_hero_cpp_FUN_004cf2b0((CHero *)param_1);
            if (iVar4 != 0) {
              core_hero_cpp_FUN_004cf440(param_1);
              goto LAB_004ccd9f;
            }
          }
          else {
LAB_004ccd9f:
            if (!bVar1) goto LAB_004ccdc0;
          }
          iVar2 = *(int *)&param_1[2].field_0x4184;
          *(uint *)&param_1[1].field_0x14 = 0;
          if (iVar2 == 0) {
            iVar2 = 0xf;
          }
          else {
            iVar2 = 0xe;
          }
        }
LAB_004ccdc0:
        *(float *)&param_1->field_0x2578 =
             *(float *)&param_1[1].field_0x30 * *(float *)&param_1->field_0x2598;
        iVar4 = core_motion_cpp_FUN_005035c0(&param_1->field_0x2b4);
        if (iVar2 != *(int *)(iVar4 + 0x24)) goto LAB_004cca5f;
      }
      break;
    case 9:
      goto switchD_004cce93_caseD_9;
    }
  }
  else {
    uVar3 = *(uint *)&param_1->field_0x27ac;
    if (uVar3 < 2) {
      if (uVar3 == 1) {
        iVar2 = 1;
      }
      else {
LAB_004cccfd:
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
          goto switchD_004cce93_caseD_4;
        }
        goto LAB_004cccfd;
      }
      iVar2 = 2;
    }
LAB_004cca5f:
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)&param_1->field_0x2b4,iVar2,1);
  }
switchD_004cce93_caseD_4:
  if (*(int *)&param_1->field_0x276c == 0) {
    core_charactr_cpp_FUN_00423a10(param_1,param_2);
    fStack_90 = *(float *)&param_1->field_0x2508 + *(float *)&param_1->field_0x257c;
    fStack_8c = *(float *)&param_1->field_0x250c + *(float *)&param_1->field_0x2580;
    fStack_88 = *(float *)&param_1->field_0x2510 + *(float *)&param_1->field_0x2584;
    fStack_84 = fStack_90;
    afStack_80[(uint)bVar5 * -2] = afStack_a8[(uint)bVar5 * -2 + 7];
    afStack_80[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         afStack_a8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 8];
    *(uint *)&param_1->field_0x2510 = 0;
    *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
    *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
    *(uint *)&param_1->field_0x2584 = 0;
    *(uint *)&param_1->field_0x2580 = *(uint *)&param_1->field_0x2584;
    *(uint *)&param_1->field_0x257c = *(uint *)&param_1->field_0x2584;
    iVar2 = core_motion_cpp_FUN_005035c0(&param_1->field_0x2b4);
    if ((*(int *)(iVar2 + 0x24) == 0xe) || (*(int *)(iVar2 + 0x24) == 0xf)) {
      afStack_80[0] = 0.0;
      fStack_84 = 0.0;
      afStack_80[1] = 0.0;
    }
    fStack_6c = *(float *)&param_1->field_0x2588 * param_2;
    velocity = (CVector3f *)&fStack_84;
    fStack_68 = *(float *)&param_1->field_0x258c * param_2;
    fStack_64 = *(float *)&param_1->field_0x2590 * param_2;
    fStack_30 = fStack_6c;
    afStack_80[(uint)bVar5 * -2 + 0x15] = afStack_80[(uint)bVar5 * -2 + 6];
    afStack_80[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x16] =
         afStack_80[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
    fStack_84 = fStack_84 + fStack_30;
    afStack_80[0] = afStack_80[0] + fStack_2c;
    afStack_80[1] = afStack_80[1] + fStack_28;
    core_charactr_cpp_FUN_00423a60(param_1,velocity);
  }
  else {
    if (*(int *)&param_1->field_0x2770 == 0) {
      core_actor_cpp_FUN_00408de0(param_1,*(int *)&param_1->field_0x276c + 0x20);
      afStack_60[0] = (float)uStack_54;
      afStack_80[(uint)bVar5 * -2 + 9] = afStack_80[(uint)bVar5 * -2 + 0xc];
      afStack_80[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10] =
           afStack_80[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd];
      core_vecdir_cpp_FUN_005838f0(afStack_80 + 8);
      afStack_80[2] = (float)uStack_48;
      afStack_80[(uint)bVar5 * -2 + 3] = afStack_80[(uint)bVar5 * -2 + 0xf];
      afStack_80[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
           afStack_80[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x10];
      fStack_14 = (float)core_actor_cpp_FUN_0040d0c0(afStack_80[3]);
      fStack_1c = fStack_14;
      if (fStack_14 < _DAT_005d9932) {
        fStack_1c = fStack_14 + _DAT_005d9936;
      }
      if (_DAT_005d993a < fStack_1c) {
        fStack_1c = fStack_1c + _DAT_005d993e;
      }
      fStack_24 = param_2 * _DAT_005d9936;
      fStack_18 = -fStack_24;
      if (fStack_1c < fStack_18) {
        fStack_1c = fStack_18;
      }
      if (fStack_24 < fStack_1c) {
        fStack_1c = fStack_24;
      }
      *(float *)&param_1->field_0x34 = *(float *)&param_1->field_0x34 + fStack_1c;
      core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0((CDemonActor *)param_1);
    }
    iStack_20 = *(int *)&param_1->field_0x276c;
    fStack_14 = *(float *)(iStack_20 + 0x2b0);
    core_skeleton_cpp_FUN_00546a90(&param_1->field_0x2b4,0);
    pfVar7 = afStack_a8 + 3;
    afStack_a8[3] = (float)uStack_3c;
    afStack_a8[(uint)bVar5 * -2 + 4] = afStack_80[(uint)bVar5 * -2 + 0x12];
    afStack_a8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 5] =
         afStack_80[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x13];
    iVar2 = (**(code **)((int)fStack_14 + 0x118))(iStack_20,param_1,pfVar7);
    if (iVar2 == 0) {
      *(uint *)&param_1->field_0x276c = 0;
LAB_004ccc0a:
      iVar2 = 0;
    }
    else {
      if (*(int *)&param_1->field_0x276c == 0) goto LAB_004ccc0a;
      if (*(int *)&param_1[1].field_0x14 == 0) goto LAB_004ccc1d;
      iVar2 = 0x11;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)&param_1->field_0x2b4,iVar2,1);
  }
LAB_004ccc1d:
  core_charactr_cpp_FUN_00424470(param_1);
  this_ptr = (CDeformableModelInstance *)&param_1->field_0x2b4;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00(this_ptr);
  iVar2 = (**(code **)(*(int *)&param_1->field_0x2b0 + 0x114))(param_1);
  if ((iVar2 == 0) &&
     (iVar2 = core_motion_cpp_FUN_005035c0(this_ptr), *(int *)(iVar2 + 0x24) != 0x13)) {
    blend_callback = core_skeleton_cpp_FUN_00544cc0;
    fVar6 = *(float *)&param_1[2].field_0x4194;
    iVar2 = _DAT_01cede20;
    core_xform_cpp_FUN_00594380(&param_1[2].field_0x4188);
    source_quaternions = (CQuaternion4f *)&uStack_ac;
    uStack_ac = uStack_bc;
    afStack_a8[(uint)bVar5 * -2] = *(float *)(&stack0xffffff48 + (uint)bVar5 * -8);
    afStack_a8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         *(float *)(&stack0xffffff4c + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    (afStack_a8 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
         *(float *)((int)(&stack0xffffff4c + (uint)bVar5 * -8 + (uint)bVar5 * -8) +
                   ((uint)bVar5 * -2 + 1) * 4);
    core_skeleton_cpp_FUN_005466c0(this_ptr,source_quaternions,fVar6,iVar2,blend_callback);
  }
  core_charactr_cpp_FUN_00429e90(param_1,param_2);
switchD_004cce93_caseD_9:
  return;
}
