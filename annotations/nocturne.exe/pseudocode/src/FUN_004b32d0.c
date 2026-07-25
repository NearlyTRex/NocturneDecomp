// Name: FUN_004b32d0
// Address: 004b32d0
// Address Range: [[004b32d0, 004b3877]]
// Convention: unknown
// Signature: void FUN_004b32d0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b32d0(int param_1,float param_2)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  float afStackY_1868 [1521];
  uint *puVar8;
  float local_90;
  uint uStack_8c;
  uint uStack_7c;
  float local_6c;
  float local_68;
  float local_64;
  byte local_60 [12];
  byte local_54 [12];
  byte local_48 [12];
  float local_3c;
  float local_38;
  float local_34;
  float local_28;
  int iStack_24;
  float local_20;
  int local_1c;
  float local_18;
  
  bVar7 = 0;
  iVar3 = core_charactr_cpp_FUN_004259f0(param_1,param_2);
  if (iVar3 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0xbc90) == 2) {
    core_haystack_cpp_CHaystack_updateAI_FUN_004b3880(param_1,param_2);
  }
  iVar3 = 0x01C775EC;
  *(float *)(param_1 + 0x2430) = param_2 * (float)12.566370614;
  if (*(int *)(iVar3 + 0x228) != 0) {
    *(float *)(param_1 + 0x2430) = *(float *)(param_1 + 0x2430) * (float)0.33333333333333298;
  }
  fVar1 = *(float *)(param_1 + 0xbc8c) - param_2;
  *(float *)(param_1 + 0xbc8c) = fVar1;
  if (fVar1 < 0.0) {
    *(uint *)(param_1 + 0xbc8c) = 0;
  }
  *(uint *)(param_1 + 0x23ac) = 0;
  *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
  *(uint *)(param_1 + 0x23a4) = *(uint *)(param_1 + 0x23a8);
  core_haystack_cpp_CHaystack_advanceMotion_FUN_004b3e00(param_1,param_2);
  iVar3 = core_charactr_cpp_FUN_00428c00(param_1,param_2);
  if (iVar3 == 0) {
    iVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(param_1 + 0x150);
    switch(*(uint *)(iVar3 + 0x24)) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 10:
      if (*(int *)(param_1 + 0x2408) != 0) {
        iVar3 = 0;
        if (*(int *)(param_1 + 0x1fa3c) != 0) {
          iVar3 = 10;
        }
        if (*(int *)(param_1 + 0xbc94) != 0) {
          if (*(int *)(param_1 + 0xbc9c) == 0) {
            iVar3 = 1;
          }
          else {
            iVar3 = 2;
          }
        }
        if (*(int *)(param_1 + 0xbc98) != 0) {
          iVar3 = 3;
        }
        if (*(int *)(param_1 + 0xbcac) != 0) {
          *(uint *)(param_1 + 0xbcac) = 0;
          uVar5 = (uint)(*(int *)(param_1 + 0x1fa3c) == 0);
          *(uint *)(param_1 + 0x1fa3c) = uVar5;
          if (uVar5 == 0) {
            iVar3 = 0;
          }
          else {
            iVar3 = 10;
          }
        }
        if (*(int *)(param_1 + 0xbca0) != 0) {
          bVar2 = true;
          if ((*(int *)(param_1 + 0x1fa3c) == 0) && (*(int *)(param_1 + 0xbc90) != 2)) {
            iVar6 = core_hero_cpp_CHero_tryInteract_FUN_004b4e90(param_1);
            bVar2 = false;
            if (iVar6 != 0) goto LAB_004b3666;
            local_1c = FUN_004b5110(param_1);
            if ((local_1c != 0) && (local_1c != 1)) {
              FUN_004b5270(param_1);
            }
            if ((local_1c != 0) ||
               (iVar6 = core_hero_cpp_CHero_tryTalkToNearbyCharacter_FUN_004b4fe0(param_1),
               iVar6 != 0)) goto LAB_004b3666;
            iVar6 = FUN_004b52f0(param_1);
            if (iVar6 != 0) {
              core_hero_cpp_CHero_executeLeverPull_FUN_004b5490(param_1);
              goto LAB_004b3666;
            }
          }
          else {
LAB_004b3666:
            if (!bVar2) goto LAB_004b3687;
          }
          *(uint *)(param_1 + 0xbca0) = 0;
          if (*(int *)(param_1 + 0x1fa40) == 0) {
            iVar3 = 0xf;
          }
          else {
            iVar3 = 0xe;
          }
        }
LAB_004b3687:
        *(float *)(param_1 + 0x2410) = *(float *)(param_1 + 0xbcb8) * *(float *)(param_1 + 0x2430);
        iVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(param_1 + 0x150);
        if (iVar3 != *(int *)(iVar6 + 0x24)) goto LAB_004b33ac;
      }
      break;
    case 9:
      goto switchD_004b375e_caseD_9;
    }
  }
  else {
    uVar5 = *(uint *)(param_1 + 0x25a8);
    if (uVar5 < 2) {
      if (uVar5 == 1) {
        iVar3 = 1;
      }
      else {
LAB_004b35c4:
        iVar3 = 0;
      }
    }
    else {
      if (2 < uVar5) {
        if (uVar5 == 3) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,0,1);
          engine_console_cpp_CConsole_printf_FUN_0043ac60
                    (PTR_DAT_005ad350,"%s confused while walking to scriptDest!\n",param_1);
          goto switchD_004b375e_caseD_4;
        }
        goto LAB_004b35c4;
      }
      iVar3 = 2;
    }
