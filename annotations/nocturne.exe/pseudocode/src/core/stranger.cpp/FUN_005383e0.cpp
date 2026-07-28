// Name: core_stranger.cpp_FUN_005383e0
// Address: 005383e0
// Address Range: [[005383e0, 0053842f]]
// Convention: unknown
// Signature: undefined4 core_stranger_cpp_FUN_005383e0(int param_1)

#include "nocturne.h"

uint core_stranger_cpp_FUN_005383e0(int param_1)

{
  CDemonActor *pCVar1;
  
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040d890
                     (*(CDemonActor **)(param_1 + 0x24ac),g_CLightActorActorType_00764a9c.name_hash)
  ;
  if ((pCVar1 != (CDemonActor *)0x0) && ((pCVar1[4].dead2 == 2 || (pCVar1[4].dead2 == 3)))) {
    return 0xbf860a92;
  }
  return 0xbfc80fc6;
}
