// Name: FUN_004fbf20
// Address: 004fbf20
// Address Range: [[004fbf20, 004fc60d]]
// Convention: unknown
// Signature: void FUN_004fbf20(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004fbf20(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  float fVar11;
  int iVar12;
  int iVar13;
  byte bVar14;
  float afStackY_1860 [1521];
  uint *puVar15;
  uint uVar16;
  float local_88;
  uint uStack_84;
  uint uStack_74;
  float local_64;
  float local_60;
  float local_5c;
  byte local_58 [12];
  float local_4c;
  float local_48;
  float local_44;
  byte local_40 [12];
  byte local_34 [20];
  int iStack_20;
  float local_1c;
  float local_18;
  float local_14;
  
  bVar14 = 0;
  iVar12 = core_charactr_cpp_FUN_004259f0(param_1,param_2);
  iVar13 = 0x01C775EC;
  if (iVar12 == 0) {
    return;
  }
  *(float *)(param_1 + 0x2430) = param_2 * (float)_DAT_0058de9e;
  if (*(int *)(iVar13 + 0x228) != 0) {
    *(float *)(param_1 + 0x2430) = *(float *)(param_1 + 0x2430) * (float)_DAT_0058dea6;
  }
  fVar1 = *(float *)(param_1 + 0xbc8c) - param_2;
  *(float *)(param_1 + 0xbc8c) = fVar1;
  if (fVar1 < 0.0) {
    *(uint *)(param_1 + 0xbc8c) = 0;
  }
  *(uint *)(param_1 + 0x23ac) = 0;
  *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
  *(uint *)(param_1 + 0x23a4) = *(uint *)(param_1 + 0x23a8);
  core_scat_cpp_CScat_advanceMotionWithGrabDamage_FUN_004fca50(param_1,param_2);
  *(uint *)(param_1 + 0x242c) = *(uint *)(param_1 + 0x23ac);
  iVar13 = core_charactr_cpp_FUN_00428c00(param_1,param_2);
  if (iVar13 == 0) {
    if (*(int *)(param_1 + 0xbc90) == 2) {
      core_scat_cpp_CScat_updateAI_FUN_004fc610(param_1,param_2);
    }
    iVar13 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(param_1 + 0x150);
    switch(*(uint *)(iVar13 + 0x24)) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 7:
    case 9:
    case 10:
      if (*(int *)(param_1 + 0x2408) != 0) {
        iVar13 = core_scat_cpp_CScat_isWeaponReady_FUN_004fcd40(param_1);
        iVar12 = 0;
        if (iVar13 != 0) {
          iVar12 = 7;
        }
        if (*(int *)(param_1 + 0xbc94) != 0) {
          iVar13 = core_scat_cpp_CScat_isWeaponReady_FUN_004fcd40(param_1);
          if (iVar13 == 0) {
            if (*(int *)(param_1 + 0xbc9c) == 0) {
              iVar12 = 1;
            }
            else {
              iVar12 = 2;
            }
          }
          else {
            iVar12 = 9;
          }
        }
        if (*(int *)(param_1 + 0xbc98) != 0) {
          iVar13 = core_scat_cpp_CScat_isWeaponReady_FUN_004fcd40(param_1);
          if (iVar13 == 0) {
            iVar12 = 3;
          }
          else {
            iVar12 = 10;
          }
        }
        if ((((*(int *)(param_1 + 0xbca0) != 0) && (*(int *)(param_1 + 0x1fa3c) != 0)) &&
            (iVar13 = *(int *)(param_1 + 0x1fa50), iVar13 != 0)) &&
           (iVar13 = (**(code **)(*(int *)(iVar13 + 0x14c) + 0xe0))(iVar13), iVar13 != 0)) {
          (**(code **)(*(int *)(*(int *)(param_1 + 0x1fa50) + 0x14c) + 0xdc))
                    (*(int *)(param_1 + 0x1fa50));
          *(uint *)(param_1 + 0xbca0) = 0;
          if (*(int *)(*(int *)(param_1 + 0x1fa50) + 0x2d8) == 8) {
            iVar12 = 0xb;
          }
        }
        *(float *)(param_1 + 0x2410) =
             *(float *)(param_1 + 0xbcb8) * *(float *)(param_1 + 0x2430) +
             *(float *)(param_1 + 0x2410);
        iVar13 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(param_1 + 0x150);
        if (iVar12 != *(int *)(iVar13 + 0x24)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,iVar12,1);
        }
        if (*(int *)(param_1 + 0xbcac) != 0) {
          *(uint *)(param_1 + 0xbcac) = 0;
          (**(code **)(*(int *)(param_1 + 0x14c) + 0x13c))(param_1,*(int *)(param_1 + 0x1fa3c) == 0)
          ;
        }
      }
      break;
    case 5:
      goto switchD_004fc3b6_caseD_5;
    }
  }
  else {
    *(uint *)(param_1 + 0x23ac) = 0;
    *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
    *(uint *)(param_1 + 0x23a4) = *(uint *)(param_1 + 0x23a8);
    uVar7 = *(uint *)(param_1 + 0x25a8);
    if (uVar7 < 2) {
      if (uVar7 == 1) {
        iVar13 = core_scat_cpp_CScat_isWeaponReady_FUN_004fcd40(param_1);
        if (iVar13 == 0) {
          uVar16 = 1;
        }
        else {
LAB_004fc00b:
          uVar16 = 9;
        }
      }
      else {
LAB_004fc367:
        iVar13 = core_scat_cpp_CScat_isWeaponReady_FUN_004fcd40(param_1);
        if (iVar13 == 0) {
          uVar16 = 0;
        }
        else {
          uVar16 = 7;
        }
      }
    }
    else if (uVar7 < 3) {
      iVar13 = core_scat_cpp_CScat_isWeaponReady_FUN_004fcd40(param_1);
      if (iVar13 != 0) goto LAB_004fc00b;
      uVar16 = 2;
    }
    else {
      if (uVar7 != 3) goto LAB_004fc367;
      engine_console_cpp_CConsole_printf_FUN_0043ac60
                (PTR_DAT_005ad350,"%s confused while walking to scriptDest!\n",param_1);
      iVar13 = core_scat_cpp_CScat_isWeaponReady_FUN_004fcd40(param_1);
      if (iVar13 == 0) {
        uVar16 = 0;
      }
      else {
        uVar16 = 7;
      }
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,uVar16,1);
  }
  if (*(int *)(param_1 + 0x2590) == 0) {
    fVar1 = *(float *)(param_1 + 0x23a4);
    fVar2 = *(float *)(param_1 + 0x2414);
    fVar3 = *(float *)(param_1 + 0x23a8);
    fVar4 = *(float *)(param_1 + 0x2418);
    fVar5 = *(float *)(param_1 + 0x23ac);
    fVar6 = *(float *)(param_1 + 0x241c);
    fVar11 = (float)_DAT_0058deae;
    *(uint *)(param_1 + 0x23ac) = 0;
    *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
    *(float *)(param_1 + 0x23a4) = *(float *)(param_1 + 0x23a8);
    *(uint *)(param_1 + 0x241c) = 0;
    *(uint *)(param_1 + 0x2418) = *(uint *)(param_1 + 0x241c);
    *(float *)(param_1 + 0x2414) = *(float *)(param_1 + 0x2418);
    *(float *)(param_1 + 0x2424) = *(float *)(param_1 + 0x2424) - param_2 * fVar11;
    local_64 = *(float *)(param_1 + 0x2420) * param_2;
    local_60 = *(float *)(param_1 + 0x2424) * param_2;
    local_5c = param_2 * *(float *)(param_1 + 0x2428);
    local_4c = fVar1 + fVar2 + local_64;
    local_48 = fVar3 + fVar4 + local_60;
    local_44 = fVar5 + fVar6 + local_5c;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050(param_1,&local_4c);
  }
  else {
    uVar16 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                       (param_1,local_40,*(int *)(param_1 + 0x2590) + 0x20);
    iVar13 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(local_58,uVar16);
    local_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00(*(uint *)(iVar13 + 4));
    local_88 = local_14;
    if (local_14 < (float)_DAT_0058deb6) {
      local_88 = local_14 + _DAT_0058debe;
    }
    if ((float)_DAT_0058dec6 < local_88) {
      local_88 = local_88 + _DAT_0058dece;
    }
    local_18 = param_2 * (float)_DAT_0058ded6;
    local_1c = -local_18;
    if (local_88 < local_1c) {
      local_88 = local_1c;
    }
    if (local_18 < local_88) {
      local_88 = local_18;
    }
    *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) + local_88;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000(param_1);
    iVar13 = *(int *)(param_1 + 0x2590);
    local_14 = *(float *)(iVar13 + 0x14c);
    uVar16 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                       (param_1 + 0x150,local_34,0);
    iVar13 = (**(code **)((int)local_14 + 0x108))(iVar13,param_1,uVar16);
    if (iVar13 == 0) {
      *(uint *)(param_1 + 0x2590) = 0;
LAB_004fc125:
      uVar16 = 0;
    }
    else {
      if (*(int *)(param_1 + 0x2590) == 0) goto LAB_004fc125;
      if (*(int *)(param_1 + 0xbca0) == 0) goto LAB_004fc138;
      uVar16 = 0xf;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,uVar16,1);
  }
