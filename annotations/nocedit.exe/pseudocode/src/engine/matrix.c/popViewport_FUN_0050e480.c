// Name: engine_matrix.c_popViewport_FUN_0050e480
// Address: 0050e480
// Address Range: [[0050e480, 0050e5af]]
// Convention: __cdecl
// Signature: void engine_matrix.c_popViewport_FUN_0050e480(CDemonRenderer * this_ptr)
// Cross-references:
//   core_msnedit.cpp_FUN_0053c4f0 (0053c4f0) at 0053c66a [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_005645d0 (005645d0) at 00564725 [UNCONDITIONAL_CALL]
//   core_texlist.cpp_CTextureList_previewTexture_FUN_005dc760 (005dc760) at 005dca18 [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_popViewport_FUN_0050e480 (0048c8c0) at 0048c8c0 [UNCONDITIONAL_JUMP]
//   shape_edittool.cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80 (004a0f80) at 004a1089 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_engine_matrix_c_00635b4c
//   TerminatedCString s_s_3D_Window_unbalance_00635b5f
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

#include "nocturne.h"

void __cdecl engine_matrix_c_popViewport_FUN_0050e480(CDemonRenderer *this_ptr)

{
  g_ViewportStackIndex = g_ViewportStackIndex + -1;
  if (g_ViewportStackIndex < 0) {
    g_CurrentFilename = "..\\engine\\matrix.c";
    g_CurrentLineNumber = 0x56c;
    core_main_c_displayErrorAndQuit_FUN_00506f10("3D Window unbalance");
  }
  g_CameraOriginX = g_ViewportStack_CameraX[g_ViewportStackIndex];
  g_CameraOriginY = g_ViewportStack_CameraY[g_ViewportStackIndex];
  g_CameraOriginZ = g_ViewportStack_CameraZ[g_ViewportStackIndex];
  g_CameraRotationPitch = g_ViewportStack_RotationPitch[g_ViewportStackIndex];
  g_CameraRotationYaw = g_ViewportStack_RotationYaw[g_ViewportStackIndex];
  g_CameraRotationRoll = g_ViewportStack_RotationRoll[g_ViewportStackIndex];
  g_LightDirectionX = g_ViewportStack_ExtraState1[g_ViewportStackIndex];
  g_LightDirectionY = g_ViewportStack_ExtraState2[g_ViewportStackIndex];
  g_LightDirectionZ = g_ViewportStack_ExtraState3[g_ViewportStackIndex];
  g_ViewportCenterXFixed = g_ViewportStack_CenterX[g_ViewportStackIndex];
  g_ViewportCenterYFixed = g_ViewportStack_CenterY[g_ViewportStackIndex];
  g_ViewportRightFixed = g_ViewportStack_RightFixed[g_ViewportStackIndex];
  g_ViewportBottomFixed = g_ViewportStack_BottomFixed[g_ViewportStackIndex];
  g_ProjectionScale = g_ViewportStack_ProjectionScale[g_ViewportStackIndex];
  g_ClipLeft = g_ViewportStack_ClipLeft[g_ViewportStackIndex];
  g_ClipRight = g_ViewportStack_ClipRight[g_ViewportStackIndex];
  g_ClipTop = g_ViewportStack_ClipTop[g_ViewportStackIndex];
  g_ClipBottom = g_ViewportStack_ClipBottom[g_ViewportStackIndex];
  return;
}


