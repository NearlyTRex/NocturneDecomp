// Name: core_boneguy.cpp_CBoneGuy_renderTransparent_FUN_00418f90
// Address: 00418f90
// Address Range: [[00418f90, 0041906f]]
// Convention: __cdecl
// Signature: int __cdecl core_boneguy_cpp_CBoneGuy_renderTransparent_FUN_00418f90(CBoneGuy *this_ptr)

#include "nocturne.h"

int __cdecl core_boneguy_cpp_CBoneGuy_renderTransparent_FUN_00418f90(CBoneGuy *this_ptr)

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
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0((CDemonActor *)this_ptr);
  (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)
            ((CDemonActor *)this_ptr,(CBoundingBox3D *)0x0);
  puVar3 = auStack_20;
  puVar4 = auStack_38;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  iVar2 = core_box_cpp_FUN_0041daf0(auStack_38);
  if (iVar2 != 0) {
    engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046e120(DAT_005f2afc,0);
    pCVar1 = DAT_005f2afc;
    g_CDemonSetPtr->disable_directional_lighting = 1;
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(pCVar1,0xffff);
    core_charactr_cpp_FUN_0042d8e0(this_ptr);
    pCVar1 = DAT_005f2afc;
    g_CDemonSetPtr->disable_directional_lighting = 0;
    engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_0046e4e0(pCVar1);
    if (0.0 < *(float *)&(this_ptr->base).base.field_0x3254) {
      core_charactr_cpp_FUN_0042f310((CCharacter *)this_ptr);
    }
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830((CDemonActor *)this_ptr);
  return iVar2;
}
