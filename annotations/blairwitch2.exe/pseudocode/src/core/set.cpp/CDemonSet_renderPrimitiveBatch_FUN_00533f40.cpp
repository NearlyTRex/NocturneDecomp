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
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  if (g_CGamePtr->suppress_set_geometry == 0) {
    if ((g_CGamePtr->render_mode != 0) &&
       (iVar2 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280),
       iVar2 == 0)) {
      core_set_cpp_CDemonSet_renderEnvMapBatchQuad_FUN_005337e0
                (this_ptr,(SMRGLHeaderPrimitive *)primitive_array,primitive_count,0xffff);
      return;
    }
    if ((this_ptr->per_pixel_lighting_enabled != 0) &&
       (iVar2 = 0, pSVar1 = primitive_array, 0 < primitive_count)) {
      do {
        local_38.base.count = *(int *)(pSVar1 + 4);
        local_38.surface_normal.A = *(UIntegerFloat *)(pSVar1 + 8);
        local_38.surface_normal.B = *(UIntegerFloat *)(pSVar1 + 0xc);
        local_38.surface_normal.C = *(UIntegerFloat *)(pSVar1 + 0x10);
        local_38.surface_normal.D = *(UIntegerFloat *)(pSVar1 + 0x14);
        local_20 = *(uint *)(pSVar1 + 0x18);
        local_1c = *(uint *)(pSVar1 + 0x24);
        local_18 = *(uint *)(pSVar1 + 0x30);
        local_14 = *(uint *)(pSVar1 + 0x3c);
        pSVar1 = pSVar1 + 0x48;
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
