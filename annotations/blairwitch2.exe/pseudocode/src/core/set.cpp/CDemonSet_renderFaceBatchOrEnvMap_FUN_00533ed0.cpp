// Name: core_set.cpp_CDemonSet_renderFaceBatchOrEnvMap_FUN_00533ed0
// Address: 00533ed0
// Address Range: [[00533ed0, 00533f3f]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_renderFaceBatchOrEnvMap_FUN_00533ed0(CDemonSet *this_ptr,SMRGLHeaderPrimitive *prims,int count,int flags)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_renderFaceBatchOrEnvMap_FUN_00533ed0(CDemonSet *this_ptr,SMRGLHeaderPrimitive *prims,int count,int flags)

{
  int iVar1;
  
  if (g_CGamePtr->suppress_set_geometry == 0) {
    if (g_CGamePtr->render_mode != 0) {
      iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960
                        (g_CDemonRenderer_PTR_0060b280);
      if (iVar1 == 0) {
        core_set_cpp_CDemonSet_renderEnvMapBatchTri_FUN_005337b0(this_ptr,prims,count,0xffff);
        return;
      }
    }
    engine_drender_cpp_CDemonRenderer_renderTriangleBatch_FUN_0046bca0
              (g_CDemonRenderer_PTR_0060b280,(SMRGLPrimitiveTriangle *)prims,count,flags);
  }
  return;
}
