// Name: core_netgame.cpp_CNetGame_getMyControls_FUN_00507f10
// Address: 00507f10
// Address Range: [[00507f10, 00507f82]]
// Convention: __cdecl
// Signature: SPlayerInput * __cdecl core_netgame_cpp_CNetGame_getMyControls_FUN_00507f10(CNetGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SPlayerInput * __cdecl core_netgame_cpp_CNetGame_getMyControls_FUN_00507f10(CNetGame *this_ptr)

{
  if (*(int *)this_ptr == 0) {
    return (SPlayerInput *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0xcdd4);
  }
  if (-1 < *(int *)&this_ptr->field_0x124) {
    return (SPlayerInput *)(&this_ptr->field_0x6c + *(int *)&this_ptr->field_0x124 * 0x80);
  }
  _DAT_01d71de0 = "..\\core\\netgame.cpp";
  _DAT_01d71de4 = 0xa0f;
  core_main_c_FUN_004e4330("CNetGame::getMyControls - I'm not in the player list!");
  return (SPlayerInput *)(&this_ptr->field_0x6c + *(int *)&this_ptr->field_0x124 * 0x80);
}
