// Name: core_manpuz.cpp_FUN_0050b180
// Address: 0050b180
// Address Range: [[0050b180, 0050b1ce]]
// Convention: unknown
// Signature: undefined core_manpuz.cpp_FUN_0050b180()

#include "nocturne.h"

/* Signature: byte actors_other_manpuz.cpp_FUN_0050b180(uint param_1) */

uint core_manpuz_cpp_FUN_0050b180(void)

{
  CDemonActor *in_stack_00000004;
  
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(in_stack_00000004);
  g_CGamePtr->field62_0x1f4 = 1;
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
            ((CKeyFramedModelInstance *)(in_stack_00000004 + 1),0.0,-1);
  g_CGamePtr->field62_0x1f4 = 0;
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_00000004);
  return 1;
}
