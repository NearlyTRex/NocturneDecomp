// Name: core_setedit.cpp_CDemonSet_buildCameraDepthData_FUN_00580310
// Address: 00580310
// Address Range: [[00580310, 00580553]]
// Convention: __cdecl
// Signature: void __cdecl core_setedit_cpp_CDemonSet_buildCameraDepthData_FUN_00580310(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_setedit_cpp_CDemonSet_buildCameraDepthData_FUN_00580310(CDemonSet *this_ptr)

{
  int iVar1;
  CDemonRenderer *this_ptr_00;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_24;
  CVector3i *local_20;
  CVector3f *local_1c;
  int local_18;
  
  if ((g_CameraDepthData == (void *)0x0) && (0 < this_ptr->camera_count)) {
    g_CameraDepthData =
         shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                   (this_ptr->camera_count * 0x4b030,"..\\core\\setedit.cpp",0x1007);
    if (g_CameraDepthData == (void *)0x0) {
      g_CurrentFilename = "..\\core\\setedit.cpp";
      g_CurrentLineNumber = 0x1008;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
    }
    local_18 = 0;
    if (0 < this_ptr->camera_count) {
      local_1c = &this_ptr->cameras[0].orientation;
      local_20 = (CVector3i *)&this_ptr->cameras[0].position;
      local_24 = 0;
      do {
        piVar2 = (int *)(local_24 + (int)g_CameraDepthData);
        engine_drender_cpp_CDemonRenderer_pushViewport_FUN_0048c890
                  (g_CDemonRendererPtr2,0,0,0x140,0xf0);
        engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
                  (g_CDemonRendererPtr2,local_20);
        engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_0048c650
                  (g_CDemonRendererPtr2,this_ptr->cameras[local_18].projection_scale);
        engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0
                  (g_CDemonRendererPtr2,local_1c);
        piVar2[3] = g_TransformMatrix.m[0].x;
        piVar2[4] = g_TransformMatrix.m[0].y;
        piVar2[5] = g_TransformMatrix.m[0].z;
        piVar2[6] = g_TransformMatrix.m[1].x;
        piVar2[7] = g_TransformMatrix.m[1].y;
        piVar2[8] = g_TransformMatrix.m[1].z;
        piVar2[9] = g_TransformMatrix.m[2].x;
        piVar2[10] = g_TransformMatrix.m[2].y;
        piVar2[0xb] = g_TransformMatrix.m[2].z;
        this_ptr_00 = g_CDemonRendererPtr2;
        *piVar2 = g_CameraOriginX;
        piVar2[1] = g_CameraOriginY;
        piVar2[2] = g_CameraOriginZ;
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                  (this_ptr_00,&g_ZeroVector.f);
        core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0056a190(this_ptr,9999.9,0);
        iVar5 = 0;
        do {
          iVar4 = 0;
          iVar3 = (int)piVar2 + iVar5;
          do {
            iVar1 = *(int *)(iVar4 + *(int *)((int)g_ZBufferScanlineArray + iVar5));
            if (iVar1 < 1) {
              *(uint *)(iVar3 + 0x30) = 0x7fffffff;
            }
            else {
              *(int *)(iVar3 + 0x30) = (int)(0x7fffffff / (longlong)iVar1);
            }
            iVar4 = iVar4 + 4;
            iVar3 = iVar3 + 0x3c0;
          } while (iVar4 != 0x500);
          iVar5 = iVar5 + 4;
        } while (iVar5 != 0x3c0);
        engine_drender_cpp_CDemonRenderer_popViewport_FUN_0050e480();
        local_1c = local_1c + 0x23;
        local_20 = local_20 + 0x23;
        local_24 = local_24 + 0x4b030;
        local_18 = local_18 + 1;
      } while (local_18 < this_ptr->camera_count);
    }
  }
  return;
}
