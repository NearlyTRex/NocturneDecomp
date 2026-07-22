// Name: core_gabriela.cpp_CGabriella_renderOpaque_FUN_00498cc0
// Address: 00498cc0
// Address Range: [[00498cc0, 00498da3]]
// Convention: unknown
// Signature: int core_gabriela_cpp_CGabriella_renderOpaque_FUN_00498cc0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_gabriela_cpp_CGabriella_renderOpaque_FUN_00498cc0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = core_charactr_cpp_CCharacter_renderOpaque_FUN_00426440(param_1);
  if (iVar1 != 0) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(param_1);
    core_cloth_cpp_CCloth_render_FUN_00437db0(param_1 + 0x1fa7c,0);
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0(DAT_005ae704);
    iVar2 = *(int *)(param_1 + 0x1f8d0);
    if (((iVar2 != 0) &&
        ((**(code **)(*(int *)(iVar2 + 0x14c) + 8))(iVar2),
        (float)0.90000000000000002 < *(float *)(param_1 + 0x1fa44))) &&
       ((iVar2 = core_actor_cpp_castToClassHash_FUN_0040d890
                           (*(uint *)(param_1 + 0x1f8d0),_DAT_01bca0c0), iVar2 == 0 ||
        (0.0 < SQRT(*(float *)(iVar2 + 0x57c) * *(float *)(iVar2 + 0x57c) +
                    *(float *)(iVar2 + 0x574) * *(float *)(iVar2 + 0x574) +
                    *(float *)(iVar2 + 0x578) * *(float *)(iVar2 + 0x578)))))) {
      (**(code **)(*(int *)(*(int *)(param_1 + 0x1f8d0) + 0x14c) + 0xe8))
                (*(int *)(param_1 + 0x1f8d0));
      return iVar1;
    }
  }
  return iVar1;
}
