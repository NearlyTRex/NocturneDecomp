// Name: engine_drender.cpp_FUN_004574e0
// Address: 004574e0
// Address Range: [[004574e0, 00457634]]
// Convention: unknown
// Signature: void engine_drender_cpp_FUN_004574e0(int param_1)

#include "nocturne.h"

void engine_drender_cpp_FUN_004574e0(int param_1)

{
  int iVar1;
  UIntegerFloat *plane;
  uint uVar2;
  SMRGLHeaderPrimitive local_58;
  UIntegerFloat local_40;
  UIntegerFloat local_34;
  UIntegerFloat local_28;
  int local_1c;
  
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(DAT_005ae704,0);
  engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00460fa0(DAT_005ae704,0);
  iVar1 = *(int *)(param_1 + 0x20) / *(int *)(param_1 + 0x28);
  core_set_cpp_CDemonSet_rotateVerticies_FUN_0050c200
            (g_CDemonSet_PTR_005be368,iVar1,
             (CVector3i *)(*(int *)(param_1 + 900) * iVar1 * 0xc + *(int *)(param_1 + 0x2c)));
  if (DAT_005ae704->advanced_culling_enabled != 0) {
    engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00461050(DAT_005ae704,1);
  }
  plane = *(UIntegerFloat **)(param_1 + 0x34);
  uVar2 = 0;
  if (0 < *(int *)(param_1 + 0x24)) {
    do {
      iVar1 = engine_3d_c_isVisiblePlane_FUN_00404610((SClipPlane *)plane);
      if (iVar1 != 0) {
        engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_00460f10
                  (DAT_005ae704,-((uVar2 & 0x7f) + 0x80));
        local_58.surface_normal.A = *plane;
        local_58.surface_normal.B = plane[1];
        local_58.surface_normal.C = plane[2];
        local_58.surface_normal.D = plane[3];
        local_40 = plane[4];
        local_34 = plane[5];
        local_28 = plane[6];
        if (plane[7].i == -1) {
          local_58.base.count = 3;
        }
        else {
          local_58.base.count = 4;
          local_1c = plane[7].i;
        }
        core_set_cpp_CDemonSet_renderTexturedPrimitiveListVariant_FUN_0050dfe0
                  (g_CDemonSet_PTR_005be368,&local_58,1);
      }
      uVar2 = uVar2 + 1;
      plane = plane + 8;
    } while ((int)uVar2 < *(int *)(param_1 + 0x24));
  }
  engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00460fa0(DAT_005ae704,1);
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00461050(DAT_005ae704,1);
  return;
}
