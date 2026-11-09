// Name: core_icepick.cpp_FUN_004f0e50
// Address: 004f0e50
// Address Range: [[004f0e50, 004f1660]]
// Convention: unknown
// Signature: void core_icepick_cpp_FUN_004f0e50(CIcePick *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004f14e5) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_icepick_cpp_FUN_004f0e50(CIcePick *param_1,float param_2)

{
  bool bVar1;
  int iVar2;
  CMotionController *this_ptr;
  uint uVar3;
  int iVar4;
  uint uVar5;
  SMotion *pSVar6;
  byte bVar7;
  float afStackY_18a4 [1522];
  CDeformableModelInstance *this_ptr_00;
  CQuaternion4f *source_quaternions;
  float fVar8;
  CIcePick *pCVar9;
  float *pfVar10;
  code *blend_callback;
  CVector3f *velocity;
  uint uStack_c8;
  uint uStack_b8;
  float afStack_b4 [4];
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  uint uStack_90;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float afStack_78 [3];
  float fStack_6c;
  float fStack_68;
  float fStack_64;
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
  iVar2 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0((CCharacter *)param_1,param_2);
  if (iVar2 == 0) {
    return;
  }
  if (*(int *)&param_1->field_0x1ffa8 == 4) {
    return;
  }
  if (*(int *)&param_1->field_0xc1d4 == 2) {
    core_icepick_cpp_FUN_004f1b50(param_1,param_2);
  }
  *(uint *)&param_1->field_0x1ffcc = (uint)(*(int *)&param_1->field_0x2628 != 0);
  core_charactr_cpp_FUN_00435320(param_1,param_2);
  fVar8 = *(float *)&param_1->field_0xc1d0 - param_2;
  *(float *)&param_1->field_0xc1d0 = fVar8;
  if (fVar8 < 0.0) {
    *(uint *)&param_1->field_0xc1d0 = 0;
  }
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
  core_icepick_cpp_FUN_004f2340(param_1,param_2);
  *(uint *)&param_1->field_0x2524 = *(uint *)&param_1->field_0x24a4;
  iVar2 = core_charactr_cpp_FUN_00432240((CCharacter *)param_1,param_2);
  if (iVar2 == 0) {
    pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                       ((CMotionController *)&param_1->field_0x158);
    uVar3 = *(uint *)(pSVar6 + 0x24);
    if (uVar3 < 9) {
      if ((((uVar3 == 0) || (uVar3 < 2)) || (uVar3 < 3)) || (uVar3 == 3)) goto LAB_004f1252;
    }
    else {
      if (uVar3 < 10) {
        return;
      }
      if (uVar3 < 0xf) {
        if (uVar3 < 0xb) {
LAB_004f1252:
          if (*(int *)&param_1->field_0x2500 != 0) {
            iVar2 = 0;
            if ((*(int *)&param_1->field_0x1ffac != 0) && (*(int *)&param_1->field_0x1ffcc == 0)) {
              iVar2 = 10;
            }
            if (*(int *)&param_1->field_0xc1d8 != 0) {
              if (*(int *)&param_1->field_0xc1e0 == 0) {
                iVar2 = 1;
              }
              else {
                iVar2 = 2;
              }
            }
            if (*(int *)&param_1->field_0xc1dc != 0) {
              iVar2 = 3;
            }
            if (*(int *)&param_1->field_0xc1f0 != 0) {
              *(uint *)&param_1->field_0xc1f0 = 0;
              uVar3 = (uint)(*(int *)&param_1->field_0x1ffac == 0);
              *(uint *)&param_1->field_0x1ffac = uVar3;
              if ((uVar3 == 0) || (*(int *)&param_1->field_0x1ffcc != 0)) {
                iVar2 = 0;
              }
              else {
                iVar2 = 10;
              }
            }
            if (*(int *)&param_1->field_0xc1e4 != 0) {
              bVar1 = true;
              if ((*(int *)&param_1->field_0x1ffac == 0) && (*(int *)&param_1->field_0xc1d4 != 2)) {
                iVar4 = core_hero_cpp_CHero_tryInteract_FUN_004eb090((CHero *)param_1);
                bVar1 = false;
                if (iVar4 != 0) goto LAB_004f12f7;
                iVar4 = core_hero_cpp_FUN_004eb3e0(param_1,0);
                if ((iVar4 != 0) && (iVar4 != 1)) {
                  core_hero_cpp_FUN_004eb5e0((CHero *)param_1);
                }
                if ((iVar4 != 0) ||
                   (iVar4 = core_hero_cpp_CHero_tryTalkToNearbyCharacter_FUN_004eb240
                                      ((CHero *)param_1), iVar4 != 0)) goto LAB_004f12f7;
                iVar4 = core_hero_cpp_FUN_004eb660((CHero *)param_1);
                if (iVar4 != 0) {
                  core_hero_cpp_FUN_004eb7f0(param_1);
                  goto LAB_004f12f7;
                }
              }
              else {
LAB_004f12f7:
                if (!bVar1) goto switchD_004f148c_default;
              }
              if (*(int *)&param_1->field_0x1ffac != 0) {
                if (*(int *)&param_1->field_0x1ffcc == 0) {
                  *(uint *)&param_1->field_0xc1e4 = 0;
                  switch(*(uint *)&param_1->field_0x1ffb0) {
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
                  iVar4 = core_actor_cpp_castToClassHash_FUN_0040c600
                                    (*(uint *)&param_1->field_0x2628,
                                     g_CWeaponClassInfo.name_hash);
                  if (iVar4 != 0) {
                    (**(code **)(*(int *)(iVar4 + 0x154) + 0xe4))(iVar4);
                  }
                }
              }
            }
switchD_004f148c_default:
            *(float *)&param_1->field_0x2508 =
                 *(float *)&param_1->field_0xc200 * *(float *)&param_1->field_0x2528;
            pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                               ((CMotionController *)&param_1->field_0x158);
            if (iVar2 != *(int *)(pSVar6 + 0x24)) {
              if ((((iVar2 == 0xe) || (iVar2 == 0xf)) || (iVar2 == 0x10)) &&
                 (iVar4 = sound_sndmain_cpp_FUN_005735a0(*(uint *)&param_1->field_0x1ffb4),
                 iVar4 == 0)) {
                uVar5 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                                  (param_1,"icepick-miss?.wav");
                *(uint *)&param_1->field_0x1ffb4 = uVar5;
              }
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                        ((CMotionController *)&param_1->field_0x158,iVar2,1);
            }
            if ((*(int *)&param_1->field_0xc1e8 != 0) &&
               (iVar2 = core_icepick_cpp_FUN_004f17e0(param_1), iVar2 == 0)) {
              core_icepick_cpp_FUN_004f1980(param_1);
            }
          }
        }
      }
      else if (((0xf < uVar3) && (0x10 < uVar3)) && (uVar3 == 0x15)) goto LAB_004f1252;
    }
  }
  else {
    *(uint *)&param_1->field_0x24a4 = 0;
    *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
    *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
    uVar3 = *(uint *)&param_1->field_0x273c;
    if (uVar3 < 2) {
      if (uVar3 == 1) {
        iVar2 = 1;
      }
      else {
LAB_004f1242:
        iVar2 = 0;
      }
    }
    else {
      if (2 < uVar3) {
        if (uVar3 == 3) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)&param_1->field_0x158,0,1);
          engine_console_cpp_FUN_00445430(g_CConsolePtr,"%s confused while walking to scriptDest!\n",param_1)
          ;
          goto LAB_004f0f65;
        }
        goto LAB_004f1242;
      }
      iVar2 = 2;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              ((CMotionController *)&param_1->field_0x158,iVar2,1);
  }
