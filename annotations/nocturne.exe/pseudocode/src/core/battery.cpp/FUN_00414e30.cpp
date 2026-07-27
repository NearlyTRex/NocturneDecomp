// Name: core_battery.cpp_FUN_00414e30
// Address: 00414e30
// Address Range: [[00414e30, 00414e3e]]
// Convention: unknown
// Signature: void core_battery_cpp_FUN_00414e30(int param_1,undefined4 param_2)

#include "nocturne.h"

void core_battery_cpp_FUN_00414e30(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x2cc) = param_2;
  return;
}
