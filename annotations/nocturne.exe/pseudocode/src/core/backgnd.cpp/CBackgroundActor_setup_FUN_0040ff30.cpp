// Name: core_backgnd.cpp_CBackgroundActor_setup_FUN_0040ff30
// Address: 0040ff30
// Address Range: [[0040ff30, 0040ff6f]]
// Convention: unknown
// Signature: undefined8 core_backgnd_cpp_CBackgroundActor_setup_FUN_0040ff30(CDemonActor *param_1)

#include "nocturne.h"

ulonglong core_backgnd_cpp_CBackgroundActor_setup_FUN_0040ff30(CDemonActor *param_1)

{
  int iVar1;
  uint uVar2;
  
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510
            ((CKeyFramedModelInstance *)(param_1 + 1));
  core_actor_cpp_CDemonActor_setup_FUN_00409fc0(param_1);
  iVar1 = param_1[2].location.area_id;
  uVar2 = (uint)(iVar1 == 0);
  param_1->collision_disabled = uVar2;
  return CONCAT44(iVar1,uVar2);
}
