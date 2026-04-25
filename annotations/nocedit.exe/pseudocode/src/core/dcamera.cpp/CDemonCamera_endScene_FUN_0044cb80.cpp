// Name: core_dcamera.cpp_CDemonCamera_endScene_FUN_0044cb80
// Address: 0044cb80
// Address Range: [[0044cb80, 0044cc61]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_endScene_FUN_0044cb80(CDemonCamera *this_ptr,int skip_zbuffer_copy)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_endScene_FUN_0044cb80(CDemonCamera *this_ptr,int skip_zbuffer_copy)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (this_ptr->scene_open_flag == 0) {
    g_CurrentFilename = "..\\core\\dcamera.cpp";
    g_CurrentLineNumber = 0x3e9;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonCamera::endScene - Scene not open!");
  }
  else {
    this_ptr->scene_open_flag = 0;
  }
  if (g_ExternalRendererActive != 0) {
    wincore_windll_cpp_endScene_FUN_005b72a0();
  }
  if ((this_ptr->skip_clear_buffer_flag == 0) && (skip_zbuffer_copy == 0)) {
    if (g_UseExternalRenderer != 0) {
      wincore_windll_cpp_masterZBuffer_FUN_005b7d00(0);
    }
    iVar2 = 0;
    if (0 < this_ptr->framebuffer_height) {
      iVar3 = 0;
      do {
        iVar1 = this_ptr->framebuffer_width * iVar2;
        iVar2 = iVar2 + 1;
        _memcpy
                  ((void *)(iVar1 * 4 + (int)this_ptr->zbuffer_aligned),
                   *(void **)((int)g_ZBufferScanlineArray + iVar3),this_ptr->framebuffer_width << 2)
        ;
        iVar3 = iVar3 + 4;
      } while (iVar2 < this_ptr->framebuffer_height);
    }
  }
  engine_drender_cpp_CDemonRenderer_popViewport_FUN_0048c8c0(g_CDemonRendererPtr2);
  core_dcamera_cpp_CDemonCamera_resetSceneCamera_FUN_0044c410(this_ptr);
  return;
}
