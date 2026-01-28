// Name: core_netgame.cpp_initializeNetworkToHost_FUN_0053f860
// Address: 0053f860
// Address Range: [[0053f860, 0053f8fd]]
// Convention: unknown
// Signature: undefined4 core_netgame_cpp_initializeNetworkToHost_FUN_0053f860(void)

#include "nocturne.h"

uint core_netgame_cpp_initializeNetworkToHost_FUN_0053f860(void)

{
  int iVar1;
  CNetGame *in_stack_00000004;
  SNetworkAddr local_10;
  
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Initializing network to host game");
  core_netgame_cpp_CNetGame_FUN_0053fd00(in_stack_00000004);
  in_stack_00000004->player_count = 0;
  support_trisock_cpp_createNetworkAddr_FUN_005e1940(&local_10,(uint32_t *)g_AnyAddressIP,0x1ddf);
  iVar1 = core_netgame_cpp_CNetGame_addPlayer_FUN_005412b0();
  in_stack_00000004->local_player_index = iVar1;
  *(int *)in_stack_00000004->padding = iVar1;
  iVar1 = core_netgame_cpp_initializeNetwork_FUN_0053fbc0();
  if (iVar1 == 0) {
    return 0;
  }
  in_stack_00000004->network_mode = 1;
  in_stack_00000004->connection_type = 1;
  return 1;
}
