// Name: core_dcamera.cpp_CDemonCamera_testVisibility_FUN_004544f0
// Address: 004544f0
// Address Range: [[004544f0, 004546f7]]
// Convention: __cdecl
// Signature: int __cdecl core_dcamera_cpp_CDemonCamera_testVisibility_FUN_004544f0(CDemonCamera *this_ptr,CVector3i *corners)

#include "nocturne.h"

int __cdecl core_dcamera_cpp_CDemonCamera_testVisibility_FUN_004544f0(CDemonCamera *this_ptr,CVector3i *corners)

{
  int iVar1;
  int iVar2;
  CVector3i *pCVar2;
  int iVar3;
  SRenderVertex *output;
  SMRGLHeaderPrimitive local_38;
  int local_20;
  
  engine_drender_cpp_CDemonRenderer_getCameraAndViewportState_FUN_0048de20
            (g_CDemonRendererPtr2,&g_SavedCameraState);
  output = g_RenderVertexBuffer;
  pCVar2 = corners + 8;
  engine_drender_cpp_CDemonRenderer_setupCameraAndViewport_FUN_0048dcc0
            (g_CDemonRendererPtr2,&g_BackgroundSavedCameraState);
  do {
    wincore_windll_cpp_transformPoint_FUN_005b5a25(&output->projected_vertex,corners);
    corners = corners + 1;
    output = output + 1;
  } while (corners != pCVar2);
  local_38.surface_normal.D = (uint)corners ^ (uint)pCVar2;
  local_38.base.count = 4;
  local_38.surface_normal.C = 0;
  local_38.surface_normal.B = 0;
  local_38.surface_normal.A = 0;
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr2,1);
  iVar3 = 0;
  iVar1 = core_set_cpp_CDemonSet_renderSinglePrimitive_FUN_00570df0(g_CDemonSetPtr,&local_38);
  if ((((iVar1 != 0) ||
       (iVar2 = core_set_cpp_CDemonSet_renderSinglePrimitive_FUN_00570df0(g_CDemonSetPtr,&local_38),
       iVar2 != 0)) ||
      (iVar2 = core_set_cpp_CDemonSet_renderSinglePrimitive_FUN_00570df0(g_CDemonSetPtr,&local_38),
      iVar2 != 0)) ||
     (((iVar2 = core_set_cpp_CDemonSet_renderSinglePrimitive_FUN_00570df0(g_CDemonSetPtr,&local_38),
       iVar2 != 0 ||
       (iVar2 = core_set_cpp_CDemonSet_renderSinglePrimitive_FUN_00570df0(g_CDemonSetPtr,&local_38),
       iVar2 != 0)) ||
      (iVar2 = core_set_cpp_CDemonSet_renderSinglePrimitive_FUN_00570df0(g_CDemonSetPtr,&local_38),
      iVar2 != 0)))) {
    iVar3 = 1;
  }
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr2,0);
  engine_drender_cpp_CDemonRenderer_setupCameraAndViewport_FUN_0048dcc0
            (g_CDemonRendererPtr2,&g_SavedCameraState);
  return iVar3;
}
