// Name: core_setutil.cpp_C3DSLight_reset_FUN_00515800
// Address: 00515800
// Address Range: [[00515800, 00515886]]
// Convention: __cdecl
// Signature: void __cdecl core_setutil_cpp_C3DSLight_reset_FUN_00515800(int param_1)

#include "nocturne.h"

void __cdecl core_setutil_cpp_C3DSLight_reset_FUN_00515800(int param_1)

{
  *(uint *)(param_1 + 0x1808) = 0x100;
  *(uint *)(param_1 + 0x180c) = 0x100;
  *(uint *)(param_1 + 0x11e0) = 0x3f800000;
  *(uint *)(param_1 + 0x11e4) = 0x3f800000;
  *(uint *)(param_1 + 0x11e8) = 0;
  *(uint *)(param_1 + 0x1890) = 0;
  *(uint *)(param_1 + 0x1894) = 0;
  *(uint *)(param_1 + 0x11d0) = 0;
  *(uint *)(param_1 + 0x11d4) = 0;
  *(uint *)(param_1 + 0x11c) = 0x41e00000;
  *(uint *)(param_1 + 0x120) = 0x3f800000;
  *(uint *)(param_1 + 0x124) = 0x3f800000;
  *(uint *)(param_1 + 0x11ec) = 0;
  return;
}
