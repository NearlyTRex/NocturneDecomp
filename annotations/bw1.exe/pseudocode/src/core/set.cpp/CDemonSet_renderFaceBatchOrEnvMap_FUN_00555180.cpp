// Name: core_set.cpp_CDemonSet_renderFaceBatchOrEnvMap_FUN_00555180
// Address: 00555180
// Address Range: [[00555180, 005551ef]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_renderFaceBatchOrEnvMap_FUN_00555180(CDemonSet *this_ptr,SMRGLHeaderPrimitive *prims,int count,int flags)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_renderFaceBatchOrEnvMap_FUN_00555180(CDemonSet *this_ptr,SMRGLHeaderPrimitive *prims,int count,int flags)

{
  int iVar1;
  
  if (g_CGamePtr->suppress_set_geometry == 0) {
    if (g_CGamePtr->render_mode != 0) {
      iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60
                        (g_CDemonRenderer_PTR_00612560);
      if (iVar1 == 0) {
        core_set_cpp_CDemonSet_renderEnvMapBatchTri_FUN_00554a60(this_ptr,prims,count,0xffff);
        return;
      }
    }
    engine_drender_cpp_CDemonRenderer_renderTriangleBatch_FUN_004841a0
              (g_CDemonRenderer_PTR_00612560,(SMRGLPrimitiveTriangle *)prims,count,flags);
  }
  return;
}
