// Name: core_gore.cpp_CBloodSplat_render_FUN_004cd690
// Address: 004cd690
// Address Range: [[004cd690, 004cdb1c]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CBloodSplat_render_FUN_004cd690(CBloodSplat *this_ptr,int expire_flag)

#include "nocturne.h"

void __cdecl core_gore_cpp_CBloodSplat_render_FUN_004cd690(CBloodSplat *this_ptr,int expire_flag)

{
  uint uVar1;
  uint uVar2;
  CVector3i *input;
  double dVar3;
  CVector3i CStack_90;
  CVector3i local_84;
  CVector3i local_78;
  uint local_6c;
  uint local_68;
  uint local_64;
  CVector3i local_60;
  CVector3i local_54;
  CVector3i local_48;
  CVector3i local_3c;
  CVector3i local_30;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  
  uVar1 = this_ptr->area_id;
  uVar2 = (g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->base).base.location.area_id;
  if (uVar1 == uVar2) {
    CStack_90.x = 0x4cd6d3;
    dVar3 = round
                      ((double)(this_ptr->age * (float)8 + (float)4)
                      );
    local_18 = (uint)ROUND(dVar3);
    if ((int)local_18 < 0) {
      local_18 = uVar1 ^ uVar2;
    }
    else if ((0xf < (int)local_18) && (local_18 = 0xf, expire_flag != 0)) {
      this_ptr->expired = 1;
    }
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
              (g_CDemonRenderer_PTR_005f2afc,&this_ptr->position);
    if (this_ptr->is_wall_splat == 1) {
      g_SMRGLPrimitiveQuadIndex_01d22e48.base.surface_normal.C.i = 0xffff;
      g_SMRGLPrimitiveQuadIndex_01d22e48.base.surface_normal.A.i = 0;
      g_SMRGLPrimitiveQuadIndex_01d22e48.base.surface_normal.B.i = 0;
      g_SMRGLPrimitiveQuadIndex_01d22e48.base.surface_normal.D.i = 0;
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
                (g_CDemonRenderer_PTR_005f2afc,
                 g_SMRGLTextureBasic_ARRAY_005fedac + this_ptr->texture_variant * 0x10 + local_18);
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
                (g_CDemonRenderer_PTR_005f2afc,&this_ptr->rotation,(CVector3f *)0x0);
      local_6c = 0xbf000000;
      local_64 = 0;
      local_68 = 0xbf000000;
      local_84.x = (int)ROUND(256.0f * -0.5);
      local_84.y = (int)ROUND(256.0f * -0.5);
      local_84.z = (int)ROUND(256.0f * 0.0);
      engine_special_cpp_transformAndProjectPoint_FUN_005632a3
                (&g_CDemonRenderer_PTR_005f2afc->vertex_buffer_ptr->projected_vertex,&local_84);
      local_6c = 0x3f000000;
      local_68 = 0xbf000000;
      local_64 = 0;
      local_3c.x = (int)ROUND(256.0f * 0.5);
      local_3c.y = (int)ROUND(256.0f * -0.5);
      local_3c.z = (int)ROUND(256.0f * 0.0);
      engine_special_cpp_transformAndProjectPoint_FUN_005632a3
                (&g_CDemonRenderer_PTR_005f2afc->vertex_buffer_ptr[1].projected_vertex,&local_3c);
      local_6c = 0x3f000000;
      local_64 = 0;
      local_68 = 0x3f000000;
      local_78.x = (int)ROUND(256.0f * 0.5);
      local_78.y = (int)ROUND(256.0f * 0.5);
      local_78.z = (int)ROUND(256.0f * 0.0);
      engine_special_cpp_transformAndProjectPoint_FUN_005632a3
                (&g_CDemonRenderer_PTR_005f2afc->vertex_buffer_ptr[2].projected_vertex,&local_78);
      local_6c = 0xbf000000;
      local_68 = 0x3f000000;
      local_64 = 0;
      local_48.x = (int)ROUND(256.0f * -0.5);
      local_48.y = (int)ROUND(256.0f * 0.5);
      local_48.z = (int)ROUND(256.0f * 0.0);
      input = &local_48;
    }
    else {
      if (expire_flag != 0) {
        this_ptr->expired = 1;
      }
      g_SMRGLPrimitiveQuadIndex_01d22e48.base.surface_normal.B.i = 0xffff;
      g_SMRGLPrimitiveQuadIndex_01d22e48.base.surface_normal.A.i = 0;
      g_SMRGLPrimitiveQuadIndex_01d22e48.base.surface_normal.C.i = 0;
      g_SMRGLPrimitiveQuadIndex_01d22e48.base.surface_normal.D.i = 0;
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
                (g_CDemonRenderer_PTR_005f2afc,
                 g_SMRGLTextureBasic_ARRAY_005fed4c + this_ptr->texture_variant);
      local_24 = 0xbf000000;
      local_20 = 0;
      local_1c = 0xbf000000;
      local_54.x = (int)ROUND(256.0f * -0.5);
      local_54.y = (int)ROUND(256.0f * 0.0);
      local_54.z = (int)ROUND(256.0f * -0.5);
      engine_special_cpp_transformAndProjectPoint_FUN_005632a3
                (&g_CDemonRenderer_PTR_005f2afc->vertex_buffer_ptr->projected_vertex,&local_54);
      local_24 = 0x3f000000;
      local_20 = 0;
      local_1c = 0xbf000000;
      local_30.x = (int)ROUND(256.0f * 0.5);
      local_30.y = (int)ROUND(256.0f * 0.0);
      local_30.z = (int)ROUND(256.0f * -0.5);
      engine_special_cpp_transformAndProjectPoint_FUN_005632a3
                (&g_CDemonRenderer_PTR_005f2afc->vertex_buffer_ptr[1].projected_vertex,&local_30);
      local_24 = 0x3f000000;
      local_20 = 0;
      local_1c = 0x3f000000;
      CStack_90.x = (int)ROUND(256.0f * 0.5);
      CStack_90.y = (int)ROUND(256.0f * 0.0);
      CStack_90.z = (int)ROUND(256.0f * 0.5);
      engine_special_cpp_transformAndProjectPoint_FUN_005632a3
                (&g_CDemonRenderer_PTR_005f2afc->vertex_buffer_ptr[2].projected_vertex,&CStack_90);
      local_24 = 0xbf000000;
      local_20 = 0;
      local_1c = 0x3f000000;
      local_60.x = (int)ROUND(256.0f * -0.5);
      local_60.y = (int)ROUND(256.0f * 0.0);
      local_60.z = (int)ROUND(256.0f * 0.5);
      input = &local_60;
    }
    engine_special_cpp_transformAndProjectPoint_FUN_005632a3
              (&g_CDemonRenderer_PTR_005f2afc->vertex_buffer_ptr[3].projected_vertex,input);
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
    if (this_ptr->is_wall_splat == 1) {
      engine_drender_cpp_pop_FUN_0046d080();
      return;
    }
  }
  return;
}
