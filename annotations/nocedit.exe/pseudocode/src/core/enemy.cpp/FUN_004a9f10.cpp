// Name: core_enemy.cpp_FUN_004a9f10
// Address: 004a9f10
// Address Range: [[004a9f10, 004a9f96]]
// Convention: __cdecl
// Signature: void __cdecl core_enemy_cpp_FUN_004a9f10(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_enemy.cpp_FUN_004a9f10(uint param_1, uint param_2)
    */

void __cdecl core_enemy_cpp_FUN_004a9f10(void)

{
  CCharacter *pCVar1;
  CDemonActor *pCVar2;
  CCharacter *in_stack_00000004;
  int in_stack_00000008;
  
  (*(((in_stack_00000004->base).vtable._uc)->_uc).cfunc9)();
  core_charactr_cpp_CCharacter_FUN_0042c3c0(in_stack_00000004);
  if (0.0 < *(float *)(in_stack_00000008 + 4)) {
    pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (*(CDemonActor **)(in_stack_00000008 + 0x38),g_CCharacterClassInfo.name_hash)
    ;
    if (pCVar2 == (CDemonActor *)0x0) {
      pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790
                         (*(CDemonActor **)(in_stack_00000008 + 0x34),
                          g_CCharacterClassInfo.name_hash);
    }
    if (pCVar2 != (CDemonActor *)0x0) {
      pCVar1 = in_stack_00000004 + 1;
      (pCVar1->base).actor_name[0x1c] = '\0';
      (pCVar1->base).actor_name[0x1d] = '\0';
      (pCVar1->base).actor_name[0x1e] = 'p';
      (pCVar1->base).actor_name[0x1f] = 'A';
      pCVar1 = in_stack_00000004 + 1;
      (pCVar1->base).actor_name[0xc] = '\x01';
      (pCVar1->base).actor_name[0xd] = '\0';
      (pCVar1->base).actor_name[0xe] = '\0';
      (pCVar1->base).actor_name[0xf] = '\0';
      *(CDemonActor **)(in_stack_00000004[1].base.actor_name + 0x18) = pCVar2;
      return;
    }
  }
  return;
}
