// Name: core_set.cpp_CDemonSet_renderPrimitiveBatch_FUN_00570770
// Address: 00570770
// Address Range: [[00570770, 0057086c]]
// Convention: __cdecl
// Signature: void core_set.cpp_CDemonSet_renderPrimitiveBatch_FUN_00570770(CDemonSet * this_ptr, SMRGLPrimitiveQuad * primitive_array, int primitive_count, int render_flags)

#include "nocturne.h"

void __cdecl
core_set_cpp_CDemonSet_renderPrimitiveBatch_FUN_00570770
          (CDemonSet *this_ptr,SMRGLPrimitiveQuad *primitive_array,int primitive_count,
          int render_flags)

{
  SMRGLPrimitiveQuad *pSVar1;
  BADSPACEBASE *in_ESP;
  int iVar2;
  int in_stack_00000014;
  SMRGLHeaderPrimitive local_34;
  int local_1c;
  int local_18;
  int local_14;
  
  if (g_CGamePtr->scripted_sequence_active == 0) {
    if ((g_CGamePtr->field62_0x1f4 != 0) &&
       (iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr),
       iVar2 == 0)) {
      core_set_cpp_CDemonSet_FUN_00570010(this_ptr);
      return;
    }
    if ((this_ptr->per_pixel_lighting_enabled != 0) &&
       (iVar2 = 0, pSVar1 = primitive_array, 0 < primitive_count)) {
      do {
        local_34.base.count = (pSVar1->base).base.count;
        local_34.surface_normal.A = (pSVar1->base).surface_normal.A;
        local_34.surface_normal.B = (pSVar1->base).surface_normal.B;
        local_34.surface_normal.C = (pSVar1->base).surface_normal.C;
        local_34.surface_normal.D = (pSVar1->base).surface_normal.D;
        local_1c = pSVar1->vertices[0].vertex_index;
        local_18 = pSVar1->vertices[1].vertex_index;
        local_14 = pSVar1->vertices[2].vertex_index;
        pSVar1 = pSVar1 + 1;
        iVar2 = iVar2 + 1;
        engine_drender_cpp_CDemonRenderer_renderCustomScanline_FUN_0048c8d0
                  (g_CDemonRendererPtr,&local_34,
                   core_dcamera_cpp_renderFlatColorScanline_FUN_004505e0);
      } while (iVar2 < primitive_count);
    }
    engine_drender_cpp_CDemonRenderer_renderPrimitiveBatch_FUN_0048ce90
              (g_CDemonRendererPtr,&primitive_array->base,primitive_count,in_stack_00000014);
  }
  return;
}
