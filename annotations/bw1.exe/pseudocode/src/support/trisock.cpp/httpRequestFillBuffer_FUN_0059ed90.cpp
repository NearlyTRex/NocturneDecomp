// Name: support_trisock.cpp_httpRequestFillBuffer_FUN_0059ed90
// Address: 0059ed90
// Address Range: [[0059ed90, 0059ee53]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_httpRequestFillBuffer_FUN_0059ed90(void *request,int non_blocking)

#include "nocturne.h"

int __cdecl support_trisock_cpp_httpRequestFillBuffer_FUN_0059ed90(void *request,int non_blocking)

{
  int iVar1;
  uint local_c;
  
  *(uint *)((int)request + 0xa14) = 0;
  *(uint *)((int)request + 0xa10) = 0;
  local_c = 4;
  iVar1 = support_trisock_cpp_CSocket_isSocketValid_FUN_0059c970((CSocket *)((int)request + 0xd2c));
  if (iVar1 != 0) {
    local_c = support_trisock_cpp_CSocket_pollSocketStatus_FUN_0059ca30
                        ((CSocket *)((int)request + 0xd2c));
  }
  if ((local_c & 4) == 0) {
    iVar1 = support_trisock_cpp_CSocket_receiveSocketData_FUN_0059cb20
                      ((CSocket *)((int)request + 0xd2c),(char *)((int)request + 0x610),0x200,
                       (SNetworkAddr *)0x0);
    if (iVar1 == -2) {
      if (non_blocking != 0) {
        return -2;
      }
    }
    else if (-1 < iVar1) {
      *(int *)((int)request + 0xa14) = iVar1;
      return -4;
    }
  }
  _sprintf((char *)((int)request + 0xa18),"Error receiving %s from %s");
  *(uint *)((int)request + 0xd28) = 0xfffffffb;
  return -3;
}
