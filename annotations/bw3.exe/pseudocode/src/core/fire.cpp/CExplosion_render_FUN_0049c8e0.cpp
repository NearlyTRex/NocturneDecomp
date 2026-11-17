// Name: core_fire.cpp_CExplosion_render_FUN_0049c8e0
// Address: 0049c8e0
// Address Range: [[0049c8e0, 0049cc9a]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CExplosion_render_FUN_0049c8e0(CExplosion *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CExplosion_render_FUN_0049c8e0(CExplosion *this_ptr)

{
  int iVar1;
  float fVar2;
  float fVar3;
  SMRGLTextureBasic *texture;
  byte bVar4;
  double dVar5;
  double dVar6;
  float afStackY_1058 [1000];
  CDemonRenderer *pCVar7;
  CVector3f *euler_angles;
  CVector3f *translation;
  uint uStack_a4;
  byte local_70 [8];
  float fStack_68;
  int iStack_64;
  CVector3i local_60;
  CVector3i local_54;
  CVector3i local_48;
  CVector3f local_34;
  float fStack_28;
  float local_24;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar4 = 0;
  if (ABS(this_ptr->lifetime) != 0.0) {
    uStack_a4 = 0x49c910;
    dVar5 = round
                      ((double)((1.0 - this_ptr->lifetime) * (float)27));
    local_18 = (int)ROUND(dVar5);
    if (this_ptr->explosion_type == 3) {
      texture = (SMRGLTextureBasic *)(&DAT_005fd084 + local_18 * 0x30);
    }
    else {
      texture = &g_SMRGLTextureBasic_005fcb14 + local_18 * 2;
    }
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
              (g_CDemonRenderer_PTR_005f2afc,texture);
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
              (g_CDemonRenderer_PTR_005f2afc,&this_ptr->position);
    engine_drender_cpp_CDemonRenderer_getCameraRotationRadians_FUN_0046d250
              (g_CDemonRenderer_PTR_005f2afc,&local_34);
    translation = (CVector3f *)0x0;
    euler_angles = (CVector3f *)local_70;
    local_70._0_4_ = local_34.x;
    *(uint *)(local_70 + (uint)bVar4 * -8 + 4) =
         *(uint *)((int)&local_34 + (uint)bVar4 * -8 + 4);
    pCVar7 = g_CDemonRenderer_PTR_005f2afc;
    (&fStack_68)[(uint)bVar4 * -2 + (uint)bVar4 * -2] =
         *(float *)((int)&local_34 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
              (pCVar7,euler_angles,translation);
    fVar3 = -this_ptr->scale * 108.0f;
    fVar2 = (float)0.00390625;
    iVar1 = this_ptr->flip_flag;
    dVar5 = round
                      ((double)(this_ptr->scale * (float)148 * fVar2));
    dVar6 = round((double)(fVar3 * fVar2));
    local_1c = (int)ROUND(dVar5);
    local_18 = (int)ROUND(dVar6);
    if (iVar1 != 0) {
      local_1c = -local_1c;
      local_18 = -local_18;
    }
    local_14 = local_18;
    local_34.y = (float)local_18;
    local_34.z = this_ptr->scale * 143.0f * (float)0.00390625;
    fStack_28 = 0.0;
    local_70._4_4_ = (uint)ROUND(local_34.y * 256.0f);
    fStack_68 = (float)(int)ROUND(local_34.z * 256.0f);
    iStack_64 = (int)ROUND(256.0f * 0.0);
    local_24 = local_34.y;
    engine_special_cpp_transformAndProjectPoint_FUN_005632a3
              (&g_CDemonRenderer_PTR_005f2afc->vertex_buffer_ptr->projected_vertex,
               (CVector3i *)(local_70 + 4));
    local_14 = local_1c;
    local_34.y = (float)local_1c;
    local_48.x = (int)ROUND(local_34.y * 256.0f);
    local_48.y = (int)ROUND(local_34.z * 256.0f);
    local_48.z = (int)ROUND(fStack_28 * 256.0f);
    engine_special_cpp_transformAndProjectPoint_FUN_005632a3
              (&g_CDemonRenderer_PTR_005f2afc->vertex_buffer_ptr[1].projected_vertex,&local_48);
    local_34.z = -this_ptr->scale * (float)113 * (float)0.00390625;
    local_54.x = (int)ROUND(local_34.y * 256.0f);
    local_54.y = (int)ROUND(local_34.z * 256.0f);
    local_54.z = (int)ROUND(fStack_28 * 256.0f);
    engine_special_cpp_transformAndProjectPoint_FUN_005632a3
              (&g_CDemonRenderer_PTR_005f2afc->vertex_buffer_ptr[2].projected_vertex,&local_54);
    local_34.y = local_24;
    local_60.x = (int)ROUND(local_24 * 256.0f);
    local_60.y = (int)ROUND(local_34.z * 256.0f);
    local_60.z = (int)ROUND(fStack_28 * 256.0f);
    engine_special_cpp_transformAndProjectPoint_FUN_005632a3
              (&g_CDemonRenderer_PTR_005f2afc->vertex_buffer_ptr[3].projected_vertex,&local_60);
    pCVar7 = g_CDemonRenderer_PTR_005f2afc;
    g_CDemonRenderer_PTR_005f2afc->vertex_buffer_ptr->u = 0x20000;
    pCVar7->vertex_buffer_ptr->v = 0x20000;
    pCVar7->vertex_buffer_ptr[1].u = 0xfe0000;
    pCVar7->vertex_buffer_ptr[1].v = 0x20000;
    pCVar7->vertex_buffer_ptr[2].u = 0xfe0000;
    pCVar7->vertex_buffer_ptr[2].v = 0xfe0000;
    pCVar7->vertex_buffer_ptr[3].u = 0x20000;
    pCVar7->vertex_buffer_ptr[3].v = 0xfe0000;
    pCVar7->vertex_buffer_ptr->a = 0x8000;
    pCVar7->vertex_buffer_ptr[1].a = 0x8000;
    pCVar7->vertex_buffer_ptr[2].a = 0x8000;
    pCVar7->vertex_buffer_ptr[3].a = 0x8000;
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(pCVar7,1);
    engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_0046b850
              (g_CDemonRenderer_PTR_005f2afc,(SMRGLHeaderPrimitive *)&stack0xffffff60,0x123);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(g_CDemonRenderer_PTR_005f2afc,0);
    engine_drender_cpp_pop_FUN_0046d080();
  }
  return;
}
