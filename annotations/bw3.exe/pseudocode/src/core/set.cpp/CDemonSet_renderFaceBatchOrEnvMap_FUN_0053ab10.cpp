// Name: core_set.cpp_CDemonSet_renderFaceBatchOrEnvMap_FUN_0053ab10
// Address: 0053ab10
// Address Range: [[0053ab10, 0053ab7f]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_renderFaceBatchOrEnvMap_FUN_0053ab10(CDemonSet *this_ptr,SMRGLHeaderPrimitive *prims,int count,int flags)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_renderFaceBatchOrEnvMap_FUN_0053ab10(CDemonSet *this_ptr,SMRGLHeaderPrimitive *prims,int count,int flags)

{
  int iVar1;
  
  if (g_CGamePtr->suppress_set_geometry == 0) {
    if (g_CGamePtr->render_mode != 0) {
      iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046d540
                        (g_CDemonRenderer_PTR_005f2afc);
      if (iVar1 == 0) {
        core_set_cpp_CDemonSet_renderEnvMapBatchTri_FUN_0053a3f0(this_ptr,prims,count,0xffff);
        return;
      }
    }
    engine_drender_cpp_CDemonRenderer_renderTriangleBatch_FUN_0046d880
              (g_CDemonRenderer_PTR_005f2afc,(SMRGLPrimitiveTriangle *)prims,count,flags);
  }
  return;
}
