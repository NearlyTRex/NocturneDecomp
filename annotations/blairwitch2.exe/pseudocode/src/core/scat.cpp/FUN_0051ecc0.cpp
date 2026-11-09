// Name: core_scat.cpp_FUN_0051ecc0
// Address: 0051ecc0
// Address Range: [[0051ecc0, 0051f482]]
// Convention: unknown
// Signature: void core_scat_cpp_FUN_0051ecc0(CScat *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_scat_cpp_FUN_0051ecc0(CScat *param_1,float param_2)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int desired_state_index;
  byte bVar6;
  float afStackY_1898 [1522];
  CDeformableModelInstance *this_ptr;
  CQuaternion4f *source_quaternions;
  CMotionController *this_ptr_00;
  float fVar7;
  CScat *pCVar8;
  float *pfVar9;
  code *blend_callback;
  CVector3f *velocity;
  uint uStack_bc;
  uint uStack_ac;
  float afStack_a8 [6];
  uint uStack_90;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  uint uStack_78;
  uint uStack_74;
  float afStack_6c [3];
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float afStack_48 [3];
  uint uStack_3c;
  float fStack_30;
  float afStack_2c [2];
  CMotionController *pCStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar6 = 0;
  iVar5 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0((CCharacter *)param_1,param_2);
  if (iVar5 == 0) {
switchD_0051f1f0_caseD_5:
    return;
  }
  core_charactr_cpp_FUN_0042b2a0(param_1,param_2);
  fVar7 = *(float *)&param_1->field_0x10a60 - param_2;
  *(float *)&param_1->field_0x10a60 = fVar7;
  if (fVar7 < 0.0) {
    *(uint *)&param_1->field_0x10a60 = 0;
  }
  *(uint *)&param_1->field_0x2510 = 0;
  *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
  *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
  core_scat_cpp_FUN_0051f9c0(param_1,param_2);
  *(uint *)&param_1->field_0x2594 = *(uint *)&param_1->field_0x2510;
  iVar5 = core_charactr_cpp_FUN_004287f0((CCharacter *)param_1,param_2);
  if (iVar5 == 0) {
    if (*(int *)&param_1->field_0x10a64 == 2) {
      core_scat_cpp_FUN_0051f490(param_1,param_2);
    }
    iVar5 = core_motion_cpp_FUN_005035c0(&param_1->field_0x2b4);
    switch(*(uint *)(iVar5 + 0x24)) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 7:
    case 9:
    case 10:
      if (*(int *)&param_1->field_0x2570 != 0) {
        iVar5 = core_scat_cpp_FUN_0051fcb0(param_1);
        desired_state_index = 0;
        if (iVar5 != 0) {
          desired_state_index = 7;
        }
        if (*(int *)&param_1->field_0x10a68 != 0) {
          iVar5 = core_scat_cpp_FUN_0051fcb0(param_1);
          if (iVar5 == 0) {
            if (*(int *)&param_1->field_0x10a70 == 0) {
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
        if (*(int *)&param_1->field_0x10a6c != 0) {
          iVar5 = core_scat_cpp_FUN_0051fcb0(param_1);
          if (iVar5 == 0) {
            desired_state_index = 3;
          }
          else {
            desired_state_index = 10;
          }
        }
        if ((((*(int *)&param_1->field_0x10a74 != 0) && (*(int *)&param_1->field_0x25640 != 0)) &&
            (iVar5 = *(int *)&param_1->field_0x25654, iVar5 != 0)) &&
           (iVar5 = (**(code **)(*(int *)(iVar5 + 0x2b0) + 0xf0))(iVar5), iVar5 != 0)) {
          (**(code **)(*(int *)(*(int *)&param_1->field_0x25654 + 0x2b0) + 0xec))
                    (*(int *)&param_1->field_0x25654);
          *(uint *)&param_1->field_0x10a74 = 0;
          if (*(int *)(*(int *)&param_1->field_0x25654 + 0x43c) == 9) {
            desired_state_index = 0xb;
          }
        }
        *(float *)&param_1->field_0x2578 =
             *(float *)&param_1->field_0x10a90 * *(float *)&param_1->field_0x2598 +
             *(float *)&param_1->field_0x2578;
        iVar5 = core_motion_cpp_FUN_005035c0(&param_1->field_0x2b4);
        if (desired_state_index != *(int *)(iVar5 + 0x24)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)&param_1->field_0x2b4,desired_state_index,1);
        }
        if (*(int *)&param_1->field_0x10a80 != 0) {
          *(uint *)&param_1->field_0x10a80 = 0;
          (**(code **)(*(int *)&param_1->field_0x2b0 + 0x150))
                    (param_1,*(int *)&param_1->field_0x25640 == 0);
        }
      }
      break;
    case 5:
      goto switchD_0051f1f0_caseD_5;
    }
  }
  else {
    *(uint *)&param_1->field_0x2510 = 0;
    *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
    *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
    uVar1 = *(uint *)&param_1->field_0x27ac;
    if (uVar1 < 2) {
      if (uVar1 == 1) {
        iVar5 = core_scat_cpp_FUN_0051fcb0(param_1);
        if (iVar5 == 0) {
          iVar5 = 1;
        }
        else {
LAB_0051edb3:
          iVar5 = 9;
        }
      }
      else {
LAB_0051f19d:
        iVar5 = core_scat_cpp_FUN_0051fcb0(param_1);
        if (iVar5 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = 7;
        }
      }
    }
    else if (uVar1 < 3) {
      iVar5 = core_scat_cpp_FUN_0051fcb0(param_1);
      if (iVar5 != 0) goto LAB_0051edb3;
      iVar5 = 2;
    }
    else {
      if (uVar1 != 3) goto LAB_0051f19d;
      engine_console_cpp_FUN_00436710(g_CConsolePtr,"%s confused while walking to scriptDest!\n",param_1);
      iVar5 = core_scat_cpp_FUN_0051fcb0(param_1);
      if (iVar5 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = 7;
      }
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)&param_1->field_0x2b4,iVar5,1);
  }
  if (*(int *)&param_1->field_0x276c == 0) {
    fStack_54 = *(float *)&param_1->field_0x2508 + *(float *)&param_1->field_0x257c;
    fStack_50 = *(float *)&param_1->field_0x250c + *(float *)&param_1->field_0x2580;
    fStack_4c = *(float *)&param_1->field_0x2510 + *(float *)&param_1->field_0x2584;
    fStack_30 = fStack_54;
    afStack_2c[(uint)bVar6 * -2] = afStack_a8[(uint)bVar6 * -2 + 0x16];
    afStack_2c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
         afStack_a8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x17];
    *(uint *)&param_1->field_0x2510 = 0;
    *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
    *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
    *(uint *)&param_1->field_0x2584 = 0;
    *(uint *)&param_1->field_0x2580 = *(uint *)&param_1->field_0x2584;
    *(uint *)&param_1->field_0x257c = *(uint *)&param_1->field_0x2580;
    core_charactr_cpp_FUN_00423a10(param_1,param_2);
    fStack_60 = *(float *)&param_1->field_0x2588 * param_2;
    velocity = (CVector3f *)&fStack_30;
    fStack_5c = *(float *)&param_1->field_0x258c * param_2;
    fStack_58 = *(float *)&param_1->field_0x2590 * param_2;
    fStack_84 = fStack_60;
    afStack_a8[(uint)bVar6 * -2 + 10] = afStack_a8[(uint)bVar6 * -2 + 0x13];
    afStack_a8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xb] =
         afStack_a8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x14];
    fStack_30 = fStack_30 + fStack_84;
    afStack_2c[0] = afStack_2c[0] + fStack_80;
    afStack_2c[1] = afStack_2c[1] + fStack_7c;
    core_charactr_cpp_FUN_00423a60((CCharacter *)param_1,velocity);
    goto LAB_0051ef62;
  }
  core_actor_cpp_FUN_00408de0(param_1,*(int *)&param_1->field_0x276c + 0x20);
  afStack_6c[0] = (float)uStack_90;
  afStack_a8[(uint)bVar6 * -2 + 0x10] = afStack_a8[(uint)bVar6 * -2 + 7];
  afStack_a8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x11] =
       afStack_a8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 8];
  core_vecdir_cpp_FUN_005838f0(afStack_a8 + 0xf);
  uStack_78 = uStack_3c;
  afStack_a8[(uint)bVar6 * -2 + 0xd] = afStack_a8[(uint)bVar6 * -2 + 0x1c];
  afStack_a8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xe] =
       afStack_a8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1d];
  fStack_14 = (float)core_actor_cpp_FUN_0040d0c0(uStack_74);
  fStack_18 = fStack_14;
  if (fStack_14 < _DAT_005e2b3f) {
    fStack_18 = fStack_14 + _DAT_005e2b43;
  }
  if (_DAT_005e2b47 < fStack_18) {
    fStack_18 = fStack_18 + _DAT_005e2b4b;
  }
  fStack_1c = param_2 * _DAT_005e2b43;
  fStack_20 = -fStack_1c;
  if (fStack_18 < fStack_20) {
    fStack_18 = fStack_20;
  }
  if (fStack_1c < fStack_18) {
    fStack_18 = fStack_1c;
  }
  *(float *)&param_1->field_0x34 = *(float *)&param_1->field_0x34 + fStack_18;
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0((CDemonActor *)param_1);
  iVar5 = *(int *)&param_1->field_0x276c;
  fStack_14 = *(float *)(iVar5 + 0x2b0);
  pCStack_24 = (CMotionController *)&param_1->field_0x2b4;
  core_skeleton_cpp_FUN_00546a90(pCStack_24,0);
  fVar7 = fStack_14;
  pfVar9 = afStack_a8 + 0x18;
  afStack_48[0] = afStack_a8[3];
  afStack_a8[(uint)bVar6 * -2 + 0x19] = afStack_a8[(uint)bVar6 * -2 + 4];
  pCVar8 = param_1;
  afStack_a8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1a] =
       afStack_a8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 5];
  iVar5 = (**(code **)((int)fVar7 + 0x118))(iVar5,pCVar8,pfVar9);
  if (iVar5 == 0) {
    *(uint *)&param_1->field_0x276c = 0;
LAB_0051ef4f:
    iVar5 = 0;
    this_ptr_00 = (CMotionController *)&param_1->field_0x2b4;
  }
  else {
    if (*(int *)&param_1->field_0x276c == 0) goto LAB_0051ef4f;
    if (*(int *)&param_1->field_0x10a74 == 0) goto LAB_0051ef62;
    iVar5 = 0xf;
    this_ptr_00 = pCStack_24;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(this_ptr_00,iVar5,1);
LAB_0051ef62:
  core_inv_cpp_FUN_004dccd0((CInventory *)&param_1->field_0x2437c);
  iVar5 = *(int *)&param_1->field_0x25654;
  if (iVar5 != 0) {
    (**(code **)(*(int *)(iVar5 + 0x2b0) + 0x14))(iVar5,param_2);
  }
  core_scat_cpp_FUN_0051fd00(param_1,param_2);
  core_charactr_cpp_FUN_00424470((CCharacter *)param_1);
  fVar7 = *(float *)&param_1->field_0x25a8;
  iVar5 = (**(code **)(*(int *)&param_1->field_0x2b0 + 0xfc))(param_1);
  fStack_14 = (float)core_motion_cpp_FUN_005038a0(&param_1->field_0x2b4,0xc);
  bVar2 = 0.0 < fStack_14;
  fStack_14 = (float)core_motion_cpp_FUN_005038a0(&param_1->field_0x2b4,0xd);
  bVar3 = 0.0 < fStack_14;
  fStack_14 = (float)core_motion_cpp_FUN_005038a0(&param_1->field_0x2b4,4);
  bVar4 = 0.0 < fStack_14;
  fStack_14 = (float)core_motion_cpp_FUN_005038a0(&param_1->field_0x2b4,5);
  core_scat_cpp_FUN_005203c0
            (param_1,param_2,
             0.0 < fStack_14 || (bVar4 || (bVar3 || (bVar2 || (iVar5 != 0 || fVar7 <= 0.0)))));
  this_ptr = (CDeformableModelInstance *)&param_1->field_0x2b4;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00(this_ptr);
  core_scat_cpp_FUN_0051ff60(param_1);
  iVar5 = core_scat_cpp_FUN_0051fcb0(param_1);
  if ((iVar5 == 0) &&
     (iVar5 = (**(code **)(*(int *)&param_1->field_0x2b0 + 0x114))(param_1), iVar5 == 0)) {
    blend_callback = core_skeleton_cpp_FUN_00544cc0;
    fVar7 = *(float *)&param_1->field_0x25650;
    iVar5 = _DAT_01e62068;
    core_xform_cpp_FUN_00594380(&param_1->field_0x25644);
    source_quaternions = (CQuaternion4f *)&uStack_ac;
    uStack_ac = uStack_bc;
    afStack_a8[(uint)bVar6 * -2] = *(float *)(&stack0xffffff48 + (uint)bVar6 * -8);
    afStack_a8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
         *(float *)(&stack0xffffff4c + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    (afStack_a8 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1] =
         *(float *)((int)(&stack0xffffff4c + (uint)bVar6 * -8 + (uint)bVar6 * -8) +
                   ((uint)bVar6 * -2 + 1) * 4);
    core_skeleton_cpp_FUN_005466c0(this_ptr,source_quaternions,fVar7,iVar5,blend_callback);
  }
  core_charactr_cpp_FUN_00429e90((CCharacter *)param_1,param_2);
  core_scat_cpp_FUN_00520df0(param_1);
  return;
}
