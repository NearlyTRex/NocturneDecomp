// Name: FUN_00439f50
// Address: 00439f50
// Address Range: [[00439f50, 0043a466]]
// Convention: unknown
// Signature: void FUN_00439f50(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void FUN_00439f50(int param_1,float param_2)

{
  uint uVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  float afStackY_1870 [1521];
  uint *puVar8;
  float local_98;
  uint uStack_94;
  uint uStack_84;
  byte local_74 [12];
  float local_68;
  float local_64;
  float local_60;
  byte local_5c [12];
  float local_50;
  float local_4c;
  float local_48;
  byte local_44 [12];
  float local_38;
  float local_34;
  float local_30;
  int local_24;
  float local_20;
  float local_1c;
  int iStack_18;
  float local_14;
  
  bVar7 = 0;
  iVar4 = core_charactr_cpp_FUN_004259f0(param_1,param_2);
  if (iVar4 == 0) {
    return;
  }
  fVar2 = *(float *)(param_1 + 0xbc8c) - param_2;
  *(float *)(param_1 + 0xbc8c) = fVar2;
  if (fVar2 < 0.0) {
    *(uint *)(param_1 + 0xbc8c) = 0;
  }
  *(uint *)(param_1 + 0x23ac) = 0;
  *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
  *(uint *)(param_1 + 0x23a4) = *(uint *)(param_1 + 0x23a8);
  core_colonel_cpp_CColonel_processMotionEvents_FUN_0043a980(param_1,param_2);
  if (*(int *)(param_1 + 0xbc90) == 2) {
    core_colonel_cpp_CColonel_processAI_FUN_0043a470(param_1,param_2);
  }
  fVar2 = (float)12.566370614;
  *(uint *)(param_1 + 0x242c) = *(uint *)(param_1 + 0x23ac);
  *(float *)(param_1 + 0x2430) = param_2 * fVar2;
  iVar4 = core_charactr_cpp_FUN_00428c00(param_1,param_2);
  if (iVar4 == 0) {
    iVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(param_1 + 0x150);
    switch(*(uint *)(iVar4 + 0x24)) {
    case 0:
    case 1:
    case 2:
    case 3:
      if (*(int *)(param_1 + 0x2408) != 0) {
        iVar4 = 0;
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
          iVar4 = 0;
          *(uint *)(param_1 + 0x1fa3c) = (uint)(*(int *)(param_1 + 0x1fa3c) == 0);
        }
        if (*(int *)(param_1 + 0xbca0) != 0) {
          bVar3 = true;
          if ((*(int *)(param_1 + 0x1fa3c) == 0) && (*(int *)(param_1 + 0xbc90) != 2)) {
            iVar6 = core_hero_cpp_CHero_tryInteract_FUN_004b4e90(param_1);
            bVar3 = false;
            if (iVar6 != 0) goto LAB_0043a2b0;
            local_24 = FUN_004b5110(param_1);
            if ((local_24 != 0) && (local_24 != 1)) {
              FUN_004b5270(param_1);
            }
            if ((local_24 != 0) ||
               (iVar6 = core_hero_cpp_CHero_tryTalkToNearbyCharacter_FUN_004b4fe0(param_1),
               iVar6 != 0)) goto LAB_0043a2b0;
            iVar6 = FUN_004b52f0(param_1);
            if (iVar6 != 0) {
              core_hero_cpp_CHero_executeLeverPull_FUN_004b5490(param_1);
              goto LAB_0043a2b0;
            }
          }
          else {
LAB_0043a2b0:
            if (!bVar3) goto LAB_0043a2be;
          }
          *(uint *)(param_1 + 0xbca0) = 0;
        }
LAB_0043a2be:
        *(float *)(param_1 + 0x2410) = *(float *)(param_1 + 0xbcb8) * *(float *)(param_1 + 0x2430);
        iVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(param_1 + 0x150);
        if (iVar4 != *(int *)(iVar6 + 0x24)) goto LAB_0043a023;
      }
      break;
    case 6:
      goto switchD_0043a387_caseD_6;
    }
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x25a8);
    if (uVar1 < 2) {
      if (uVar1 == 1) {
        iVar4 = 1;
      }
      else {
LAB_0043a224:
        iVar4 = 0;
      }
    }
    else {
      if (2 < uVar1) {
        if (uVar1 == 3) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,0,1);
          engine_console_cpp_CConsole_printf_FUN_0043ac60
                    (PTR_DAT_005ad350,"%s confused while walking to scriptDest!\n",param_1);
          goto switchD_0043a387_caseD_4;
        }
        goto LAB_0043a224;
      }
      iVar4 = 2;
    }
