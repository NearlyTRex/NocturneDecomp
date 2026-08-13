// Name: core_fire.cpp_CExplosion_render_FUN_00486fe0
// Address: 00486fe0
// Address Range: [[00486fe0, 00487360]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CExplosion_render_FUN_00486fe0(CExplosion *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CExplosion_render_FUN_00486fe0(CExplosion *this_ptr)

{
  int iVar1;
  float fVar2;
  float fVar3;
  CDemonRenderer *this_ptr_00;
  double dVar4;
  double dVar5;
  int iStack_98;
  CVector3i local_70;
  byte local_5c [8];
  float fStack_54;
  int iStack_50;
  CVector3i local_4c;
  float local_40;
  float local_3c;
  float local_38;
  CVector3i local_34;
  float local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  if (ABS(this_ptr->lifetime) == 0.0) {
    return;
  }
  iStack_98 = 0x487015;
  dVar4 = round
                    ((double)((1.0 - this_ptr->lifetime) * (float)27));
  local_20 = (int)ROUND(dVar4);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
            (g_CDemonRenderer_PTR_005ae704,(SMRGLTextureBasic *)(&DAT_005b858c + local_20 * 0x30));
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
            (g_CDemonRenderer_PTR_005ae704,&this_ptr->position);
  engine_drender_cpp_CDemonRenderer_getCameraRotationRadians_FUN_00460db0
            (g_CDemonRenderer_PTR_005ae704,(CVector3f *)local_5c);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
            (g_CDemonRenderer_PTR_005ae704,(CVector3f *)local_5c,(CVector3f *)0x0);
  fVar3 = -this_ptr->scale * 5.5407092247005829e-315._0_4_;
  fVar2 = (float)0.00390625;
  iVar1 = this_ptr->flip_flag;
  dVar4 = round((double)(this_ptr->scale * (float)148 * fVar2));
  dVar5 = round((double)(fVar3 * fVar2));
  local_1c = (int)ROUND(dVar4);
  local_20 = (int)ROUND(dVar5);
  if (iVar1 != 0) {
    local_1c = -local_1c;
    local_20 = -local_20;
  }
  local_18 = local_20;
  local_40 = (float)local_20;
  local_3c = this_ptr->scale * 5.5585177220918014e-315._0_4_ * (float)0.00390625;
  local_38 = 0.0;
  local_34.x = (int)ROUND(local_40 * 256.0f);
  local_34.y = (int)ROUND(local_3c * 256.0f);
  local_34.z = (int)ROUND(256.0f * 0.0);
  local_24 = local_40;
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr->projected_vertex,&local_34);
  local_18 = local_1c;
  local_40 = (float)local_1c;
  local_5c._4_4_ = (uint)ROUND(local_40 * 256.0f);
  fStack_54 = (float)(int)ROUND(local_3c * 256.0f);
  iStack_50 = (int)ROUND(local_38 * 256.0f);
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr[1].projected_vertex,
             (CVector3i *)(local_5c + 4));
  local_3c = -this_ptr->scale * (float)113 * (float)0.00390625;
  local_4c.x = (int)ROUND(local_40 * 256.0f);
  local_4c.y = (int)ROUND(local_3c * 256.0f);
  local_4c.z = (int)ROUND(local_38 * 256.0f);
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr[2].projected_vertex,&local_4c);
  local_40 = local_24;
  local_70.x = (int)ROUND(local_24 * 256.0f);
  local_70.y = (int)ROUND(local_3c * 256.0f);
  local_70.z = (int)ROUND(local_38 * 256.0f);
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr[3].projected_vertex,&local_70);
  this_ptr_00 = g_CDemonRenderer_PTR_005ae704;
  g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr->u = 0x20000;
  this_ptr_00->vertex_buffer_ptr->v = 0x20000;
  this_ptr_00->vertex_buffer_ptr[1].u = 0xfe0000;
  this_ptr_00->vertex_buffer_ptr[1].v = 0x20000;
  this_ptr_00->vertex_buffer_ptr[2].u = 0xfe0000;
  this_ptr_00->vertex_buffer_ptr[2].v = 0xfe0000;
  this_ptr_00->vertex_buffer_ptr[3].u = 0x20000;
  this_ptr_00->vertex_buffer_ptr[3].v = 0xfe0000;
  this_ptr_00->vertex_buffer_ptr->a = 0x8000;
  this_ptr_00->vertex_buffer_ptr[1].a = 0x8000;
  this_ptr_00->vertex_buffer_ptr[2].a = 0x8000;
  this_ptr_00->vertex_buffer_ptr[3].a = 0x8000;
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(this_ptr_00,1);
  engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_0045f3c0
            (g_CDemonRenderer_PTR_005ae704,(SMRGLHeaderPrimitive *)&iStack_98,0x123);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(g_CDemonRenderer_PTR_005ae704,0);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0(g_CDemonRenderer_PTR_005ae704);
  return;
}
