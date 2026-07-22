// Name: core_frankgen.cpp_CFrankenstienMachine_process_FUN_00494950
// Address: 00494950
// Address Range: [[00494950, 00494dc0]]
// Convention: unknown
// Signature: void core_frankgen_cpp_CFrankenstienMachine_process_FUN_00494950(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_frankgen_cpp_CFrankenstienMachine_process_FUN_00494950(int param_1,float param_2)

{
  float fVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  uint local_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint uStack_6c;
  uint local_68;
  float fStack_64;
  uint uStack_60;
  uint uStack_5c;
  float fStack_58;
  uint uStack_54;
  byte auStack_50 [12];
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  float fStack_28;
  uint uStack_24;
  byte auStack_20 [16];
  float local_10;
  float fStack_c;
  
  _DAT_01c71340 = *(float *)(param_1 + 0x154);
  iVar2 = core_frankgen_cpp_findLeader_FUN_00495240();
  if (iVar2 == param_1) {
    fVar1 = param_2 * _DAT_0059db6c + *(float *)(param_1 + 0x154);
    *(float *)(param_1 + 0x154) = fVar1;
    if (0x450FC000 <= fVar1) {
      *(float *)(param_1 + 0x154) = *(float *)(param_1 + 0x154) - 0x450FC000;
    }
  }
  else {
    *(uint *)(param_1 + 0x154) = *(uint *)(iVar2 + 0x154);
  }
  if (*(float *)(param_1 + 0x154) < _DAT_01c71340) {
    _DAT_01c71340 = _DAT_01c71340 - 0x450FC000;
  }
  FUN_004950a0(param_1);
  switch(*(uint *)(param_1 + 0x150)) {
  case 0:
    iVar2 = *(int *)(param_1 + 0x154);
    if ((0x44ac8000 < iVar2) && (iVar2 < 0x44c58000)) {
      if (iVar2 < 0x44b90000) {
        local_10 = (*(float *)(param_1 + 0x154) + -1380.0f) * (float)0.01 *
                   (float)30 + 20.0f;
      }
      else {
        local_10 = (1580.0f - *(float *)(param_1 + 0x154)) * (float)0.01 *
                   (float)50;
      }
      iVar2 = core_frankgen_cpp_CFrankenstienMachine_accumulateParticles_FUN_00494dd0
                        (param_1,local_10,param_2);
      iVar4 = 0;
      (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,&local_68);
      uStack_44 = 0;
      uStack_40 = 0x40800000;
      uStack_3c = 0;
      if (0 < iVar2) {
        do {
          uStack_2c = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(local_68,uStack_5c);
          fStack_c = (float)uStack_2c;
          fStack_c = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0,0x3ecccccd);
          fStack_28 = (1.0 - fStack_c) * fStack_64 + fStack_58 * fStack_c;
          uStack_24 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(uStack_60,uStack_54);
          fStack_c = (float)uStack_24;
          puVar3 = (uint *)
                   core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                             (param_1,auStack_50,&uStack_2c);
          if (&uStack_2c != puVar3) {
            uStack_2c = *puVar3;
            fStack_28 = (float)puVar3[1];
            uStack_24 = puVar3[2];
          }
          fStack_c = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
                                      (0x3f000000,0x3fc00000,0,0xffff);
          iVar4 = iVar4 + 1;
          core_fire_cpp_CFireEffect_createSmokeParticle_FUN_0048afe0
                    (0x01C08D04,&uStack_2c,fStack_c);
        } while (iVar4 < iVar2);
      }
    }
    if ((0x44e10000 < *(int *)(param_1 + 0x154)) && (*(int *)(param_1 + 0x154) < 0x44ed8000)) {
      (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,&local_80);
      uStack_38 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(local_80,uStack_74);
      uStack_34 = uStack_7c;
      fStack_c = (float)uStack_38;
      uStack_30 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(uStack_78,uStack_6c);
      fStack_c = (float)uStack_30;
      puVar3 = (uint *)
               core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                         (param_1,auStack_20,&uStack_38);
      if (&uStack_38 != puVar3) {
        uStack_38 = *puVar3;
        uStack_34 = puVar3[1];
        uStack_30 = puVar3[2];
      }
      core_fire_cpp_CFireEffect_createSpark_FUN_0048ae90
                (0x01C08D04,&uStack_38,0,0x4000,0x10000,0,0xffff);
    }
    core_frankgen_cpp_CFrankenstienMachine_playSfxAtFrame_FUN_00494e30
              (param_1,0x3f800000,"frankx-bed1.wav");
    core_frankgen_cpp_CFrankenstienMachine_playSfxAtFrame_FUN_00494e30
              (param_1,0x43ed8000,"frankx-bed2.wav");
    core_frankgen_cpp_CFrankenstienMachine_playSfxAtFrame_FUN_00494e30
              (param_1,0x444a4000,"frankx-bed3.wav");
    core_frankgen_cpp_CFrankenstienMachine_playSfxAtFrame_FUN_00494e30
              (param_1,0x44834000,"frankx-bed4.wav");
    core_frankgen_cpp_CFrankenstienMachine_playSfxAtFrame_FUN_00494e30
              (param_1,0x44ac8000,"frankx-water-dip.wav");
    core_frankgen_cpp_CFrankenstienMachine_playSfxAtFrame_FUN_00494e30
              (param_1,0x44ff0000,"frankx-big-ramp-bed5.wav");
switchD_004949bb_caseD_4:
    return;
  case 1:
    core_frankgen_cpp_CFrankenstienMachine_playSfxAtFrame_FUN_00494e30
              (param_1,0x43030000,"frankx-crane1.wav");
    return;
  case 2:
    core_frankgen_cpp_CFrankenstienMachine_playSfxAtFrame_FUN_00494e30
              (param_1,0x4403c000,"frankx-crane2.wav");
    return;
  case 3:
    core_frankgen_cpp_CFrankenstienMachine_playSfxAtFrame_FUN_00494e30
              (param_1,0x44882000,"frankx-crane3.wav");
    return;
  case 4:
  case 7:
    goto switchD_004949bb_caseD_4;
  case 5:
    core_frankgen_cpp_CFrankenstienMachine_playSfxAtFrame_FUN_00494e30
              (param_1,0x44580000,"frankx-arm.wav");
    return;
  case 6:
    core_frankgen_cpp_CFrankenstienMachine_playSfxAtFrame_FUN_00494e30
              (param_1,0x44d4c000,"frankx-flap-up.wav");
    core_frankgen_cpp_CFrankenstienMachine_playSfxAtFrame_FUN_00494e30
              (param_1,0x44eb2000,"frankx-flap-down.wav");
    return;
  case 8:
    core_frankgen_cpp_CFrankenstienMachine_playSfxAtFrame_FUN_00494e30
              (param_1,0x44f3c000,"frankx-big-ramp.wav");
    return;
  default:
    _DAT_01cc4800 = "..\\core\\frankgen.cpp";
    _DAT_01cc4804 = 0x13e;
    FUN_004c8440("WTF!");
    return;
  }
}
