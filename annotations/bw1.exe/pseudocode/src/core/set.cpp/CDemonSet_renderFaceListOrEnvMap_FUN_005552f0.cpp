// Name: core_set.cpp_CDemonSet_renderFaceListOrEnvMap_FUN_005552f0
// Address: 005552f0
// Address Range: [[005552f0, 0055535f]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_renderFaceListOrEnvMap_FUN_005552f0(CDemonSet *this_ptr,SInputFace *faces,int count,int flags)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_renderFaceListOrEnvMap_FUN_005552f0(CDemonSet *this_ptr,SInputFace *faces,int count,int flags)

{
  int iVar1;
  
  if (g_CGamePtr->suppress_set_geometry == 0) {
    if (g_CGamePtr->render_mode != 0) {
      iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560);
      if (iVar1 == 0) {
        core_set_cpp_CDemonSet_renderEnvMapTriangles_FUN_00554d30(this_ptr,faces,count,0xffff);
        return;
      }
    }
    engine_drender_cpp_CDemonRenderer_renderFaceList_FUN_004844f0(DAT_00612560,faces,count,flags);
  }
  return;
}
