// Name: core_fire.cpp_CExplosion_render_FUN_00498ed0
// Address: 00498ed0
// Address Range: [[00498ed0, 00499268]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CExplosion_render_FUN_00498ed0(CExplosion *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CExplosion_render_FUN_00498ed0(CExplosion *this_ptr)

{
  int iVar1;
  float fVar2;
  float fVar3;
  CDemonRenderer *this_ptr_00;
  byte bVar4;
  double dVar5;
  double dVar6;
  float afStackY_104c [997];
  CVector3f *translation;
  uint uStack_a4;
  CVector3i local_78;
  byte local_64 [8];
  float fStack_5c;
  int iStack_58;
  float local_54;
  float local_50;
  float local_4c;
  CVector3i local_48;
  byte local_34 [8];
  float fStack_2c;
  int iStack_28;
  float local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar4 = 0;
  if (ABS(this_ptr->lifetime) == 0.0) {
    return;
  }
  uStack_a4 = 0x498f04;
  dVar5 = round
                    ((double)((1.0 - this_ptr->lifetime) * (float)27));
  local_1c = (int)ROUND(dVar5);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
            (g_CDemonRenderer_PTR_0060b280,g_FireEffectExplosionTextures + local_1c * 2);
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
            (g_CDemonRenderer_PTR_0060b280,&this_ptr->position);
  engine_drender_cpp_CDemonRenderer_getCameraRotationRadians_FUN_0046b670
            (g_CDemonRenderer_PTR_0060b280,(CVector3f *)local_34);
  translation = (CVector3f *)0x0;
  local_64._0_4_ = local_34._0_4_;
  *(uint *)(local_64 + (uint)bVar4 * -8 + 4) =
       *(uint *)(local_34 + (uint)bVar4 * -8 + 4);
  (&fStack_5c)[(uint)bVar4 * -2 + (uint)bVar4 * -2] =
       (&fStack_2c)[(uint)bVar4 * -2 + (uint)bVar4 * -2];
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
            (g_CDemonRenderer_PTR_0060b280,(CVector3f *)local_64,translation);
  fVar3 = -this_ptr->scale * 108.0f;
  fVar2 = (float)0.00390625;
  iVar1 = this_ptr->flip_flag;
  dVar5 = round
                    ((double)(this_ptr->scale * (float)148 * fVar2));
  dVar6 = round((double)(fVar3 * fVar2));
  local_18 = (int)ROUND(dVar5);
  local_1c = (int)ROUND(dVar6);
  if (iVar1 != 0) {
    local_18 = -local_18;
    local_1c = -local_1c;
  }
  local_14 = local_1c;
  local_54 = (float)local_1c;
  local_50 = this_ptr->scale * 143.0f * (float)0.00390625;
  local_4c = 0.0;
  local_34._4_4_ = (uint)ROUND(local_54 * 256.0f);
  fStack_2c = (float)(int)ROUND(local_50 * 256.0f);
  iStack_28 = (int)ROUND(256.0f * 0.0);
  local_20 = local_54;
  engine_special_cpp_transformAndProjectPoint_FUN_0055d723
            (&g_CDemonRenderer_PTR_0060b280->vertex_buffer_ptr->projected_vertex,
             (CVector3i *)(local_34 + 4));
  local_14 = local_18;
  local_54 = (float)local_18;
  local_64._4_4_ = (uint)ROUND(local_54 * 256.0f);
  fStack_5c = (float)(int)ROUND(local_50 * 256.0f);
  iStack_58 = (int)ROUND(local_4c * 256.0f);
  engine_special_cpp_transformAndProjectPoint_FUN_0055d723
            (&g_CDemonRenderer_PTR_0060b280->vertex_buffer_ptr[1].projected_vertex,
             (CVector3i *)(local_64 + 4));
  local_50 = -this_ptr->scale * (float)113 * (float)0.00390625;
  local_48.x = (int)ROUND(local_54 * 256.0f);
  local_48.y = (int)ROUND(local_50 * 256.0f);
  local_48.z = (int)ROUND(local_4c * 256.0f);
  engine_special_cpp_transformAndProjectPoint_FUN_0055d723
            (&g_CDemonRenderer_PTR_0060b280->vertex_buffer_ptr[2].projected_vertex,&local_48);
  local_54 = local_20;
  local_78.x = (int)ROUND(local_20 * 256.0f);
  local_78.y = (int)ROUND(local_50 * 256.0f);
  local_78.z = (int)ROUND(local_4c * 256.0f);
  engine_special_cpp_transformAndProjectPoint_FUN_0055d723
            (&g_CDemonRenderer_PTR_0060b280->vertex_buffer_ptr[3].projected_vertex,&local_78);
  this_ptr_00 = g_CDemonRenderer_PTR_0060b280;
  g_CDemonRenderer_PTR_0060b280->vertex_buffer_ptr->u = 0x20000;
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
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(this_ptr_00,1);
  engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_00469c60
            (g_CDemonRenderer_PTR_0060b280,(SMRGLHeaderPrimitive *)&stack0xffffff60,0x123);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(g_CDemonRenderer_PTR_0060b280,0);
  engine_drender_cpp_pop_FUN_0046b4a0();
  return;
}
