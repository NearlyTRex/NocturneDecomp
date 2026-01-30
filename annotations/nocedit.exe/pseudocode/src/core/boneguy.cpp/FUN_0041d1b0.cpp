// Name: core_boneguy.cpp_FUN_0041d1b0
// Address: 0041d1b0
// Address Range: [[0041d1b0, 0041d263]]
// Convention: __cdecl
// Signature: int __cdecl core_boneguy_cpp_FUN_0041d1b0(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_boneguy.cpp_FUN_0041d1b0(uint param_1) */

int __cdecl core_boneguy_cpp_FUN_0041d1b0(void)

{
  CDemonRenderer *pCVar1;
  CBoundingBox3D *this_ptr;
  int iVar2;
  CCharacter *in_stack_00000004;
  
  if (*(int *)in_stack_00000004->unk1 != 0) {
    return 0;
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&in_stack_00000004->base);
  this_ptr = (*((in_stack_00000004->base).vtable._ub)->getBoundingBox)
                       (&in_stack_00000004->base,(CBoundingBox3D *)&stack0xffffffe0);
  iVar2 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr);
  if (iVar2 != 0) {
    engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_0048d6c0(g_CDemonRendererPtr2,0);
    pCVar1 = g_CDemonRendererPtr2;
    g_CDemonSetPtr->unk_lighting_param2 = 1;
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(pCVar1,0xffff);
    core_charactr_cpp_CCharacter_FUN_00429aa0(in_stack_00000004);
    pCVar1 = g_CDemonRendererPtr2;
    g_CDemonSetPtr->unk_lighting_param2 = 0;
    engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_0048da80(pCVar1);
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&in_stack_00000004->base);
  return iVar2;
}
