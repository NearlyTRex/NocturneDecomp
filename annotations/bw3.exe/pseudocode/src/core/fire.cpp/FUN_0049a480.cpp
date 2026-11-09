// Name: core_fire.cpp_FUN_0049a480
// Address: 0049a480
// Address Range: [[0049a480, 0049a621]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_FUN_0049a480(CMuzzleFlash *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_FUN_0049a480(CMuzzleFlash *this_ptr)

{
  uint uVar1;
  CVector3f local_34;
  CVector3f local_28;
  CVector3f local_1c;
  uint local_10;
  uint local_c;
  
  if (*(int *)this_ptr != 2) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
            (DAT_005f2afc,(CVector3f *)&this_ptr->field_0x4);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
            (DAT_005f2afc,(CVector3f *)&this_ptr->field_0x10,(CVector3f *)0x0);
  local_28._8_4_ = core_actor_cpp_FUN_0040ce40(0,0x40c90fdb);
  local_28._0_4_ = 0;
  local_28._4_4_ = 0;
  local_10 = local_28._8_4_;
  local_c = local_28._8_4_;
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
            (DAT_005f2afc,&local_28,(CVector3f *)0x0);
  *(uint *)&g_CDemonSetPtr->field_0x15ac90 = 1;
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,1);
  uVar1 = rand();
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0
            (DAT_005f2afc,(uVar1 & 0x3fff) + 0x1800);
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540
            ((CKeyFramedModelInstance *)0x1c74278,0.0,99);
  local_1c._0_4_ = 0;
  local_1c._4_4_ = 0;
  local_1c._8_4_ = 0x3fc90fdb;
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
            (DAT_005f2afc,&local_1c,(CVector3f *)0x0);
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540
            ((CKeyFramedModelInstance *)0x1c74278,0.0,99);
  engine_matrix_c_pop_FUN_0046d080();
  local_34._0_4_ = 0;
  local_34._4_4_ = 0;
  local_34._8_4_ = 0x3f490fdb;
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
            (DAT_005f2afc,&local_34,(CVector3f *)0x0);
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540
            ((CKeyFramedModelInstance *)0x1c74278,0.0,99);
  engine_matrix_c_pop_FUN_0046d080();
  *(uint *)&g_CDemonSetPtr->field_0x15ac90 = 0;
  engine_matrix_c_pop_FUN_0046d080();
  engine_matrix_c_pop_FUN_0046d080();
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,0);
  return;
}
