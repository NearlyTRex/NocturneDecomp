// Name: core_colonel.cpp_CColonel_process_FUN_00444550
// Address: 00444550
// Address Range: [[00444550, 00444550]]
// Convention: __cdecl
// Signature: void __cdecl core_colonel_cpp_CColonel_process_FUN_00444550(CColonel *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_colonel_cpp_CColonel_process_FUN_00444550(CColonel *this_ptr,float delta_time)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  SMotion *pSVar5;
  byte bVar6;
  float afStackY_18b0 [1522];
  CDeformableModelInstance *this_ptr_00;
  CQuaternion4f *source_quaternions;
  float fVar7;
  CColonel *pCVar8;
  float *pfVar9;
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
  
  bVar6 = 0;
  iVar3 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar3 == 0) {
    return;
  }
  fVar7 = *(float *)&this_ptr->field_0xc1d0 - delta_time;
  *(float *)&this_ptr->field_0xc1d0 = fVar7;
  if (fVar7 < 0.0) {
    *(uint *)&this_ptr->field_0xc1d0 = 0;
  }
  *(uint *)&this_ptr->field_0x24a4 = 0;
  *(uint *)&this_ptr->field_0x24a0 = *(uint *)&this_ptr->field_0x24a4;
  *(uint *)&this_ptr->field_0x249c = *(uint *)&this_ptr->field_0x24a0;
  func_0x00445140(this_ptr,delta_time);
  if (*(int *)&this_ptr->field_0xc1d4 == 2) {
    core_colonel_cpp_FUN_00444b4e(this_ptr,delta_time);
  }
  *(uint *)&this_ptr->field_0x2524 = *(uint *)&this_ptr->field_0x24a4;
  core_charactr_cpp_FUN_00435320(this_ptr,delta_time);
  iVar3 = core_charactr_cpp_CCharacter_processWalking_FUN_00432240
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar3 == 0) {
    pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                       ((CMotionController *)&this_ptr->field_0x158);
    switch(*(uint *)(pSVar5 + 0x24)) {
    case 0:
    case 1:
    case 2:
    case 3:
      if (*(int *)&this_ptr->field_0x2500 != 0) {
        iVar3 = 0;
        if (*(int *)&this_ptr->field_0xc1d8 != 0) {
          if (*(int *)&this_ptr->field_0xc1e0 == 0) {
            iVar3 = 1;
          }
          else {
            iVar3 = 2;
          }
        }
        if (*(int *)&this_ptr->field_0xc1dc != 0) {
          iVar3 = 3;
        }
        if (*(int *)&this_ptr->field_0xc1f0 != 0) {
          *(uint *)&this_ptr->field_0xc1f0 = 0;
          iVar3 = 0;
          this_ptr->guns_drawn = (uint)(this_ptr->guns_drawn == 0);
        }
        if (*(int *)&this_ptr->field_0xc1e4 != 0) {
          bVar2 = true;
          if ((this_ptr->guns_drawn == 0) && (*(int *)&this_ptr->field_0xc1d4 != 2)) {
            iVar4 = core_hero_cpp_CHero_tryInteract_FUN_004eb090((CHero *)this_ptr);
            bVar2 = false;
            if (iVar4 != 0) goto code_r0x00444948;
            iVar4 = core_hero_cpp_FUN_004eb3e0(this_ptr,0);
            if ((iVar4 != 0) && (iVar4 != 1)) {
              core_hero_cpp_CHero_tryOpenDoor_FUN_004eb5e0((CHero *)this_ptr);
            }
            if ((iVar4 != 0) ||
               (iVar4 = core_hero_cpp_CHero_tryTalkToNearbyCharacter_FUN_004eb240((CHero *)this_ptr)
               , iVar4 != 0)) goto code_r0x00444948;
            iVar4 = core_hero_cpp_FUN_004eb660((CHero *)this_ptr);
            if (iVar4 != 0) {
              core_hero_cpp_FUN_004eb7f0(this_ptr);
              goto code_r0x00444948;
            }
          }
          else {
code_r0x00444948:
            if (!bVar2) goto code_r0x00444956;
          }
          *(uint *)&this_ptr->field_0xc1e4 = 0;
        }
code_r0x00444956:
        *(float *)&this_ptr->field_0x2508 =
             *(float *)&this_ptr->field_0xc200 * *(float *)&this_ptr->field_0x2528;
        pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                           ((CMotionController *)&this_ptr->field_0x158);
        if (iVar3 != *(int *)(pSVar5 + 0x24)) goto code_r0x00444639;
      }
      break;
    case 6:
      goto code_r0x0044487e;
    }
  }
  else {
    uVar1 = *(uint *)&this_ptr->field_0x273c;
    if (uVar1 < 2) {
      if (uVar1 == 1) {
        iVar3 = 1;
      }
      else {
code_r0x004448bd:
        iVar3 = 0;
      }
    }
    else {
      if (2 < uVar1) {
        if (uVar1 == 3) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)&this_ptr->field_0x158,0,1);
          engine_console_cpp_FUN_00445430
                    (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
          goto DAT_00444641;
        }
        goto code_r0x004448bd;
      }
      iVar3 = 2;
    }
code_r0x00444639:
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              ((CMotionController *)&this_ptr->field_0x158,iVar3,1);
  }
