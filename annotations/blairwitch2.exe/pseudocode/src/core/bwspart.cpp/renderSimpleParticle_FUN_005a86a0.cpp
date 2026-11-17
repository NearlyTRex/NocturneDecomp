// Name: core_bwspart.cpp_renderSimpleParticle_FUN_005a86a0
// Address: 005a86a0
// Address Range: [[005a86a0, 005a8c8d]]
// Convention: __cdecl
// Signature: void __cdecl core_bwspart_cpp_renderSimpleParticle_FUN_005a86a0(void *particle)

#include "nocturne.h"

void __cdecl core_bwspart_cpp_renderSimpleParticle_FUN_005a86a0(void *particle)

{
  SRenderVertex *pSVar1;
  CDemonRenderer *this_ptr;
  int iVar2;
  float fVar3;
  byte bVar4;
  double dVar5;
  int aiStackY_106c [995];
  uint uStack_d8;
  SMRGLHeaderPrimitive SStack_d4;
  CVector3i *rotation;
  CVector3i local_84;
  CVector3i local_78;
  float local_6c;
  float local_68;
  uint local_64;
  CVector3i local_60;
  CVector3i local_54;
  CVector3i local_48;
  CVector3i local_3c;
  CVector3i local_30;
  int iStack_24;
  int iStack_20;
  float local_1c;
  float local_18;
  float local_14;
  
  bVar4 = 0;
  iVar2 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(g_CDemonRenderer_PTR_0060b280)
  ;
  if (iVar2 == 0) {
    pSVar1 = g_CDemonRenderer_PTR_0060b280->vertex_buffer_ptr;
    local_48.x = (int)ROUND(((CVector3f *)((int)particle + 0x24))->x * 256.0f);
    local_48.y = (int)ROUND(*(float *)((int)particle + 0x28) * 256.0f);
    local_48.z = (int)ROUND(*(float *)((int)particle + 0x2c) * 256.0f);
    engine_special_cpp_transformPoint_FUN_0055d9ec(&pSVar1->projected_vertex,&local_48);
    iVar2 = engine_drender_cpp_CDemonRenderer_depthTest_FUN_0046cad0
                      (g_CDemonRenderer_PTR_0060b280,pSVar1);
    if (iVar2 != 0) {
      engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
                (g_CDemonRenderer_PTR_0060b280,(CVector3f *)((int)particle + 0x24));
      engine_drender_cpp_CDemonRenderer_getCameraRotationFixed_FUN_0046b650
                (g_CDemonRenderer_PTR_0060b280,&local_3c);
      rotation = (CVector3i *)0x0;
      local_84.x = local_3c.x;
      *(uint *)((int)&local_84 + (uint)bVar4 * -8 + 4) =
           *(uint *)((int)&local_3c + (uint)bVar4 * -8 + 4);
      *(uint *)((int)&local_84 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
           *(uint *)((int)&local_3c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
      SStack_d4.surface_normal.D.f = 8.313772e-39;
      engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0046b300
                (g_CDemonRenderer_PTR_0060b280,&local_84,rotation);
      local_18 = *(float *)((int)particle + 0x18);
      if (0.0 < *(float *)((int)particle + 8)) {
        local_18 = (*(float *)((int)particle + 0x1c) - local_18) *
                   (1.0 - *(float *)((int)particle + 8) / *(float *)((int)particle + 4)) + local_18;
      }
      fVar3 = local_18;
      local_6c = -local_18;
      local_68 = -local_18;
      local_64 = 0;
      local_54.x = (int)ROUND(local_6c * 256.0f);
      local_54.y = (int)ROUND(local_68 * 256.0f);
      local_54.z = (int)ROUND(256.0f * 0.0);
      local_1c = local_6c;
      local_14 = local_68;
      engine_special_cpp_transformAndProjectPoint_FUN_0055d723
                (&g_CDemonRenderer_PTR_0060b280->vertex_buffer_ptr->projected_vertex,&local_54);
      local_6c = fVar3;
      local_64 = 0;
      local_68 = local_14;
      local_30.x = (int)ROUND(fVar3 * 256.0f);
      local_30.y = (int)ROUND(local_14 * 256.0f);
      local_30.z = (int)ROUND(256.0f * 0.0);
      engine_special_cpp_transformAndProjectPoint_FUN_0055d723
                (&g_CDemonRenderer_PTR_0060b280->vertex_buffer_ptr[1].projected_vertex,&local_30);
      local_6c = fVar3;
      local_68 = local_18;
      local_64 = 0;
      local_78.x = (int)ROUND(fVar3 * 256.0f);
      local_78.y = (int)ROUND(local_18 * 256.0f);
      local_78.z = (int)ROUND(256.0f * 0.0);
      engine_special_cpp_transformAndProjectPoint_FUN_0055d723
                (&g_CDemonRenderer_PTR_0060b280->vertex_buffer_ptr[2].projected_vertex,&local_78);
      local_64 = 0;
      local_6c = local_1c;
      local_68 = local_18;
      local_60.x = (int)ROUND(local_1c * 256.0f);
      local_60.y = (int)ROUND(local_18 * 256.0f);
      local_60.z = (int)ROUND(256.0f * 0.0);
      engine_special_cpp_transformAndProjectPoint_FUN_0055d723
                (&g_CDemonRenderer_PTR_0060b280->vertex_buffer_ptr[3].projected_vertex,&local_60);
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
                (g_CDemonRenderer_PTR_0060b280,
                 (SMRGLTextureBasic *)(&DAT_0061ec00 + *(int *)((int)particle + 0x20) * 0x18));
      SStack_d4.surface_normal.D.f = 8.314529e-39;
      (*((g_CDemonCamera_PTR_007bda74->base).vtable)->setupPerspectiveAndFog)
                (g_CDemonCamera_PTR_007bda74,(CVector3f *)((int)particle + 0x24),
                 (SProjectedVertex *)0x0);
      local_18 = (float)(0xffff - g_INT_01c38aec);
      local_14 = (*(float *)((int)particle + 0x10) - *(float *)((int)particle + 0xc)) *
                 (1.0 - *(float *)((int)particle + 8) / *(float *)((int)particle + 4)) +
                 *(float *)((int)particle + 0xc);
      fVar3 = core_bwspart_cpp_CSimpleParticleSystem_updateFade_FUN_005a8250
                        (*(CSimpleParticleSystem **)((int)particle + 0x54));
      this_ptr = g_CDemonRenderer_PTR_0060b280;
      pSVar1 = g_CDemonRenderer_PTR_0060b280->vertex_buffer_ptr;
      dVar5 = round((double)((float)(int)local_18 * fVar3 * local_14));
      local_1c = (float)(int)ROUND(dVar5);
      pSVar1->a = (int)local_1c;
      this_ptr->vertex_buffer_ptr[1].a = (int)local_1c;
      this_ptr->vertex_buffer_ptr[2].a = (int)local_1c;
      this_ptr->vertex_buffer_ptr[3].a = (int)local_1c;
      fVar3 = 65535.0f;
      pSVar1 = this_ptr->vertex_buffer_ptr;
      dVar5 = round
                        ((double)(*(float *)((int)particle + 0x48) * 65535.0f));
      local_18 = (float)(int)ROUND(dVar5);
      pSVar1->r = (int)local_18;
      pSVar1 = this_ptr->vertex_buffer_ptr;
      dVar5 = round((double)(*(float *)((int)particle + 0x48) * fVar3));
      local_1c = (float)(int)ROUND(dVar5);
      pSVar1[1].r = (int)local_1c;
      pSVar1 = this_ptr->vertex_buffer_ptr;
      dVar5 = round((double)(*(float *)((int)particle + 0x48) * fVar3));
      iStack_20 = (int)ROUND(dVar5);
      pSVar1[2].r = iStack_20;
      pSVar1 = this_ptr->vertex_buffer_ptr;
      dVar5 = round((double)(*(float *)((int)particle + 0x48) * fVar3));
      iStack_24 = (int)ROUND(dVar5);
      pSVar1[3].r = iStack_24;
      pSVar1 = this_ptr->vertex_buffer_ptr;
      dVar5 = round((double)(fVar3 * *(float *)((int)particle + 0x4c)));
      local_30.z = (int)ROUND(dVar5);
      pSVar1->g = local_30.z;
      fVar3 = 65535.0f;
      pSVar1 = this_ptr->vertex_buffer_ptr;
      SStack_d4.surface_normal.D.f = 8.315022e-39;
      dVar5 = round
                        ((double)(*(float *)((int)particle + 0x4c) * 65535.0f));
      local_30.y = (int)ROUND(dVar5);
      pSVar1[1].g = local_30.y;
      pSVar1 = this_ptr->vertex_buffer_ptr;
      SStack_d4.surface_normal.C.f = 8.315067e-39;
      dVar5 = round((double)(*(float *)((int)particle + 0x4c) * fVar3));
      local_30.x = (int)ROUND(dVar5);
      pSVar1[2].g = local_30.x;
      pSVar1 = this_ptr->vertex_buffer_ptr;
      SStack_d4.surface_normal.B.f = 8.315116e-39;
      dVar5 = round((double)(*(float *)((int)particle + 0x4c) * fVar3));
      local_3c.z = (int)ROUND(dVar5);
      pSVar1[3].g = local_3c.z;
      pSVar1 = this_ptr->vertex_buffer_ptr;
      SStack_d4.surface_normal.A.f = 8.315165e-39;
      dVar5 = round((double)(*(float *)((int)particle + 0x50) * fVar3));
      local_3c.y = (int)ROUND(dVar5);
      pSVar1->b = local_3c.y;
      pSVar1 = this_ptr->vertex_buffer_ptr;
      SStack_d4.base.count = 0x5a8b6c;
      dVar5 = round((double)(*(float *)((int)particle + 0x50) * fVar3));
      local_3c.x = (int)ROUND(dVar5);
      pSVar1[1].b = local_3c.x;
      pSVar1 = this_ptr->vertex_buffer_ptr;
      SStack_d4.base.type = 0x5a8b8c;
      dVar5 = round((double)(*(float *)((int)particle + 0x50) * fVar3));
      local_48.z = (int)ROUND(dVar5);
      pSVar1[2].b = local_48.z;
      pSVar1 = this_ptr->vertex_buffer_ptr;
      uStack_d8 = 0x5a8bad;
      dVar5 = round((double)(fVar3 * *(float *)((int)particle + 0x50)));
      local_48.y = (int)ROUND(dVar5);
      pSVar1[3].b = local_48.y;
      this_ptr->vertex_buffer_ptr->u = 0;
      this_ptr->vertex_buffer_ptr->v = 0xff0000;
      this_ptr->vertex_buffer_ptr[1].u = 0xff0000;
      this_ptr->vertex_buffer_ptr[1].v = 0xff0000;
      this_ptr->vertex_buffer_ptr[2].u = 0xff0000;
      this_ptr->vertex_buffer_ptr[2].v = 0;
      this_ptr->vertex_buffer_ptr[3].u = 0;
      this_ptr->vertex_buffer_ptr[3].v = 0;
      engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(this_ptr,1);
      SStack_d4.base.count = 4;
      SStack_d4.surface_normal.D.i = 0;
      SStack_d4.surface_normal.C.i = 0;
      SStack_d4.surface_normal.B.i = 0;
      SStack_d4.surface_normal.A.i = 0;
      engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046a930
                (g_CDemonRenderer_PTR_0060b280,&SStack_d4);
      engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(g_CDemonRenderer_PTR_0060b280,0);
      engine_drender_cpp_pop_FUN_0046b4a0();
      return;
    }
  }
  return;
}
