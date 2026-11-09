// Name: core_game.cpp_FUN_004c4cc0
// Address: 004c4cc0
// Address Range: [[004c4cc0, 004c4d02]]
// Convention: unknown
// Signature: void core_game_cpp_FUN_004c4cc0(int param_1)

#include "nocturne.h"

void core_game_cpp_FUN_004c4cc0(int param_1)

{
  double dVar1;
  uint local_c;
  uint local_8;
  
  if (*(uint *)(param_1 + 0x2fc) == 0) {
    return;
  }
  dVar1 = sound_sndmain_cpp_getSfxPlaybackPosition_FUN_005567c0(*(uint *)(param_1 + 0x2fc),1);
  local_c = SUB84(__BITCAST_UINT64(dVar1),0);
  *(uint *)(param_1 + 0x300) = local_c;
  local_8 = (uint)((ulonglong)dVar1 >> 0x20);
  *(uint *)(param_1 + 0x304) = local_8;
  return;
}
