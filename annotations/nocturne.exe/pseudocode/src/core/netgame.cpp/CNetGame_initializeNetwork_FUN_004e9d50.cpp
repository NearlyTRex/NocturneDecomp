// Name: core_netgame.cpp_CNetGame_initializeNetwork_FUN_004e9d50
// Address: 004e9d50
// Address Range: [[004e9d50, 004e9e8a]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_netgame_cpp_CNetGame_initializeNetwork_FUN_004e9d50(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl core_netgame_cpp_CNetGame_initializeNetwork_FUN_004e9d50(int param_1)

{
  int iVar1;
  int iVar2;
  
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0046fff0
            (0x01BCD074,"Initializing network...");
  iVar2 = param_1 + 0x170;
  support_trisock_cpp_bindAndInvalidateSocket_FUN_00549110(iVar2);
  iVar1 = support_trisock_cpp_createUDPSocket_FUN_00548f30(iVar2);
  if (iVar1 == 0) {
    shape_edittool_cpp_FUN_0046fcd0(0x01BCD074,"Can't create datagram socket");
    return 0;
  }
  iVar1 = support_trisock_cpp_setSocketBlocking_FUN_00549240(iVar2,0);
  if (iVar1 == 0) {
    shape_edittool_cpp_FUN_0046fcd0(0x01BCD074,"Can't turn off blocking mode for socket");
    return 0;
  }
  iVar1 = support_trisock_cpp_bindSocket_FUN_00548f70(iVar2,0x1ddf);
  if (iVar1 == 0) {
    shape_edittool_cpp_FUN_0046fcd0(0x01BCD074,"Can't bind UDP socket");
    return 0;
  }
  iVar2 = support_trisock_cpp_getSocketName_FUN_005491e0
                    (iVar2,*(int *)(param_1 + 0x114) * 0x78 + param_1 + 0x3c);
  if (iVar2 != 0) {
    core_netgame_cpp_CNetGame_flushIncomingPackets_FUN_004ea6e0(param_1);
    _DAT_01cea3f8 = 1;
    _DAT_01cea3f4 = wincore_winrun_cpp_getTime_FUN_00558a30();
    _DAT_01cea3f4 = _DAT_01cea3f4 / 0x12;
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0046fff0
              (0x01BCD074,"Initializing network...OK");
    return 1;
  }
  shape_edittool_cpp_FUN_0046fcd0(0x01BCD074,"Can't querry back for socket address");
  return 0;
}
