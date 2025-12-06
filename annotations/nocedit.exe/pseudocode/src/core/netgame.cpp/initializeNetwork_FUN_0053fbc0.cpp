// Name: core_netgame.cpp_initializeNetwork_FUN_0053fbc0
// Address: 0053fbc0
// Address Range: [[0053fbc0, 0053fcfa]]
// Convention: unknown
// Signature: undefined core_netgame.cpp_initializeNetwork_FUN_0053fbc0()

#include "nocturne.h"

uint core_netgame_cpp_initializeNetwork_FUN_0053fbc0(void)

{
  SSocketContext *socket_ctx;
  int iVar1;
  int in_stack_00000004;
  
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Initializing network...");
  socket_ctx = (SSocketContext *)(in_stack_00000004 + 0x170);
  support_trisock_cpp_bindAndInvalidateSocket_FUN_005e1d20(socket_ctx);
  iVar1 = support_trisock_cpp_createUDPSocket_FUN_005e1b40(socket_ctx);
  if (iVar1 == 0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't create datagram socket");
    return 0;
  }
  iVar1 = support_trisock_cpp_setSocketBlocking_FUN_005e1e50((SOCKET *)socket_ctx,0);
  if (iVar1 == 0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't turn off blocking mode for socket");
    return 0;
  }
  iVar1 = support_trisock_cpp_bindSocket_FUN_005e1b80((uint16_t)socket_ctx,(SOCKET *)0x1ddf);
  if (iVar1 == 0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't bind UDP socket");
    return 0;
  }
  iVar1 = support_trisock_cpp_getSocketName_FUN_005e1df0
                    ((SOCKET *)socket_ctx,
                     (SNetworkAddr *)
                     (*(int *)(in_stack_00000004 + 0x114) * 0x78 + in_stack_00000004 + 0x3c));
  if (iVar1 != 0) {
    core_netgame_cpp_FUN_00540550();
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
