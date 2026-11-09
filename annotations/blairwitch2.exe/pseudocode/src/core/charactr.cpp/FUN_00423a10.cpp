// Name: core_charactr.cpp_FUN_00423a10
// Address: 00423a10
// Address Range: [[00423a10, 00423a5f]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_00423a10(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_charactr_cpp_FUN_00423a10(int param_1,float param_2)

{
  if ((*(int *)(param_1 + 0x2814) == 0) && (*(int *)(param_1 + 0x256c) != 0)) {
    *(float *)(param_1 + 0x258c) = param_2 * _DAT_005ccc76 + *(float *)(param_1 + 0x258c);
    return;
  }
  *(uint *)(param_1 + 0x2590) = 0;
  *(uint *)(param_1 + 0x258c) = *(uint *)(param_1 + 0x2590);
  *(uint *)(param_1 + 0x2588) = *(uint *)(param_1 + 0x258c);
  return;
}
