// Name: core_dcamera.cpp_CDemonCamera_endScene_FUN_0044cb80
// Address: 0044cb80
// Address Range: [[0044cb80, 0044cc61]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_CDemonCamera_endScene_FUN_0044cb80(CDemonCamera * this_ptr, int skip_zbuffer_copy)

#include "nocturne.h"

void __cdecl
core_dcamera_cpp_CDemonCamera_endScene_FUN_0044cb80(CDemonCamera *this_ptr,int skip_zbuffer_copy)

{
  int iVar1;
  int in_stack_0000000c;
  
  if (this_ptr->scene_open_flag == 0) {
    g_CurrentFilename = "..\\core\\dcamera.cpp";
    g_CurrentLineNumber = 0x3e9;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonCamera::endScene - Scene not open!");
  }
  else {
    this_ptr->scene_open_flag = 0;
  }
  if (g_FullscreenMode != 0) {
    wincore_windll_cpp_endScene_FUN_005b72a0();
  }
  if ((this_ptr->skip_clear_buffer_flag == 0) && (in_stack_0000000c == 0)) {
    if (g_UseExternalRenderer != 0) {
      wincore_windll_cpp_masterZBuffer_FUN_005b7d00(0);
    }
    iVar1 = 0;
    if (0 < this_ptr->framebuffer_height) {
      do {
        iVar1 = iVar1 + 1;
        core_event_cpp_FUN_004b1a78();
      } while (iVar1 < this_ptr->framebuffer_height);
    }
  }
  engine_drender_cpp_CDemonRenderer_popViewport_FUN_0050e480(g_CDemonRendererPtr);
  core_dcamera_cpp_CDemonCamera_resetSceneCamera_FUN_0044c410(this_ptr);
  return;
}
