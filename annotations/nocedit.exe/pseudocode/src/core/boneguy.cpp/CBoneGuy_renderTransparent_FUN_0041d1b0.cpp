// Name: core_boneguy.cpp_CBoneGuy_renderTransparent_FUN_0041d1b0
// Address: 0041d1b0
// Address Range: [[0041d1b0, 0041d263]]
// Convention: __cdecl
// Signature: int __cdecl core_boneguy_cpp_CBoneGuy_renderTransparent_FUN_0041d1b0(CBoneGuy *this_ptr)

#include "nocturne.h"

int __cdecl core_boneguy_cpp_CBoneGuy_renderTransparent_FUN_0041d1b0(CBoneGuy *this_ptr)

{
  CDemonRenderer *pCVar1;
  CBoundingBox3D *this_ptr_00;
  int iVar2;
  
  if ((this_ptr->base).base.render_active != 0) {
    return 0;
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00((CDemonActor *)this_ptr);
  this_ptr_00 = (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)
                          ((CDemonActor *)this_ptr,(CBoundingBox3D *)&stack0xffffffe0);
  iVar2 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
  if (iVar2 != 0) {
    engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_0048d6c0(g_CDemonRendererPtr2,0);
    pCVar1 = g_CDemonRendererPtr2;
    g_CDemonSetPtr->unk_lighting_param2 = 1;
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(pCVar1,0xffff);
    core_charactr_cpp_CCharacter_renderCharacter_FUN_00429aa0((CCharacter *)this_ptr);
    pCVar1 = g_CDemonRendererPtr2;
    g_CDemonSetPtr->unk_lighting_param2 = 0;
    engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_0048da80(pCVar1);
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40((CDemonActor *)this_ptr);
  return iVar2;
}
