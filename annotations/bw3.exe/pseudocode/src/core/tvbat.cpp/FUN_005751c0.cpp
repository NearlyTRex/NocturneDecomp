// Name: core_tvbat.cpp_FUN_005751c0
// Address: 005751c0
// Address Range: [[005751c0, 00575224]]
// Convention: unknown
// Signature: void core_tvbat_cpp_FUN_005751c0(CEnemy *param_1)

#include "nocturne.h"

void core_tvbat_cpp_FUN_005751c0(CEnemy *param_1)

{
  uint uVar1;
  
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00462580
            ((CKeyFramedModelInstance *)&param_1[1].field_0x4);
  core_enemy_cpp_CEnemy_setup_FUN_00489110(param_1);
  *(uint *)&param_1->field_0x2538 = 0x41200000;
  *(uint *)&param_1[1].field_0x234 = 0;
  *(uint *)&param_1[1].field_0x22c = 0;
  uVar1 = core_actor_cpp_FUN_0040ce40
                    (*(uint *)&param_1[1].field_0x224,*(uint *)&param_1[1].field_0x228);
  *(uint *)&param_1[1].field_0x230 = uVar1;
  return;
}
