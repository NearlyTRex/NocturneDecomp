// Name: core_netgame.cpp_CNetGame_removePlayer_FUN_0052f890
// Address: 0052f890
// Address Range: [[0052f890, 0052fa75]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_removePlayer_FUN_0052f890(CNetGame *this_ptr,int player_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_netgame_cpp_CNetGame_removePlayer_FUN_0052f890(CNetGame *this_ptr,int player_index)

{
  int iVar1;
  byte *src;
  void *dest;
  byte *dest_00;
  byte *local_14;
  
  if ((player_index < 0) || (*(int *)&this_ptr->field_0x1c <= player_index)) {
    _DAT_01d1d400 = "..\\core\\netgame.cpp";
    _DAT_01d1d404 = 0x862;
    core_main_c_FUN_005030e0("CNetGame::removePlayer - invalid player index");
  }
  if (player_index == *(int *)&this_ptr->field_0x11c) {
    _DAT_01d1d400 = "..\\core\\netgame.cpp";
    _DAT_01d1d404 = 0x869;
    core_main_c_FUN_005030e0("CNetGame::removePlayer - tried to remove myself!");
  }
  if (player_index == *(int *)&this_ptr->field_0x118) {
    *(uint *)&this_ptr->field_0x118 = 0xffffffff;
  }
  if (player_index == *(int *)&this_ptr->field_0x11c) {
    *(uint *)&this_ptr->field_0x11c = 0xffffffff;
  }
  iVar1 = *(int *)&this_ptr->field_0x1c + -1;
  *(int *)&this_ptr->field_0x1c = iVar1;
  memmove
            (&this_ptr->field_0x20 + player_index * 0x7c,&this_ptr->field_0x9c + player_index * 0x7c
             ,(iVar1 - player_index) * 0x7c);
  iVar1 = 0;
  if (0 < _DAT_01d6dfb8) {
    dest_00 = &DAT_01d6dfc4 + player_index;
    src = &DAT_01d6dfc5 + player_index;
    local_14 = &DAT_01d6dfcc + player_index * 4;
    dest = (void *)(player_index * 4 + 0x1d6dfc8);
    do {
      memmove(dest_00,src,*(int *)&this_ptr->field_0x1c - player_index);
      iVar1 = iVar1 + 1;
      src = src + 0x114;
      memmove
                (dest,local_14,(*(int *)&this_ptr->field_0x1c - player_index) * 4);
      dest_00 = dest_00 + 0x114;
      local_14 = local_14 + 0x114;
      dest = (void *)((int)dest + 0x114);
    } while (iVar1 < _DAT_01d6dfb8);
  }
  if (player_index < *(int *)&this_ptr->field_0x118) {
    *(int *)&this_ptr->field_0x118 = *(int *)&this_ptr->field_0x118 + -1;
  }
  if (player_index < *(int *)&this_ptr->field_0x11c) {
    *(int *)&this_ptr->field_0x11c = *(int *)&this_ptr->field_0x11c + -1;
    return;
  }
  return;
}
