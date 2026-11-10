// Name: core_dcamera.cpp_CDemonCamera_testVisibility_FUN_004512f0
// Address: 004512f0
// Address Range: [[004512f0, 004514f7]]
// Convention: __cdecl
// Signature: int __cdecl core_dcamera_cpp_CDemonCamera_testVisibility_FUN_004512f0(CDemonCamera *this_ptr,CVector3i *corners)

#include "nocturne.h"

int __cdecl core_dcamera_cpp_CDemonCamera_testVisibility_FUN_004512f0(CDemonCamera *this_ptr,CVector3i *corners)

{
  int iVar1;
  CVector3i *pCVar2;
  int iVar3;
  SProjectedVertex *output;
  SMRGLHeaderPrimitive SStack_38;
  int iStack_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  
  engine_drender_cpp_CDemonRenderer_getCameraAndViewportState_FUN_0046e880
            (DAT_005f2afc,(SCameraViewportState *)0x15484dc);
  output = (SProjectedVertex *)&DAT_0060b014;
  pCVar2 = corners + 8;
  engine_drender_cpp_CDemonRenderer_setupCameraAndViewport_FUN_0046e720
            (DAT_005f2afc,(SCameraViewportState *)0x14a01f0);
  do {
    engine_special_cpp_FUN_0056356c(output,corners);
    corners = corners + 1;
    output = output + 0x30;
  } while (corners != pCVar2);
  SStack_38.surface_normal.D.i = (uint)corners ^ (uint)pCVar2;
  SStack_38.base.count = 4;
  SStack_38.surface_normal.C.i = 0;
  SStack_38.surface_normal.B.i = 0;
  SStack_38.surface_normal.A.i = 0;
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046d460(DAT_005f2afc,1);
  iVar3 = 0;
  iStack_20 = 0;
  uStack_1c = 4;
  uStack_14 = 2;
  uStack_18 = 6;
  iVar1 = core_set_cpp_CDemonSet_renderSinglePrimitive_FUN_0053b250(g_CDemonSetPtr,&SStack_38);
  if (iVar1 == 0) {
    iStack_20 = 1;
    uStack_1c = 3;
    uStack_18 = 7;
    uStack_14 = 5;
    iVar1 = core_set_cpp_CDemonSet_renderSinglePrimitive_FUN_0053b250(g_CDemonSetPtr,&SStack_38);
    if (iVar1 == 0) {
      uStack_18 = 5;
      uStack_1c = 1;
      uStack_14 = 4;
      iStack_20 = iVar1;
      iVar1 = core_set_cpp_CDemonSet_renderSinglePrimitive_FUN_0053b250(g_CDemonSetPtr,&SStack_38);
      if (iVar1 == 0) {
        uStack_1c = 6;
        iStack_20 = 2;
        uStack_18 = 7;
        uStack_14 = 3;
        iVar1 = core_set_cpp_CDemonSet_renderSinglePrimitive_FUN_0053b250(g_CDemonSetPtr,&SStack_38)
        ;
        if (iVar1 == 0) {
          uStack_18 = 3;
          iStack_20 = 0;
          uStack_1c = 2;
          uStack_14 = 1;
          iVar1 = core_set_cpp_CDemonSet_renderSinglePrimitive_FUN_0053b250
                            (g_CDemonSetPtr,&SStack_38);
          if (iVar1 == 0) {
            uStack_14 = 6;
            iStack_20 = 4;
            uStack_1c = 5;
            uStack_18 = 7;
            iVar1 = core_set_cpp_CDemonSet_renderSinglePrimitive_FUN_0053b250
                              (g_CDemonSetPtr,&SStack_38);
            if (iVar1 == 0) goto LAB_004513a7;
          }
        }
      }
    }
  }
  iVar3 = 1;
LAB_004513a7:
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046d460(DAT_005f2afc,0);
  engine_drender_cpp_CDemonRenderer_setupCameraAndViewport_FUN_0046e720
            (DAT_005f2afc,(SCameraViewportState *)0x15484dc);
  return iVar3;
}
