// Name: core_netgame.cpp_CNetGame_FUN_00541260
// Address: 00541260
// Address Range: [[00541260, 005412a3]]
// Convention: __cdecl
// Signature: int __cdecl core_netgame_cpp_CNetGame_FUN_00541260(CNetGame *this_ptr)

#include "nocturne.h"

int __cdecl core_netgame_cpp_CNetGame_FUN_00541260(CNetGame *this_ptr)

{
  char *pcVar1;
  int iVar2;
  int *in_stack_00000008;
  
  iVar2 = 0;
  if (0 < this_ptr->player_count) {
    pcVar1 = this_ptr->players[0].name + 0x1c;
    do {
      if ((*(short *)(pcVar1 + 4) == (short)in_stack_00000008[1]) &&
         (*(int *)pcVar1 == *in_stack_00000008)) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      pcVar1 = pcVar1 + 0x78;
    } while (iVar2 < this_ptr->player_count);
  }
  return -1;
}
