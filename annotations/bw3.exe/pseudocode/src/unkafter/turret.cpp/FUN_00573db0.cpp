// Name: unkafter_turret.cpp_FUN_00573db0
// Address: 00573db0
// Address Range: [[00573db0, 00573df1]]
// Convention: unknown
// Signature: undefined4 unkafter_turret_cpp_FUN_00573db0(int param_1)

#include "nocturne.h"

uint unkafter_turret_cpp_FUN_00573db0(int param_1)

{
  if (*(HANDLE *)(param_1 + 4) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 4));
    *(uint *)(param_1 + 4) = 0;
  }
  *(uint *)(param_1 + 0xc) = 0;
  *(uint *)(param_1 + 0x10) = 0;
  *(uint *)(param_1 + 8) = 0;
  support_trstream_cpp_FUN_00573e70(param_1);
  return 1;
}
