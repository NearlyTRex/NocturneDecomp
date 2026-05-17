// Name: core_set.cpp_CDemonSet_renderPrimitiveBatch_FUN_00570770
// Address: 00570770
// Address Range: [[00570770, 0057086c]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_renderPrimitiveBatch_FUN_00570770(CDemonSet *this_ptr,SMRGLPrimitiveQuad *primitive_array,int primitive_count,int render_flags)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_renderPrimitiveBatch_FUN_00570770(CDemonSet *this_ptr,SMRGLPrimitiveQuad *primitive_array,int primitive_count,int render_flags)

{
  int iVar1;
  SMRGLPrimitiveQuad *pSVar1;
  int iVar2;
  SMRGLPrimitiveQuadIndex local_38;
  
  if (g_CGamePtr->scripted_sequence_active == 0) {
    if ((g_CGamePtr->render_mode != 0) &&
       (iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2),
       iVar1 == 0)) {
      core_set_cpp_CDemonSet_renderEnvMapBatchQuad_FUN_00570010
                (this_ptr,&primitive_array->base,primitive_count,0xffff);
      return;
    }
    if ((this_ptr->per_pixel_lighting_enabled != 0) &&
       (iVar2 = 0, pSVar1 = primitive_array, 0 < primitive_count)) {
      do {
        local_38.base.base.count = (pSVar1->base).base.count;
        local_38.base.surface_normal.A = (pSVar1->base).surface_normal.A;
        local_38.base.surface_normal.B = (pSVar1->base).surface_normal.B;
        local_38.base.surface_normal.C = (pSVar1->base).surface_normal.C;
        local_38.base.surface_normal.D = (pSVar1->base).surface_normal.D;
        local_38.vertices[0] = pSVar1->vertices[0].vertex_index;
        local_38.vertices[1] = pSVar1->vertices[1].vertex_index;
        local_38.vertices[2] = pSVar1->vertices[2].vertex_index;
        local_38.vertices[3] = pSVar1->vertices[3].vertex_index;
        pSVar1 = pSVar1 + 1;
        iVar2 = iVar2 + 1;
        engine_drender_cpp_CDemonRenderer_renderCustomScanline_FUN_0048c8d0
                  (g_CDemonRendererPtr2,&local_38.base,
                   core_dcamera_cpp_renderFlatColorScanline_FUN_004505e0);
      } while (iVar2 < primitive_count);
    }
    engine_drender_cpp_CDemonRenderer_renderQuadBatch_FUN_0048ce90
              (g_CDemonRendererPtr2,primitive_array,primitive_count,render_flags);
  }
  return;
}
