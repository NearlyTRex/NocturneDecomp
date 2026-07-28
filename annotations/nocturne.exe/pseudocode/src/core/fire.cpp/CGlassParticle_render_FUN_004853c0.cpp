// Name: core_fire.cpp_CGlassParticle_render_FUN_004853c0
// Address: 004853c0
// Address Range: [[004853c0, 004855bb]]
// Convention: unknown
// Signature: void core_fire_cpp_CGlassParticle_render_FUN_004853c0(CVector3f *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fire_cpp_CGlassParticle_render_FUN_004853c0(CVector3f *param_1)

{
  SMRGLHeaderPrimitive SStack_68;
  uint local_50;
  uint local_4c;
  uint local_48;
  CVector3i local_40;
  CVector3i local_34;
  CVector3i local_28;
  CVector3i local_1c;
  
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00(DAT_005ae704,param_1);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
            (DAT_005ae704,param_1 + 7,(CVector3f *)0x0);
  local_28.x = (int)ROUND(param_1[10].x * 256.0f);
  local_28.y = (int)ROUND(param_1[10].y * 256.0f);
  local_28.z = (int)ROUND(param_1[10].z * 256.0f);
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&DAT_005ae704->vertex_buffer_ptr->projected_vertex,&local_28);
  local_1c.x = (int)ROUND(param_1[0xb].x * 256.0f);
  local_1c.y = (int)ROUND(param_1[0xb].y * 256.0f);
  local_1c.z = (int)ROUND(param_1[0xb].z * 256.0f);
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&DAT_005ae704->vertex_buffer_ptr[1].projected_vertex,&local_1c);
  local_34.x = (int)ROUND(param_1[0xc].x * 256.0f);
  local_34.y = (int)ROUND(param_1[0xc].y * 256.0f);
  local_34.z = (int)ROUND(param_1[0xc].z * 256.0f);
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&DAT_005ae704->vertex_buffer_ptr[2].projected_vertex,&local_34);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
            (DAT_005ae704,(SMRGLTextureBasic *)(param_1 + 5));
  SStack_68.base.count = 3;
  SStack_68.surface_normal.D.i = 0;
  SStack_68.surface_normal.C.i = 0;
  SStack_68.surface_normal.B.i = 0;
  SStack_68.surface_normal.A.i = 0;
  local_50 = 0;
  local_4c = 1;
  local_48 = 2;
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(DAT_005ae704,(int)param_1[4].z);
  local_40.x = (int)ROUND(param_1->x * 256.0f);
  local_40.y = (int)ROUND(param_1->y * 256.0f);
  local_40.z = (int)ROUND(param_1->z * 256.0f);
  core_set_cpp_CDemonSet_computeLighting_FUN_0050bb50(0x01E57284,&local_40,(CVector3i *)0x0,0,3);
  DAT_005c502c = param_1[8].x;
  _DAT_005c5030 = param_1[9].x;
  _DAT_005c505c = param_1[8].y;
  _DAT_005c5060 = param_1[9].y;
  _DAT_005c508c = param_1[8].z;
  _DAT_005c5090 = param_1[9].z;
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(DAT_005ae704,0);
  engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_004602a0(DAT_005ae704,&SStack_68);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0();
  return;
}
