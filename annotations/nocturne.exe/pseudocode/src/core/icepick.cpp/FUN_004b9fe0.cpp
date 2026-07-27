// Name: core_icepick.cpp_FUN_004b9fe0
// Address: 004b9fe0
// Address Range: [[004b9fe0, 004ba737]]
// Convention: unknown
// Signature: void core_icepick_cpp_FUN_004b9fe0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004ba5ee) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_icepick_cpp_FUN_004b9fe0(int param_1,float param_2)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  byte bVar8;
  float afStackY_1870 [1521];
  float local_98;
  uint uStack_94;
  uint uStack_84;
  byte local_74 [12];
  byte local_68 [12];
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  byte local_44 [12];
  float local_38;
  float local_34;
  float local_30;
  int local_24;
  int iStack_20;
  float local_1c;
  float local_18;
  float local_14;
  
  bVar8 = 0;
  iVar4 = core_charactr_cpp_FUN_004259f0(param_1,param_2);
  if (iVar4 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x1fa38) == 4) {
    return;
  }
  if (*(int *)(param_1 + 0xbc90) == 2) {
    core_icepick_cpp_FUN_004baba0(param_1,param_2);
  }
  fVar3 = (float)12.566370614;
  *(uint *)(param_1 + 0x1fa5c) = (uint)(*(int *)(param_1 + 0x24f0) != 0);
  fVar2 = *(float *)(param_1 + 0xbc8c) - param_2;
  *(float *)(param_1 + 0x2430) = param_2 * fVar3;
  *(float *)(param_1 + 0xbc8c) = fVar2;
  if (fVar2 < 0.0) {
    *(uint *)(param_1 + 0xbc8c) = 0;
  }
  *(uint *)(param_1 + 0x23ac) = 0;
  *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
  *(uint *)(param_1 + 0x23a4) = *(uint *)(param_1 + 0x23a8);
  core_icepick_cpp_CIcePick_processMotionEvents_FUN_004bb2d0(param_1,param_2);
  *(uint *)(param_1 + 0x242c) = *(uint *)(param_1 + 0x23ac);
  iVar4 = core_charactr_cpp_FUN_00428c00(param_1,param_2);
  if (iVar4 == 0) {
    iVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(param_1 + 0x150);
    uVar6 = *(uint *)(iVar4 + 0x24);
    if (uVar6 < 9) {
      if ((((uVar6 == 0) || (uVar6 < 2)) || (uVar6 < 3)) || (uVar6 == 3)) goto LAB_004ba357;
    }
    else {
      if (uVar6 < 10) {
        return;
      }
      if (uVar6 < 0xf) {
        if (uVar6 < 0xb) {
LAB_004ba357:
          if (*(int *)(param_1 + 0x2408) != 0) {
            iVar4 = 0;
            if ((*(int *)(param_1 + 0x1fa3c) != 0) && (*(int *)(param_1 + 0x1fa5c) == 0)) {
              iVar4 = 10;
            }
            if (*(int *)(param_1 + 0xbc94) != 0) {
              if (*(int *)(param_1 + 0xbc9c) == 0) {
                iVar4 = 1;
              }
              else {
                iVar4 = 2;
              }
            }
            if (*(int *)(param_1 + 0xbc98) != 0) {
              iVar4 = 3;
            }
            if (*(int *)(param_1 + 0xbcac) != 0) {
              *(uint *)(param_1 + 0xbcac) = 0;
              uVar6 = (uint)(*(int *)(param_1 + 0x1fa3c) == 0);
              *(uint *)(param_1 + 0x1fa3c) = uVar6;
              if ((uVar6 == 0) || (*(int *)(param_1 + 0x1fa5c) != 0)) {
                iVar4 = 0;
              }
              else {
                iVar4 = 10;
              }
            }
            if (*(int *)(param_1 + 0xbca0) != 0) {
              bVar1 = true;
              if ((*(int *)(param_1 + 0x1fa3c) == 0) && (*(int *)(param_1 + 0xbc90) != 2)) {
                iVar7 = core_hero_cpp_CHero_tryInteract_FUN_004b4e90(param_1);
                bVar1 = false;
                if (iVar7 != 0) goto LAB_004ba3fc;
                local_24 = core_hero_cpp_FUN_004b5110(param_1);
                if ((local_24 != 0) && (local_24 != 1)) {
                  core_hero_cpp_FUN_004b5270(param_1);
                }
                if ((local_24 != 0) ||
                   (iVar7 = core_hero_cpp_CHero_tryTalkToNearbyCharacter_FUN_004b4fe0(param_1),
                   iVar7 != 0)) goto LAB_004ba3fc;
                iVar7 = core_hero_cpp_FUN_004b52f0(param_1);
                if (iVar7 != 0) {
                  core_hero_cpp_CHero_executeLeverPull_FUN_004b5490(param_1);
                  goto LAB_004ba3fc;
                }
              }
              else {
LAB_004ba3fc:
                if (!bVar1) goto switchD_004ba595_default;
              }
              if (*(int *)(param_1 + 0x1fa3c) != 0) {
                if (*(int *)(param_1 + 0x1fa5c) == 0) {
                  *(uint *)(param_1 + 0xbca0) = 0;
                  switch(*(uint *)(param_1 + 0x1fa40)) {
                  case 0:
                  case 2:
                    iVar4 = 0xe;
                    break;
                  case 1:
                  case 3:
                    iVar4 = 0xf;
                    break;
                  case 4:
                    iVar4 = 0x10;
                  }
                }
                else {
                  iVar7 = core_actor_cpp_castToClassHash_FUN_0040d890
                                    (*(uint *)(param_1 + 0x24f0),
                                     g_CWeaponActorType_02ddf970.name_hash);
                  if (iVar7 != 0) {
                    (**(code **)(*(int *)(iVar7 + 0x14c) + 0xdc))(iVar7);
                  }
                }
              }
            }
switchD_004ba595_default:
            *(float *)(param_1 + 0x2410) =
                 *(float *)(param_1 + 0xbcb8) * *(float *)(param_1 + 0x2430);
            iVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(param_1 + 0x150)
            ;
            if (iVar4 != *(int *)(iVar7 + 0x24)) {
              if ((((iVar4 == 0xe) || (iVar4 == 0xf)) || (iVar4 == 0x10)) &&
                 (iVar7 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50
                                    (*(uint *)(param_1 + 0x1fa44)), iVar7 == 0)) {
                uVar5 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))
                                  (param_1,"icepick-miss?.wav");
                *(uint *)(param_1 + 0x1fa44) = uVar5;
              }
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                        (param_1 + 0x150,iVar4,1);
            }
            if ((*(int *)(param_1 + 0xbca4) != 0) &&
               (iVar4 = core_icepick_cpp_CIcePick_findAndPickupGun_FUN_004ba8a0(param_1), iVar4 == 0
               )) {
              core_icepick_cpp_CIcePick_startThrowAttack_FUN_004baa00(param_1);
            }
          }
        }
      }
      else if (((0xf < uVar6) && (0x10 < uVar6)) && (uVar6 == 0x15)) goto LAB_004ba357;
    }
  }
  else {
    *(uint *)(param_1 + 0x23ac) = 0;
    *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
    *(uint *)(param_1 + 0x23a4) = *(uint *)(param_1 + 0x23a8);
    uVar6 = *(uint *)(param_1 + 0x25a8);
    if (uVar6 < 2) {
      if (uVar6 == 1) {
        uVar5 = 1;
      }
      else {
LAB_004ba347:
        uVar5 = 0;
      }
    }
    else {
      if (2 < uVar6) {
        if (uVar6 == 3) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,0,1);
          engine_console_cpp_CConsole_printf_FUN_0043ac60
                    (PTR_DAT_005ad350,"%s confused while walking to scriptDest!\n",param_1);
          goto LAB_004ba0e6;
        }
        goto LAB_004ba347;
      }
      uVar5 = 2;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,uVar5,1);
  }
