// Name: core_dpart.cpp_FUN_00461a4e
// Address: 00461a4e
// Address Range: [[00461a4e, 00461ba4]]
// Convention: unknown
// Signature: void core_dpart_cpp_FUN_00461a4e(int param_1)

#include "nocturne.h"

void core_dpart_cpp_FUN_00461a4e(int param_1)

{
  int iVar1;
  UIntegerFloat *plane;
  uint uVar2;
  SMRGLHeaderPrimitive SStack_58;
  UIntegerFloat UStack_40;
  UIntegerFloat UStack_34;
  UIntegerFloat UStack_28;
  int iStack_1c;
  
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046b880(DAT_0060b280,0);
  engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046b870(DAT_0060b280,0);
  iVar1 = *(int *)(param_1 + 0x20) / *(int *)(param_1 + 0x28);
  core_set_cpp_CDemonSet_rotateVerticies_FUN_00531e90
            (g_CDemonSetPtr,iVar1,
             (CVector3i *)(*(int *)(param_1 + 900) * iVar1 * 0xc + *(int *)(param_1 + 0x2c)));
  if (DAT_0060b280->advanced_culling_enabled != 0) {
    engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920(DAT_0060b280,1);
  }
  plane = *(UIntegerFloat **)(param_1 + 0x34);
  uVar2 = 0;
  if (0 < *(int *)(param_1 + 0x24)) {
    do {
      iVar1 = engine_3d_c_isVisiblePlane_FUN_00403970((SClipPlane *)plane);
      if (iVar1 != 0) {
        engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0046b7e0
                  (DAT_0060b280,-((uVar2 & 0x7f) + 0x80));
        SStack_58.surface_normal.A = *plane;
        SStack_58.surface_normal.B = plane[1];
        SStack_58.surface_normal.C = plane[2];
        SStack_58.surface_normal.D = plane[3];
        UStack_40 = plane[4];
        UStack_34 = plane[5];
        UStack_28 = plane[6];
        if (plane[7].i == -1) {
          SStack_58.base.count = 3;
        }
        else {
          SStack_58.base.count = 4;
          iStack_1c = plane[7].i;
        }
        core_set_cpp_CDemonSet_renderTexturedPrimitiveListVariant_FUN_00534130
                  (g_CDemonSetPtr,&SStack_58,1);
      }
      uVar2 = uVar2 + 1;
      plane = plane + 8;
    } while ((int)uVar2 < *(int *)(param_1 + 0x24));
  }
  engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046b870(DAT_0060b280,1);
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920(DAT_0060b280,1);
  return;
}
