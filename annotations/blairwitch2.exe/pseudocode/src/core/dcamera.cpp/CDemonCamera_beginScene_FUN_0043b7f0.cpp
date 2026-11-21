// Name: core_dcamera.cpp_CDemonCamera_beginScene_FUN_0043b7f0
// Address: 0043b7f0
// Address Range: [[0043b7f0, 0043bb01]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_beginScene_FUN_0043b7f0(CDemonCamera *this_ptr,int skip_clear_buffers)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_beginScene_FUN_0043b7f0(CDemonCamera *this_ptr,int skip_clear_buffers)

{
  CDemonRenderer *this_ptr_00;
  uint uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  char *format;
  
  iVar3 = 0;
  switch(g_CameraShakeState) {
  case 0:
    g_CameraShakeAttackAccum = g_CameraShakeAttackAccum + g_GlobalDeltaTimeInt;
    if (g_CameraShakeAttackTime < g_CameraShakeAttackAccum) {
      g_CameraShakeAttackAccum = g_CameraShakeAttackTime;
      g_CameraShakeState = 1;
      g_CameraShakeSustainTimer = g_CameraShakeSustainValue;
    }
    if (g_CameraShakeAttackTime != 0) {
      iVar3 = (int)(((longlong)g_CameraShakePeakValue * (longlong)g_CameraShakeAttackAccum) /
                   (longlong)g_CameraShakeAttackTime);
    }
    format = "Attack : ";
    break;
  case 1:
    g_CameraShakeSustainTimer = g_CameraShakeSustainTimer - g_GlobalDeltaTimeInt;
    if (g_CameraShakeSustainTimer < 0) {
      g_CameraShakeSustainTimer = 0;
      g_CameraShakeState = 2;
      g_CameraShakeDecayTimer = g_CameraShakeDecayDuration;
    }
    format = "Sustain : ";
    iVar3 = g_CameraShakePeakValue;
    break;
  case 2:
    g_CameraShakeDecayTimer = g_CameraShakeDecayTimer - g_GlobalDeltaTimeInt;
    if (g_CameraShakeDecayTimer < 0) {
      g_CameraShakeDecayTimer = 0;
      g_CameraShakeState = 3;
    }
    if (g_CameraShakeDecayDuration != 0) {
      iVar3 = (int)(((longlong)g_CameraShakePeakValue * (longlong)g_CameraShakeDecayTimer) /
                   (longlong)g_CameraShakeDecayDuration);
    }
    format = "Decay : ";
    break;
  default:
    goto switchD_0043b808_caseD_3;
  }
  engine_console_cpp_CConsole_printf_FUN_00436710(g_CConsolePtr,format);
switchD_0043b808_caseD_3:
  g_CameraShakeAccumulator =
       g_CameraShakeAccumulator +
       ((uint)((longlong)iVar3 * (longlong)g_GlobalDeltaTimeInt) >> 0x10 |
       (int)((ulonglong)((longlong)iVar3 * (longlong)g_GlobalDeltaTimeInt) >> 0x20) << 0x10);
  uVar2 = g_CameraShakeOffsetY;
  if (0xffff < g_CameraShakeAccumulator) {
    uVar1 = g_GlobalDeltaTimeInt & 1;
    g_CameraShakeAccumulator = 0;
    uVar2 = (int)(g_GlobalDeltaTimeInt & 2U) >> 1;
    bVar4 = g_CameraShakeOffsetX == uVar1;
    g_CameraShakeOffsetX = uVar1;
    if ((bVar4) && (g_CameraShakeOffsetY == uVar2)) {
      uVar2 = (uint)(uVar2 == 0);
    }
  }
  g_CameraShakeOffsetY = uVar2;
  if ((this_ptr->framebuffer_height < 0x1e0) || (g_CameraShakeState == 3)) {
    g_CameraShakeOffsetX = 0;
    g_CameraShakeOffsetY = 0;
  }
  if (this_ptr->scene_open_flag == 0) {
    this_ptr->scene_open_flag = 1;
  }
  else {
    g_CurrentFilename = "..\\core\\dcamera.cpp";
    g_CurrentLineNumber = 743;
    core_main_c_displayErrorAndQuit_FUN_004e4500("CDemonCamera::beginScene - Scene already open!");
  }
  core_dcamera_cpp_CDemonCamera_setSceneCamera_FUN_0043b7a0(this_ptr,skip_clear_buffers);
  engine_drender_cpp_CDemonRenderer_pushViewport_FUN_0046b710
            (g_CDemonRenderer_PTR_0060b280,0,0,this_ptr->framebuffer_width + -1,
             this_ptr->framebuffer_height + -1);
  iVar3 = g_CameraShakeOffsetX;
  (this_ptr->viewport_rect).x_min = 0;
  (this_ptr->viewport_rect).x_max = 0;
  this_ptr->rect_array_count = 0;
  g_INT_01c35e40 = g_INT_01c35e40 + iVar3 * 0x10000;
  (this_ptr->viewport_rect).y_min = this_ptr->framebuffer_width + -1;
  g_INT_01c35e44 = g_INT_01c35e44 + g_CameraShakeOffsetY * -0x10000;
  (this_ptr->viewport_rect).y_max = this_ptr->framebuffer_height + -1;
  this_ptr_00 = g_CDemonRenderer_PTR_0060b280;
  this_ptr->skip_clear_buffer_flag = skip_clear_buffers;
  engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046afb0
            (this_ptr_00,&(this_ptr->base).position.f);
  engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_0046b4b0
            (g_CDemonRenderer_PTR_0060b280,(this_ptr->base).focal_length);
  engine_drender_cpp_CDemonRenderer_setupCameraAndProjection_FUN_0046b060
            (g_CDemonRenderer_PTR_0060b280,&(this_ptr->base).rotation_matrix);
  if (skip_clear_buffers == 0) {
    if (g_INT_0264bba0 != 0) {
      engine_special_cpp_beginScene_FUN_0055f590();
    }
    engine_special_cpp_clearScreen_FUN_0055b1f0();
    engine_special_cpp_clearZBufferNative_FUN_0055b254();
    if (g_INT_01c37788 != 0) {
      engine_special_cpp_clear_FUN_0055fd40();
      engine_special_cpp_clearZBuffer_FUN_0055fef0();
    }
  }
  core_dcamera_cpp_CDemonCamera_updateTransformMatrices_FUN_0043c5d0(this_ptr);
  return;
}
