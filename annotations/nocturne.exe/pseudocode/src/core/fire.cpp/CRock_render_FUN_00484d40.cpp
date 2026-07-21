// Name: core_fire.cpp_CRock_render_FUN_00484d40
// Address: 00484d40
// Address Range: [[00484d40, 00484e0a]]
// Convention: unknown
// Signature: void core_fire_cpp_CRock_render_FUN_00484d40(int param_1)

#include "nocturne.h"

void core_fire_cpp_CRock_render_FUN_00484d40(int param_1)

{
  uint *puVar1;
  int iVar2;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00(DAT_005ae704,param_1);
  engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_00460a50(DAT_005ae704,param_1 + 0x38,0)
  ;
  puVar1 = *(uint **)(*(int *)(param_1 + 0x44) + 0x350);
  local_20 = *puVar1;
  local_1c = puVar1[1];
  local_18 = puVar1[2];
  local_14 = puVar1[3];
  local_10 = puVar1[4];
  local_c = puVar1[5];
  iVar2 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(&local_20,0);
  if (iVar2 != 0) {
    core_set_cpp_CDemonSet_setLightingParameters_FUN_0050adc0
              (0x01E57284,param_1,&DAT_02dd1184,&local_20,&local_14,0);
    core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00453040
              (*(uint *)(param_1 + 0x44),0,0,0xffffffff);
  }
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0(DAT_005ae704);
  return;
}
