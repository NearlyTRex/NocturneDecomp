// Name: core_game.cpp_CGame_processMouseControls_FUN_0049f710
// Address: 0049f710
// Address Range: [[0049f710, 0049f8be]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_processMouseControls_FUN_0049f710(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_CGame_processMouseControls_FUN_0049f710(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float local_40;
  float local_3c;
  
  core_game_cpp_CGame_processKeyboardControls_FUN_0049ee30(param_1,param_2);
  if (*(int *)(param_1 + 0x27c) == 0) {
    iVar1 = DAT_005b761c / 2;
    iVar2 = DAT_005b7620 / 2;
    iVar3 = _DAT_01bd1d8c - iVar1;
    iVar4 = _DAT_01bd1d90 - iVar2;
    wincore_winrun_cpp_setCursorPosition_FUN_00558d60(iVar1,iVar2);
    if (*(int *)(0x01E57284 + 0x15aabc) == _DAT_01c7841c) {
      local_3c = (float)*(int *)(param_1 + 0x9c) * (float)1.52587890625e-05 * (float)0.75 *
                 ((float)iVar3 / (float)iVar1);
      local_40 = (float)*(int *)(param_1 + 0xa0) * (float)1.52587890625e-05 *
                 ((float)iVar4 / (float)iVar2);
      if (local_3c < (float)-1) {
        local_3c = -1.0;
      }
      if (1.0 < local_3c) {
        local_3c = 1.0;
      }
      if (local_40 < (float)-1) {
        local_40 = -1.0;
      }
      if (1.0 < local_40) {
        local_40 = 1.0;
      }
      if (*(int *)(param_1 + 0x94) != 0) {
        local_40 = -local_40;
      }
      if ((&DAT_01c02598)[*(int *)(param_1 + 0x34)] == '\0') {
        if (ABS(*(float *)(param_2 + 0x24)) < ABS(local_3c)) {
          *(float *)(param_2 + 0x24) = local_3c;
        }
      }
      else if (ABS(*(float *)(param_2 + 0x20)) < ABS(local_3c)) {
        *(float *)(param_2 + 0x20) = local_3c;
      }
      if (ABS(*(float *)(param_2 + 0x28)) < ABS(local_40)) {
        *(float *)(param_2 + 0x28) = local_40;
        return;
      }
    }
  }
  return;
}
