// Name: core_tommygun.cpp_FUN_005464a0
// Address: 005464a0
// Address Range: [[005464a0, 00546734]]
// Convention: unknown
// Signature: void core_tommygun_cpp_FUN_005464a0(CWeapon *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_tommygun_cpp_FUN_005464a0(CWeapon *param_1,float param_2)

{
  float10 fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  CDemonActor *pCVar5;
  float10 fVar6;
  double dVar7;
  CSfxSample local_1b4;
  double local_28;
  ulonglong local_20;
  float local_18;
  
  core_weapon_cpp_CWeapon_process_FUN_00554030(param_1,param_2);
  iVar3 = *(int *)param_1[1].base.actor_name;
  if (iVar3 < 1) {
    local_20 = sound_sndmain_cpp_getSfxPlaybackPosition_FUN_00526d10
                         (*(uint *)(param_1[1].base.actor_name + 4),2);
    fVar2 = (float)local_20;
    if (fVar2 < 0.0) {
      sound_sndmain_cpp_killSfx_FUN_00527230(*(uint *)(param_1[1].base.actor_name + 4));
    }
    else {
      sound_sndmain_cpp_lockSound_FUN_00528800();
      local_20 = (double)(fVar2 * 6.0f);
      local_28 = floor(local_20);
      fVar6 = (float10)local_28;
      fVar1 = (float10)local_20;
      sound_sndmain_cpp_CSfxSample_init_FUN_00525b70(&local_1b4);
      iVar3 = sound_sndmain_cpp_getSfxSampleInfo_FUN_00526cd0
                        (*(uint *)(param_1[1].base.actor_name + 4),&local_1b4);
      if (iVar3 != 0) {
        local_18 = (float)local_1b4.sample_info.sample_count;
        dVar7 = round
                          ((double)((float)local_1b4.sample_info.sample_count *
                                    (float)(fVar1 - fVar6) * 0.1666667f));
        sound_sndmain_cpp_pushSfxOptions_FUN_00526340();
        local_20 = __BITCAST_DOUBLE(CONCAT44((int)ROUND(dVar7),(uint)local_20));
        dVar7 = (double)(int)ROUND(dVar7);
        if (0.0 < dVar7) {
          sound_sndmain_cpp_setNextSfxTriggerTime_FUN_005262d0(dVar7,0);
        }
        uVar4 = (*((param_1->base).vtable._ub)->playSound)(&param_1->base,"m-gun-t.wav");
        *(uint *)(param_1[1].base.actor_name + 8) = uVar4;
        sound_sndmain_cpp_popSfxOptions_FUN_005263c0();
      }
      sound_sndmain_cpp_killSfx_FUN_00527230(*(uint *)(param_1[1].base.actor_name + 4));
      sound_sndmain_cpp_unlockSound_FUN_00528890();
    }
    pCVar5 = (*((param_1->base).vtable._ub)->getCarrier)(&param_1->base);
    if (pCVar5 == *(CDemonActor **)(_DAT_01cae0e8 * 4 + 0x1cae0d8)) {
      xxx_unk_c_FUN_004940d0(INT_005b9284);
      return;
    }
  }
  else {
    *(int *)param_1[1].base.actor_name = iVar3 + -1;
    fVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0.9,1.1111112);
    local_18 = fVar2;
    iVar3 = sound_sndmain_cpp_setSfxBaseFrequency_FUN_00527130
                      (*(uint *)(param_1[1].base.actor_name + 4),fVar2);
    if (iVar3 == 0) {
      sound_sndmain_cpp_killSfx_FUN_00527230(*(uint *)(param_1[1].base.actor_name + 4));
      _sprintf(local_1b4.loop_endpoints,"m-gun1.wav @ 2.3 * %f",(double)fVar2);
      sound_sndmain_cpp_killSfx_FUN_00527230(*(uint *)(param_1[1].base.actor_name + 8));
      uVar4 = (*((param_1->base).vtable._ub)->playAmbientSound)
                        (&param_1->base,(char *)local_1b4.loop_endpoints);
      *(uint *)(param_1[1].base.actor_name + 4) = uVar4;
    }
    pCVar5 = (*((param_1->base).vtable._ub)->getCarrier)(&param_1->base);
    if (pCVar5 == *(CDemonActor **)(_DAT_01cae0e8 * 4 + 0x1cae0d8)) {
      xxx_unk_c_FUN_004940d0(INT_005b9284);
      return;
    }
  }
  return;
}
