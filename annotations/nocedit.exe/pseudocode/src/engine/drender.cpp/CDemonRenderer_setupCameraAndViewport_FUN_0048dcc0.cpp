// Name: engine_drender.cpp_CDemonRenderer_setupCameraAndViewport_FUN_0048dcc0
// Address: 0048dcc0
// Address Range: [[0048dcc0, 0048de12]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_setupCameraAndViewport_FUN_0048dcc0(CDemonRenderer * this_ptr, SCameraViewportState * camera_state)
// Cross-references:
//   core_dcamera.cpp_CDemonCamera_testBoxOcclusion_FUN_004544f0 (004544f0) at 004545c4 [UNCONDITIONAL_CALL]
// Globals:
//   int g_ProjectionScale = 0x10000
//   int g_ViewportCenterXFixed
//   int g_ViewportCenterYFixed
//   int g_ViewportRightFixed
//   int g_ViewportBottomFixed
//   int g_ClipLeft
//   int g_ClipTop
//   int g_ClipRight
//   int g_ClipBottom
//   int g_RelativeX
//   int g_RelativeY
//   int g_RelativeZ
//   int g_CameraOriginX
//   int g_CameraOriginY
//   int g_CameraOriginZ
//   int g_CameraRotationPitch
//   int g_CameraRotationYaw
//   int g_CameraRotationRoll
//   CMatrix3x3i g_TransformMatrix
//   undefined4 g_TransformMatrix[0][1]
//   undefined4 g_TransformMatrix[0][2]
//   undefined4 g_TransformMatrix[1][0]
//   undefined4 g_TransformMatrix[1][1]
//   undefined4 g_TransformMatrix[1][2]
//   undefined4 g_TransformMatrix[2][0]
//   undefined4 g_TransformMatrix[2][1]
//   undefined4 g_TransformMatrix[2][2]
//   CMatrix3x3i g_InverseMatrix
//   undefined4 g_InverseMatrix[0][1]
//   undefined4 g_InverseMatrix[0][2]
//   undefined4 g_InverseMatrix[1][0]
//   undefined4 g_InverseMatrix[1][1]
//   undefined4 g_InverseMatrix[1][2]
//   undefined4 g_InverseMatrix[2][0]
//   undefined4 g_InverseMatrix[2][1]
//   undefined4 g_InverseMatrix[2][2]

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_setupCameraAndViewport_FUN_0048dcc0
          (CDemonRenderer *this_ptr,SCameraViewportState *camera_state)

{
  g_ViewportCenterXFixed = camera_state->viewport_center_x;
  g_ViewportCenterYFixed = camera_state->viewport_center_y;
  g_ViewportRightFixed = camera_state->viewport_right;
  g_ViewportBottomFixed = camera_state->viewport_bottom;
  g_CameraOriginX = camera_state->camera_origin_x;
  g_CameraOriginY = camera_state->camera_origin_y;
  g_CameraOriginZ = camera_state->camera_origin_z;
  g_CameraRotationPitch = camera_state->camera_pitch;
  g_CameraRotationYaw = camera_state->camera_yaw;
  g_CameraRotationRoll = camera_state->camera_roll;
  g_ClipLeft = camera_state->clip_left;
  g_ClipRight = camera_state->clip_right;
  g_ClipTop = camera_state->clip_top;
  g_ClipBottom = camera_state->clip_bottom;
  g_RelativeX = camera_state->relative_x;
  g_RelativeY = camera_state->relative_y;
  g_RelativeZ = camera_state->relative_z;
  g_TransformMatrix.m[0].x = (camera_state->transform_matrix).m[0].x;
  g_TransformMatrix.m[0].y = (camera_state->transform_matrix).m[0].y;
  g_TransformMatrix.m[0].z = (camera_state->transform_matrix).m[0].z;
  g_TransformMatrix.m[1].x = (camera_state->transform_matrix).m[1].x;
  g_TransformMatrix.m[1].y = (camera_state->transform_matrix).m[1].y;
  g_TransformMatrix.m[1].z = (camera_state->transform_matrix).m[1].z;
  g_TransformMatrix.m[2].x = (camera_state->transform_matrix).m[2].x;
  g_TransformMatrix.m[2].y = (camera_state->transform_matrix).m[2].y;
  g_TransformMatrix.m[2].z = (camera_state->transform_matrix).m[2].z;
  g_InverseMatrix.m[0].x = (camera_state->inverse_matrix).m[0].x;
  g_InverseMatrix.m[0].y = (camera_state->inverse_matrix).m[0].y;
  g_InverseMatrix.m[0].z = (camera_state->inverse_matrix).m[0].z;
  g_InverseMatrix.m[1].x = (camera_state->inverse_matrix).m[1].x;
  g_InverseMatrix.m[1].y = (camera_state->inverse_matrix).m[1].y;
  g_InverseMatrix.m[1].z = (camera_state->inverse_matrix).m[1].z;
  g_InverseMatrix.m[2].x = (camera_state->inverse_matrix).m[2].x;
  g_InverseMatrix.m[2].y = (camera_state->inverse_matrix).m[2].y;
  g_InverseMatrix.m[2].z = (camera_state->inverse_matrix).m[2].z;
  g_ProjectionScale = camera_state->projection_scale;
  return;
}


