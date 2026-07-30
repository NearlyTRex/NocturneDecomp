// Name: core_crossbow.cpp_CCrossbow_renderTransparent_FUN_0043d120
// Address: 0043d120
// Address Range: [[0043d120, 0043d143]]
// Convention: unknown
// Signature: undefined4 core_crossbow_cpp_CCrossbow_renderTransparent_FUN_0043d120(int param_1)

#include "nocturne.h"

uint core_crossbow_cpp_CCrossbow_renderTransparent_FUN_0043d120(int param_1)

{
  if (*(int *)(param_1 + 0x570) == 0) {
    return 0;
  }
  core_flame_cpp_CFlame_renderTransparent_FUN_0048d5d0((CFlame *)(param_1 + 0x574));
  return 1;
}
