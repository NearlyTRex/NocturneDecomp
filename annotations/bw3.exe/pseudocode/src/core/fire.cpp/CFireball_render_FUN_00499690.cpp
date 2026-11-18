// Name: core_fire.cpp_CFireball_render_FUN_00499690
// Address: 00499690
// Address Range: [[00499690, 00499ea3]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireball_render_FUN_00499690(CFireball *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireball_render_FUN_00499690(CFireball *this_ptr)

{
  longlong lVar1;
  CKeyFramedModel *pCVar2;
  int iVar3;
  CKeyFramedModelInstance *this_ptr_00;
  CBoundingBox3D *pCVar4;
  uint *puVar5;
  float *pfVar6;
  CBoundingBox3D *pCVar7;
  byte bVar8;
  float afStackY_10d0 [1004];
  SMRGLTextureBasic *texture;
  CVector3f *world_position;
  float fStack_108;
  float fStack_104;
  CBoundingBox3D CStack_100;
  float fStack_e8;
  float afStack_e4 [2];
  CVector3i CStack_dc;
  CVector3f CStack_d0;
  CVector3i CStack_c4;
  float fStack_b8;
  float afStack_b4 [4];
  uint uStack_a4;
  CVector3i CStack_a0;
  CVector3i CStack_94;
  CVector3i CStack_88;
  CVector3i CStack_7c;
  CVector3i CStack_70;
  float fStack_64;
  float afStack_60 [4];
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  CVector3i CStack_40;
  float fStack_2c;
  float fStack_24;
  float fStack_20;
  CVector3f *pCStack_1c;
  int iStack_18;
  
  bVar8 = 0;
  fStack_24 = 0.5;
  if (this_ptr->lighting_active == 0) {
    fStack_24 = 4.0;
  }
  if (this_ptr->lighting_active == 2) {
    fStack_24 = 0.666;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
            (g_CDemonRenderer_PTR_005f2afc,(CVector3f *)this_ptr);
  engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0046cee0
            (g_CDemonRenderer_PTR_005f2afc,(CVector3i *)&this_ptr->rotation_angle1,(CVector3i *)0x0)
  ;
  if (this_ptr->lighting_active == 0) {
    this_ptr_00 = &g_FireEffectFireballModel;
  }
  else if (this_ptr->lighting_active == 1) {
    this_ptr_00 = &g_FireEffectFireballSmallModel;
  }
  else {
    this_ptr_00 = &g_FireEffectFireballGreenModel;
  }
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(this_ptr_00);
  pCVar4 = pCVar2->frame_bounds;
  pCVar7 = &CStack_100;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    (pCVar7->min).x = (pCVar4->min).x;
    pCVar4 = (CBoundingBox3D *)((int)pCVar4 + (uint)bVar8 * -8 + 4);
    pCVar7 = (CBoundingBox3D *)((int)pCVar7 + ((uint)bVar8 * -2 + 1) * 4);
  }
  iVar3 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041daf0(&CStack_100,0);
  if (iVar3 != 0) {
    core_set_cpp_CDemonSet_setLightingParameters_FUN_005375c0
              (g_CDemonSetPtr,(CVector3f *)this_ptr,(UOrientationVector *)&g_ZeroVector,
               &CStack_100.min,&CStack_100.max,(CMatrix3x3f *)0x0);
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540(this_ptr_00,0.0,-1);
  }
  engine_drender_cpp_pop_FUN_0046d080();
  if ((iVar3 != 0) &&
     (iVar3 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046d540
                        (g_CDemonRenderer_PTR_005f2afc), iVar3 == 0)) {
    g_SRenderVertex_ARRAY_0060b014[0].u = 0x80000;
    g_SRenderVertex_ARRAY_0060b014[0].v = 0xf80000;
    g_SRenderVertex_ARRAY_0060b014[1].u = 0xf80000;
    g_SRenderVertex_ARRAY_0060b014[1].v = 0xf80000;
    g_SRenderVertex_ARRAY_0060b014[2].u = 0xf80000;
    g_SRenderVertex_ARRAY_0060b014[2].v = 0x80000;
    g_SRenderVertex_ARRAY_0060b014[3].u = 0x80000;
    g_SRenderVertex_ARRAY_0060b014[3].v = 0x80000;
    engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0046cee0
              (g_CDemonRenderer_PTR_005f2afc,&g_BillboardCameraRight,(CVector3i *)0x0);
    afStack_b4[2] = -fStack_24;
    uStack_a4 = 0;
    CStack_c4.x = (int)ROUND(afStack_b4[2] * 256.0f);
    CStack_c4.y = (int)ROUND(afStack_b4[2] * 256.0f);
    CStack_c4.z = (int)ROUND(256.0f * 0.0);
    afStack_b4[3] = afStack_b4[2];
    fStack_2c = afStack_b4[2];
    engine_special_cpp_transformAndProjectPoint_FUN_005632a3
              (&g_CDemonRenderer_PTR_005f2afc->vertex_buffer_ptr->projected_vertex,&CStack_c4);
    afStack_b4[2] = fStack_24;
    uStack_a4 = 0;
    afStack_b4[3] = fStack_2c;
    CStack_a0.x = (int)ROUND(fStack_24 * 256.0f);
    CStack_a0.y = (int)ROUND(fStack_2c * 256.0f);
    CStack_a0.z = (int)ROUND(256.0f * 0.0);
    engine_special_cpp_transformAndProjectPoint_FUN_005632a3
              (&g_CDemonRenderer_PTR_005f2afc->vertex_buffer_ptr[1].projected_vertex,&CStack_a0);
    afStack_b4[2] = fStack_24;
    afStack_b4[3] = fStack_24;
    uStack_a4 = 0;
    CStack_7c.x = (int)ROUND(fStack_24 * 256.0f);
    CStack_7c.y = (int)ROUND(fStack_24 * 256.0f);
    CStack_7c.z = (int)ROUND(256.0f * 0.0);
    engine_special_cpp_transformAndProjectPoint_FUN_005632a3
              (&g_CDemonRenderer_PTR_005f2afc->vertex_buffer_ptr[2].projected_vertex,&CStack_7c);
    uStack_a4 = 0;
    afStack_b4[2] = fStack_2c;
    afStack_b4[3] = fStack_24;
    CStack_88.x = (int)ROUND(fStack_2c * 256.0f);
    CStack_88.y = (int)ROUND(fStack_24 * 256.0f);
    CStack_88.z = (int)ROUND(256.0f * 0.0);
    engine_special_cpp_transformAndProjectPoint_FUN_005632a3
              (&g_CDemonRenderer_PTR_005f2afc->vertex_buffer_ptr[3].projected_vertex,&CStack_88);
    if (this_ptr->lighting_active == 1) {
      texture = &g_FireEffectRedSparkTexture;
    }
    else if (this_ptr->lighting_active == 2) {
      texture = &g_FireEffectGreenSparkTexture;
    }
    else {
      texture = &g_SMRGLTextureBasic_005fc9ac;
    }
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
              (g_CDemonRenderer_PTR_005f2afc,texture);
    lVar1 = (longlong)this_ptr->timer * (longlong)(0xffff - g_PerspectiveReciprocal);
    g_SRenderVertex_ARRAY_0060b014[0].a =
         (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    g_SRenderVertex_ARRAY_0060b014[0].r = 0xffff;
    g_SRenderVertex_ARRAY_0060b014[0].g = 0xffff;
    g_SRenderVertex_ARRAY_0060b014[0].b = 0xffff;
    g_SRenderVertex_ARRAY_0060b014[1].r = 0xffff;
    g_SRenderVertex_ARRAY_0060b014[1].g = 0xffff;
    g_SRenderVertex_ARRAY_0060b014[1].b = 0xffff;
    g_SRenderVertex_ARRAY_0060b014[2].r = 0xffff;
    g_SRenderVertex_ARRAY_0060b014[2].g = 0xffff;
    g_SRenderVertex_ARRAY_0060b014[2].b = 0xffff;
    g_SRenderVertex_ARRAY_0060b014[3].r = 0xffff;
    g_SRenderVertex_ARRAY_0060b014[3].g = 0xffff;
    g_SRenderVertex_ARRAY_0060b014[3].b = 0xffff;
    g_SRenderVertex_ARRAY_0060b014[1].a = g_SRenderVertex_ARRAY_0060b014[0].a;
    g_SRenderVertex_ARRAY_0060b014[2].a = g_SRenderVertex_ARRAY_0060b014[0].a;
    g_SRenderVertex_ARRAY_0060b014[3].a = g_SRenderVertex_ARRAY_0060b014[0].a;
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(g_CDemonRenderer_PTR_005f2afc,1);
    engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046c510
              (g_CDemonRenderer_PTR_005f2afc,&g_BillboardPrimitive.base);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(g_CDemonRenderer_PTR_005f2afc,0);
    engine_drender_cpp_pop_FUN_0046d080();
    if ((this_ptr->lighting_active != 1) && (this_ptr->lighting_active != 2)) {
      puVar5 = (uint *)((int)this_ptr + (uint)bVar8 * -8 + 4);
      CStack_d0.x = (this_ptr->base).position.x;
      *(uint *)((int)&CStack_d0 + (uint)bVar8 * -8 + 4) = *puVar5;
      *(uint *)((int)&CStack_d0 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
           puVar5[(uint)bVar8 * -2 + 1];
      pfVar6 = (float *)((int)this_ptr + (uint)bVar8 * -8 + 0x10);
      fStack_e8 = (this_ptr->base).velocity.x;
      afStack_e4[(uint)bVar8 * -2] = *pfVar6;
      afStack_e4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] = pfVar6[(uint)bVar8 * -2 + 1];
      iStack_18 = 0;
      fStack_104 = 1.0;
      fStack_108 = 0.1;
      pCStack_1c = &(this_ptr->base).acceleration;
      do {
        fStack_108 = fStack_108 * (float)0.69999999999999996;
        fStack_64 = pCStack_1c->x * fStack_108;
        afStack_60[0] = pCStack_1c->y * fStack_108;
        afStack_60[1] = pCStack_1c->z * fStack_108;
        afStack_60[2] = fStack_64;
        afStack_60[(uint)bVar8 * -2 + 3] = afStack_60[(uint)bVar8 * -2];
        afStack_60[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
             afStack_60[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
        fStack_e8 = fStack_e8 - afStack_60[2];
        fStack_4c = fStack_e8 * fStack_108;
        afStack_e4[0] = afStack_e4[0] - afStack_60[3];
        afStack_e4[1] = afStack_e4[1] - fStack_50;
        fStack_104 = fStack_104 * (float)0.69999999999999996;
        world_position = &CStack_d0;
        fStack_48 = afStack_e4[0] * fStack_108;
        fStack_44 = afStack_e4[1] * fStack_108;
        fStack_b8 = fStack_4c;
        afStack_b4[(uint)bVar8 * -2] = afStack_60[(uint)bVar8 * -2 + 6];
        afStack_b4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
             afStack_60[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
        CStack_d0.x = CStack_d0.x - fStack_b8;
        CStack_d0.y = CStack_d0.y - afStack_b4[0];
        CStack_d0.z = CStack_d0.z - afStack_b4[1];
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
                  (g_CDemonRenderer_PTR_005f2afc,world_position);
        engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0046cee0
                  (g_CDemonRenderer_PTR_005f2afc,&g_BillboardCameraRight,(CVector3i *)0x0);
        afStack_b4[2] = -fStack_24 * fStack_104;
        uStack_a4 = 0;
        CStack_dc.x = (int)ROUND(afStack_b4[2] * 256.0f);
        CStack_dc.y = (int)ROUND(afStack_b4[2] * 256.0f);
        CStack_dc.z = (int)ROUND(256.0f * 0.0);
        afStack_b4[3] = afStack_b4[2];
        fStack_20 = afStack_b4[2];
        engine_special_cpp_transformAndProjectPoint_FUN_005632a3
                  (&g_CDemonRenderer_PTR_005f2afc->vertex_buffer_ptr->projected_vertex,&CStack_dc);
        afStack_b4[2] = fStack_24 * fStack_104;
        afStack_b4[3] = fStack_20;
        uStack_a4 = 0;
        CStack_40.x = (int)ROUND(afStack_b4[2] * 256.0f);
        CStack_40.y = (int)ROUND(fStack_20 * 256.0f);
        CStack_40.z = (int)ROUND(256.0f * 0.0);
        fStack_2c = afStack_b4[2];
        engine_special_cpp_transformAndProjectPoint_FUN_005632a3
                  (&g_CDemonRenderer_PTR_005f2afc->vertex_buffer_ptr[1].projected_vertex,&CStack_40)
        ;
        afStack_b4[2] = fStack_2c;
        afStack_b4[3] = fStack_2c;
        uStack_a4 = 0;
        CStack_94.x = (int)ROUND(fStack_2c * 256.0f);
        CStack_94.y = (int)ROUND(fStack_2c * 256.0f);
        CStack_94.z = (int)ROUND(256.0f * 0.0);
        engine_special_cpp_transformAndProjectPoint_FUN_005632a3
                  (&g_CDemonRenderer_PTR_005f2afc->vertex_buffer_ptr[2].projected_vertex,&CStack_94)
        ;
        afStack_b4[2] = fStack_20;
        uStack_a4 = 0;
        afStack_b4[3] = fStack_2c;
        CStack_70.x = (int)ROUND(fStack_20 * 256.0f);
        CStack_70.y = (int)ROUND(fStack_2c * 256.0f);
        CStack_70.z = (int)ROUND(256.0f * 0.0);
        engine_special_cpp_transformAndProjectPoint_FUN_005632a3
                  (&g_CDemonRenderer_PTR_005f2afc->vertex_buffer_ptr[3].projected_vertex,&CStack_70)
        ;
        (*((g_CurrentSceneCamera->base).vtable)->setupPerspectiveAndFog)
                  (g_CurrentSceneCamera,(CVector3f *)this_ptr,(SProjectedVertex *)0x0);
        lVar1 = (longlong)this_ptr->timer * (longlong)(0xffff - g_PerspectiveReciprocal);
        g_SRenderVertex_ARRAY_0060b014[0].a =
             (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        g_SRenderVertex_ARRAY_0060b014[0].r = 0xffff;
        g_SRenderVertex_ARRAY_0060b014[0].g = 0xffff;
        g_SRenderVertex_ARRAY_0060b014[0].b = 0xffff;
        g_SRenderVertex_ARRAY_0060b014[1].r = 0xffff;
        g_SRenderVertex_ARRAY_0060b014[1].g = 0xffff;
        g_SRenderVertex_ARRAY_0060b014[1].b = 0xffff;
        g_SRenderVertex_ARRAY_0060b014[2].r = 0xffff;
        g_SRenderVertex_ARRAY_0060b014[2].g = 0xffff;
        g_SRenderVertex_ARRAY_0060b014[2].b = 0xffff;
        g_SRenderVertex_ARRAY_0060b014[3].r = 0xffff;
        g_SRenderVertex_ARRAY_0060b014[3].g = 0xffff;
        g_SRenderVertex_ARRAY_0060b014[3].b = 0xffff;
        g_SRenderVertex_ARRAY_0060b014[1].a = g_SRenderVertex_ARRAY_0060b014[0].a;
        g_SRenderVertex_ARRAY_0060b014[2].a = g_SRenderVertex_ARRAY_0060b014[0].a;
        g_SRenderVertex_ARRAY_0060b014[3].a = g_SRenderVertex_ARRAY_0060b014[0].a;
        engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(g_CDemonRenderer_PTR_005f2afc,1)
        ;
        engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046c510
                  (g_CDemonRenderer_PTR_005f2afc,&g_BillboardPrimitive.base);
        engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(g_CDemonRenderer_PTR_005f2afc,0)
        ;
        engine_drender_cpp_pop_FUN_0046d080();
        iStack_18 = iStack_18 + 1;
      } while (iStack_18 < 3);
    }
  }
  return;
}
