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
  float fVar6;
  float extraout_EAX;
  uint extraout_EDX;
  float10 in_ST0;
  float10 fVar7;
  float *in_stack_00000004;
  float *in_stack_00000008;
  float local_1c;
  float local_18;
  float local_10;
  
  fVar1 = *in_stack_00000008;
  fVar2 = in_stack_00000008[2];
  fVar5 = fVar2;
  fVar6 = fVar2;
  if (0.0 < in_stack_00000008[1]) {
    fVar5 = in_stack_00000008[1] * (float)0.0039215686274509803;
    fVar2 = (float)0.023529411764705899;
    crt_math_c_floor_FUN_005feb90((double)in_ST0);
    fVar7 = (float10)(double)CONCAT44 /* combine 2-byte values */(extraout_EDX,extraout_EAX);
    crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX,extraout_EAX));
    fVar3 = (1.0 - fVar5) * extraout_EAX;
    fVar2 = fVar1 * fVar2 - (float)(int)ROUND(fVar7);
    fVar1 = (1.0 - fVar5 * fVar2) * extraout_EAX;
    fVar4 = (1.0 - (1.0 - fVar2) * fVar5) * extraout_EAX;
    fVar2 = local_1c;
    fVar5 = local_18;
    fVar6 = local_10;
    switch(((int)ROUND(fVar7) + 600) % 6) {
    case 0:
      fVar2 = fVar3;
      fVar5 = extraout_EAX;
      fVar6 = fVar4;
      break;
    case 1:
      fVar2 = fVar3;
      fVar5 = fVar1;
      fVar6 = extraout_EAX;
      break;
    case 2:
      fVar2 = fVar4;
      fVar5 = fVar3;
      fVar6 = extraout_EAX;
      break;
    case 3:
      fVar2 = extraout_EAX;
      fVar5 = fVar3;
      fVar6 = fVar1;
      break;
    case 4:
      fVar2 = extraout_EAX;
      fVar5 = fVar4;
      fVar6 = fVar3;
      break;
    case 5:
      fVar2 = fVar1;
      fVar5 = extraout_EAX;
      fVar6 = fVar3;
    }
  }
  local_10 = fVar6;
  local_18 = fVar5;
  local_1c = fVar2;
  *in_stack_00000004 = local_18;
  in_stack_00000004[1] = local_10;
  in_stack_00000004[2] = local_1c;
  return in_stack_00000004;
}
