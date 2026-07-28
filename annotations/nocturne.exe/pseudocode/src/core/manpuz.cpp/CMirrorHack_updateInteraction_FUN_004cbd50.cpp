// Name: core_manpuz.cpp_CMirrorHack_updateInteraction_FUN_004cbd50
// Address: 004cbd50
// Address Range: [[004cbd50, 004cbda2]]
// Convention: unknown
// Signature: undefined4 core_manpuz_cpp_CMirrorHack_updateInteraction_FUN_004cbd50(CDemonActor *param_1,float *param_2,int param_3)

#include "nocturne.h"

uint core_manpuz_cpp_CMirrorHack_updateInteraction_FUN_004cbd50(CDemonActor *param_1,float *param_2,int param_3)

{
  if (*(int *)(param_3 + 0xc) != 0) {
    *(uint *)(param_3 + 0xc) = 0;
    return 0;
  }
  if (*(int *)(param_3 + 0x10) == 0) {
    if (&param_1->orient != (UOrientationVector *)param_2) {
      (param_1->orient).vec.x = *param_2;
      (param_1->orient).vec.y = param_2[1];
      (param_1->orient).vec.z = param_2[2];
    }
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000(param_1);
    return 1;
  }
  *(uint *)(param_3 + 0x10) = 0;
  return 0;
}
