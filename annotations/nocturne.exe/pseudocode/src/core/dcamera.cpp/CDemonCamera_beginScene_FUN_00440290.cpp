// Name: core_dcamera.cpp_CDemonCamera_beginScene_FUN_00440290
// Address: 00440290
// Address Range: [[00440290, 004405c8]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_beginScene_FUN_00440290(CDemonCamera *this_ptr,int skip_clear_buffers)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_beginScene_FUN_00440290(CDemonCamera *this_ptr,int skip_clear_buffers)

{
  int iVar1;
  float fVar2;
  CDemonRenderer *this_ptr_00;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  char *format;
  
  iVar6 = 0;
  switch(g_INT_005ad44c) {
  case 0:
    g_INT_012ceb60 = g_INT_012ceb60 + g_INT_01bd1d80;
    if (g_INT_012ceb5c < g_INT_012ceb60) {
      g_INT_012ceb60 = g_INT_012ceb5c;
      g_INT_005ad44c = 1;
      g_INT_012ceb58 = g_INT_005ad448;
    }
    if (g_INT_012ceb5c != 0) {
      iVar6 = (int)(((longlong)g_INT_005ad444 * (longlong)g_INT_012ceb60) / (longlong)g_INT_012ceb5c
                   );
    }
    format = "Attack : ";
    break;
  case 1:
    g_INT_012ceb58 = g_INT_012ceb58 - g_INT_01bd1d80;
    if (g_INT_012ceb58 < 0) {
      g_INT_012ceb58 = 0;
      g_INT_005ad44c = 2;
      g_INT_012ceb68 = g_INT_012ceb64;
    }
    format = "Sustain : ";
    iVar6 = g_INT_005ad444;
    break;
  case 2:
    g_INT_012ceb68 = g_INT_012ceb68 - g_INT_01bd1d80;
    if (g_INT_012ceb68 < 0) {
      g_INT_012ceb68 = 0;
      g_INT_005ad44c = 3;
    }
    if (g_INT_012ceb64 != 0) {
      iVar6 = (int)(((longlong)g_INT_005ad444 * (longlong)g_INT_012ceb68) / (longlong)g_INT_012ceb64
                   );
    }
    format = "Decay : ";
    break;
  default:
    goto switchD_004402a8_caseD_3;
  }
  engine_console_cpp_CConsole_printf_FUN_0043ac60(g_CConsolePtr,format);
switchD_004402a8_caseD_3:
  g_INT_012ceb6c =
       g_INT_012ceb6c +
       ((uint)((longlong)iVar6 * (longlong)g_INT_01bd1d80) >> 0x10 |
       (int)((ulonglong)((longlong)iVar6 * (longlong)g_INT_01bd1d80) >> 0x20) << 0x10);
  uVar5 = g_INT_012ceb74;
  if (0xffff < g_INT_012ceb6c) {
    uVar4 = g_INT_01bd1d80 & 1;
    g_INT_012ceb6c = 0;
    uVar5 = (int)(g_INT_01bd1d80 & 2U) >> 1;
    bVar7 = g_INT_012ceb70 == uVar4;
    g_INT_012ceb70 = uVar4;
    if ((bVar7) && (g_INT_012ceb74 == uVar5)) {
      uVar5 = (uint)(uVar5 == 0);
    }
  }
  g_INT_012ceb74 = uVar5;
  if (((int)this_ptr->max_distance < 0x1e0) || (g_INT_005ad44c == 3)) {
    g_INT_012ceb70 = 0;
    g_INT_012ceb74 = 0;
  }
  if (this_ptr->scene_open_flag == 0) {
    this_ptr->scene_open_flag = 1;
  }
  else {
    g_CurrentFilename = "..\\core\\dcamera.cpp";
    g_CurrentLineNumber = 755;
    core_main_c_displayErrorAndQuit_FUN_004c8440("CDemonCamera::beginScene - Scene already open!");
  }
  core_dcamera_cpp_CDemonCamera_setSceneCamera_FUN_00440240(this_ptr,skip_clear_buffers);
  engine_drender_cpp_CDemonRenderer_pushViewport_FUN_00460e40
            (g_CDemonRenderer_PTR_005ae704,this_ptr->framebuffer_width,this_ptr->framebuffer_height,
             this_ptr->screen_width + -1,(int)this_ptr->max_distance + -1);
  iVar6 = this_ptr->framebuffer_width;
  iVar1 = this_ptr->screen_width;
  fVar2 = this_ptr->max_distance;
  this_ptr->rect_array_count = 0;
  (this_ptr->viewport_rect).x_min = this_ptr->framebuffer_width;
  (this_ptr->viewport_rect).x_max = this_ptr->framebuffer_height;
  iVar3 = g_INT_012ceb70;
  (this_ptr->viewport_rect).y_min = iVar6 + iVar1 + -1;
  g_Projection.center_x_fixed = g_Projection.center_x_fixed + iVar3 * 0x10000;
  g_Projection.center_y_fixed = g_Projection.center_y_fixed + g_INT_012ceb74 * -0x10000;
  (this_ptr->viewport_rect).y_max = this_ptr->framebuffer_height + (int)fVar2 + -1;
  this_ptr_00 = g_CDemonRenderer_PTR_005ae704;
  this_ptr->skip_clear_buffer_flag = skip_clear_buffers;
  engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_00460700
            (this_ptr_00,&this_ptr->position);
  engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_00460c00
            (g_CDemonRenderer_PTR_005ae704,this_ptr->focal_length);
  engine_drender_cpp_CDemonRenderer_setupCameraAndProjection_FUN_004607b0
            (g_CDemonRenderer_PTR_005ae704,&this_ptr->rotation_matrix);
  if (skip_clear_buffers == 0) {
    if (g_UseDirect3D != 0) {
      engine_special_cpp_beginScene_FUN_00532340();
    }
    engine_special_cpp_clearScreen_FUN_0052ee70();
    engine_special_cpp_clearZBufferNative_FUN_0052eed4();
    if (g_UseExternalRenderer != 0) {
      engine_special_cpp_clear_FUN_005329a0();
      engine_special_cpp_clearZBuffer_FUN_00532b50();
    }
  }
  core_dcamera_cpp_CDemonCamera_updateTransformMatrices_FUN_00440fe0(this_ptr);
  return;
}
