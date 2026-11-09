// Name: core_drip.cpp_FUN_0046cf50
// Address: 0046cf50
// Address Range: [[0046cf50, 0046cfd9]]
// Convention: unknown
// Signature: void core_drip_cpp_FUN_0046cf50(int param_1)

#include "nocturne.h"

void core_drip_cpp_FUN_0046cf50(int param_1)

{
  uint uVar1;
  
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
            ((CKeyFramedModelInstance *)(param_1 + 0x2b4));
  *(uint *)(param_1 + 0x448) = 0;
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x454);
  *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x458);
  *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x45c);
  uVar1 = core_actor_cpp_FUN_0040cf60
                    (*(uint *)(param_1 + 0x43c),*(uint *)(param_1 + 0x440));
  *(uint *)(param_1 + 0x438) = uVar1;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
            ((CKeyFramedModelInstance *)0x1bd3848,"stalrock.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
            ((CKeyFramedModelInstance *)0x1bd3848);
  *(uint *)(param_1 + 0x494) = 0;
  return;
}
