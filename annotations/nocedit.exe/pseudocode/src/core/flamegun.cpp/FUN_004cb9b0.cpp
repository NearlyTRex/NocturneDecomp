// Name: core_flamegun.cpp_FUN_004cb9b0
// Address: 004cb9b0
// Address Range: [[004cb9b0, 004cbaa1]]
// Convention: unknown
// Signature: undefined core_flamegun.cpp_FUN_004cb9b0()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte actors_other_flame.cpp_FUN_004cb9b0(uint param_1, uint param_2)
    */

void core_flamegun_cpp_FUN_004cb9b0(void)

{
  uint sfx_handle;
  float fVar1;
  CWeapon *pCVar2;
  int extraout_EAX;
  uint uVar3;
  int iVar4;
  CWeapon *pCStack00000004;
  float fStack00000008;
  
  core_weapon_cpp_CWeapon_process_FUN_005ee110(pCStack00000004);
  if (*(int *)pCStack00000004[1].base_actor.actor_name == 0) {
    sfx_handle = *(uint *)(pCStack00000004[1].base_actor.actor_name + 4);
    if (sfx_handle != 0) {
      core_sound_cpp_CSound_killSound_FUN_005b3b90(g_CSoundPtr,sfx_handle);
      pCVar2 = pCStack00000004 + 1;
      (pCVar2->base_actor).actor_name[4] = '\0';
      (pCVar2->base_actor).actor_name[5] = '\0';
      (pCVar2->base_actor).actor_name[6] = '\0';
      (pCVar2->base_actor).actor_name[7] = '\0';
    }
  }
  else {
    core_sound_cpp_CSound_isSoundPlaying_FUN_005b3b80
              (g_CSoundPtr,*(uint *)(pCStack00000004[1].base_actor.actor_name + 4));
    if (extraout_EAX == 0) {
      uVar3 = (*((pCStack00000004->base_actor).vtable)->playSound)
                        (&pCStack00000004->base_actor,"fl-throw.wav");
      *(uint *)(pCStack00000004[1].base_actor.actor_name + 4) = uVar3;
    }
    fStack00000008 = *(float *)(pCStack00000004[1].base_actor.actor_name + 0xc) - fStack00000008;
    *(float *)(pCStack00000004[1].base_actor.actor_name + 0xc) = fStack00000008;
    if (fStack00000008 < 0.0) {
      fVar1 = 1.0 / _DAT_0065e270;
      iVar4 = pCStack00000004->ammo_count + -1;
      pCStack00000004->ammo_count = iVar4;
      *(float *)(pCStack00000004[1].base_actor.actor_name + 0xc) = fVar1 + fStack00000008;
      if (iVar4 < 0) {
        pCStack00000004->ammo_count = 0;
      }
    }
  }
  uVar3 = *(uint *)pCStack00000004[1].base_actor.actor_name;
  pCStack00000004[1].base_actor.actor_name[0] = '\0';
  pCStack00000004[1].base_actor.actor_name[1] = '\0';
  pCStack00000004[1].base_actor.actor_name[2] = '\0';
  pCStack00000004[1].base_actor.actor_name[3] = '\0';
  *(uint *)(pCStack00000004[1].base_actor.actor_name + 8) = uVar3;
  return;
}
