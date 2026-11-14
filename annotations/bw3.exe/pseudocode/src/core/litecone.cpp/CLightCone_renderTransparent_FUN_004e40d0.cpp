// Name: core_litecone.cpp_CLightCone_renderTransparent_FUN_004e40d0
// Address: 004e40d0
// Address Range: [[004e40d0, 004e416a]]
// Convention: __cdecl
// Signature: int __cdecl core_litecone_cpp_CLightCone_renderTransparent_FUN_004e40d0(CLightCone *this_ptr)

#include "nocturne.h"

int __cdecl core_litecone_cpp_CLightCone_renderTransparent_FUN_004e40d0(CLightCone *this_ptr)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStack_34 [6];
  uint auStack_1c [6];
  
  bVar4 = 0;
  if (this_ptr->state != 0) {
    iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046d540(DAT_005f2afc);
    if (iVar1 == 0) {
      core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0(&this_ptr->base);
      (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)0x0);
      puVar2 = auStack_34;
      puVar3 = auStack_1c;
      for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
        puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
      }
      iVar1 = core_box_cpp_FUN_0041daf0(auStack_1c);
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830(&this_ptr->base);
      if (iVar1 != 0) {
        core_dlight_cpp_renderConeLightGeometry_FUN_0045f5a0
                  (&(this_ptr->base).location.position,&(this_ptr->base).orient.vec,this_ptr->fov,
                   this_ptr->falloff);
      }
      return iVar1;
    }
  }
  return 0;
}
