// Name: core_bugs.cpp_FUN_00425b70
// Address: 00425b70
// Address Range: [[00425b70, 00425cbc]]
// Convention: unknown
// Signature: undefined core_bugs.cpp_FUN_00425b70()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte actors_enemy_bugs.cpp_FUN_00425b70(uint param_1, uint param_2,
   uint param_3) */

uint
core_bugs_cpp_FUN_00425b70
          (uint param_1,uint param_2,uint param_3,uint param_4,int param_5,
          uint param_6,float param_7)

{
  uint uVar1;
  float10 fVar2;
  double value;
  
  fVar2 = ((float10)param_7 - (float10)*(float *)(param_5 + 0x199f0)) *
          ((float10)1 / (float10)_DAT_0065b5c8);
  value = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(param_2,param_1));
  crt_math_c_round_FUN_005fe6b0(value);
  if ((-1 < (int)ROUND(fVar2)) && ((int)ROUND(fVar2) < 0xb)) {
    core_bugs_cpp_FUN_00427ba0();
    core_bugs_cpp_FUN_00427ba0();
    uVar1 = core_bugs_cpp_FUN_00427ba0();
    return uVar1;
  }
  uVar1 = core_bugs_cpp_FUN_00427ba0();
  return uVar1;
}
