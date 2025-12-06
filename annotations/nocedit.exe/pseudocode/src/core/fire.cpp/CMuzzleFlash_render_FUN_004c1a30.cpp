// Name: core_fire.cpp_CMuzzleFlash_render_FUN_004c1a30
// Address: 004c1a30
// Address Range: [[004c1a30, 004c1a79]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CMuzzleFlash_render_FUN_004c1a30(CMuzzleFlash * this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CMuzzleFlash_render_FUN_004c1a30(CMuzzleFlash *this_ptr)

{
  CMuzzleFlash *pCVar1;
  uint uVar2;
  BADSPACEBASE *in_ESP;
  int iStack00000008;
  int iStack0000000c;
  
  pCVar1 = this_ptr;
  if (*(int *)this_ptr->field0_0x0 != 2) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr,(CVector3f *)(this_ptr->field0_0x0 + 4));
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr,(CVector3i *)(pCVar1->field0_0x0 + 0x10),(CVector3i *)0x0);
  core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,6.2831855);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr,(CVector3i *)&stack0xffffffe4,(CVector3i *)0x0);
  g_CDemonSetPtr->lighting_quality_mode = 1;
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,1);
  uVar2 = crt_stdlib_c_rand_FUN_005feb5c();
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
            (g_CDemonRendererPtr,(uVar2 & 0x3fff) + 0x1800);
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
            (&g_FireEffectGunFlashModel,0.0,99);
  this_ptr = (CMuzzleFlash *)0x0;
  iStack00000008 = 0;
  iStack0000000c = 0x3fc90fdb;
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr,(CVector3i *)&this_ptr,(CVector3i *)0x0);
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
            (&g_FireEffectGunFlashModel,0.0,99);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr,(CVector3i *)&stack0xfffffff8,(CVector3i *)0x0);
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
            (&g_FireEffectGunFlashModel,0.0,99);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  g_CDemonSetPtr->lighting_quality_mode = 0;
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
  return;
}
