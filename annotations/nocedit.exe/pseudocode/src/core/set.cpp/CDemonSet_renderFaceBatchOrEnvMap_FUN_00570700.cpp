// Name: core_set.cpp_CDemonSet_renderFaceBatchOrEnvMap_FUN_00570700
// Address: 00570700
// Address Range: [[00570700, 0057076f]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_renderFaceBatchOrEnvMap_FUN_00570700(CDemonSet *this_ptr,SMRGLHeaderPrimitive *prims,int count,int flags)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_renderFaceBatchOrEnvMap_FUN_00570700(CDemonSet *this_ptr,SMRGLHeaderPrimitive *prims,int count,int flags)

{
  int iVar1;
  
  if (g_CGamePtr->scripted_sequence_active == 0) {
    if (g_CGamePtr->render_mode != 0) {
      iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
      if (iVar1 == 0) {
        core_set_cpp_CDemonSet_renderEnvMapBatchTri_FUN_0056ffe0(this_ptr,prims,count,0xffff);
        return;
      }
    }
    engine_drender_cpp_CDemonRenderer_renderFaceBatch_FUN_0048ce20
              (g_CDemonRendererPtr2,prims,count,flags);
  }
  return;
}
