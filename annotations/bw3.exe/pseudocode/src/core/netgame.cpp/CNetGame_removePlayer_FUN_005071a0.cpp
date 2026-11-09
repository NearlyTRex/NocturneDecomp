// Name: core_netgame.cpp_CNetGame_removePlayer_FUN_005071a0
// Address: 005071a0
// Address Range: [[005071a0, 00507365]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_removePlayer_FUN_005071a0(CNetGame *this_ptr,int player_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_netgame_cpp_CNetGame_removePlayer_FUN_005071a0(CNetGame *this_ptr,int player_index)

{
  int iVar1;
  byte *src;
  byte *src_00;
  byte *dest;
  int iVar2;
  void *local_14;
  
  if ((player_index < 0) || (*(int *)&this_ptr->field_0x1c <= player_index)) {
    _DAT_01d71de0 = "..\\core\\netgame.cpp";
    _DAT_01d71de4 = 0x862;
    core_main_c_FUN_004e4330("CNetGame::removePlayer - invalid player index");
  }
  if (player_index == *(int *)&this_ptr->field_0x124) {
    _DAT_01d71de0 = "..\\core\\netgame.cpp";
    _DAT_01d71de4 = 0x869;
    core_main_c_FUN_004e4330("CNetGame::removePlayer - tried to remove myself!");
  }
  if (player_index == *(int *)&this_ptr->field_0x120) {
    *(uint *)&this_ptr->field_0x120 = 0xffffffff;
  }
  if (player_index == *(int *)&this_ptr->field_0x124) {
    *(uint *)&this_ptr->field_0x124 = 0xffffffff;
  }
  iVar1 = *(int *)&this_ptr->field_0x1c + -1;
  *(int *)&this_ptr->field_0x1c = iVar1;
  iVar2 = 0;
  memmove
            (&this_ptr->field_0x20 + player_index * 0x80,&this_ptr->field_0xa0 + player_index * 0x80
             ,(iVar1 - player_index) * 0x80);
  if (0 < _DAT_01dc2690) {
    dest = &DAT_01dc269c + player_index;
    src = &DAT_01dc269d + player_index;
    local_14 = (void *)(player_index * 4 + 0x1dc26a0);
    src_00 = &DAT_01dc26a4 + player_index * 4;
    do {
      memmove(dest,src,*(int *)&this_ptr->field_0x1c - player_index);
      iVar2 = iVar2 + 1;
      src = src + 0x114;
      memmove
                (local_14,src_00,(*(int *)&this_ptr->field_0x1c - player_index) * 4);
      dest = dest + 0x114;
      src_00 = src_00 + 0x114;
      local_14 = (void *)((int)local_14 + 0x114);
    } while (iVar2 < _DAT_01dc2690);
  }
  if (player_index < *(int *)&this_ptr->field_0x120) {
    *(int *)&this_ptr->field_0x120 = *(int *)&this_ptr->field_0x120 + -1;
  }
  if (player_index < *(int *)&this_ptr->field_0x124) {
    *(int *)&this_ptr->field_0x124 = *(int *)&this_ptr->field_0x124 + -1;
    return;
  }
  return;
}
