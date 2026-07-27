// Name: cockpit_pkbmpset.cpp_FUN_004f5c40
// Address: 004f5c40
// Address Range: [[004f5c40, 004f5c5f]]
// Convention: unknown
// Signature: void cockpit_pkbmpset_cpp_FUN_004f5c40(int param_1,undefined4 param_2)

#include "nocturne.h"

void cockpit_pkbmpset_cpp_FUN_004f5c40(int param_1,uint param_2)

{
  _strncpy(param_1 + 8,param_2,0x13);
  *(byte *)(param_1 + 0x1b) = 0;
  return;
}
