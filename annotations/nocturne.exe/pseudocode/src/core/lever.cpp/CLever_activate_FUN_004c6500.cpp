// Name: core_lever.cpp_CLever_activate_FUN_004c6500
// Address: 004c6500
// Address Range: [[004c6500, 004c655d]]
// Convention: __cdecl
// Signature: void __cdecl core_lever_cpp_CLever_activate_FUN_004c6500(int param_1)

#include "nocturne.h"

void __cdecl core_lever_cpp_CLever_activate_FUN_004c6500(int param_1)

{
  *(uint *)(param_1 + 0x410) = 1;
  if (*(float *)(param_1 + 0x2d4) < (float)0.5) {
    *(uint *)(param_1 + 0x414) = 0x3f800000;
    return;
  }
  *(uint *)(param_1 + 0x414) = 0;
  return;
}