LAB_004fc138:
  core_inv_cpp_CInventory_updateInventory_FUN_004c1850(param_1 + 0x1f5a0);
  iVar13 = *(int *)(param_1 + 0x1fa50);
  if (iVar13 != 0) {
    (**(code **)(*(int *)(iVar13 + 0x14c) + 4))(iVar13,param_2);
  }
  FUN_004fcd90(param_1,param_2);
  core_charactr_cpp_CCharacter_preProcess_FUN_004259a0(param_1);
  fVar1 = *(float *)(param_1 + 0x2434);
  iVar13 = (**(code **)(*(int *)(param_1 + 0x14c) + 0xec))(param_1);
  local_14 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                              (param_1 + 0x150,0xc);
  bVar8 = 0.0 < local_14;
  local_14 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                              (param_1 + 0x150,0xd);
  bVar9 = 0.0 < local_14;
  local_14 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                              (param_1 + 0x150,4);
  bVar10 = 0.0 < local_14;
  local_14 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                              (param_1 + 0x150,5);
  core_scat_cpp_CScat_updateAiming_FUN_004fd450
            (param_1,param_2,
             0.0 < local_14 || (bVar10 || (bVar9 || (bVar8 || (iVar13 != 0 || fVar1 <= 0.0)))));
  iStack_20 = param_1 + 0x150;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(iStack_20);
  core_scat_cpp_CScat_blendLayerAction_FUN_004fcff0(param_1);
  iVar13 = core_scat_cpp_CScat_isWeaponReady_FUN_004fcd40(param_1);
  if ((iVar13 == 0) &&
     (iVar13 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x104))(param_1), iVar13 == 0)) {
    core_xform_cpp_FUN_0055d610
              (param_1 + 0x1fa40,*(uint *)(param_1 + 0x1fa4c),_DAT_01e53388,&LAB_0051b650);
    iVar13 = iStack_20;
    puVar15 = &stack0xffffff7c;
    uStack_84 = uStack_74;
    *(uint *)((int)&stack0xffffff80 + (uint)bVar14 * 0xfffffffe * 4) =
         *(uint *)(local_58 + (uint)bVar14 * -8 + -0x18);
    *(uint *)(&stack0xffffff84 + (uint)bVar14 * -8 + (uint)bVar14 * -8) =
         *(uint *)(&stack0xffffff94 + (uint)bVar14 * -8 + (uint)bVar14 * -8);
    *(uint *)
     ((int)(&stack0xffffff84 + (uint)bVar14 * -8 + (uint)bVar14 * -8) + ((uint)bVar14 * -2 + 1) * 4)
         = *(uint *)
            ((int)(&stack0xffffff94 + (uint)bVar14 * -8 + (uint)bVar14 * -8) +
            ((uint)bVar14 * -2 + 1) * 4);
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0051cfd0(iVar13,puVar15);
  }
  core_charactr_cpp_FUN_0042a150(param_1,param_2);
  FUN_004fdd00(param_1);
switchD_004fc3b6_caseD_5:
  return;
}
