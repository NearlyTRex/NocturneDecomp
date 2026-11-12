// Name: core_dpart.cpp_FUN_00479f5e
// Address: 00479f5e
// Address Range: [[00479f5e, 0047a0b4]]
// Convention: unknown
// Signature: void core_dpart_cpp_FUN_00479f5e(int param_1)

#include "nocturne.h"

void core_dpart_cpp_FUN_00479f5e(int param_1)

{
  int iVar1;
  UIntegerFloat *plane;
  uint uVar2;
  SMRGLHeaderPrimitive SStack_58;
  UIntegerFloat UStack_40;
  UIntegerFloat UStack_34;
  UIntegerFloat UStack_28;
  int iStack_1c;
  
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00483d80(DAT_00612560,0);
  engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00483d70(DAT_00612560,0);
  iVar1 = *(int *)(param_1 + 0x20) / *(int *)(param_1 + 0x28);
  core_set_cpp_CDemonSet_rotateVerticies_FUN_00553140
            (g_CDemonSetPtr,iVar1,
             (CVector3i *)(*(int *)(param_1 + 900) * iVar1 * 0xc + *(int *)(param_1 + 0x2c)));
  if (DAT_00612560->advanced_culling_enabled != 0) {
    engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20(DAT_00612560,1);
  }
  plane = *(UIntegerFloat **)(param_1 + 0x34);
  uVar2 = 0;
  if (0 < *(int *)(param_1 + 0x24)) {
    do {
      iVar1 = engine_3d_c_isVisiblePlane_FUN_00403920((SClipPlane *)plane);
      if (iVar1 != 0) {
        engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_00483ce0
                  (DAT_00612560,-((uVar2 & 0x7f) + 0x80));
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
        core_set_cpp_CDemonSet_renderTexturedPrimitiveListVariant_FUN_005553e0
                  (g_CDemonSetPtr,&SStack_58,1);
      }
      uVar2 = uVar2 + 1;
      plane = plane + 8;
    } while ((int)uVar2 < *(int *)(param_1 + 0x24));
  }
  engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00483d70(DAT_00612560,1);
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20(DAT_00612560,1);
  return;
}
