// Name: core_fire.cpp_CStake_render_FUN_004835d0
// Address: 004835d0
// Address Range: [[004835d0, 004836a2]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CStake_render_FUN_004835d0(int param_1)

#include "nocturne.h"

void __cdecl core_fire_cpp_CStake_render_FUN_004835d0(int param_1)

{
  int iVar1;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
            (DAT_005ae704,param_1 + 4);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0(DAT_005ae704,param_1 + 0x10,0)
  ;
  iVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(0x1c08d48);
  local_24 = *(uint *)(iVar1 + 0x338);
  local_20 = *(uint *)(iVar1 + 0x33c);
  local_1c = *(uint *)(iVar1 + 0x340);
  local_18 = *(uint *)(iVar1 + 0x344);
  local_14 = *(uint *)(iVar1 + 0x348);
  local_10 = *(uint *)(iVar1 + 0x34c);
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(&local_24,0);
  if (iVar1 != 0) {
    core_set_cpp_CDemonSet_setLightingParameters_FUN_0050adc0
              (0x01E57284,param_1 + 4,param_1 + 0x10,&local_24,&local_18,param_1 + 0x1c);
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0(0x1c08d48,0,0xffffffff)
    ;
  }
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0(DAT_005ae704);
  return;
}
