// Name: core_frankgen.cpp_CFrankenstienMachine_process_FUN_004d1a40
// Address: 004d1a40
// Address Range: [[004d1a40, 004d1eb0]]
// Convention: __cdecl
// Signature: void __cdecl core_frankgen_cpp_CFrankenstienMachine_process_FUN_004d1a40(CFrankenstienMachine *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_frankgen_cpp_CFrankenstienMachine_process_FUN_004d1a40(CFrankenstienMachine *this_ptr,float delta_time)

{
  float fVar1;
  CFrankenstienMachine *pCVar2;
  int extraout_EAX;
  CVector3f *pCVar3;
  int iVar4;
  int alpha_value;
  CFrankenstienMachine *in_stack_ffffff80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_6c;
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
  
  FLOAT_02d7b7f0 = this_ptr->master_frame;
  pCVar2 = (CFrankenstienMachine *)
           core_frankgen_cpp_CFrankenstienMachine_findLeader_FUN_004d2330(in_stack_ffffff80);
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
  if (this_ptr->master_frame < FLOAT_02d7b7f0) {
    FLOAT_02d7b7f0 = FLOAT_02d7b7f0 - 2300.0f;
  }
  core_frankgen_cpp_CFrankenstienMachine_FUN_004d2190(this_ptr);
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
      core_frankgen_cpp_CFrankenstienMachine_FUN_004d1ec0(this_ptr);
      iVar4 = 0;
      (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&local_68);
      uStack_44 = 0;
      uStack_40 = 0x40800000;
      uStack_3c = 0;
      if (0 < extraout_EAX) {
        do {
          CStack_2c.x = core_actor_cpp_getRandomFloat_FUN_0040cc10(local_68.min.x,local_68.max.x);
          fStack_c = CStack_2c.x;
          fStack_c = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,0.4);
          CStack_2c.y = (1.0 - fStack_c) * local_68.min.y + local_68.max.y * fStack_c;
          CStack_2c.z = core_actor_cpp_getRandomFloat_FUN_0040cc10(local_68.min.z,local_68.max.z);
          fStack_c = CStack_2c.z;
          pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                             (&this_ptr->base,&CStack_50,&CStack_2c);
          if (&CStack_2c != pCVar3) {
            CStack_2c.x = pCVar3->x;
            CStack_2c.y = pCVar3->y;
            CStack_2c.z = pCVar3->z;
          }
          alpha_value = 0xffff;
          pCVar3 = (CVector3f *)0x0;
          fStack_c = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.5,1.5);
          iVar4 = iVar4 + 1;
          core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004c7b20
                    (g_CFireEffectPtr,&CStack_2c,fStack_c,pCVar3,alpha_value);
        } while (iVar4 < extraout_EAX);
      }
    }
    if ((0x44e10000 < (int)this_ptr->master_frame) && ((int)this_ptr->master_frame < 0x44ed8000)) {
      (*((this_ptr->base).vtable._ub)->getBoundingBox)
                (&this_ptr->base,(CBoundingBox3D *)&stack0xffffff80);
      CStack_38.x = core_actor_cpp_getRandomFloat_FUN_0040cc10((float)in_stack_ffffff80,fStack_74);
      CStack_38.y = fStack_7c;
      fStack_c = CStack_38.x;
      CStack_38.z = core_actor_cpp_getRandomFloat_FUN_0040cc10(fStack_78,fStack_6c);
      fStack_c = CStack_38.z;
      pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                         (&this_ptr->base,&CStack_20,&CStack_38);
      if (&CStack_38 != pCVar3) {
        CStack_38.x = pCVar3->x;
        CStack_38.y = pCVar3->y;
        CStack_38.z = pCVar3->z;
      }
      core_fire_cpp_CFireEffect_createSpark_FUN_004c79d0
                (g_CFireEffectPtr,&CStack_38,(CVector3f *)0x0,0x4000,0x10000,0,0xffff);
    }
    core_frankgen_cpp_CFrankenstienMachine_FUN_004d1f20(this_ptr);
    core_frankgen_cpp_CFrankenstienMachine_FUN_004d1f20(this_ptr);
    core_frankgen_cpp_CFrankenstienMachine_FUN_004d1f20(this_ptr);
    core_frankgen_cpp_CFrankenstienMachine_FUN_004d1f20(this_ptr);
    core_frankgen_cpp_CFrankenstienMachine_FUN_004d1f20(this_ptr);
    core_frankgen_cpp_CFrankenstienMachine_FUN_004d1f20(this_ptr);
switchD_004d1aab_caseD_7:
    return;
  case 1:
    core_frankgen_cpp_CFrankenstienMachine_FUN_004d1f20(this_ptr);
    return;
  case 2:
    core_frankgen_cpp_CFrankenstienMachine_FUN_004d1f20(this_ptr);
    return;
  case 3:
    core_frankgen_cpp_CFrankenstienMachine_FUN_004d1f20(this_ptr);
    return;
  case 4:
  case 7:
    goto switchD_004d1aab_caseD_7;
  case 5:
    core_frankgen_cpp_CFrankenstienMachine_FUN_004d1f20(this_ptr);
    return;
  case 6:
    core_frankgen_cpp_CFrankenstienMachine_FUN_004d1f20(this_ptr);
    core_frankgen_cpp_CFrankenstienMachine_FUN_004d1f20(this_ptr);
    return;
  case 8:
    core_frankgen_cpp_CFrankenstienMachine_FUN_004d1f20(this_ptr);
    return;
  default:
    g_CurrentFilename = "..\\core\\frankgen.cpp";
    g_CurrentLineNumber = 0x13e;
    core_main_c_displayErrorAndQuit_FUN_00506f10("WTF!");
    return;
  }
}
