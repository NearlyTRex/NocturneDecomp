// Name: core_netgame.cpp_CNetGame_init_FUN_004e9910
// Address: 004e9910
// Address Range: [[004e9910, 004e99b1]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_init_FUN_004e9910(CNetGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_netgame_cpp_CNetGame_init_FUN_004e9910(CNetGame *this_ptr)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  remove("netlog.txt");
  _DAT_01cea3f8 = 1;
  _DAT_01cea3f4 = wincore_winrun_cpp_getTime_FUN_00558a30();
  _DAT_01cea3f4 = _DAT_01cea3f4 / 0x12;
  support_trisock_cpp_startupWinsock_FUN_00549280();
  pcVar2 = getenv("USERNAME");
  if (pcVar2 == (char *)0x0) {
    pcVar2 = getenv("COMPUTERNAME");
  }
  if (pcVar2 == (char *)0x0) {
    pcVar2 = "MyComputer";
  }
  pcVar3 = this_ptr->player_name;
  do {
    cVar1 = *pcVar2;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  _DAT_01cea40c = 0;
  _DAT_01d06610 = 0;
  core_netgame_cpp_CNetGame_disconnect_FUN_004e9e90(this_ptr,0);
  return;
}
