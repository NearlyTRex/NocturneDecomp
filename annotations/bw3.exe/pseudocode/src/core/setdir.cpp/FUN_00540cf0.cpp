// Name: core_setdir.cpp_FUN_00540cf0
// Address: 00540cf0
// Address Range: [[00540cf0, 00540e76]]
// Convention: unknown
// Signature: void core_setdir_cpp_FUN_00540cf0(CDemonSet *param_1)

#include "nocturne.h"

void core_setdir_cpp_FUN_00540cf0(CDemonSet *param_1)

{
  int value;
  int iVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  CVector3f *local_1c;
  uint *local_18;
  CVector3f *local_14;
  
  bVar7 = 0;
  value = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046d540(DAT_005f2afc);
  engine_drender_cpp_CDemonRenderer_setShadowPass_FUN_0046d520(DAT_005f2afc,0);
  engine_matrix_c_FUN_0046d2f0(DAT_005f2afc,0,0,0x40,0x30);
  iVar4 = 0;
  if (0 < param_1->camera_count) {
    local_1c = &param_1->cameras[0].orientation;
    local_14 = &param_1->cameras[0].position;
    local_18 = (uint *)&DAT_0212551c;
    do {
      engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046cb90
                (0x01BDD7E4,local_14);
      engine_matrix_c_FUN_0046d090(0x01BDD7E4,param_1->cameras[iVar4].projection_scale);
      engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_0046cc10(0x01BDD7E4,local_1c);
      engine_drender_cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_0046ce60
                (0x01BDD7E4,(CVector3i *)0x270151c);
      engine_special_cpp_clearZBufferNative_FUN_00560dd4();
      core_set_cpp_CDemonSet_renderSceneGeometry_FUN_00533b80(param_1,9999.9,0);
      iVar3 = 0;
      puVar2 = local_18;
      do {
        puVar5 = *(uint **)(&DAT_01c60dac + iVar3);
        puVar6 = puVar2;
        for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
          puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
        }
        for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
          *(byte *)puVar6 = *(byte *)puVar5;
          puVar5 = (uint *)((int)puVar5 + (uint)bVar7 * -2 + 1);
          puVar6 = (uint *)((int)puVar6 + (uint)bVar7 * -2 + 1);
        }
        iVar3 = iVar3 + 4;
        puVar2 = puVar2 + 0x40;
      } while (iVar3 != 0xc0);
      iVar4 = iVar4 + 1;
      local_1c = local_1c + 0x23;
      local_18 = local_18 + 0xc00;
      local_14 = local_14 + 0x23;
    } while (iVar4 < param_1->camera_count);
  }
  engine_matrix_c_popViewport_FUN_0046d320();
  engine_drender_cpp_CDemonRenderer_setShadowPass_FUN_0046d520(DAT_005f2afc,value);
  return;
}
