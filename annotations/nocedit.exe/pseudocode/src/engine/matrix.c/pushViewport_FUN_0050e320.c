// Name: engine_matrix.c_pushViewport_FUN_0050e320
// Address: 0050e320
// Address Range: [[0050e320, 0050e479]]
// Convention: __cdecl
// Signature: void engine_matrix.c_pushViewport_FUN_0050e320(int x, int y, int width, int height)
// Cross-references:
//   core_msnedit.cpp_FUN_0053c4f0 (0053c4f0) at 0053c58a [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_005645d0 (005645d0) at 00564606 [UNCONDITIONAL_CALL]
//   core_texlist.cpp_CTextureList_previewTexture_FUN_005dc760 (005dc760) at 005dc81c [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_pushViewport_FUN_0048c890 (0048c890) at 0048c8a6 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80 (004a0f80) at 004a1020 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_engine_matrix_c_00635b25
//   TerminatedCString s_Too_many_3D_windows_00635b38
//   int g_ProjectionScale = 0x10000
//   int g_ViewportCenterXFixed
//   int g_ViewportCenterYFixed
//   int g_ViewportRightFixed
//   int g_ViewportBottomFixed
//   int g_ClipLeft
//   int g_ClipTop
//   int g_ClipRight
//   int g_ClipBottom
//   int g_CameraOriginX
//   int g_CameraOriginY
//   int g_CameraOriginZ
//   int g_CameraRotationPitch
//   int g_CameraRotationYaw
//   int g_CameraRotationRoll
//   int g_LightDirectionX
//   int g_LightDirectionY
//   int g_LightDirectionZ
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   int g_ViewportStackIndex
//   int[10] g_ViewportStack_CenterX
//   int[10] g_ViewportStack_CenterY
//   int[10] g_ViewportStack_RightFixed
//   int[10] g_ViewportStack_BottomFixed
//   int[10] g_ViewportStack_ProjectionScale
//   int[10] g_ViewportStack_CameraX
//   int[10] g_ViewportStack_CameraY
//   int[10] g_ViewportStack_CameraZ
//   int[10] g_ViewportStack_RotationPitch
//   int[10] g_ViewportStack_RotationYaw
//   int[10] g_ViewportStack_RotationRoll
//   int[10] g_ViewportStack_ExtraState1
//   int[10] g_ViewportStack_ExtraState2
//   int[10] g_ViewportStack_ExtraState3
//   int[10] g_ViewportStack_ClipLeft
//   int[10] g_ViewportStack_ClipRight
//   int[10] g_ViewportStack_ClipTop
//   int[10] g_ViewportStack_ClipBottom
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   engine_2d.c_setupViewportAndClipping_FUN_00401800

#include "nocturne.h"

void __cdecl engine_matrix_c_pushViewport_FUN_0050e320(int x,int y,int width,int height)

{
  int in_stack_00000014;
  
  g_ViewportStack_CameraX[g_ViewportStackIndex] = g_CameraOriginX;
  g_ViewportStack_CameraY[g_ViewportStackIndex] = g_CameraOriginY;
  g_ViewportStack_CameraZ[g_ViewportStackIndex] = g_CameraOriginZ;
  g_ViewportStack_RotationPitch[g_ViewportStackIndex] = g_CameraRotationPitch;
  g_ViewportStack_RotationYaw[g_ViewportStackIndex] = g_CameraRotationYaw;
  g_ViewportStack_RotationRoll[g_ViewportStackIndex] = g_CameraRotationRoll;
  g_ViewportStack_ExtraState1[g_ViewportStackIndex] = g_LightDirectionX;
  g_ViewportStack_ExtraState2[g_ViewportStackIndex] = g_LightDirectionY;
  g_ViewportStack_ExtraState3[g_ViewportStackIndex] = g_LightDirectionZ;
  g_ViewportStack_CenterX[g_ViewportStackIndex] = g_ViewportCenterXFixed;
  g_ViewportStack_CenterY[g_ViewportStackIndex] = g_ViewportCenterYFixed;
  g_ViewportStack_RightFixed[g_ViewportStackIndex] = g_ViewportRightFixed;
  g_ViewportStack_BottomFixed[g_ViewportStackIndex] = g_ViewportBottomFixed;
  g_ViewportStack_ProjectionScale[g_ViewportStackIndex] = g_ProjectionScale;
  g_ViewportStack_ClipLeft[g_ViewportStackIndex] = g_ClipLeft;
  g_ViewportStack_ClipRight[g_ViewportStackIndex] = g_ClipRight;
  g_ViewportStack_ClipTop[g_ViewportStackIndex] = g_ClipTop;
  g_ViewportStack_ClipBottom[g_ViewportStackIndex] = g_ClipBottom;
  g_ViewportStackIndex = g_ViewportStackIndex + 1;
  if (9 < g_ViewportStackIndex) {
    g_CurrentFilename = "..\\engine\\matrix.c";
    g_CurrentLineNumber = 0x540;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Too many 3D windows");
  }
  engine_2d_c_setupViewportAndClipping_FUN_00401800(y,width,y + height,width + in_stack_00000014);
  g_ProjectionScale = 0x10000;
  return;
}


