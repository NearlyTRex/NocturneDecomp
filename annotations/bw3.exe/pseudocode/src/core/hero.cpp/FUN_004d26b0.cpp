// Name: core_hero.cpp_FUN_004d26b0
// Address: 004d26b0
// Address Range: [[004d26b0, 004d2719]]
// Convention: unknown
// Signature: void core_hero_cpp_FUN_004d26b0(CCharacter *param_1)

#include "nocturne.h"

void core_hero_cpp_FUN_004d26b0(CCharacter *param_1)

{
  CFlame *pCVar1;
  
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0054e6b0(&param_1->model);
  core_charactr_cpp_CCharacter_setup_FUN_0042b0e0(param_1);
  param_1[1].base.actor_name[0] = '\0';
  param_1[1].base.actor_name[1] = '\0';
  param_1[1].base.actor_name[2] = '\0';
  param_1[1].base.actor_name[3] = '\0';
  core_inv_cpp_FUN_004dcad0(param_1[2].flames[0x13].base.create_event + 0x50);
  pCVar1 = param_1[2].flames;
  pCVar1[0x15].base.actor_name[0] = '\0';
  pCVar1[0x15].base.actor_name[1] = '\0';
  pCVar1[0x15].base.actor_name[2] = '\0';
  pCVar1[0x15].base.actor_name[3] = '\0';
  pCVar1 = param_1[2].flames + 0x15;
  (pCVar1->base).actor_name[4] = '\0';
  (pCVar1->base).actor_name[5] = '\0';
  (pCVar1->base).actor_name[6] = '\0';
  (pCVar1->base).actor_name[7] = '\0';
  pCVar1 = param_1[2].flames + 0x15;
  (pCVar1->base).actor_name[8] = '\0';
  (pCVar1->base).actor_name[9] = '\0';
  (pCVar1->base).actor_name[10] = '\0';
  (pCVar1->base).actor_name[0xb] = '\0';
  pCVar1 = param_1[2].flames + 0x15;
  (pCVar1->base).actor_name[0x14] = -0x36;
  (pCVar1->base).actor_name[0x15] = -0xe;
  (pCVar1->base).actor_name[0x16] = 'I';
  (pCVar1->base).actor_name[0x17] = 'q';
  pCVar1 = param_1[2].flames + 0x15;
  (pCVar1->base).actor_name[0x10] = '\0';
  (pCVar1->base).actor_name[0x11] = '\0';
  (pCVar1->base).actor_name[0x12] = '\0';
  (pCVar1->base).actor_name[0x13] = '\0';
  return;
}
