// Name: core_actor.cpp_setRandomSeed_FUN_0040cb90
// Address: 0040cb90
// Address Range: [[0040cb90, 0040cb99]]
// Convention: __cdecl
// Signature: void core_actor.cpp_setRandomSeed_FUN_0040cb90(uint seed_value)
// Cross-references:
//   core_game.cpp_CGame_process_FUN_004e3190 (004e3190) at 004e31c6 [UNCONDITIONAL_CALL]
//   core_netgame.cpp_CNetGame_processServerFrame_FUN_00543150 (00543150) at 005433ad [UNCONDITIONAL_CALL]
//   core_netgame.cpp_FUN_00541390 (00541390) at 0054199a [UNCONDITIONAL_CALL]
// Globals:
//   uint g_RandomSeedValue

#include "nocturne.h"

void __cdecl core_actor_cpp_setRandomSeed_FUN_0040cb90(uint seed_value)

{
  g_RandomSeedValue = seed_value;
  return;
}


// Assembly code:
// 0040cb90: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_actor.cpp_setRandomSeed_FUN_0040cb90
//   XREF to: Stack[0x4] (READ)
// 0040cb94: MOV [0x00822368],EAX
//   XREF to: 00822368 (WRITE)
// 0040cb99: RET
