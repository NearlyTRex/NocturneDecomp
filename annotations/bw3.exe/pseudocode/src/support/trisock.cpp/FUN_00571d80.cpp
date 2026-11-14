// Name: support_trisock.cpp_FUN_00571d80
// Address: 00571d80
// Address Range: [[00571d80, 00571e43]]
// Convention: unknown
// Signature: undefined4 support_trisock_cpp_FUN_00571d80(int param_1,int param_2)

#include "nocturne.h"

uint support_trisock_cpp_FUN_00571d80(int param_1,int param_2)

{
  int iVar1;
  uint local_c;
  
  *(uint *)(param_1 + 0xa14) = 0;
  *(uint *)(param_1 + 0xa10) = 0;
  local_c = 4;
  iVar1 = support_trisock_cpp_CSocket_isSocketValid_FUN_0056f960((CSocket *)(param_1 + 0xd2c));
  if (iVar1 != 0) {
    local_c = support_trisock_cpp_FUN_0056fa20((CSocket *)(param_1 + 0xd2c));
  }
  if ((local_c & 4) == 0) {
    iVar1 = support_trisock_cpp_CSocket_receiveSocketData_FUN_0056fb10
                      ((CSocket *)(param_1 + 0xd2c),(char *)(param_1 + 0x610),0x200,
                       (SNetworkAddr *)0x0);
    if (iVar1 == -2) {
      if (param_2 != 0) {
        return 0xfffffffe;
      }
    }
    else if (-1 < iVar1) {
      *(int *)(param_1 + 0xa14) = iVar1;
      return 0xfffffffc;
    }
  }
  _sprintf((char *)(param_1 + 0xa18),"Error receiving %s from %s");
  *(uint *)(param_1 + 0xd28) = 0xfffffffb;
  return 0xfffffffd;
}
