// Name: core_baal.cpp_FUN_00597940
// Address: 00597940
// Address Range: [[00597940, 0059796c]]
// Convention: unknown
// Signature: void core_baal_cpp_FUN_00597940(CCharacter *param_1)

#include "nocturne.h"

void core_baal_cpp_FUN_00597940(CCharacter *param_1)

{
  if (*(int *)&param_1->field_0x33a0 < 1) {
    core_charactr_cpp_FUN_0042e220(param_1);
    return;
  }
  core_charactr_cpp_FUN_0042f6f0(param_1);
  core_charactr_cpp_FUN_0042e220(param_1);
  return;
}
