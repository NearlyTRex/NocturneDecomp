// Name: core_dcamera.cpp_CDemonCamera_free_FUN_004401d0
// Address: 004401d0
// Address Range: [[004401d0, 00440234]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_free_FUN_004401d0(int param_1)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_free_FUN_004401d0(int param_1)

{
  if (*(int *)(param_1 + 0x160) != 0) {
    FUN_005638d0(*(int *)(param_1 + 0x160));
  }
  *(uint *)(param_1 + 0x160) = 0;
  *(uint *)(param_1 + 0x158) = 0;
  if (*(int *)(param_1 + 0x164) != 0) {
    FUN_005638d0(*(int *)(param_1 + 0x164));
  }
  *(uint *)(param_1 + 0x164) = 0;
  *(uint *)(param_1 + 0x1d0) = 0;
  *(uint *)(param_1 + 0x15c) = 0;
  return;
}
