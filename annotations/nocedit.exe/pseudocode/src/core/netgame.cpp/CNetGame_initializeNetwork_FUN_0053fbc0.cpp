// Name: core_netgame.cpp_CNetGame_initializeNetwork_FUN_0053fbc0
// Address: 0053fbc0
// Address Range: [[0053fbc0, 0053fcfa]]
// Convention: __cdecl
// Signature: int __cdecl core_netgame_cpp_CNetGame_initializeNetwork_FUN_0053fbc0(CNetGame *this_ptr)

#include "nocturne.h"

int __cdecl core_netgame_cpp_CNetGame_initializeNetwork_FUN_0053fbc0(CNetGame *this_ptr)

{
  SOCKET *socket_handle;
  int iVar1;
  
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Initializing network...");
  socket_handle = &this_ptr->socket;
  support_trisock_cpp_bindAndInvalidateSocket_FUN_005e1d20(socket_handle);
  iVar1 = support_trisock_cpp_createUDPSocket_FUN_005e1b40(socket_handle);
  if (iVar1 == 0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't create datagram socket");
    return 0;
  }
  iVar1 = support_trisock_cpp_setSocketBlocking_FUN_005e1e50(socket_handle,0);
  if (iVar1 == 0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't turn off blocking mode for socket");
    return 0;
  }
  iVar1 = support_trisock_cpp_bindSocket_FUN_005e1b80((uint16_t)socket_handle,(SOCKET *)0x1ddf);
  if (iVar1 == 0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't bind UDP socket");
    return 0;
  }
  iVar1 = support_trisock_cpp_getSocketName_FUN_005e1df0
                    (socket_handle,
                     (SNetworkAddr *)(this_ptr->players[this_ptr->local_player_index].name + 0x1c));
  if (iVar1 != 0) {
    core_netgame_cpp_CNetGame_FUN_00540550(this_ptr);
    g_CurrentGameTime = 1;
    iVar1 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
    g_LastPingTime = iVar1 / 0x12;
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (g_CEditorToolsPtr,"Initializing network...OK");
    return 1;
  }
  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
            (g_CEditorToolsPtr,"Can't querry back for socket address");
  return 0;
}
