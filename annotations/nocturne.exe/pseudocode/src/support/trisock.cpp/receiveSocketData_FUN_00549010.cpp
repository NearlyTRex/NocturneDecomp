// Name: support_trisock.cpp_receiveSocketData_FUN_00549010
// Address: 00549010
// Address Range: [[00549010, 0054908a]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_receiveSocketData_FUN_00549010(_SOCKET *socket_handle,char *buffer,int length,SNetworkAddr *source_addr)

#include "nocturne.h"

int __cdecl support_trisock_cpp_receiveSocketData_FUN_00549010(_SOCKET *socket_handle,char *buffer,int length,SNetworkAddr *source_addr)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  byte bVar4;
  _SOCKET _Stack_44;
  char *pcStack_40;
  _SOCKET _Stack_3c;
  char *pcStack_38;
  byte *puStack_34;
  SNetworkAddr *pSStack_30;
  byte local_2c [24];
  uint local_14;
  
  bVar4 = 0;
  puStack_34 = local_2c;
  if (source_addr == (SNetworkAddr *)0x0) {
    pSStack_30 = source_addr;
    puStack_34 = (byte *)length;
    pcStack_38 = buffer;
    _Stack_3c = *socket_handle;
    pcStack_40 = (char *)0x549036;
    iVar2 = Ordinal_16();
  }
  else {
    pSStack_30 = (SNetworkAddr *)&local_14;
    pcStack_38 = (char *)0x0;
    _Stack_3c = length;
    local_14 = 0x10;
    pcStack_40 = buffer;
    _Stack_44 = *socket_handle;
    iVar2 = Ordinal_17();
    if (0 < iVar2) {
      puVar3 = (uint *)support_trisock_cpp_convertSockAddr_FUN_00548d50(&puStack_34,&_Stack_44);
      source_addr->ip_address = *puVar3;
      uVar1 = puVar3[(uint)bVar4 * -2 + 1];
      source_addr[-(uint)bVar4].port = (short)uVar1;
      source_addr[-(uint)bVar4].other = (short)(uVar1 >> 0x10);
      return iVar2;
    }
  }
  return iVar2;
}
