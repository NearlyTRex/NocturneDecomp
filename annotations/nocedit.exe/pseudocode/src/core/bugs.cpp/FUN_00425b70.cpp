// Name: core_bugs.cpp_FUN_00425b70
// Address: 00425b70
// Address Range: [[00425b70, 00425cbc]]
// Convention: unknown
// Signature: undefined core_bugs.cpp_FUN_00425b70()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte actors_enemy_bugs.cpp_FUN_00425b70(uint param_1, uint param_2,
   uint param_3) */

uint core_bugs_cpp_FUN_00425b70(void)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  double dVar4;
  int in_stack_00000004;
  float in_stack_00000008;
  float in_stack_0000000c;
  
  fVar2 = 1.0 / _DAT_0065b5c8;
  fVar1 = *(float *)(in_stack_00000004 + 0x199f0);
  crt_math_c_round_FUN_005fe6b0
            ((double)((in_stack_00000008 - *(float *)(in_stack_00000004 + 0x199ec)) * fVar2));
  dVar4 = crt_math_c_round_FUN_005fe6b0((double)((in_stack_0000000c - fVar1) * fVar2));
  if ((-1 < (int)ROUND(dVar4)) && ((int)ROUND(dVar4) < 0xb)) {
    core_bugs_cpp_FUN_00427ba0();
    core_bugs_cpp_FUN_00427ba0();
    uVar3 = core_bugs_cpp_FUN_00427ba0();
    return uVar3;
  }
  uVar3 = core_bugs_cpp_FUN_00427ba0();
  return uVar3;
}
