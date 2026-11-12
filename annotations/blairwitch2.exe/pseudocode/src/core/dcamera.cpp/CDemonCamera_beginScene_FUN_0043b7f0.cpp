// Name: core_dcamera.cpp_CDemonCamera_beginScene_FUN_0043b7f0
// Address: 0043b7f0
// Address Range: [[0043b7f0, 0043bb01]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_beginScene_FUN_0043b7f0(CDemonCamera *this_ptr,int skip_clear_buffers)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_beginScene_FUN_0043b7f0(CDemonCamera *this_ptr,int skip_clear_buffers)

{
  CDemonRenderer *this_ptr_00;
  uint uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  char *format;
  
  iVar3 = 0;
  switch(DAT_00609fa0) {
  case 0:
    _DAT_01326d08 = _DAT_01326d08 + _DAT_01c2a370;
    if (_DAT_01326d04 < _DAT_01326d08) {
      _DAT_01326d08 = _DAT_01326d04;
      DAT_00609fa0 = 1;
      _DAT_01326d00 = DAT_00609f9c;
    }
    if (_DAT_01326d04 != 0) {
      iVar3 = (int)(((longlong)DAT_00609f98 * (longlong)_DAT_01326d08) / (longlong)_DAT_01326d04);
    }
    format = "Attack : ";
    break;
  case 1:
    _DAT_01326d00 = _DAT_01326d00 - _DAT_01c2a370;
    if (_DAT_01326d00 < 0) {
      _DAT_01326d00 = 0;
      DAT_00609fa0 = 2;
      _DAT_01326d10 = _DAT_01326d0c;
    }
    format = "Sustain : ";
    iVar3 = DAT_00609f98;
    break;
  case 2:
    _DAT_01326d10 = _DAT_01326d10 - _DAT_01c2a370;
    if (_DAT_01326d10 < 0) {
      _DAT_01326d10 = 0;
      DAT_00609fa0 = 3;
    }
    if (_DAT_01326d0c != 0) {
      iVar3 = (int)(((longlong)DAT_00609f98 * (longlong)_DAT_01326d10) / (longlong)_DAT_01326d0c);
    }
    format = "Decay : ";
    break;
  default:
    goto switchD_0043b808_caseD_3;
  }
  engine_console_cpp_CConsole_printf_FUN_00436710(g_CConsolePtr,format);
switchD_0043b808_caseD_3:
  _DAT_01326d14 =
       _DAT_01326d14 +
       ((uint)((longlong)iVar3 * (longlong)(int)_DAT_01c2a370) >> 0x10 |
       (int)((ulonglong)((longlong)iVar3 * (longlong)(int)_DAT_01c2a370) >> 0x20) << 0x10);
  uVar2 = _DAT_01326d1c;
  if (0xffff < _DAT_01326d14) {
    uVar1 = _DAT_01c2a370 & 1;
    _DAT_01326d14 = 0;
    uVar2 = (int)(_DAT_01c2a370 & 2) >> 1;
    bVar4 = _DAT_01326d18 == uVar1;
    _DAT_01326d18 = uVar1;
    if ((bVar4) && (_DAT_01326d1c == uVar2)) {
      uVar2 = (uint)(uVar2 == 0);
    }
  }
  _DAT_01326d1c = uVar2;
  if ((this_ptr->framebuffer_height < 0x1e0) || (DAT_00609fa0 == 3)) {
    _DAT_01326d18 = 0;
    _DAT_01326d1c = 0;
  }
  if (this_ptr->scene_open_flag == 0) {
    this_ptr->scene_open_flag = 1;
  }
  else {
    _DAT_01d046a0 = "..\\core\\dcamera.cpp";
    _DAT_01d046a4 = 0x2e7;
    core_main_c_FUN_004e4500("CDemonCamera::beginScene - Scene already open!");
  }
  core_dcamera_cpp_CDemonCamera_setSceneCamera_FUN_0043b7a0(this_ptr,skip_clear_buffers);
  engine_drender_cpp_CDemonRenderer_pushViewport_FUN_0046b710
            (DAT_0060b280,0,0,this_ptr->framebuffer_width + -1,this_ptr->framebuffer_height + -1);
  uVar2 = _DAT_01326d18;
  (this_ptr->viewport_rect).x_min = 0;
  (this_ptr->viewport_rect).x_max = 0;
  this_ptr->rect_array_count = 0;
  _DAT_01c35e40 = _DAT_01c35e40 + uVar2 * 0x10000;
  (this_ptr->viewport_rect).y_min = this_ptr->framebuffer_width + -1;
  _DAT_01c35e44 = _DAT_01c35e44 + _DAT_01326d1c * -0x10000;
  (this_ptr->viewport_rect).y_max = this_ptr->framebuffer_height + -1;
  this_ptr_00 = DAT_0060b280;
  this_ptr->skip_clear_buffer_flag = skip_clear_buffers;
  engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046afb0
            (this_ptr_00,&(this_ptr->base).position.f);
  engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_0046b4b0
            (DAT_0060b280,(this_ptr->base).focal_length);
  engine_drender_cpp_CDemonRenderer_setupCameraAndProjection_FUN_0046b060
            (DAT_0060b280,&(this_ptr->base).rotation_matrix);
  if (skip_clear_buffers == 0) {
    if (_DAT_0264bba0 != 0) {
      engine_special_cpp_FUN_0055f590();
    }
    engine_special_cpp_clearScreen_FUN_0055b1f0();
    engine_special_cpp_clearZBufferNative_FUN_0055b254();
    if (_DAT_01c37788 != 0) {
      engine_special_cpp_clear_FUN_0055fd40();
      engine_special_cpp_clearZBuffer_FUN_0055fef0();
    }
  }
  core_dcamera_cpp_CDemonCamera_updateTransformMatrices_FUN_0043c5d0(this_ptr);
  return;
}
