// Name: core_setdir.cpp_FUN_00513720
// Address: 00513720
// Address Range: [[00513720, 005138a6]]
// Convention: unknown
// Signature: void core_setdir_cpp_FUN_00513720(int *param_1)

#include "nocturne.h"

void core_setdir_cpp_FUN_00513720(int *param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  byte bVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  uint *local_18;
  int *local_14;
  
  bVar8 = 0;
  uVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704);
  engine_drender_cpp_CDemonRenderer_setFaceCount_FUN_00461070(DAT_005ae704,0,uVar1);
  engine_drender_cpp_CDemonRenderer_pushViewport_FUN_00460e40(DAT_005ae704,0,0,0x40,0x30);
  iVar5 = 0;
  if (0 < *param_1) {
    piVar11 = param_1 + 0x44;
    local_14 = param_1 + 0x41;
    local_18 = (uint *)&DAT_020875f8;
    piVar9 = param_1 + 1;
    do {
      piVar10 = piVar9;
      engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_00460700
                (0x01B4D738,local_14,uVar1,piVar9,piVar11);
      engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_00460c00
                (0x01B4D738,piVar9[iVar5 * 0x68 + 0x50]);
      engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_00460780(0x01B4D738,piVar11);
      engine_drender_cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_004609d0(0x01B4D738,0x26635f8)
      ;
      engine_special_cpp_clearZBufferNative_FUN_0052eed4();
      core_set_cpp_CDemonSet_renderSceneGeometry_FUN_00507c80(param_1,0x461c3f9a,0);
      iVar4 = 0;
      puVar3 = local_18;
      do {
        puVar6 = *(uint **)(&DAT_01bd4260 + iVar4);
        puVar7 = puVar3;
        for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
          puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
        }
        for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
          *(byte *)puVar7 = *(byte *)puVar6;
          puVar6 = (uint *)((int)puVar6 + (uint)bVar8 * -2 + 1);
          puVar7 = (uint *)((int)puVar7 + (uint)bVar8 * -2 + 1);
        }
        iVar4 = iVar4 + 4;
        puVar3 = puVar3 + 0x40;
      } while (iVar4 != 0xc0);
      iVar5 = iVar5 + 1;
      piVar11 = piVar11 + 0x68;
      local_18 = local_18 + 0xc00;
      local_14 = local_14 + 0x68;
      piVar9 = piVar10;
    } while (iVar5 < *param_1);
  }
  engine_drender_cpp_CDemonRenderer_popViewport_FUN_00460e70(DAT_005ae704);
  engine_drender_cpp_CDemonRenderer_setFaceCount_FUN_00461070(DAT_005ae704,uVar1);
  return;
}
