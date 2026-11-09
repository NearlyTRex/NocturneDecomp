// Name: core_game.cpp_FUN_004b80a0
// Address: 004b80a0
// Address Range: [[004b80a0, 004b824e]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_FUN_004b80a0(CGame *this_ptr,SPlayerInput *player_control)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_FUN_004b80a0(CGame *this_ptr,SPlayerInput *player_control)

{
  int x;
  int y;
  int iVar1;
  int iVar2;
  float local_40;
  float local_3c;
  
  core_game_cpp_FUN_004b76c0(this_ptr,player_control);
  if (*(int *)&this_ptr->field_0x29c == 0) {
    x = DAT_006141b8 / 2;
    y = DAT_006141bc / 2;
    iVar1 = _DAT_01c2a37c - x;
    iVar2 = _DAT_01c2a380 - y;
    wincore_winrun_cpp_setCursorPosition_FUN_0058ed10(x,y);
    if (*(int *)&g_CDemonSetPtr->field_0x15aeb8 == _DAT_01cb7784) {
      local_3c = (float)*(int *)&this_ptr->field_0xb0 * (float)_DAT_005d78f3 * (float)_DAT_005d78fb
                 * ((float)iVar1 / (float)x);
      local_40 = (float)*(int *)&this_ptr->field_0xb4 * (float)_DAT_005d78f3 *
                 ((float)iVar2 / (float)y);
      if (local_3c < (float)_DAT_005d7903) {
        local_3c = -1.0;
      }
      if (1.0 < local_3c) {
        local_3c = 1.0;
      }
      if (local_40 < (float)_DAT_005d7903) {
        local_40 = -1.0;
      }
      if (1.0 < local_40) {
        local_40 = 1.0;
      }
      if (*(int *)&this_ptr->field_0xa8 != 0) {
        local_40 = -local_40;
      }
      if ((&DAT_01c37790)[*(int *)&this_ptr->field_0x34] == '\0') {
        if (ABS(*(float *)(player_control + 0x28)) < ABS(local_3c)) {
          *(float *)(player_control + 0x28) = local_3c;
        }
      }
      else if (ABS(*(float *)(player_control + 0x24)) < ABS(local_3c)) {
        *(float *)(player_control + 0x24) = local_3c;
      }
      if (ABS(*(float *)(player_control + 0x2c)) < ABS(local_40)) {
        *(float *)(player_control + 0x2c) = local_40;
        return;
      }
    }
  }
  return;
}
