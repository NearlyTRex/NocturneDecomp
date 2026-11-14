// Name: core_dpart.cpp_FUN_00466830
// Address: 00466830
// Address Range: [[00466830, 00466984]]
// Convention: unknown
// Signature: void core_dpart_cpp_FUN_00466830(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void core_dpart_cpp_FUN_00466830(void)

{
  int iVar1;
  UIntegerFloat *plane;
  uint uVar2;
  int in_stack_00000004;
  SMRGLHeaderPrimitive SStack_58;
  UIntegerFloat UStack_40;
  UIntegerFloat UStack_34;
  UIntegerFloat UStack_28;
  int iStack_1c;
  
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046d460(DAT_005f2afc,0);
  engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046d450(DAT_005f2afc,0);
  iVar1 = *(int *)(in_stack_00000004 + 0x20) / *(int *)(in_stack_00000004 + 0x28);
  core_set_cpp_CDemonSet_rotateVerticies_FUN_00538ad0
            (g_CDemonSetPtr,iVar1,
             (CVector3i *)
             (*(int *)(in_stack_00000004 + 900) * iVar1 * 0xc + *(int *)(in_stack_00000004 + 0x2c)))
  ;
  if (DAT_005f2afc->advanced_culling_enabled != 0) {
    engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500(DAT_005f2afc,1);
  }
  plane = *(UIntegerFloat **)(in_stack_00000004 + 0x34);
  uVar2 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0x24)) {
    do {
      iVar1 = engine_3d_c_isVisiblePlane_FUN_00403920((SClipPlane *)plane);
      if (iVar1 != 0) {
        engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0046d3c0
                  (DAT_005f2afc,-((uVar2 & 0x7f) + 0x80));
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
        core_set_cpp_CDemonSet_renderTexturedPrimitiveListVariant_FUN_0053ad70
                  (g_CDemonSetPtr,&SStack_58,1);
      }
      uVar2 = uVar2 + 1;
      plane = plane + 8;
    } while ((int)uVar2 < *(int *)(in_stack_00000004 + 0x24));
  }
  engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046d450(DAT_005f2afc,1);
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500(DAT_005f2afc,1);
  return;
}
