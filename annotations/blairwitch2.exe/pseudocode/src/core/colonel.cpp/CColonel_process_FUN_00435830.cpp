// Name: core_colonel.cpp_CColonel_process_FUN_00435830
// Address: 00435830
// Address Range: [[00435830, 00435e24]]
// Convention: __cdecl
// Signature: void __cdecl core_colonel_cpp_CColonel_process_FUN_00435830(CColonel *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_colonel_cpp_CColonel_process_FUN_00435830(CColonel *this_ptr,float delta_time)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  float afStackY_18b0 [1522];
  CDeformableModelInstance *this_ptr_00;
  CQuaternion4f *source_quaternions;
  float fVar6;
  CColonel *pCVar7;
  float *pfVar8;
  code *blend_callback;
  CQuaternion4f CStack_d4;
  float fStack_c4;
  float afStack_c0 [3];
  CVector3f CStack_b4;
  uint uStack_a8;
  float afStack_a4 [4];
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
  float afStack_48 [3];
  uint uStack_3c;
  uint uStack_30;
  int iStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar5 = 0;
  iVar3 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar3 == 0) {
    return;
  }
  fVar6 = *(float *)&this_ptr->field_0x10a60 - delta_time;
  *(float *)&this_ptr->field_0x10a60 = fVar6;
  if (fVar6 < 0.0) {
    *(uint *)&this_ptr->field_0x10a60 = 0;
  }
  *(uint *)&this_ptr->field_0x2510 = 0;
  *(uint *)&this_ptr->field_0x250c = *(uint *)&this_ptr->field_0x2510;
  *(uint *)&this_ptr->field_0x2508 = *(uint *)&this_ptr->field_0x250c;
  core_colonel_cpp_CColonel_processMotionEvents_FUN_00436420(this_ptr,delta_time);
  if (*(int *)&this_ptr->field_0x10a64 == 2) {
    core_colonel_cpp_CColonel_processAI_FUN_00435e30(this_ptr,delta_time);
  }
  *(uint *)&this_ptr->field_0x2594 = *(uint *)&this_ptr->field_0x2510;
  core_charactr_cpp_FUN_0042b2a0(this_ptr,delta_time);
  iVar3 = core_charactr_cpp_CCharacter_processWalking_FUN_004287f0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar3 == 0) {
    iVar3 = core_motion_cpp_FUN_005035c0(&this_ptr->field_0x2b4);
    switch(*(uint *)(iVar3 + 0x24)) {
    case 0:
    case 1:
    case 2:
    case 3:
      if (*(int *)&this_ptr->field_0x2570 != 0) {
        iVar3 = 0;
        if (*(int *)&this_ptr->field_0x10a68 != 0) {
          if (*(int *)&this_ptr->field_0x10a70 == 0) {
            iVar3 = 1;
          }
          else {
            iVar3 = 2;
          }
        }
        if (*(int *)&this_ptr->field_0x10a6c != 0) {
          iVar3 = 3;
        }
        if (*(int *)&this_ptr->field_0x10a80 != 0) {
          *(uint *)&this_ptr->field_0x10a80 = 0;
          iVar3 = 0;
          this_ptr->guns_drawn = (uint)(this_ptr->guns_drawn == 0);
        }
        if (*(int *)&this_ptr->field_0x10a74 != 0) {
          bVar2 = true;
          if ((this_ptr->guns_drawn == 0) && (*(int *)&this_ptr->field_0x10a64 != 2)) {
            iVar4 = core_hero_cpp_FUN_004cec50(this_ptr);
            bVar2 = false;
            if (iVar4 != 0) goto LAB_00435c28;
            iVar4 = core_hero_cpp_FUN_004cf030(this_ptr,0);
            if ((iVar4 != 0) && (iVar4 != 1)) {
              core_hero_cpp_CHero_tryOpenDoor_FUN_004cf230((CHero *)this_ptr);
            }
            if ((iVar4 != 0) ||
               (iVar4 = core_hero_cpp_CHero_tryTalkToNearbyCharacter_FUN_004cee90((CHero *)this_ptr)
               , iVar4 != 0)) goto LAB_00435c28;
            iVar4 = core_hero_cpp_FUN_004cf2b0((CHero *)this_ptr);
            if (iVar4 != 0) {
              core_hero_cpp_FUN_004cf440(this_ptr);
              goto LAB_00435c28;
            }
          }
          else {
LAB_00435c28:
            if (!bVar2) goto LAB_00435c36;
          }
          *(uint *)&this_ptr->field_0x10a74 = 0;
        }
LAB_00435c36:
        *(float *)&this_ptr->field_0x2578 =
             *(float *)&this_ptr->field_0x10a90 * *(float *)&this_ptr->field_0x2598;
        iVar4 = core_motion_cpp_FUN_005035c0(&this_ptr->field_0x2b4);
        if (iVar3 != *(int *)(iVar4 + 0x24)) goto LAB_00435919;
      }
      break;
    case 6:
      goto switchD_00435cf7_caseD_6;
    }
  }
  else {
    uVar1 = *(uint *)&this_ptr->field_0x27ac;
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
                    ((CMotionController *)&this_ptr->field_0x2b4,0,1);
          engine_console_cpp_FUN_00436710
                    (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
          goto switchD_00435cf7_caseD_4;
        }
        goto LAB_00435b9d;
      }
      iVar3 = 2;
    }
