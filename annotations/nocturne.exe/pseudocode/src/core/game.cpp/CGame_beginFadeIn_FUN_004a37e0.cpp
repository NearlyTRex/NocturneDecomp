// Name: core_game.cpp_CGame_beginFadeIn_FUN_004a37e0
// Address: 004a37e0
// Address Range: [[004a3695, 004a37db] [004a37e0, 004a381b]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_beginFadeIn_FUN_004a37e0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_CGame_beginFadeIn_FUN_004a37e0(void)

{
  _DAT_01c78b04 = 1;
  _DAT_01c78b0c = DAT_005b761c / 2;
  _DAT_01c78b10 = DAT_005b7620 / 2;
  _DAT_01c78b08 = 0;
  core_game_cpp_calculateIrisFadeCenter_FUN_004a3860();
  return;
}
