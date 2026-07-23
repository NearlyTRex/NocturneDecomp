// Name: FUN_00541d00
// Address: 00541d00
// Address Range: [[00541d00, 005423b6]]
// Convention: unknown
// Signature: void FUN_00541d00(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00541d00(int param_1,float param_2)

{
  float fVar1;
  bool bVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  byte bVar8;
  float afStackY_1870 [1520];
  float local_98;
  uint uStack_94;
  uint uStack_84;
  float local_74;
  float local_70;
  float local_6c;
  byte local_68 [12];
  float local_5c;
  float local_58;
  float local_54;
  byte local_50 [12];
  float local_44;
  float local_40;
  float local_3c;
  byte local_38 [20];
  int local_24;
  float local_20;
  int iStack_1c;
  float local_18;
  float local_14;
  
  bVar8 = 0;
  if ((*(float *)(param_1 + 0x2434) < (float)100) &&
     (fVar1 = *(float *)(param_1 + 0x2434) + param_2, *(float *)(param_1 + 0x2434) = fVar1,
     (float)100 < fVar1)) {
    *(uint *)(param_1 + 0x2434) = 0x42c80000;
  }
  iVar4 = core_charactr_cpp_FUN_004259f0(param_1,param_2);
  if ((iVar4 == 0) || (*(int *)(param_1 + 0x1fa38) == 4)) {
switchD_005420d7_caseD_9:
    return;
  }
  core_charactr_cpp_CCharacter_processSmoking_FUN_0042abd0(param_1,param_2);
  fVar1 = *(float *)(param_1 + 0xbc8c) - param_2;
  fVar3 = (float)12.566370614;
  *(float *)(param_1 + 0xbc8c) = fVar1;
  *(float *)(param_1 + 0x2430) = param_2 * fVar3;
  if (fVar1 < 0.0) {
    *(uint *)(param_1 + 0xbc8c) = 0;
  }
  *(uint *)(param_1 + 0x23ac) = 0;
  *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
  *(uint *)(param_1 + 0x23a4) = *(uint *)(param_1 + 0x23a8);
  core_svetlana_cpp_CSvetlana_advanceMotion_FUN_00542ad0(param_1,param_2);
  *(uint *)(param_1 + 0x242c) = *(uint *)(param_1 + 0x23ac);
  iVar4 = core_charactr_cpp_FUN_00428c00(param_1,param_2);
  if (iVar4 == 0) {
    if (*(int *)(param_1 + 0xbc90) == 2) {
      FUN_005423c0(param_1,param_2);
    }
    iVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(param_1 + 0x150);
    switch(*(uint *)(iVar4 + 0x24)) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 10:
      if (*(int *)(param_1 + 0x2408) != 0) {
        iVar4 = 0;
        if (*(int *)(param_1 + 0x1fa3c) != 0) {
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
          if (uVar6 == 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = 10;
          }
        }
        if (*(int *)(param_1 + 0xbca0) != 0) {
          bVar2 = true;
          if ((*(int *)(param_1 + 0x1fa3c) == 0) && (*(int *)(param_1 + 0xbc90) != 2)) {
            iVar7 = core_hero_cpp_CHero_tryInteract_FUN_004b4e90(param_1);
            bVar2 = false;
            if (iVar7 != 0) goto LAB_00542171;
            local_24 = FUN_004b5110(param_1);
            if ((local_24 != 0) && (local_24 != 1)) {
              FUN_004b5270(param_1);
            }
            if ((local_24 != 0) ||
               (iVar7 = core_hero_cpp_CHero_tryTalkToNearbyCharacter_FUN_004b4fe0(param_1),
               iVar7 != 0)) goto LAB_00542171;
            iVar7 = FUN_004b52f0(param_1);
            if (iVar7 != 0) {
              core_hero_cpp_CHero_executeLeverPull_FUN_004b5490(param_1);
              goto LAB_00542171;
            }
          }
          else {
LAB_00542171:
            if (!bVar2) goto LAB_00542192;
          }
          *(uint *)(param_1 + 0xbca0) = 0;
          if (*(int *)(param_1 + 0x1fa40) == 0) {
            iVar4 = 0xf;
          }
          else {
            iVar4 = 0xe;
          }
        }
LAB_00542192:
        *(float *)(param_1 + 0x2410) = *(float *)(param_1 + 0xbcb8) * *(float *)(param_1 + 0x2430);
        iVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(param_1 + 0x150);
        if (iVar4 != *(int *)(iVar7 + 0x24)) goto LAB_00541e3d;
      }
      break;
    case 9:
      goto switchD_005420d7_caseD_9;
    }
  }
  else {
    iVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(param_1 + 0x150);
    if ((*(int *)(iVar4 + 0x24) != 0x1a) && (*(int *)(iVar4 + 0x24) != 0x1b)) {
      *(uint *)(param_1 + 0x23ac) = 0;
      *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
      *(uint *)(param_1 + 0x23a4) = *(uint *)(param_1 + 0x23a8);
    }
    uVar6 = *(uint *)(param_1 + 0x25a8);
    if (uVar6 < 2) {
      if (uVar6 == 1) {
        iVar4 = 1;
      }
      else {
LAB_00542097:
        iVar4 = 0;
      }
    }
    else {
      if (2 < uVar6) {
        if (uVar6 == 3) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,0,1);
          engine_console_cpp_CConsole_printf_FUN_0043ac60
                    (PTR_DAT_005ad350,"%s confused while walking to scriptDest!\n",param_1);
          goto switchD_005420d7_caseD_4;
        }
        goto LAB_00542097;
      }
      iVar4 = 2;
    }
