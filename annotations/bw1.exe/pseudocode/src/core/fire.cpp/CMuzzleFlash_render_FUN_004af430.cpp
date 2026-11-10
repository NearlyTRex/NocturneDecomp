// Name: core_fire.cpp_CMuzzleFlash_render_FUN_004af430
// Address: 004af430
// Address Range: [[004af430, 004af5d1]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CMuzzleFlash_render_FUN_004af430(CMuzzleFlash *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CMuzzleFlash_render_FUN_004af430(CMuzzleFlash *this_ptr)

{
  uint uVar1;
  CVector3f local_34;
  CVector3f local_28;
  CVector3f local_1c;
  float local_10;
  float local_c;
  
  if (*(int *)this_ptr != 2) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
            (DAT_00612560,(CVector3f *)&this_ptr->field_0x4);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
            (DAT_00612560,(CVector3f *)&this_ptr->field_0x10,(CVector3f *)0x0);
  local_28.z = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.0,6.2831855);
  local_28.x = 0.0;
  local_28.y = 0.0;
  local_10 = local_28.z;
  local_c = local_28.z;
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
            (DAT_00612560,&local_28,(CVector3f *)0x0);
  g_CDemonSetPtr->lighting_quality_mode = 1;
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(DAT_00612560,1);
  uVar1 = rand();
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0
            (DAT_00612560,(uVar1 & 0x3fff) + 0x1800);
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0
            ((CKeyFramedModelInstance *)0x1c57c98,0.0,99);
  local_1c.x = 0.0;
  local_1c.y = 0.0;
  local_1c.z = 1.5707964;
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
            (DAT_00612560,&local_1c,(CVector3f *)0x0);
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0
            ((CKeyFramedModelInstance *)0x1c57c98,0.0,99);
  engine_matrix_c_pop_FUN_004839a0();
  local_34.x = 0.0;
  local_34.y = 0.0;
  local_34.z = 0.7853982;
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
            (DAT_00612560,&local_34,(CVector3f *)0x0);
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0
            ((CKeyFramedModelInstance *)0x1c57c98,0.0,99);
  engine_matrix_c_pop_FUN_004839a0();
  g_CDemonSetPtr->lighting_quality_mode = 0;
  engine_matrix_c_pop_FUN_004839a0();
  engine_matrix_c_pop_FUN_004839a0();
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(DAT_00612560,0);
  return;
}
