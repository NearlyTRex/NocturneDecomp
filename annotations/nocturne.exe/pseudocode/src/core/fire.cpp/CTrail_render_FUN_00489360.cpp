// Name: core_fire.cpp_CTrail_render_FUN_00489360
// Address: 00489360
// Address Range: [[00489360, 00489632]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CTrail_render_FUN_00489360(CTrail *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CTrail_render_FUN_00489360(CTrail *this_ptr)

{
  CVector3i local_50;
  float local_44;
  float local_40;
  float local_3c;
  CVector3i local_38;
  CVector3i local_2c;
  CVector3f local_20;
  CVector3i local_14;
  
  if (this_ptr->lifetime <= 0.0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
            (g_CDemonRenderer_PTR_005ae704,this_ptr->texture_ptr);
  engine_drender_cpp_CDemonRenderer_setRenderAlphaNormalized_FUN_00461020
            (g_CDemonRenderer_PTR_005ae704,this_ptr->current_alpha);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(g_CDemonRenderer_PTR_005ae704,1);
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
            (g_CDemonRenderer_PTR_005ae704,&this_ptr->position);
  engine_drender_cpp_CDemonRenderer_getCameraRotationRadians_FUN_00460db0
            (g_CDemonRenderer_PTR_005ae704,&local_20);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
            (g_CDemonRenderer_PTR_005ae704,&local_20,(CVector3f *)0x0);
  local_3c = 0.0;
  local_44 = this_ptr->size * this_ptr->current_alpha;
  local_2c.x = (int)ROUND(local_44 * 256.0f);
  local_2c.y = (int)ROUND(local_44 * 256.0f);
  local_2c.z = (int)ROUND(256.0f * 0.0);
  local_40 = local_44;
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr->projected_vertex,&local_2c);
  local_44 = -local_44;
  local_14.x = (int)ROUND(local_44 * 256.0f);
  local_14.y = (int)ROUND(local_40 * 256.0f);
  local_14.z = (int)ROUND(local_3c * 256.0f);
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr[1].projected_vertex,&local_14);
  local_40 = -local_40;
  local_38.x = (int)ROUND(local_44 * 256.0f);
  local_38.y = (int)ROUND(local_40 * 256.0f);
  local_38.z = (int)ROUND(local_3c * 256.0f);
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr[2].projected_vertex,&local_38);
  local_44 = -local_44;
  local_50.x = (int)ROUND(local_44 * 256.0f);
  local_50.y = (int)ROUND(local_40 * 256.0f);
  local_50.z = (int)ROUND(local_3c * 256.0f);
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr[3].projected_vertex,&local_50);
  DAT_005c502c = 0x80000;
  _DAT_005c5030 = 0xf80000;
  _DAT_005c505c = 0xf80000;
  _DAT_005c5060 = 0xf80000;
  _DAT_005c508c = 0xf80000;
  _DAT_005c5090 = 0x80000;
  _DAT_005c50bc = 0x80000;
  _DAT_005c50c0 = 0x80000;
  DAT_005c5034 = 0xffff;
  DAT_005c5038 = 0xffff;
  DAT_005c503c = 0xffff;
  DAT_005c5064 = 0xffff;
  DAT_005c5068 = 0xffff;
  DAT_005c506c = 0xffff;
  DAT_005c5094 = 0xffff;
  DAT_005c5098 = 0xffff;
  DAT_005c509c = 0xffff;
  DAT_005c50c4 = 0xffff;
  DAT_005c50c8 = 0xffff;
  DAT_005c50cc = 0xffff;
  engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_004602a0
            (g_CDemonRenderer_PTR_005ae704,(SMRGLHeaderPrimitive *)&stack0xffffff88);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0(g_CDemonRenderer_PTR_005ae704);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(g_CDemonRenderer_PTR_005ae704,0);
  return;
}
