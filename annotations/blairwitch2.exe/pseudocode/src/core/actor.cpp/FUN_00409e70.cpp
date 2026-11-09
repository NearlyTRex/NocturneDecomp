// Name: core_actor.cpp_FUN_00409e70
// Address: 00409e70
// Address Range: [[00409e70, 00409ebf]]
// Convention: unknown
// Signature: void core_actor_cpp_FUN_00409e70(CDemonActor *param_1,undefined4 *param_2,undefined4 *param_3)

#include "nocturne.h"

void core_actor_cpp_FUN_00409e70(CDemonActor *param_1,uint *param_2,uint *param_3)

{
  *(uint *)&param_1->field_0x20 = *param_2;
  *(uint *)&param_1->field_0x24 = param_2[1];
  *(uint *)&param_1->field_0x28 = param_2[2];
  if ((uint *)&param_1->field_0x30 != param_3) {
    *(uint *)&param_1->field_0x30 = *param_3;
    *(uint *)&param_1->field_0x34 = param_3[1];
    *(uint *)&param_1->field_0x38 = param_3[2];
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0(param_1);
  return;
}
