// Name: core_fire.cpp_CMuzzleFlash_render_FUN_00496a90
// Address: 00496a90
// Address Range: [[00496a90, 00496c31]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CMuzzleFlash_render_FUN_00496a90(CMuzzleFlash *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CMuzzleFlash_render_FUN_00496a90(CMuzzleFlash *this_ptr)

{
  uint uVar1;
  CVector3f local_34;
  CVector3f local_28;
  CVector3f local_1c;
  float local_10;
  float local_c;
  
  if (this_ptr->frames_remaining != 2) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
            (DAT_0060b280,&this_ptr->position);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
            (DAT_0060b280,&this_ptr->rotation,(CVector3f *)0x0);
  local_28.z = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
  local_28.x = 0.0;
  local_28.y = 0.0;
  local_10 = local_28.z;
  local_c = local_28.z;
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
            (DAT_0060b280,&local_28,(CVector3f *)0x0);
  g_CDemonSetPtr->lighting_quality_mode = 1;
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,1);
  uVar1 = rand();
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0
            (DAT_0060b280,(uVar1 & 0x3fff) + 0x1800);
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
            ((CKeyFramedModelInstance *)0x1c3ead8,0.0,99);
  local_1c.x = 0.0;
  local_1c.y = 0.0;
  local_1c.z = 1.5707964;
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
            (DAT_0060b280,&local_1c,(CVector3f *)0x0);
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
            ((CKeyFramedModelInstance *)0x1c3ead8,0.0,99);
  engine_matrix_c_pop_FUN_0046b4a0();
  local_34.x = 0.0;
  local_34.y = 0.0;
  local_34.z = 0.7853982;
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
            (DAT_0060b280,&local_34,(CVector3f *)0x0);
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
            ((CKeyFramedModelInstance *)0x1c3ead8,0.0,99);
  engine_matrix_c_pop_FUN_0046b4a0();
  g_CDemonSetPtr->lighting_quality_mode = 0;
  engine_matrix_c_pop_FUN_0046b4a0();
  engine_matrix_c_pop_FUN_0046b4a0();
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,0);
  return;
}
