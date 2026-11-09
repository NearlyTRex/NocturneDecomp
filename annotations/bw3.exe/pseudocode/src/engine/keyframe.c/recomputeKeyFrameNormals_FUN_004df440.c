// Name: engine_keyframe.c_recomputeKeyFrameNormals_FUN_004df440
// Address: 004df440
// Address Range: [[004df440, 004df52f]]
// Convention: __cdecl
// Signature: void __cdecl engine_keyframe_c_recomputeKeyFrameNormals_FUN_004df440(SMRGLHeaderExtended *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_keyframe_c_recomputeKeyFrameNormals_FUN_004df440(SMRGLHeaderExtended *param_1)

{
  int iVar1;
  uint uVar2;
  SMRGLHeaderExtended *pSVar3;
  SMRGLHeaderExtended *pSVar4;
  
  pSVar3 = (SMRGLHeaderExtended *)0x0;
  iVar1 = *(int *)param_1;
  while (pSVar4 = (SMRGLHeaderExtended *)0x0, iVar1 != 0) {
    if (*(int *)param_1 == 2) {
      pSVar3 = param_1 + 0xc;
    }
    iVar1 = *(int *)param_1;
    pSVar4 = param_1;
    if (((iVar1 == 0x18) || (iVar1 == 0x29)) || (iVar1 == 0x19)) break;
    uVar2 = engine_model_c_FUN_004f8730(param_1);
    param_1 = param_1 + (uVar2 & 0xfffffffc);
    iVar1 = *(int *)param_1;
  }
  if (pSVar3 == (SMRGLHeaderExtended *)0x0) {
    _DAT_01d71de0 = "..\\engine\\keyframe.c";
    _DAT_01d71de4 = 0x1f5;
    core_main_c_FUN_004e4330("recomputeKeyFrameNormals: Cannot find vptr");
  }
  if (pSVar4 == (SMRGLHeaderExtended *)0x0) {
    _DAT_01d71de0 = "..\\engine\\keyframe.c";
    _DAT_01d71de4 = 0x1f6;
    core_main_c_FUN_004e4330("recomputeKeyFrameNormals: Cannot find fptr");
  }
  do {
    uVar2 = *(uint *)param_1;
    if (uVar2 < 0x19) {
      if (uVar2 == 0x18) {
LAB_004df49f:
        engine_keyframe_c_calculateSurfaceNormal_FUN_004dece0(pSVar3,param_1);
      }
    }
    else if (uVar2 < 0x1a) {
      engine_keyframe_c_calculatePackedSurfaceNormal_FUN_004deb20(pSVar3,param_1);
    }
    else if (uVar2 == 0x29) goto LAB_004df49f;
    uVar2 = engine_model_c_FUN_004f8730(param_1);
    param_1 = param_1 + (uVar2 & 0xfffffffc);
    if (*(int *)param_1 == 0) {
      return;
    }
  } while( true );
}
