// Name: core_setutil.cpp_FUN_00514430
// Address: 00514430
// Address Range: [[00514430, 00514469]]
// Convention: unknown
// Signature: void core_setutil_cpp_FUN_00514430(int param_1)

#include "nocturne.h"

void core_setutil_cpp_FUN_00514430(int param_1)

{
  if (*(int *)(param_1 + 0x194) == 0) {
    *(uint *)(param_1 + 400) = 0;
    return;
  }
  FUN_005638d0(*(int *)(param_1 + 0x194));
  *(uint *)(param_1 + 0x194) = 0;
  *(uint *)(param_1 + 400) = 0;
  return;
}
