// Name: core_frankgen.cpp_CFrankenstienMachine_process_FUN_004d1a40
// Address: 004d1a40
// Address Range: [[004d1a40, 004d1eb0]]
// Convention: __cdecl
// Signature: void __cdecl core_frankgen_cpp_CFrankenstienMachine_process_FUN_004d1a40 (CFrankenstienMachine *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl
core_frankgen_cpp_CFrankenstienMachine_process_FUN_004d1a40
          (CFrankenstienMachine *this_ptr,float delta_time)

{
  CFrankenstienMachine *pCVar1;
  int extraout_EAX;
  float fVar2;
  CVector3f *pCVar3;
  int iVar4;
  int alpha_value;
  CFrankenstienMachine *in_stack_ffffff80;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  CBoundingBox3D local_68;
  float fStack_50;
  float fStack_4c;
  CVector3f CStack_48;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  CVector3f CStack_30;
  CVector3f CStack_24;
  CVector3f CStack_18;
  
  FLOAT_02d7b7f0 = this_ptr->master_frame;
  pCVar1 = (CFrankenstienMachine *)
           core_frankgen_cpp_CFrankenstienMachine_findLeader_FUN_004d2330(in_stack_ffffff80);
  if (pCVar1 == this_ptr) {
    fVar2 = delta_time * 30.0f + this_ptr->master_frame;
    this_ptr->master_frame = fVar2;
    if (2300.0f <= fVar2) {
      this_ptr->master_frame = this_ptr->master_frame - 2300.0f;
    }
  }
  else {
    this_ptr->master_frame = pCVar1->master_frame;
  }
  if (this_ptr->master_frame < FLOAT_02d7b7f0) {
    FLOAT_02d7b7f0 = FLOAT_02d7b7f0 - 2300.0f;
  }
  core_frankgen_cpp_CFrankenstienMachine_FUN_004d2190(this_ptr);
  switch(this_ptr->which_part) {
  case 0:
    fVar2 = this_ptr->master_frame;
    if ((0x44ac8000 < (int)fVar2) && ((int)fVar2 < 0x44c58000)) {
      if ((int)fVar2 < 0x44b90000) {
        CStack_18.z = (this_ptr->master_frame + -1380.0f) * (float)0.01 *
                      (float)30 + 20.0f;
      }
      else {
        CStack_18.z = (1580.0f - this_ptr->master_frame) * (float)0.01 *
                      (float)50;
      }
      core_frankgen_cpp_CFrankenstienMachine_FUN_004d1ec0(this_ptr);
      iVar4 = 0;
      (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&local_68);
      uStack_3c = 0;
      uStack_38 = 0x40800000;
      uStack_34 = 0;
      if (0 < extraout_EAX) {
        do {
          CStack_24.x = core_actor_cpp_getRandomFloat_FUN_0040cc10(local_68.min.z,local_68.max.z);
          fVar2 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,0.4);
          CStack_24.y = (1.0 - fVar2) * local_68.max.x + fStack_50 * fVar2;
          CStack_24.z = core_actor_cpp_getRandomFloat_FUN_0040cc10(local_68.max.y,fStack_4c);
          pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                             (&this_ptr->base,&CStack_48,&CStack_24);
          if (&CStack_24 != pCVar3) {
            CStack_24.x = pCVar3->x;
            CStack_24.y = pCVar3->y;
            CStack_24.z = pCVar3->z;
          }
          alpha_value = 0xffff;
          pCVar3 = (CVector3f *)0x0;
          fVar2 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.5,1.5);
          iVar4 = iVar4 + 1;
          core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004c7b20
                    (g_CFireEffectPtr,&CStack_24,fVar2,pCVar3,alpha_value);
        } while (iVar4 < extraout_EAX);
      }
    }
    if ((0x44e10000 < (int)this_ptr->master_frame) && ((int)this_ptr->master_frame < 0x44ed8000)) {
      (*((this_ptr->base).vtable._ub)->getBoundingBox)
                (&this_ptr->base,(CBoundingBox3D *)&stack0xffffff80);
      CStack_30.x = core_actor_cpp_getRandomFloat_FUN_0040cc10(fStack_78,fStack_6c);
      CStack_30.y = fStack_74;
      CStack_30.z = core_actor_cpp_getRandomFloat_FUN_0040cc10(fStack_70,local_68.min.y);
      pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                         (&this_ptr->base,&CStack_18,&CStack_30);
      if (&CStack_30 != pCVar3) {
        CStack_30.x = pCVar3->x;
        CStack_30.y = pCVar3->y;
        CStack_30.z = pCVar3->z;
      }
      core_fire_cpp_CFireEffect_FUN_004c79d0(g_CFireEffectPtr);
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
