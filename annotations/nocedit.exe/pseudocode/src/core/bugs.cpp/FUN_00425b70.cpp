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
  uint uVar1;
  float10 fVar2;
  double dVar3;
  int in_stack_00000004;
  float in_stack_00000008;
  float in_stack_0000000c;
  
  fVar2 = ((float10)in_stack_0000000c - (float10)*(float *)(in_stack_00000004 + 0x199f0)) *
          ((float10)1 / (float10)_DAT_0065b5c8);
  crt_math_c_round_FUN_005fe6b0
            ((double)(float)(((float10)in_stack_00000008 -
                             (float10)*(float *)(in_stack_00000004 + 0x199ec)) *
                            ((float10)1 / (float10)_DAT_0065b5c8)));
  dVar3 = crt_math_c_round_FUN_005fe6b0((double)fVar2);
  if ((-1 < (int)ROUND(dVar3)) && ((int)ROUND(dVar3) < 0xb)) {
    core_bugs_cpp_FUN_00427ba0();
    core_bugs_cpp_FUN_00427ba0();
    uVar1 = core_bugs_cpp_FUN_00427ba0();
    return uVar1;
  }
  uVar1 = core_bugs_cpp_FUN_00427ba0();
  return uVar1;
}
