// Name: core_baron.cpp_FUN_00410990
// Address: 00410990
// Address Range: [[00410990, 004109bc]]
// Convention: unknown
// Signature: undefined4 core_baron_cpp_FUN_00410990(CBaronWeapon *param_1)

#include "nocturne.h"

uint core_baron_cpp_FUN_00410990(CBaronWeapon *param_1)

{
  core_baron_cpp_FUN_00410ac0(param_1);
  if (*(int *)&param_1->field_0x6d4 == 0) {
    return 0;
  }
  *(uint *)(*(int *)&param_1->field_0x6d4 + 0x10a74) = 1;
  return 1;
}
