// Name: core_tvbat.cpp_FUN_00580450
// Address: 00580450
// Address Range: [[00580450, 005804b4]]
// Convention: unknown
// Signature: void core_tvbat_cpp_FUN_00580450(CEnemy *param_1)

#include "nocturne.h"

void core_tvbat_cpp_FUN_00580450(CEnemy *param_1)

{
  uint uVar1;
  
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
            ((CKeyFramedModelInstance *)&param_1[1].field_0x4);
  core_enemy_cpp_CEnemy_setup_FUN_00487eb0(param_1);
  *(uint *)&param_1->field_0x25a8 = 0x41200000;
  *(uint *)&param_1[1].field_0x234 = 0;
  *(uint *)&param_1[1].field_0x22c = 0;
  uVar1 = core_actor_cpp_FUN_0040cf60
                    (*(uint *)&param_1[1].field_0x224,*(uint *)&param_1[1].field_0x228);
  *(uint *)&param_1[1].field_0x230 = uVar1;
  return;
}
