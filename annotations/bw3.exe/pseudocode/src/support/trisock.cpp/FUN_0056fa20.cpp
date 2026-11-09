// Name: support_trisock.cpp_FUN_0056fa20
// Address: 0056fa20
// Address Range: [[0056fa20, 0056fb04]]
// Convention: unknown
// Signature: byte support_trisock_cpp_FUN_0056fa20(CSocket *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte support_trisock_cpp_FUN_0056fa20(CSocket *param_1)

{
  int iVar1;
  byte bVar2;
  fd_set local_318;
  fd_set local_214;
  fd_set local_110;
  timeval local_c;
  
  bVar2 = 0;
  iVar1 = support_trisock_cpp_CSocket_isSocketValid_FUN_0056f960(param_1);
  if (iVar1 == 0) {
    return 4;
  }
  local_214.fd_count = 1;
  local_214.fd_array[0] = *(SOCKET *)param_1;
  local_318.fd_count = 1;
  local_318.fd_array[0] = *(SOCKET *)param_1;
  local_110.fd_count = 1;
  local_110.fd_array[0] = *(SOCKET *)param_1;
  local_c.tv_sec = _DAT_02cfd8a0;
  (&local_c)[-(uint)bVar2].tv_usec = *(long *)(&DAT_02cfd8a4 + (uint)bVar2 * -8);
  select(0,&local_214,&local_318,&local_110,&local_c);
  iVar1 = __WSAFDIsSet(*(SOCKET *)param_1,&local_214);
  bVar2 = iVar1 != 0;
  iVar1 = __WSAFDIsSet(*(SOCKET *)param_1,&local_318);
  if (iVar1 != 0) {
    bVar2 = bVar2 | 2;
  }
  iVar1 = __WSAFDIsSet(*(SOCKET *)param_1,&local_110);
  if (iVar1 != 0) {
    bVar2 = bVar2 | 4;
  }
  return bVar2;
}
