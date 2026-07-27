// Name: core_dcamera.cpp_FUN_00448310
// Address: 00448310
// Address Range: [[00448310, 00448372]]
// Convention: unknown
// Signature: void core_dcamera_cpp_FUN_00448310(int param_1)

#include "nocturne.h"

void core_dcamera_cpp_FUN_00448310(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x140)) {
    do {
      iVar1 = iVar1 + 1;
      _memcpy(*(int *)(param_1 + 0x13c) << 2);
    } while (iVar1 < *(int *)(param_1 + 0x140));
  }
  return;
}
