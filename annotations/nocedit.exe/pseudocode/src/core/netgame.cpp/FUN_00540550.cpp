// Name: core_netgame.cpp_FUN_00540550
// Address: 00540550
// Address Range: [[00540550, 005405ac]]
// Convention: unknown
// Signature: void core_netgame_cpp_FUN_00540550(void)

#include "nocturne.h"

void core_netgame_cpp_FUN_00540550(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_stack_00000004;
  
  iVar2 = support_trisock_cpp_isSocketValid_FUN_005e1b70
                    ((SSocketContext *)(in_stack_00000004 + 0x170));
  iVar1 = g_ForceMessagePump;
  if (iVar2 == 0) {
    return;
  }
  g_ForceMessagePump = 0;
  do {
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    iVar2 = 0;
    do {
      iVar3 = support_trisock_cpp_receiveSocketData_FUN_005e1c20
                        ((SSocketContext *)(in_stack_00000004 + 0x170),(char *)&g_NetworkPacketSize,
                         0x405,(SNetworkAddr *)0x0);
      if (iVar3 < 1) {
        g_ForceMessagePump = iVar1;
        return;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x14);
  } while( true );
}
