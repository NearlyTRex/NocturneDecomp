// Name: core_icepick.cpp_CIcePick_process_FUN_004f0e50
// Address: 004f0e50
// Address Range: [[004f0e50, 004f1660]]
// Convention: __cdecl
// Signature: void __cdecl core_icepick_cpp_CIcePick_process_FUN_004f0e50(CIcePick *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004f14e5) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_icepick_cpp_CIcePick_process_FUN_004f0e50(CIcePick *this_ptr,float delta_time)

{
  bool bVar1;
  int iVar2;
  CMotionController *this_ptr_00;
  int iVar3;
  uint uVar4;
  SMotion *pSVar5;
  uint *puVar6;
  byte bVar7;
  float afStackY_18a4 [1522];
  CDeformableModelInstance *this_ptr_01;
  CQuaternion4f *source_quaternions;
  float fVar8;
  CIcePick *pCVar9;
  float *pfVar10;
  code *blend_callback;
  CVector3f *velocity;
  float fStack_c8;
  CQuaternion4f CStack_b8;
  float fStack_a8;
  float afStack_a4 [4];
  float fStack_94;
  uint uStack_90;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float afStack_78 [3];
  CVector3f CStack_6c;
  uint uStack_60;
  float afStack_5c [5];
  uint uStack_48;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  uint uStack_30;
  float fStack_24;
  float fStack_20;
  CMotionController *pCStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar7 = 0;
  iVar2 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar2 == 0) {
    return;
  }
  if (*(int *)&this_ptr->field_0x1ffa8 == 4) {
    return;
  }
  if (*(int *)&this_ptr->field_0xc1d4 == 2) {
    core_icepick_cpp_FUN_004f1b50(this_ptr,delta_time);
  }
  this_ptr->is_armed = (uint)(*(int *)&this_ptr->field_0x2628 != 0);
  core_charactr_cpp_FUN_00435320(this_ptr,delta_time);
  fVar8 = *(float *)&this_ptr->field_0xc1d0 - delta_time;
  *(float *)&this_ptr->field_0xc1d0 = fVar8;
  if (fVar8 < 0.0) {
    *(uint *)&this_ptr->field_0xc1d0 = 0;
  }
  *(uint *)&this_ptr->field_0x24a4 = 0;
  *(uint *)&this_ptr->field_0x24a0 = *(uint *)&this_ptr->field_0x24a4;
  *(uint *)&this_ptr->field_0x249c = *(uint *)&this_ptr->field_0x24a0;
  core_icepick_cpp_FUN_004f2340(this_ptr,delta_time);
  *(uint *)&this_ptr->field_0x2524 = *(uint *)&this_ptr->field_0x24a4;
  iVar2 = core_charactr_cpp_CCharacter_processWalking_FUN_00432240
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar2 == 0) {
    pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                       ((CMotionController *)&this_ptr->field_0x158);
    uVar4 = *(uint *)(pSVar5 + 0x24);
    if (uVar4 < 9) {
      if ((((uVar4 == 0) || (uVar4 < 2)) || (uVar4 < 3)) || (uVar4 == 3)) goto LAB_004f1252;
    }
    else {
      if (uVar4 < 10) {
        return;
      }
      if (uVar4 < 0xf) {
        if (uVar4 < 0xb) {
LAB_004f1252:
          if (*(int *)&this_ptr->field_0x2500 != 0) {
            iVar2 = 0;
            if ((this_ptr->guns_drawn != 0) && (this_ptr->is_armed == 0)) {
              iVar2 = 10;
            }
            if (*(int *)&this_ptr->field_0xc1d8 != 0) {
              if (*(int *)&this_ptr->field_0xc1e0 == 0) {
                iVar2 = 1;
              }
              else {
                iVar2 = 2;
              }
            }
            if (*(int *)&this_ptr->field_0xc1dc != 0) {
              iVar2 = 3;
            }
            if (*(int *)&this_ptr->field_0xc1f0 != 0) {
              *(uint *)&this_ptr->field_0xc1f0 = 0;
              uVar4 = (uint)(this_ptr->guns_drawn == 0);
              this_ptr->guns_drawn = uVar4;
              if ((uVar4 == 0) || (this_ptr->is_armed != 0)) {
                iVar2 = 0;
              }
              else {
                iVar2 = 10;
              }
            }
            if (*(int *)&this_ptr->field_0xc1e4 != 0) {
              bVar1 = true;
              if ((this_ptr->guns_drawn == 0) && (*(int *)&this_ptr->field_0xc1d4 != 2)) {
                iVar3 = core_hero_cpp_CHero_tryInteract_FUN_004eb090((CHero *)this_ptr);
                bVar1 = false;
                if (iVar3 != 0) goto LAB_004f12f7;
                iVar3 = core_hero_cpp_FUN_004eb3e0(this_ptr,0);
                if ((iVar3 != 0) && (iVar3 != 1)) {
                  core_hero_cpp_CHero_tryOpenDoor_FUN_004eb5e0((CHero *)this_ptr);
                }
                if ((iVar3 != 0) ||
                   (iVar3 = core_hero_cpp_CHero_tryTalkToNearbyCharacter_FUN_004eb240
                                      ((CHero *)this_ptr), iVar3 != 0)) goto LAB_004f12f7;
                iVar3 = core_hero_cpp_FUN_004eb660((CHero *)this_ptr);
                if (iVar3 != 0) {
                  core_hero_cpp_FUN_004eb7f0(this_ptr);
                  goto LAB_004f12f7;
                }
              }
              else {
LAB_004f12f7:
                if (!bVar1) goto switchD_004f148c_default;
              }
              if (this_ptr->guns_drawn != 0) {
                if (this_ptr->is_armed == 0) {
                  *(uint *)&this_ptr->field_0xc1e4 = 0;
                  switch(this_ptr->attack_count) {
                  case 0:
                  case 2:
                    iVar2 = 0xe;
                    break;
                  case 1:
                  case 3:
                    iVar2 = 0xf;
                    break;
                  case 4:
                    iVar2 = 0x10;
                  }
                }
                else {
                  iVar3 = core_actor_cpp_castToClassHash_FUN_0040c600
                                    (*(uint *)&this_ptr->field_0x2628,
                                     g_CWeaponClassInfo.name_hash);
                  if (iVar3 != 0) {
                    (**(code **)(*(int *)(iVar3 + 0x154) + 0xe4))(iVar3);
                  }
                }
              }
            }
switchD_004f148c_default:
            *(float *)&this_ptr->field_0x2508 =
                 *(float *)&this_ptr->field_0xc200 * *(float *)&this_ptr->field_0x2528;
            pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                               ((CMotionController *)&this_ptr->field_0x158);
            if (iVar2 != *(int *)(pSVar5 + 0x24)) {
              if ((((iVar2 == 0xe) || (iVar2 == 0xf)) || (iVar2 == 0x10)) &&
                 (iVar3 = sound_sndmain_cpp_FUN_005735a0(this_ptr->sfx_handles[0]), iVar3 == 0)) {
                uVar4 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))
                                  (this_ptr,"icepick-miss?.wav");
                this_ptr->sfx_handles[0] = uVar4;
              }
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                        ((CMotionController *)&this_ptr->field_0x158,iVar2,1);
            }
            if ((*(int *)&this_ptr->field_0xc1e8 != 0) &&
               (iVar2 = core_icepick_cpp_FUN_004f17e0(this_ptr), iVar2 == 0)) {
              core_icepick_cpp_CIcePick_startThrowAttack_FUN_004f1980(this_ptr);
            }
          }
        }
      }
      else if (((0xf < uVar4) && (0x10 < uVar4)) && (uVar4 == 0x15)) goto LAB_004f1252;
    }
  }
  else {
    *(uint *)&this_ptr->field_0x24a4 = 0;
    *(uint *)&this_ptr->field_0x24a0 = *(uint *)&this_ptr->field_0x24a4;
    *(uint *)&this_ptr->field_0x249c = *(uint *)&this_ptr->field_0x24a0;
    uVar4 = *(uint *)&this_ptr->field_0x273c;
    if (uVar4 < 2) {
      if (uVar4 == 1) {
        iVar2 = 1;
      }
      else {
LAB_004f1242:
        iVar2 = 0;
      }
    }
    else {
      if (2 < uVar4) {
        if (uVar4 == 3) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)&this_ptr->field_0x158,0,1);
          engine_console_cpp_FUN_00445430
                    (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
          goto LAB_004f0f65;
        }
        goto LAB_004f1242;
      }
      iVar2 = 2;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              ((CMotionController *)&this_ptr->field_0x158,iVar2,1);
  }
