// Name: core_stranger.cpp_FUN_005be430
// Address: 005be430
// Address Range: [[005be430, 005be47f]]
// Convention: unknown
// Signature: undefined4 core_stranger_cpp_FUN_005be430(void)

#include "nocturne.h"

uint core_stranger_cpp_FUN_005be430(void)

{
  int iVar1;
  CDemonActor *pCVar2;
  int in_stack_00000004;
  
  pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790
                     (*(CDemonActor **)(in_stack_00000004 + 0x24b4),g_CLightActorClassInfo.name_hash
                     );
  if ((pCVar2 != (CDemonActor *)0x0) && ((iVar1 = pCVar2[4].scale.y, iVar1 == 2 || (iVar1 == 3)))) {
    return 0xbf860a92;
  }
  return 0xbfc80fc6;
}
