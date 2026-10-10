// Name: core_netgame.cpp_CNetGame_initializeNetwork_FUN_0053fbc0
// Address: 0053fbc0
// Address Range: [[0053fbc0, 0053fcfa]]
// Convention: __cdecl
// Signature: int __cdecl core_netgame_cpp_CNetGame_initializeNetwork_FUN_0053fbc0(CNetGame *this_ptr)

#include "nocturne.h"

int __cdecl core_netgame_cpp_CNetGame_initializeNetwork_FUN_0053fbc0(CNetGame *this_ptr)

{
  CSocket *this_ptr_00;
  int iVar1;
  
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Initializing network...");
  this_ptr_00 = &this_ptr->socket;
  support_trisock_cpp_CSocket_closeSocket_FUN_005e1d20(this_ptr_00);
  iVar1 = support_trisock_cpp_CSocket_createUDPSocket_FUN_005e1b40(this_ptr_00);
  if (iVar1 == 0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't create datagram socket");
    return 0;
  }
  iVar1 = support_trisock_cpp_CSocket_setSocketBlocking_FUN_005e1e50(this_ptr_00,0);
  if (iVar1 == 0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't turn off blocking mode for socket");
    return 0;
  }
  iVar1 = support_trisock_cpp_CSocket_bindSocket_FUN_005e1b80(this_ptr_00,0x1ddf);
  if (iVar1 == 0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't bind UDP socket");
    return 0;
  }
  iVar1 = support_trisock_cpp_CSocket_getSocketName_FUN_005e1df0
                    (this_ptr_00,&this_ptr->players[this_ptr->local_player_index].addr);
  if (iVar1 != 0) {
    core_netgame_cpp_CNetGame_flushIncomingPackets_FUN_00540550(this_ptr);
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
