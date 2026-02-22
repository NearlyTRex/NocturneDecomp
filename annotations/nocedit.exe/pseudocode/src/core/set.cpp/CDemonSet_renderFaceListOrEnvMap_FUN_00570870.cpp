// Name: core_set.cpp_CDemonSet_renderFaceListOrEnvMap_FUN_00570870
// Address: 00570870
// Address Range: [[00570870, 005708df]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_renderFaceListOrEnvMap_FUN_00570870(CDemonSet *this_ptr,SInputFace *faces,int count,int flags)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_renderFaceListOrEnvMap_FUN_00570870(CDemonSet *this_ptr,SInputFace *faces,int count,int flags)

{
  int iVar1;
  
  if (g_CGamePtr->scripted_sequence_active == 0) {
    if (g_CGamePtr->render_mode != 0) {
      iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
      if (iVar1 == 0) {
        core_set_cpp_CDemonSet_renderEnvMapTriangles_FUN_005702b0(this_ptr,faces,count,0xffff);
        return;
      }
    }
    engine_drender_cpp_CDemonRenderer_renderFaceList_FUN_0048d170
              (g_CDemonRendererPtr2,faces,count,flags);
  }
  return;
}
