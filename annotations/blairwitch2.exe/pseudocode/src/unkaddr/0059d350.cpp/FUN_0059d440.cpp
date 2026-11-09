// Name: unkaddr_0059d350.cpp_FUN_0059d440
// Address: 0059d440
// Address Range: [[0059d440, 0059d5e1]]
// Convention: unknown
// Signature: void unkaddr_0059d350_cpp_FUN_0059d440(int *param_1)

#include "nocturne.h"

void unkaddr_0059d350_cpp_FUN_0059d440(int *param_1)

{
  uint uVar1;
  CVector3f local_34;
  CVector3f local_28;
  CVector3f local_1c;
  uint local_10;
  uint local_c;
  
  if (*param_1 != 2) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
            (DAT_0060b280,(CVector3f *)(param_1 + 1));
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
            (DAT_0060b280,(CVector3f *)(param_1 + 4),(CVector3f *)0x0);
  local_28._8_4_ = core_actor_cpp_FUN_0040cf60(0,0x40c90fdb);
  local_28._0_4_ = 0;
  local_28._4_4_ = 0;
  local_10 = local_28._8_4_;
  local_c = local_28._8_4_;
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
            (DAT_0060b280,&local_28,(CVector3f *)0x0);
  *(uint *)&g_CDemonSetPtr->field_0x15ac90 = 1;
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,1);
  uVar1 = rand();
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0
            (DAT_0060b280,(uVar1 & 0x3fff) + 0x1800);
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
            ((CKeyFramedModelInstance *)0x26681e0,0.0,99);
  local_1c._0_4_ = 0;
  local_1c._4_4_ = 0;
  local_1c._8_4_ = 0x3fc90fdb;
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
            (DAT_0060b280,&local_1c,(CVector3f *)0x0);
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
            ((CKeyFramedModelInstance *)0x26681e0,0.0,99);
  engine_matrix_c_pop_FUN_0046b4a0();
  local_34._0_4_ = 0;
  local_34._4_4_ = 0;
  local_34._8_4_ = 0x3f490fdb;
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
            (DAT_0060b280,&local_34,(CVector3f *)0x0);
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
            ((CKeyFramedModelInstance *)0x26681e0,0.0,99);
  engine_matrix_c_pop_FUN_0046b4a0();
  *(uint *)&g_CDemonSetPtr->field_0x15ac90 = 0;
  engine_matrix_c_pop_FUN_0046b4a0();
  engine_matrix_c_pop_FUN_0046b4a0();
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,0);
  return;
}
