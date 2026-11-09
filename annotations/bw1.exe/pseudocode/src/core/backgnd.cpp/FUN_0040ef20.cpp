// Name: core_backgnd.cpp_FUN_0040ef20
// Address: 0040ef20
// Address Range: [[0040ef20, 0040ef5f]]
// Convention: unknown
// Signature: undefined8 core_backgnd_cpp_FUN_0040ef20(CDemonActor *param_1)

#include "nocturne.h"

ulonglong core_backgnd_cpp_FUN_0040ef20(CDemonActor *param_1)

{
  int iVar1;
  uint uVar2;
  
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_004688e0
            ((CKeyFramedModelInstance *)&param_1[1].field_0x4);
  core_actor_cpp_FUN_00408850(param_1);
  iVar1 = *(int *)&param_1[2].field_0x28;
  uVar2 = (uint)(iVar1 == 0);
  *(uint *)&param_1->field_0x100 = uVar2;
  return CONCAT44(iVar1,uVar2);
}
