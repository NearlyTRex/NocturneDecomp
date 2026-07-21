// Name: FUN_005576a0
// Address: 005576a0
// Address Range: [[005576a0, 005577f5]]
// Convention: unknown
// Signature: undefined4 FUN_005576a0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005576a0(int param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint local_50 [12];
  byte local_20 [12];
  byte local_14 [12];
  
  bVar5 = 0;
  if ((*(int *)(param_1 + 0x2618) == 0) || (*(int *)(param_1 + 0xbc90) != 0)) {
    return 0;
  }
  if (1.0 < *(float *)(param_1 + 0xbd68)) {
    *(float *)(param_1 + 0xbd68) = *(float *)(param_1 + 0xbd68) + _DAT_00597e35;
  }
  if (*(float *)(param_1 + 0xbd68) <= (float)_DAT_00597e39) {
    if (*(int *)(param_1 + 0x2618) != 0) {
      core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(param_1);
      puVar3 = (uint *)(param_1 + 0xfd0 + *(int *)(param_1 + 0xbd38) * 0x30);
      puVar4 = local_50;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
        puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
      }
      core_xform_cpp_matrixToEulerAngles_FUN_0055b180(local_50,local_14);
      core_xform_cpp_getTranslation_FUN_0055bc00(local_50,local_20);
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
                (DAT_005ae704,&DAT_02dd1184,local_20);
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0(DAT_005ae704,local_14,0);
      core_werewolf_cpp_CWerewolf_renderEyeGlow_FUN_005570b0(param_1,0x2de0774);
      core_werewolf_cpp_CWerewolf_renderEyeGlow_FUN_005570b0(param_1,0x2de0780);
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(param_1);
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(param_1);
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(param_1);
    }
    core_charactr_cpp_CCharacter_renderTransparent_FUN_00427260(param_1);
    return *(uint *)(param_1 + 0x2618);
  }
  uVar1 = core_charactr_cpp_CCharacter_renderTransparent_FUN_00427260(param_1);
  return uVar1;
}
