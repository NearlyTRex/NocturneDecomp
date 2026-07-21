// Name: core_bodypart.cpp_CBodyPart_renderTransparent_FUN_00416430
// Address: 00416430
// Address Range: [[00416430, 004164f4]]
// Convention: unknown
// Signature: undefined4 core_bodypart_cpp_CBodyPart_renderTransparent_FUN_00416430(int param_1)

#include "nocturne.h"

uint core_bodypart_cpp_CBodyPart_renderTransparent_FUN_00416430(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0xf14) != 0) &&
     ((*(int *)(param_1 + 0x150) < 2 || (*(int *)(param_1 + 0x744) != 0)))) {
    if (*(int *)(param_1 + 0xc9c) != 0) {
      *(uint *)(0x01E57284 + 0x15a8a0) = *(uint *)(param_1 + 0xc98);
      core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(param_1);
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010
                (DAT_005ae704,*(uint *)(param_1 + 0xca8));
      core_bodypart_cpp_CBodyPart_renderGeometry_FUN_00416030(param_1,0x2e7);
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(param_1);
      *(uint *)(0x01E57284 + 0x15a8a0) = 0;
    }
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 0x744)) {
      iVar2 = param_1 + 0x754;
      do {
        FUN_0048d5d0(iVar2);
        iVar1 = iVar1 + 1;
        iVar2 = iVar2 + 0x2a8;
      } while (iVar1 < *(int *)(param_1 + 0x744));
    }
    return 1;
  }
  return 0;
}
