// Name: support_trisock.cpp_FUN_00571d10
// Address: 00571d10
// Address Range: [[00571d10, 00571d7a]]
// Convention: unknown
// Signature: void support_trisock_cpp_FUN_00571d10(int param_1)

#include "nocturne.h"

void support_trisock_cpp_FUN_00571d10(int param_1)

{
  *(uint *)(param_1 + 0x608) = 0;
  *(uint *)(param_1 + 0x60c) = 0;
  *(uint *)(param_1 + 0xa10) = 0;
  *(uint *)(param_1 + 0xa14) = 0;
  *(uint *)(param_1 + 0xd20) = 0;
  *(uint *)(param_1 + 0xd24) = 0;
  *(uint *)(param_1 + 0xd28) = 0;
  support_trisock_cpp_CSocket_closeSocket_FUN_0056fc30((CSocket *)(param_1 + 0xd2c));
  support_trisock_cpp_FUN_00570e80(param_1 + 0xd30);
  return;
}
