// Name: core_manpuz.cpp_FUN_004e56d0
// Address: 004e56d0
// Address Range: [[004e56d0, 004e57e6]]
// Convention: unknown
// Signature: int core_manpuz_cpp_FUN_004e56d0(CMansionPuzzleCircle *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_manpuz_cpp_FUN_004e56d0(CMansionPuzzleCircle *param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint uStack_48;
  uint auStack_30 [6];
  int iStack_18;
  int iStack_14;
  int iStack_10;
  
  bVar5 = 0;
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0((CDemonActor *)param_1);
  (**(code **)(*(int *)&param_1->field_0x2b0 + 0x24))(param_1,0);
  puVar3 = &uStack_48;
  puVar4 = auStack_30;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  iVar1 = core_box_cpp_FUN_0041a840(auStack_30);
  if (iVar1 != 0) {
    iStack_18 = (int)ROUND(_DAT_0265370c * _DAT_005f98a0);
    iStack_14 = (int)ROUND(_DAT_02653710 * _DAT_005f98a0);
    iStack_10 = (int)ROUND(_DAT_02653714 * _DAT_005f98a0);
    engine_special_cpp_FUN_0055d723
              ((SProjectedVertex *)(*(int *)DAT_0060b280 + 48000),(CVector3i *)&iStack_18);
    iVar2 = 0;
    do {
      core_manpuz_cpp_FUN_004e6340(param_1,iVar2);
      core_manpuz_cpp_FUN_004e63c0(param_1,iVar2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0xc);
    if ((*(int *)(0x01D182F0 + 0x1008) != 0) &&
       (iVar2 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280),
       iVar2 == 0)) {
      iVar2 = 0;
      do {
        iVar2 = iVar2 + 1;
      } while (iVar2 < 0xc);
    }
    iVar2 = 0;
    do {
      core_manpuz_cpp_FUN_004e6820(param_1,iVar2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 2);
    uStack_48 = 0x4e57b9;
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10((CDemonActor *)param_1);
    return iVar1;
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10((CDemonActor *)param_1);
  return 0;
}
