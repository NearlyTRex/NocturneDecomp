// Name: core_netgame.cpp_initializeNetworkToJoin_FUN_0053f900
// Address: 0053f900
// Address Range: [[0053f900, 0053fbb5]]
// Convention: unknown
// Signature: undefined core_netgame.cpp_initializeNetworkToJoin_FUN_0053f900()

#include "nocturne.h"

uint core_netgame_cpp_initializeNetworkToJoin_FUN_0053f900(void)

{
  char cVar1;
  CEditorTools *this_ptr;
  int iVar2;
  uint uVar3;
  BADSPACEBASE *in_ESP;
  char *pcVar4;
  uint uVar5;
  char *pcVar6;
  byte bVar7;
  CNetGame *in_stack_00000004;
  uint32_t *in_stack_00000008;
  float fVar8;
  uint local_4f;
  char acStack_4b [20];
  uint local_37;
  uint uStack_33;
  SNetworkAddr SStack_2c;
  SNetworkAddr SStack_24;
  int local_1c;
  int local_18;
  char *pcStack_14;
  
  bVar7 = 0;
  core_netgame_cpp_CNetGame_FUN_0053fd00(in_stack_00000004);
  in_stack_00000004->player_count = 0;
  support_trisock_cpp_createNetworkAddr_FUN_005e1940(&SStack_2c,(uint32_t *)g_AnyAddressIP,0x1ddf);
  iVar2 = core_netgame_cpp_CNetGame_addPlayer_FUN_005412b0();
  in_stack_00000004->local_player_index = iVar2;
  iVar2 = core_netgame_cpp_initializeNetwork_FUN_0053fbc0();
  if (iVar2 == 0) {
    return 0;
  }
  support_trisock_cpp_createNetworkAddr_FUN_005e1940(&SStack_24,in_stack_00000008,0x1ddf);
  uVar3 = core_netgame_cpp_CNetGame_addPlayer_FUN_005412b0();
  uVar5 = g_CurrentGameTime;
  in_stack_00000004->connection_type = 2;
  this_ptr = g_CEditorToolsPtr;
  in_stack_00000004->network_mode = 1;
  *(uint *)in_stack_00000004->padding = uVar3;
  uVar5 = uVar5 - 0x50000;
  DAT_02f7c8bc = 0;
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (this_ptr,"Contacting server.  Press ESC to give up...");
  local_18 = g_ForceMessagePump;
  g_ForceMessagePump = 0;
  if (-1 < *(int *)in_stack_00000004->padding) {
    pcStack_14 = in_stack_00000004->network_data;
    do {
      local_1c = g_CurrentGameTime - uVar5;
      fVar8 = (float)(int)(g_CurrentGameTime - uVar5) * (float)1.52587890625e-05;
      if (fVar8 < 0.0) {
        fVar8 = 0.0;
      }
      if ((float)30 < fVar8) {
        fVar8 = 30.0;
      }
      if ((float)0.20000000000000001 < fVar8) {
        (&local_4f)[(uint)bVar7 * -2] = *(uint *)&(&SStack_24)[-(uint)bVar7].port;
        local_37 = *(uint *)
                    (in_stack_00000004->players[in_stack_00000004->local_player_index].name + 0x14);
        uStack_33 = *(uint *)
                     (in_stack_00000004->players[in_stack_00000004->local_player_index].name + 0x18)
        ;
        pcVar6 = acStack_4b;
        pcVar4 = pcStack_14;
        do {
          cVar1 = *pcVar4;
          *pcVar6 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar4[1];
          pcVar4 = pcVar4 + 2;
          pcVar6[1] = cVar1;
          pcVar6 = pcVar6 + 2;
        } while (cVar1 != '\0');
        core_netgame_cpp_CNetGame_send_FUN_005411c0();
        uVar5 = g_CurrentGameTime;
      }
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      core_netgame_cpp_CNetGame_receivePackets_FUN_005405b0(in_stack_00000004);
      if (DAT_02f7c8bc == 1) {
        g_ForceMessagePump = local_18;
        return 1;
      }
      if (DAT_02f7c8bc < 3) {
        if (DAT_02f7c8bc == 2) {
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"Connection refused - computer is not a server");
          core_netgame_cpp_CNetGame_FUN_0053fd00(in_stack_00000004);
          return 0;
        }
      }
      else {
        if (DAT_02f7c8bc < 4) {
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"Connection refused - game is full");
          core_netgame_cpp_CNetGame_FUN_0053fd00(in_stack_00000004);
          return 0;
        }
        if (DAT_02f7c8bc == 4) {
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"Connection refused - already in the game");
          goto LAB_0053fb81;
        }
      }
      iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,1);
      if (iVar2 != 0) {
LAB_0053fb81:
        core_netgame_cpp_CNetGame_FUN_0053fd00(in_stack_00000004);
        return 0;
      }
    } while (-1 < *(int *)in_stack_00000004->padding);
  }
  core_netgame_cpp_CNetGame_FUN_0053fd00(in_stack_00000004);
  return 0;
}
