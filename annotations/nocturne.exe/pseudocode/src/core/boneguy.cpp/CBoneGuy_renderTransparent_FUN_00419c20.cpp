// Name: core_boneguy.cpp_CBoneGuy_renderTransparent_FUN_00419c20
// Address: 00419c20
// Address Range: [[00419c20, 00419cd5]]
// Convention: __cdecl
// Signature: int __cdecl core_boneguy_cpp_CBoneGuy_renderTransparent_FUN_00419c20(CBoneGuy *this_ptr)

#include "nocturne.h"

int __cdecl core_boneguy_cpp_CBoneGuy_renderTransparent_FUN_00419c20(CBoneGuy *this_ptr)

{
  CDemonRenderer *pCVar1;
  CBoundingBox3D *this_ptr_00;
  int iVar2;
  CBoundingBox3D local_20;
  
  if ((this_ptr->base).base.render_active != 0) {
    return 0;
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20((CDemonActor *)this_ptr);
  this_ptr_00 = (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)
                          ((CDemonActor *)this_ptr,&local_20);
  iVar2 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(this_ptr_00);
  if (iVar2 != 0) {
    engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_004619f0
              (g_CDemonRenderer_PTR_005ae704,0);
    pCVar1 = g_CDemonRenderer_PTR_005ae704;
    g_CDemonSet_PTR_005be368->disable_directional_lighting = 1;
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(pCVar1,0xffff);
    core_charactr_cpp_CCharacter_renderCharacter_FUN_00425c20((CCharacter *)this_ptr);
    pCVar1 = g_CDemonRenderer_PTR_005ae704;
    g_CDemonSet_PTR_005be368->disable_directional_lighting = 0;
    engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_00461db0(pCVar1);
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60((CDemonActor *)this_ptr);
  return iVar2;
}
