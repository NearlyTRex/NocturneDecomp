// Name: core_fire.cpp_CExplosion_render_FUN_004c3b10
// Address: 004c3b10
// Address Range: [[004c3b10, 004c3e82]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CExplosion_render_FUN_004c3b10(CExplosion *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CExplosion_render_FUN_004c3b10(CExplosion *this_ptr)

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
  int iStack_54;
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
  
  if ((*(uint *)(this_ptr->unk + 0xc) & 0x7fffffff) == 0) {
    return;
  }
  iStack_98 = 0x4c3b45;
  dVar4 = round
                    ((double)((1.0 - *(float *)(this_ptr->unk + 0xc)) * (float)27));
  local_20 = (int)ROUND(dVar4);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr2,g_FireEffectExplosionTextures + local_20 * 2);
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr2,(CVector3f *)this_ptr);
  engine_drender_cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
            (g_CDemonRendererPtr2,(float *)local_5c);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr2,(CVector3i *)local_5c,(CVector3i *)0x0);
  fVar3 = -*(float *)(this_ptr->unk + 0x10) * 108.0f;
  fVar2 = (float)0.00390625;
  iVar1 = *(int *)(this_ptr->unk + 0x18);
  dVar4 = round
                    ((double)(*(float *)(this_ptr->unk + 0x10) * (float)148 * fVar2));
  dVar5 = round((double)(fVar3 * fVar2));
  local_1c = (int)ROUND(dVar4);
  local_20 = (int)ROUND(dVar5);
  if (iVar1 != 0) {
    local_1c = -local_1c;
    local_20 = -local_20;
  }
  local_18 = local_20;
  local_40 = (float)local_20;
  local_3c = *(float *)(this_ptr->unk + 0x10) * 143.0f * (float)0.00390625;
  local_38 = 0.0;
  local_34.x = (int)ROUND(local_40 * 256.0f);
  local_34.y = (int)ROUND(local_3c * 256.0f);
  local_34.z = (int)ROUND(256.0f * 0.0);
  local_24 = local_40;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&local_34);
  local_18 = local_1c;
  local_40 = (float)local_1c;
  local_5c._4_4_ = (uint)ROUND(local_40 * 256.0f);
  iStack_54 = (int)ROUND(local_3c * 256.0f);
  iStack_50 = (int)ROUND(local_38 * 256.0f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,
             (CVector3i *)(local_5c + 4));
  local_3c = -*(float *)(this_ptr->unk + 0x10) * (float)113 * (float)0.00390625;
  local_4c.x = (int)ROUND(local_40 * 256.0f);
  local_4c.y = (int)ROUND(local_3c * 256.0f);
  local_4c.z = (int)ROUND(local_38 * 256.0f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,&local_4c);
  local_40 = local_24;
  local_70.x = (int)ROUND(local_24 * 256.0f);
  local_70.y = (int)ROUND(local_3c * 256.0f);
  local_70.z = (int)ROUND(local_38 * 256.0f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[3].projected_vertex,&local_70);
  this_ptr_00 = g_CDemonRendererPtr2;
  g_CDemonRendererPtr2->vertex_buffer_ptr->u = 0x20000;
  this_ptr_00->vertex_buffer_ptr->v = 0x20000;
  this_ptr_00->vertex_buffer_ptr[1].u = 0xfe0000;
  this_ptr_00->vertex_buffer_ptr[1].v = 0x20000;
  this_ptr_00->vertex_buffer_ptr[2].u = 0xfe0000;
  this_ptr_00->vertex_buffer_ptr[2].v = 0xfe0000;
  this_ptr_00->vertex_buffer_ptr[3].u = 0x20000;
  this_ptr_00->vertex_buffer_ptr[3].v = 0xfe0000;
  this_ptr_00->vertex_buffer_ptr->w_recip = 4.59177e-41;
  this_ptr_00->vertex_buffer_ptr[1].w_recip = 4.59177e-41;
  this_ptr_00->vertex_buffer_ptr[2].w_recip = 4.59177e-41;
  this_ptr_00->vertex_buffer_ptr[3].w_recip = 4.59177e-41;
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(this_ptr_00,1);
  engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
            (g_CDemonRendererPtr2,(SMRGLHeaderPrimitive *)&iStack_98,0x123);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,0);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  return;
}
