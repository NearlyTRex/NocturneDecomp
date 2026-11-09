// Name: unkafter_alphabit.cpp_FUN_004119a0
// Address: 004119a0
// Address Range: [[004119a0, 004119df]]
// Convention: unknown
// Signature: void unkafter_alphabit_cpp_FUN_004119a0(int *param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void unkafter_alphabit_cpp_FUN_004119a0(int *param_1,int *param_2)

{
  DAT_007dffb4 = param_2;
  if (param_2 != (int *)0x0) {
    DAT_007dffb4 = param_1;
    DAT_007dffbc = _DAT_01c5fae4;
  }
  (**(code **)(*param_1 + 0x14))(param_1,param_2);
  core_game_cpp_FUN_004ba490(g_CGamePtr);
  return;
}
