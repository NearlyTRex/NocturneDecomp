// Name: core_glass.cpp_FUN_004ac7c0
// Address: 004ac7c0
// Address Range: [[004ac7c0, 004ac9a8]]
// Convention: unknown
// Signature: void core_glass_cpp_FUN_004ac7c0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_glass_cpp_FUN_004ac7c0(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  byte local_28 [24];
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(param_1);
  uVar2 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,local_28,0);
  iVar3 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(uVar2);
  if (iVar3 == 0) {
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(param_1);
    return;
  }
  iVar3 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704);
  if (iVar3 == 0) {
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0(DAT_005ae704,param_1 + 0x36c);
  }
  else {
    engine_drender_cpp_CDemonRenderer_setFaceCount_FUN_00461070(DAT_005ae704,0);
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0(DAT_005ae704,param_1 + 0x36c);
    engine_drender_cpp_CDemonRenderer_setFaceCount_FUN_00461070(DAT_005ae704,1);
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0xb2c)) {
    pfVar6 = (float *)(param_1 + 900);
    iVar4 = 0;
    do {
      iStack_10 = (int)ROUND(*pfVar6 * _DAT_0059e390);
      iStack_c = (int)ROUND(pfVar6[1] * _DAT_0059e390);
      iStack_8 = (int)ROUND(pfVar6[2] * _DAT_0059e390);
      engine_special_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704 + iVar4,&iStack_10);
      piVar1 = DAT_005ae704;
      *(uint *)(*DAT_005ae704 + 0x20 + iVar4) = 0xffff;
      *(uint *)(iVar4 + 0x24 + *piVar1) = 0xffff;
      *(uint *)(iVar4 + 0x28 + *piVar1) = 0xffff;
      iVar3 = iVar3 + 1;
      pfVar6 = pfVar6 + 3;
      iVar4 = iVar4 + 0x30;
    } while (iVar3 < *(int *)(param_1 + 0xb2c));
  }
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010
            (DAT_005ae704,*(uint *)(param_1 + 0x174));
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0xb30)) {
    iVar4 = param_1 + 0x6a4;
    iVar5 = param_1;
    do {
      *(uint *)(iVar5 + 0x6ac) = 0;
      *(uint *)(iVar5 + 0x6b0) = 0;
      piVar1 = DAT_005ae704;
      *(uint *)(iVar5 + 0x6b4) = 0;
      *(uint *)(iVar5 + 0x6b8) = 0;
      engine_drender_cpp_CDemonRenderer_renderSolidTexturedPoly_FUN_0045fb00(piVar1,iVar4);
      iVar5 = iVar5 + 0x48;
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x48;
    } while (iVar3 < *(int *)(param_1 + 0xb30));
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(param_1);
  return;
}
