// Name: core_gabriela.cpp_CGabriella_renderOpaque_FUN_00498cc0
// Address: 00498cc0
// Address Range: [[00498cc0, 00498da3]]
// Convention: unknown
// Signature: int core_gabriela_cpp_CGabriella_renderOpaque_FUN_00498cc0(CCharacter *param_1)

#include "nocturne.h"

int core_gabriela_cpp_CGabriella_renderOpaque_FUN_00498cc0(CCharacter *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  CDemonActor *pCVar5;
  
  iVar4 = core_charactr_cpp_CCharacter_renderOpaque_FUN_00426440(param_1);
  if (iVar4 != 0) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(&param_1->base);
    core_cloth_cpp_CCloth_render_FUN_00437db0
              ((CCloth *)(param_1[2].flames[0x1d].on_event + 0x44),(CDeformableModelInstance *)0x0);
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0();
    fVar3 = param_1[2].flames[0x1d].base.orient_matrix.m[1].x;
    if (((fVar3 != 0.0) &&
        ((**(code **)(*(int *)((int)fVar3 + 0x14c) + 8))(fVar3),
        (float)0.90000000000000002 < *(float *)(param_1[2].flames[0x1d].on_event + 0xc))) &&
       ((pCVar5 = core_actor_cpp_castToClassHash_FUN_0040d890
                            ((CDemonActor *)param_1[2].flames[0x1d].base.orient_matrix.m[1].x,
                             g_CDynamiteActorType_01bca088.name_hash), pCVar5 == (CDemonActor *)0x0
        || (fVar3 = pCVar5[4].orient.vec.z, fVar1 = pCVar5[4].orient.vec.y,
           fVar2 = pCVar5[4].orient_matrix.m[0].x,
           0.0 < SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3))))) {
      fVar3 = param_1[2].flames[0x1d].base.orient_matrix.m[1].x;
      (**(code **)(*(int *)((int)fVar3 + 0x14c) + 0xe8))(fVar3);
      return iVar4;
    }
  }
  return iVar4;
}
