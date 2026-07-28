// Name: engine_keyframe.c_recomputeKeyFrameNormals_FUN_004c4080
// Address: 004c4080
// Address Range: [[004c4080, 004c416f]]
// Convention: unknown
// Signature: void engine_keyframe_c_recomputeKeyFrameNormals_FUN_004c4080(SMRGLPrimitiveTriangle *param_1)

#include "nocturne.h"

void engine_keyframe_c_recomputeKeyFrameNormals_FUN_004c4080(SMRGLPrimitiveTriangle *param_1)

{
  int iVar1;
  uint uVar2;
  CVector3i *vertex_data;
  SMRGLPrimitiveTriangle *pSVar3;
  
  vertex_data = (CVector3i *)0x0;
  iVar1 = (param_1->base).base.type;
  while (pSVar3 = (SMRGLPrimitiveTriangle *)0x0, iVar1 != 0) {
    if ((param_1->base).base.type == 2) {
      vertex_data = (CVector3i *)&(param_1->base).surface_normal.B;
    }
    iVar1 = (param_1->base).base.type;
    pSVar3 = param_1;
    if (((iVar1 == 0x18) || (iVar1 == 0x29)) || (iVar1 == 0x19)) break;
    uVar2 = engine_model_c_getMRGLSize_FUN_004dd520((SMRGLHeaderExtended *)param_1);
    param_1 = (SMRGLPrimitiveTriangle *)
              ((int)&(((SMRGLPrimitiveTriangle *)(param_1->vertices + -2))->base).base.type +
              (uVar2 & 0xfffffffc));
    iVar1 = (param_1->base).base.type;
  }
  if (vertex_data == (CVector3i *)0x0) {
    PTR_01cc4800 = "..\\engine\\keyframe.c";
    INT_01cc4804 = 0x1f5;
    core_main_c_FUN_004c8440("recomputeKeyFrameNormals: Cannot find vptr");
  }
  if (pSVar3 == (SMRGLPrimitiveTriangle *)0x0) {
    PTR_01cc4800 = "..\\engine\\keyframe.c";
    INT_01cc4804 = 0x1f6;
    core_main_c_FUN_004c8440("recomputeKeyFrameNormals: Cannot find fptr");
  }
  do {
    uVar2 = (param_1->base).base.type;
    if (uVar2 < 0x19) {
      if (uVar2 == 0x18) {
LAB_004c40df:
        engine_keyframe_c_calculateSurfaceNormal_FUN_004c3920(vertex_data,param_1);
      }
    }
    else if (uVar2 < 0x1a) {
      engine_keyframe_c_calculatePackedSurfaceNormal_FUN_004c3760
                (vertex_data,(SMRGLPrimitiveTriangleIndex *)param_1);
    }
    else if (uVar2 == 0x29) goto LAB_004c40df;
    uVar2 = engine_model_c_getMRGLSize_FUN_004dd520((SMRGLHeaderExtended *)param_1);
    param_1 = (SMRGLPrimitiveTriangle *)
              ((int)&(((SMRGLPrimitiveTriangle *)(param_1->vertices + -2))->base).base.type +
              (uVar2 & 0xfffffffc));
    if ((param_1->base).base.type == 0) {
      return;
    }
  } while( true );
}
