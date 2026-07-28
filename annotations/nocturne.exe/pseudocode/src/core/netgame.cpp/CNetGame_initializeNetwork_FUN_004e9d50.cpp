// Name: core_netgame.cpp_CNetGame_initializeNetwork_FUN_004e9d50
// Address: 004e9d50
// Address Range: [[004e9d50, 004e9e8a]]
// Convention: __cdecl
// Signature: int __cdecl core_netgame_cpp_CNetGame_initializeNetwork_FUN_004e9d50(CNetGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_netgame_cpp_CNetGame_initializeNetwork_FUN_004e9d50(CNetGame *this_ptr)

{
  _SOCKET *socket_handle;
  int iVar1;
  char *pcStack00000008;
  char *pcStack00000010;
  
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0046fff0
            (0x01BCD074,"Initializing network...");
  socket_handle = &this_ptr->socket;
  support_trisock_cpp_bindAndInvalidateSocket_FUN_00549110(socket_handle);
  iVar1 = support_trisock_cpp_createUDPSocket_FUN_00548f30(socket_handle);
  if (iVar1 == 0) {
    shape_edittool_cpp_FUN_0046fcd0(0x01BCD074,"Can't create datagram socket");
    return 0;
  }
  iVar1 = support_trisock_cpp_setSocketBlocking_FUN_00549240(socket_handle,0);
  if (iVar1 == 0) {
    shape_edittool_cpp_FUN_0046fcd0(0x01BCD074,"Can't turn off blocking mode for socket");
    return 0;
  }
  iVar1 = support_trisock_cpp_bindSocket_FUN_00548f70(socket_handle,0x1ddf);
  if (iVar1 == 0) {
    shape_edittool_cpp_FUN_0046fcd0();
    return 0;
  }
  iVar1 = support_trisock_cpp_getSocketName_FUN_005491e0
                    (socket_handle,&this_ptr->players[this_ptr->local_player_index].addr);
  if (iVar1 != 0) {
    pcStack00000008 = (char *)0x4e9de9;
    core_netgame_cpp_CNetGame_flushIncomingPackets_FUN_004ea6e0(this_ptr);
    _DAT_01cea3f8 = 1;
    pcStack00000010 = (char *)0x4e9df7;
    _DAT_01cea3f4 = wincore_winrun_cpp_getTime_FUN_00558a30();
    _DAT_01cea3f4 = _DAT_01cea3f4 / 0x12;
    pcStack00000010 = "Initializing network...OK";
    pcStack00000008 = (char *)0x4e9e18;
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0046fff0();
    return 1;
  }
  pcStack00000008 = "Can't querry back for socket address";
  shape_edittool_cpp_FUN_0046fcd0();
  return 0;
}
