// Name: core_gabriela.cpp_FUN_004d4c90
// Address: 004d4c90
// Address Range: [[004d4c90, 004d4cdf]]
// Convention: __cdecl
// Signature: int __cdecl core_gabriela_cpp_FUN_004d4c90(void)

#include "nocturne.h"

/* Signature: byte actors_hero_gabriella.cpp_FUN_004d4c90(uint param_1) */

int __cdecl core_gabriela_cpp_FUN_004d4c90(void)

{
  int iVar1;
  CDemonActor *pCVar2;
  int in_stack_00000004;
  
  pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790
                     (*(CDemonActor **)(in_stack_00000004 + 0x24b4),g_CLightActorClassInfo.name_hash
                     );
  if ((pCVar2 != (CDemonActor *)0x0) && ((iVar1 = pCVar2[4].scale.y, iVar1 == 2 || (iVar1 == 3)))) {
    return -0x4079f56e;
  }
  return -0x4037f03a;
}
