// Name: core_netgame.cpp_CNetGame_initializeNetworkToJoin_FUN_0053f900
// Address: 0053f900
// Address Range: [[0053f900, 0053fbb5]]
// Convention: __cdecl
// Signature: int __cdecl core_netgame_cpp_CNetGame_initializeNetworkToJoin_FUN_0053f900(CNetGame *this_ptr)

#include "nocturne.h"

int __cdecl core_netgame_cpp_CNetGame_initializeNetworkToJoin_FUN_0053f900(CNetGame *this_ptr)

{
  char cVar1;
  CEditorTools *this_ptr_00;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  char *pcVar5;
  byte bVar6;
  uint32_t *in_stack_00000008;
  float local_60;
  uint uStack_53;
  char local_4f [20];
  uint local_3b;
  uint local_37;
  SNetworkAddr local_30;
  SNetworkAddr local_28;
  int local_20;
  int local_1c;
  char *local_18;
  
  bVar6 = 0;
  core_netgame_cpp_CNetGame_FUN_0053fd00(this_ptr);
  this_ptr->player_count = 0;
  support_trisock_cpp_createNetworkAddr_FUN_005e1940(&local_30,(uint32_t *)g_AnyAddressIP,0x1ddf);
  iVar2 = core_netgame_cpp_CNetGame_addPlayer_FUN_005412b0(this_ptr);
  this_ptr->local_player_index = iVar2;
  iVar2 = core_netgame_cpp_CNetGame_initializeNetwork_FUN_0053fbc0(this_ptr);
  if (iVar2 == 0) {
    return 0;
  }
  support_trisock_cpp_createNetworkAddr_FUN_005e1940(&local_28,in_stack_00000008,0x1ddf);
  iVar2 = core_netgame_cpp_CNetGame_addPlayer_FUN_005412b0(this_ptr);
  uVar4 = g_CurrentGameTime;
  this_ptr->connection_type = 2;
  this_ptr_00 = g_CEditorToolsPtr;
  this_ptr->network_mode = 1;
  *(int *)this_ptr->padding = iVar2;
  uVar4 = uVar4 - 0x50000;
  DAT_02f7c8bc = 0;
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (this_ptr_00,"Contacting server.  Press ESC to give up...");
  local_1c = g_ForceMessagePump;
  g_ForceMessagePump = 0;
  if (-1 < *(int *)this_ptr->padding) {
    local_18 = this_ptr->network_data;
    do {
      local_20 = g_CurrentGameTime - uVar4;
      local_60 = (float)(int)(g_CurrentGameTime - uVar4) * (float)1.52587890625e-05;
      if (local_60 < 0.0) {
        local_60 = 0.0;
      }
      if ((float)30 < local_60) {
        local_60 = 30.0;
      }
      if ((float)0.20000000000000001 < local_60) {
        (&uStack_53)[(uint)bVar6 * -2] = *(uint *)&(&local_28)[-(uint)bVar6].port;
        local_3b = *(uint *)(this_ptr->players[this_ptr->local_player_index].name + 0x14);
        local_37 = *(uint *)(this_ptr->players[this_ptr->local_player_index].name + 0x18);
        pcVar5 = local_4f;
        pcVar3 = local_18;
        do {
          cVar1 = *pcVar3;
          *pcVar5 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar3[1];
          pcVar3 = pcVar3 + 2;
          pcVar5[1] = cVar1;
          pcVar5 = pcVar5 + 2;
        } while (cVar1 != '\0');
        core_netgame_cpp_CNetGame_send_FUN_005411c0(this_ptr,*(int *)this_ptr->padding);
        uVar4 = g_CurrentGameTime;
      }
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      core_netgame_cpp_CNetGame_receivePackets_FUN_005405b0(this_ptr);
      if (DAT_02f7c8bc == 1) {
        g_ForceMessagePump = local_1c;
        return 1;
      }
      if (DAT_02f7c8bc < 3) {
        if (DAT_02f7c8bc == 2) {
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"Connection refused - computer is not a server");
          core_netgame_cpp_CNetGame_FUN_0053fd00(this_ptr);
          return 0;
        }
      }
      else {
        if (DAT_02f7c8bc < 4) {
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"Connection refused - game is full");
          core_netgame_cpp_CNetGame_FUN_0053fd00(this_ptr);
          return 0;
        }
        if (DAT_02f7c8bc == 4) {
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"Connection refused - already in the game");
          goto LAB_0053fb81;
        }
      }
      iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_ESCAPE);
      if (iVar2 != 0) {
LAB_0053fb81:
        core_netgame_cpp_CNetGame_FUN_0053fd00(this_ptr);
        return 0;
      }
    } while (-1 < *(int *)this_ptr->padding);
  }
  core_netgame_cpp_CNetGame_FUN_0053fd00(this_ptr);
  return 0;
}