LAB_00435919:
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)&this_ptr->field_0x2b4,iVar3,1);
  }
switchD_00435cf7_caseD_4:
  if (*(int *)&this_ptr->field_0x276c == 0) {
    core_charactr_cpp_FUN_00423a10(this_ptr,delta_time);
    fStack_60 = *(float *)&this_ptr->field_0x2588 * delta_time;
    fStack_5c = *(float *)&this_ptr->field_0x258c * delta_time;
    fStack_58 = *(float *)&this_ptr->field_0x2590 * delta_time;
    afStack_a4[2] = fStack_60;
    afStack_a4[(uint)bVar5 * -2 + 3] = afStack_a4[(uint)bVar5 * -2 + 0x12];
    afStack_a4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
         afStack_a4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x13];
    fStack_54 = *(float *)&this_ptr->field_0x2508 + *(float *)&this_ptr->field_0x257c;
    fStack_50 = *(float *)&this_ptr->field_0x250c + *(float *)&this_ptr->field_0x2580;
    fStack_4c = *(float *)&this_ptr->field_0x2510 + *(float *)&this_ptr->field_0x2584;
    fStack_84 = fStack_54;
    afStack_a4[(uint)bVar5 * -2 + 9] = afStack_a4[(uint)bVar5 * -2 + 0x15];
    afStack_a4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10] =
         afStack_a4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x16];
    fStack_78 = fStack_84 + afStack_a4[2];
    fStack_74 = fStack_80 + afStack_a4[3];
    fStack_70 = fStack_7c + fStack_94;
    CStack_b4.x = fStack_84 + afStack_a4[2];
    *(float *)((int)&CStack_b4 + (uint)bVar5 * -8 + 4) = afStack_a4[(uint)bVar5 * -2 + 0xc];
    *(float *)((int)&CStack_b4 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
         afStack_a4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd];
    *(uint *)&this_ptr->field_0x2510 = 0;
    *(uint *)&this_ptr->field_0x250c = *(uint *)&this_ptr->field_0x2510;
    *(uint *)&this_ptr->field_0x2508 = *(uint *)&this_ptr->field_0x250c;
    *(uint *)&this_ptr->field_0x2584 = 0;
    *(uint *)&this_ptr->field_0x2580 = *(uint *)&this_ptr->field_0x2584;
    *(uint *)&this_ptr->field_0x257c = *(uint *)&this_ptr->field_0x2580;
    core_charactr_cpp_FUN_00423a60((CCharacter *)this_ptr,&CStack_b4);
  }
  else {
    if (*(int *)&this_ptr->field_0x2770 == 0) {
      core_actor_cpp_FUN_00408de0(this_ptr,*(int *)&this_ptr->field_0x276c + 0x20);
      uStack_a8 = uStack_6c;
      afStack_a4[(uint)bVar5 * -2] = afStack_a4[(uint)bVar5 * -2 + 0xf];
      afStack_a4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
           afStack_a4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x10];
      core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(&uStack_a8);
      uStack_90 = uStack_30;
      afStack_a4[(uint)bVar5 * -2 + 6] = afStack_a4[(uint)bVar5 * -2 + 0x1e];
      afStack_a4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
           afStack_a4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x1f];
      fStack_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0(uStack_8c);
      fStack_18 = fStack_14;
      if (fStack_14 < _DAT_005cdbe1) {
        fStack_18 = fStack_14 + _DAT_005cdbe5;
      }
      if (_DAT_005cdbe9 < fStack_18) {
        fStack_18 = fStack_18 + _DAT_005cdbed;
      }
      fStack_1c = delta_time * _DAT_005cdbe5;
      fStack_20 = -fStack_1c;
      if (fStack_18 < fStack_20) {
        fStack_18 = fStack_20;
      }
      if (fStack_1c < fStack_18) {
        fStack_18 = fStack_1c;
      }
      *(float *)&this_ptr->field_0x34 = *(float *)&this_ptr->field_0x34 + fStack_18;
      core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0((CDemonActor *)this_ptr);
    }
    iStack_24 = *(int *)&this_ptr->field_0x276c;
    fStack_14 = *(float *)(iStack_24 + 0x2b0);
    core_skeleton_cpp_FUN_00546a90(&this_ptr->field_0x2b4,0);
    fVar6 = fStack_14;
    iVar3 = iStack_24;
    pfVar8 = afStack_a4 + 0x17;
    afStack_48[0] = (float)uStack_3c;
    afStack_a4[(uint)bVar5 * -2 + 0x18] = afStack_a4[(uint)bVar5 * -2 + 0x1b];
    pCVar7 = this_ptr;
    afStack_a4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x19] =
         afStack_a4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x1c];
    iVar3 = (**(code **)((int)fVar6 + 0x118))(iVar3,pCVar7,pfVar8);
    if (iVar3 == 0) {
      *(uint *)&this_ptr->field_0x276c = 0;
LAB_00435ad0:
      iVar3 = 0;
    }
    else {
      if (*(int *)&this_ptr->field_0x276c == 0) goto LAB_00435ad0;
      if (*(int *)&this_ptr->field_0x10a74 == 0) goto LAB_00435ae3;
      iVar3 = 9;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)&this_ptr->field_0x2b4,iVar3,1);
  }
LAB_00435ae3:
  core_charactr_cpp_CCharacter_preProcess_FUN_00424470((CCharacter *)this_ptr);
  this_ptr_00 = (CDeformableModelInstance *)&this_ptr->field_0x2b4;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00(this_ptr_00);
  iVar3 = (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x114))(this_ptr);
  if (iVar3 == 0) {
    blend_callback = core_skeleton_cpp_FUN_00544cc0;
    fVar6 = this_ptr->head_look_blend_weight;
    iVar3 = DAT_007c150c;
    core_xform_cpp_FUN_00594380(&this_ptr->head_look_euler);
    source_quaternions = &CStack_d4;
    CStack_d4.w = fStack_c4;
    pfVar8 = (float *)((int)&CStack_d4 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
    *(float *)((int)&CStack_d4 + (uint)bVar5 * -8 + 4) = afStack_c0[(uint)bVar5 * -2];
    *pfVar8 = afStack_c0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
    pfVar8[(uint)bVar5 * -2 + 1] =
         (afStack_c0 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_005466c0
              (this_ptr_00,source_quaternions,fVar6,iVar3,blend_callback);
  }
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00429e90((CCharacter *)this_ptr,delta_time);
switchD_00435cf7_caseD_6:
  return;
}
