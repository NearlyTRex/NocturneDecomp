// Name: engine_keyframe.c_recomputeKeyFrameNormals_FUN_004dfd50
// Address: 004dfd50
// Address Range: [[004dfd50, 004dfe3f]]
// Convention: __cdecl
// Signature: void __cdecl engine_keyframe_c_recomputeKeyFrameNormals_FUN_004dfd50(SMRGLHeaderExtended *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_keyframe_c_recomputeKeyFrameNormals_FUN_004dfd50(SMRGLHeaderExtended *param_1)

{
  int iVar1;
  uint uVar2;
  SMRGLHeaderExtended *pSVar3;
  SMRGLHeaderExtended *pSVar4;
  
  pSVar3 = (SMRGLHeaderExtended *)0x0;
  iVar1 = (param_1->base).type;
  while (pSVar4 = (SMRGLHeaderExtended *)0x0, iVar1 != 0) {
    if ((param_1->base).type == 2) {
      pSVar3 = param_1 + 1;
    }
    iVar1 = (param_1->base).type;
    pSVar4 = param_1;
    if (((iVar1 == 0x18) || (iVar1 == 0x29)) || (iVar1 == 0x19)) break;
    uVar2 = engine_model_c_FUN_00500f30(param_1);
    param_1 = (SMRGLHeaderExtended *)((int)&(param_1->base).type + (uVar2 & 0xfffffffc));
    iVar1 = (param_1->base).type;
  }
  if (pSVar3 == (SMRGLHeaderExtended *)0x0) {
    _DAT_01d046a0 = "..\\engine\\keyframe.c";
    _DAT_01d046a4 = 0x1f5;
    core_main_c_FUN_004e4500("recomputeKeyFrameNormals: Cannot find vptr");
  }
  if (pSVar4 == (SMRGLHeaderExtended *)0x0) {
    _DAT_01d046a0 = "..\\engine\\keyframe.c";
    _DAT_01d046a4 = 0x1f6;
    core_main_c_FUN_004e4500("recomputeKeyFrameNormals: Cannot find fptr");
  }
  do {
    uVar2 = (param_1->base).type;
    if (uVar2 < 0x19) {
      if (uVar2 == 0x18) {
LAB_004dfdaf:
        engine_keyframe_c_calculateSurfaceNormal_FUN_004df5f0(pSVar3,param_1);
      }
    }
    else if (uVar2 < 0x1a) {
      engine_keyframe_c_calculatePackedSurfaceNormal_FUN_004df430(pSVar3,param_1);
    }
    else if (uVar2 == 0x29) goto LAB_004dfdaf;
    uVar2 = engine_model_c_FUN_00500f30(param_1);
    param_1 = (SMRGLHeaderExtended *)((int)&(param_1->base).type + (uVar2 & 0xfffffffc));
    if ((param_1->base).type == 0) {
      return;
    }
  } while( true );
}
