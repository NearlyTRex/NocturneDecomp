// Name: FUN_004c71a0
// Address: 004c71a0
// Address Range: [[004c71a0, 004c7999]]
// Convention: unknown
// Signature: undefined4 FUN_004c71a0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004c71a0(int param_1)

{
  uint uVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  byte auStack_114 [4];
  uint uStack_110;
  uint uStack_10c;
  uint uStack_108;
  uint uStack_104;
  uint uStack_100;
  uint uStack_e4;
  int iStack_e0;
  uint uStack_dc;
  byte auStack_d8 [24];
  byte auStack_c0 [12];
  byte auStack_b4 [12];
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  byte auStack_84 [12];
  float fStack_78;
  float fStack_74;
  float fStack_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  byte local_60 [12];
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  float *pfStack_14;
  
  if (*(float *)(param_1 + 0x578) < 0x41F00000) {
    return 0;
  }
  *(uint *)(param_1 + 0x578) = 0;
  *(uint *)(param_1 + 0x584) = *(uint *)(param_1 + 0x2e0);
  uVar1 = (**(code **)(*(int *)(param_1 + 0x14c) + 0xd8))(param_1,local_60);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,&fStack_a8,uVar1);
  uStack_64 = *(uint *)(param_1 + 0x2e0);
  uStack_6c = 0;
  uStack_68 = 0;
  core_actor_cpp_CDemonActor_transformVector_FUN_0040a200(param_1,&fStack_90,&uStack_6c);
  fStack_48 = fStack_a8 + fStack_90;
  fStack_44 = fStack_a4 + fStack_8c;
  fStack_40 = fStack_a0 + fStack_88;
  fStack_30 = (float)_DAT_00587a7d / *(float *)(param_1 + 0x2e0);
  fStack_3c = fStack_90 * fStack_30;
  fStack_38 = fStack_8c * fStack_30;
  fStack_34 = fStack_88 * fStack_30;
  fStack_54 = fStack_a8 - fStack_3c;
  fStack_50 = fStack_a4 - fStack_38;
  fStack_4c = fStack_a0 - fStack_34;
  core_setcolid_cpp_CDemonSet_init_FUN_00511750(0x01E57284);
  core_setcolid_cpp_CDemonSet_setRayType_FUN_00511800(0x01E57284,1);
  FUN_00511740(0x01E57284);
  core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,param_1);
  if (*(int *)(param_1 + 0x2fc) != 0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,*(uint *)(param_1 + 0x2fc));
  }
  iVar5 = 0;
  core_setcolid_cpp_CDemonSet_pushRaytraceState_FUN_005113e0(0x01E57284);
  do {
    pfStack_14 = (float *)core_setcolid_cpp_CDemonSet_raycast_FUN_0050fb00
                                    (0x01E57284,&fStack_54,&fStack_48);
    if (((float)pfStack_14 < 0.0) || (1.0 < (float)pfStack_14)) break;
    *(float *)(param_1 + 0x584) = *(float *)(param_1 + 0x2e0) * (float)pfStack_14;
    iStack_1c = core_actor_cpp_castToClassHash_FUN_0040d890
                          (*(uint *)(0x01E57284 + 0x14cd5c),DAT_00765a98);
    if ((iStack_1c != 0) &&
       (iVar2 = (**(code **)(*(int *)(iStack_1c + 0x14c) + 0x104))(iStack_1c), 0 < iVar2)) {
      iStack_1c = 0;
    }
    iVar2 = core_actor_cpp_castToClassHash_FUN_0040d890
                      (*(uint *)(0x01E57284 + 0x14cd5c),_DAT_01c78c78);
    iVar4 = core_actor_cpp_castToClassHash_FUN_0040d890
                      (*(uint *)(0x01E57284 + 0x14cd5c),_DAT_02dd10bc);
    iStack_2c = iVar4;
    if (iStack_1c != 0) {
      iVar4 = (**(code **)(*(int *)(iStack_1c + 0x14c) + 0xd8))(iStack_1c);
      iVar2 = 0x01E57284;
      if ((iVar4 != 0) && (iVar5 == 0)) {
        *(float *)(param_1 + 0x578) = 0x41F00000;
        core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00511590(iVar2);
        core_setcolid_cpp_CDemonSet_init_FUN_00511750(0x01E57284);
        return 0;
      }
      break;
    }
    if (iVar2 == 0) {
      if (iVar4 != 0) {
        core_trigger_cpp_CTrigger_onProjectileHit_FUN_00548580(iVar4);
        iVar5 = FUN_005485a0(iVar4,param_1);
        if (iVar5 != 0) {
          pfStack_14 = (float *)(**(code **)(*(int *)(param_1 + 0x14c) + 0xe4))(param_1);
          core_trigger_cpp_CTrigger_applyDamage_FUN_005485e0(iVar4,pfStack_14);
        }
        core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,iStack_2c);
        break;
      }
    }
    else {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,iVar2);
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 1);
  core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00511590(0x01E57284);
  core_lightgun_cpp_CLightGun_updateBeamLight_FUN_004c6ff0(param_1);
  iStack_20 = 0;
  iStack_24 = 0;
  do {
    if (*(int *)(0x01E57284 + 0x14ecb0) <= iStack_20) {
      core_setcolid_cpp_CDemonSet_init_FUN_00511750(0x01E57284);
      core_sound_cpp_CSound_playActorSound_FUN_0052ea60
                (0x02DC9450,param_1,"cre-fire.wav",&fStack_a8);
      sound_sndmain_cpp_setSfxVolume_FUN_005270d0(*(uint *)(param_1 + 0x574),0x40000000);
      iVar5 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x8c))(param_1);
      if (iVar5 == *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8)) {
        FUN_004940d0(0x01C70F74);
      }
      *(uint *)(param_1 + 0x580) = 1;
      *(uint *)(param_1 + 0x570) = 1;
      return 1;
    }
    iVar5 = *(int *)(0x01E57284 + iStack_24 + 0x14ecb4);
    iVar2 = (**(code **)(*(int *)(iVar5 + 0x14c) + 0xd8))(iVar5);
    if (((iVar2 == 0) &&
        ((((iVar2 = core_actor_cpp_isOfClass_FUN_0040d7e0(iVar5,"CGhoul"), iVar2 != 0 ||
           (iVar2 = core_actor_cpp_isOfClass_FUN_0040d7e0(iVar5,"CTVBat"), iVar2 != 0)) ||
          (iVar2 = core_actor_cpp_isOfClass_FUN_0040d7e0(iVar5,"CBatCreature"), iVar2 != 0)
          ) || ((iVar2 = core_actor_cpp_isOfClass_FUN_0040d7e0(iVar5,"CWerewolf"),
                iVar2 != 0 ||
                (iVar2 = core_actor_cpp_isOfClass_FUN_0040d7e0(iVar5,"CSvetlana"),
                iVar2 != 0)))))) ||
       ((iVar2 = core_actor_cpp_isOfClass_FUN_0040d7e0(iVar5,"CDraculaBride"), iVar2 != 0
        || (((iVar2 = core_actor_cpp_isOfClass_FUN_0040d7e0(iVar5,"CBatman"), iVar2 != 0 ||
             (iVar2 = core_actor_cpp_isOfClass_FUN_0040d7e0(iVar5,"CBatCreature"),
             iVar2 != 0)) ||
            (iVar2 = core_actor_cpp_isOfClass_FUN_0040d7e0(iVar5,"CBride"), iVar2 != 0)))))
       ) {
      (**(code **)(*(int *)(iVar5 + 0x14c) + 0x14))(iVar5,auStack_c0);
      iVar2 = core_dcamera_cpp_CDemonCamera_isBoundingBoxVisible_FUN_00445fe0
                        (&DAT_01c74640,iVar5 + 0x20,iVar5 + 0x30,auStack_c0,auStack_b4);
      if (iVar2 != 0) {
        engine_console_cpp_CConsole_printf_FUN_0043ac60
                  (PTR_DAT_005ad350,"?%s in volume\n" + 1,iVar5);
        iStack_18 = iVar5;
        core_setcolid_cpp_CDemonSet_pushRaytraceState_FUN_005113e0(0x01E57284);
        pfVar3 = (float *)(**(code **)(*(int *)(iVar5 + 0x14c) + 0x14))(iVar5,auStack_d8);
        pfStack_14 = pfVar3 + 3;
        core_actor_cpp_CVector_ctor_FUN_0040e160(&fStack_9c);
        fStack_9c = *pfVar3 + *pfStack_14;
        fStack_98 = pfVar3[1] + pfStack_14[1];
        fStack_94 = pfVar3[2] + pfStack_14[2];
        core_actor_cpp_CVector_ctor_FUN_0040e160(&fStack_78);
        fStack_78 = fStack_9c * _DAT_00587a85;
        fStack_74 = fStack_98 * _DAT_00587a85;
        fStack_70 = fStack_94 * _DAT_00587a85;
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(iVar5,auStack_84,&fStack_78);
        iVar2 = 0;
        iStack_28 = 0;
        do {
          core_setcolid_cpp_CDemonSet_raycast_FUN_0050fb00(0x01E57284,&fStack_54,auStack_84);
          iVar4 = *(int *)(0x01E57284 + 0x14cd5c);
          if (iVar4 == 0) break;
          if (iVar4 == iStack_18) {
            iStack_28 = 1;
            break;
          }
          iVar4 = core_actor_cpp_isOfClass_FUN_0040d7e0(iVar4,"CTrigger || CGlass");
          if (iVar4 == 0) break;
          iVar2 = iVar2 + 1;
          core_setcolid_cpp_CDemonSet_ignore_FUN_00511780
                    (0x01E57284,*(uint *)(0x01E57284 + 0x14cd5c));
        } while (iVar2 < 3);
        core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00511590(0x01E57284);
        if (iStack_28 != 0) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(auStack_114);
          uStack_110 = 0x3dcccccd;
          uStack_e4 = 0x6c;
          uStack_10c = 0;
          uStack_100 = 0;
          uStack_104 = 0;
          uStack_108 = 0;
          iStack_e0 = param_1;
          uStack_dc = (**(code **)(*(int *)(param_1 + 0x14c) + 0x8c))(param_1);
          (**(code **)(*(int *)(iVar5 + 0x14c) + 0x100))(iVar5,auStack_114);
        }
      }
    }
    iStack_20 = iStack_20 + 1;
    iStack_24 = iStack_24 + 4;
  } while( true );
}
