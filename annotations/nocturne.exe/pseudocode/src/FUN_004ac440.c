// Name: FUN_004ac440
// Address: 004ac440
// Address Range: [[004ac440, 004ac5f4]]
// Convention: unknown
// Signature: undefined4 FUN_004ac440(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004ac440(int param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  byte local_28 [24];
  uint uStack_10;
  
  if ((((*(int *)(param_1 + 0x368) == 0) && (*(int *)(param_1 + 0xfc) == 0)) &&
      (64999 < *(int *)(param_1 + 0x174))) &&
     ((*(int *)(param_1 + 0x178) == 0 &&
      (iVar3 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704), iVar3 == 0
      )))) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(param_1);
    uVar4 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,local_28,0);
    uStack_10 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(uVar4);
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0(DAT_005ae704,param_1 + 0x15c);
    pfVar6 = (float *)(param_1 + 900);
    piVar1 = (int *)(param_1 + 0x4b0);
    iVar3 = 0;
    piVar5 = piVar1;
    if (0 < *(int *)(param_1 + 0xb2c)) {
      do {
        *piVar5 = (int)ROUND(*pfVar6 * _DAT_0059e390);
        piVar5[1] = (int)ROUND(pfVar6[1] * _DAT_0059e390);
        piVar5[2] = (int)ROUND(pfVar6[2] * _DAT_0059e390);
        iVar3 = iVar3 + 1;
        pfVar6 = pfVar6 + 3;
        piVar5 = piVar5 + 3;
      } while (iVar3 < *(int *)(param_1 + 0xb2c));
    }
    core_set_cpp_CDemonSet_rotateVerticies_FUN_0050c200
              (0x01E57284,*(uint *)(param_1 + 0xb2c),piVar1);
    lVar2 = (longlong)(0xffff - _DAT_01c038f4) * (longlong)*(int *)(param_1 + 0x174);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010
              (DAT_005ae704,(uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
    iVar3 = param_1 + 0x6a4;
    iVar8 = 0;
    core_set_cpp_CDemonSet_lightVerticies_FUN_0050c2d0
              (0x01E57284,*(uint *)(param_1 + 0xb2c),*(uint *)(param_1 + 0xb30),iVar3,
               piVar1,4,0);
    iVar7 = param_1;
    if (0 < *(int *)(param_1 + 0xb30)) {
      do {
        uVar4 = DAT_005ae704;
        *(uint *)(iVar7 + 0x6ac) = 0;
        *(uint *)(iVar7 + 0x6b0) = 0;
        iVar8 = iVar8 + 1;
        *(uint *)(iVar7 + 0x6b4) = 0;
        *(uint *)(iVar7 + 0x6b8) = 0;
        engine_drender_cpp_CDemonRenderer_renderBlendedPoly_FUN_00460370(uVar4,iVar3);
        iVar3 = iVar3 + 0x48;
        iVar7 = iVar7 + 0x48;
      } while (iVar8 < *(int *)(param_1 + 0xb30));
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(param_1);
    return uStack_10;
  }
  return 0;
}