LAB_004f0f65:
  if (*(int *)&param_1->field_0x26fc == 0) {
    fStack_6c = *(float *)&param_1->field_0x249c;
    fStack_68 = *(float *)&param_1->field_0x24a0;
    fStack_64 = *(float *)&param_1->field_0x24a4;
    core_charactr_cpp_FUN_0042d700(param_1,param_2);
    afStack_b4[3] = *(float *)&param_1->field_0x2518 * param_2;
    velocity = (CVector3f *)&fStack_6c;
    fStack_a4 = *(float *)&param_1->field_0x251c * param_2;
    fStack_a0 = *(float *)&param_1->field_0x2520 * param_2;
    fStack_84 = afStack_b4[3];
    afStack_b4[(uint)bVar7 * -2 + 0xd] = afStack_b4[(uint)bVar7 * -2 + 4];
    afStack_b4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xe] =
         afStack_b4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 5];
    fStack_3c = fStack_84 + *(float *)&param_1->field_0x250c;
    fStack_38 = fStack_80 + *(float *)&param_1->field_0x2510;
    fStack_34 = fStack_7c + *(float *)&param_1->field_0x2514;
    fStack_9c = fStack_3c;
    afStack_b4[(uint)bVar7 * -2 + 7] = afStack_5c[(uint)bVar7 * -2 + 9];
    afStack_b4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 8] =
         afStack_5c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10];
    fStack_6c = fStack_6c + fStack_9c;
    fStack_68 = fStack_68 + fStack_98;
    fStack_64 = fStack_64 + fStack_94;
    core_charactr_cpp_FUN_0042d750((CCharacter *)param_1,velocity);
    goto LAB_004f111a;
  }
  if (*(int *)&param_1->field_0x2700 == 0) {
    core_actor_cpp_FUN_00408bb0(param_1,*(int *)&param_1->field_0x26fc + 0x20);
    uStack_60 = uStack_48;
    afStack_5c[(uint)bVar7 * -2] = afStack_5c[(uint)bVar7 * -2 + 6];
    afStack_5c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
         afStack_5c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
    core_vecdir_cpp_FUN_005a7520(&uStack_60);
    afStack_5c[2] = (float)uStack_90;
    afStack_5c[(uint)bVar7 * -2 + 3] = afStack_b4[(uint)bVar7 * -2 + 10];
    afStack_5c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
         afStack_b4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xb];
    fStack_24 = (float)core_actor_cpp_FUN_0040cd60(afStack_5c[3]);
    fStack_14 = fStack_24;
    if (fStack_24 < _DAT_005e539f) {
      fStack_14 = fStack_24 + _DAT_005e53a3;
    }
    if (_DAT_005e53a7 < fStack_14) {
      fStack_14 = fStack_14 + _DAT_005e53ab;
    }
    fStack_18 = param_2 * _DAT_005e53a3;
    fStack_20 = -fStack_18;
    if (fStack_14 < fStack_20) {
      fStack_14 = fStack_20;
    }
    if (fStack_18 < fStack_14) {
      fStack_14 = fStack_18;
    }
    *(float *)&param_1->field_0x34 = *(float *)&param_1->field_0x34 + fStack_14;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0((CDemonActor *)param_1);
  }
  iVar2 = *(int *)&param_1->field_0x26fc;
  fStack_24 = *(float *)(iVar2 + 0x154);
  pCStack_1c = (CMotionController *)&param_1->field_0x158;
  core_skeleton_cpp_FUN_00569130(pCStack_1c,0);
  fVar8 = fStack_24;
  pfVar10 = afStack_b4 + 0xf;
  afStack_78[0] = (float)uStack_30;
  afStack_b4[(uint)bVar7 * -2 + 0x10] = afStack_5c[(uint)bVar7 * -2 + 0xc];
  pCVar9 = param_1;
  afStack_b4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x11] =
       afStack_5c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd];
  iVar2 = (**(code **)((int)fVar8 + 0x110))(iVar2,pCVar9,pfVar10);
  if (iVar2 == 0) {
    *(uint *)&param_1->field_0x26fc = 0;
LAB_004f1107:
    iVar2 = 0;
    this_ptr = (CMotionController *)&param_1->field_0x158;
  }
  else {
    if (*(int *)&param_1->field_0x26fc == 0) goto LAB_004f1107;
    if (*(int *)&param_1->field_0xc1e4 == 0) goto LAB_004f111a;
    iVar2 = 0x11;
    this_ptr = pCStack_1c;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(this_ptr,iVar2,1);
LAB_004f111a:
  core_inv_cpp_FUN_004f9f10(&param_1->field_0x1fae8);
  iVar2 = core_actor_cpp_castToClassHash_FUN_0040c600
                    (*(uint *)&param_1->field_0x2628,g_CWeaponClassInfo.name_hash);
  if (iVar2 != 0) {
    (**(code **)(*(int *)(iVar2 + 0x154) + 0xc))(iVar2,param_2);
    *(uint *)(iVar2 + 0x568) = 100;
  }
  core_charactr_cpp_FUN_0042e160((CCharacter *)param_1);
  this_ptr_00 = (CDeformableModelInstance *)&param_1->field_0x158;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0(this_ptr_00);
  iVar2 = (**(code **)(*(int *)&param_1->field_0x154 + 0x10c))(param_1);
  if (iVar2 == 0) {
    blend_callback = core_skeleton_cpp_FUN_00567360;
    fVar8 = *(float *)&param_1->field_0x1ffc8;
    iVar2 = _DAT_01d06c74;
    core_xform_cpp_FUN_005b7ed0(&param_1->field_0x1ffbc);
    source_quaternions = (CQuaternion4f *)&uStack_b8;
    uStack_b8 = uStack_c8;
    afStack_b4[(uint)bVar7 * -2] = *(float *)(&stack0xffffff3c + (uint)bVar7 * -8);
    afStack_b4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
         *(float *)(&stack0xffffff40 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
    (afStack_b4 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
         *(float *)((int)(&stack0xffffff40 + (uint)bVar7 * -8 + (uint)bVar7 * -8) +
                   ((uint)bVar7 * -2 + 1) * 4);
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_00568d60
              (this_ptr_00,source_quaternions,fVar8,iVar2,blend_callback);
  }
  core_icepick_cpp_FUN_004f1670(param_1,param_2);
  core_charactr_cpp_FUN_00433e80((CCharacter *)param_1,param_2);
  return;
}
