// Name: engine_drender.cpp_CDemonRenderer_getCameraAndViewportState_FUN_0048de20
// Address: 0048de20
// Address Range: [[0048de20, 0048df73]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_getCameraAndViewportState_FUN_0048de20(CDemonRenderer * this_ptr, SCameraViewportState * output_state)
// Cross-references:
//   core_dcamera.cpp_CDemonCamera_beginBackgroundScene_FUN_0044cc70 (0044cc70) at 0044cdbb [UNCONDITIONAL_CALL]
//   core_dcamera.cpp_CDemonCamera_testBoxOcclusion_FUN_004544f0 (004544f0) at 00454507 [UNCONDITIONAL_CALL]
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
engine_drender_cpp_CDemonRenderer_getCameraAndViewportState_FUN_0048de20
          (CDemonRenderer *this_ptr,SCameraViewportState *output_state)

{
  output_state->viewport_center_x = g_ViewportCenterXFixed;
  output_state->viewport_center_y = g_ViewportCenterYFixed;
  output_state->viewport_right = g_ViewportRightFixed;
  output_state->viewport_bottom = g_ViewportBottomFixed;
  output_state->camera_origin_x = g_CameraOriginX;
  output_state->camera_origin_y = g_CameraOriginY;
  output_state->camera_origin_z = g_CameraOriginZ;
  output_state->camera_pitch = g_CameraRotationPitch;
  output_state->camera_yaw = g_CameraRotationYaw;
  output_state->camera_roll = g_CameraRotationRoll;
  output_state->clip_left = g_ClipLeft;
  output_state->clip_right = g_ClipRight;
  output_state->clip_top = g_ClipTop;
  output_state->clip_bottom = g_ClipBottom;
  output_state->relative_x = g_RelativeX;
  output_state->relative_y = g_RelativeY;
  output_state->relative_z = g_RelativeZ;
  (output_state->transform_matrix).m[0][0] = g_TransformMatrix.m[0][0];
  (output_state->transform_matrix).m[0][1] = g_TransformMatrix.m[0][1];
  (output_state->transform_matrix).m[0][2] = g_TransformMatrix.m[0][2];
  (output_state->transform_matrix).m[1][0] = g_TransformMatrix.m[1][0];
  (output_state->transform_matrix).m[1][1] = g_TransformMatrix.m[1][1];
  (output_state->transform_matrix).m[1][2] = g_TransformMatrix.m[1][2];
  (output_state->transform_matrix).m[2][0] = g_TransformMatrix.m[2][0];
  (output_state->transform_matrix).m[2][1] = g_TransformMatrix.m[2][1];
  (output_state->transform_matrix).m[2][2] = g_TransformMatrix.m[2][2];
  (output_state->inverse_matrix).m[0][0] = g_InverseMatrix.m[0][0];
  (output_state->inverse_matrix).m[0][1] = g_InverseMatrix.m[0][1];
  (output_state->inverse_matrix).m[0][2] = g_InverseMatrix.m[0][2];
  (output_state->inverse_matrix).m[1][0] = g_InverseMatrix.m[1][0];
  (output_state->inverse_matrix).m[1][1] = g_InverseMatrix.m[1][1];
  (output_state->inverse_matrix).m[1][2] = g_InverseMatrix.m[1][2];
  (output_state->inverse_matrix).m[2][0] = g_InverseMatrix.m[2][0];
  (output_state->inverse_matrix).m[2][1] = g_InverseMatrix.m[2][1];
  (output_state->inverse_matrix).m[2][2] = g_InverseMatrix.m[2][2];
  output_state->projection_scale = g_ProjectionScale;
  return;
}


