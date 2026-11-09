// Name: core_icepick.cpp_FUN_004d4c50
// Address: 004d4c50
// Address Range: [[004d4c50, 004d5460]]
// Convention: unknown
// Signature: void core_icepick_cpp_FUN_004d4c50(CIcePick *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004d52e5) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_icepick_cpp_FUN_004d4c50(CIcePick *param_1,float param_2)

{
  bool bVar1;
  int iVar2;
  CMotionController *this_ptr;
  uint uVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  float afStackY_18a4 [1522];
  CDeformableModelInstance *this_ptr_00;
  CQuaternion4f *source_quaternions;
  float fVar7;
  CIcePick *pCVar8;
  float *pfVar9;
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
  
  bVar6 = 0;
  iVar2 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0((CCharacter *)param_1,param_2);
  if (iVar2 == 0) {
    return;
  }
  if (*(int *)&param_1->field_0x25638 == 4) {
    return;
  }
  if (*(int *)&param_1->field_0x10a64 == 2) {
    core_icepick_cpp_FUN_004d5950(param_1,param_2);
  }
  *(uint *)&param_1->field_0x25660 = (uint)(*(int *)&param_1->field_0x2698 != 0);
  core_charactr_cpp_FUN_0042b2a0(param_1,param_2);
  fVar7 = *(float *)&param_1->field_0x10a60 - param_2;
  *(float *)&param_1->field_0x10a60 = fVar7;
  if (fVar7 < 0.0) {
    *(uint *)&param_1->field_0x10a60 = 0;
  }
  *(uint *)&param_1->field_0x2510 = 0;
  *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
  *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
  core_icepick_cpp_FUN_004d6140(param_1,param_2);
  *(uint *)&param_1->field_0x2594 = *(uint *)&param_1->field_0x2510;
  iVar2 = core_charactr_cpp_FUN_004287f0((CCharacter *)param_1,param_2);
  if (iVar2 == 0) {
    iVar2 = core_motion_cpp_FUN_005035c0(&param_1->field_0x2b4);
    uVar3 = *(uint *)(iVar2 + 0x24);
    if (uVar3 < 9) {
      if ((((uVar3 == 0) || (uVar3 < 2)) || (uVar3 < 3)) || (uVar3 == 3)) goto LAB_004d5052;
    }
    else {
      if (uVar3 < 10) {
        return;
      }
      if (uVar3 < 0xf) {
        if (uVar3 < 0xb) {
LAB_004d5052:
          if (*(int *)&param_1->field_0x2570 != 0) {
            iVar2 = 0;
            if ((*(int *)&param_1->field_0x25640 != 0) && (*(int *)&param_1->field_0x25660 == 0)) {
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
              if ((uVar3 == 0) || (*(int *)&param_1->field_0x25660 != 0)) {
                iVar2 = 0;
              }
              else {
                iVar2 = 10;
              }
            }
            if (*(int *)&param_1->field_0x10a74 != 0) {
              bVar1 = true;
              if ((*(int *)&param_1->field_0x25640 == 0) && (*(int *)&param_1->field_0x10a64 != 2))
              {
                iVar4 = core_hero_cpp_FUN_004cec50(param_1);
                bVar1 = false;
                if (iVar4 != 0) goto LAB_004d50f7;
                iVar4 = core_hero_cpp_FUN_004cf030(param_1,0);
                if ((iVar4 != 0) && (iVar4 != 1)) {
                  core_hero_cpp_FUN_004cf230((CHero *)param_1);
                }
                if ((iVar4 != 0) ||
                   (iVar4 = core_hero_cpp_CHero_tryTalkToNearbyCharacter_FUN_004cee90
                                      ((CHero *)param_1), iVar4 != 0)) goto LAB_004d50f7;
                iVar4 = core_hero_cpp_FUN_004cf2b0((CHero *)param_1);
                if (iVar4 != 0) {
                  core_hero_cpp_FUN_004cf440(param_1);
                  goto LAB_004d50f7;
                }
              }
              else {
LAB_004d50f7:
                if (!bVar1) goto switchD_004d528c_default;
              }
              if (*(int *)&param_1->field_0x25640 != 0) {
                if (*(int *)&param_1->field_0x25660 == 0) {
                  *(uint *)&param_1->field_0x10a74 = 0;
                  switch(*(uint *)&param_1->field_0x25644) {
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
                  iVar4 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                                    (*(uint *)&param_1->field_0x2698,
                                     g_CWeaponClassInfo.name_hash);
                  if (iVar4 != 0) {
                    (**(code **)(*(int *)(iVar4 + 0x2b0) + 0xec))(iVar4);
                  }
                }
              }
            }
switchD_004d528c_default:
            *(float *)&param_1->field_0x2578 =
                 *(float *)&param_1->field_0x10a90 * *(float *)&param_1->field_0x2598;
            iVar4 = core_motion_cpp_FUN_005035c0(&param_1->field_0x2b4);
            if (iVar2 != *(int *)(iVar4 + 0x24)) {
              if ((((iVar2 == 0xe) || (iVar2 == 0xf)) || (iVar2 == 0x10)) &&
                 (iVar4 = sound_sndmain_cpp_FUN_00550b70(*(uint *)&param_1->field_0x25648),
                 iVar4 == 0)) {
                uVar5 = (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))
                                  (param_1,"icepick-miss?.wav");
                *(uint *)&param_1->field_0x25648 = uVar5;
              }
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                        ((CMotionController *)&param_1->field_0x2b4,iVar2,1);
            }
            if ((*(int *)&param_1->field_0x10a78 != 0) &&
               (iVar2 = core_icepick_cpp_FUN_004d55e0(param_1), iVar2 == 0)) {
              core_icepick_cpp_FUN_004d5780(param_1);
            }
          }
        }
      }
      else if (((0xf < uVar3) && (0x10 < uVar3)) && (uVar3 == 0x15)) goto LAB_004d5052;
    }
  }
  else {
    *(uint *)&param_1->field_0x2510 = 0;
    *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
    *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
    uVar3 = *(uint *)&param_1->field_0x27ac;
    if (uVar3 < 2) {
      if (uVar3 == 1) {
        iVar2 = 1;
      }
      else {
LAB_004d5042:
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
          goto LAB_004d4d65;
        }
        goto LAB_004d5042;
      }
      iVar2 = 2;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)&param_1->field_0x2b4,iVar2,1);
  }
