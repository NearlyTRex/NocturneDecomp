// Name: core_frankgen.cpp_CFrankenstienMachine_process_FUN_00494950
// Address: 00494950
// Address Range: [[00494950, 00494dc0]]
// Convention: __cdecl
// Signature: void __cdecl core_frankgen_cpp_CFrankenstienMachine_process_FUN_00494950(CFrankenstienMachine *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_frankgen_cpp_CFrankenstienMachine_process_FUN_00494950(CFrankenstienMachine *this_ptr,float delta_time)

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
  
  _DAT_01c71340 = this_ptr->master_frame;
  pCVar2 = (CFrankenstienMachine *)core_frankgen_cpp_findLeader_FUN_00495240();
  if (pCVar2 == this_ptr) {
    fVar1 = delta_time * 30.0f + this_ptr->master_frame;
    this_ptr->master_frame = fVar1;
    if (2300.0f <= fVar1) {
      this_ptr->master_frame = this_ptr->master_frame - 2300.0f;
    }
  }
  else {
    this_ptr->master_frame = pCVar2->master_frame;
  }
  if (this_ptr->master_frame < _DAT_01c71340) {
    _DAT_01c71340 = _DAT_01c71340 - 2300.0f;
  }
  core_frankgen_cpp_CFrankenstienMachine_FUN_004950a0(this_ptr);
  switch(this_ptr->which_part) {
  case 0:
    fVar1 = this_ptr->master_frame;
    if ((0x44ac8000 < (int)fVar1) && ((int)fVar1 < 0x44c58000)) {
      if ((int)fVar1 < 0x44b90000) {
        local_10 = (this_ptr->master_frame + -1380.0f) * (float)0.01 *
                   (float)30 + 20.0f;
      }
      else {
        local_10 = (1580.0f - this_ptr->master_frame) * (float)0.01 *
                   (float)50;
      }
      iVar3 = core_frankgen_cpp_CFrankenstienMachine_accumulateParticles_FUN_00494dd0
                        (this_ptr,local_10,delta_time);
      iVar5 = 0;
      (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&local_68);
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
                             (&this_ptr->base,&CStack_50,&CStack_2c);
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
    if ((0x44e10000 < (int)this_ptr->master_frame) && ((int)this_ptr->master_frame < 0x44ed8000)) {
      (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&local_80);
      CStack_38.x = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
                              (local_80.min.x,local_80.max.x);
      CStack_38.y = local_80.min.y;
      fStack_c = CStack_38.x;
      CStack_38.z = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
                              (local_80.min.z,local_80.max.z);
      fStack_c = CStack_38.z;
      pCVar4 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                         (&this_ptr->base,&CStack_20,&CStack_38);
      if (&CStack_38 != pCVar4) {
        CStack_38.x = pCVar4->x;
        CStack_38.y = pCVar4->y;
        CStack_38.z = pCVar4->z;
      }
      core_fire_cpp_CFireEffect_createSpark_FUN_0048ae90
                (g_CFireEffect_PTR_005b80f0,&CStack_38,(CVector3f *)0x0,0x4000,0x10000,0,0xffff);
    }
    core_frankgen_cpp_CFrankenstienMachine_playSfxAtFrame_FUN_00494e30
              (this_ptr,1.0,"frankx-bed1.wav");
    core_frankgen_cpp_CFrankenstienMachine_playSfxAtFrame_FUN_00494e30
              (this_ptr,475.0,"frankx-bed2.wav");
    core_frankgen_cpp_CFrankenstienMachine_playSfxAtFrame_FUN_00494e30
              (this_ptr,809.0,"frankx-bed3.wav");
    core_frankgen_cpp_CFrankenstienMachine_playSfxAtFrame_FUN_00494e30
              (this_ptr,1050.0,"frankx-bed4.wav");
    core_frankgen_cpp_CFrankenstienMachine_playSfxAtFrame_FUN_00494e30
              (this_ptr,1380.0,"frankx-water-dip.wav");
    core_frankgen_cpp_CFrankenstienMachine_playSfxAtFrame_FUN_00494e30
              (this_ptr,2040.0,"frankx-big-ramp-bed5.wav");
switchD_004949bb_caseD_4:
    return;
  case 1:
    core_frankgen_cpp_CFrankenstienMachine_playSfxAtFrame_FUN_00494e30
              (this_ptr,131.0,"frankx-crane1.wav");
    return;
  case 2:
    core_frankgen_cpp_CFrankenstienMachine_playSfxAtFrame_FUN_00494e30
              (this_ptr,527.0,"frankx-crane2.wav");
    return;
  case 3:
    core_frankgen_cpp_CFrankenstienMachine_playSfxAtFrame_FUN_00494e30
              (this_ptr,1089.0,"frankx-crane3.wav");
    return;
  case 4:
  case 7:
    goto switchD_004949bb_caseD_4;
  case 5:
    core_frankgen_cpp_CFrankenstienMachine_playSfxAtFrame_FUN_00494e30
              (this_ptr,864.0,"frankx-arm.wav");
    return;
  case 6:
    core_frankgen_cpp_CFrankenstienMachine_playSfxAtFrame_FUN_00494e30
              (this_ptr,1702.0,"frankx-flap-up.wav");
    core_frankgen_cpp_CFrankenstienMachine_playSfxAtFrame_FUN_00494e30
              (this_ptr,1881.0,"frankx-flap-down.wav");
    return;
  case 8:
    core_frankgen_cpp_CFrankenstienMachine_playSfxAtFrame_FUN_00494e30
              (this_ptr,1950.0,"frankx-big-ramp.wav");
    return;
  default:
    g_CurrentFilename = "..\\core\\frankgen.cpp";
    g_CurrentLineNumber = 318;
    core_main_c_displayErrorAndQuit_FUN_004c8440("WTF!");
    return;
  }
}
