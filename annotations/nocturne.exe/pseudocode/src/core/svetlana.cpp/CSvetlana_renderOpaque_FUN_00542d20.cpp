// Name: core_svetlana.cpp_CSvetlana_renderOpaque_FUN_00542d20
// Address: 00542d20
// Address Range: [[00542d20, 00542e83]]
// Convention: unknown
// Signature: int core_svetlana_cpp_CSvetlana_renderOpaque_FUN_00542d20(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_svetlana_cpp_CSvetlana_renderOpaque_FUN_00542d20(int param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint local_84 [30];
  
  *(uint *)(0x01E57284 + 0x15aa9c) = 1;
  iVar5 = 0;
  iVar6 = param_1;
  do {
    iVar4 = iVar5 + 1;
    puVar1 = (uint *)(iVar6 + 0x2290);
    iVar6 = iVar6 + 4;
    local_84[iVar5] = *puVar1;
    iVar5 = iVar4;
  } while (iVar4 < 0x1e);
  iVar5 = core_charactr_cpp_CCharacter_renderOpaque_FUN_00426440();
  iVar6 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090();
  if ((iVar6 == 0) && (_DAT_01c038f4 < 0x4000)) {
    iVar6 = param_1;
    do {
      iVar4 = iVar6 + 4;
      *(uint *)(iVar6 + 0x2290) = 0;
      iVar6 = iVar4;
    } while (iVar4 != param_1 + 0x78);
    *(uint *)(param_1 + 0x2290 + *(int *)(param_1 + 0x950b8) * 4) = 1;
    uVar3 = DAT_005ae704;
    *(uint *)(param_1 + 0x2290 + *(int *)(param_1 + 0x950bc) * 4) = 1;
    uVar2 = *(uint *)(0x01C775EC + 500);
    *(uint *)(0x01C775EC + 500) = 2;
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(uVar3,0);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(DAT_005ae704,48000);
    if (iVar5 != 0) {
      core_charactr_cpp_CCharacter_renderOpaque_FUN_00426440(param_1);
    }
    *(uint *)(0x01C775EC + 500) = uVar2;
    iVar4 = 0;
    iVar6 = param_1;
    do {
      puVar1 = local_84 + iVar4;
      iVar4 = iVar4 + 1;
      *(uint *)(iVar6 + 0x2290) = *puVar1;
      iVar6 = iVar6 + 4;
    } while (iVar4 < 0x1e);
  }
  *(uint *)(0x01E57284 + 0x15aa9c) = 0;
  if (iVar5 != 0) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20();
    core_cloth_cpp_CCloth_render_FUN_00437db0(param_1 + 0x1fa44);
    core_cloth_cpp_CCloth_render_FUN_00437db0(param_1 + 0x5a574);
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60();
    return iVar5;
  }
  return 0;
}
