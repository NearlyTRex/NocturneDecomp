// Name: core_manpuz.cpp_CMirrorHack_updateInteraction_FUN_004cbd50
// Address: 004cbd50
// Address Range: [[004cbd50, 004cbda2]]
// Convention: unknown
// Signature: undefined4 core_manpuz_cpp_CMirrorHack_updateInteraction_FUN_004cbd50(int param_1,undefined4 *param_2,int param_3)

#include "nocturne.h"

uint core_manpuz_cpp_CMirrorHack_updateInteraction_FUN_004cbd50(int param_1,uint *param_2,int param_3)

{
  if (*(int *)(param_3 + 0xc) != 0) {
    *(uint *)(param_3 + 0xc) = 0;
    return 0;
  }
  if (*(int *)(param_3 + 0x10) == 0) {
    if ((uint *)(param_1 + 0x30) != param_2) {
      *(uint *)(param_1 + 0x30) = *param_2;
      *(uint *)(param_1 + 0x34) = param_2[1];
      *(uint *)(param_1 + 0x38) = param_2[2];
    }
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000(param_1);
    return 1;
  }
  *(uint *)(param_3 + 0x10) = 0;
  return 0;
}
