// Name: core_crate.cpp_FUN_0043a130
// Address: 0043a130
// Address Range: [[0043a130, 0043a1af] [0043a1b1, 0043a1c5]]
// Convention: unknown
// Signature: int core_crate_cpp_FUN_0043a130(int param_1)

#include "nocturne.h"

int core_crate_cpp_FUN_0043a130(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStack_3c [6];
  uint auStack_24 [6];
  
  bVar4 = 0;
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
            (DAT_0060b280,(CVector3f *)(param_1 + 0x20));
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
            (DAT_0060b280,(CVector3f *)(param_1 + 0x30),(CVector3f *)0x0);
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0x24))(param_1,0);
  puVar2 = auStack_24;
  puVar3 = auStack_3c;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  iVar1 = core_box_cpp_FUN_0041a840(auStack_3c);
  if (iVar1 != 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
              ((CKeyFramedModelInstance *)(param_1 + 0x2b4),0.0,-1);
  }
  engine_matrix_c_pop_FUN_0046b4a0();
  return iVar1;
}
