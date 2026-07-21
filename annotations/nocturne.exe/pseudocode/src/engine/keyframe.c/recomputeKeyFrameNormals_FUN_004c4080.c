// Name: engine_keyframe.c_recomputeKeyFrameNormals_FUN_004c4080
// Address: 004c4080
// Address Range: [[004c4080, 004c416f]]
// Convention: unknown
// Signature: void engine_keyframe_c_recomputeKeyFrameNormals_FUN_004c4080(uint *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_keyframe_c_recomputeKeyFrameNormals_FUN_004c4080(uint *param_1)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  
  puVar2 = (uint *)0x0;
  uVar1 = *param_1;
  while (puVar3 = (uint *)0x0, uVar1 != 0) {
    if (*param_1 == 2) {
      puVar2 = param_1 + 3;
    }
    uVar1 = *param_1;
    puVar3 = param_1;
    if (((uVar1 == 0x18) || (uVar1 == 0x29)) || (uVar1 == 0x19)) break;
    uVar1 = engine_model_c_getMRGLSize_FUN_004dd520(param_1);
    param_1 = (uint *)((int)param_1 + (uVar1 & 0xfffffffc));
    uVar1 = *param_1;
  }
  if (puVar2 == (uint *)0x0) {
    _DAT_01cc4800 = "..\\engine\\keyframe.c";
    _DAT_01cc4804 = 0x1f5;
    FUN_004c8440("recomputeKeyFrameNormals: Cannot find vptr");
  }
  if (puVar3 == (uint *)0x0) {
    _DAT_01cc4800 = "..\\engine\\keyframe.c";
    _DAT_01cc4804 = 0x1f6;
    FUN_004c8440("recomputeKeyFrameNormals: Cannot find fptr");
  }
  do {
    uVar1 = *param_1;
    if (uVar1 < 0x19) {
      if (uVar1 == 0x18) {
LAB_004c40df:
        engine_keyframe_c_calculateSurfaceNormal_FUN_004c3920(puVar2,param_1);
      }
    }
    else if (uVar1 < 0x1a) {
      engine_keyframe_c_calculatePackedSurfaceNormal_FUN_004c3760(puVar2,param_1);
    }
    else if (uVar1 == 0x29) goto LAB_004c40df;
    uVar1 = engine_model_c_getMRGLSize_FUN_004dd520(param_1);
    param_1 = (uint *)((int)param_1 + (uVar1 & 0xfffffffc));
    if (*param_1 == 0) {
      return;
    }
  } while( true );
}
