// Name: core_dcamera.cpp_CDemonCamera_endScene_FUN_0044cb80
// Address: 0044cb80
// MANUAL RECONSTRUCTION
// Address Range: [[0044cb80, 0044cc61]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_endScene_FUN_0044cb80(CDemonCamera *this_ptr,int skip_zbuffer_copy)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_endScene_FUN_0044cb80(CDemonCamera *this_ptr,int skip_zbuffer_copy)

{
  int iVar2;

  if (this_ptr->scene_open_flag == 0) {
    g_CurrentFilename = "..\\core\\dcamera.cpp";
    g_CurrentLineNumber = 1001;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonCamera::endScene - Scene not open!");
  }
  else {
    this_ptr->scene_open_flag = 0;
  }
  if (g_UseDirect3D != 0) {
    engine_special_cpp_endScene_FUN_005b72a0();
  }
  if ((this_ptr->skip_clear_buffer_flag == 0) && (skip_zbuffer_copy == 0)) {
    if (g_UseExternalRenderer != 0) {
      engine_special_cpp_masterZBuffer_FUN_005b7d00(0);
    }
    iVar2 = 0;
    if (0 < this_ptr->framebuffer_height) {
      do {
        _memcpy
                  ((uint *)this_ptr->zbuffer_aligned + this_ptr->framebuffer_width * iVar2,
                   g_ZBufferScanlineArray[iVar2],this_ptr->framebuffer_width << 2);
        iVar2 = iVar2 + 1;
      } while (iVar2 < this_ptr->framebuffer_height);
    }
  }
  engine_drender_cpp_CDemonRenderer_popViewport_FUN_0048c8c0(g_CDemonRendererPtr2);
  core_dcamera_cpp_CDemonCamera_resetSceneCamera_FUN_0044c410(this_ptr);
  return;
}
