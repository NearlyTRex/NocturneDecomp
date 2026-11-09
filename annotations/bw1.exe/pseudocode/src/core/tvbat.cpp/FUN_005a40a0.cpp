// Name: core_tvbat.cpp_FUN_005a40a0
// Address: 005a40a0
// Address Range: [[005a40a0, 005a4104]]
// Convention: unknown
// Signature: void core_tvbat_cpp_FUN_005a40a0(CEnemy *param_1)

#include "nocturne.h"

void core_tvbat_cpp_FUN_005a40a0(CEnemy *param_1)

{
  uint uVar1;
  
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_004688e0
            ((CKeyFramedModelInstance *)&param_1[1].field_0x4);
  core_enemy_cpp_CEnemy_setup_FUN_004a0510(param_1);
  *(uint *)&param_1->field_0x2538 = 0x41200000;
  *(uint *)&param_1[1].field_0x234 = 0;
  *(uint *)&param_1[1].field_0x22c = 0;
  uVar1 = core_actor_cpp_FUN_0040cc00
                    (*(uint *)&param_1[1].field_0x224,*(uint *)&param_1[1].field_0x228);
  *(uint *)&param_1[1].field_0x230 = uVar1;
  return;
}
