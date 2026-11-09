// Name: core_manpuz.cpp_FUN_005064c0
// Address: 005064c0
// Address Range: [[005064c0, 0050650e]]
// Convention: unknown
// Signature: undefined4 core_manpuz_cpp_FUN_005064c0(CDemonActor *param_1)

#include "nocturne.h"

uint core_manpuz_cpp_FUN_005064c0(CDemonActor *param_1)

{
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004087b0(param_1);
  *(uint *)&g_CGamePtr->field_0x210 = 1;
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0
            ((CKeyFramedModelInstance *)(param_1 + 1),0.0,-1);
  *(uint *)&g_CGamePtr->field_0x210 = 0;
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0(param_1);
  return 1;
}
