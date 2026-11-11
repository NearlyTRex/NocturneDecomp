// Name: core_set.cpp_CDemonSet_renderPrimitiveBatch_FUN_00533f40
// Address: 00533f40
// Address Range: [[00533f40, 0053403c]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_renderPrimitiveBatch_FUN_00533f40(CDemonSet *this_ptr,SMRGLPrimitiveQuad *primitive_array,int primitive_count,int render_flags)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_renderPrimitiveBatch_FUN_00533f40(CDemonSet *this_ptr,SMRGLPrimitiveQuad *primitive_array,int primitive_count,int render_flags)

{
  SMRGLPrimitiveQuad *pSVar1;
  int iVar2;
  SMRGLHeaderPrimitive local_38;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  if (g_CGamePtr->suppress_set_geometry == 0) {
    if ((g_CGamePtr->render_mode != 0) &&
       (iVar2 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280),
       iVar2 == 0)) {
      core_set_cpp_CDemonSet_renderEnvMapBatchQuad_FUN_005337e0
                (this_ptr,&primitive_array->base,primitive_count,0xffff);
      return;
    }
    if ((this_ptr->per_pixel_lighting_enabled != 0) &&
       (iVar2 = 0, pSVar1 = primitive_array, 0 < primitive_count)) {
      do {
        local_38.base.count = (pSVar1->base).base.count;
        local_38.surface_normal.A = (pSVar1->base).surface_normal.A;
        local_38.surface_normal.B = (pSVar1->base).surface_normal.B;
        local_38.surface_normal.C = (pSVar1->base).surface_normal.C;
        local_38.surface_normal.D = (pSVar1->base).surface_normal.D;
        local_20 = pSVar1->vertices[0].vertex_index;
        local_1c = pSVar1->vertices[1].vertex_index;
        local_18 = pSVar1->vertices[2].vertex_index;
        local_14 = pSVar1->vertices[3].vertex_index;
        pSVar1 = pSVar1 + 1;
        iVar2 = iVar2 + 1;
        engine_drender_cpp_CDemonRenderer_renderCustomScanline_FUN_0046b750
                  (DAT_0060b280,&local_38,core_dcamera_cpp_renderFlatColorScanline_FUN_0043fb20);
      } while (iVar2 < primitive_count);
    }
    engine_drender_cpp_CDemonRenderer_renderQuadBatch_FUN_0046bd10
              (DAT_0060b280,primitive_array,primitive_count,render_flags);
  }
  return;
}
