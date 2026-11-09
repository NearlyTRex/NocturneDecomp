// Name: support_trisock.cpp_convertSockAddr_FUN_0056f750
// Address: 0056f750
// Address Range: [[0056f750, 0056f7b4]]
// Convention: __cdecl
// Signature: undefined4 * __cdecl support_trisock_cpp_convertSockAddr_FUN_0056f750(undefined4 *param_1,short *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * __cdecl support_trisock_cpp_convertSockAddr_FUN_0056f750(uint *param_1,short *param_2)

{
  ushort uVar1;
  uint *puVar2;
  byte auStack_c [4];
  
  if (*param_2 != 2) {
    _DAT_01d71de0 = "..\\support\\trisock.cpp";
    _DAT_01d71de4 = 0xd8;
    core_main_c_FUN_004e4330("sockaddr is not of AF_INET family!");
  }
  uVar1 = ntohs(param_2[1]);
  *(ushort *)(param_1 + 1) = uVar1;
  puVar2 = (uint *)support_trisock_cpp_FUN_0056f4b0(auStack_c,param_2 + 2);
  *param_1 = *puVar2;
  return param_1;
}
