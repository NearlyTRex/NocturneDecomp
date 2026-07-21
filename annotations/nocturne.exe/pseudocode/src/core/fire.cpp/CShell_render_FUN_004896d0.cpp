// Name: core_fire.cpp_CShell_render_FUN_004896d0
// Address: 004896d0
// Address Range: [[004896d0, 004897ca]]
// Convention: unknown
// Signature: void core_fire_cpp_CShell_render_FUN_004896d0(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fire_cpp_CShell_render_FUN_004896d0(float *param_1)

{
  uint uVar1;
  int iVar2;
  int local_1c;
  int local_18;
  int local_14;
  
  if (0.0 < param_1[6]) {
    uVar1 = *DAT_005ae704;
    local_1c = (int)ROUND(*param_1 * _DAT_0059d1f8);
    local_18 = (int)ROUND(param_1[1] * _DAT_0059d1f8);
    local_14 = (int)ROUND(param_1[2] * _DAT_0059d1f8);
    wincore_windll_cpp_transformPoint_FUN_00530a25(uVar1,&local_1c);
    iVar2 = engine_drender_cpp_CDemonRenderer_depthTest_FUN_00461f80(DAT_005ae704,uVar1);
    if (iVar2 != 0) {
      iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704);
      if (iVar2 == 0) {
        core_dcamera_cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00447670(_DAT_007f7370,param_1,0);
      }
      core_set_cpp_CDemonSet_setLightingParameters_FUN_0050adc0
                (0x01E57284,param_1,param_1 + 0xe,&DAT_02dd1184,&DAT_02dd1184,0);
      engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
                (DAT_005ae704,param_1);
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
                (DAT_005ae704,param_1 + 0xe,0);
      core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00453040(param_1[0x15],0,0,0xffffffff);
      engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0(DAT_005ae704);
      return;
    }
  }
  return;
}