LAB_004b33ac:
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,iVar3,1);
  }
switchD_004b375e_caseD_4:
  if (*(int *)(param_1 + 0x2590) == 0) {
    *(float *)(param_1 + 0x2424) = *(float *)(param_1 + 0x2424) - param_2 * (float)32;
    local_3c = *(float *)(param_1 + 0x23a4) + *(float *)(param_1 + 0x2414);
    local_38 = *(float *)(param_1 + 0x23a8) + *(float *)(param_1 + 0x2418);
    local_34 = *(float *)(param_1 + 0x23ac) + *(float *)(param_1 + 0x241c);
    *(uint *)(param_1 + 0x23ac) = 0;
    *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
    *(float *)(param_1 + 0x23a4) = *(float *)(param_1 + 0x23a8);
    *(uint *)(param_1 + 0x241c) = 0;
    *(uint *)(param_1 + 0x2418) = *(uint *)(param_1 + 0x241c);
    *(float *)(param_1 + 0x2414) = *(float *)(param_1 + 0x2418);
    iVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(param_1 + 0x150);
    if ((*(int *)(iVar3 + 0x24) == 0xe) || (*(int *)(iVar3 + 0x24) == 0xf)) {
      local_38 = 0.0;
      local_3c = 0.0;
      local_34 = 0.0;
    }
    local_6c = *(float *)(param_1 + 0x2420) * param_2;
    local_68 = *(float *)(param_1 + 0x2424) * param_2;
    local_64 = param_2 * *(float *)(param_1 + 0x2428);
    local_3c = local_3c + local_6c;
    local_38 = local_38 + local_68;
    local_34 = local_34 + local_64;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050(param_1,&local_3c);
  }
  else {
    if (*(int *)(param_1 + 0x2594) == 0) {
      uVar4 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                        (param_1,local_60,*(int *)(param_1 + 0x2590) + 0x20);
      iVar3 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(local_54,uVar4);
      local_18 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00(*(uint *)(iVar3 + 4));
      local_90 = local_18;
      if (local_18 < (float)-1.57079632675) {
        local_90 = local_18 + 3.141593f;
      }
      if ((float)1.57079632675 < local_90) {
        local_90 = local_90 + 1.5938625219265179e-314._0_4_;
      }
      local_20 = param_2 * (float)3.1415926535000001;
      local_28 = -local_20;
      if (local_90 < local_28) {
        local_90 = local_28;
      }
      if (local_20 < local_90) {
        local_90 = local_20;
      }
      *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) + local_90;
      core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000(param_1);
    }
    iVar3 = *(int *)(param_1 + 0x2590);
    local_18 = *(float *)(iVar3 + 0x14c);
    uVar4 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                      (param_1 + 0x150,local_48,0);
    iVar3 = (**(code **)((int)local_18 + 0x108))(iVar3,param_1,uVar4);
    if (iVar3 == 0) {
      *(uint *)(param_1 + 0x2590) = 0;
LAB_004b34d1:
      uVar4 = 0;
    }
    else {
      if (*(int *)(param_1 + 0x2590) == 0) goto LAB_004b34d1;
      if (*(int *)(param_1 + 0xbca0) == 0) goto LAB_004b34e4;
      uVar4 = 0x11;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,uVar4,1);
  }
LAB_004b34e4:
  core_charactr_cpp_CCharacter_preProcess_FUN_004259a0(param_1);
  iStack_24 = param_1 + 0x150;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(iStack_24);
  iVar3 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x104))(param_1);
  if ((iVar3 == 0) &&
     (iVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(iStack_24),
     *(int *)(iVar3 + 0x24) != 0x13)) {
    core_xform_cpp_FUN_0055d610
              (param_1 + 0x1fa44,*(uint *)(param_1 + 0x1fa50),_DAT_01cae018,FUN_0051b650);
    iVar3 = iStack_24;
    puVar8 = &stack0xffffff84;
    uStack_7c = uStack_8c;
    *(uint *)((int)&stack0xffffff88 + (uint)bVar7 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffff78 + (uint)bVar7 * -8);
    *(uint *)(local_54 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + -0x20) =
         *(uint *)(&stack0xffffff7c + (uint)bVar7 * -8 + (uint)bVar7 * -8);
    *(uint *)
     ((int)(local_54 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + -0x20) + ((uint)bVar7 * -2 + 1) * 4) =
         *(uint *)
          ((int)(&stack0xffffff7c + (uint)bVar7 * -8 + (uint)bVar7 * -8) +
          ((uint)bVar7 * -2 + 1) * 4);
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0051cfd0(iVar3,puVar8);
  }
  core_charactr_cpp_FUN_0042a150(param_1,param_2);
switchD_004b375e_caseD_9:
  return;
}