LAB_004d4d65:
  if (*(int *)&param_1->field_0x276c == 0) {
    fStack_6c = *(float *)&param_1->field_0x2508;
    fStack_68 = *(float *)&param_1->field_0x250c;
    fStack_64 = *(float *)&param_1->field_0x2510;
    core_charactr_cpp_FUN_00423a10(param_1,param_2);
    afStack_b4[3] = *(float *)&param_1->field_0x2588 * param_2;
    velocity = (CVector3f *)&fStack_6c;
    fStack_a4 = *(float *)&param_1->field_0x258c * param_2;
    fStack_a0 = *(float *)&param_1->field_0x2590 * param_2;
    fStack_84 = afStack_b4[3];
    afStack_b4[(uint)bVar6 * -2 + 0xd] = afStack_b4[(uint)bVar6 * -2 + 4];
    afStack_b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xe] =
         afStack_b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 5];
    fStack_3c = fStack_84 + *(float *)&param_1->field_0x257c;
    fStack_38 = fStack_80 + *(float *)&param_1->field_0x2580;
    fStack_34 = fStack_7c + *(float *)&param_1->field_0x2584;
    fStack_9c = fStack_3c;
    afStack_b4[(uint)bVar6 * -2 + 7] = afStack_5c[(uint)bVar6 * -2 + 9];
    afStack_b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 8] =
         afStack_5c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10];
    fStack_6c = fStack_6c + fStack_9c;
    fStack_68 = fStack_68 + fStack_98;
    fStack_64 = fStack_64 + fStack_94;
    core_charactr_cpp_FUN_00423a60((CCharacter *)param_1,velocity);
    goto LAB_004d4f1a;
  }
  if (*(int *)&param_1->field_0x2770 == 0) {
    core_actor_cpp_FUN_00408de0(param_1,*(int *)&param_1->field_0x276c + 0x20);
    uStack_60 = uStack_48;
    afStack_5c[(uint)bVar6 * -2] = afStack_5c[(uint)bVar6 * -2 + 6];
    afStack_5c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
         afStack_5c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
    core_vecdir_cpp_FUN_005838f0(&uStack_60);
    afStack_5c[2] = (float)uStack_90;
    afStack_5c[(uint)bVar6 * -2 + 3] = afStack_b4[(uint)bVar6 * -2 + 10];
    afStack_5c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
         afStack_b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xb];
    fStack_24 = (float)core_actor_cpp_FUN_0040d0c0(afStack_5c[3]);
    fStack_14 = fStack_24;
    if (fStack_24 < _DAT_005da83e) {
      fStack_14 = fStack_24 + _DAT_005da842;
    }
    if (_DAT_005da846 < fStack_14) {
      fStack_14 = fStack_14 + _DAT_005da84a;
    }
    fStack_18 = param_2 * _DAT_005da842;
    fStack_20 = -fStack_18;
    if (fStack_14 < fStack_20) {
      fStack_14 = fStack_20;
    }
    if (fStack_18 < fStack_14) {
      fStack_14 = fStack_18;
    }
    *(float *)&param_1->field_0x34 = *(float *)&param_1->field_0x34 + fStack_14;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0((CDemonActor *)param_1);
  }
  iVar2 = *(int *)&param_1->field_0x276c;
  fStack_24 = *(float *)(iVar2 + 0x2b0);
  pCStack_1c = (CMotionController *)&param_1->field_0x2b4;
  core_skeleton_cpp_FUN_00546a90(pCStack_1c,0);
  fVar7 = fStack_24;
  pfVar9 = afStack_b4 + 0xf;
  afStack_78[0] = (float)uStack_30;
  afStack_b4[(uint)bVar6 * -2 + 0x10] = afStack_5c[(uint)bVar6 * -2 + 0xc];
  pCVar8 = param_1;
  afStack_b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x11] =
       afStack_5c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
  iVar2 = (**(code **)((int)fVar7 + 0x118))(iVar2,pCVar8,pfVar9);
  if (iVar2 == 0) {
    *(uint *)&param_1->field_0x276c = 0;
LAB_004d4f07:
    iVar2 = 0;
    this_ptr = (CMotionController *)&param_1->field_0x2b4;
  }
  else {
    if (*(int *)&param_1->field_0x276c == 0) goto LAB_004d4f07;
    if (*(int *)&param_1->field_0x10a74 == 0) goto LAB_004d4f1a;
    iVar2 = 0x11;
    this_ptr = pCStack_1c;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(this_ptr,iVar2,1);
LAB_004d4f1a:
  core_inv_cpp_FUN_004dccd0((CInventory *)&param_1->field_0x2437c);
  iVar2 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                    (*(uint *)&param_1->field_0x2698,g_CWeaponClassInfo.name_hash);
  if (iVar2 != 0) {
    (**(code **)(*(int *)(iVar2 + 0x2b0) + 0x14))(iVar2,param_2);
    *(uint *)(iVar2 + 0x6c4) = 100;
  }
  core_charactr_cpp_FUN_00424470((CCharacter *)param_1);
  this_ptr_00 = (CDeformableModelInstance *)&param_1->field_0x2b4;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00(this_ptr_00);
  iVar2 = (**(code **)(*(int *)&param_1->field_0x2b0 + 0x114))(param_1);
  if (iVar2 == 0) {
    blend_callback = core_skeleton_cpp_FUN_00544cc0;
    fVar7 = *(float *)&param_1->field_0x2565c;
    iVar2 = _DAT_01cee0b4;
    core_xform_cpp_FUN_00594380(&param_1->field_0x25650);
    source_quaternions = (CQuaternion4f *)&uStack_b8;
    uStack_b8 = uStack_c8;
    afStack_b4[(uint)bVar6 * -2] = *(float *)(&stack0xffffff3c + (uint)bVar6 * -8);
    afStack_b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
         *(float *)(&stack0xffffff40 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    (afStack_b4 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1] =
         *(float *)((int)(&stack0xffffff40 + (uint)bVar6 * -8 + (uint)bVar6 * -8) +
                   ((uint)bVar6 * -2 + 1) * 4);
    core_skeleton_cpp_FUN_005466c0(this_ptr_00,source_quaternions,fVar7,iVar2,blend_callback);
  }
  core_icepick_cpp_FUN_004d5470(param_1,param_2);
  core_charactr_cpp_FUN_00429e90((CCharacter *)param_1,param_2);
  return;
}
