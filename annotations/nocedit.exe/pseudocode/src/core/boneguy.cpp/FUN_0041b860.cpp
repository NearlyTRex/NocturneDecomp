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
  float fStack_38;
  float fStack_34;
  float local_30;
  float local_20;
  
  fVar1 = *in_stack_00000008;
  fVar2 = in_stack_00000008[1];
  fVar3 = in_stack_00000008[2];
  local_20 = fVar1;
  if (fVar2 < fVar1) {
    local_20 = fVar2;
  }
  if (fVar3 < local_20) {
    local_20 = fVar3;
  }
  local_30 = fVar1;
  if (fVar1 < fVar2) {
    local_30 = fVar2;
  }
  if (local_30 < fVar3) {
    local_30 = fVar3;
  }
  local_20 = local_30 - local_20;
  if (local_30 <= 0.0) {
    fStack_38 = 0.0;
  }
  else {
    fStack_38 = local_20 / local_30;
  }
  if (fStack_38 <= 0.0) {
    fStack_34 = 0.0;
  }
  else {
    fStack_38 = fStack_38 * (float)255;
    if (fVar1 == local_30) {
      local_20 = (fVar2 - fVar3) / local_20;
    }
    else if (fVar2 == local_30) {
      local_20 = (float)2 - (fVar3 - fVar1) / local_20;
    }
    else {
      local_20 = (fVar1 - fVar2) / local_20 + (float)4;
    }
    fStack_34 = local_20 * (float)42.5;
    if (fStack_34 < 0.0) {
      fStack_34 = fStack_34 + 255f;
    }
  }
  *in_stack_00000004 = fStack_34;
  in_stack_00000004[1] = fStack_38;
  in_stack_00000004[2] = local_30;
  return in_stack_00000004;
}