LAB_004ba0e6:
  if (*(int *)(param_1 + 0x2590) == 0) {
    *(float *)(param_1 + 0x2424) = *(float *)(param_1 + 0x2424) - param_2 * (float)32;
    local_50 = *(float *)(param_1 + 0x2420) * param_2;
    local_4c = *(float *)(param_1 + 0x2424) * param_2;
    local_48 = param_2 * *(float *)(param_1 + 0x2428);
    local_5c = local_50 + *(float *)(param_1 + 0x2414);
    local_58 = local_4c + *(float *)(param_1 + 0x2418);
    local_38 = *(float *)(param_1 + 0x23a4) + local_5c;
    local_54 = local_48 + *(float *)(param_1 + 0x241c);
    local_34 = *(float *)(param_1 + 0x23a8) + local_58;
    local_30 = *(float *)(param_1 + 0x23ac) + local_54;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050(param_1,&local_38);
    goto LAB_004ba228;
  }
  if (*(int *)(param_1 + 0x2594) == 0) {
    uVar5 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                      (param_1,local_68,*(int *)(param_1 + 0x2590) + 0x20);
    iVar4 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(local_44,uVar5);
    local_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00(*(uint *)(iVar4 + 4));
    local_98 = local_14;
    if (local_14 < (float)-1.57079632675) {
      local_98 = local_14 + 3.141593f;
    }
    if ((float)1.57079632675 < local_98) {
      local_98 = local_98 + 1.5938625219265179e-314._0_4_;
    }
    local_18 = param_2 * (float)3.1415926535000001;
    local_1c = -local_18;
    if (local_98 < local_1c) {
      local_98 = local_1c;
    }
    if (local_18 < local_98) {
      local_98 = local_18;
    }
    *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) + local_98;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000(param_1);
  }
  iVar4 = *(int *)(param_1 + 0x2590);
  local_14 = *(float *)(iVar4 + 0x14c);
  uVar5 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                    (param_1 + 0x150,local_74,0);
  iVar4 = (**(code **)((int)local_14 + 0x108))(iVar4,param_1,uVar5);
  if (iVar4 == 0) {
    *(uint *)(param_1 + 0x2590) = 0;
LAB_004ba215:
    uVar5 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x2590) == 0) goto LAB_004ba215;
    if (*(int *)(param_1 + 0xbca0) == 0) goto LAB_004ba228;
    uVar5 = 0x11;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,uVar5,1);
