// Name: core_backgnd.cpp_FUN_0040f3a0
// Address: 0040f3a0
// Address Range: [[0040f3a0, 0040f3df]]
// Convention: unknown
// Signature: undefined8 core_backgnd_cpp_FUN_0040f3a0(CDemonActor *param_1)

#include "nocturne.h"

ulonglong core_backgnd_cpp_FUN_0040f3a0(CDemonActor *param_1)

{
  int iVar1;
  uint uVar2;
  
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
            ((CKeyFramedModelInstance *)&param_1[1].field_0x4);
  core_actor_cpp_FUN_00408a80(param_1);
  iVar1 = *(int *)&param_1[1].field_0x180;
  uVar2 = (uint)(iVar1 == 0);
  *(uint *)&param_1->field_0x100 = uVar2;
  return CONCAT44(iVar1,uVar2);
}
