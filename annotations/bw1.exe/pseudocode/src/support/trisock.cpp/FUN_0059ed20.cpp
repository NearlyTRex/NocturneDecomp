// Name: support_trisock.cpp_FUN_0059ed20
// Address: 0059ed20
// Address Range: [[0059ed20, 0059ed8a]]
// Convention: unknown
// Signature: void support_trisock_cpp_FUN_0059ed20(int param_1)

#include "nocturne.h"

void support_trisock_cpp_FUN_0059ed20(int param_1)

{
  *(uint *)(param_1 + 0x608) = 0;
  *(uint *)(param_1 + 0x60c) = 0;
  *(uint *)(param_1 + 0xa10) = 0;
  *(uint *)(param_1 + 0xa14) = 0;
  *(uint *)(param_1 + 0xd20) = 0;
  *(uint *)(param_1 + 0xd24) = 0;
  *(uint *)(param_1 + 0xd28) = 0;
  support_trisock_cpp_CSocket_closeSocket_FUN_0059cc40((CSocket *)(param_1 + 0xd2c));
  support_trisock_cpp_FUN_0059de90(param_1 + 0xd30);
  return;
}
