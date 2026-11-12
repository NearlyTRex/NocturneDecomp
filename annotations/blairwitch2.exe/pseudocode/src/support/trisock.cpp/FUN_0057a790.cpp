// Name: support_trisock.cpp_FUN_0057a790
// Address: 0057a790
// Address Range: [[0057a790, 0057a7b5]]
// Convention: unknown
// Signature: void support_trisock_cpp_FUN_0057a790(undefined1 *param_1,undefined4 param_2)

#include "nocturne.h"

void support_trisock_cpp_FUN_0057a790(byte *param_1,uint param_2)

{
  support_trisock_cpp_FUN_0057a820(param_1);
  *param_1 = 0;
  *(uint *)(param_1 + 0x100) = param_2;
  support_trisock_cpp_FUN_0057a840(param_1);
  return;
}
