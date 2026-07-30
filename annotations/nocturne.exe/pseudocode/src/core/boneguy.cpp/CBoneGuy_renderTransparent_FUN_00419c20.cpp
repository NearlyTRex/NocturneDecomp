// Name: core_boneguy.cpp_CBoneGuy_renderTransparent_FUN_00419c20
// Address: 00419c20
// Address Range: [[00419c20, 00419cd5]]
// Convention: unknown
// Signature: int core_boneguy_cpp_CBoneGuy_renderTransparent_FUN_00419c20(CCharacter *param_1)

#include "nocturne.h"

int core_boneguy_cpp_CBoneGuy_renderTransparent_FUN_00419c20(CCharacter *param_1)

{
  CDemonRenderer *pCVar1;
  CBoundingBox3D *this_ptr;
  int iVar2;
  CBoundingBox3D local_20;
  
  if (param_1->render_active != 0) {
    return 0;
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(&param_1->base);
  this_ptr = (*((param_1->base).vtable._ub)->getBoundingBox)(&param_1->base,&local_20);
  iVar2 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(this_ptr);
  if (iVar2 != 0) {
    engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_004619f0(DAT_005ae704,0);
    pCVar1 = DAT_005ae704;
    *(uint *)(0x01E57284 + 0x15a8a0) = 1;
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(pCVar1,0xffff);
    core_charactr_cpp_CCharacter_renderCharacter_FUN_00425c20(param_1);
    pCVar1 = DAT_005ae704;
    *(uint *)(0x01E57284 + 0x15a8a0) = 0;
    engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_00461db0(pCVar1);
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(&param_1->base);
  return iVar2;
}
