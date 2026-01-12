// Name: core_boneguy.cpp_FUN_0041b860
// Address: 0041b860
// Address Range: [[0041b860, 0041b8bd] [0041b9a3, 0041b9ab]]
// Convention: unknown
// Signature: undefined core_boneguy.cpp_FUN_0041b860()

#include "nocturne.h"

float * core_boneguy_cpp_FUN_0041b860(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *in_stack_00000004;
  float *in_stack_00000008;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float local_1c;
  
  fVar1 = *in_stack_00000008;
  fVar2 = in_stack_00000008[1];
  fVar3 = in_stack_00000008[2];
  local_1c = fVar1;
  if (fVar2 < fVar1) {
    local_1c = fVar2;
  }
  if (fVar3 < local_1c) {
    local_1c = fVar3;
  }
  fStack_2c = fVar1;
  if (fVar1 < fVar2) {
    fStack_2c = fVar2;
  }
  if (fStack_2c < fVar3) {
    fStack_2c = fVar3;
  }
  local_1c = fStack_2c - local_1c;
  if (fStack_2c <= 0.0) {
    fStack_34 = 0.0;
  }
  else {
    fStack_34 = local_1c / fStack_2c;
  }
  if (fStack_34 <= 0.0) {
    local_30 = 0.0;
  }
  else {
    fStack_34 = fStack_34 * (float)255;
    if (fVar1 == fStack_2c) {
      local_1c = (fVar2 - fVar3) / local_1c;
    }
    else if (fVar2 == fStack_2c) {
      local_1c = (float)2 - (fVar3 - fVar1) / local_1c;
    }
    else {
      local_1c = (fVar1 - fVar2) / local_1c + (float)4;
    }
    local_30 = local_1c * (float)42.5;
    if (local_30 < 0.0) {
      local_30 = local_30 + 255f;
    }
  }
  *in_stack_00000004 = local_30;
  in_stack_00000004[1] = fStack_34;
  in_stack_00000004[2] = fStack_2c;
  return in_stack_00000004;
}
