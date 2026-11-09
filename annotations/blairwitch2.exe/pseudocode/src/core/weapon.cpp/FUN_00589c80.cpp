// Name: core_weapon.cpp_FUN_00589c80
// Address: 00589c80
// Address Range: [[00589c80, 00589d58]]
// Convention: unknown
// Signature: void core_weapon_cpp_FUN_00589c80(CDemonActor *param_1,float param_2)

#include "nocturne.h"

void core_weapon_cpp_FUN_00589c80(CDemonActor *param_1,float param_2)

{
  float fVar1;
  
  if ((0.0 < *(float *)&param_1[1].field_0x1a8) &&
     (fVar1 = *(float *)&param_1[1].field_0x1a8 - param_2, *(float *)&param_1[1].field_0x1a8 = fVar1
     , fVar1 < 0.0)) {
    *(uint *)&param_1[1].field_0x1a8 = 0;
  }
  if (((*(int *)&param_1[1].field_0x1ac == 0) && (*(int *)&param_1[1].field_0x17c == 0)) &&
     (0.0 < *(float *)&param_1[2].field_0x164)) {
    fVar1 = *(float *)&param_1[2].field_0x164 - param_2;
    *(float *)&param_1[2].field_0x164 = fVar1;
    if (fVar1 < 0.0) {
      *(uint *)&param_1[2].field_0x164 = 0;
    }
    core_box_cpp_CBox_process_FUN_005b2290((CBox *)&param_1[1].field_0x1b0,param_2);
    *(uint *)&param_1->field_0x20 = *(uint *)&param_1[1].field_0x1b0;
    *(uint *)&param_1->field_0x24 = *(uint *)&param_1[1].field_0x1b4;
    *(uint *)&param_1->field_0x28 = *(uint *)&param_1[1].field_0x1b8;
    if (&param_1->field_0x30 != &param_1[1].field_0x1bc) {
      *(uint *)&param_1->field_0x30 = *(uint *)&param_1[1].field_0x1bc;
      *(uint *)&param_1->field_0x34 = *(uint *)&param_1[1].field_0x1c0;
      *(uint *)&param_1->field_0x38 = *(uint *)&param_1[1].field_0x1c4;
    }
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0(param_1);
  return;
}
