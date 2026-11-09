// Name: core_baron.cpp_FUN_00410510
// Address: 00410510
// Address Range: [[00410510, 0041053c]]
// Convention: unknown
// Signature: undefined4 core_baron_cpp_FUN_00410510(CBaronWeapon *param_1)

#include "nocturne.h"

uint core_baron_cpp_FUN_00410510(CBaronWeapon *param_1)

{
  core_baron_cpp_FUN_00410640(param_1);
  if (*(int *)&param_1->field_0x578 == 0) {
    return 0;
  }
  *(uint *)(*(int *)&param_1->field_0x578 + 0xc1e4) = 1;
  return 1;
}
