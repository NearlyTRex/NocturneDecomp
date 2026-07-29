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
  SOCKADDR_IN *pSVar3;
  byte bVar4;
  byte auStack_44 [12];
  uint uStack_38;
  ulonglong uStack_34;
  byte local_2c [24];
  uint local_14;
  
  bVar4 = 0;
  uStack_34._0_4_ = local_2c;
  if (source_addr == (SNetworkAddr *)0x0) {
    uStack_34._4_4_ = source_addr;
    uStack_34._0_4_ = (byte *)length;
    uStack_38 = buffer;
    auStack_44._8_4_ = *socket_handle;
    auStack_44._4_4_ = 0x549036;
    iVar2 = Ordinal_16();
  }
  else {
    uStack_34._4_4_ = (SNetworkAddr *)&local_14;
    uStack_38._0_1_ = '\0';
    uStack_38._1_1_ = '\0';
    uStack_38._2_1_ = '\0';
    uStack_38._3_1_ = '\0';
    auStack_44._8_4_ = length;
    local_14 = 0x10;
    auStack_44._4_4_ = buffer;
    auStack_44._0_4_ = *socket_handle;
    iVar2 = Ordinal_17();
    if (0 < iVar2) {
      pSVar3 = support_trisock_cpp_convertSockAddr_FUN_00548d50
                         ((SNetworkAddr *)&uStack_34,(SOCKADDR *)auStack_44);
      source_addr->ip_address = *(uint *)pSVar3;
      uVar1 = *(uint *)((int)pSVar3 + (uint)bVar4 * -8 + 4);
      source_addr[-(uint)bVar4].port = (short)uVar1;
      source_addr[-(uint)bVar4].other = (short)((uint)uVar1 >> 0x10);
      return iVar2;
    }
  }
  return iVar2;
}
