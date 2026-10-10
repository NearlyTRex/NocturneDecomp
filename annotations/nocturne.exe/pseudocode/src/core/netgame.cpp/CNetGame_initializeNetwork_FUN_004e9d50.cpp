// Name: core_netgame.cpp_CNetGame_initializeNetwork_FUN_004e9d50
// Address: 004e9d50
// Address Range: [[004e9d50, 004e9e8a]]
// Convention: __cdecl
// Signature: int __cdecl core_netgame_cpp_CNetGame_initializeNetwork_FUN_004e9d50(CNetGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_netgame_cpp_CNetGame_initializeNetwork_FUN_004e9d50(CNetGame *this_ptr)

{
  CSocket *this_ptr_00;
  int iVar1;
  
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0046fff0
            (g_CEditorTools_PTR_005b6d50,"Initializing network...");
  this_ptr_00 = &this_ptr->socket;
  support_trisock_cpp_CSocket_closeSocket_FUN_00549110(this_ptr_00);
  iVar1 = support_trisock_cpp_CSocket_createUDPSocket_FUN_00548f30(this_ptr_00);
  if (iVar1 == 0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0046fcd0
              (g_CEditorTools_PTR_005b6d50,"Can't create datagram socket");
    return 0;
  }
  iVar1 = support_trisock_cpp_CSocket_setSocketBlocking_FUN_00549240(this_ptr_00,0);
  if (iVar1 == 0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0046fcd0
              (g_CEditorTools_PTR_005b6d50,"Can't turn off blocking mode for socket");
    return 0;
  }
  iVar1 = support_trisock_cpp_CSocket_bindSocket_FUN_00548f70(this_ptr_00,0x1ddf);
  if (iVar1 == 0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0046fcd0
              (g_CEditorTools_PTR_005b6d50,"Can't bind UDP socket");
    return 0;
  }
  iVar1 = support_trisock_cpp_CSocket_getSocketName_FUN_005491e0
                    (this_ptr_00,&this_ptr->players[this_ptr->local_player_index].addr);
  if (iVar1 != 0) {
    core_netgame_cpp_CNetGame_flushIncomingPackets_FUN_004ea6e0(this_ptr);
    _DAT_01cea3f8 = 1;
    _DAT_01cea3f4 = wincore_winrun_cpp_getTime_FUN_00558a30();
    _DAT_01cea3f4 = _DAT_01cea3f4 / 0x12;
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0046fff0
              (g_CEditorTools_PTR_005b6d50,"Initializing network...OK");
    return 1;
  }
  shape_edittool_cpp_CEditorTools_showError_FUN_0046fcd0
            (g_CEditorTools_PTR_005b6d50,"Can't querry back for socket address");
  return 0;
}
