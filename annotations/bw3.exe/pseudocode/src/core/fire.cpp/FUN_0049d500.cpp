// Name: core_fire.cpp_FUN_0049d500
// Address: 0049d500
// Address Range: [[0049d500, 0049d56f]]
// Convention: unknown
// Signature: uint core_fire_cpp_FUN_0049d500(int param_1)

#include "nocturne.h"

uint core_fire_cpp_FUN_0049d500(int param_1)

{
  float fVar1;
  uint extraout_EAX;
  
  fVar1 = *(float *)(param_1 + 0x3dc);
  if (0.0 >= fVar1) {
    return (uint)(ushort)((ushort)(0.0 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 |
                         (ushort)(fVar1 == 0.0) << 0xe);
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
            (DAT_005f2afc,(CVector3f *)(param_1 + 0x180));
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
            (DAT_005f2afc,(CVector3f *)(param_1 + 0x18c),(CVector3f *)0x0);
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540
            ((CKeyFramedModelInstance *)(param_1 + 4),0.0,-1);
  engine_drender_cpp_pop_FUN_0046d080();
  return extraout_EAX;
}