LAB_0043a023:
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,iVar4,1);
  }
switchD_0043a387_caseD_4:
  if (*(int *)(param_1 + 0x2590) == 0) {
    *(float *)(param_1 + 0x2424) = *(float *)(param_1 + 0x2424) - param_2 * (float)32;
    local_38 = *(float *)(param_1 + 0x2420) * param_2;
    local_34 = *(float *)(param_1 + 0x2424) * param_2;
    local_30 = param_2 * *(float *)(param_1 + 0x2428);
    local_50 = *(float *)(param_1 + 0x23a4) + *(float *)(param_1 + 0x2414);
    local_4c = *(float *)(param_1 + 0x23a8) + *(float *)(param_1 + 0x2418);
    local_68 = local_50 + local_38;
    local_48 = *(float *)(param_1 + 0x23ac) + *(float *)(param_1 + 0x241c);
    local_64 = local_4c + local_34;
    local_60 = local_48 + local_30;
    *(uint *)(param_1 + 0x23ac) = 0;
    *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
    *(float *)(param_1 + 0x23a4) = *(float *)(param_1 + 0x23a8);
    *(uint *)(param_1 + 0x241c) = 0;
    *(float *)(param_1 + 0x2418) = *(float *)(param_1 + 0x241c);
    *(float *)(param_1 + 0x2414) = *(float *)(param_1 + 0x241c);
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050(param_1,&local_68);
  }
  else {
    if (*(int *)(param_1 + 0x2594) == 0) {
      uVar5 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                        (param_1,local_5c,*(int *)(param_1 + 0x2590) + 0x20);
      iVar4 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(local_44,uVar5);
      local_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00(*(uint *)(iVar4 + 4));
      local_98 = local_14;
      if (local_14 < (float)-1.57079632675) {
        local_98 = local_14 + 5.3286462644388174e-315._0_4_;
      }
      if ((float)1.57079632675 < local_98) {
        local_98 = local_98 + 1.5938625219265179e-314._0_4_;
      }
      local_1c = param_2 * (float)3.1415926535000001;
      local_20 = -local_1c;
      if (local_98 < local_20) {
        local_98 = local_20;
      }
      if (local_1c < local_98) {
        local_98 = local_1c;
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
LAB_0043a151:
      uVar5 = 0;
    }
    else {
      if (*(int *)(param_1 + 0x2590) == 0) goto LAB_0043a151;
      if (*(int *)(param_1 + 0xbca0) == 0) goto LAB_0043a164;
      uVar5 = 9;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,uVar5,1);
  }
LAB_0043a164:
  core_charactr_cpp_CCharacter_preProcess_FUN_004259a0(param_1);
  iStack_18 = param_1 + 0x150;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(iStack_18);
  iVar4 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x104))(param_1);
  if (iVar4 == 0) {
    core_xform_cpp_FUN_0055d610
              (param_1 + 0x1fa44,*(uint *)(param_1 + 0x1fa50),DAT_0077ac8c,&LAB_0051b650);
    iVar4 = iStack_18;
    puVar8 = &stack0xffffff7c;
    uStack_84 = uStack_94;
    *(uint *)((int)&stack0xffffff80 + (uint)bVar7 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffff70 + (uint)bVar7 * -8);
    *(uint *)(local_5c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + -0x20) =
         *(uint *)(&stack0xffffff74 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
    *(uint *)
     ((int)(local_5c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + -0x20) + ((uint)bVar7 * -2 + 1) * 4) =
         *(uint *)
          ((int)(&stack0xffffff74 + (uint)bVar7 * -8 + (uint)bVar7 * -8) +
          ((uint)bVar7 * -2 + 1) * 4);
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0051cfd0(iVar4,puVar8);
  }
  core_charactr_cpp_FUN_0042a150(param_1,param_2);
switchD_0043a387_caseD_6:
  return;
}
