// Name: core_dcamera.cpp_CDemonCamera_testVisibility_FUN_00443af0
// Address: 00443af0
// Address Range: [[00443af0, 00443cf7]]
// Convention: __cdecl
// Signature: int __cdecl core_dcamera_cpp_CDemonCamera_testVisibility_FUN_00443af0(CDemonCamera *this_ptr,CVector3i *corners)

#include "nocturne.h"

int __cdecl core_dcamera_cpp_CDemonCamera_testVisibility_FUN_00443af0(CDemonCamera *this_ptr,CVector3i *corners)

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
  
  engine_drender_cpp_CDemonRenderer_getCameraAndViewportState_FUN_0046cca0
            (DAT_0060b280,(SCameraViewportState *)0x151072c);
  output = (SProjectedVertex *)&DAT_00622014;
  pCVar2 = corners + 8;
  engine_drender_cpp_CDemonRenderer_setupCameraAndViewport_FUN_0046cb40
            (DAT_0060b280,(SCameraViewportState *)0x1468440);
  do {
    engine_special_cpp_FUN_0055d9ec(output,corners);
    corners = corners + 1;
    output = output + 2;
  } while (corners != pCVar2);
  SStack_38.surface_normal.D.i = (uint)corners ^ (uint)pCVar2;
  SStack_38.base.count = 4;
  SStack_38.surface_normal.C.i = 0;
  SStack_38.surface_normal.B.i = 0;
  SStack_38.surface_normal.A.i = 0;
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046b880(DAT_0060b280,1);
  iVar3 = 0;
  iStack_20 = 0;
  uStack_1c = 4;
  uStack_14 = 2;
  uStack_18 = 6;
  iVar1 = core_set_cpp_CDemonSet_renderSinglePrimitive_FUN_00534610(g_CDemonSetPtr,&SStack_38);
  if (iVar1 == 0) {
    iStack_20 = 1;
    uStack_1c = 3;
    uStack_18 = 7;
    uStack_14 = 5;
    iVar1 = core_set_cpp_CDemonSet_renderSinglePrimitive_FUN_00534610(g_CDemonSetPtr,&SStack_38);
    if (iVar1 == 0) {
      uStack_18 = 5;
      uStack_1c = 1;
      uStack_14 = 4;
      iStack_20 = iVar1;
      iVar1 = core_set_cpp_CDemonSet_renderSinglePrimitive_FUN_00534610(g_CDemonSetPtr,&SStack_38);
      if (iVar1 == 0) {
        uStack_1c = 6;
        iStack_20 = 2;
        uStack_18 = 7;
        uStack_14 = 3;
        iVar1 = core_set_cpp_CDemonSet_renderSinglePrimitive_FUN_00534610(g_CDemonSetPtr,&SStack_38)
        ;
        if (iVar1 == 0) {
          uStack_18 = 3;
          iStack_20 = 0;
          uStack_1c = 2;
          uStack_14 = 1;
          iVar1 = core_set_cpp_CDemonSet_renderSinglePrimitive_FUN_00534610
                            (g_CDemonSetPtr,&SStack_38);
          if (iVar1 == 0) {
            uStack_14 = 6;
            iStack_20 = 4;
            uStack_1c = 5;
            uStack_18 = 7;
            iVar1 = core_set_cpp_CDemonSet_renderSinglePrimitive_FUN_00534610
                              (g_CDemonSetPtr,&SStack_38);
            if (iVar1 == 0) goto LAB_00443ba7;
          }
        }
      }
    }
  }
  iVar3 = 1;
LAB_00443ba7:
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046b880(DAT_0060b280,0);
  engine_drender_cpp_CDemonRenderer_setupCameraAndViewport_FUN_0046cb40
            (DAT_0060b280,(SCameraViewportState *)0x151072c);
  return iVar3;
}
