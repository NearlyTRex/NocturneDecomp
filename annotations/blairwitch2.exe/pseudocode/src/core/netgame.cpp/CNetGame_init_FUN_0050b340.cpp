// Name: core_netgame.cpp_CNetGame_init_FUN_0050b340
// Address: 0050b340
// Address Range: [[0050b340, 0050b3e1]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_init_FUN_0050b340(CNetGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_netgame_cpp_CNetGame_init_FUN_0050b340(CNetGame *this_ptr)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  FUN_005ba1e0("netlog.txt");
  _DAT_01d34e38 = 1;
  _DAT_01d34e34 = wincore_winrun_cpp_getTime_FUN_0058e9e0();
  _DAT_01d34e34 = _DAT_01d34e34 / 0x12;
  support_trisock_cpp_startupWinsock_FUN_00579500();
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
  _DAT_01d34e4c = 0;
  _DAT_01d51050 = 0;
  core_netgame_cpp_CNetGame_disconnect_FUN_0050b8d0(this_ptr,0);
  return;
}
