// Name: core_frankgen.cpp_PlaySounds_FUN_004d1a40
// Address: 004d1a40
// Address Range: [[004d1a40, 004d1eb0]]
// Convention: __cdecl
// Signature: void __cdecl core_frankgen_cpp_PlaySounds_FUN_004d1a40(void)

#include "nocturne.h"

void __cdecl core_frankgen_cpp_PlaySounds_FUN_004d1a40(void)

{
  CDemonActor *pCVar1;
  int extraout_EAX;
  float fVar2;
  CVector3f *pCVar3;
  int iVar4;
  CDemonActor *in_stack_00000004;
  float in_stack_00000008;
  int alpha_value;
  CBoundingBox3D local_80;
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
  
  FLOAT_02d7b7f0 = *(float *)(in_stack_00000004[1].actor_name + 4);
  pCVar1 = core_frankgen_cpp_CFrankenstienMachine_findLeader_FUN_004d2330();
  if (pCVar1 == in_stack_00000004) {
    fVar2 = in_stack_00000008 * 30.0f + *(float *)(in_stack_00000004[1].actor_name + 4);
    *(float *)(in_stack_00000004[1].actor_name + 4) = fVar2;
    if (2300.0f <= fVar2) {
      *(float *)(in_stack_00000004[1].actor_name + 4) =
           *(float *)(in_stack_00000004[1].actor_name + 4) - 2300.0f;
    }
  }
  else {
    *(uint *)(in_stack_00000004[1].actor_name + 4) = *(uint *)(pCVar1[1].actor_name + 4)
    ;
  }
  if (*(float *)(in_stack_00000004[1].actor_name + 4) < FLOAT_02d7b7f0) {
    FLOAT_02d7b7f0 = FLOAT_02d7b7f0 - 2300.0f;
  }
  core_frankgen_cpp_LoadModel_FUN_004d2190();
  switch(*(uint *)in_stack_00000004[1].actor_name) {
  case 0:
    iVar4 = *(int *)(in_stack_00000004[1].actor_name + 4);
    if ((0x44ac8000 < iVar4) && (iVar4 < 0x44c58000)) {
      if (iVar4 < 0x44b90000) {
        CStack_18.z = (*(float *)(in_stack_00000004[1].actor_name + 4) + -1380.0f) *
                      (float)0.01 * (float)30 + 20.0f;
      }
      else {
        CStack_18.z = (1580.0f - *(float *)(in_stack_00000004[1].actor_name + 4)) *
                      (float)0.01 * (float)50;
      }
      core_frankgen_cpp_FUN_004d1ec0();
      iVar4 = 0;
      (*((in_stack_00000004->vtable)._ub)->getBoundingBox)(in_stack_00000004,&local_68);
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
                             (in_stack_00000004,&CStack_48,&CStack_24);
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
    if ((0x44e10000 < *(int *)(in_stack_00000004[1].actor_name + 4)) &&
       (*(int *)(in_stack_00000004[1].actor_name + 4) < 0x44ed8000)) {
      (*((in_stack_00000004->vtable)._ub)->getBoundingBox)(in_stack_00000004,&local_80);
      CStack_30.x = core_actor_cpp_getRandomFloat_FUN_0040cc10(local_80.min.z,local_80.max.z);
      CStack_30.y = local_80.max.x;
      CStack_30.z = core_actor_cpp_getRandomFloat_FUN_0040cc10(local_80.max.y,local_68.min.y);
      pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                         (in_stack_00000004,&CStack_18,&CStack_30);
      if (&CStack_30 != pCVar3) {
        CStack_30.x = pCVar3->x;
        CStack_30.y = pCVar3->y;
        CStack_30.z = pCVar3->z;
      }
      core_fire_cpp_CFireEffect_FUN_004c79d0(g_CFireEffectPtr);
    }
    core_frankgen_cpp_SoundPushPlayPopAgain_FUN_004d1f20();
    core_frankgen_cpp_SoundPushPlayPopAgain_FUN_004d1f20();
    core_frankgen_cpp_SoundPushPlayPopAgain_FUN_004d1f20();
    core_frankgen_cpp_SoundPushPlayPopAgain_FUN_004d1f20();
    core_frankgen_cpp_SoundPushPlayPopAgain_FUN_004d1f20();
    core_frankgen_cpp_SoundPushPlayPopAgain_FUN_004d1f20();
switchD_004d1aab_caseD_7:
    return;
  case 1:
    core_frankgen_cpp_SoundPushPlayPopAgain_FUN_004d1f20();
    return;
  case 2:
    core_frankgen_cpp_SoundPushPlayPopAgain_FUN_004d1f20();
    return;
  case 3:
    core_frankgen_cpp_SoundPushPlayPopAgain_FUN_004d1f20();
    return;
  case 4:
  case 7:
    goto switchD_004d1aab_caseD_7;
  case 5:
    core_frankgen_cpp_SoundPushPlayPopAgain_FUN_004d1f20();
    return;
  case 6:
    core_frankgen_cpp_SoundPushPlayPopAgain_FUN_004d1f20();
    core_frankgen_cpp_SoundPushPlayPopAgain_FUN_004d1f20();
    return;
  case 8:
    core_frankgen_cpp_SoundPushPlayPopAgain_FUN_004d1f20();
    return;
  default:
    g_CurrentFilename = "..\\core\\frankgen.cpp";
    g_CurrentLineNumber = 0x13e;
    core_main_c_displayErrorAndQuit_FUN_00506f10("WTF!");
    return;
  }
}
