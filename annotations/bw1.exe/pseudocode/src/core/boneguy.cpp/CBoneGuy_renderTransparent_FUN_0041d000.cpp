// Name: core_boneguy.cpp_CBoneGuy_renderTransparent_FUN_0041d000
// Address: 0041d000
// Address Range: [[0041d000, 0041d0c7]]
// Convention: __cdecl
// Signature: int __cdecl core_boneguy_cpp_CBoneGuy_renderTransparent_FUN_0041d000(CBoneGuy *this_ptr)

#include "nocturne.h"

int __cdecl core_boneguy_cpp_CBoneGuy_renderTransparent_FUN_0041d000(CBoneGuy *this_ptr)

{
  CDemonRenderer *pCVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint auStack_38 [6];
  uint auStack_20 [6];
  
  bVar5 = 0;
  if ((this_ptr->base).base.render_active != 0) {
    return 0;
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004087b0((CDemonActor *)this_ptr);
  (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)
            ((CDemonActor *)this_ptr,(CBoundingBox3D *)0x0);
  puVar3 = auStack_20;
  puVar4 = auStack_38;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  iVar2 = core_box_cpp_FUN_004207b0(auStack_38);
  if (iVar2 != 0) {
    engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_00484a40(DAT_00612560,0);
    pCVar1 = DAT_00612560;
    g_CDemonSetPtr->disable_directional_lighting = 1;
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(pCVar1,0xffff);
    core_charactr_cpp_CCharacter_renderCharacter_FUN_0042e960((CCharacter *)this_ptr);
    pCVar1 = DAT_00612560;
    g_CDemonSetPtr->disable_directional_lighting = 0;
    engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_00484e00(pCVar1);
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0((CDemonActor *)this_ptr);
  return iVar2;
}