DAT_00444641:
  if (*(int *)&this_ptr->field_0x26fc == 0) {
    core_charactr_cpp_FUN_0042d700(this_ptr,delta_time);
    fStack_60 = *(float *)&this_ptr->field_0x2518 * delta_time;
    fStack_5c = *(float *)&this_ptr->field_0x251c * delta_time;
    fStack_58 = *(float *)&this_ptr->field_0x2520 * delta_time;
    afStack_a4[2] = fStack_60;
    afStack_a4[(uint)bVar6 * -2 + 3] = afStack_a4[(uint)bVar6 * -2 + 0x12];
    afStack_a4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
         afStack_a4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x13];
    fStack_54 = *(float *)&this_ptr->field_0x249c + *(float *)&this_ptr->field_0x250c;
    fStack_50 = *(float *)&this_ptr->field_0x24a0 + *(float *)&this_ptr->field_0x2510;
    fStack_4c = *(float *)&this_ptr->field_0x24a4 + *(float *)&this_ptr->field_0x2514;
    fStack_84 = fStack_54;
    afStack_a4[(uint)bVar6 * -2 + 9] = afStack_a4[(uint)bVar6 * -2 + 0x15];
    afStack_a4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10] =
         afStack_a4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x16];
    fStack_78 = fStack_84 + afStack_a4[2];
    fStack_74 = fStack_80 + afStack_a4[3];
    fStack_70 = fStack_7c + fStack_94;
    CStack_b4.x = fStack_84 + afStack_a4[2];
    *(float *)((int)&CStack_b4 + (uint)bVar6 * -8 + 4) = afStack_a4[(uint)bVar6 * -2 + 0xc];
    *(float *)((int)&CStack_b4 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
         afStack_a4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
    *(uint *)&this_ptr->field_0x24a4 = 0;
    *(uint *)&this_ptr->field_0x24a0 = *(uint *)&this_ptr->field_0x24a4;
    *(uint *)&this_ptr->field_0x249c = *(uint *)&this_ptr->field_0x24a0;
    *(uint *)&this_ptr->field_0x2514 = 0;
    *(uint *)&this_ptr->field_0x2510 = *(uint *)&this_ptr->field_0x2514;
    *(uint *)&this_ptr->field_0x250c = *(uint *)&this_ptr->field_0x2510;
    core_charactr_cpp_FUN_0042d750((CCharacter *)this_ptr,&CStack_b4);
  }
  else {
    if (*(int *)&this_ptr->field_0x2700 == 0) {
      core_actor_cpp_FUN_00408bb0(this_ptr,*(int *)&this_ptr->field_0x26fc + 0x20);
      uStack_a8 = uStack_6c;
      afStack_a4[(uint)bVar6 * -2] = afStack_a4[(uint)bVar6 * -2 + 0xf];
      afStack_a4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
           afStack_a4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10];
      core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(&uStack_a8);
      uStack_90 = uStack_30;
      afStack_a4[(uint)bVar6 * -2 + 6] = afStack_a4[(uint)bVar6 * -2 + 0x1e];
      afStack_a4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
           afStack_a4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1f];
      fStack_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cd60(uStack_8c);
      fStack_18 = fStack_14;
      if (fStack_14 < _DAT_005d6ca3) {
        fStack_18 = fStack_14 + _DAT_005d6ca7;
      }
      if (_DAT_005d6cab < fStack_18) {
        fStack_18 = fStack_18 + _DAT_005d6caf;
      }
      fStack_1c = delta_time * _DAT_005d6ca7;
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
    iStack_24 = *(int *)&this_ptr->field_0x26fc;
    fStack_14 = *(float *)(iStack_24 + 0x154);
    core_skeleton_cpp_FUN_00569130(&this_ptr->field_0x158,0);
    fVar7 = fStack_14;
    iVar3 = iStack_24;
    pfVar9 = afStack_a4 + 0x17;
    afStack_48[0] = (float)uStack_3c;
    afStack_a4[(uint)bVar6 * -2 + 0x18] = afStack_a4[(uint)bVar6 * -2 + 0x1b];
    pCVar8 = this_ptr;
    afStack_a4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x19] =
         afStack_a4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1c];
    iVar3 = (**(code **)((int)fVar7 + 0x110))(iVar3,pCVar8,pfVar9);
    if (iVar3 == 0) {
      *(uint *)&this_ptr->field_0x26fc = 0;
LAB_004447f0:
      iVar3 = 0;
    }
    else {
      if (*(int *)&this_ptr->field_0x26fc == 0) goto LAB_004447f0;
      if (*(int *)&this_ptr->field_0xc1e4 == 0) goto LAB_00444803;
      iVar3 = 9;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              ((CMotionController *)&this_ptr->field_0x158,iVar3,1);
  }
LAB_00444803:
  core_charactr_cpp_CCharacter_preProcess_FUN_0042e160((CCharacter *)this_ptr);
  this_ptr_00 = (CDeformableModelInstance *)&this_ptr->field_0x158;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0(this_ptr_00);
  iVar3 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x10c))(this_ptr);
  if (iVar3 == 0) {
    blend_callback = core_skeleton_cpp_FUN_00567360;
    fVar7 = this_ptr->head_look_blend_weight;
    iVar3 = DAT_007db570;
    core_xform_cpp_FUN_005b7ed0(&this_ptr->head_look_euler);
    source_quaternions = &CStack_d4;
    CStack_d4.w = fStack_c4;
    pfVar9 = (float *)((int)&CStack_d4 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(float *)((int)&CStack_d4 + (uint)bVar6 * -8 + 4) = afStack_c0[(uint)bVar6 * -2];
    *pfVar9 = afStack_c0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    pfVar9[(uint)bVar6 * -2 + 1] =
         (afStack_c0 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_00568d60
              (this_ptr_00,source_quaternions,fVar7,iVar3,blend_callback);
  }
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433e80((CCharacter *)this_ptr,delta_time);
code_r0x0044487e:
  return;
}