// Assembly code:
// 0050e480: MOV EDX,dword ptr [0x02f0d61c]
//   Label: engine_matrix.c_popViewport_FUN_0050e480
//   XREF to: 02f0d61c (READ)
// 0050e486: DEC EDX
// 0050e487: MOV dword ptr [0x02f0d61c],EDX
//   XREF to: 02f0d61c (WRITE)
// 0050e48d: TEST EDX,EDX
// 0050e48f: JL 0x0050e584
//   XREF to: 0050e584 (CONDITIONAL_JUMP)
// 0050e495: MOV EAX,[0x02f0d61c]
//   Label: LAB_0050e495
//   XREF to: 02f0d61c (READ)
// 0050e49a: MOV EDX,dword ptr [EAX*0x4 + 0x2f0d6e8]
//   XREF to: 02f0d6e8 (DATA)
// 0050e4a1: MOV dword ptr [0x02d052c4],EDX
//   XREF to: 02d052c4 (WRITE)
// 0050e4a7: MOV EDX,dword ptr [EAX*0x4 + 0x2f0d710]
//   XREF to: 02f0d710 (DATA)
// 0050e4ae: MOV dword ptr [0x02d052c8],EDX
//   XREF to: 02d052c8 (WRITE)
// 0050e4b4: MOV EDX,dword ptr [EAX*0x4 + 0x2f0d738]
//   XREF to: 02f0d738 (DATA)
// 0050e4bb: MOV dword ptr [0x02d052cc],EDX
//   XREF to: 02d052cc (WRITE)
// 0050e4c1: MOV EDX,dword ptr [EAX*0x4 + 0x2f0d760]
//   XREF to: 02f0d760 (DATA)
// 0050e4c8: MOV dword ptr [0x02d052d0],EDX
//   XREF to: 02d052d0 (WRITE)
// 0050e4ce: MOV EDX,dword ptr [EAX*0x4 + 0x2f0d788]
//   XREF to: 02f0d788 (DATA)
// 0050e4d5: MOV dword ptr [0x02d052d4],EDX
//   XREF to: 02d052d4 (WRITE)
// 0050e4db: MOV EDX,dword ptr [EAX*0x4 + 0x2f0d7b0]
//   XREF to: 02f0d7b0 (DATA)
// 0050e4e2: MOV dword ptr [0x02d052d8],EDX
//   XREF to: 02d052d8 (WRITE)
// 0050e4e8: MOV EDX,dword ptr [EAX*0x4 + 0x2f0d7d8]
//   XREF to: 02f0d7d8 (DATA)
// 0050e4ef: MOV dword ptr [0x02d052dc],EDX
//   XREF to: 02d052dc (WRITE)
// 0050e4f5: MOV EDX,dword ptr [EAX*0x4 + 0x2f0d800]
//   XREF to: 02f0d800 (DATA)
// 0050e4fc: MOV dword ptr [0x02d052e0],EDX
//   XREF to: 02d052e0 (WRITE)
// 0050e502: MOV EDX,dword ptr [EAX*0x4 + 0x2f0d828]
//   XREF to: 02f0d828 (DATA)
// 0050e509: MOV dword ptr [0x02d052e4],EDX
//   XREF to: 02d052e4 (WRITE)
// 0050e50f: MOV EDX,dword ptr [EAX*0x4 + 0x2f0d620]
//   XREF to: 02f0d620 (DATA)
// 0050e516: MOV dword ptr [0x02d02548],EDX
//   XREF to: 02d02548 (WRITE)
// 0050e51c: MOV EDX,dword ptr [EAX*0x4 + 0x2f0d648]
//   XREF to: 02f0d648 (DATA)
// 0050e523: MOV dword ptr [0x02d0254c],EDX
//   XREF to: 02d0254c (WRITE)
// 0050e529: MOV EDX,dword ptr [EAX*0x4 + 0x2f0d670]
//   XREF to: 02f0d670 (DATA)
// 0050e530: MOV dword ptr [0x02d02550],EDX
//   XREF to: 02d02550 (WRITE)
// 0050e536: MOV EDX,dword ptr [EAX*0x4 + 0x2f0d698]
//   XREF to: 02f0d698 (DATA)
// 0050e53d: MOV dword ptr [0x02d02554],EDX
//   XREF to: 02d02554 (WRITE)
// 0050e543: MOV EDX,dword ptr [EAX*0x4 + 0x2f0d6c0]
//   XREF to: 02f0d6c0 (DATA)
// 0050e54a: MOV dword ptr [0x006793c0],EDX
//   XREF to: 006793c0 (WRITE)
// 0050e550: MOV EDX,dword ptr [EAX*0x4 + 0x2f0d850]
//   XREF to: 02f0d850 (DATA)
// 0050e557: MOV dword ptr [0x02d02558],EDX
//   XREF to: 02d02558 (WRITE)
// 0050e55d: MOV EDX,dword ptr [EAX*0x4 + 0x2f0d878]
//   XREF to: 02f0d878 (DATA)
// 0050e564: MOV dword ptr [0x02d02560],EDX
//   XREF to: 02d02560 (WRITE)
// 0050e56a: MOV EDX,dword ptr [EAX*0x4 + 0x2f0d8a0]
//   XREF to: 02f0d8a0 (DATA)
// 0050e571: MOV EAX,dword ptr [EAX*0x4 + 0x2f0d8c8]
//   XREF to: 02f0d8c8 (DATA)
// 0050e578: MOV dword ptr [0x02d0255c],EDX
//   XREF to: 02d0255c (WRITE)
// 0050e57e: MOV [0x02d02564],EAX
//   XREF to: 02d02564 (WRITE)
// 0050e583: RET
// 0050e584: PUSH ESI
//   Label: LAB_0050e584
// 0050e585: PUSH EBX
// 0050e586: MOV EBX,0x635b4c
//   XREF to: 00635b4c (PARAM)
// 0050e58b: MOV ESI,0x56c
// 0050e590: PUSH 0x635b5f
//   XREF to: 00635b5f (DATA)
// 0050e595: MOV dword ptr [0x02f0ca48],EBX
//   XREF to: 02f0ca48 (WRITE)
// 0050e59b: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 0050e5a1: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0050e5a6: ADD ESP,0x4
// 0050e5a9: POP EBX
// 0050e5aa: POP ESI
// 0050e5ab: JMP 0x0050e495
//   XREF to: 0050e495 (UNCONDITIONAL_JUMP)
