// Name: support_trisock.cpp_httpRequestGetByte_FUN_0057b680
// Address: 0057b680
// Address Range: [[0057b680, 0057b770]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_httpRequestGetByte_FUN_0057b680(void *request,int non_blocking)

#include "nocturne.h"

int __cdecl support_trisock_cpp_httpRequestGetByte_FUN_0057b680(void *request,int non_blocking)

{
  byte bVar1;
  int iVar2;
  uint local_c;
  
  if (*(int *)((int)request + 0xa10) < *(int *)((int)request + 0xa14)) {
    bVar1 = *(byte *)((int)request + *(int *)((int)request + 0xa10) + 0x610);
    *(int *)((int)request + 0xa10) = *(int *)((int)request + 0xa10) + 1;
    return (uint)bVar1;
  }
  *(uint *)((int)request + 0xa14) = 0;
  *(uint *)((int)request + 0xa10) = 0;
  local_c = 4;
  iVar2 = support_trisock_cpp_CSocket_isSocketValid_FUN_00579090((CSocket *)((int)request + 0xd2c));
  if (iVar2 != 0) {
    local_c = support_trisock_cpp_CSocket_pollSocketStatus_FUN_00579150
                        ((CSocket *)((int)request + 0xd2c));
  }
  if ((local_c & 4) == 0) {
    iVar2 = support_trisock_cpp_CSocket_receiveSocketData_FUN_00579240
                      ((CSocket *)((int)request + 0xd2c),(char *)((int)request + 0x610),0x200,
                       (SNetworkAddr *)0x0);
    if (iVar2 == -2) {
      if (non_blocking != 0) {
        return -2;
      }
    }
    else if (-1 < iVar2) {
      *(int *)((int)request + 0xa14) = iVar2;
      return -1;
    }
  }
  _sprintf((char *)((int)request + 0xa18),"Error receiving %s from %s");
  *(uint *)((int)request + 0xd28) = 0xfffffffb;
  return -3;
}
