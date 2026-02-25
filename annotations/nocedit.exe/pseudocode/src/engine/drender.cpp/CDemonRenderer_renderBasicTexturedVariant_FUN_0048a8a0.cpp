// Name: engine_drender.cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0
// Address: 0048a8a0
// Address Range: [[0048a8a0, 0048a949]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim)

{
  SMRGLHeaderPrimitive *pSVar1;
  int iVar2;
  int iVar3;
  
  if ((this_ptr->plane_culling_enabled == 0) ||
     (iVar3 = engine_3d_c_isVisiblePlane_FUN_00403950(&prim->surface_normal), iVar3 != 0)) {
    iVar3 = 0;
    if (0 < (prim->base).count) {
      pSVar1 = prim;
      iVar2 = 0;
      do {
        *(int *)((int)g_VertexIndexBuffer + iVar2) = pSVar1[1].base.type;
        iVar3 = iVar3 + 1;
        pSVar1 = (SMRGLHeaderPrimitive *)&(pSVar1->surface_normal).B;
        iVar2 = iVar2 + 4;
      } while (iVar3 < (prim->base).count);
    }
    if (this_ptr->face_count == 0) {
      g_RenderStateFlags.dword = RENDER_TEXTURE_BASE;
      g_RenderStateFlag2 = PREPROCESS_W_DEPTH_REPLACEMENT;
      g_ScanlineRenderFunc = (RenderScanlineFunc *)core_dstrender_cpp_renderSolidColorDepth16xUnrolled_FUN_00490a58;
    }
    else {
      g_RenderStateFlags.dword = 0;
      g_RenderStateFlag2 = PREPROCESS_NONE;
      g_ScanlineRenderFunc = (RenderScanlineFunc *)core_dstrender_cpp_renderDepthOnlyStandard_FUN_0049072f;
    }
    engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
              (this_ptr,(prim->base).count,g_VertexIndexBuffer);
  }
  return;
}
