// Name: core_gabriela.cpp_FUN_004d6140
// Address: 004d6140
// Address Range: [[004d6140, 004d6198] [004d619e, 004d6223]]
// Convention: unknown
// Signature: undefined core_gabriela.cpp_FUN_004d6140()

#include "nocturne.h"

/* Signature: byte actors_hero_gabriella.cpp_FUN_004d6140(uint param_1) */

int core_gabriela_cpp_FUN_004d6140(void)

{
  float fVar1;
  float fVar2;
  int iVar3;
  CDemonActor *pCVar4;
  CCharacter *in_stack_00000004;
  
  iVar3 = core_charactr_cpp_CCharacter_renderOpaque_FUN_0042a2c0(in_stack_00000004);
  if (iVar3 != 0) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&in_stack_00000004->base_actor);
    core_cloth_cpp_FUN_0043bae0();
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
    if (((*(int *)(in_stack_00000004[2].cloth_data + 0x5388) != 0) &&
        ((**(code **)(*(int *)(*(int *)(in_stack_00000004[2].cloth_data + 0x5388) + 0x154) + 8))(),
        (float)0.90000000000000002 < *(float *)(in_stack_00000004[2].cloth_data + 0x54fc))) &&
       ((pCVar4 = core_actor_cpp_castToClassHash_FUN_0040c790
                            (*(CDemonActor **)(in_stack_00000004[2].cloth_data + 0x5388),
                             g_CDynamiteClassInfo.name_hash), pCVar4 == (CDemonActor *)0x0 ||
        (fVar1 = pCVar4[4].location.position.x, fVar2 = pCVar4[4].location.position.y,
        0.0 < SQRT(fVar2 * fVar2 +
                   *(float *)(pCVar4[4].actor_name + 0x1c) * *(float *)(pCVar4[4].actor_name + 0x1c)
                   + fVar1 * fVar1))))) {
      (**(code **)(*(int *)(*(int *)(in_stack_00000004[2].cloth_data + 0x5388) + 0x154) + 0x104))();
      return iVar3;
    }
  }
  return iVar3;
}
