// Name: core_fire.cpp_FUN_004ace60
// Address: 004ace60
// Address Range: [[004ace60, 004acf12]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_FUN_004ace60(CStake *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_FUN_004ace60(CStake *this_ptr)

{
  CKeyFramedModel *pCVar1;
  int iVar2;
  uint *puVar3;
  CVector3f *pCVar4;
  byte bVar5;
  CVector3f local_28;
  CVector3f local_1c;
  
  bVar5 = 0;
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
            (DAT_00612560,(CVector3f *)&this_ptr->field_0x4);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
            (DAT_00612560,(CVector3f *)&this_ptr->field_0x10,(CVector3f *)0x0);
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
                     ((CKeyFramedModelInstance *)0x1c570b8);
  puVar3 = (uint *)&pCVar1->field_0x338;
  pCVar4 = &local_28;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(uint *)pCVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    pCVar4 = (CVector3f *)((int)pCVar4 + ((uint)bVar5 * -2 + 1) * 4);
  }
  iVar2 = core_box_cpp_FUN_004207b0(&local_28,0);
  if (iVar2 != 0) {
    core_set_cpp_CDemonSet_setLightingParameters_FUN_00551c30
              (g_CDemonSetPtr,(CVector3f *)&this_ptr->field_0x4,
               (UOrientationVector *)&this_ptr->field_0x10,&local_28,&local_1c,
               (CMatrix3x3f *)&this_ptr->field_0x1c);
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0
              ((CKeyFramedModelInstance *)0x1c570b8,0.0,-1);
  }
  engine_matrix_c_pop_FUN_004839a0();
  return;
}
