// Name: core_setutil.cpp_C3DSCamera_free_FUN_00541ac0
// Address: 00541ac0
// Address Range: [[00541ac0, 00541af9]]
// Convention: __cdecl
// Signature: void __cdecl core_setutil_cpp_C3DSCamera_free_FUN_00541ac0(int param_1)

#include "nocturne.h"

void __cdecl core_setutil_cpp_C3DSCamera_free_FUN_00541ac0(int param_1)

{
  if (*(int *)(param_1 + 0x198) == 0) {
    *(uint *)(param_1 + 0x194) = 0;
    return;
  }
  FUN_005a3770(*(int *)(param_1 + 0x198));
  *(uint *)(param_1 + 0x198) = 0;
  *(uint *)(param_1 + 0x194) = 0;
  return;
}
