// Name: core_litecone.cpp_CLightCone_renderTransparent_FUN_00506c20
// Address: 00506c20
// Address Range: [[00506c20, 00506ca6]]
// Convention: __cdecl
// Signature: int __cdecl core_litecone_cpp_CLightCone_renderTransparent_FUN_00506c20(CLightCone *this_ptr)

#include "nocturne.h"

int __cdecl core_litecone_cpp_CLightCone_renderTransparent_FUN_00506c20(CLightCone *this_ptr)

{
  int iVar1;
  CBoundingBox3D *this_ptr_00;
  int iVar2;
  CBoundingBox3D local_1c;
  
  if (this_ptr->state != 0) {
    iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
    if (iVar1 == 0) {
      core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base);
      this_ptr_00 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&local_1c);
      iVar2 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base);
      if (iVar2 != 0) {
        core_dlight_cpp_renderConeLightGeometry_FUN_004760d0
                  (&(this_ptr->base).location.position,&(this_ptr->base).orient.vec,this_ptr->fov,
                   this_ptr->falloff);
      }
      return iVar2;
    }
  }
  return 0;
}
