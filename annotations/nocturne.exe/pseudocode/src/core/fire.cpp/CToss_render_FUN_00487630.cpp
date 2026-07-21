// Name: core_fire.cpp_CToss_render_FUN_00487630
// Address: 00487630
// Address Range: [[00487630, 00487694]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CToss_render_FUN_00487630(int param_1)

#include "nocturne.h"

void __cdecl core_fire_cpp_CToss_render_FUN_00487630(int param_1)

{
  if (*(float *)(param_1 + 0x3dc) <= 0.0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
            (DAT_005ae704,param_1 + 0x180);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
            (DAT_005ae704,param_1 + 0x18c,0);
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0(param_1 + 4,0,0xffffffff)
  ;
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0(DAT_005ae704);
  return;
}
