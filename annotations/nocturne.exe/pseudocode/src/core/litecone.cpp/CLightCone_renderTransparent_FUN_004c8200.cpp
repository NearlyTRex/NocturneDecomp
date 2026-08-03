// Name: core_litecone.cpp_CLightCone_renderTransparent_FUN_004c8200
// Address: 004c8200
// Address Range: [[004c8200, 004c8288]]
// Convention: __cdecl
// Signature: int __cdecl core_litecone_cpp_CLightCone_renderTransparent_FUN_004c8200(CLightCone *this_ptr)

#include "nocturne.h"

int __cdecl core_litecone_cpp_CLightCone_renderTransparent_FUN_004c8200(CLightCone *this_ptr)

{
  int iVar1;
  CBoundingBox3D *this_ptr_00;
  CBoundingBox3D local_1c;
  
  if (this_ptr->state != 0) {
    iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704);
    if (iVar1 == 0) {
      core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(&this_ptr->base);
      this_ptr_00 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&local_1c);
      iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(this_ptr_00);
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(&this_ptr->base);
      if (iVar1 != 0) {
        core_dlight_cpp_renderConeLightGeometry_FUN_00451b70
                  (&(this_ptr->base).location.position,&(this_ptr->base).orient.vec,this_ptr->fov,
                   this_ptr->falloff);
      }
      return iVar1;
    }
  }
  return 0;
}
