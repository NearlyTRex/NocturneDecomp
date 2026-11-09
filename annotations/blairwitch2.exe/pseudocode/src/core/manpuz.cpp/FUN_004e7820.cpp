// Name: core_manpuz.cpp_FUN_004e7820
// Address: 004e7820
// Address Range: [[004e7820, 004e786e]]
// Convention: unknown
// Signature: undefined4 core_manpuz_cpp_FUN_004e7820(CDemonActor *param_1)

#include "nocturne.h"

uint core_manpuz_cpp_FUN_004e7820(CDemonActor *param_1)

{
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0(param_1);
  *(uint *)&g_CGamePtr->field_0x210 = 1;
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
            ((CKeyFramedModelInstance *)(param_1 + 1),0.0,-1);
  *(uint *)&g_CGamePtr->field_0x210 = 0;
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10(param_1);
  return 1;
}
