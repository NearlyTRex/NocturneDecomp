// Name: core_fire.cpp_CMuzzleFlash_render_FUN_0049a480
// Address: 0049a480
// Address Range: [[0049a480, 0049a621]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CMuzzleFlash_render_FUN_0049a480(CMuzzleFlash *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CMuzzleFlash_render_FUN_0049a480(CMuzzleFlash *this_ptr)

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
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
            (DAT_005f2afc,&this_ptr->position);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
            (DAT_005f2afc,&this_ptr->rotation,(CVector3f *)0x0);
  local_28.z = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.0,6.2831855);
  local_28.x = 0.0;
  local_28.y = 0.0;
  local_10 = local_28.z;
  local_c = local_28.z;
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
            (DAT_005f2afc,&local_28,(CVector3f *)0x0);
  g_CDemonSetPtr->lighting_quality_mode = 1;
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,1);
  uVar1 = rand();
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0
            (DAT_005f2afc,(uVar1 & 0x3fff) + 0x1800);
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540
            ((CKeyFramedModelInstance *)0x1c74278,0.0,99);
  local_1c.x = 0.0;
  local_1c.y = 0.0;
  local_1c.z = 1.5707964;
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
            (DAT_005f2afc,&local_1c,(CVector3f *)0x0);
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540
            ((CKeyFramedModelInstance *)0x1c74278,0.0,99);
  engine_matrix_c_pop_FUN_0046d080();
  local_34.x = 0.0;
  local_34.y = 0.0;
  local_34.z = 0.7853982;
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
            (DAT_005f2afc,&local_34,(CVector3f *)0x0);
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540
            ((CKeyFramedModelInstance *)0x1c74278,0.0,99);
  engine_matrix_c_pop_FUN_0046d080();
  g_CDemonSetPtr->lighting_quality_mode = 0;
  engine_matrix_c_pop_FUN_0046d080();
  engine_matrix_c_pop_FUN_0046d080();
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,0);
  return;
}
