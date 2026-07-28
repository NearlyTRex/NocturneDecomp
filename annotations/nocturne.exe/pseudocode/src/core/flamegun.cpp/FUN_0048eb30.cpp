// Name: core_flamegun.cpp_FUN_0048eb30
// Address: 0048eb30
// Address Range: [[0048eb30, 0048ec52]]
// Convention: unknown
// Signature: void core_flamegun_cpp_FUN_0048eb30(CWeapon *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_flamegun_cpp_FUN_0048eb30(CWeapon *param_1,float param_2)

{
  uint uVar1;
  float fVar2;
  CWeapon *pCVar3;
  CDemonActor *pCVar4;
  int iVar5;
  uint uVar6;
  
  core_weapon_cpp_CWeapon_process_FUN_00554030(param_1,param_2);
  if (*(int *)param_1[1].base.actor_name == 0) {
    uVar6 = *(uint *)(param_1[1].base.actor_name + 4);
    if (uVar6 != 0) {
      core_sound_cpp_CSound_killSound_FUN_0052ebb0(0x02DC9450,uVar6);
      pCVar3 = param_1 + 1;
      (pCVar3->base).actor_name[4] = '\0';
      (pCVar3->base).actor_name[5] = '\0';
      (pCVar3->base).actor_name[6] = '\0';
      (pCVar3->base).actor_name[7] = '\0';
    }
    pCVar4 = (*((param_1->base).vtable._ub)->getCarrier)(&param_1->base);
    if (pCVar4 == *(CDemonActor **)(_DAT_01cae0e8 * 4 + 0x1cae0d8)) {
      xxx_unk_c_FUN_004940d0(INT_005b9284);
    }
  }
  else {
    iVar5 = core_sound_cpp_CSound_isSoundPlaying_FUN_0052eba0
                      (0x02DC9450,*(uint *)(param_1[1].base.actor_name + 4));
    if (iVar5 == 0) {
      uVar6 = (*((param_1->base).vtable._ub)->playSound)(&param_1->base,"fl-throw.wav");
      *(uint *)(param_1[1].base.actor_name + 4) = uVar6;
    }
    param_2 = *(float *)(param_1[1].base.actor_name + 0xc) - param_2;
    *(float *)(param_1[1].base.actor_name + 0xc) = param_2;
    if (param_2 < 0.0) {
      fVar2 = 1.0 / 4.0f;
      iVar5 = param_1->ammo_count + -1;
      param_1->ammo_count = iVar5;
      *(float *)(param_1[1].base.actor_name + 0xc) = fVar2 + param_2;
      if (iVar5 < 0) {
        param_1->ammo_count = 0;
      }
    }
  }
  uVar1 = *(uint *)param_1[1].base.actor_name;
  param_1[1].base.actor_name[0] = '\0';
  param_1[1].base.actor_name[1] = '\0';
  param_1[1].base.actor_name[2] = '\0';
  param_1[1].base.actor_name[3] = '\0';
  *(uint *)(param_1[1].base.actor_name + 8) = uVar1;
  return;
}
