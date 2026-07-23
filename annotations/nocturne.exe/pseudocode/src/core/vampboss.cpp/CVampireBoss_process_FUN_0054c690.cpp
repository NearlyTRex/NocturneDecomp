// Name: core_vampboss.cpp_CVampireBoss_process_FUN_0054c690
// Address: 0054c690
// Address Range: [[0054c690, 0054d89b]]
// Convention: unknown
// Signature: void core_vampboss_cpp_CVampireBoss_process_FUN_0054c690(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_vampboss_cpp_CVampireBoss_process_FUN_0054c690(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  uint uVar14;
  uint uVar15;
  byte local_244 [4];
  uint local_240;
  int local_210;
  int local_20c;
  byte auStack_208 [4];
  uint uStack_204;
  byte local_1cc [12];
  byte local_1c0 [12];
  byte local_1b4 [16];
  byte auStack_1a4 [32];
  byte local_184 [12];
  byte local_178 [12];
  byte local_16c [24];
  byte local_154 [24];
  float local_13c;
  float local_138;
  float local_134;
  byte local_130 [16];
  float local_120;
  float local_114;
  byte auStack_10c [12];
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  byte local_dc [12];
  float local_d0;
  float local_cc;
  float local_c8;
  uint uStack_c4;
  uint uStack_c0;
  float fStack_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_78 [2];
  float fStack_70;
  float local_64;
  float local_60;
  float local_5c;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_40;
  float local_3c;
  float local_34;
  int local_30;
  float fStack_2c;
  float local_28;
  float local_20;
  float local_1c;
  float local_18;
  
  iVar7 = param_1;
  do {
    if (*(int *)(iVar7 + 0xbedb4) == 0) {
      _DAT_01cc4800 = "..\\core\\vampboss.cpp";
      _DAT_01cc4804 = 0xcf;
      FUN_004c8440("CVampireBoss::process - Need 4 waypoints");
    }
    iVar7 = iVar7 + 4;
  } while (iVar7 != param_1 + 0x10);
  iVar7 = core_charactr_cpp_FUN_004259f0(param_1,param_2);
  if (iVar7 == 0) {
    return;
  }
  iVar7 = *(int *)(param_1 + 0xbe168);
  if (iVar7 == 2) {
    core_vampboss_cpp_CVampireBoss_advanceAnimation_FUN_0054d9c0(param_1,param_2);
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880
              (param_1 + 0xbd24);
    core_cloth_cpp_CCloth_process_FUN_00436e50
              (param_1 + 0xdfd8,param_1 + 0x20,param_1 + 0x30,param_2,
               *(uint *)(param_1 + 0x240c),param_1 + 0xbd24);
    if (*(float *)(param_1 + 0x2434) < (float)25) {
      *(uint *)(param_1 + 0x2434) = 0x41c7fdf4;
      if ((*(int *)(param_1 + 0xbedac) != 2) && (*(int *)(param_1 + 0xbedac) != 3)) {
        core_vampboss_cpp_CVampireBoss_chooseDestWayPoint_FUN_0054e230(param_1);
        *(uint *)(param_1 + 0xbedac) = 2;
        *(uint *)(param_1 + 0xbeda0) = 0x40a00000;
      }
    }
    if ((*(int *)(param_1 + 0xbedac) != 2) && (*(int *)(param_1 + 0xbedac) != 3)) {
      iVar7 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
      local_f4 = *(float *)(param_1 + 0x20) - *(float *)(iVar7 + 0x20);
      local_f0 = *(float *)(param_1 + 0x24) - *(float *)(iVar7 + 0x24);
      local_ec = *(float *)(param_1 + 0x28) - *(float *)(iVar7 + 0x28);
      fVar1 = SQRT(local_f4 * local_f4 + local_ec * local_ec);
      if (fVar1 < (float)5) {
        *(uint *)(param_1 + 0xbedac) = 1;
        local_18 = (float)(uint)(local_f0 < (float)10);
        if ((float10)0 != ABS((float10)(int)local_18)) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(local_244);
          local_240 = 0x41200000;
          local_210 = param_1;
          iVar7 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
          local_20c = param_1;
          (**(code **)(*(int *)(iVar7 + 0x14c) + 0x100))(iVar7,local_244);
        }
      }
      if ((float)40 < fVar1) {
        *(uint *)(param_1 + 0xbed9c) = 0x40a00000;
        *(uint *)(param_1 + 0xbeda4) = 0;
        *(uint *)(param_1 + 0xbedac) = 0;
      }
      if ((*(int *)(param_1 + 0xbedac) == 0) &&
         (fVar2 = *(float *)(param_1 + 0xbed9c) - param_2, *(float *)(param_1 + 0xbed9c) = fVar2,
         fVar2 < 0.0)) {
        *(uint *)(param_1 + 0xbedac) = 1;
        *(uint *)(param_1 + 0xbed9c) = 0;
      }
      iVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(param_1 + 0xbd24);
      if ((((*(int *)(iVar7 + 0x24) == 0) && (*(int *)(param_1 + 0xbedac) == 0)) &&
          (fVar1 < (float)24)) && (*(int *)(param_1 + 0xbeda4) == 0)) {
        *(uint *)(param_1 + 0xbeda4) = 1;
        iVar7 = core_actor_cpp_randomChance_FUN_0040dea0(0x3f000000);
        if (iVar7 == 0) {
          uVar14 = 2;
        }
        else {
          uVar14 = 1;
        }
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0xbd24,uVar14,1);
      }
    }
    iVar7 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
    if (&local_b8 != (float *)(iVar7 + 0x20)) {
      local_b8 = *(float *)(iVar7 + 0x20);
      local_b4 = *(float *)(iVar7 + 0x24);
      local_b0 = *(float *)(iVar7 + 0x28);
    }
    if (*(int *)(param_1 + 0xbedac) == 2) {
      *(float *)(param_1 + 0xbeda0) = *(float *)(param_1 + 0xbeda0) - param_2;
      iVar7 = *(int *)(param_1 + 0xbedb0 + (4 - *(int *)(param_1 + 0xbedb0)) * 4);
      if (&local_b8 != (float *)(iVar7 + 0x20)) {
        local_b8 = *(float *)(iVar7 + 0x20);
        local_b4 = *(float *)(iVar7 + 0x24);
        local_b0 = *(float *)(iVar7 + 0x28);
      }
      if ((*(float *)(param_1 + 0xbeda0) <= 0.0) ||
         (fVar1 = local_b8 - *(float *)(param_1 + 0x20),
         fVar2 = local_b0 - *(float *)(param_1 + 0x28),
         SQRT(fVar2 * fVar2 + fVar1 * fVar1) < (float)6)) {
        *(uint *)(param_1 + 0xbeda0) = 0x40a00000;
        *(uint *)(param_1 + 0xbedac) = 3;
      }
    }
    else if (*(int *)(param_1 + 0xbedac) == 3) {
      iVar7 = *(int *)(param_1 + 0xbedb4 + *(int *)(param_1 + 0xbedb0) * 4);
      if (&local_b8 != (float *)(iVar7 + 0x20)) {
        local_b8 = *(float *)(iVar7 + 0x20);
        local_b4 = *(float *)(iVar7 + 0x24);
        local_b0 = *(float *)(iVar7 + 0x28);
      }
      fVar1 = *(float *)(param_1 + 0xbeda0) - param_2;
      *(float *)(param_1 + 0xbeda0) = fVar1;
      if ((fVar1 <= 0.0) ||
         (fVar1 = local_b8 - *(float *)(param_1 + 0x20),
         fVar2 = local_b0 - *(float *)(param_1 + 0x28),
         SQRT(fVar2 * fVar2 + fVar1 * fVar1) < (float)4)) {
        core_vampboss_cpp_CVampireBoss_transformToHuman_FUN_0054e1e0(param_1);
      }
    }
    local_b4 = local_b4 + 4.0f;
    local_e8 = local_b8 - *(float *)(param_1 + 0x20);
    local_e4 = local_b4 - *(float *)(param_1 + 0x24);
    local_e0 = local_b0 - *(float *)(param_1 + 0x28);
    uVar15 = 0x54ca26;
    atan2((float10)local_e8);
    fVar8 = SQRT((float10)local_ec * (float10)local_ec + (float10)local_e4 * (float10)local_e4);
    uVar14 = 0x54ca48;
    fVar9 = (float10)atan2((float10)local_e8);
    fStack_70 = 1.2;
    local_4c = 20.0;
    local_48 = (float)fVar8;
    local_40 = (float)-fVar9;
    if (*(int *)(param_1 + 0xbedac) == 1) {
      local_48 = -local_48;
      local_40 = -local_40;
    }
    local_20 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                                (local_48 - *(float *)(param_1 + 0x34),uVar14,uVar15);
    fVar1 = local_20 * param_2 * fStack_70;
    if (ABS(fVar1) <= ABS(local_20)) {
      *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) + fVar1;
    }
    else {
      *(float *)(param_1 + 0x34) = local_48;
    }
    local_40 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                                (local_40 - *(float *)(param_1 + 0x30),uVar14);
    local_60 = -0.3926991;
    fStack_2c = 0.3926991;
    *(float *)(param_1 + 0x30) = local_40 * param_2 * fStack_70 + *(float *)(param_1 + 0x30);
    if ((*(float *)(param_1 + 0x2434) < (float)25) &&
       (*(int *)(param_1 + 0xbedac) == 0)) {
      fStack_2c = 1.5707964;
      local_60 = -1.5707964;
    }
    if (*(float *)(param_1 + 0x30) < local_60) {
      *(float *)(param_1 + 0x30) = local_60;
    }
    if (fStack_2c < *(float *)(param_1 + 0x30)) {
      *(float *)(param_1 + 0x30) = fStack_2c;
    }
    fVar8 = (float10)fsin((float10)*(float *)(param_1 + 0x30));
    fVar9 = (float10)fsin((float10)*(float *)(param_1 + 0x34));
    fVar10 = (float10)fcos((float10)*(float *)(param_1 + 0x30));
    fVar11 = (float10)fcos((float10)*(float *)(param_1 + 0x34));
    fVar12 = (float10)local_4c;
    fVar13 = (float10)param_2;
    fVar8 = -fVar8 * fVar12 * fVar13 + (float10)*(float *)(param_1 + 0x24);
    *(float *)(param_1 + 0x24) = (float)fVar8;
    *(float *)(param_1 + 0x20) =
         (float)(fVar9 * fVar10 * fVar12 * fVar13 + (float10)*(float *)(param_1 + 0x20));
    *(float *)(param_1 + 0x28) =
         (float)(fVar11 * fVar10 * fVar12 * fVar13 + (float10)*(float *)(param_1 + 0x28));
    if (fVar8 < (float10)fStack_bc) {
      *(float *)(param_1 + 0x24) = fStack_bc;
    }
    local_20 = local_40;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000(param_1);
    puVar3 = (uint *)
             core_skeleton_cpp_CDeformableModelInstance_computeBoundingBoxFromBones_FUN_0051ef40
                       (param_1 + 0xbd24,auStack_1a4);
    if ((uint *)(param_1 + 0x25f0) != puVar3) {
      *(uint *)(param_1 + 0x25f0) = *puVar3;
      *(uint *)(param_1 + 0x25f4) = puVar3[1];
      *(uint *)(param_1 + 0x25f8) = puVar3[2];
    }
    if ((uint *)(param_1 + 0x25fc) != puVar3 + 3) {
      *(uint *)(param_1 + 0x25fc) = puVar3[3];
      *(uint *)(param_1 + 0x2600) = puVar3[4];
      *(uint *)(param_1 + 0x2604) = puVar3[5];
    }
    goto LAB_0054cc7f;
  }
  if (iVar7 == 1) {
    fVar1 = param_2 / 5.0f + *(float *)(param_1 + 0xbed98);
    *(float *)(param_1 + 0xbed98) = fVar1;
    uVar14 = 0x01C03A10;
    if (1.0 <= fVar1) {
      *(uint *)(param_1 + 0xbe168) = 2;
      core_event_cpp_CEventList_executeCommands_FUN_0047ab70(uVar14,"morphCompleted");
    }
    core_vampboss_cpp_CVampireBoss_advanceAnimation_FUN_0054d9c0(param_1,param_2);
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880
              (param_1 + 0xbd24);
    core_cloth_cpp_CCloth_process_FUN_00436e50
              (param_1 + 0xdfd8,param_1 + 0x20,param_1 + 0x30,param_2,
               *(uint *)(param_1 + 0x240c),param_1 + 0xbd24);
    iVar7 = param_1 + 0x150;
    local_20 = param_2;
    while (0.0 < local_20) {
      core_motion_cpp_CMotionController_advance_FUN_004e11c0(iVar7,&local_20);
    }
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880(iVar7);
    local_18 = (float)(param_1 + 0x30);
    core_cloth_cpp_CCloth_process_FUN_00436e50
              (param_1 + 0x48b08,param_1 + 0x20,local_18,param_2,*(uint *)(param_1 + 0x240c),
               iVar7);
    core_cloth_cpp_CCloth_process_FUN_00436e50
              (param_1 + 0x83638,param_1 + 0x20,local_18,param_2,*(uint *)(param_1 + 0x240c),
               iVar7);
    puVar3 = (uint *)
             core_skeleton_cpp_CDeformableModelInstance_computeBoundingBoxFromBones_FUN_0051ef40
                       (iVar7,local_154);
    if ((uint *)(param_1 + 0x25f0) != puVar3) {
      *(uint *)(param_1 + 0x25f0) = *puVar3;
      *(uint *)(param_1 + 0x25f4) = puVar3[1];
      *(uint *)(param_1 + 0x25f8) = puVar3[2];
    }
    if ((uint *)(param_1 + 0x25fc) != puVar3 + 3) {
      *(uint *)(param_1 + 0x25fc) = puVar3[3];
      *(uint *)(param_1 + 0x2600) = puVar3[4];
      *(uint *)(param_1 + 0x2604) = puVar3[5];
    }
    core_skeleton_cpp_CDeformableModelInstance_computeBoundingBoxFromBones_FUN_0051ef40
              (param_1 + 0xbd24,local_184);
    core_box_cpp_CBoundingBox3D_expand_FUN_0041cc00(param_1 + 0x25f0,local_184);
    core_box_cpp_CBoundingBox3D_expand_FUN_0041cc00(param_1 + 0x25f0,local_178);
    *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) + param_2;
    goto LAB_0054cc7f;
  }
  if (iVar7 == 3) {
    local_64 = param_2 / 5.0f;
    local_60 = *(float *)(param_1 + 0xbed98);
    *(float *)(param_1 + 0xbed98) = local_60 - local_64;
    uVar14 = 0x01C03A10;
    if (0.0 < local_60 - local_64) {
      fVar1 = (local_64 / local_60) * (*(float *)(param_1 + 0x240c) - *(float *)(param_1 + 0x24)) +
              *(float *)(param_1 + 0x24);
    }
    else {
      *(uint *)(param_1 + 0xbe168) = 0;
      core_event_cpp_CEventList_executeCommands_FUN_0047ab70(uVar14,"backToHuman");
      fVar1 = *(float *)(param_1 + 0x240c);
      *(uint *)(param_1 + 0xbed98) = 0;
    }
    *(float *)(param_1 + 0x24) = fVar1;
    core_vampboss_cpp_CVampireBoss_advanceAnimation_FUN_0054d9c0(param_1,param_2);
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880
              (param_1 + 0xbd24);
    core_cloth_cpp_CCloth_process_FUN_00436e50
              (param_1 + 0xdfd8,param_1 + 0x20,param_1 + 0x30,param_2,
               *(uint *)(param_1 + 0x240c),param_1 + 0xbd24);
    iVar7 = param_1 + 0x150;
    local_1c = param_2;
    while (0.0 < local_1c) {
      core_motion_cpp_CMotionController_advance_FUN_004e11c0(iVar7,&local_1c);
    }
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880(iVar7);
    local_18 = (float)(param_1 + 0x20);
    core_cloth_cpp_CCloth_process_FUN_00436e50
              (param_1 + 0x48b08,local_18,param_1 + 0x30,param_2,*(uint *)(param_1 + 0x240c),
               iVar7);
    core_cloth_cpp_CCloth_process_FUN_00436e50
              (param_1 + 0x83638,local_18,param_1 + 0x30,param_2,*(uint *)(param_1 + 0x240c),
               iVar7);
    puVar3 = (uint *)
             core_skeleton_cpp_CDeformableModelInstance_computeBoundingBoxFromBones_FUN_0051ef40
                       (iVar7,local_1b4);
    if ((uint *)(param_1 + 0x25f0) != puVar3) {
      *(uint *)(param_1 + 0x25f0) = *puVar3;
      *(uint *)(param_1 + 0x25f4) = puVar3[1];
      *(uint *)(param_1 + 0x25f8) = puVar3[2];
    }
    if ((uint *)(param_1 + 0x25fc) != puVar3 + 3) {
      *(uint *)(param_1 + 0x25fc) = puVar3[3];
      *(uint *)(param_1 + 0x2600) = puVar3[4];
      *(uint *)(param_1 + 0x2604) = puVar3[5];
    }
    core_skeleton_cpp_CDeformableModelInstance_computeBoundingBoxFromBones_FUN_0051ef40
              (param_1 + 0xbd24,local_1cc);
    core_box_cpp_CBoundingBox3D_expand_FUN_0041cc00(param_1 + 0x25f0,local_1cc);
    core_box_cpp_CBoundingBox3D_expand_FUN_0041cc00(param_1 + 0x25f0,local_1c0);
    goto LAB_0054cc7f;
  }
  local_30 = param_1 + 0x150;
  local_78[0] = param_2;
  while (0.0 < local_78[0]) {
    uVar4 = core_motion_cpp_CMotionController_advance_FUN_004e11c0(local_30,local_78);
    if (uVar4 < 2) {
      if (uVar4 == 1) {
        core_vampboss_cpp_CVampireBoss_summonStalagmites_FUN_0054e0b0(param_1);
LAB_0054d1ae:
        *(uint *)(param_1 + 0xbed9c) = 0x3f800000;
      }
    }
    else {
      if (uVar4 < 3) {
        FUN_0054e130(param_1);
        goto LAB_0054d1ae;
      }
      if (uVar4 < 4) {
        core_vampboss_cpp_CVampireBoss_summonBats_FUN_0054e040(param_1);
        goto LAB_0054d1ae;
      }
      if (uVar4 == 0x29a) {
        (**(code **)(*(int *)(param_1 + 0x14c) + 0x120))(param_1,0,0);
        uStack_c4 = 0;
        uStack_c0 = 0x41a00000;
        fStack_bc = 20.0;
        core_actor_cpp_CDemonActor_transformVector_FUN_0040a200(param_1,auStack_10c,&uStack_c4);
        core_charactr_cpp_CCharacter_dismember_FUN_00427b60(param_1,auStack_10c,0xbf800000,0);
        iVar7 = 0;
        for (fStack_2c = 0.0; (int)fStack_2c < *(int *)(0x01E57284 + 0x150bf4);
            fStack_2c = (float)((int)fStack_2c + 1)) {
          iVar5 = core_actor_cpp_castToClassHash_FUN_0040d890
                            (*(uint *)(iVar7 + 0x150bf8 + 0x01E57284),_DAT_02dd1144);
          if ((iVar5 != 0) && (*(int *)(iVar5 + 0xbecc) != 0)) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(auStack_208);
            uStack_204 = 0x4479c000;
            (**(code **)(*(int *)(iVar5 + 0x14c) + 0x100))(iVar5,auStack_208);
          }
          iVar7 = iVar7 + 4;
        }
      }
    }
  }
  puVar3 = (uint *)
           core_skeleton_cpp_CDeformableModelInstance_computeBoundingBoxFromBones_FUN_0051ef40
                     (local_30,local_16c);
  if ((uint *)(param_1 + 0x25f0) != puVar3) {
    *(uint *)(param_1 + 0x25f0) = *puVar3;
    *(uint *)(param_1 + 0x25f4) = puVar3[1];
    *(uint *)(param_1 + 0x25f8) = puVar3[2];
  }
  if ((uint *)(param_1 + 0x25fc) != puVar3 + 3) {
    *(uint *)(param_1 + 0x25fc) = puVar3[3];
    *(uint *)(param_1 + 0x2600) = puVar3[4];
    *(uint *)(param_1 + 0x2604) = puVar3[5];
  }
  iVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(param_1 + 0x150);
  iVar5 = 0x01C775EC;
  iVar7 = *(int *)(iVar7 + 0x24);
  switch(iVar7) {
  case 0:
    *(float *)(param_1 + 0x2430) = 3.141593f * param_2;
    uVar14 = 0x01C03A10;
    if (*(int *)(iVar5 + 0x228) == 0) {
      *(float *)(param_1 + 0x242c) = 10.0f * param_2;
      core_charactr_cpp_CCharacter_followActor_FUN_00428780
                (param_1,*(uint *)(param_1 + 0xbedb4 + *(int *)(param_1 + 0xbedb0) * 4),
                 0x3e4ccccd,0x497423f0,param_1 + 0xbedc4);
      switch(*(uint *)(param_1 + 0xbedc4)) {
      default:
        fVar1 = (*(float *)(param_1 + 0x2438) * param_2) / 120.0f +
                *(float *)(param_1 + 0x2434);
        *(float *)(param_1 + 0x2434) = fVar1;
        if ((float)50 < fVar1) goto LAB_0054d280;
        iVar5 = core_hero_cpp_isAnyHeroWithinRadius_FUN_004b45b0
                          ((float *)(param_1 + 0x20),0x41400000);
        if (iVar5 == 0) {
          iVar5 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
          local_d0 = *(float *)(iVar5 + 0x20) - *(float *)(param_1 + 0x20);
          local_cc = *(float *)(iVar5 + 0x24) - *(float *)(param_1 + 0x24);
          local_c8 = *(float *)(iVar5 + 0x28) - *(float *)(param_1 + 0x28);
          iVar5 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
                            (local_dc,&local_d0);
          local_114 = *(float *)(iVar5 + 4);
          local_18 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                                      (local_114 - *(float *)(param_1 + 0x34));
          *(float *)(param_1 + 0x2410) = local_18;
          local_3c = *(float *)(param_1 + 0x2410);
          local_48 = *(float *)(param_1 + 0x2430);
          local_3c = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00(local_3c);
          local_28 = -local_48;
          local_4c = local_28;
          if ((local_28 <= local_3c) && (local_4c = local_3c, local_48 < local_3c)) {
            local_4c = local_48;
          }
          fVar1 = *(float *)(param_1 + 0xbed9c) - param_2;
          *(float *)(param_1 + 0x2410) = local_4c;
          *(float *)(param_1 + 0xbed9c) = fVar1;
          local_18 = local_3c;
          if (fVar1 <= 0.0) {
            *(uint *)(param_1 + 0xbed9c) = 0;
            iVar6 = core_actor_cpp_getRandomInt_FUN_0040de00(0,2);
            iVar5 = param_1 + 0x150;
            if (iVar6 == 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar5,4,1);
            }
            else if (iVar6 == 1) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar5,5,1);
            }
            else if (iVar6 == 2) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar5,6,1);
            }
          }
        }
        else {
          core_vampboss_cpp_CVampireBoss_chooseDestWayPoint_FUN_0054e230(param_1);
        }
        break;
      case 1:
      case 2:
        *(uint *)(param_1 + 0xbed9c) = 0x40400000;
      }
    }
    else {
      *(uint *)(param_1 + 0xbed9c) = 0x40400000;
      iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30(uVar14,"morphToBat")
      ;
      if (iVar5 == 0) {
        iVar5 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
        local_13c = *(float *)(iVar5 + 0x20) - *(float *)(param_1 + 0x20);
        local_138 = *(float *)(iVar5 + 0x24) - *(float *)(param_1 + 0x24);
        local_134 = *(float *)(iVar5 + 0x28) - *(float *)(param_1 + 0x28);
        iVar5 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
                          (local_130,&local_13c);
        local_120 = *(float *)(iVar5 + 4);
        local_18 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                                    (local_120 - *(float *)(param_1 + 0x34));
        *(float *)(param_1 + 0x2410) = local_18;
        local_34 = *(float *)(param_1 + 0x2410);
        local_50 = *(float *)(param_1 + 0x2430);
        local_34 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00(local_34);
        local_5c = -local_50;
        local_54 = local_5c;
        if ((local_5c <= local_34) && (local_54 = local_34, local_50 < local_34)) {
          local_54 = local_50;
        }
        *(float *)(param_1 + 0x2410) = local_54;
        local_18 = local_34;
      }
      else {
LAB_0054d280:
        core_vampboss_cpp_CVampireBoss_transformToBat_FUN_0054e1a0(param_1);
      }
    }
    break;
  case 2:
    iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30(0x01C03A10,"flyout")
    ;
    if (iVar5 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,0,1);
    }
  }
  if ((*(int *)(0x01C775EC + 0x228) == 0) && (iVar7 != 2)) {
    local_100 = *(float *)(param_1 + 0x2414) + *(float *)(param_1 + 0x23a4);
    local_f8 = *(float *)(param_1 + 0x241c) + *(float *)(param_1 + 0x23ac);
    local_fc = (*(float *)(param_1 + 0x2418) + *(float *)(param_1 + 0x23a8)) -
               param_2 * (float)3;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050(param_1,&local_100);
  }
  *(uint *)(param_1 + 0x241c) = 0;
  *(uint *)(param_1 + 0x2418) = *(uint *)(param_1 + 0x241c);
  *(uint *)(param_1 + 0x2414) = *(uint *)(param_1 + 0x2418);
  *(uint *)(param_1 + 0x23ac) = 0;
  *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
  *(uint *)(param_1 + 0x23a4) = *(uint *)(param_1 + 0x23a8);
  core_charactr_cpp_CCharacter_preProcess_FUN_004259a0(param_1);
  iVar7 = param_1 + 0x150;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(iVar7);
  core_charactr_cpp_FUN_0042a150(param_1,param_2);
  local_18 = (float)(param_1 + 0x30);
  core_cloth_cpp_CCloth_process_FUN_00436e50
            (param_1 + 0x48b08,param_1 + 0x20,local_18,param_2,*(uint *)(param_1 + 0x240c),
             iVar7);
  core_cloth_cpp_CCloth_process_FUN_00436e50
            (param_1 + 0x83638,param_1 + 0x20,local_18,param_2,*(uint *)(param_1 + 0x240c),
             iVar7);
LAB_0054cc7f:
  iVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(param_1 + 0x150);
  if ((*(int *)(iVar7 + 0x24) != 2) && (*(int *)(0x01C775EC + 0x228) == 0)) {
    core_game_cpp_CGame_setStatusDisplay_FUN_004a3ab0
              (0x01C775EC,param_1 + 0x2440,
               *(float *)(param_1 + 0x2434) / *(float *)(param_1 + 0x2438),0x3f000000);
    return;
  }
  return;
}
