// Name: core_fire.cpp_CMuzzleFlash_render_FUN_004c1a30
// Address: 004c1a30
// Address Range: [[004c1a30, 004c1bd1]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CMuzzleFlash_render_FUN_004c1a30(CMuzzleFlash *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CMuzzleFlash_render_FUN_004c1a30(CMuzzleFlash *this_ptr)

{
  CDemonRenderer *this_ptr_00;
  uint uVar1;
  CVector3i local_28;
  CVector3i local_1c;
  float local_10;
  float local_c;
  
  if (this_ptr->frames_remaining != 2) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr2,&this_ptr->position);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr2,(CVector3i *)&this_ptr->rotation,(CVector3i *)0x0);
  local_28.z = (int)core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(0.0,6.2831855);
  local_28.x = 0;
  local_28.y = 0;
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
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0048c640(g_CDemonRendererPtr2);
  local_28.x = 0x3f490fdb;
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr2,(CVector3i *)&stack0xffffffd0,(CVector3i *)0x0);
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
            (&g_FireEffectGunFlashModel,0.0,99);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0048c640(g_CDemonRendererPtr2);
  this_ptr_00 = g_CDemonRendererPtr2;
  g_CDemonSetPtr->lighting_quality_mode = 0;
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0048c640(this_ptr_00);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0048c640(g_CDemonRendererPtr2);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,0);
  return;
}
