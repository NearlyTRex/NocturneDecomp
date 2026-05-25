// Name: engine_keyframe.c_recomputeKeyFrameNormals_FUN_00502320
// Address: 00502320
// MANUAL RECONSTRUCTION
// Address Range: [[00502320, 0050240f]]
// Convention: __cdecl
// Signature: void __cdecl engine_keyframe_c_recomputeKeyFrameNormals_FUN_00502320(SMRGLPrimitiveTriangle *primitive_list)

#include "nocturne.h"

void __cdecl engine_keyframe_c_recomputeKeyFrameNormals_FUN_00502320(SMRGLPrimitiveTriangle *primitive_list)

{
  int iVar1;
  uint uVar2;
  CVector3i *vertex_data;
  SMRGLPrimitiveTriangle *pSVar3;
  
  vertex_data = (CVector3i *)0x0;
  iVar1 = (primitive_list->base).base.type;
  while (pSVar3 = (SMRGLPrimitiveTriangle *)0x0, iVar1 != 0) {
    if ((primitive_list->base).base.type == 2) {
      vertex_data = (CVector3i *)&(primitive_list->base).surface_normal.B;
    }
    iVar1 = (primitive_list->base).base.type;
    pSVar3 = primitive_list;
    if (((iVar1 == 0x18) || (iVar1 == 0x29)) || (iVar1 == 0x19)) break;
    uVar2 = engine_model_c_getMRGLSize_FUN_00528700((SMRGLHeaderExtended *)primitive_list);
    primitive_list = (SMRGLPrimitiveTriangle *)((char *)primitive_list + (uVar2 & 0xfffffffc));
    iVar1 = (primitive_list->base).base.type;
  }
  if (vertex_data == (CVector3i *)0x0) {
    g_CurrentFilename = "..\\engine\\keyframe.c";
    g_CurrentLineNumber = 0x1f5;
    core_main_c_displayErrorAndQuit_FUN_00506f10("recomputeKeyFrameNormals: Cannot find vptr");
  }
  if (pSVar3 == (SMRGLPrimitiveTriangle *)0x0) {
    g_CurrentFilename = "..\\engine\\keyframe.c";
    g_CurrentLineNumber = 0x1f6;
    core_main_c_displayErrorAndQuit_FUN_00506f10("recomputeKeyFrameNormals: Cannot find fptr");
  }
  do {
    uVar2 = (primitive_list->base).base.type;
    if (uVar2 < 0x19) {
      if (uVar2 == 0x18) {
LAB_0050237f:
        engine_keyframe_c_calculateSurfaceNormal_FUN_00501bc0(vertex_data,primitive_list);
      }
    }
    else if (uVar2 < 0x1a) {
      engine_keyframe_c_calculatePackedSurfaceNormal_FUN_00501a00
                (vertex_data,(SMRGLPrimitiveTriangleIndex *)primitive_list);
    }
    else if (uVar2 == 0x29) goto LAB_0050237f;
    uVar2 = engine_model_c_getMRGLSize_FUN_00528700((SMRGLHeaderExtended *)primitive_list);
    primitive_list = (SMRGLPrimitiveTriangle *)((char *)primitive_list + (uVar2 & 0xfffffffc));
    if ((primitive_list->base).base.type == 0) {
      return;
    }
  } while( true );
}
