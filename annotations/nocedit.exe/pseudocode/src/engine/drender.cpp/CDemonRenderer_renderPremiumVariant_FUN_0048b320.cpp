// Name: engine_drender.cpp_CDemonRenderer_renderPremiumVariant_FUN_0048b320
// Address: 0048b320
// Address Range: [[0048b320, 0048b414]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderPremiumVariant_FUN_0048b320 (CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *polygon_info)

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_renderPremiumVariant_FUN_0048b320
          (CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *polygon_info)

{
  ushort uVar1;
  SClipPlane *pSVar2;
  SMRGLHeaderPrimitive *pSVar3;
  
  if ((this_ptr->face_count == 0) && (this_ptr->unk == 0)) {
    pSVar3 = polygon_info;
    do {
      uVar1 = (ushort)(pSVar3->base).type;
      this_ptr->vertex_buffer_ptr[uVar1].u = (uint)*(ushort *)((int)&(pSVar3->base).count + 2) << 8;
      pSVar2 = &pSVar3->surface_normal;
      pSVar3 = (SMRGLHeaderPrimitive *)((int)&(pSVar3->base).type + 2);
      this_ptr->vertex_buffer_ptr[uVar1].v = (uint)(ushort)pSVar2->B << 8;
    } while (pSVar3 != (SMRGLHeaderPrimitive *)((int)&(polygon_info->base).count + 2));
  }
  g_VertexIndexBuffer[0] = (int)(ushort)(polygon_info->base).type;
  g_VertexIndexBuffer[1] = (int)*(ushort *)((int)&(polygon_info->base).type + 2);
  g_VertexIndexBuffer[2] = (int)(ushort)(polygon_info->base).count;
  if (this_ptr->face_count == 0) {
    if (g_BitsPerPixel == 0x20) {
      g_ScanlineRenderFunc = wincore_windll_cpp_renderMMXPerspectiveScanline32_FUN_005b4031;
    }
    else {
      g_ScanlineRenderFunc = wincore_windll_cpp_renderMMXPerspectiveScanline16_FUN_005b4823;
    }
    g_RenderStateFlag2 = PREPROCESS_W_DEPTH_REPLACEMENT;
    g_RenderStateFlags = RENDER_ENGINE_CORE_PREMIUM;
  }
  else {
    g_RenderStateFlags = 0;
    g_RenderStateFlag2 = PREPROCESS_NONE;
    g_ScanlineRenderFunc = core_dstrender_cpp_renderDepthOnlyStandard_FUN_0049072f;
  }
  engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740(this_ptr,3,g_VertexIndexBuffer);
  return;
}
