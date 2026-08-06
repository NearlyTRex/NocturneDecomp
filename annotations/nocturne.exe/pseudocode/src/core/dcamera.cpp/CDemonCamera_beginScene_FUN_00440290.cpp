// Name: core_dcamera.cpp_CDemonCamera_beginScene_FUN_00440290
// Address: 00440290
// Address Range: [[00440290, 004405c8]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_beginScene_FUN_00440290(CDemonCamera *this_ptr,int skip_clear_buffers)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_beginScene_FUN_00440290(CDemonCamera *this_ptr,int skip_clear_buffers)

{
  int iVar1;
  float fVar2;
  CDemonRenderer *this_ptr_00;
  uint uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  char *format;
  
  iVar5 = 0;
  switch(DAT_005ad44c) {
  case 0:
    _DAT_012ceb60 = _DAT_012ceb60 + _DAT_01bd1d80;
    if (_DAT_012ceb5c < _DAT_012ceb60) {
      _DAT_012ceb60 = _DAT_012ceb5c;
      DAT_005ad44c = 1;
      _DAT_012ceb58 = DAT_005ad448;
    }
    if (_DAT_012ceb5c != 0) {
      iVar5 = (int)(((longlong)DAT_005ad444 * (longlong)_DAT_012ceb60) / (longlong)_DAT_012ceb5c);
    }
    format = "Attack : ";
    break;
  case 1:
    _DAT_012ceb58 = _DAT_012ceb58 - _DAT_01bd1d80;
    if (_DAT_012ceb58 < 0) {
      _DAT_012ceb58 = 0;
      DAT_005ad44c = 2;
      _DAT_012ceb68 = _DAT_012ceb64;
    }
    format = "Sustain : ";
    iVar5 = DAT_005ad444;
    break;
  case 2:
    _DAT_012ceb68 = _DAT_012ceb68 - _DAT_01bd1d80;
    if (_DAT_012ceb68 < 0) {
      _DAT_012ceb68 = 0;
      DAT_005ad44c = 3;
    }
    if (_DAT_012ceb64 != 0) {
      iVar5 = (int)(((longlong)DAT_005ad444 * (longlong)_DAT_012ceb68) / (longlong)_DAT_012ceb64);
    }
    format = "Decay : ";
    break;
  default:
    goto switchD_004402a8_caseD_3;
  }
  engine_console_cpp_CConsole_printf_FUN_0043ac60(g_CConsole_PTR_005ad350,format);
switchD_004402a8_caseD_3:
  _DAT_012ceb6c =
       _DAT_012ceb6c +
       ((uint)((longlong)iVar5 * (longlong)(int)_DAT_01bd1d80) >> 0x10 |
       (int)((ulonglong)((longlong)iVar5 * (longlong)(int)_DAT_01bd1d80) >> 0x20) << 0x10);
  uVar4 = _DAT_012ceb74;
  if (0xffff < _DAT_012ceb6c) {
    uVar3 = _DAT_01bd1d80 & 1;
    _DAT_012ceb6c = 0;
    uVar4 = (int)(_DAT_01bd1d80 & 2) >> 1;
    bVar6 = _DAT_012ceb70 == uVar3;
    _DAT_012ceb70 = uVar3;
    if ((bVar6) && (_DAT_012ceb74 == uVar4)) {
      uVar4 = (uint)(uVar4 == 0);
    }
  }
  _DAT_012ceb74 = uVar4;
  if (((int)this_ptr->max_distance < 0x1e0) || (DAT_005ad44c == 3)) {
    _DAT_012ceb70 = 0;
    _DAT_012ceb74 = 0;
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
  iVar5 = this_ptr->framebuffer_width;
  iVar1 = this_ptr->screen_width;
  fVar2 = this_ptr->max_distance;
  this_ptr->rect_array_count = 0;
  (this_ptr->viewport_rect).x_min = this_ptr->framebuffer_width;
  (this_ptr->viewport_rect).x_max = this_ptr->framebuffer_height;
  uVar4 = _DAT_012ceb70;
  (this_ptr->viewport_rect).y_min = iVar5 + iVar1 + -1;
  _DAT_01c00c50 = _DAT_01c00c50 + uVar4 * 0x10000;
  _DAT_01c00c54 = _DAT_01c00c54 + _DAT_012ceb74 * -0x10000;
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
    if (INT_02dc9d60 != 0) {
      engine_special_cpp_beginScene_FUN_00532340();
    }
    engine_special_cpp_clearScreen_FUN_0052ee70();
    engine_special_cpp_clearZBufferNative_FUN_0052eed4();
    if (_DAT_01c02594 != 0) {
      engine_special_cpp_clear_FUN_005329a0();
      engine_special_cpp_clearZBuffer_FUN_00532b50();
    }
  }
  core_dcamera_cpp_CDemonCamera_updateTransformMatrices_FUN_00440fe0(this_ptr);
  return;
}