// Assembly code:
// 0048dcc0: MOV EAX,dword ptr [ESP + 0x8]
//   Label: engine_drender.cpp_CDemonRenderer_setupCameraAndViewport_FUN_0048dcc0
//   XREF to: Stack[0x8] (READ)
// 0048dcc4: MOV EDX,dword ptr [EAX]
// 0048dcc6: MOV dword ptr [0x02d02548],EDX
//   XREF to: 02d02548 (WRITE)
// 0048dccc: MOV EDX,dword ptr [EAX + 0x4]
// 0048dccf: MOV dword ptr [0x02d0254c],EDX
//   XREF to: 02d0254c (WRITE)
// 0048dcd5: MOV EDX,dword ptr [EAX + 0x8]
// 0048dcd8: MOV dword ptr [0x02d02550],EDX
//   XREF to: 02d02550 (WRITE)
// 0048dcde: MOV EDX,dword ptr [EAX + 0xc]
// 0048dce1: MOV dword ptr [0x02d02554],EDX
//   XREF to: 02d02554 (WRITE)
// 0048dce7: MOV EDX,dword ptr [EAX + 0x10]
// 0048dcea: MOV dword ptr [0x02d052c4],EDX
//   XREF to: 02d052c4 (WRITE)
// 0048dcf0: MOV EDX,dword ptr [EAX + 0x14]
// 0048dcf3: MOV dword ptr [0x02d052c8],EDX
//   XREF to: 02d052c8 (WRITE)
// 0048dcf9: MOV EDX,dword ptr [EAX + 0x18]
// 0048dcfc: MOV dword ptr [0x02d052cc],EDX
//   XREF to: 02d052cc (WRITE)
// 0048dd02: MOV EDX,dword ptr [EAX + 0x1c]
// 0048dd05: MOV dword ptr [0x02d052d0],EDX
//   XREF to: 02d052d0 (WRITE)
// 0048dd0b: MOV EDX,dword ptr [EAX + 0x20]
// 0048dd0e: MOV dword ptr [0x02d052d4],EDX
//   XREF to: 02d052d4 (WRITE)
// 0048dd14: MOV EDX,dword ptr [EAX + 0x24]
// 0048dd17: MOV dword ptr [0x02d052d8],EDX
//   XREF to: 02d052d8 (WRITE)
// 0048dd1d: MOV EDX,dword ptr [EAX + 0x28]
// 0048dd20: MOV dword ptr [0x02d02558],EDX
//   XREF to: 02d02558 (WRITE)
// 0048dd26: MOV EDX,dword ptr [EAX + 0x2c]
// 0048dd29: MOV dword ptr [0x02d02560],EDX
//   XREF to: 02d02560 (WRITE)
// 0048dd2f: MOV EDX,dword ptr [EAX + 0x30]
// 0048dd32: MOV dword ptr [0x02d0255c],EDX
//   XREF to: 02d0255c (WRITE)
// 0048dd38: MOV EDX,dword ptr [EAX + 0x34]
// 0048dd3b: MOV dword ptr [0x02d02564],EDX
//   XREF to: 02d02564 (WRITE)
// 0048dd41: MOV EDX,dword ptr [EAX + 0x38]
// 0048dd44: MOV dword ptr [0x02d052b8],EDX
//   XREF to: 02d052b8 (WRITE)
// 0048dd4a: MOV EDX,dword ptr [EAX + 0x3c]
// 0048dd4d: MOV dword ptr [0x02d052bc],EDX
//   XREF to: 02d052bc (WRITE)
// 0048dd53: MOV EDX,dword ptr [EAX + 0x40]
// 0048dd56: MOV dword ptr [0x02d052c0],EDX
//   XREF to: 02d052c0 (WRITE)
// 0048dd5c: MOV EDX,dword ptr [EAX + 0x44]
// 0048dd5f: MOV dword ptr [0x02d052e8],EDX
//   XREF to: 02d052e8 (WRITE)
// 0048dd65: MOV EDX,dword ptr [EAX + 0x48]
// 0048dd68: MOV dword ptr [0x02d052ec],EDX
//   XREF to: 02d052ec (WRITE)
// 0048dd6e: MOV EDX,dword ptr [EAX + 0x4c]
// 0048dd71: MOV dword ptr [0x02d052f0],EDX
//   XREF to: 02d052f0 (WRITE)
// 0048dd77: MOV EDX,dword ptr [EAX + 0x50]
// 0048dd7a: MOV dword ptr [0x02d052f4],EDX
//   XREF to: 02d052f4 (WRITE)
// 0048dd80: MOV EDX,dword ptr [EAX + 0x54]
// 0048dd83: MOV dword ptr [0x02d052f8],EDX
//   XREF to: 02d052f8 (WRITE)
// 0048dd89: MOV EDX,dword ptr [EAX + 0x58]
// 0048dd8c: MOV dword ptr [0x02d052fc],EDX
//   XREF to: 02d052fc (WRITE)
// 0048dd92: MOV EDX,dword ptr [EAX + 0x5c]
// 0048dd95: MOV dword ptr [0x02d05300],EDX
//   XREF to: 02d05300 (WRITE)
// 0048dd9b: MOV EDX,dword ptr [EAX + 0x60]
// 0048dd9e: MOV dword ptr [0x02d05304],EDX
//   XREF to: 02d05304 (WRITE)
// 0048dda4: MOV EDX,dword ptr [EAX + 0x64]
// 0048dda7: MOV dword ptr [0x02d05308],EDX
//   XREF to: 02d05308 (WRITE)
// 0048ddad: MOV EDX,dword ptr [EAX + 0x68]
// 0048ddb0: MOV dword ptr [0x02f0d364],EDX
//   XREF to: 02f0d364 (WRITE)
// 0048ddb6: MOV EDX,dword ptr [EAX + 0x6c]
// 0048ddb9: MOV dword ptr [0x02f0d368],EDX
//   XREF to: 02f0d368 (WRITE)
// 0048ddbf: MOV EDX,dword ptr [EAX + 0x70]
// 0048ddc2: MOV dword ptr [0x02f0d36c],EDX
//   XREF to: 02f0d36c (WRITE)
// 0048ddc8: MOV EDX,dword ptr [EAX + 0x74]
// 0048ddcb: MOV dword ptr [0x02f0d370],EDX
//   XREF to: 02f0d370 (WRITE)
// 0048ddd1: MOV EDX,dword ptr [EAX + 0x78]
// 0048ddd4: MOV dword ptr [0x02f0d374],EDX
//   XREF to: 02f0d374 (WRITE)
// 0048ddda: MOV EDX,dword ptr [EAX + 0x7c]
// 0048dddd: MOV dword ptr [0x02f0d378],EDX
//   XREF to: 02f0d378 (WRITE)
// 0048dde3: MOV EDX,dword ptr [EAX + 0x80]
// 0048dde9: MOV dword ptr [0x02f0d37c],EDX
//   XREF to: 02f0d37c (WRITE)
// 0048ddef: MOV EDX,dword ptr [EAX + 0x84]
// 0048ddf5: MOV dword ptr [0x02f0d380],EDX
//   XREF to: 02f0d380 (WRITE)
// 0048ddfb: MOV EDX,dword ptr [EAX + 0x88]
// 0048de01: MOV EAX,dword ptr [EAX + 0x8c]
// 0048de07: MOV dword ptr [0x02f0d384],EDX
//   XREF to: 02f0d384 (WRITE)
// 0048de0d: MOV [0x006793c0],EAX
//   XREF to: 006793c0 (WRITE)
// 0048de12: RET
