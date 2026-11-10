// Name: core_goggles.cpp_CGoggles_renderOpaque_FUN_004e3bd0
// Address: 004e3bd0
// Address Range: [[004e3bd0, 004e3c63]]
// Convention: __cdecl
// Signature: int __cdecl core_goggles_cpp_CGoggles_renderOpaque_FUN_004e3bd0(CGoggles *this_ptr)

#include "nocturne.h"

int __cdecl core_goggles_cpp_CGoggles_renderOpaque_FUN_004e3bd0(CGoggles *this_ptr)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStack_3c [6];
  uint auStack_24 [6];
  
  bVar4 = 0;
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
            (DAT_00612560,(CVector3f *)&this_ptr->field_0x20);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
            (DAT_00612560,(CVector3f *)&this_ptr->field_0x30,(CVector3f *)0x0);
  (**(code **)(*(int *)&this_ptr->field_0x154 + 0x1c))(this_ptr,0);
  puVar2 = auStack_24;
  puVar3 = auStack_3c;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  iVar1 = core_box_cpp_FUN_004207b0(auStack_3c);
  if (iVar1 != 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0
              ((CKeyFramedModelInstance *)&this_ptr->field_0x158,0.0,-1);
  }
  engine_matrix_c_pop_FUN_004839a0();
  return iVar1;
}