// Assembly code:
// 0050e320: PUSH EBP
//   Label: engine_matrix.c_pushViewport_FUN_0050e320
// 0050e321: MOV EAX,[0x02f0d61c]
//   XREF to: 02f0d61c (READ)
// 0050e326: MOV EDX,dword ptr [0x02d052c4]
//   XREF to: 02d052c4 (READ)
// 0050e32c: MOV dword ptr [EAX*0x4 + 0x2f0d6e8],EDX
//   XREF to: 02f0d6e8 (DATA)
// 0050e333: MOV EDX,dword ptr [0x02d052c8]
//   XREF to: 02d052c8 (READ)
// 0050e339: MOV dword ptr [EAX*0x4 + 0x2f0d710],EDX
//   XREF to: 02f0d710 (DATA)
// 0050e340: MOV EDX,dword ptr [0x02d052cc]
//   XREF to: 02d052cc (READ)
// 0050e346: MOV dword ptr [EAX*0x4 + 0x2f0d738],EDX
//   XREF to: 02f0d738 (DATA)
// 0050e34d: MOV EDX,dword ptr [0x02d052d0]
//   XREF to: 02d052d0 (READ)
// 0050e353: MOV dword ptr [EAX*0x4 + 0x2f0d760],EDX
//   XREF to: 02f0d760 (DATA)
// 0050e35a: MOV EDX,dword ptr [0x02d052d4]
//   XREF to: 02d052d4 (READ)
// 0050e360: MOV dword ptr [EAX*0x4 + 0x2f0d788],EDX
//   XREF to: 02f0d788 (DATA)
// 0050e367: MOV EDX,dword ptr [0x02d052d8]
//   XREF to: 02d052d8 (READ)
// 0050e36d: MOV dword ptr [EAX*0x4 + 0x2f0d7b0],EDX
//   XREF to: 02f0d7b0 (DATA)
// 0050e374: MOV EDX,dword ptr [0x02d052dc]
//   XREF to: 02d052dc (READ)
// 0050e37a: MOV dword ptr [EAX*0x4 + 0x2f0d7d8],EDX
//   XREF to: 02f0d7d8 (DATA)
// 0050e381: MOV EDX,dword ptr [0x02d052e0]
//   XREF to: 02d052e0 (READ)
// 0050e387: MOV dword ptr [EAX*0x4 + 0x2f0d800],EDX
//   XREF to: 02f0d800 (DATA)
// 0050e38e: MOV EDX,dword ptr [0x02d052e4]
//   XREF to: 02d052e4 (READ)
// 0050e394: MOV dword ptr [EAX*0x4 + 0x2f0d828],EDX
//   XREF to: 02f0d828 (DATA)
// 0050e39b: MOV EDX,dword ptr [0x02d02548]
//   XREF to: 02d02548 (READ)
// 0050e3a1: MOV dword ptr [EAX*0x4 + 0x2f0d620],EDX
//   XREF to: 02f0d620 (DATA)
// 0050e3a8: MOV EDX,dword ptr [0x02d0254c]
//   XREF to: 02d0254c (READ)
// 0050e3ae: MOV dword ptr [EAX*0x4 + 0x2f0d648],EDX
//   XREF to: 02f0d648 (DATA)
// 0050e3b5: MOV EDX,dword ptr [0x02d02550]
//   XREF to: 02d02550 (READ)
// 0050e3bb: MOV dword ptr [EAX*0x4 + 0x2f0d670],EDX
//   XREF to: 02f0d670 (DATA)
// 0050e3c2: MOV EDX,dword ptr [0x02d02554]
//   XREF to: 02d02554 (READ)
// 0050e3c8: MOV dword ptr [EAX*0x4 + 0x2f0d698],EDX
//   XREF to: 02f0d698 (DATA)
// 0050e3cf: MOV EDX,dword ptr [0x006793c0]
//   XREF to: 006793c0 (READ)
// 0050e3d5: MOV dword ptr [EAX*0x4 + 0x2f0d6c0],EDX
//   XREF to: 02f0d6c0 (DATA)
// 0050e3dc: MOV EDX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 0050e3e2: MOV dword ptr [EAX*0x4 + 0x2f0d850],EDX
//   XREF to: 02f0d850 (DATA)
// 0050e3e9: MOV EDX,dword ptr [0x02d02560]
//   XREF to: 02d02560 (READ)
// 0050e3ef: MOV dword ptr [EAX*0x4 + 0x2f0d878],EDX
//   XREF to: 02f0d878 (DATA)
// 0050e3f6: MOV EDX,dword ptr [0x02d0255c]
//   XREF to: 02d0255c (READ)
// 0050e3fc: MOV dword ptr [EAX*0x4 + 0x2f0d8a0],EDX
//   XREF to: 02f0d8a0 (DATA)
// 0050e403: MOV EDX,dword ptr [0x02d02564]
//   XREF to: 02d02564 (READ)
// 0050e409: MOV dword ptr [EAX*0x4 + 0x2f0d8c8],EDX
//   XREF to: 02f0d8c8 (DATA)
// 0050e410: LEA EDX,[EAX + 0x1]
// 0050e413: MOV dword ptr [0x02f0d61c],EDX
//   XREF to: 02f0d61c (WRITE)
// 0050e419: CMP EDX,0xa
// 0050e41c: JGE 0x0050e451
//   XREF to: 0050e451 (CONDITIONAL_JUMP)
// 0050e41e: MOV EAX,dword ptr [ESP + 0xc]
//   Label: LAB_0050e41e
//   XREF to: Stack[0x8] (READ)
// 0050e422: ADD EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x10] (READ)
// 0050e426: MOV EBP,dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 0050e42a: PUSH EAX
// 0050e42b: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0050e42f: ADD EAX,EBP
// 0050e431: PUSH EAX
// 0050e432: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0050e436: PUSH EAX
// 0050e437: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0050e43b: PUSH EDX
// 0050e43c: CALL engine_2d.c_setupViewportAndClipping_FUN_00401800
//   XREF to: 00401800 (UNCONDITIONAL_CALL)
// 0050e441: MOV ECX,0x10000
// 0050e446: ADD ESP,0x10
// 0050e449: MOV dword ptr [0x006793c0],ECX
//   XREF to: 006793c0 (WRITE)
// 0050e44f: POP EBP
// 0050e450: RET
// 0050e451: PUSH ESI
//   Label: LAB_0050e451
// 0050e452: PUSH EBX
// 0050e453: MOV EBX,0x635b25
//   XREF to: 00635b25 (PARAM)
// 0050e458: MOV ESI,0x540
// 0050e45d: PUSH 0x635b38
//   XREF to: 00635b38 (DATA)
// 0050e462: MOV dword ptr [0x02f0ca48],EBX
//   XREF to: 02f0ca48 (WRITE)
// 0050e468: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 0050e46e: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0050e473: ADD ESP,0x4
// 0050e476: POP EBX
// 0050e477: POP ESI
// 0050e478: JMP 0x0050e41e
//   XREF to: 0050e41e (UNCONDITIONAL_JUMP)
