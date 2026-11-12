// Name: core_dcamera.cpp_CDemonCamera_beginScene_FUN_00448ff0
// Address: 00448ff0
// Address Range: [[00448ff0, 00449301]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_beginScene_FUN_00448ff0(CDemonCamera *this_ptr,int skip_clear_buffers)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_beginScene_FUN_00448ff0(CDemonCamera *this_ptr,int skip_clear_buffers)

{
  CDemonRenderer *this_ptr_00;
  uint uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  char *format;
  
  iVar3 = 0;
  switch(DAT_005f17e0) {
  case 0:
    _DAT_0135eab8 = _DAT_0135eab8 + _DAT_01c5fad0;
    if (_DAT_0135eab4 < _DAT_0135eab8) {
      _DAT_0135eab8 = _DAT_0135eab4;
      DAT_005f17e0 = 1;
      _DAT_0135eab0 = DAT_005f17dc;
    }
    if (_DAT_0135eab4 != 0) {
      iVar3 = (int)(((longlong)DAT_005f17d8 * (longlong)_DAT_0135eab8) / (longlong)_DAT_0135eab4);
    }
    format = "Attack : ";
    break;
  case 1:
    _DAT_0135eab0 = _DAT_0135eab0 - _DAT_01c5fad0;
    if (_DAT_0135eab0 < 0) {
      _DAT_0135eab0 = 0;
      DAT_005f17e0 = 2;
      _DAT_0135eac0 = _DAT_0135eabc;
    }
    format = "Sustain : ";
    iVar3 = DAT_005f17d8;
    break;
  case 2:
    _DAT_0135eac0 = _DAT_0135eac0 - _DAT_01c5fad0;
    if (_DAT_0135eac0 < 0) {
      _DAT_0135eac0 = 0;
      DAT_005f17e0 = 3;
    }
    if (_DAT_0135eabc != 0) {
      iVar3 = (int)(((longlong)DAT_005f17d8 * (longlong)_DAT_0135eac0) / (longlong)_DAT_0135eabc);
    }
    format = "Decay : ";
    break;
  default:
    goto switchD_00449008_caseD_3;
  }
  engine_console_cpp_CConsole_printf_FUN_00441ff0(g_CConsolePtr,format);
switchD_00449008_caseD_3:
  _DAT_0135eac4 =
       _DAT_0135eac4 +
       ((uint)((longlong)iVar3 * (longlong)(int)_DAT_01c5fad0) >> 0x10 |
       (int)((ulonglong)((longlong)iVar3 * (longlong)(int)_DAT_01c5fad0) >> 0x20) << 0x10);
  uVar2 = _DAT_0135eacc;
  if (0xffff < _DAT_0135eac4) {
    uVar1 = _DAT_01c5fad0 & 1;
    _DAT_0135eac4 = 0;
    uVar2 = (int)(_DAT_01c5fad0 & 2) >> 1;
    bVar4 = _DAT_0135eac8 == uVar1;
    _DAT_0135eac8 = uVar1;
    if ((bVar4) && (_DAT_0135eacc == uVar2)) {
      uVar2 = (uint)(uVar2 == 0);
    }
  }
  _DAT_0135eacc = uVar2;
  if ((this_ptr->framebuffer_height < 0x1e0) || (DAT_005f17e0 == 3)) {
    _DAT_0135eac8 = 0;
    _DAT_0135eacc = 0;
  }
  if (this_ptr->scene_open_flag == 0) {
    this_ptr->scene_open_flag = 1;
  }
  else {
    _DAT_01d71de0 = "..\\core\\dcamera.cpp";
    _DAT_01d71de4 = 0x2eb;
    core_main_c_FUN_004e4330("CDemonCamera::beginScene - Scene already open!");
  }
  core_dcamera_cpp_CDemonCamera_setSceneCamera_FUN_00448fa0(this_ptr,skip_clear_buffers);
  engine_drender_cpp_CDemonRenderer_pushViewport_FUN_0046d2f0
            (DAT_005f2afc,0,0,this_ptr->framebuffer_width + -1,this_ptr->framebuffer_height + -1);
  uVar2 = _DAT_0135eac8;
  (this_ptr->viewport_rect).x_min = 0;
  (this_ptr->viewport_rect).x_max = 0;
  this_ptr->rect_array_count = 0;
  _DAT_01c6b5a0 = _DAT_01c6b5a0 + uVar2 * 0x10000;
  (this_ptr->viewport_rect).y_min = this_ptr->framebuffer_width + -1;
  _DAT_01c6b5a4 = _DAT_01c6b5a4 + _DAT_0135eacc * -0x10000;
  (this_ptr->viewport_rect).y_max = this_ptr->framebuffer_height + -1;
  this_ptr_00 = DAT_005f2afc;
  this_ptr->skip_clear_buffer_flag = skip_clear_buffers;
  engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046cb90
            (this_ptr_00,&(this_ptr->base).position.f);
  engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_0046d090
            (DAT_005f2afc,(this_ptr->base).focal_length);
  engine_drender_cpp_CDemonRenderer_setupCameraAndProjection_FUN_0046cc40
            (DAT_005f2afc,&(this_ptr->base).rotation_matrix);
  if (skip_clear_buffers == 0) {
    if (_DAT_02cf5fcc != 0) {
      engine_special_cpp_FUN_005658b0();
    }
    engine_special_cpp_clearScreen_FUN_00560d70();
    engine_special_cpp_clearZBufferNative_FUN_00560dd4();
    if (_DAT_01c6cee8 != 0) {
      engine_special_cpp_clear_FUN_00566060();
      engine_special_cpp_clearZBuffer_FUN_00566210();
    }
  }
  core_dcamera_cpp_CDemonCamera_updateTransformMatrices_FUN_00449dd0(this_ptr);
  return;
}
