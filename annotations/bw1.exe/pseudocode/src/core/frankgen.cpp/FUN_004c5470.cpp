// Name: core_frankgen.cpp_FUN_004c5470
// Address: 004c5470
// Address Range: [[004c5470, 004c54e3] [004c5845, 004c5883] [004c5956, 004c5980]]
// Convention: unknown
// Signature: void core_frankgen_cpp_FUN_004c5470(CFrankenstienMachine *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_frankgen_cpp_FUN_004c5470(CFrankenstienMachine *param_1,float param_2)

{
  float fVar1;
  CFrankenstienMachine *pCVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  float afStackY_1038 [981];
  CVector3f *wind_influence;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_78;
  uint uStack_74;
  float fStack_70;
  uint uStack_6c;
  uint uStack_68;
  float fStack_64;
  uint uStack_60;
  byte auStack_5c [12];
  byte auStack_50 [12];
  byte auStack_44 [8];
  float fStack_3c;
  byte auStack_38 [8];
  float fStack_30;
  byte auStack_2c [4];
  float afStack_28 [2];
  byte auStack_20 [16];
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  bVar7 = 0;
  _DAT_01cc90b0 = *(float *)&param_1->field_0x15c;
  pCVar2 = (CFrankenstienMachine *)core_frankgen_cpp_FUN_004c5e10();
  if (pCVar2 == param_1) {
    fVar1 = param_2 * _DAT_00600c1c + *(float *)&param_1->field_0x15c;
    *(float *)&param_1->field_0x15c = fVar1;
    if (0x450FC000 <= fVar1) {
      *(float *)&param_1->field_0x15c = *(float *)&param_1->field_0x15c - 0x450FC000;
    }
  }
  else {
    *(uint *)&param_1->field_0x15c = *(uint *)&pCVar2->field_0x15c;
  }
  if (*(float *)&param_1->field_0x15c < _DAT_01cc90b0) {
    _DAT_01cc90b0 = _DAT_01cc90b0 - 0x450FC000;
  }
  core_frankgen_cpp_FUN_004c5c60(param_1);
  switch(*(uint *)&param_1->field_0x158) {
  case 0:
    iVar3 = *(int *)&param_1->field_0x15c;
    if ((0x44ac8000 < iVar3) && (iVar3 < 0x44c58000)) {
      if (iVar3 < 0x44b90000) {
        fStack_10 = (*(float *)&param_1->field_0x15c + _DAT_005e0d0a) * (float)_DAT_005e0cfa *
                    (float)_DAT_005e0d12 + _DAT_005e0d1a;
      }
      else {
        fStack_10 = (_DAT_005e0cf2 - *(float *)&param_1->field_0x15c) * (float)_DAT_005e0cfa *
                    (float)_DAT_005e0d02;
      }
      fStack_c = (float)core_frankgen_cpp_CFrankenstienMachine_accumulateParticles_FUN_004c5990
                                  (param_1,fStack_10,param_2);
      fStack_8 = fStack_c;
      (**(code **)(*(int *)&param_1->field_0x154 + 0x1c))(param_1);
      fVar1 = fStack_8;
      iVar4 = 0;
      puVar5 = (uint *)&stack0xffffff5c;
      puVar6 = &stack0xffffff8c;
      for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
        puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
      }
      if (0 < (int)fVar1) {
        do {
          auStack_20._0_4_ = core_actor_cpp_FUN_0040cc00(uStack_74,uStack_68);
          fStack_8 = (float)auStack_20._0_4_;
          fStack_8 = (float)core_actor_cpp_FUN_0040cc00(0,0x3ecccccd);
          auStack_20._4_4_ = (1.0 - fStack_8) * fStack_70 + fStack_64 * fStack_8;
          auStack_20._8_4_ = core_actor_cpp_FUN_0040cc00(uStack_6c,uStack_60);
          fStack_8 = (float)auStack_20._8_4_;
          core_actor_cpp_FUN_00408b40(param_1,auStack_20);
          auStack_2c = (byte  [4])auStack_38._0_4_;
          afStack_28[(uint)bVar7 * -2] = *(float *)(auStack_2c + (uint)bVar7 * -8 + -8);
          afStack_28[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
               *(float *)(auStack_2c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + -4);
          if (auStack_20 != auStack_2c) {
            auStack_20._0_4_ = auStack_2c;
            auStack_20._4_4_ = afStack_28[0];
            auStack_20._8_4_ = afStack_28[1];
          }
          iVar3 = 0xffff;
          wind_influence = (CVector3f *)0x0;
          fStack_8 = (float)core_actor_cpp_FUN_0040cc00(0x3f000000,0x3fc00000);
          core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004b5b30
                    (0x01C57074,(CVector3f *)auStack_20,fStack_8,wind_influence,iVar3);
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)fStack_c);
      }
    }
    if ((0x44e10000 < *(int *)&param_1->field_0x15c) && (*(int *)&param_1->field_0x15c < 0x44ed8000)
       ) {
      (**(code **)(*(int *)&param_1->field_0x154 + 0x1c))(param_1);
      puVar5 = (uint *)&stack0xffffff44;
      puVar6 = &stack0xffffff74;
      for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
        puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
      }
      auStack_5c._0_4_ = core_actor_cpp_FUN_0040cc00(uStack_8c,uStack_80);
      auStack_5c._4_4_ = uStack_88;
      fStack_8 = (float)auStack_5c._0_4_;
      auStack_5c._8_4_ = core_actor_cpp_FUN_0040cc00(uStack_84,uStack_78);
      fStack_8 = (float)auStack_5c._8_4_;
      core_actor_cpp_FUN_00408b40(param_1,auStack_5c);
      auStack_44._0_4_ = auStack_50._0_4_;
      *(uint *)(auStack_44 + (uint)bVar7 * -8 + 4) =
           *(uint *)(auStack_44 + (uint)bVar7 * -8 + -8);
      (&fStack_3c)[(uint)bVar7 * -2 + (uint)bVar7 * -2] =
           *(float *)(auStack_44 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + -4);
      if (auStack_5c != auStack_44) {
        auStack_5c._0_4_ = auStack_44._0_4_;
        auStack_5c._4_4_ = auStack_44._4_4_;
        auStack_5c._8_4_ = fStack_3c;
      }
      core_fire_cpp_CFireEffect_createSpark_FUN_004b59e0
                (0x01C57074,(CVector3f *)auStack_5c,(CVector3f *)0x0,0x4000,0x10000,0,0xffff);
    }
    core_frankgen_cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004c59f0
              (param_1,1.0,"frankx-bed1.wav");
    core_frankgen_cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004c59f0
              (param_1,475.0,"frankx-bed2.wav");
    core_frankgen_cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004c59f0
              (param_1,809.0,"frankx-bed3.wav");
    core_frankgen_cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004c59f0
              (param_1,1050.0,"frankx-bed4.wav");
    core_frankgen_cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004c59f0
              (param_1,1380.0,"frankx-water-dip.wav");
    core_frankgen_cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004c59f0
              (param_1,2040.0,"frankx-big-ramp-bed5.wav");
LAB_004c583d:
    return;
  case 1:
    core_frankgen_cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004c59f0
              (param_1,131.0,"frankx-crane1.wav");
    return;
  case 2:
    core_frankgen_cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004c59f0
              (param_1,527.0,"frankx-crane2.wav");
    return;
  case 3:
    core_frankgen_cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004c59f0
              (param_1,1089.0,"frankx-crane3.wav");
    return;
  case 4:
  case 7:
    goto LAB_004c583d;
  case 5:
    core_frankgen_cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004c59f0
              (param_1,864.0,"frankx-arm.wav");
    return;
  case 6:
    core_frankgen_cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004c59f0
              (param_1,1702.0,"frankx-flap-up.wav");
    core_frankgen_cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004c59f0
              (param_1,1881.0,"frankx-flap-down.wav");
    return;
  case 8:
    core_frankgen_cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004c59f0
              (param_1,1950.0,"frankx-big-ramp.wav");
    return;
  default:
    _DAT_01d1d400 = "..\\core\\frankgen.cpp";
    _DAT_01d1d404 = 0x13e;
    core_main_c_FUN_005030e0(0x5e0cec);
    return;
  }
}
