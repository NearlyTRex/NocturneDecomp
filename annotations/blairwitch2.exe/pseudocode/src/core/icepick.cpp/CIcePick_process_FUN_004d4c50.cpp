// Name: core_icepick.cpp_CIcePick_process_FUN_004d4c50
// Address: 004d4c50
// Address Range: [[004d4c50, 004d5460]]
// Convention: __cdecl
// Signature: void __cdecl core_icepick_cpp_CIcePick_process_FUN_004d4c50(CIcePick *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004d52e5) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_icepick_cpp_CIcePick_process_FUN_004d4c50(CIcePick *this_ptr,float delta_time)

{
  bool bVar1;
  int iVar2;
  CMotionController *this_ptr_00;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  byte bVar6;
  float afStackY_18a4 [1522];
  CDeformableModelInstance *this_ptr_01;
  CQuaternion4f *source_quaternions;
  float fVar7;
  CIcePick *pCVar8;
  float *pfVar9;
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
  
  bVar6 = 0;
  iVar2 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar2 == 0) {
    return;
  }
  if (*(int *)&this_ptr->field_0x25638 == 4) {
    return;
  }
  if (*(int *)&this_ptr->field_0x10a64 == 2) {
    core_icepick_cpp_CIcePick_processAI_FUN_004d5950(this_ptr,delta_time);
  }
  this_ptr->is_armed = (uint)(*(int *)&this_ptr->field_0x2698 != 0);
  core_charactr_cpp_FUN_0042b2a0(this_ptr,delta_time);
  fVar7 = *(float *)&this_ptr->field_0x10a60 - delta_time;
  *(float *)&this_ptr->field_0x10a60 = fVar7;
  if (fVar7 < 0.0) {
    *(uint *)&this_ptr->field_0x10a60 = 0;
  }
  *(uint *)&this_ptr->field_0x2510 = 0;
  *(uint *)&this_ptr->field_0x250c = *(uint *)&this_ptr->field_0x2510;
  *(uint *)&this_ptr->field_0x2508 = *(uint *)&this_ptr->field_0x250c;
  core_icepick_cpp_CIcePick_processMotionEvents_FUN_004d6140(this_ptr,delta_time);
  *(uint *)&this_ptr->field_0x2594 = *(uint *)&this_ptr->field_0x2510;
  iVar2 = core_charactr_cpp_CCharacter_processWalking_FUN_004287f0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar2 == 0) {
    iVar2 = core_motion_cpp_FUN_005035c0(&this_ptr->field_0x2b4);
    uVar4 = *(uint *)(iVar2 + 0x24);
    if (uVar4 < 9) {
      if ((((uVar4 == 0) || (uVar4 < 2)) || (uVar4 < 3)) || (uVar4 == 3)) goto LAB_004d5052;
    }
    else {
      if (uVar4 < 10) {
        return;
      }
      if (uVar4 < 0xf) {
        if (uVar4 < 0xb) {
LAB_004d5052:
          if (*(int *)&this_ptr->field_0x2570 != 0) {
            iVar2 = 0;
            if ((this_ptr->guns_drawn != 0) && (this_ptr->is_armed == 0)) {
              iVar2 = 10;
            }
            if (*(int *)&this_ptr->field_0x10a68 != 0) {
              if (*(int *)&this_ptr->field_0x10a70 == 0) {
                iVar2 = 1;
              }
              else {
                iVar2 = 2;
              }
            }
            if (*(int *)&this_ptr->field_0x10a6c != 0) {
              iVar2 = 3;
            }
            if (*(int *)&this_ptr->field_0x10a80 != 0) {
              *(uint *)&this_ptr->field_0x10a80 = 0;
              uVar4 = (uint)(this_ptr->guns_drawn == 0);
              this_ptr->guns_drawn = uVar4;
              if ((uVar4 == 0) || (this_ptr->is_armed != 0)) {
                iVar2 = 0;
              }
              else {
                iVar2 = 10;
              }
            }
            if (*(int *)&this_ptr->field_0x10a74 != 0) {
              bVar1 = true;
              if ((this_ptr->guns_drawn == 0) && (*(int *)&this_ptr->field_0x10a64 != 2)) {
                iVar3 = core_hero_cpp_FUN_004cec50(this_ptr);
                bVar1 = false;
                if (iVar3 != 0) goto LAB_004d50f7;
                iVar3 = core_hero_cpp_FUN_004cf030(this_ptr,0);
                if ((iVar3 != 0) && (iVar3 != 1)) {
                  core_hero_cpp_CHero_tryOpenDoor_FUN_004cf230((CHero *)this_ptr);
                }
                if ((iVar3 != 0) ||
                   (iVar3 = core_hero_cpp_CHero_tryTalkToNearbyCharacter_FUN_004cee90
                                      ((CHero *)this_ptr), iVar3 != 0)) goto LAB_004d50f7;
                iVar3 = core_hero_cpp_FUN_004cf2b0((CHero *)this_ptr);
                if (iVar3 != 0) {
                  core_hero_cpp_FUN_004cf440(this_ptr);
                  goto LAB_004d50f7;
                }
              }
              else {
LAB_004d50f7:
                if (!bVar1) goto switchD_004d528c_default;
              }
              if (this_ptr->guns_drawn != 0) {
                if (this_ptr->is_armed == 0) {
                  *(uint *)&this_ptr->field_0x10a74 = 0;
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
                  iVar3 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                                    (*(uint *)&this_ptr->field_0x2698,
                                     g_CWeaponClassInfo.name_hash);
                  if (iVar3 != 0) {
                    (**(code **)(*(int *)(iVar3 + 0x2b0) + 0xec))(iVar3);
                  }
                }
              }
            }
switchD_004d528c_default:
            *(float *)&this_ptr->field_0x2578 =
                 *(float *)&this_ptr->field_0x10a90 * *(float *)&this_ptr->field_0x2598;
            iVar3 = core_motion_cpp_FUN_005035c0(&this_ptr->field_0x2b4);
            if (iVar2 != *(int *)(iVar3 + 0x24)) {
              if ((((iVar2 == 0xe) || (iVar2 == 0xf)) || (iVar2 == 0x10)) &&
                 (iVar3 = sound_sndmain_cpp_FUN_00550b70(this_ptr->sfx_handles[0]), iVar3 == 0)) {
                uVar4 = (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x34))
                                  (this_ptr,"icepick-miss?.wav");
                this_ptr->sfx_handles[0] = uVar4;
              }
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                        ((CMotionController *)&this_ptr->field_0x2b4,iVar2,1);
            }
            if ((*(int *)&this_ptr->field_0x10a78 != 0) &&
               (iVar2 = core_icepick_cpp_FUN_004d55e0(this_ptr), iVar2 == 0)) {
              core_icepick_cpp_FUN_004d5780(this_ptr);
            }
          }
        }
      }
      else if (((0xf < uVar4) && (0x10 < uVar4)) && (uVar4 == 0x15)) goto LAB_004d5052;
    }
  }
  else {
    *(uint *)&this_ptr->field_0x2510 = 0;
    *(uint *)&this_ptr->field_0x250c = *(uint *)&this_ptr->field_0x2510;
    *(uint *)&this_ptr->field_0x2508 = *(uint *)&this_ptr->field_0x250c;
    uVar4 = *(uint *)&this_ptr->field_0x27ac;
    if (uVar4 < 2) {
      if (uVar4 == 1) {
        iVar2 = 1;
      }
      else {
LAB_004d5042:
        iVar2 = 0;
      }
    }
    else {
      if (2 < uVar4) {
        if (uVar4 == 3) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)&this_ptr->field_0x2b4,0,1);
          engine_console_cpp_FUN_00436710
                    (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
          goto LAB_004d4d65;
        }
        goto LAB_004d5042;
      }
      iVar2 = 2;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)&this_ptr->field_0x2b4,iVar2,1);
  }
