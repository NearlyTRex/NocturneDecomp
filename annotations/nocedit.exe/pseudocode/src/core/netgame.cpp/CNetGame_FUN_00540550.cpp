// Name: core_netgame.cpp_CNetGame_FUN_00540550
// Address: 00540550
// Address Range: [[00540550, 005405ac]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_FUN_00540550(CNetGame *this_ptr)

#include "nocturne.h"

void __cdecl core_netgame_cpp_CNetGame_FUN_00540550(CNetGame *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = support_trisock_cpp_isSocketValid_FUN_005e1b70(&this_ptr->socket);
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
                        (&this_ptr->socket,(char *)&g_NetworkPacketSize,0x405,(SNetworkAddr *)0x0);
      if (iVar3 < 1) {
        g_ForceMessagePump = iVar1;
        return;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x14);
  } while( true );
}
