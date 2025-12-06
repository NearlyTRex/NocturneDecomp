// Name: core_frankgen.cpp_PlaySounds_FUN_004d1a40
// Address: 004d1a40
// Address Range: [[004d1a40, 004d1eb0]]
// Convention: unknown
// Signature: undefined core_frankgen.cpp_PlaySounds_FUN_004d1a40()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte actors_other_frankgen.cpp_PlaySounds(uint param_1, uint
   param_2) */

void core_frankgen_cpp_PlaySounds_FUN_004d1a40
               (uint param_1,uint param_2,CFireEffect *unaff_EBX,uint param_4,
               CDemonActor *param_5,uint param_6,float param_7)

{
  CDemonActor *pCVar1;
  int iVar2;
  float fVar3;
  CVector3f *pCVar4;
  int iVar5;
  BADSPACEBASE *in_ESP;
  float *unaff_EDI;
  float in_stack_ffffff90;
  float fStack_60;
  float fStack_54;
  float fStack_50;
  float fStack_48;
  float fStack_44;
  byte auStack_3c [8];
  CVector3f CStack_34;
  byte auStack_20 [12];
  CVector3f CStack_14;
  
  _DAT_02d7b7f0 = *(float *)(param_5[1].actor_name + 4);
  pCVar1 = (CDemonActor *)core_frankgen_cpp_CFrankenstienMachine_findLeader_FUN_004d2330();
  if (pCVar1 == param_5) {
    fVar3 = param_7 * _DAT_0065e66c + *(float *)(param_5[1].actor_name + 4);
    *(float *)(param_5[1].actor_name + 4) = fVar3;
    if (_DAT_0065e670 <= fVar3) {
      *(float *)(param_5[1].actor_name + 4) = *(float *)(param_5[1].actor_name + 4) - _DAT_0065e670;
    }
  }
  else {
    *(uint *)(param_5[1].actor_name + 4) = *(uint *)(pCVar1[1].actor_name + 4);
  }
  if (*(float *)(param_5[1].actor_name + 4) < _DAT_02d7b7f0) {
    _DAT_02d7b7f0 = _DAT_02d7b7f0 - _DAT_0065e670;
  }
  core_frankgen_cpp_LoadModel_FUN_004d2190();
  switch(*(uint *)param_5[1].actor_name) {
  case 0:
    if ((0x44ac8000 < *(int *)(param_5[1].actor_name + 4)) &&
       (*(int *)(param_5[1].actor_name + 4) < 0x44c58000)) {
      iVar2 = core_frankgen_cpp_FUN_004d1ec0();
      iVar5 = 0;
      (*param_5->vtable->getBoundingBox)(param_5,(CBoundingBox3D *)&stack0xffffff8c);
      auStack_3c._0_4_ = 0.0;
      auStack_3c._4_4_ = (CFireEffect *)0x40800000;
      CStack_34.x = 0.0;
      if (0 < iVar2) {
        do {
          auStack_20._0_4_ = core_actor_cpp_getRandomFloat_FUN_0040cc10(fStack_60,fStack_54);
          fVar3 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,0.4);
          auStack_20._8_4_ = (1.0 - fVar3) * fStack_54 + fStack_48 * fVar3;
          CStack_14.y = core_actor_cpp_getRandomFloat_FUN_0040cc10(fStack_50,fStack_44);
          pCVar4 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                             (param_5,(CVector3f *)auStack_3c,(CVector3f *)(auStack_20 + 8));
          if (&CStack_14 != pCVar4) {
            CStack_14.x = pCVar4->x;
            CStack_14.y = pCVar4->y;
            CStack_14.z = pCVar4->z;
          }
          pCVar4 = (CVector3f *)0xffff;
          fVar3 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.5,1.5);
          unaff_EDI = &CStack_14.y;
          iVar5 = iVar5 + 1;
          unaff_EBX = g_CFireEffectPtr;
          core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004c7b20
                    (g_CFireEffectPtr,(CVector3f *)unaff_EDI,fVar3,pCVar4,(int)in_stack_ffffff90);
        } while (iVar5 < iVar2);
      }
    }
    if ((0x44e10000 < *(int *)(param_5[1].actor_name + 4)) &&
       (*(int *)(param_5[1].actor_name + 4) < 0x44ed8000)) {
      pCVar1 = param_5;
      (*param_5->vtable->getBoundingBox)(param_5,(CBoundingBox3D *)&stack0xffffff88);
      auStack_3c._0_4_ = core_actor_cpp_getRandomFloat_FUN_0040cc10((float)pCVar1,(float)unaff_EDI);
      auStack_3c._4_4_ = unaff_EBX;
      CStack_14.y = (float)auStack_3c._0_4_;
      CStack_34.y = core_actor_cpp_getRandomFloat_FUN_0040cc10((float)unaff_EDI,in_stack_ffffff90);
      CStack_14.z = CStack_34.y;
      pCVar4 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                         (param_5,(CVector3f *)auStack_20,(CVector3f *)(auStack_3c + 4));
      if (&CStack_34 != pCVar4) {
        CStack_34.x = pCVar4->x;
        CStack_34.y = pCVar4->y;
        CStack_34.z = pCVar4->z;
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