LAB_00541e3d:
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,iVar4,1);
  }
switchD_005420d7_caseD_4:
  if (*(int *)(param_1 + 0x2590) == 0) {
    local_5c = *(float *)(param_1 + 0x23a4);
    local_58 = *(float *)(param_1 + 0x23a8);
    local_54 = *(float *)(param_1 + 0x23ac);
    iVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(param_1 + 0x150);
    if (*(int *)(iVar4 + 0x24) != 0x1a) {
      *(float *)(param_1 + 0x2424) = *(float *)(param_1 + 0x2424) - param_2 * (float)32
      ;
    }
    local_44 = *(float *)(param_1 + 0x2420) * param_2;
    local_40 = *(float *)(param_1 + 0x2424) * param_2;
    local_3c = param_2 * *(float *)(param_1 + 0x2428);
    local_74 = local_44 + *(float *)(param_1 + 0x2414);
    local_70 = local_40 + *(float *)(param_1 + 0x2418);
    local_5c = local_5c + local_74;
    local_6c = local_3c + *(float *)(param_1 + 0x241c);
    local_58 = local_58 + local_70;
    local_54 = local_54 + local_6c;
    iVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(param_1 + 0x150);
    iVar4 = *(int *)(iVar4 + 0x24);
    if ((((iVar4 != 0x17) && (iVar4 != 0x18)) && (iVar4 != 0x19)) &&
       (((iVar4 != 0x25 && (iVar4 != 0x26)) && ((iVar4 != 0x27 && (iVar4 != 0x28)))))) {
      core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050(param_1,&local_5c);
    }
    iVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(param_1 + 0x150);
    if (*(int *)(iVar4 + 0x24) == 0x1a) {
      *(float *)(param_1 + 0x24) = param_2 * (float)3 + *(float *)(param_1 + 0x24);
    }
    goto LAB_00541f87;
  }
  if (*(int *)(param_1 + 0x2594) == 0) {
    uVar5 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                      (param_1,local_68,*(int *)(param_1 + 0x2590) + 0x20);
    iVar4 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(local_50,uVar5);
    local_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00(*(uint *)(iVar4 + 4));
    local_98 = local_14;
    if (local_14 < (float)-1.57079632675) {
      local_98 = local_14 + 3.141593f;
    }
    if ((float)1.57079632675 < local_98) {
      local_98 = local_98 + 1.5938625219265179e-314._0_4_;
    }
    local_18 = param_2 * (float)3.1415926535000001;
    local_20 = -local_18;
    if (local_98 < local_20) {
      local_98 = local_20;
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
                    (param_1 + 0x150,local_38,0);
  iVar4 = (**(code **)((int)local_14 + 0x108))(iVar4,param_1,uVar5);
  if (iVar4 == 0) {
    *(uint *)(param_1 + 0x2590) = 0;
LAB_00541f74:
    uVar5 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x2590) == 0) goto LAB_00541f74;
    if (*(int *)(param_1 + 0xbca0) == 0) goto LAB_00541f87;
    uVar5 = 0x10;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,uVar5,1);
LAB_00541f87:
  core_charactr_cpp_CCharacter_preProcess_FUN_004259a0(param_1);
  iStack_1c = param_1 + 0x150;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(iStack_1c);
  iVar4 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x104))(param_1);
  if (iVar4 == 0) {
    core_xform_cpp_FUN_0055d610
              (param_1 + 0x950a8,*(uint *)(param_1 + 0x950b4),_DAT_02dca058,&LAB_0051b650);
    uStack_94 = uStack_84;
    *(uint *)((int)&stack0xffffff70 + (uint)bVar8 * 0xfffffffe * 4) =
         *(uint *)(local_68 + (uint)bVar8 * -8 + -0x18);
    *(uint *)(&stack0xffffff74 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
         *(uint *)(&stack0xffffff84 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
    *(uint *)
     ((int)(&stack0xffffff74 + (uint)bVar8 * -8 + (uint)bVar8 * -8) + ((uint)bVar8 * -2 + 1) * 4) =
         *(uint *)
          ((int)(&stack0xffffff84 + (uint)bVar8 * -8 + (uint)bVar8 * -8) +
          ((uint)bVar8 * -2 + 1) * 4);
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0051cfd0
              (iStack_1c,&stack0xffffff6c);
  }
  core_charactr_cpp_FUN_0042a150(param_1,param_2);
  local_14 = (float)(param_1 + 0x20);
  core_cloth_cpp_CCloth_process_FUN_00436e50
            (param_1 + 0x1fa44,local_14,param_1 + 0x30,param_2,*(uint *)(param_1 + 0x240c),
             param_1 + 0x150);
  core_cloth_cpp_CCloth_process_FUN_00436e50
            (param_1 + 0x5a574,local_14,param_1 + 0x30,param_2,*(uint *)(param_1 + 0x240c),
             param_1 + 0x150);
  return;
}
