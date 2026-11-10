// Name: core_dpart.cpp_FUN_0046682e
// Address: 0046682e
// Address Range: [[0046682e, 00466984]]
// Convention: unknown
// Signature: void core_dpart_cpp_FUN_0046682e(int param_1)

#include "nocturne.h"

void core_dpart_cpp_FUN_0046682e(int param_1)

{
  int iVar1;
  UIntegerFloat *pUVar2;
  uint uVar3;
  SMRGLHeaderPrimitive SStack_58;
  UIntegerFloat UStack_40;
  UIntegerFloat UStack_34;
  UIntegerFloat UStack_28;
  int iStack_1c;
  
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046d460(DAT_005f2afc,0);
  engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046d450(DAT_005f2afc,0);
  iVar1 = *(int *)(param_1 + 0x20) / *(int *)(param_1 + 0x28);
  core_set_cpp_CDemonSet_rotateVerticies_FUN_00538ad0
            (g_CDemonSetPtr,iVar1,
             (CVector3i *)(*(int *)(param_1 + 900) * iVar1 * 0xc + *(int *)(param_1 + 0x2c)));
  if (DAT_005f2afc->advanced_culling_enabled != 0) {
    engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500(DAT_005f2afc,1);
  }
  pUVar2 = *(UIntegerFloat **)(param_1 + 0x34);
  uVar3 = 0;
  if (0 < *(int *)(param_1 + 0x24)) {
    do {
      iVar1 = engine_3d_c_isVisiblePlane_FUN_00403920(pUVar2);
      if (iVar1 != 0) {
        engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0046d3c0
                  (DAT_005f2afc,-((uVar3 & 0x7f) + 0x80));
        SStack_58.surface_normal.A = *pUVar2;
        SStack_58.surface_normal.B = pUVar2[1];
        SStack_58.surface_normal.C = pUVar2[2];
        SStack_58.surface_normal.D = pUVar2[3];
        UStack_40 = pUVar2[4];
        UStack_34 = pUVar2[5];
        UStack_28 = pUVar2[6];
        if (pUVar2[7].i == -1) {
          SStack_58.base.count = 3;
        }
        else {
          SStack_58.base.count = 4;
          iStack_1c = pUVar2[7].i;
        }
        core_set_cpp_CDemonSet_renderTexturedPrimitiveListVariant_FUN_0053ad70
                  (g_CDemonSetPtr,&SStack_58,1);
      }
      uVar3 = uVar3 + 1;
      pUVar2 = pUVar2 + 8;
    } while ((int)uVar3 < *(int *)(param_1 + 0x24));
  }
  engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046d450(DAT_005f2afc,1);
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500(DAT_005f2afc,1);
  return;
}