LAB_004ba228:
  core_inv_cpp_CInventory_updateInventory_FUN_004c1850(param_1 + 0x1f5a0);
  iVar4 = core_actor_cpp_castToClassHash_FUN_0040d890
                    (*(uint *)(param_1 + 0x24f0),g_CWeaponActorType_02ddf970.name_hash);
  if (iVar4 != 0) {
    (**(code **)(*(int *)(iVar4 + 0x14c) + 4))(iVar4,param_2);
    *(uint *)(iVar4 + 0x560) = 100;
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_004259a0(param_1);
  iStack_20 = param_1 + 0x150;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(iStack_20);
  iVar4 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x104))(param_1);
  if (iVar4 == 0) {
    core_xform_cpp_FUN_0055d610
              (param_1 + 0x1fa4c,*(uint *)(param_1 + 0x1fa58),_DAT_01cae288,
               core_skeleton_cpp_FUN_0051b650);
    uStack_84 = uStack_94;
    *(uint *)((int)&stack0xffffff80 + (uint)bVar8 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffff70 + (uint)bVar8 * -8);
    *(uint *)(&stack0xffffff84 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
         *(uint *)(&stack0xffffff74 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
    *(uint *)
     ((int)(&stack0xffffff84 + (uint)bVar8 * -8 + (uint)bVar8 * -8) + ((uint)bVar8 * -2 + 1) * 4) =
         *(uint *)
          ((int)(&stack0xffffff74 + (uint)bVar8 * -8 + (uint)bVar8 * -8) +
          ((uint)bVar8 * -2 + 1) * 4);
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0051cfd0
              (iStack_20,&stack0xffffff7c);
  }
  core_icepick_cpp_FUN_004ba740(param_1,param_2);
  core_charactr_cpp_FUN_0042a150(param_1,param_2);
  return;
}
