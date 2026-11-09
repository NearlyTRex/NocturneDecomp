// Name: core_gabriela.cpp_FUN_004b1060
// Address: 004b1060
// Address Range: [[004b1060, 004b1152]]
// Convention: unknown
// Signature: int core_gabriela_cpp_FUN_004b1060(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_gabriela_cpp_FUN_004b1060(CDemonActor *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = core_charactr_cpp_FUN_004254b0(param_1);
  if (iVar1 != 0) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0(param_1);
    core_cloth_cpp_CCloth_render_FUN_005b0fe0
              ((CCloth *)&param_1[0xdd].field_0x11c,(CDeformableModelInstance *)0x0);
    engine_matrix_c_pop_FUN_0046b4a0();
    iVar2 = *(int *)(&param_1[0xd8].field_0x1ac + *(int *)&param_1[0xd8].field_0x4 * 4);
    if (((iVar2 != 0) &&
        ((**(code **)(*(int *)(iVar2 + 0x2b0) + 0x18))(iVar2),
        (float)_DAT_005d713b < *(float *)&param_1[0xdd].field_0xe4)) &&
       ((iVar2 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                           (*(uint *)
                             (&param_1[0xd8].field_0x1ac + *(int *)&param_1[0xd8].field_0x4 * 4),
                            g_CDynamiteClassInfo.name_hash), iVar2 == 0 ||
        (0.0 < SQRT(*(float *)(iVar2 + 0x6e0) * *(float *)(iVar2 + 0x6e0) +
                    *(float *)(iVar2 + 0x6d8) * *(float *)(iVar2 + 0x6d8) +
                    *(float *)(iVar2 + 0x6dc) * *(float *)(iVar2 + 0x6dc)))))) {
      (**(code **)(*(int *)(*(int *)(&param_1[0xd8].field_0x1ac +
                                    *(int *)&param_1[0xd8].field_0x4 * 4) + 0x2b0) + 0xf8))
                (*(int *)(&param_1[0xd8].field_0x1ac + *(int *)&param_1[0xd8].field_0x4 * 4));
      return iVar1;
    }
  }
  return iVar1;
}
