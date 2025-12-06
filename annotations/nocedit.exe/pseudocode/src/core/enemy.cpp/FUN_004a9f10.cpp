// Name: core_enemy.cpp_FUN_004a9f10
// Address: 004a9f10
// Address Range: [[004a9f10, 004a9f96]]
// Convention: unknown
// Signature: undefined core_enemy.cpp_FUN_004a9f10()

#include "nocturne.h"

/* Signature: byte actors_enemy_enemy.cpp_FUN_004a9f10(uint param_1, uint param_2)
    */

void core_enemy_cpp_FUN_004a9f10
               (uint param_1,uint param_2,float unaff_EBX,uint param_4,
               CCharacter *param_5,int param_6)

{
  CCharacter *pCVar1;
  CDemonActor *pCVar2;
  CVector3f *unaff_EBP;
  int unaff_ESI;
  
  (*(param_5->base_actor).vtable[1].handleFootstep)
            (&param_5->base_actor,unaff_EBP,unaff_ESI,unaff_EBX);
  core_charactr_cpp_CCharacter_FUN_0042c3c0(param_5);
  if (0.0 < *(float *)(param_6 + 4)) {
    pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (*(CDemonActor **)(param_6 + 0x38),g_CCharacterClassInfo.name_hash);
    if (pCVar2 == (CDemonActor *)0x0) {
      pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790
                         (*(CDemonActor **)(param_6 + 0x34),g_CCharacterClassInfo.name_hash);
    }
    if (pCVar2 != (CDemonActor *)0x0) {
      pCVar1 = param_5 + 1;
      (pCVar1->base_actor).actor_name[0x1c] = '\0';
      (pCVar1->base_actor).actor_name[0x1d] = '\0';
      (pCVar1->base_actor).actor_name[0x1e] = 'p';
      (pCVar1->base_actor).actor_name[0x1f] = 'A';
      pCVar1 = param_5 + 1;
      (pCVar1->base_actor).actor_name[0xc] = '\x01';
      (pCVar1->base_actor).actor_name[0xd] = '\0';
      (pCVar1->base_actor).actor_name[0xe] = '\0';
      (pCVar1->base_actor).actor_name[0xf] = '\0';
      *(CDemonActor **)(param_5[1].base_actor.actor_name + 0x18) = pCVar2;
      return;
    }
  }
  return;
}
