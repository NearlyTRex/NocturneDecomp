// Name: support_trisock.cpp_createNetworkAddr_FUN_00578e60
// Address: 00578e60
// Address Range: [[00578e60, 00578e72]]
// Convention: __cdecl
// Signature: void __cdecl support_trisock_cpp_createNetworkAddr_FUN_00578e60(undefined4 *param_1,undefined4 param_2,undefined2 param_3)

#include "nocturne.h"

void __cdecl support_trisock_cpp_createNetworkAddr_FUN_00578e60(uint *param_1,uint param_2,ushort param_3)

{
  *param_1 = param_2;
  *(ushort *)(param_1 + 1) = param_3;
  return;
}
