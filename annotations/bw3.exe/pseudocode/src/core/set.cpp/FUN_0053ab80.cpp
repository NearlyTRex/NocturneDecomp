// Name: core_set.cpp_FUN_0053ab80
// Address: 0053ab80
// Address Range: [[0053ab80, 0053ac7c]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_FUN_0053ab80(CDemonSet *this_ptr,SMRGLPrimitiveQuad *primitive_array,int primitive_count,int render_flags)

#include "nocturne.h"

void __cdecl core_set_cpp_FUN_0053ab80(CDemonSet *this_ptr,SMRGLPrimitiveQuad *primitive_array,int primitive_count,int render_flags)

{
  SMRGLPrimitiveQuad *pSVar1;
  int iVar2;
  SMRGLHeaderPrimitive local_38 [4];
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  if (*(int *)&g_CGamePtr->field_0x214 == 0) {
    if ((*(int *)&g_CGamePtr->field_0x218 != 0) &&
       (iVar2 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046d540(DAT_005f2afc),
       iVar2 == 0)) {
      core_set_cpp_CDemonSet_renderEnvMapBatchQuad_FUN_0053a420
                (this_ptr,(SMRGLHeaderPrimitive *)primitive_array,primitive_count,0xffff);
      return;
    }
    if ((*(int *)&this_ptr->field_0x15ac88 != 0) &&
       (iVar2 = 0, pSVar1 = primitive_array, 0 < primitive_count)) {
      do {
        local_34 = *(uint *)(pSVar1 + 4);
        local_30 = *(uint *)(pSVar1 + 8);
        local_2c = *(uint *)(pSVar1 + 0xc);
        local_28 = *(uint *)(pSVar1 + 0x10);
        local_24 = *(uint *)(pSVar1 + 0x14);
        local_20 = *(uint *)(pSVar1 + 0x18);
        local_1c = *(uint *)(pSVar1 + 0x24);
        local_18 = *(uint *)(pSVar1 + 0x30);
        local_14 = *(uint *)(pSVar1 + 0x3c);
        pSVar1 = pSVar1 + 0x48;
        iVar2 = iVar2 + 1;
        engine_drender_cpp_CDemonRenderer_renderCustomScanline_FUN_0046d330
                  (DAT_005f2afc,local_38,core_dcamera_cpp_renderFlatColorScanline_FUN_0044d320);
      } while (iVar2 < primitive_count);
    }
    engine_drender_cpp_CDemonRenderer_renderQuadBatch_FUN_0046d8f0
              (DAT_005f2afc,primitive_array,primitive_count,render_flags);
  }
  return;
}
