// Name: core_scat.cpp_CScat_process_FUN_00540df0
// Address: 00540df0
// Address Range: [[00540df0, 005415b2]]
// Convention: __cdecl
// Signature: void __cdecl core_scat_cpp_CScat_process_FUN_00540df0(CScat *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_scat_cpp_CScat_process_FUN_00540df0(CScat *this_ptr,float delta_time)

{
  uint uVar1;
  CWeapon *this_ptr_00;
  CCharacter *this_ptr_01;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  SMotion *pSVar8;
  int iVar9;
  uint *puVar10;
  byte bVar11;
  float in_stack_0000001c;
  float afStackY_1884 [1519];
  CDemonActor *in_stack_ffffff44;
  CDeformableModelInstance *this_ptr_02;
  int in_stack_ffffff48;
  CQuaternion4f *source_quaternions;
  CDemonActor *in_stack_ffffff50;
  CScat *pCVar12;
  float *pfVar13;
  code *blend_callback;
  CVector3f *velocity;
  float fStack_a8;
  CQuaternion4f CStack_98;
  uint uStack_88;
  float afStack_84 [5];
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  uint uStack_64;
  uint uStack_60;
  float afStack_58 [3];
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float afStack_34 [3];
  uint uStack_28;
  CVector3f CStack_1c;
  
  bVar11 = 0;
  iVar2 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar2 == 0) {
switchD_00541320_caseD_5:
    return;
  }
  core_charactr_cpp_FUN_00435320(this_ptr,delta_time);
  fVar3 = *(float *)&this_ptr->field_0xc1d0 - delta_time;
  *(float *)&this_ptr->field_0xc1d0 = fVar3;
  if (fVar3 < 0.0) {
    *(uint *)&this_ptr->field_0xc1d0 = 0;
  }
  *(uint *)&this_ptr->field_0x24a4 = 0;
  *(uint *)&this_ptr->field_0x24a0 = *(uint *)&this_ptr->field_0x24a4;
  *(uint *)&this_ptr->field_0x249c = *(uint *)&this_ptr->field_0x24a0;
  core_scat_cpp_CScat_advanceMotionWithGrabDamage_FUN_00541af0(this_ptr,delta_time);
  *(uint *)&this_ptr->field_0x2524 = *(uint *)&this_ptr->field_0x24a4;
  iVar2 = core_charactr_cpp_CCharacter_processWalking_FUN_00432240
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar2 == 0) {
    if (*(int *)&this_ptr->field_0xc1d4 == 2) {
      core_scat_cpp_CScat_updateAI_FUN_005415c0(this_ptr,delta_time);
    }
    pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                       ((CMotionController *)&this_ptr->field_0x158);
    switch(*(uint *)(pSVar8 + 0x24)) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 7:
    case 9:
    case 10:
      if (*(int *)&this_ptr->field_0x2500 != 0) {
        iVar2 = core_scat_cpp_CScat_isWeaponReady_FUN_00541de0(this_ptr);
        iVar9 = 0;
        if (iVar2 != 0) {
          iVar9 = 7;
        }
        if (*(int *)&this_ptr->field_0xc1d8 != 0) {
          iVar2 = core_scat_cpp_CScat_isWeaponReady_FUN_00541de0(this_ptr);
          if (iVar2 == 0) {
            if (*(int *)&this_ptr->field_0xc1e0 == 0) {
              iVar9 = 1;
            }
            else {
              iVar9 = 2;
            }
          }
          else {
            iVar9 = 9;
          }
        }
        if (*(int *)&this_ptr->field_0xc1dc != 0) {
          iVar2 = core_scat_cpp_CScat_isWeaponReady_FUN_00541de0(this_ptr);
          if (iVar2 == 0) {
            iVar9 = 3;
          }
          else {
            iVar9 = 10;
          }
        }
        if ((((*(int *)&this_ptr->field_0xc1e4 != 0) && (this_ptr->guns_drawn != 0)) &&
            (this_ptr_01 = (CCharacter *)this_ptr->weapon_actor, this_ptr_01 != (CCharacter *)0x0))
           && (iVar2 = (*(((this_ptr_01->base).vtable._uc)->_uc).canBeGrabbed)
                                 (this_ptr_01,in_stack_ffffff44,in_stack_ffffff48), iVar2 != 0)) {
          (*(((((CCharacter *)this_ptr->weapon_actor)->base).vtable._uc)->_uc).isGrabbable)
                    ((CCharacter *)this_ptr->weapon_actor,in_stack_ffffff50);
          *(uint *)&this_ptr->field_0xc1e4 = 0;
          if (this_ptr->weapon_actor->weapon_type == WEAPON_TYPE_BARON) {
            iVar9 = 0xb;
          }
        }
        *(float *)&this_ptr->field_0x2508 =
             *(float *)&this_ptr->field_0xc200 * *(float *)&this_ptr->field_0x2528 +
             *(float *)&this_ptr->field_0x2508;
        pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                           ((CMotionController *)&this_ptr->field_0x158);
        if (iVar9 != *(int *)(pSVar8 + 0x24)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)&this_ptr->field_0x158,iVar9,1);
        }
        if (*(int *)&this_ptr->field_0xc1f0 != 0) {
          *(uint *)&this_ptr->field_0xc1f0 = 0;
          (**(code **)(*(int *)&this_ptr->field_0x154 + 0x144))(this_ptr,this_ptr->guns_drawn == 0);
        }
      }
      break;
    case 5:
      goto switchD_00541320_caseD_5;
    }
  }
  else {
    *(uint *)&this_ptr->field_0x24a4 = 0;
    *(uint *)&this_ptr->field_0x24a0 = *(uint *)&this_ptr->field_0x24a4;
    *(uint *)&this_ptr->field_0x249c = *(uint *)&this_ptr->field_0x24a0;
    uVar1 = *(uint *)&this_ptr->field_0x273c;
    if (uVar1 < 2) {
      if (uVar1 == 1) {
        iVar2 = core_scat_cpp_CScat_isWeaponReady_FUN_00541de0(this_ptr);
        if (iVar2 == 0) {
          iVar2 = 1;
        }
        else {
LAB_00540ee3:
          iVar2 = 9;
        }
      }
      else {
LAB_005412cd:
        iVar2 = core_scat_cpp_CScat_isWeaponReady_FUN_00541de0(this_ptr);
        if (iVar2 == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = 7;
        }
      }
    }
    else if (uVar1 < 3) {
      iVar2 = core_scat_cpp_CScat_isWeaponReady_FUN_00541de0(this_ptr);
      if (iVar2 != 0) goto LAB_00540ee3;
      iVar2 = 2;
    }
    else {
      if (uVar1 != 3) goto LAB_005412cd;
      engine_console_cpp_FUN_00445430(g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
      iVar2 = core_scat_cpp_CScat_isWeaponReady_FUN_00541de0(this_ptr);
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = 7;
      }
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              ((CMotionController *)&this_ptr->field_0x158,iVar2,1);
  }
  if (*(int *)&this_ptr->field_0x26fc == 0) {
    fStack_40 = *(float *)&this_ptr->field_0x249c + *(float *)&this_ptr->field_0x250c;
    fStack_3c = *(float *)&this_ptr->field_0x24a0 + *(float *)&this_ptr->field_0x2510;
    fStack_38 = *(float *)&this_ptr->field_0x24a4 + *(float *)&this_ptr->field_0x2514;
    CStack_1c.x = fStack_40;
    *(float *)((int)&CStack_1c + (uint)bVar11 * -8 + 4) = afStack_84[(uint)bVar11 * -2 + 0x12];
    *(float *)((int)&CStack_1c + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
         afStack_84[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x13];
    *(uint *)&this_ptr->field_0x24a4 = 0;
    *(uint *)&this_ptr->field_0x24a0 = *(uint *)&this_ptr->field_0x24a4;
    *(uint *)&this_ptr->field_0x249c = *(uint *)&this_ptr->field_0x24a0;
    *(uint *)&this_ptr->field_0x2514 = 0;
    *(uint *)&this_ptr->field_0x2510 = *(uint *)&this_ptr->field_0x2514;
    *(uint *)&this_ptr->field_0x250c = *(uint *)&this_ptr->field_0x2510;
    core_charactr_cpp_FUN_0042d700(this_ptr,in_stack_0000001c);
    fStack_4c = *(float *)&this_ptr->field_0x2518 * in_stack_0000001c;
    velocity = &CStack_1c;
    fStack_48 = *(float *)&this_ptr->field_0x251c * in_stack_0000001c;
    fStack_44 = *(float *)&this_ptr->field_0x2520 * in_stack_0000001c;
    fStack_70 = fStack_4c;
    afStack_84[(uint)bVar11 * -2 + 6] = afStack_84[(uint)bVar11 * -2 + 0xf];
    afStack_84[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
         afStack_84[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x10];
    CStack_1c.x = CStack_1c.x + fStack_70;
    CStack_1c.y = CStack_1c.y + fStack_6c;
    CStack_1c.z = CStack_1c.z + fStack_68;
    core_charactr_cpp_FUN_0042d750((CCharacter *)this_ptr,velocity);
    goto LAB_00541092;
  }
  core_actor_cpp_FUN_00408bb0(this_ptr,*(int *)&this_ptr->field_0x26fc + 0x20);
  afStack_58[0] = afStack_84[2];
  afStack_84[(uint)bVar11 * -2 + 0xc] = afStack_84[(uint)bVar11 * -2 + 3];
  afStack_84[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd] =
       afStack_84[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
  core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(afStack_84 + 0xb);
  uStack_64 = uStack_28;
  afStack_84[(uint)bVar11 * -2 + 9] = afStack_84[(uint)bVar11 * -2 + 0x18];
  afStack_84[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10] =
       afStack_84[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x19];
  fVar3 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cd60(uStack_60);
  if (fVar3 < _DAT_005ede4b) {
    fVar3 = fVar3 + _DAT_005ede4f;
  }
  if (_DAT_005ede53 < fVar3) {
    fVar3 = fVar3 + _DAT_005ede57;
  }
  fVar4 = in_stack_0000001c * _DAT_005ede4f;
  if (fVar3 < -fVar4) {
    fVar3 = -fVar4;
  }
  if (fVar4 < fVar3) {
    fVar3 = fVar4;
  }
  *(float *)&this_ptr->field_0x34 = *(float *)&this_ptr->field_0x34 + fVar3;
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0((CDemonActor *)this_ptr);
  iVar2 = *(int *)&this_ptr->field_0x26fc;
  iVar9 = *(int *)(iVar2 + 0x154);
  core_skeleton_cpp_FUN_00569130(&this_ptr->field_0x158,0);
  pfVar13 = afStack_84 + 0x14;
  afStack_34[0] = (float)uStack_88;
  afStack_84[(uint)bVar11 * -2 + 0x15] = afStack_84[(uint)bVar11 * -2];
  pCVar12 = this_ptr;
  afStack_84[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x16] =
       afStack_84[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
  iVar2 = (**(code **)(iVar9 + 0x110))(iVar2,pCVar12,pfVar13);
  if (iVar2 == 0) {
    *(uint *)&this_ptr->field_0x26fc = 0;
LAB_0054107f:
    iVar2 = 0;
  }
  else {
    if (*(int *)&this_ptr->field_0x26fc == 0) goto LAB_0054107f;
    if (*(int *)&this_ptr->field_0xc1e4 == 0) goto LAB_00541092;
    iVar2 = 0xf;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
            ((CMotionController *)&this_ptr->field_0x158,iVar2,1);
LAB_00541092:
  core_inv_cpp_FUN_004f9f10(&this_ptr->field_0x1fae8);
  this_ptr_00 = this_ptr->weapon_actor;
  if (this_ptr_00 != (CWeapon *)0x0) {
    (*((this_ptr_00->base).vtable._ub)->process)(&this_ptr_00->base,in_stack_0000001c);
  }
  core_scat_cpp_CScat_updateWeaponState_FUN_00541e30(this_ptr,in_stack_0000001c);
  core_charactr_cpp_CCharacter_preProcess_FUN_0042e160((CCharacter *)this_ptr);
  fVar3 = *(float *)&this_ptr->field_0x2538;
  iVar2 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0xf4))(this_ptr);
  fVar4 = (float)core_motion_cpp_FUN_00524a40(&this_ptr->field_0x158,0xc);
  fVar5 = (float)core_motion_cpp_FUN_00524a40(&this_ptr->field_0x158,0xd);
  fVar6 = (float)core_motion_cpp_FUN_00524a40(&this_ptr->field_0x158,4);
  fVar7 = (float)core_motion_cpp_FUN_00524a40(&this_ptr->field_0x158,5);
  core_scat_cpp_FUN_005424f0
            (this_ptr,in_stack_0000001c,
             0.0 < fVar7 ||
             (0.0 < fVar6 || (0.0 < fVar5 || (0.0 < fVar4 || (iVar2 != 0 || fVar3 <= 0.0)))));
  this_ptr_02 = (CDeformableModelInstance *)&this_ptr->field_0x158;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0(this_ptr_02);
  core_scat_cpp_CScat_blendLayerAction_FUN_00542090(this_ptr);
  iVar2 = core_scat_cpp_CScat_isWeaponReady_FUN_00541de0(this_ptr);
  if ((iVar2 == 0) &&
     (iVar2 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x10c))(this_ptr), iVar2 == 0)) {
    blend_callback = core_skeleton_cpp_FUN_00567360;
    fVar3 = this_ptr->head_blend_weight;
    iVar2 = _DAT_01e7e014;
    core_xform_cpp_FUN_005b7ed0(&this_ptr->head_euler_angles);
    source_quaternions = &CStack_98;
    CStack_98.w = fStack_a8;
    puVar10 = (uint *)((int)&CStack_98 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
    *(uint *)((int)&CStack_98 + (uint)bVar11 * -8 + 4) =
         *(uint *)(&stack0xffffff5c + (uint)bVar11 * -8);
    *puVar10 = *(uint *)(&stack0xffffff60 + (uint)bVar11 * -8 + (uint)bVar11 * -8);
    puVar10[(uint)bVar11 * -2 + 1] =
         *(uint *)
          ((int)(&stack0xffffff60 + (uint)bVar11 * -8 + (uint)bVar11 * -8) +
          ((uint)bVar11 * -2 + 1) * 4);
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_00568d60
              (this_ptr_02,source_quaternions,fVar3,iVar2,blend_callback);
  }
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433e80
            ((CCharacter *)this_ptr,in_stack_0000001c);
  core_scat_cpp_FUN_00542f20(this_ptr);
  return;
}
