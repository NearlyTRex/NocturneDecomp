// Name: core_setedit.cpp_CDemonSet_buildCameraDepthData_FUN_00580310
// Address: 00580310
// MANUAL RECONSTRUCTION
// Address Range: [[00580310, 00580553]]
// Convention: __cdecl
// Signature: void __cdecl core_setedit_cpp_CDemonSet_buildCameraDepthData_FUN_00580310(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_setedit_cpp_CDemonSet_buildCameraDepthData_FUN_00580310(CDemonSet *this_ptr)

{
  SCameraDepthEntry *pSVar1;
  int iVar4;
  int iVar5;
  int local_18;
  int iVar1;

  if ((g_CameraDepthData == (SCameraDepthEntry *)0x0) && (0 < this_ptr->camera_count)) {
    g_CameraDepthData = (SCameraDepthEntry *)
         shape_memdbg_cpp_debugAllocTracked2_FUN_0050f1f0
                   (this_ptr->camera_count * 0x4b030,"..\\core\\setedit.cpp",0x1007);
    if (g_CameraDepthData == (SCameraDepthEntry *)0x0) {
      g_CurrentFilename = "..\\core\\setedit.cpp";
      g_CurrentLineNumber = 0x1008;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
    }
    for (local_18 = 0; local_18 < this_ptr->camera_count; local_18++) {
      pSVar1 = &g_CameraDepthData[local_18];
      engine_drender_cpp_CDemonRenderer_pushViewport_FUN_0048c890
                (g_CDemonRendererPtr2,0,0,0x140,0xf0);
      engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
                (g_CDemonRendererPtr2,&this_ptr->cameras[local_18].position);
      engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_0048c650
                (g_CDemonRendererPtr2,this_ptr->cameras[local_18].projection_scale);
      engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0
                (g_CDemonRendererPtr2,&this_ptr->cameras[local_18].orientation);
      pSVar1->transform = g_TransformMatrix;
      pSVar1->origin.x = g_CameraOriginX;
      pSVar1->origin.y = g_CameraOriginY;
      pSVar1->origin.z = g_CameraOriginZ;
      engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                (g_CDemonRendererPtr2,&g_ZeroVector.f);
      core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0056a190(this_ptr,9999.9,0);
      for (iVar5 = 0; iVar5 < 240; iVar5++) {
        for (iVar4 = 0; iVar4 < 320; iVar4++) {
          iVar1 = (int)g_ZBufferScanlineArray[iVar5][iVar4];
          if (iVar1 < 1) {
            pSVar1->depth_lookup[iVar4][iVar5] = 0x7fffffff;
          }
          else {
            pSVar1->depth_lookup[iVar4][iVar5] = (int)(0x7fffffff / (longlong)iVar1);
          }
        }
      }
      engine_drender_cpp_CDemonRenderer_popViewport_FUN_0048c8c0(g_CDemonRendererPtr2);
    }
  }
  return;
}
