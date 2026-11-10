// Name: core_goggles.cpp_CGoggles_renderOpaque_FUN_004cc760
// Address: 004cc760
// Address Range: [[004cc760, 004cc7f3]]
// Convention: __cdecl
// Signature: int __cdecl core_goggles_cpp_CGoggles_renderOpaque_FUN_004cc760(CGoggles *this_ptr)

#include "nocturne.h"

int __cdecl core_goggles_cpp_CGoggles_renderOpaque_FUN_004cc760(CGoggles *this_ptr)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStack_3c [6];
  uint auStack_24 [6];
  
  bVar4 = 0;
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
            (DAT_005f2afc,(CVector3f *)&this_ptr->field_0x20);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
            (DAT_005f2afc,(CVector3f *)&this_ptr->field_0x30,(CVector3f *)0x0);
  (**(code **)(*(int *)&this_ptr->field_0x154 + 0x1c))(this_ptr,0);
  puVar2 = auStack_24;
  puVar3 = auStack_3c;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  iVar1 = core_box_cpp_FUN_0041daf0(auStack_3c);
  if (iVar1 != 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540
              ((CKeyFramedModelInstance *)&this_ptr->field_0x158,0.0,-1);
  }
  engine_matrix_c_pop_FUN_0046d080();
  return iVar1;
}
