// Name: core_netgame.cpp_FUN_004e99f0
// Address: 004e99f0
// Address Range: [[004e99f0, 004e9a8d]]
// Convention: unknown
// Signature: undefined4 core_netgame_cpp_FUN_004e99f0(undefined4 *param_1)

#include "nocturne.h"

uint core_netgame_cpp_FUN_004e99f0(uint *param_1)

{
  uint uVar1;
  int iVar2;
  byte local_10 [8];
  
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0046fff0
            (0x01BCD074,"Initializing network to host game");
  core_netgame_cpp_CNetGame_disconnect_FUN_004e9e90(param_1,0);
  iVar2 = 0x01C775EC;
  param_1[7] = 0;
  uVar1 = support_trisock_cpp_createNetworkAddr_FUN_00548d30
                    (local_10,&DAT_02dd10c4,0x1ddf,param_1 + 2,*(uint *)(iVar2 + 0xc0),
                     *(uint *)(iVar2 + 0xc4));
  uVar1 = core_netgame_cpp_CNetGame_addPlayer_FUN_004eb440(param_1,uVar1);
  param_1[0x45] = uVar1;
  param_1[0x44] = uVar1;
  iVar2 = core_netgame_cpp_CNetGame_initializeNetwork_FUN_004e9d50(param_1);
  if (iVar2 == 0) {
    return 0;
  }
  param_1[1] = 1;
  *param_1 = 1;
  return 1;
}
