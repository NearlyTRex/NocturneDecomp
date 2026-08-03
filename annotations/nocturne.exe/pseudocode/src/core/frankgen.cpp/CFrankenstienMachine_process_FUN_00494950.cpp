// Name: core_frankgen.cpp_CFrankenstienMachine_process_FUN_00494950
// Address: 00494950
// Address Range: [[00494950, 00494dc0]]
// Convention: unknown
// Signature: void core_frankgen_cpp_CFrankenstienMachine_process_FUN_00494950(CFrankenstienMachine *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_frankgen_cpp_CFrankenstienMachine_process_FUN_00494950(CFrankenstienMachine *param_1,float param_2)

{
  float fVar1;
  CFrankenstienMachine *pCVar2;
  int iVar3;
  CVector3f *pCVar4;
  int iVar5;
  int alpha_value;
  CBoundingBox3D local_80;
  CBoundingBox3D local_68;
  CVector3f CStack_50;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  CVector3f CStack_38;
  CVector3f CStack_2c;
  CVector3f CStack_20;
  float local_10;
  float fStack_c;
  
  _DAT_01c71340 = param_1->master_frame;
  pCVar2 = (CFrankenstienMachine *)core_frankgen_cpp_findLeader_FUN_00495240();
  if (pCVar2 == param_1) {
    fVar1 = param_2 * 30.0f + param_1->master_frame;
    param_1->master_frame = fVar1;
    if (2300.0f <= fVar1) {
      param_1->master_frame = param_1->master_frame - 2300.0f;
    }
  }
  else {
    param_1->master_frame = pCVar2->master_frame;
  }
  if (param_1->master_frame < _DAT_01c71340) {
    _DAT_01c71340 = _DAT_01c71340 - 2300.0f;
  }
  core_frankgen_cpp_CFrankenstienMachine_FUN_004950a0(param_1);
  switch(param_1->which_part) {
  case 0:
    fVar1 = param_1->master_frame;
    if ((0x44ac8000 < (int)fVar1) && ((int)fVar1 < 0x44c58000)) {
      if ((int)fVar1 < 0x44b90000) {
        local_10 = (param_1->master_frame + -1380.0f) * (float)0.01 *
                   (float)30 + 20.0f;
      }
      else {
        local_10 = (1580.0f - param_1->master_frame) * (float)0.01 *
                   (float)50;
      }
      iVar3 = core_frankgen_cpp_CFrankenstienMachine_accumulateParticles_FUN_00494dd0
                        (param_1,local_10,param_2);
      iVar5 = 0;
      (*((param_1->base).vtable._ub)->getBoundingBox)(&param_1->base,&local_68);
      uStack_44 = 0;
      uStack_40 = 0x40800000;
      uStack_3c = 0;
      if (0 < iVar3) {
        do {
          CStack_2c.x = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
                                  (local_68.min.x,local_68.max.x);
          fStack_c = CStack_2c.x;
          fStack_c = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0.0,0.4);
          CStack_2c.y = (1.0 - fStack_c) * local_68.min.y + local_68.max.y * fStack_c;
          CStack_2c.z = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
                                  (local_68.min.z,local_68.max.z);
          fStack_c = CStack_2c.z;
          pCVar4 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                             (&param_1->base,&CStack_50,&CStack_2c);
          if (&CStack_2c != pCVar4) {
            CStack_2c.x = pCVar4->x;
            CStack_2c.y = pCVar4->y;
            CStack_2c.z = pCVar4->z;
          }
          alpha_value = 0xffff;
          pCVar4 = (CVector3f *)0x0;
          fStack_c = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0.5,1.5);
          iVar5 = iVar5 + 1;
          core_fire_cpp_CFireEffect_createSmokeParticle_FUN_0048afe0
                    (g_CFireEffect_PTR_005b80f0,&CStack_2c,fStack_c,pCVar4,alpha_value);
        } while (iVar5 < iVar3);
      }
    }
    if ((0x44e10000 < (int)param_1->master_frame) && ((int)param_1->master_frame < 0x44ed8000)) {
      (*((param_1->base).vtable._ub)->getBoundingBox)(&param_1->base,&local_80);
      CStack_38.x = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
                              (local_80.min.x,local_80.max.x);
      CStack_38.y = local_80.min.y;
      fStack_c = CStack_38.x;
      CStack_38.z = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
                              (local_80.min.z,local_80.max.z);
      fStack_c = CStack_38.z;
      pCVar4 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                         (&param_1->base,&CStack_20,&CStack_38);
      if (&CStack_38 != pCVar4) {
        CStack_38.x = pCVar4->x;
        CStack_38.y = pCVar4->y;
        CStack_38.z = pCVar4->z;
      }
      core_fire_cpp_CFireEffect_createSpark_FUN_0048ae90
                (g_CFireEffect_PTR_005b80f0,&CStack_38,(CVector3f *)0x0,0x4000,0x10000,0,0xffff);
    }
    core_frankgen_cpp_CFrankenstienMachine_playSfxAtFrame_FUN_00494e30
              (param_1,1.0,"frankx-bed1.wav");
    core_frankgen_cpp_CFrankenstienMachine_playSfxAtFrame_FUN_00494e30
              (param_1,475.0,"frankx-bed2.wav");
    core_frankgen_cpp_CFrankenstienMachine_playSfxAtFrame_FUN_00494e30
              (param_1,809.0,"frankx-bed3.wav");
    core_frankgen_cpp_CFrankenstienMachine_playSfxAtFrame_FUN_00494e30
              (param_1,1050.0,"frankx-bed4.wav");
    core_frankgen_cpp_CFrankenstienMachine_playSfxAtFrame_FUN_00494e30
              (param_1,1380.0,"frankx-water-dip.wav");
    core_frankgen_cpp_CFrankenstienMachine_playSfxAtFrame_FUN_00494e30
              (param_1,2040.0,"frankx-big-ramp-bed5.wav");
switchD_004949bb_caseD_4:
    return;
  case 1:
    core_frankgen_cpp_CFrankenstienMachine_playSfxAtFrame_FUN_00494e30
              (param_1,131.0,"frankx-crane1.wav");
    return;
  case 2:
    core_frankgen_cpp_CFrankenstienMachine_playSfxAtFrame_FUN_00494e30
              (param_1,527.0,"frankx-crane2.wav");
    return;
  case 3:
    core_frankgen_cpp_CFrankenstienMachine_playSfxAtFrame_FUN_00494e30
              (param_1,1089.0,"frankx-crane3.wav");
    return;
  case 4:
  case 7:
    goto switchD_004949bb_caseD_4;
  case 5:
    core_frankgen_cpp_CFrankenstienMachine_playSfxAtFrame_FUN_00494e30
              (param_1,864.0,"frankx-arm.wav");
    return;
  case 6:
    core_frankgen_cpp_CFrankenstienMachine_playSfxAtFrame_FUN_00494e30
              (param_1,1702.0,"frankx-flap-up.wav");
    core_frankgen_cpp_CFrankenstienMachine_playSfxAtFrame_FUN_00494e30
              (param_1,1881.0,"frankx-flap-down.wav");
    return;
  case 8:
    core_frankgen_cpp_CFrankenstienMachine_playSfxAtFrame_FUN_00494e30
              (param_1,1950.0,"frankx-big-ramp.wav");
    return;
  default:
    g_CHAR_PTR_01cc4800 = "..\\core\\frankgen.cpp";
    g_INT_01cc4804 = 0x13e;
    core_main_c_FUN_004c8440("WTF!");
    return;
  }
}
