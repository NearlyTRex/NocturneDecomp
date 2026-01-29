// Name: core_fire.cpp_CMuzzleFlash_render_FUN_004c1a30
// Address: 004c1a30
// Address Range: [[004c1a30, 004c1a79]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CMuzzleFlash_render_FUN_004c1a30(CMuzzleFlash *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CMuzzleFlash_render_FUN_004c1a30(CMuzzleFlash *this_ptr)

{
  uint uVar1;
  CVector3i local_34;
  CVector3i local_28;
  CVector3i local_1c;
  float local_10;
  float local_c;
  
  if (*(int *)this_ptr->unk != 2) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr2,(CVector3f *)(this_ptr->unk + 4));
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr2,(CVector3i *)(this_ptr->unk + 0x10),(CVector3i *)0x0);
  local_28.z = (int)core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,6.2831855);
  local_28.x = 0;
  local_28.y = 0;
  local_10 = (float)local_28.z;
  local_c = (float)local_28.z;
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr2,&local_28,(CVector3i *)0x0);
  g_CDemonSetPtr->lighting_quality_mode = 1;
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,1);
  uVar1 = rand();
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
            (g_CDemonRendererPtr2,(uVar1 & 0x3fff) + 0x1800);
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
            (&g_FireEffectGunFlashModel,0.0,99);
  local_1c.x = 0;
  local_1c.y = 0;
  local_1c.z = 0x3fc90fdb;
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr2,&local_1c,(CVector3i *)0x0);
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
            (&g_FireEffectGunFlashModel,0.0,99);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  local_34.x = 0;
  local_34.y = 0;
  local_34.z = 0x3f490fdb;
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr2,&local_34,(CVector3i *)0x0);
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
            (&g_FireEffectGunFlashModel,0.0,99);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  g_CDemonSetPtr->lighting_quality_mode = 0;
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,0);
  return;
}