LAB_004f0f65:
  if (*(int *)&this_ptr->field_0x26fc == 0) {
    CStack_6c.x = *(float *)&this_ptr->field_0x249c;
    CStack_6c.y = *(float *)&this_ptr->field_0x24a0;
    CStack_6c.z = *(float *)&this_ptr->field_0x24a4;
    core_charactr_cpp_FUN_0042d700(this_ptr,delta_time);
    fStack_a8 = *(float *)&this_ptr->field_0x2518 * delta_time;
    velocity = &CStack_6c;
    afStack_a4[0] = *(float *)&this_ptr->field_0x251c * delta_time;
    afStack_a4[1] = *(float *)&this_ptr->field_0x2520 * delta_time;
    fStack_84 = fStack_a8;
    afStack_a4[(uint)bVar7 * -2 + 9] = afStack_a4[(uint)bVar7 * -2];
    afStack_a4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
         afStack_a4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
    fStack_3c = fStack_84 + *(float *)&this_ptr->field_0x250c;
    fStack_38 = fStack_80 + *(float *)&this_ptr->field_0x2510;
    fStack_34 = fStack_7c + *(float *)&this_ptr->field_0x2514;
    afStack_a4[2] = fStack_3c;
    afStack_a4[(uint)bVar7 * -2 + 3] = afStack_5c[(uint)bVar7 * -2 + 9];
    afStack_a4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
         afStack_5c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10];
    CStack_6c.x = CStack_6c.x + afStack_a4[2];
    CStack_6c.y = CStack_6c.y + afStack_a4[3];
    CStack_6c.z = CStack_6c.z + fStack_94;
    core_charactr_cpp_FUN_0042d750((CCharacter *)this_ptr,velocity);
    goto LAB_004f111a;
  }
  if (*(int *)&this_ptr->field_0x2700 == 0) {
    core_actor_cpp_FUN_00408bb0(this_ptr,*(int *)&this_ptr->field_0x26fc + 0x20);
    uStack_60 = uStack_48;
    afStack_5c[(uint)bVar7 * -2] = afStack_5c[(uint)bVar7 * -2 + 6];
    afStack_5c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
         afStack_5c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(&uStack_60);
    afStack_5c[2] = (float)uStack_90;
    afStack_5c[(uint)bVar7 * -2 + 3] = afStack_a4[(uint)bVar7 * -2 + 6];
    afStack_5c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
         afStack_a4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
    fStack_24 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cd60(afStack_5c[3]);
    fStack_14 = fStack_24;
    if (fStack_24 < _DAT_005e539f) {
      fStack_14 = fStack_24 + _DAT_005e53a3;
    }
    if (_DAT_005e53a7 < fStack_14) {
      fStack_14 = fStack_14 + _DAT_005e53ab;
    }
    fStack_18 = delta_time * _DAT_005e53a3;
    fStack_20 = -fStack_18;
    if (fStack_14 < fStack_20) {
      fStack_14 = fStack_20;
    }
    if (fStack_18 < fStack_14) {
      fStack_14 = fStack_18;
    }
    *(float *)&this_ptr->field_0x34 = *(float *)&this_ptr->field_0x34 + fStack_14;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0((CDemonActor *)this_ptr);
  }
  iVar2 = *(int *)&this_ptr->field_0x26fc;
  fStack_24 = *(float *)(iVar2 + 0x154);
  pCStack_1c = (CMotionController *)&this_ptr->field_0x158;
  core_skeleton_cpp_FUN_00569130(pCStack_1c,0);
  fVar8 = fStack_24;
  pfVar10 = afStack_a4 + 0xb;
  afStack_78[0] = (float)uStack_30;
  afStack_a4[(uint)bVar7 * -2 + 0xc] = afStack_5c[(uint)bVar7 * -2 + 0xc];
  pCVar9 = this_ptr;
  afStack_a4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd] =
       afStack_5c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd];
  iVar2 = (**(code **)((int)fVar8 + 0x110))(iVar2,pCVar9,pfVar10);
  if (iVar2 == 0) {
    *(uint *)&this_ptr->field_0x26fc = 0;
LAB_004f1107:
    iVar2 = 0;
    this_ptr_00 = (CMotionController *)&this_ptr->field_0x158;
  }
  else {
    if (*(int *)&this_ptr->field_0x26fc == 0) goto LAB_004f1107;
    if (*(int *)&this_ptr->field_0xc1e4 == 0) goto LAB_004f111a;
    iVar2 = 0x11;
    this_ptr_00 = pCStack_1c;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(this_ptr_00,iVar2,1);
LAB_004f111a:
  core_inv_cpp_FUN_004f9f10(&this_ptr->field_0x1fae8);
  iVar2 = core_actor_cpp_castToClassHash_FUN_0040c600
                    (*(uint *)&this_ptr->field_0x2628,g_CWeaponClassInfo.name_hash);
  if (iVar2 != 0) {
    (**(code **)(*(int *)(iVar2 + 0x154) + 0xc))(iVar2,delta_time);
    *(uint *)(iVar2 + 0x568) = 100;
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_0042e160((CCharacter *)this_ptr);
  this_ptr_01 = (CDeformableModelInstance *)&this_ptr->field_0x158;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0(this_ptr_01);
  iVar2 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x10c))(this_ptr);
  if (iVar2 == 0) {
    blend_callback = core_skeleton_cpp_FUN_00567360;
    fVar8 = this_ptr->head_look_blend_weight;
    iVar2 = _DAT_01d06c74;
    core_xform_cpp_FUN_005b7ed0(&this_ptr->head_look_euler);
    source_quaternions = &CStack_b8;
    CStack_b8.w = fStack_c8;
    puVar6 = (uint *)((int)&CStack_b8 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
    *(uint *)((int)&CStack_b8 + (uint)bVar7 * -8 + 4) =
         *(uint *)(&stack0xffffff3c + (uint)bVar7 * -8);
    *puVar6 = *(uint *)(&stack0xffffff40 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
    puVar6[(uint)bVar7 * -2 + 1] =
         *(uint *)
          ((int)(&stack0xffffff40 + (uint)bVar7 * -8 + (uint)bVar7 * -8) +
          ((uint)bVar7 * -2 + 1) * 4);
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_00568d60
              (this_ptr_01,source_quaternions,fVar8,iVar2,blend_callback);
  }
  core_icepick_cpp_FUN_004f1670(this_ptr,delta_time);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433e80((CCharacter *)this_ptr,delta_time);
  return;
}
