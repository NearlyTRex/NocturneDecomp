// Name: core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044ceb0
// Address: 0044ceb0
// Address Range: [[0044ceb0, 0044d1c1]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_beginScene_FUN_0044ceb0(CDemonCamera *this_ptr,int skip_clear_buffers)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_beginScene_FUN_0044ceb0(CDemonCamera *this_ptr,int skip_clear_buffers)

{
  CDemonRenderer *this_ptr_00;
  uint uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  char *pcVar5;
  
  iVar3 = 0;
  switch(DAT_0061122c) {
  case 0:
    _DAT_01342208 = _DAT_01342208 + _DAT_01c43530;
    if (_DAT_01342204 < _DAT_01342208) {
      _DAT_01342208 = _DAT_01342204;
      DAT_0061122c = 1;
      _DAT_01342200 = DAT_00611228;
    }
    if (_DAT_01342204 != 0) {
      iVar3 = (int)(((longlong)DAT_00611224 * (longlong)_DAT_01342208) / (longlong)_DAT_01342204);
    }
    pcVar5 = "Attack : ";
    break;
  case 1:
    _DAT_01342200 = _DAT_01342200 - _DAT_01c43530;
    if (_DAT_01342200 < 0) {
      _DAT_01342200 = 0;
      DAT_0061122c = 2;
      _DAT_01342210 = _DAT_0134220c;
    }
    pcVar5 = "Sustain : ";
    iVar3 = DAT_00611224;
    break;
  case 2:
    _DAT_01342210 = _DAT_01342210 - _DAT_01c43530;
    if (_DAT_01342210 < 0) {
      _DAT_01342210 = 0;
      DAT_0061122c = 3;
    }
    if (_DAT_0134220c != 0) {
      iVar3 = (int)(((longlong)DAT_00611224 * (longlong)_DAT_01342210) / (longlong)_DAT_0134220c);
    }
    pcVar5 = "Decay : ";
    break;
  default:
    goto switchD_0044cec8_caseD_3;
  }
  engine_console_cpp_FUN_00445430(g_CConsolePtr,pcVar5);
switchD_0044cec8_caseD_3:
  _DAT_01342214 =
       _DAT_01342214 +
       ((uint)((longlong)iVar3 * (longlong)(int)_DAT_01c43530) >> 0x10 |
       (int)((ulonglong)((longlong)iVar3 * (longlong)(int)_DAT_01c43530) >> 0x20) << 0x10);
  uVar2 = _DAT_0134221c;
  if (0xffff < _DAT_01342214) {
    uVar1 = _DAT_01c43530 & 1;
    _DAT_01342214 = 0;
    uVar2 = (int)(_DAT_01c43530 & 2) >> 1;
    bVar4 = _DAT_01342218 == uVar1;
    _DAT_01342218 = uVar1;
    if ((bVar4) && (_DAT_0134221c == uVar2)) {
      uVar2 = (uint)(uVar2 == 0);
    }
  }
  _DAT_0134221c = uVar2;
  if ((this_ptr->framebuffer_height < 0x1e0) || (DAT_0061122c == 3)) {
    _DAT_01342218 = 0;
    _DAT_0134221c = 0;
  }
  if (this_ptr->scene_open_flag == 0) {
    this_ptr->scene_open_flag = 1;
  }
  else {
    _DAT_01d1d400 = "..\\core\\dcamera.cpp";
    _DAT_01d1d404 = 0x2eb;
    core_main_c_FUN_005030e0("CDemonCamera::beginScene - Scene already open!");
  }
  core_dcamera_cpp_CDemonCamera_setSceneCamera_FUN_0044ce60(this_ptr,skip_clear_buffers);
  engine_matrix_c_FUN_00483c10
            (DAT_00612560,0,0,this_ptr->framebuffer_width + -1,this_ptr->framebuffer_height + -1);
  uVar2 = _DAT_01342218;
  (this_ptr->viewport_rect).x_min = 0;
  (this_ptr->viewport_rect).x_max = 0;
  this_ptr->rect_array_count = 0;
  _DAT_01c4f000 = _DAT_01c4f000 + uVar2 * 0x10000;
  (this_ptr->viewport_rect).y_min = this_ptr->framebuffer_width + -1;
  _DAT_01c4f004 = _DAT_01c4f004 + _DAT_0134221c * -0x10000;
  (this_ptr->viewport_rect).y_max = this_ptr->framebuffer_height + -1;
  this_ptr_00 = DAT_00612560;
  this_ptr->skip_clear_buffer_flag = skip_clear_buffers;
  engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_004834b0
            (this_ptr_00,&(this_ptr->base).position.f);
  engine_matrix_c_FUN_004839b0(DAT_00612560,(this_ptr->base).focal_length);
  engine_drender_cpp_CDemonRenderer_setupCameraAndProjection_FUN_00483560
            (DAT_00612560,&(this_ptr->base).rotation_matrix);
  if (skip_clear_buffers == 0) {
    if (_DAT_02c83370 != 0) {
      engine_special_cpp_FUN_00581fe0();
    }
    engine_special_cpp_clearScreen_FUN_0057dc40();
    engine_special_cpp_clearZBufferNative_FUN_0057dca4();
    if (_DAT_01c50948 != 0) {
      engine_special_cpp_clear_FUN_00582790();
      engine_special_cpp_clearZBuffer_FUN_00582940();
    }
  }
  core_dcamera_cpp_CDemonCamera_updateTransformMatrices_FUN_0044dc90(this_ptr);
  return;
}
