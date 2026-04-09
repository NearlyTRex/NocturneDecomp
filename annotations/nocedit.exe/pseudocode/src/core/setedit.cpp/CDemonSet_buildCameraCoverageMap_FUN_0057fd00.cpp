// Name: core_setedit.cpp_CDemonSet_buildCameraCoverageMap_FUN_0057fd00
// Address: 0057fd00
// Address Range: [[0057fd00, 0057ff6b] [0060c41c, 0060c439] [0060c692, 0060c6af]]
// Convention: __cdecl
// Signature: void __cdecl core_setedit_cpp_CDemonSet_buildCameraCoverageMap_FUN_0057fd00(CDemonSet *this_ptr,char *coverage_map,int exclude_camera_index)

#include "nocturne.h"

void __cdecl core_setedit_cpp_CDemonSet_buildCameraCoverageMap_FUN_0057fd00(CDemonSet *this_ptr,char *coverage_map,int exclude_camera_index)

{
  CVector3i *ptr;
  int iVar1;
  int iVar2;
  CVector3i *pCVar3;
  int iVar4;
  int in_stack_ffffffb0;
  int iStack_4c;
  int iStack_48;
  CVector3i local_44;
  CVector3i local_38;
  CVector3i *local_2c;
  CBoundingBox3D *local_28;
  CVector3i *local_24;
  CVector3f *local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  core_setedit_cpp_CDemonSet_buildCameraDepthData_FUN_00580310(this_ptr);
  memset(coverage_map,0,g_WindowWidth * g_WindowHeight);
  ptr = (CVector3i *)shape_memdbg_cpp_debugAllocTracked2_FUN_0050f1f0
                  (g_CDemonCameraInstance.framebuffer_height *
                   g_CDemonCameraInstance.framebuffer_width * 0xc,"..\\core\\setedit.cpp",0xf22)
  ;
  if (ptr == (CVector3i *)0x0) {
    g_CurrentFilename = "..\\core\\setedit.cpp";
    g_CurrentLineNumber = 0xf23;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory");
  }
  pCVar3 = ptr;
  for (local_1c = 0; local_1c < g_CDemonCameraInstance.framebuffer_height; local_1c = local_1c + 1)
  {
    for (local_18 = 0; local_18 < g_CDemonCameraInstance.framebuffer_width; local_18 = local_18 + 1)
    {
      core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
                (&g_CDemonCameraInstance,local_18,local_1c,&local_38);
      if (local_38.z < 0x40000000) {
        core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370
                  (&g_CDemonCameraInstance,&local_44,(CVector3i *)&stack0xffffffb0);
        pCVar3->x = in_stack_ffffffb0;
        pCVar3->y = iStack_4c;
        pCVar3->z = iStack_48;
      }
      else {
        pCVar3->x = 0x7fffffff;
      }
      pCVar3 = pCVar3 + 1;
    }
  }
  core_dcamera_cpp_CDemonCamera_beginScene_FUN_0044c430(&g_CDemonCameraInstance,0);
  local_14 = 0;
  if (0 < this_ptr->camera_count) {
    local_28 = (CBoundingBox3D *)&this_ptr->cameras[0].box_min;
    local_24 = (CVector3i *)&this_ptr->cameras[0].orientation;
    local_20 = &this_ptr->cameras[0].position;
    do {
      if (local_14 != exclude_camera_index) {
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                  (g_CDemonRendererPtr2,local_20);
        engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                  (g_CDemonRendererPtr2,local_24,(CVector3i *)0x0);
        iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(local_28);
        engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0048c640(g_CDemonRendererPtr2);
        if (iVar1 != 0) {
          iVar1 = 0;
          pCVar3 = ptr;
          while (iVar1 < g_CDemonCameraInstance.framebuffer_height) {
            iVar4 = 0;
            if (g_CDemonCameraInstance.framebuffer_width < 1) {
              iVar1 = iVar1 + 1;
            }
            else {
              do {
                if (pCVar3->x < 0x7fffffff) {
                  iVar2 = core_setedit_cpp_CDemonSet_isPointVisibleFromCamera_FUN_005801b0
                                    (this_ptr,pCVar3,local_14);
                  if (iVar2 != 0) {
                    coverage_map[g_WindowWidth * iVar1 + iVar4] =
                         coverage_map[g_WindowWidth * iVar1 + iVar4] + '\x01';
                  }
                }
                iVar4 = iVar4 + 1;
                pCVar3 = pCVar3 + 1;
              } while (iVar4 < g_CDemonCameraInstance.framebuffer_width);
              iVar1 = iVar1 + 1;
            }
          }
        }
      }
      local_28 = (CBoundingBox3D *)&local_28[0x11].max;
      local_24 = local_24 + 0x23;
      local_14 = local_14 + 1;
      local_20 = local_20 + 0x23;
    } while (local_14 < this_ptr->camera_count);
  }
  core_dcamera_cpp_CDemonCamera_endScene_FUN_0044cb80(&g_CDemonCameraInstance,0);
  g_CurrentDebugLine = 0xf73;
  g_CurrentDebugFilename = "..\\core\\setedit.cpp";
  shape_memdbg_cpp_free_FUN_005fe659(ptr);
  return;
}
