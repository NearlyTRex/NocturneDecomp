// Name: core_gore.cpp_CBloodPool_render_FUN_004cdd30
// Address: 004cdd30
// Address Range: [[004cdd30, 004cdfb8]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CBloodPool_render_FUN_004cdd30(CBloodPool *this_ptr,int expire_flag)

#include "nocturne.h"

void __cdecl core_gore_cpp_CBloodPool_render_FUN_004cdd30(CBloodPool *this_ptr,int expire_flag)

{
  double dVar1;
  CVector3i local_40;
  CVector3i local_34;
  uint local_28;
  uint local_24;
  uint local_20;
  CVector3i local_1c;
  int local_10;
  
  if (this_ptr->area_id == (g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->base).base.location.area_id)
  {
    dVar1 = round((double)(this_ptr->age * (float)8));
    local_10 = (int)ROUND(dVar1);
    if (local_10 < 0) {
      local_10 = 0;
    }
    else if ((0x1c < local_10) && (local_10 = 0x1c, this_ptr != (CBloodPool *)0x0)) {
      this_ptr->expired = 1;
    }
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
              (g_CDemonRenderer_PTR_005f2afc,&this_ptr->position);
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
              (g_CDemonRenderer_PTR_005f2afc,
               g_BloodPoolAnimTextures + this_ptr->texture_variant * 0x1d + local_10);
    local_28 = 0xbfaa9fbe;
    local_24 = 0;
    local_20 = 0xbfaa9fbe;
    local_34.x = (int)ROUND(256.0f * -1.333);
    local_34.y = (int)ROUND(256.0f * 0.0);
    local_34.z = (int)ROUND(256.0f * -1.333);
    engine_special_cpp_transformAndProjectPoint_FUN_005632a3
              (&g_CDemonRenderer_PTR_005f2afc->vertex_buffer_ptr->projected_vertex,&local_34);
    local_28 = 0x3faa9fbe;
    local_24 = 0;
    local_20 = 0xbfaa9fbe;
    engine_special_cpp_transformAndProjectPoint_FUN_005632a3
              (&g_CDemonRenderer_PTR_005f2afc->vertex_buffer_ptr[1].projected_vertex,
               (CVector3i *)&stack0xffffffb4);
    local_28 = 0x3faa9fbe;
    local_24 = 0;
    local_20 = 0x3faa9fbe;
    local_1c.x = (int)ROUND(256.0f * 1.333);
    local_1c.y = (int)ROUND(256.0f * 0.0);
    local_1c.z = (int)ROUND(256.0f * 1.333);
    engine_special_cpp_transformAndProjectPoint_FUN_005632a3
              (&g_CDemonRenderer_PTR_005f2afc->vertex_buffer_ptr[2].projected_vertex,&local_1c);
    local_28 = 0xbfaa9fbe;
    local_24 = 0;
    local_20 = 0x3faa9fbe;
    local_40.x = (int)ROUND(256.0f * -1.333);
    local_40.y = (int)ROUND(256.0f * 0.0);
    local_40.z = (int)ROUND(256.0f * 1.333);
    engine_special_cpp_transformAndProjectPoint_FUN_005632a3
              (&g_CDemonRenderer_PTR_005f2afc->vertex_buffer_ptr[3].projected_vertex,&local_40);
    core_gore_cpp_getBloodColorParams_FUN_004cc970
              (this_ptr->blood_type,&g_SRenderVertex_ARRAY_0060b014[0].r,
               &g_SRenderVertex_ARRAY_0060b014[0].g,&g_SRenderVertex_ARRAY_0060b014[0].b);
    core_gore_cpp_getBloodColorParams_FUN_004cc970
              (this_ptr->blood_type,&g_SRenderVertex_ARRAY_0060b014[1].r,
               &g_SRenderVertex_ARRAY_0060b014[1].g,&g_SRenderVertex_ARRAY_0060b014[1].b);
    core_gore_cpp_getBloodColorParams_FUN_004cc970
              (this_ptr->blood_type,&g_SRenderVertex_ARRAY_0060b014[2].r,
               &g_SRenderVertex_ARRAY_0060b014[2].g,&g_SRenderVertex_ARRAY_0060b014[2].b);
    core_gore_cpp_getBloodColorParams_FUN_004cc970
              (this_ptr->blood_type,&g_SRenderVertex_ARRAY_0060b014[3].r,
               &g_SRenderVertex_ARRAY_0060b014[3].g,&g_SRenderVertex_ARRAY_0060b014[3].b);
    engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_0046c730
              (g_CDemonRenderer_PTR_005f2afc,&g_SMRGLPrimitiveQuadIndex_01d22e48.base);
  }
  return;
}
