// Name: sound_mp3.cpp_calculateMainDataSize_FUN_0052a880
// Address: 0052a880
// Address Range: [[0052a880, 0052a95b]]
// Convention: __cdecl
// Signature: int __cdecl sound_mp3_cpp_calculateMainDataSize_FUN_0052a880(int *param_1)

#include "nocturne.h"

int __cdecl sound_mp3_cpp_calculateMainDataSize_FUN_0052a880(int *param_1)

{
  int *piVar1;
  float10 fVar2;
  int in_stack_00000014;
  int local_10;
  
  fVar2 = (float10)(*(int *)(&DAT_006203a0 + param_1[3] * 4 + *param_1 * 0xb4) * 0x90) /
          (float10)*(double *)(&DAT_006202e8 + param_1[4] * 8 + *param_1 * 0x20);
  piVar1 = (int *)round();
  local_10 = (int)ROUND(fVar2);
  if (*piVar1 == 0) {
    if (in_stack_00000014 == 1) {
      local_10 = local_10 / 2 + -9;
    }
    else {
      local_10 = local_10 / 2 + -0x11;
    }
  }
  else if (in_stack_00000014 == 1) {
    local_10 = local_10 + -0x11;
  }
  else {
    local_10 = local_10 + -0x20;
  }
  if (param_1[5] != 0) {
    local_10 = local_10 + 1;
  }
  if (param_1[2] == 0) {
    return local_10 + -4;
  }
  return local_10 + -6;
}
