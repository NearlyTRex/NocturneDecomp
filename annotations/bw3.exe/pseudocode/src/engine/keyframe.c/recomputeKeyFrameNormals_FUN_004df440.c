// Name: engine_keyframe.c_recomputeKeyFrameNormals_FUN_004df440
// Address: 004df440
// Address Range: [[004df440, 004df52f]]
// Convention: __cdecl
// Signature: void __cdecl engine_keyframe_c_recomputeKeyFrameNormals_FUN_004df440(SMRGLPrimitiveTriangle *primitive_list)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_keyframe_c_recomputeKeyFrameNormals_FUN_004df440(SMRGLPrimitiveTriangle *primitive_list)

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
    uVar2 = engine_model_c_FUN_004f8730((SMRGLHeaderExtended *)primitive_list);
    primitive_list =
         (SMRGLPrimitiveTriangle *)
         ((int)&(((SMRGLPrimitiveTriangle *)(primitive_list->vertices + -2))->base).base.type +
         (uVar2 & 0xfffffffc));
    iVar1 = (primitive_list->base).base.type;
  }
  if (vertex_data == (CVector3i *)0x0) {
    _DAT_01d71de0 = "..\\engine\\keyframe.c";
    _DAT_01d71de4 = 0x1f5;
    core_main_c_FUN_004e4330("recomputeKeyFrameNormals: Cannot find vptr");
  }
  if (pSVar3 == (SMRGLPrimitiveTriangle *)0x0) {
    _DAT_01d71de0 = "..\\engine\\keyframe.c";
    _DAT_01d71de4 = 0x1f6;
    core_main_c_FUN_004e4330("recomputeKeyFrameNormals: Cannot find fptr");
  }
  do {
    uVar2 = (primitive_list->base).base.type;
    if (uVar2 < 0x19) {
      if (uVar2 == 0x18) {
LAB_004df49f:
        engine_keyframe_c_calculateSurfaceNormal_FUN_004dece0(vertex_data,primitive_list);
      }
    }
    else if (uVar2 < 0x1a) {
      engine_keyframe_c_calculatePackedSurfaceNormal_FUN_004deb20
                (vertex_data,(SMRGLPrimitiveTriangleIndex *)primitive_list);
    }
    else if (uVar2 == 0x29) goto LAB_004df49f;
    uVar2 = engine_model_c_FUN_004f8730((SMRGLHeaderExtended *)primitive_list);
    primitive_list =
         (SMRGLPrimitiveTriangle *)
         ((int)&(((SMRGLPrimitiveTriangle *)(primitive_list->vertices + -2))->base).base.type +
         (uVar2 & 0xfffffffc));
    if ((primitive_list->base).base.type == 0) {
      return;
    }
  } while( true );
}
