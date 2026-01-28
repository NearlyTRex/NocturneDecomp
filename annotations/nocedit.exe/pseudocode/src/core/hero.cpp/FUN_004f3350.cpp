// Name: core_hero.cpp_FUN_004f3350
// Address: 004f3350
// Address Range: [[004f3350, 004f33a4]]
// Convention: unknown
// Signature: void core_hero_cpp_FUN_004f3350(void)

#include "nocturne.h"

/* Signature: byte actors_hero_hero.cpp_FUN_004f3350(uint param_1) */

void core_hero_cpp_FUN_004f3350(void)

{
  CDemonActor *pCVar1;
  int in_stack_00000004;
  
  if (*(CDemonActor **)(in_stack_00000004 + 0x1fba4) == (CDemonActor *)0x0) {
    return;
  }
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790
                     (*(CDemonActor **)(in_stack_00000004 + 0x1fba4),g_CBoxActorClassInfo.name_hash)
  ;
  if (in_stack_00000004 == pCVar1[2].was_created) {
    pCVar1[2].was_created = 0;
    sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)pCVar1[2].create_event);
  }
  *(uint *)(in_stack_00000004 + 0x1fba4) = 0;
  return;
}
