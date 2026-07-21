// Name: core_vampboss.cpp_CVampireBoss_transformToBat_FUN_0054e1a0
// Address: 0054e1a0
// Address Range: [[0054e1a0, 0054e1d4]]
// Convention: __cdecl
// Signature: void __cdecl core_vampboss_cpp_CVampireBoss_transformToBat_FUN_0054e1a0(int param_1)

#include "nocturne.h"

void __cdecl core_vampboss_cpp_CVampireBoss_transformToBat_FUN_0054e1a0(int param_1)

{
  *(uint *)(param_1 + 0xbe168) = 1;
  *(uint *)(param_1 + 0xbedac) = 1;
  *(uint *)(param_1 + 0xbed9c) = 0x40000000;
  (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"voicubat.wav");
  return;
}
