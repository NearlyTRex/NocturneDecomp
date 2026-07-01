// Name: core_dcamera.cpp_CDemonCamera_init_FUN_0044c190
// Address: 0044c190
// Address Range: [[0044c190, 0044c354]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_init_FUN_0044c190(CDemonCamera *this_ptr,int screen_height)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_init_FUN_0044c190(CDemonCamera *this_ptr,int screen_height)

{
  int iVar1;
  void *pvVar2;
  
  core_dcamera_cpp_CDemonCamera_free_FUN_0044c360(this_ptr);
  g_CameraScreenWidth = (screen_height * 4) / 3;
  g_CameraScreenHeight = screen_height;
  if (0x1e0 < screen_height) {
    screen_height = 0x1e0;
  }
  this_ptr->framebuffer_height = screen_height;
  this_ptr->scale_factor = 1;
  this_ptr->framebuffer_width = (screen_height * 4) / 3;
  this_ptr->display_width = this_ptr->framebuffer_width;
  g_CameraDownscaleIterations.dword = 0;
  iVar1 = this_ptr->display_width;
  this_ptr->display_height = this_ptr->framebuffer_height;
  while (0x140 < iVar1) {
    this_ptr->display_width = this_ptr->display_width / 2;
    g_CameraDownscaleIterations.dword = g_CameraDownscaleIterations.dword + 1;
    this_ptr->scale_factor = this_ptr->scale_factor * 2;
    iVar1 = this_ptr->display_width;
    this_ptr->display_height = this_ptr->display_height / 2;
  }
  pvVar2 = shape_memdbg_cpp_debugMalloc_FUN_0050f250
                     (this_ptr->framebuffer_width * this_ptr->framebuffer_height * 4 + 0x1010,
                      "..\\core\\dcamera.cpp",576);
  this_ptr->framebuffer_raw = pvVar2;
  if (pvVar2 == (void *)0x0) {
    g_CurrentFilename = "..\\core\\dcamera.cpp";
    g_CurrentLineNumber = 577;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonCamera::init - Unable to alloc frame buffer");
  }
  pvVar2 = shape_memdbg_cpp_debugMalloc_FUN_0050f250
                     (this_ptr->framebuffer_width * this_ptr->framebuffer_height * 4 + 0x1010,
                      "..\\core\\dcamera.cpp",581);
  this_ptr->zbuffer_raw = pvVar2;
  if (pvVar2 == (void *)0x0) {
    g_CurrentFilename = "..\\core\\dcamera.cpp";
    g_CurrentLineNumber = 582;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonCamera::init - Unable to alloc z buffer");
  }
  this_ptr->framebuffer_aligned = (void *)((int)this_ptr->framebuffer_raw + 0x10U & 0xfffffff0);
  this_ptr->zbuffer_aligned = (void *)((int)this_ptr->zbuffer_raw + 0x10U & 0xfffffff0);
  return;
}
