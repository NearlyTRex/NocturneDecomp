// Name: FUN_00477890
// Address: 00477890
// Address Range: [[00477890, 00477fcd]]
// Convention: unknown
// Signature: undefined4 FUN_00477890(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00477890(int param_1)

{
  double dVar1;
  uint uVar2;
  int iVar3;
  float *pfVar4;
  float fVar5;
  int iVar6;
  float fVar7;
  uint *puVar8;
  float10 fVar9;
  float10 fVar10;
  uint uStack_11c;
  float fStack_118;
  uint uStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  uint uStack_100;
  uint uStack_fc;
  uint uStack_f8;
  uint uStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  int iStack_e8;
  uint uStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  byte local_b0 [12];
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  byte auStack_8c [12];
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  byte auStack_68 [28];
  float fStack_4c;
  float fStack_44;
  int iStack_40;
  float fStack_3c;
  float fStack_38;
  int iStack_34;
  int iStack_30;
  float fStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  float fStack_1c;
  float fStack_18;
  
  uVar2 = (**(code **)(*(int *)(param_1 + 0x14c) + 0xd8))(param_1,local_b0);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,&fStack_d4,uVar2);
  iVar3 = core_weapon_cpp_CWeapon_fire_FUN_00554600(param_1);
  if (iVar3 == 0) {
    core_sound_cpp_CSound_playActorSound_FUN_0052ea60
              (0x02DC9450,param_1,"shotgun-noammo.wav",&fStack_d4);
    return 0;
  }
  fVar9 = (float10)fptan((float10)*(float *)(param_1 + 0x570) * (float10)3.1415926535000001 *
                         (float10)0.0055555555555555497);
  fStack_44 = (float)(fVar9 * (float10)*(float *)(param_1 + 0x2e0));
  fStack_38 = (float)core_actor_cpp_getRandomInt_FUN_0040de00(10,0xf);
  iStack_40 = 0;
  if (0 < (int)fStack_38) {
    do {
      fStack_4c = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0,0x40c90fdb);
      fStack_18 = fStack_4c;
      fStack_18 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0,fStack_44);
      fVar9 = (float10)fcos((float10)fStack_4c);
      fVar10 = (float10)fsin((float10)fStack_4c);
      fStack_e0 = (float)(fVar9 * (float10)fStack_18);
      fStack_dc = (float)(fVar10 * (float10)fStack_18);
      fStack_d8 = *(float *)(param_1 + 0x2e0);
      pfVar4 = (float *)core_actor_cpp_CDemonActor_transformVector_FUN_0040a200
                                  (param_1,auStack_8c,&fStack_e0);
      if (&fStack_e0 != pfVar4) {
        fStack_e0 = *pfVar4;
        fStack_dc = pfVar4[1];
        fStack_d8 = pfVar4[2];
      }
      fStack_bc = fStack_d4 + fStack_e0;
      fStack_b8 = fStack_d0 + fStack_dc;
      fStack_b4 = fStack_cc + fStack_d8;
      fStack_3c = (float)1.5 / *(float *)(param_1 + 0x2e0);
      fStack_a4 = fStack_e0 * fStack_3c;
      fStack_a0 = fStack_dc * fStack_3c;
      fStack_9c = fStack_d8 * fStack_3c;
      fStack_98 = fStack_d4 - fStack_a4;
      fStack_94 = fStack_d0 - fStack_a0;
      fStack_90 = fStack_cc - fStack_9c;
      core_setcolid_cpp_CDemonSet_init_FUN_00511750(0x01E57284);
      core_setcolid_cpp_CDemonSet_setRayType_FUN_00511800(0x01E57284,1);
      core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,param_1);
      if (*(int *)(param_1 + 0x2fc) != 0) {
        core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,*(int *)(param_1 + 0x2fc));
      }
      iStack_24 = 0;
      do {
        fVar5 = (float)core_setcolid_cpp_CDemonSet_raycast_FUN_0050fb00
                                 (0x01E57284,&fStack_98,&fStack_bc);
        dVar1 = (double)fVar5;
        fStack_18 = fVar5;
        if ((dVar1 < 0.0) || (1.0 < dVar1)) break;
        iVar3 = core_actor_cpp_castToClassHash_FUN_0040d890
                          (*(uint *)(0x01E57284 + 0x14cd5c),DAT_00765a98,dVar1,fVar5);
        if ((iVar3 != 0) &&
           (iVar6 = (**(code **)(*(int *)(iVar3 + 0x14c) + 0x104))(iVar3), 0 < iVar6)) {
          iVar3 = 0;
        }
        iStack_20 = core_actor_cpp_castToClassHash_FUN_0040d890
                              (*(uint *)(0x01E57284 + 0x14cd5c),_DAT_01c78c78);
        iVar6 = core_actor_cpp_castToClassHash_FUN_0040d890
                          (*(uint *)(0x01E57284 + 0x14cd5c),_DAT_02dd10bc);
        iStack_34 = iVar6;
        iStack_28 = core_actor_cpp_castToClassHash_FUN_0040d890
                              (*(uint *)(0x01E57284 + 0x14cd5c),DAT_0077bd78);
        iStack_30 = core_actor_cpp_castToClassHash_FUN_0040d890
                              (*(uint *)(0x01E57284 + 0x14cd5c),_DAT_01c7068c);
        fVar7 = (float)(**(code **)(*(int *)(param_1 + 0x14c) + 0xe4))(param_1);
        fStack_18 = fStack_38;
        fStack_2c = ((1.0 - fVar5) * fVar7) / (float)(int)fStack_38;
        if (iVar3 == 0) {
          if (iStack_20 == 0) {
            if (iVar6 == 0) {
              if (iStack_28 == 0) {
                if (iStack_30 == 0) {
                  FUN_0048ab60(0x01C08D04,0x01E57284 + 0x14cd50,0x01E57284 + 0x14cd40,
                               *(uint *)(0x01E57284 + 0x14cd4c),
                               *(uint *)(0x01E57284 + 0x14cd5c));
                  break;
                }
                core_flamecan_cpp_CFlameCan_ignite_FUN_0048e550(iStack_30);
              }
              else {
                core_crate_cpp_CCrate_explode_FUN_0043cdb0(iStack_28);
              }
            }
            else {
              core_trigger_cpp_CTrigger_onProjectileHit_FUN_00548580(iVar6);
              iVar3 = FUN_005485a0(iVar6,param_1);
              if (iVar3 != 0) {
                core_trigger_cpp_CTrigger_applyDamage_FUN_005485e0(iVar6,fStack_2c);
              }
              core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,iStack_34);
            }
          }
          else {
            iVar3 = FUN_004aded0(iStack_20);
            if (iVar3 == 0) break;
            FUN_004ada20(iStack_20,0x01E57284 + 0x14cd50);
          }
        }
        else {
          iVar6 = (**(code **)(*(int *)(iVar3 + 0x14c) + 0xd8))(iVar3);
          if (iVar6 != 0) break;
          core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(&uStack_11c);
          uStack_11c = *(uint *)(0x01E57284 + 0x14cd60);
          fStack_118 = fStack_2c;
          uStack_114 = 0x3ecccccd;
          fStack_74 = *(float *)(0x01E57284 + 0x14cd34) - *(float *)(0x01E57284 + 0x14cd28);
          fStack_70 = *(float *)(0x01E57284 + 0x14cd38) - *(float *)(0x01E57284 + 0x14cd2c);
          fStack_6c = *(float *)(0x01E57284 + 0x14cd3c) - *(float *)(0x01E57284 + 0x14cd30);
          fStack_1c = (float)10 /
                      SQRT(fStack_6c * fStack_6c + fStack_74 * fStack_74 + fStack_70 * fStack_70);
          fStack_c8 = fStack_74 * fStack_1c;
          fStack_c4 = fStack_70 * fStack_1c;
          fStack_c0 = fStack_6c * fStack_1c;
          if (&fStack_110 != &fStack_c8) {
            fStack_110 = fStack_c8;
            fStack_10c = fStack_c4;
            fStack_108 = fStack_c0;
          }
          puVar8 = (uint *)
                   core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                             (iVar3,auStack_68,0x01E57284 + 0x14cd50);
          if (&uStack_100 != puVar8) {
            uStack_100 = *puVar8;
            uStack_fc = puVar8[1];
            uStack_f8 = puVar8[2];
          }
          uStack_f4 = *(uint *)(param_1 + 0x564);
          uStack_ec = 0x6b;
          uStack_f0 = 0x3f800000;
          iStack_e8 = param_1;
          uStack_e4 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x8c))(param_1);
          (**(code **)(*(int *)(iVar3 + 0x14c) + 0x100))(iVar3,&uStack_11c);
          if (*(int *)(param_1 + 0x2dc) == 0) break;
          core_setcolid_cpp_CDemonSet_ignore_FUN_00511780
                    (0x01E57284,*(uint *)(0x01E57284 + 0x14cd5c));
        }
        iStack_24 = iStack_24 + 1;
      } while (iStack_24 < 4);
      iStack_40 = iStack_40 + 1;
    } while (iStack_40 < (int)fStack_38);
  }
  fStack_80 = fStack_d4;
  fStack_78 = fStack_cc;
  fStack_7c = fStack_d0 + 1.574918751107038e-314._0_4_;
  core_fire_cpp_CFireEffect_createMuzzleFlash_FUN_0048af20(0x01C08D04,&fStack_80,param_1 + 0x3c);
  core_sound_cpp_CSound_playActorSound_FUN_0052ea60
            (0x02DC9450,param_1,"elephantgun.wav",&fStack_d4);
  *(uint *)(param_1 + 0x2f8) = 0x3f800000;
  iVar3 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x8c))(param_1);
  if (iVar3 == *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8)) {
    FUN_004940d0(0x01C70F74);
  }
  return 1;
}