LAB_004d4d65:
  if (*(int *)&this_ptr->field_0x276c == 0) {
    CStack_6c.x = *(float *)&this_ptr->field_0x2508;
    CStack_6c.y = *(float *)&this_ptr->field_0x250c;
    CStack_6c.z = *(float *)&this_ptr->field_0x2510;
    core_charactr_cpp_FUN_00423a10(this_ptr,delta_time);
    fStack_a8 = *(float *)&this_ptr->field_0x2588 * delta_time;
    velocity = &CStack_6c;
    afStack_a4[0] = *(float *)&this_ptr->field_0x258c * delta_time;
    afStack_a4[1] = *(float *)&this_ptr->field_0x2590 * delta_time;
    fStack_84 = fStack_a8;
    afStack_a4[(uint)bVar6 * -2 + 9] = afStack_a4[(uint)bVar6 * -2];
    afStack_a4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10] =
         afStack_a4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    fStack_3c = fStack_84 + *(float *)&this_ptr->field_0x257c;
    fStack_38 = fStack_80 + *(float *)&this_ptr->field_0x2580;
    fStack_34 = fStack_7c + *(float *)&this_ptr->field_0x2584;
    afStack_a4[2] = fStack_3c;
    afStack_a4[(uint)bVar6 * -2 + 3] = afStack_5c[(uint)bVar6 * -2 + 9];
    afStack_a4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
         afStack_5c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10];
    CStack_6c.x = CStack_6c.x + afStack_a4[2];
    CStack_6c.y = CStack_6c.y + afStack_a4[3];
    CStack_6c.z = CStack_6c.z + fStack_94;
    core_charactr_cpp_FUN_00423a60((CCharacter *)this_ptr,velocity);
    goto LAB_004d4f1a;
  }
  if (*(int *)&this_ptr->field_0x2770 == 0) {
    core_actor_cpp_FUN_00408de0(this_ptr,*(int *)&this_ptr->field_0x276c + 0x20);
    uStack_60 = uStack_48;
    afStack_5c[(uint)bVar6 * -2] = afStack_5c[(uint)bVar6 * -2 + 6];
    afStack_5c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
         afStack_5c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(&uStack_60);
    afStack_5c[2] = (float)uStack_90;
    afStack_5c[(uint)bVar6 * -2 + 3] = afStack_a4[(uint)bVar6 * -2 + 6];
    afStack_5c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
         afStack_a4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
    fStack_24 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0(afStack_5c[3]);
    fStack_14 = fStack_24;
    if (fStack_24 < _DAT_005da83e) {
      fStack_14 = fStack_24 + _DAT_005da842;
    }
    if (_DAT_005da846 < fStack_14) {
      fStack_14 = fStack_14 + _DAT_005da84a;
    }
    fStack_18 = delta_time * _DAT_005da842;
    fStack_20 = -fStack_18;
    if (fStack_14 < fStack_20) {
      fStack_14 = fStack_20;
    }
    if (fStack_18 < fStack_14) {
      fStack_14 = fStack_18;
    }
    *(float *)&this_ptr->field_0x34 = *(float *)&this_ptr->field_0x34 + fStack_14;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0((CDemonActor *)this_ptr);
  }
  iVar2 = *(int *)&this_ptr->field_0x276c;
  fStack_24 = *(float *)(iVar2 + 0x2b0);
  pCStack_1c = (CMotionController *)&this_ptr->field_0x2b4;
  core_skeleton_cpp_FUN_00546a90(pCStack_1c,0);
  fVar7 = fStack_24;
  pfVar9 = afStack_a4 + 0xb;
  afStack_78[0] = (float)uStack_30;
  afStack_a4[(uint)bVar6 * -2 + 0xc] = afStack_5c[(uint)bVar6 * -2 + 0xc];
  pCVar8 = this_ptr;
  afStack_a4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd] =
       afStack_5c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
  iVar2 = (**(code **)((int)fVar7 + 0x118))(iVar2,pCVar8,pfVar9);
  if (iVar2 == 0) {
    *(uint *)&this_ptr->field_0x276c = 0;
LAB_004d4f07:
    iVar2 = 0;
    this_ptr_00 = (CMotionController *)&this_ptr->field_0x2b4;
  }
  else {
    if (*(int *)&this_ptr->field_0x276c == 0) goto LAB_004d4f07;
    if (*(int *)&this_ptr->field_0x10a74 == 0) goto LAB_004d4f1a;
    iVar2 = 0x11;
    this_ptr_00 = pCStack_1c;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(this_ptr_00,iVar2,1);
LAB_004d4f1a:
  core_inv_cpp_CInventory_updateInventory_FUN_004dccd0((CInventory *)&this_ptr->field_0x2437c);
  iVar2 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                    (*(uint *)&this_ptr->field_0x2698,g_CWeaponClassInfo.name_hash);
  if (iVar2 != 0) {
    (**(code **)(*(int *)(iVar2 + 0x2b0) + 0x14))(iVar2,delta_time);
    *(uint *)(iVar2 + 0x6c4) = 100;
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00424470((CCharacter *)this_ptr);
  this_ptr_01 = (CDeformableModelInstance *)&this_ptr->field_0x2b4;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00(this_ptr_01);
  iVar2 = (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x114))(this_ptr);
  if (iVar2 == 0) {
    blend_callback = core_skeleton_cpp_FUN_00544cc0;
    fVar7 = this_ptr->head_look_blend_weight;
    iVar2 = _DAT_01cee0b4;
    core_xform_cpp_FUN_00594380(&this_ptr->head_look_euler);
    source_quaternions = &CStack_b8;
    CStack_b8.w = fStack_c8;
    puVar5 = (uint *)((int)&CStack_b8 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(uint *)((int)&CStack_b8 + (uint)bVar6 * -8 + 4) =
         *(uint *)(&stack0xffffff3c + (uint)bVar6 * -8);
    *puVar5 = *(uint *)(&stack0xffffff40 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    puVar5[(uint)bVar6 * -2 + 1] =
         *(uint *)
          ((int)(&stack0xffffff40 + (uint)bVar6 * -8 + (uint)bVar6 * -8) +
          ((uint)bVar6 * -2 + 1) * 4);
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_005466c0
              (this_ptr_01,source_quaternions,fVar7,iVar2,blend_callback);
  }
  core_icepick_cpp_FUN_004d5470(this_ptr,delta_time);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00429e90((CCharacter *)this_ptr,delta_time);
  return;
}
