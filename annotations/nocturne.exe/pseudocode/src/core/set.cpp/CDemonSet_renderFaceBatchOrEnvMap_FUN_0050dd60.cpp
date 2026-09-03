// Name: core_set.cpp_CDemonSet_renderFaceBatchOrEnvMap_FUN_0050dd60
// Address: 0050dd60
// Address Range: [[0050dd60, 0050ddcf]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_renderFaceBatchOrEnvMap_FUN_0050dd60(CDemonSet *this_ptr,SMRGLHeaderPrimitive *prims,int count,int flags)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_renderFaceBatchOrEnvMap_FUN_0050dd60(CDemonSet *this_ptr,SMRGLHeaderPrimitive *prims,int count,int flags)

{
  int iVar1;
  
  if (g_CGame_PTR_005b9354->scripted_sequence_active == 0) {
    if (g_CGame_PTR_005b9354->render_mode != 0) {
      iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090
                        (g_CDemonRenderer_PTR_005ae704);
      if (iVar1 == 0) {
        core_set_cpp_CDemonSet_renderEnvMapBatchTri_FUN_0050d640(this_ptr,prims,count,0xffff);
        return;
      }
    }
    engine_drender_cpp_CDemonRenderer_renderTriangleBatch_FUN_004613d0
              (g_CDemonRenderer_PTR_005ae704,(SMRGLPrimitiveTriangle *)prims,count,flags);
  }
  return;
}
