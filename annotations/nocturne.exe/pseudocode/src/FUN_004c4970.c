// Name: FUN_004c4970
// Address: 004c4970
// Address Range: [[004c4970, 004c5241]]
// Convention: unknown
// Signature: void FUN_004c4970(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004c518e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c4970(int param_1,float param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  uint uVar6;
  unkbyte10 Var7;
  unkbyte10 Var8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  byte local_1f0 [200];
  float local_128;
  float local_124;
  float local_120;
  uint local_11c;
  uint local_118;
  uint local_114;
  uint local_110;
  uint local_10c;
  uint local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  byte local_a4 [12];
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  byte local_80 [12];
  byte local_74 [12];
  double local_68;
  double local_60;
  float local_54;
  float local_44;
  float local_40;
  uint local_3c;
  uint local_38;
  uint local_30;
  float local_2c;
  uint local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  iVar4 = FUN_004259f0(param_1,param_2);
  if (iVar4 != 0) {
    *(uint *)(param_1 + 0x23ac) = 0;
    *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
    *(uint *)(param_1 + 0x23a4) = *(uint *)(param_1 + 0x23a8);
    local_18 = param_2 * *(float *)(param_1 + 0xbc8c);
    while (0.0 < local_18) {
      iVar4 = core_motion_cpp_CMotionController_advance_FUN_004e11c0(param_1 + 0x150,&local_18);
      if ((iVar4 == 100) && (iVar4 = *(int *)(param_1 + 0xbca4), iVar4 != 0)) {
        local_d4 = *(float *)(iVar4 + 0x20) - *(float *)(param_1 + 0x20);
        local_d0 = *(float *)(iVar4 + 0x24) - *(float *)(param_1 + 0x24);
        local_cc = *(float *)(iVar4 + 0x28) - *(float *)(param_1 + 0x28);
        if (&local_ec != &local_d4) {
          local_ec = local_d4;
          local_e8 = local_d0;
          local_e4 = local_cc;
        }
        local_e8 = local_e8 + _DAT_0058781c;
        local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0xc0000000);
        local_ec = local_14 + local_ec;
        local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0();
        Var7 = fsin((float10)_DAT_00587824);
        fVar13 = (float10)fptan((float10)_DAT_0058782c);
        fVar11 = (float10)local_14 + (float10)local_e4;
        local_e4 = (float)fVar11;
        Var8 = atan2((float10)local_ec);
        fVar2 = SQRT(local_ec * local_ec + local_e4 * local_e4);
        fVar12 = (float10)fcos(Var7);
        fVar9 = (float10)fsin(Var8);
        fVar10 = (float10)fcos(Var8);
        local_60 = (double)fVar2;
        local_24 = fVar2 * (float)_DAT_00587814 * fVar2;
        fVar11 = fVar12 * (float10)_DAT_0058781c * fVar12 *
                 (fVar11 * (float10)fVar2 - (float10)local_e8);
        local_ac = (float)-fVar13;
        local_20 = (float)fVar11;
        local_b0 = (float)(fVar9 * fVar12);
        local_a8 = (float)(fVar10 * fVar12);
        if ((float10)0 < fVar11) {
          local_1c = SQRT(local_24 / local_20);
          local_8c = local_b0 * local_1c;
          local_88 = local_ac * local_1c;
          local_84 = local_a8 * local_1c;
          if (&local_b0 != &local_8c) {
            local_b0 = local_8c;
            local_ac = local_88;
            local_a8 = local_84;
          }
          local_114 = 0x3f800000;
          local_11c = 0;
          local_118 = 0x3f000000;
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,local_74,&local_11c);
          core_fire_cpp_CFireEffect_createFireball_FUN_0048b270(0x01C08D04,local_74,&local_b0,2,0)
          ;
          (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))();
        }
      }
    }
    fVar3 = (float)_DAT_005877f4;
    fVar2 = (float)_DAT_005877fc;
    *(uint *)(param_1 + 0x242c) = *(uint *)(param_1 + 0x23ac);
    *(float *)(param_1 + 0x2430) = param_2 * fVar3 * *(float *)(param_1 + 0xbc8c) * fVar2;
    iVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660();
    local_30 = *(uint *)(iVar4 + 0x24);
    local_28 = local_30;
    iVar4 = FUN_00428c00(param_1,param_2);
    if (iVar4 == 0) {
      if (local_28 == 0) {
        (**(code **)(*(int *)(param_1 + 0x14c) + 0x13c))(param_1,param_2);
        iVar4 = *(int *)(param_1 + 0xbca4);
        if (iVar4 == 0) {
          iVar4 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(param_1,param_2);
          if (iVar4 != 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0();
          }
        }
        else {
          local_128 = *(float *)(iVar4 + 0x20) - *(float *)(param_1 + 0x20);
          local_124 = *(float *)(iVar4 + 0x24) - *(float *)(param_1 + 0x24);
          local_120 = *(float *)(iVar4 + 0x28) - *(float *)(param_1 + 0x28);
          local_54 = local_120 * local_120 + local_128 * local_128 + local_124 * local_124;
          local_2c = (float)(((int)local_54 >> 1) + _DAT_01c7070c);
          core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(local_80,&local_128);
          local_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00();
          if (((float)_DAT_005877f4 <= ABS(local_14)) || ((float)_DAT_00587804 < local_2c)) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0();
          }
          else if (*(float *)(param_1 + 0xbca0) <= 0.0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0();
            local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
                                        (0x41700000,0x41f00000);
            *(float *)(param_1 + 0xbca0) = local_14;
          }
        }
      }
      else if (local_28 < 2) {
        (**(code **)(*(int *)(param_1 + 0x14c) + 0x13c))(param_1,param_2);
        uVar6 = 0x41A00000;
        if (*(int *)(param_1 + 0xbca4) == 0) {
          iVar4 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(param_1,param_2);
          if (iVar4 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0();
          }
        }
        else {
          local_38 = 0x41A00000;
          *(uint *)(param_1 + 0x23ac) = 0;
          *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
          *(uint *)(param_1 + 0x23a4) = *(uint *)(param_1 + 0x23a8);
          local_110 = 0;
          local_10c = 0;
          local_108 = uVar6;
          uVar6 = (**(code **)(*(int *)(*(int *)(param_1 + 0xbca4) + 0x14c) + 0xbc))
                            (*(int *)(param_1 + 0xbca4),&local_110,0x3f000000,0x3e32b8c2);
          iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                            (param_1,*(int *)(param_1 + 0xbca4) + 0x20,uVar6);
          if (iVar4 < 0) {
            engine_console_cpp_CConsole_printf_FUN_0043ac60();
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0();
          }
          if (*(float *)(param_1 + 0xbca0) <= 0.0) {
            iVar4 = *(int *)(param_1 + 0xbca4);
            local_f8 = *(float *)(iVar4 + 0x20) - *(float *)(param_1 + 0x20);
            local_f4 = *(float *)(iVar4 + 0x24) - *(float *)(param_1 + 0x24);
            local_f0 = *(float *)(iVar4 + 0x28) - *(float *)(param_1 + 0x28);
            local_44 = local_f0 * local_f0 + local_f8 * local_f8 + local_f4 * local_f4;
            local_40 = (float)(((int)local_44 >> 1) + _DAT_01c7070c);
            if (local_40 < *(float *)(param_1 + 0xbc9c)) {
              pfVar5 = (float *)core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
                                          (local_a4,&local_f8);
              if (&local_f8 != pfVar5) {
                local_f8 = *pfVar5;
                local_f4 = pfVar5[1];
                local_f0 = pfVar5[2];
              }
              local_3c = core_actor_cpp_normalizeAngleToPi_FUN_0040df00();
              local_14 = (float)local_3c;
              local_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00();
              local_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00();
              if (ABS(local_14) < (float)_DAT_005877f4) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0();
                *(uint *)(param_1 + 0xbca0) = 0x40c00000;
              }
            }
          }
        }
      }
      else if (((local_28 == 5) && (*(int *)(param_1 + 0xbc90) == 0)) &&
              (*(int *)(param_1 + 0xdc) == 0)) {
        core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0();
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240();
        FUN_004b0480();
        *(uint *)(param_1 + 0xbc90) = 1;
      }
    }
    else {
      uVar1 = *(uint *)(param_1 + 0x25a8);
      if (((uVar1 < 2) || (uVar1 < 3)) || (uVar1 != 3)) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0();
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0();
        engine_console_cpp_CConsole_printf_FUN_0043ac60();
      }
      *(uint *)(param_1 + 0x23ac) = 0;
      *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
      *(uint *)(param_1 + 0x23a4) = *(uint *)(param_1 + 0x23a8);
    }
    if (0.0 < *(float *)(param_1 + 0xbca0)) {
      *(float *)(param_1 + 0xbca0) = *(float *)(param_1 + 0xbca0) - param_2;
    }
    if (local_30 == 1) {
      iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50();
      if (iVar4 == 0) {
        fVar13 = (float10)1;
        fVar11 = (float10)1.4426950408889634 *
                 (float10)0.6931471805599453 * (float10)*(float *)(param_1 + 0x2614) *
                 (float10)_DAT_0058780c;
        fVar12 = (float10)f2xm1(fVar11 - (fVar11 / fVar13) * fVar13);
        fVar13 = (float10)fscale(fVar12 + fVar13,fVar11);
        local_68 = (double)fVar13;
        local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x3f7d70a4,0x3f8147ae)
        ;
        _sprintf(local_1f0,"slime.wav @%f *%f",(double)*(float *)(param_1 + 0x2614),
                   (double)(local_14 * (float)local_68));
        uVar6 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x28))(param_1,local_1f0);
        *(uint *)(param_1 + 0xbd2c) = uVar6;
      }
    }
    else {
      sound_sndmain_cpp_killSfx_FUN_00527230();
    }
    iVar4 = core_charactr_cpp_CCharacter_isOnGround_FUN_00425960();
    if (iVar4 != 0) {
      if ((*(int *)(param_1 + 0xbca4) != 0) &&
         (iVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0xbca4) + 0x14c) + 0xec))(),
         iVar4 == param_1)) {
        core_setcolid_cpp_CDemonSet_ignore_FUN_00511780
                  (0x01E57284,*(uint *)(param_1 + 0xbca4));
      }
      *(float *)(param_1 + 0x2424) = *(float *)(param_1 + 0x2424) - param_2 * (float)_DAT_00587814;
      local_104 = *(float *)(param_1 + 0x2420) * param_2;
      local_100 = *(float *)(param_1 + 0x2424) * param_2;
      local_fc = param_2 * *(float *)(param_1 + 0x2428);
      local_98 = local_104 + *(float *)(param_1 + 0x2414);
      local_94 = local_100 + *(float *)(param_1 + 0x2418);
      local_90 = local_fc + *(float *)(param_1 + 0x241c);
      local_bc = local_98 + *(float *)(param_1 + 0x23a4);
      local_b8 = local_94 + *(float *)(param_1 + 0x23a8);
      local_b4 = local_90 + *(float *)(param_1 + 0x23ac);
      *(uint *)(param_1 + 0x241c) = 0;
      *(uint *)(param_1 + 0x2418) = *(uint *)(param_1 + 0x241c);
      *(float *)(param_1 + 0x2414) = *(float *)(param_1 + 0x2418);
      *(uint *)(param_1 + 0x23ac) = 0;
      *(float *)(param_1 + 0x23a8) = *(float *)(param_1 + 0x23ac);
      *(float *)(param_1 + 0x23a4) = *(float *)(param_1 + 0x23ac);
      core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050(param_1,&local_bc);
    }
    core_charactr_cpp_CCharacter_preProcess_FUN_004259a0();
    core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0();
    FUN_0042a150(param_1,param_2);
  }
  return;
}
