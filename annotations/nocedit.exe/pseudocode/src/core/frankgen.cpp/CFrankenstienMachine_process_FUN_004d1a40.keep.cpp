// Name: core_frankgen.cpp_CFrankenstienMachine_process_FUN_004d1a40
// Address: 004d1a40
// MANUAL RECONSTRUCTION
// Address Range: [[004d1a40, 004d1eb0]]
// Convention: __cdecl
// Signature: void __cdecl core_frankgen_cpp_CFrankenstienMachine_process_FUN_004d1a40(CFrankenstienMachine *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_frankgen_cpp_CFrankenstienMachine_process_FUN_004d1a40(CFrankenstienMachine *this_ptr,float delta_time)

{
  CFrankenstienMachine *pCVar2;
  int iVar3;
  float fVar2;
  CVector3f *pCVar4;
  int iVar5;
  CVector3f *pCVar3;
  CBoundingBox3D local_80;
  CBoundingBox3D local_68;
  CVector3f CStack_50;
  CVector3f CStack_38;
  CVector3f CStack_2c;
  CVector3f CStack_20;
  float fVar1;
  int alpha_value;
  
  FLOAT_02d7b7f0 = this_ptr->master_frame;
  pCVar2 = (CFrankenstienMachine *)core_frankgen_cpp_findLeader_FUN_004d2330();
  if (pCVar2 == this_ptr) {
    fVar2 = delta_time * 30.0f + this_ptr->master_frame;
    this_ptr->master_frame = fVar2;
    if (2300.0f <= fVar2) {
      this_ptr->master_frame = this_ptr->master_frame - 2300.0f;
    }
  }
  else {
    this_ptr->master_frame = pCVar2->master_frame;
  }
  if (this_ptr->master_frame < FLOAT_02d7b7f0) {
    FLOAT_02d7b7f0 = FLOAT_02d7b7f0 - 2300.0f;
  }
  core_frankgen_cpp_CFrankenstienMachine_updateAnchorPosition_FUN_004d2190(this_ptr);
  switch(this_ptr->which_part) {
  case 0:
    fVar1 = this_ptr->master_frame;
    if ((1380.0f < fVar1) && (fVar1 < 1580.0f)) {
      if (fVar1 < 1480.0f) {
        fVar2 = (this_ptr->master_frame + -1380.0f) * (float)0.01 *
                (float)30 + 20.0f;
      }
      else {
        fVar2 = (1580.0f - this_ptr->master_frame) * (float)0.01 *
                (float)50;
      }
      iVar3 = core_frankgen_cpp_CFrankenstienMachine_accumulateParticles_FUN_004d1ec0
                        (this_ptr,fVar2,delta_time);
      iVar5 = 0;
      (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&local_68);
      if (0 < iVar3) {
        do {
          CStack_2c.x = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10
                                  (local_68.min.x,local_68.max.x);
          fVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(0.0,0.4);
          CStack_2c.y = (1.0 - fVar2) * local_68.min.y + local_68.max.y * fVar2;
          CStack_2c.z = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10
                                  (local_68.min.z,local_68.max.z);
          pCVar4 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                             (&this_ptr->base,&CStack_50,&CStack_2c);
          if (&CStack_2c != pCVar4) {
            CStack_2c = *pCVar4;
          }
          alpha_value = 0xffff;
          pCVar3 = (CVector3f *)0x0;
          fVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(0.5,1.5);
          iVar5 = iVar5 + 1;
          core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004c7b20
                    (g_CFireEffectPtr,&CStack_2c,fVar2,pCVar3,alpha_value);
        } while (iVar5 < iVar3);
      }
    }
    if ((1800.0f < this_ptr->master_frame) && (this_ptr->master_frame < 1900.0f)) {
      (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&local_80);
      CStack_38.x = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10
                              (local_80.min.x,local_80.max.x);
      CStack_38.y = local_80.min.y;
      CStack_38.z = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10
                              (local_80.min.z,local_80.max.z);
      pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                         (&this_ptr->base,&CStack_20,&CStack_38);
      if (&CStack_38 != pCVar3) {
        CStack_38 = *pCVar3;
      }
      core_fire_cpp_CFireEffect_createSpark_FUN_004c79d0
                (g_CFireEffectPtr,&CStack_38,(CVector3f *)0x0,0x4000,0x10000,0,0xffff);
    }
    core_frankgen_cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004d1f20
              (this_ptr,1.0,"frankx-bed1.wav");
    core_frankgen_cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004d1f20
              (this_ptr,475.0,"frankx-bed2.wav");
    core_frankgen_cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004d1f20
              (this_ptr,809.0,"frankx-bed3.wav");
    core_frankgen_cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004d1f20
              (this_ptr,1050.0,"frankx-bed4.wav");
    core_frankgen_cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004d1f20
              (this_ptr,1380.0,"frankx-water-dip.wav");
    core_frankgen_cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004d1f20
              (this_ptr,2040.0,"frankx-big-ramp-bed5.wav");
switchD_004d1aab_caseD_7:
    return;
  case 1:
    core_frankgen_cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004d1f20
              (this_ptr,131.0,"frankx-crane1.wav");
    return;
  case 2:
    core_frankgen_cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004d1f20
              (this_ptr,527.0,"frankx-crane2.wav");
    return;
  case 3:
    core_frankgen_cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004d1f20
              (this_ptr,1089.0,"frankx-crane3.wav");
    return;
  case 4:
  case 7:
    goto switchD_004d1aab_caseD_7;
  case 5:
    core_frankgen_cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004d1f20
              (this_ptr,864.0,"frankx-arm.wav");
    return;
  case 6:
    core_frankgen_cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004d1f20
              (this_ptr,1702.0,"frankx-flap-up.wav");
    core_frankgen_cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004d1f20
              (this_ptr,1881.0,"frankx-flap-down.wav");
    return;
  case 8:
    core_frankgen_cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004d1f20
              (this_ptr,1950.0,"frankx-big-ramp.wav");
    return;
  default:
    g_CurrentFilename = "..\\core\\frankgen.cpp";
    g_CurrentLineNumber = 318;
    core_main_c_displayErrorAndQuit_FUN_00506f10("WTF!");
    return;
  }
}
