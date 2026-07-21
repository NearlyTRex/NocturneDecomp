// Name: FUN_004c9be0
// Address: 004c9be0
// Address Range: [[004c9be0, 004c9ce5]]
// Convention: unknown
// Signature: int FUN_004c9be0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004c9be0(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  byte local_2c [24];
  int iStack_14;
  int iStack_10;
  int iStack_c;
  
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(param_1);
  uVar1 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,local_2c,0);
  iVar2 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(uVar1);
  if (iVar2 != 0) {
    iStack_14 = (int)ROUND(_DAT_02dd1184 * _DAT_005a0020);
    iStack_10 = (int)ROUND(_DAT_02dd1188 * _DAT_005a0020);
    iStack_c = (int)ROUND(_DAT_02dd118c * _DAT_005a0020);
    wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704 + 48000,&iStack_14);
    iVar3 = 0;
    do {
      FUN_004ca710(param_1,iVar3);
      FUN_004ca790(param_1,iVar3);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0xc);
    if ((*(int *)(0x01CC9450 + 4) != 0) &&
       (iVar3 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704),
       iVar3 == 0)) {
      iVar3 = 0;
      do {
        iVar3 = iVar3 + 1;
      } while (iVar3 < 0xc);
    }
    iVar3 = 0;
    do {
      core_manpuz_cpp_CMansionPuzzleCircle_renderReflector_FUN_004cabf0(param_1,iVar3);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 2);
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(param_1);
    return iVar2;
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(param_1);
  return 0;
}
