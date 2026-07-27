// Name: engine_drender.cpp_FUN_004574e0
// Address: 004574e0
// Address Range: [[004574e0, 00457634]]
// Convention: unknown
// Signature: void engine_drender_cpp_FUN_004574e0(int param_1)

#include "nocturne.h"

void engine_drender_cpp_FUN_004574e0(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  byte local_58 [4];
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_34;
  uint local_28;
  int local_1c;
  
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(DAT_005ae704,0);
  engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00460fa0(DAT_005ae704,0);
  iVar1 = *(int *)(param_1 + 0x20) / *(int *)(param_1 + 0x28);
  core_set_cpp_CDemonSet_rotateVerticies_FUN_0050c200
            (0x01E57284,iVar1,*(int *)(param_1 + 900) * iVar1 * 0xc + *(int *)(param_1 + 0x2c));
  if (*(int *)(DAT_005ae704 + 0x18) != 0) {
    engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00461050(DAT_005ae704,1);
  }
  puVar2 = *(uint **)(param_1 + 0x34);
  uVar3 = 0;
  if (0 < *(int *)(param_1 + 0x24)) {
    do {
      iVar1 = engine_3d_c_isVisiblePlane_FUN_00404610(puVar2);
      if (iVar1 != 0) {
        engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_00460f10
                  (DAT_005ae704,-((uVar3 & 0x7f) + 0x80));
        local_50 = *puVar2;
        local_4c = puVar2[1];
        local_48 = puVar2[2];
        local_44 = puVar2[3];
        local_40 = puVar2[4];
        local_34 = puVar2[5];
        local_28 = puVar2[6];
        if (puVar2[7] == -1) {
          local_54 = 3;
        }
        else {
          local_54 = 4;
          local_1c = puVar2[7];
        }
        core_set_cpp_FUN_0050dfe0(0x01E57284,local_58,1);
      }
      uVar3 = uVar3 + 1;
      puVar2 = puVar2 + 8;
    } while ((int)uVar3 < *(int *)(param_1 + 0x24));
  }
  engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00460fa0(DAT_005ae704,1);
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00461050(DAT_005ae704,1);
  return;
}
