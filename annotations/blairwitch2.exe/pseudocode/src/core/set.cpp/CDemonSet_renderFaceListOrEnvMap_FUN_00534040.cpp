// Name: core_set.cpp_CDemonSet_renderFaceListOrEnvMap_FUN_00534040
// Address: 00534040
// Address Range: [[00534040, 005340af]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_renderFaceListOrEnvMap_FUN_00534040(CDemonSet *this_ptr,SInputFace *faces,int count,int flags)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_renderFaceListOrEnvMap_FUN_00534040(CDemonSet *this_ptr,SInputFace *faces,int count,int flags)

{
  int iVar1;
  
  if (g_CGamePtr->suppress_set_geometry == 0) {
    if (g_CGamePtr->render_mode != 0) {
      iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280);
      if (iVar1 == 0) {
        core_set_cpp_CDemonSet_renderEnvMapTriangles_FUN_00533a80(this_ptr,faces,count,0xffff);
        return;
      }
    }
    engine_drender_cpp_CDemonRenderer_renderFaceList_FUN_0046bff0(DAT_0060b280,faces,count,flags);
  }
  return;
}
