// Name: support_trisock.cpp_FUN_0059ca30
// Address: 0059ca30
// Address Range: [[0059ca30, 0059cb14]]
// Convention: unknown
// Signature: byte support_trisock_cpp_FUN_0059ca30(CSocket *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte support_trisock_cpp_FUN_0059ca30(CSocket *param_1)

{
  int iVar1;
  byte bVar2;
  fd_set local_318;
  fd_set local_214;
  fd_set local_110;
  timeval local_c;
  
  bVar2 = 0;
  iVar1 = support_trisock_cpp_CSocket_isSocketValid_FUN_0059c970(param_1);
  if (iVar1 == 0) {
    return 4;
  }
  local_214.fd_count = 1;
  local_214.fd_array[0] = param_1->handle;
  local_318.fd_count = 1;
  local_318.fd_array[0] = param_1->handle;
  local_110.fd_count = 1;
  local_110.fd_array[0] = param_1->handle;
  local_c.tv_sec = _DAT_02c8ae50;
  (&local_c)[-(uint)bVar2].tv_usec = *(long *)(&DAT_02c8ae54 + (uint)bVar2 * -8);
  select(0,&local_214,&local_318,&local_110,&local_c);
  iVar1 = __WSAFDIsSet(param_1->handle,&local_214);
  bVar2 = iVar1 != 0;
  iVar1 = __WSAFDIsSet(param_1->handle,&local_318);
  if (iVar1 != 0) {
    bVar2 = bVar2 | 2;
  }
  iVar1 = __WSAFDIsSet(param_1->handle,&local_110);
  if (iVar1 != 0) {
    bVar2 = bVar2 | 4;
  }
  return bVar2;
}
