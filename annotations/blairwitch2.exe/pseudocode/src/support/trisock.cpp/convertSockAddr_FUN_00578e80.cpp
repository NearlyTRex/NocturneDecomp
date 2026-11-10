// Name: support_trisock.cpp_convertSockAddr_FUN_00578e80
// Address: 00578e80
// Address Range: [[00578e80, 00578ee4]]
// Convention: __cdecl
// Signature: uint * __cdecl support_trisock_cpp_convertSockAddr_FUN_00578e80(uint *param_1,short *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * __cdecl support_trisock_cpp_convertSockAddr_FUN_00578e80(uint *param_1,short *param_2)

{
  ushort uVar1;
  uint *puVar2;
  uint uStack_c;
  
  if (*param_2 != 2) {
    _DAT_01d046a0 = "..\\support\\trisock.cpp";
    _DAT_01d046a4 = 0xd6;
    core_main_c_FUN_004e4500("sockaddr is not of AF_INET family!");
  }
  uVar1 = ntohs(param_2[1]);
  *(ushort *)(param_1 + 1) = uVar1;
  puVar2 = support_trisock_cpp_copyIPAddress_FUN_00578be0(&uStack_c,(uint *)(param_2 + 2));
  *param_1 = *puVar2;
  return param_1;
}