// Assembly code:
// 0048de20: MOV EAX,dword ptr [ESP + 0x8]
//   Label: engine_drender.cpp_CDemonRenderer_getCameraAndViewportState_FUN_0048de20
//   XREF to: Stack[0x8] (READ)
// 0048de24: MOV EDX,dword ptr [0x02d02548]
//   XREF to: 02d02548 (READ)
// 0048de2a: MOV dword ptr [EAX],EDX
// 0048de2c: MOV EDX,dword ptr [0x02d0254c]
//   XREF to: 02d0254c (READ)
// 0048de32: MOV dword ptr [EAX + 0x4],EDX
// 0048de35: MOV EDX,dword ptr [0x02d02550]
//   XREF to: 02d02550 (READ)
// 0048de3b: MOV dword ptr [EAX + 0x8],EDX
// 0048de3e: MOV EDX,dword ptr [0x02d02554]
//   XREF to: 02d02554 (READ)
// 0048de44: MOV dword ptr [EAX + 0xc],EDX
// 0048de47: MOV EDX,dword ptr [0x02d052c4]
//   XREF to: 02d052c4 (READ)
// 0048de4d: MOV dword ptr [EAX + 0x10],EDX
// 0048de50: MOV EDX,dword ptr [0x02d052c8]
//   XREF to: 02d052c8 (READ)
// 0048de56: MOV dword ptr [EAX + 0x14],EDX
// 0048de59: MOV EDX,dword ptr [0x02d052cc]
//   XREF to: 02d052cc (READ)
// 0048de5f: MOV dword ptr [EAX + 0x18],EDX
// 0048de62: MOV EDX,dword ptr [0x02d052d0]
//   XREF to: 02d052d0 (READ)
// 0048de68: MOV dword ptr [EAX + 0x1c],EDX
// 0048de6b: MOV EDX,dword ptr [0x02d052d4]
//   XREF to: 02d052d4 (READ)
// 0048de71: MOV dword ptr [EAX + 0x20],EDX
// 0048de74: MOV EDX,dword ptr [0x02d052d8]
//   XREF to: 02d052d8 (READ)
// 0048de7a: MOV dword ptr [EAX + 0x24],EDX
// 0048de7d: MOV EDX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 0048de83: MOV dword ptr [EAX + 0x28],EDX
// 0048de86: MOV EDX,dword ptr [0x02d02560]
//   XREF to: 02d02560 (READ)
// 0048de8c: MOV dword ptr [EAX + 0x2c],EDX
// 0048de8f: MOV EDX,dword ptr [0x02d0255c]
//   XREF to: 02d0255c (READ)
// 0048de95: MOV dword ptr [EAX + 0x30],EDX
// 0048de98: MOV EDX,dword ptr [0x02d02564]
//   XREF to: 02d02564 (READ)
// 0048de9e: MOV dword ptr [EAX + 0x34],EDX
// 0048dea1: MOV EDX,dword ptr [0x02d052b8]
//   XREF to: 02d052b8 (READ)
// 0048dea7: MOV dword ptr [EAX + 0x38],EDX
// 0048deaa: MOV EDX,dword ptr [0x02d052bc]
//   XREF to: 02d052bc (READ)
// 0048deb0: MOV dword ptr [EAX + 0x3c],EDX
// 0048deb3: MOV EDX,dword ptr [0x02d052c0]
//   XREF to: 02d052c0 (READ)
// 0048deb9: MOV dword ptr [EAX + 0x40],EDX
// 0048debc: MOV EDX,dword ptr [0x02d052e8]
//   XREF to: 02d052e8 (READ)
// 0048dec2: MOV dword ptr [EAX + 0x44],EDX
// 0048dec5: MOV EDX,dword ptr [0x02d052ec]
//   XREF to: 02d052ec (READ)
// 0048decb: MOV dword ptr [EAX + 0x48],EDX
// 0048dece: MOV EDX,dword ptr [0x02d052f0]
//   XREF to: 02d052f0 (READ)
// 0048ded4: MOV dword ptr [EAX + 0x4c],EDX
// 0048ded7: MOV EDX,dword ptr [0x02d052f4]
//   XREF to: 02d052f4 (READ)
// 0048dedd: MOV dword ptr [EAX + 0x50],EDX
// 0048dee0: MOV EDX,dword ptr [0x02d052f8]
//   XREF to: 02d052f8 (READ)
// 0048dee6: MOV dword ptr [EAX + 0x54],EDX
// 0048dee9: MOV EDX,dword ptr [0x02d052fc]
//   XREF to: 02d052fc (READ)
// 0048deef: MOV dword ptr [EAX + 0x58],EDX
// 0048def2: MOV EDX,dword ptr [0x02d05300]
//   XREF to: 02d05300 (READ)
// 0048def8: MOV dword ptr [EAX + 0x5c],EDX
// 0048defb: MOV EDX,dword ptr [0x02d05304]
//   XREF to: 02d05304 (READ)
// 0048df01: MOV dword ptr [EAX + 0x60],EDX
// 0048df04: MOV EDX,dword ptr [0x02d05308]
//   XREF to: 02d05308 (READ)
// 0048df0a: MOV dword ptr [EAX + 0x64],EDX
// 0048df0d: MOV EDX,dword ptr [0x02f0d364]
//   XREF to: 02f0d364 (READ)
// 0048df13: MOV dword ptr [EAX + 0x68],EDX
// 0048df16: MOV EDX,dword ptr [0x02f0d368]
//   XREF to: 02f0d368 (READ)
// 0048df1c: MOV dword ptr [EAX + 0x6c],EDX
// 0048df1f: MOV EDX,dword ptr [0x02f0d36c]
//   XREF to: 02f0d36c (READ)
// 0048df25: MOV dword ptr [EAX + 0x70],EDX
// 0048df28: MOV EDX,dword ptr [0x02f0d370]
//   XREF to: 02f0d370 (READ)
// 0048df2e: MOV dword ptr [EAX + 0x74],EDX
// 0048df31: MOV EDX,dword ptr [0x02f0d374]
//   XREF to: 02f0d374 (READ)
// 0048df37: MOV dword ptr [EAX + 0x78],EDX
// 0048df3a: MOV EDX,dword ptr [0x02f0d378]
//   XREF to: 02f0d378 (READ)
// 0048df40: MOV dword ptr [EAX + 0x7c],EDX
// 0048df43: MOV EDX,dword ptr [0x02f0d37c]
//   XREF to: 02f0d37c (READ)
// 0048df49: MOV dword ptr [EAX + 0x80],EDX
// 0048df4f: MOV EDX,dword ptr [0x02f0d380]
//   XREF to: 02f0d380 (READ)
// 0048df55: MOV dword ptr [EAX + 0x84],EDX
// 0048df5b: MOV EDX,dword ptr [0x02f0d384]
//   XREF to: 02f0d384 (READ)
// 0048df61: MOV dword ptr [EAX + 0x88],EDX
// 0048df67: MOV EDX,dword ptr [0x006793c0]
//   XREF to: 006793c0 (READ)
// 0048df6d: MOV dword ptr [EAX + 0x8c],EDX
// 0048df73: RET
