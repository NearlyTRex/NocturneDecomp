// Name: core_boneguy.cpp_FUN_0041ba10
// Address: 0041ba10
// Address Range: [[0041ba10, 0041bbb7]]
// Convention: unknown
// Signature: undefined core_boneguy.cpp_FUN_0041ba10()

#include "nocturne.h"

float * core_boneguy_cpp_FUN_0041ba10(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *extraout_EBX;
  double dVar6;
  float *in_stack_00000004;
  float *in_stack_00000008;
  float local_30;
  float local_1c;
  float local_18;
  float local_10;
  
  fVar1 = in_stack_00000008[1];
  fVar5 = in_stack_00000008[2];
  if (0.0 < fVar1) {
    fVar4 = *in_stack_00000008 * (float)0.023529411764705899;
    dVar6 = crt_math_c_floor_FUN_005feb90((double)fVar4);
    dVar6 = crt_math_c_round_FUN_005fe6b0(dVar6);
    fVar2 = (1.0 - local_30) * fVar4;
    fVar1 = fVar1 - (float)(int)ROUND(dVar6);
    fVar3 = (1.0 - local_30 * fVar1) * fVar4;
    fVar1 = (1.0 - (1.0 - fVar1) * local_30) * fVar4;
    in_stack_00000004 = extraout_EBX;
    fVar5 = local_1c;
    switch(((int)ROUND(dVar6) + 600) % 6) {
    case 0:
      fVar5 = fVar2;
      local_18 = fVar4;
      local_10 = fVar1;
      break;
    case 1:
      fVar5 = fVar2;
      local_18 = fVar3;
      local_10 = fVar4;
      break;
    case 2:
      fVar5 = fVar1;
      local_18 = fVar2;
      local_10 = fVar4;
      break;
    case 3:
      fVar5 = fVar4;
      local_18 = fVar2;
      local_10 = fVar3;
      break;
    case 4:
      fVar5 = fVar4;
      local_18 = fVar1;
      local_10 = fVar2;
      break;
    case 5:
      fVar5 = fVar3;
      local_18 = fVar4;
      local_10 = fVar2;
    }
  }
  local_1c = fVar5;
  *in_stack_00000004 = local_18;
  in_stack_00000004[1] = local_10;
  in_stack_00000004[2] = local_1c;
  return in_stack_00000004;
}
