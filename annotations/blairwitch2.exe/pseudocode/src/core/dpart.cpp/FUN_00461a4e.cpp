// Name: core_dpart.cpp_FUN_00461a4e
// Address: 00461a4e
// Address Range: [[00461a4e, 00461ba4]]
// Convention: unknown
// Signature: void core_dpart_cpp_FUN_00461a4e(int param_1)

#include "nocturne.h"

void core_dpart_cpp_FUN_00461a4e(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  byte auStack_58 [4];
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_34;
  uint uStack_28;
  int iStack_1c;
  
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046b880(DAT_0060b280,0);
  engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046b870(DAT_0060b280,0);
  iVar1 = *(int *)(param_1 + 0x20) / *(int *)(param_1 + 0x28);
  core_set_cpp_CDemonSet_rotateVerticies_FUN_00531e90
            (g_CDemonSetPtr,iVar1,
             (CVector3i *)(*(int *)(param_1 + 900) * iVar1 * 0xc + *(int *)(param_1 + 0x2c)));
  if (*(int *)(DAT_0060b280 + 0x18) != 0) {
    engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920(DAT_0060b280,1);
  }
  puVar2 = *(uint **)(param_1 + 0x34);
  uVar3 = 0;
  if (0 < *(int *)(param_1 + 0x24)) {
    do {
      iVar1 = engine_3d_c_isVisiblePlane_FUN_00403970(puVar2);
      if (iVar1 != 0) {
        engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0046b7e0
                  (DAT_0060b280,-((uVar3 & 0x7f) + 0x80));
        uStack_50 = *puVar2;
        uStack_4c = puVar2[1];
        uStack_48 = puVar2[2];
        uStack_44 = puVar2[3];
        uStack_40 = puVar2[4];
        uStack_34 = puVar2[5];
        uStack_28 = puVar2[6];
        if (puVar2[7] == -1) {
          uStack_54 = 3;
        }
        else {
          uStack_54 = 4;
          iStack_1c = puVar2[7];
        }
        core_set_cpp_FUN_00534130(g_CDemonSetPtr,auStack_58,1);
      }
      uVar3 = uVar3 + 1;
      puVar2 = puVar2 + 8;
    } while ((int)uVar3 < *(int *)(param_1 + 0x24));
  }
  engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046b870(DAT_0060b280,1);
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920(DAT_0060b280,1);
  return;
}
