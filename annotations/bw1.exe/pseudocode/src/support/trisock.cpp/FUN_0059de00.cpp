// Name: support_trisock.cpp_FUN_0059de00
// Address: 0059de00
// Address Range: [[0059de00, 0059de25]]
// Convention: unknown
// Signature: void support_trisock_cpp_FUN_0059de00(undefined1 *param_1,undefined4 param_2)

#include "nocturne.h"

void support_trisock_cpp_FUN_0059de00(byte *param_1,uint param_2)

{
  support_trisock_cpp_FUN_0059de90(param_1);
  *param_1 = 0;
  *(uint *)(param_1 + 0x100) = param_2;
  support_trisock_cpp_FUN_0059deb0(param_1);
  return;
}
