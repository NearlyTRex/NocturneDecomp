// Name: support_trisock.cpp_FUN_00570df0
// Address: 00570df0
// Address Range: [[00570df0, 00570e15]]
// Convention: unknown
// Signature: void support_trisock_cpp_FUN_00570df0(undefined1 *param_1,undefined4 param_2)

#include "nocturne.h"

void support_trisock_cpp_FUN_00570df0(byte *param_1,uint param_2)

{
  support_trisock_cpp_FUN_00570e80(param_1);
  *param_1 = 0;
  *(uint *)(param_1 + 0x100) = param_2;
  support_trisock_cpp_FUN_00570ea0(param_1);
  return;
}
