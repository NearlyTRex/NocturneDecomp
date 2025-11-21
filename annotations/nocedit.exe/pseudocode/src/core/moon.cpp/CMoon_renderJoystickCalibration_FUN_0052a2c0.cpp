// Name: core_moon.cpp_CMoon_renderJoystickCalibration_FUN_0052a2c0
// Address: 0052a2c0
// Address Range: [[0052a2c0, 0052a3e0]]
// Convention: __cdecl
// Signature: void core_moon.cpp_CMoon_renderJoystickCalibration_FUN_0052a2c0(CMoon * this_ptr)
// Cross-references:
//   core_menu.cpp_SetUpGamepadControls_FUN_005104d0 (005104d0) at 005104ef [UNCONDITIONAL_CALL]
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CDemonRenderer g_CDemonRendererInstance
//   DWORD g_JoyXPos
//   DWORD g_JoyYPos
//   CDemonSet g_CDemonSetInstance
//   undefined4 DAT_0326f0e8
//   undefined4 DAT_0326f0ec
//   undefined4 DAT_0326f0f0
//   undefined4 DAT_0326f0f4
//   undefined4 DAT_0326f0f8
//   CVector3f g_ZeroVector
// Function calls:
//   core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00477850
//   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
//   engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0048c650
//   engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0
//   engine_matrix.c_normalizeVector3DFloat_FUN_0050d9f0
//   wincore_windll.cpp_clearScreen_FUN_005b3e70
//   wincore_windll.cpp_clearZBuffer_FUN_005b3ed4

#include "nocturne.h"

void __cdecl core_moon_cpp_CMoon_renderJoystickCalibration_FUN_0052a2c0(CMoon *this_ptr)

{
  CDemonSet *pCVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  byte bVar3;
  int in_stack_00000020;
  undefined4 auStackY_1000 [1011];
  
  bVar3 = 0;
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  wincore_windll_cpp_clearZBuffer_FUN_005b3ed4();
  engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
            (g_CDemonRendererPtr,(CVector3i *)&g_ZeroVector);
  engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_0048c650(g_CDemonRendererPtr,56.0);
  engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0(g_CDemonRendererPtr);
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr,(CVector3f *)&stack0xfffffff8);
  g_CDemonSetPtr->rendering_mode = 1;
  iVar2 = g_JoyYPos - 0x8000;
  engine_matrix_c_normalizeVector3DFloat_FUN_0050d9f0((CVector3i *)&stack0xfffffff0);
  pCVar1 = g_CDemonSetPtr;
  *(undefined4 *)(&stack0xfffffff4 + (uint)bVar3 * -8) =
       *(undefined4 *)(&stack0xffffffec + (uint)bVar3 * -8);
  *(undefined4 *)(&stack0xfffffff8 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
       *(undefined4 *)(&stack0xfffffff0 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  (g_CDemonSetPtr->light_direction).x = iVar2;
  (pCVar1->light_direction).y = 0x8000;
  (pCVar1->light_direction).z = 0;
  pCVar1->ambient_base_quick = 0x280;
  core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00477850
            ((CKeyFramedModel *)(in_stack_00000020 + 8),(CKeyFramedModelInstance *)0x0,0,0x205);
  g_CDemonSetPtr->rendering_mode = 0;
  return;
}


// Assembly code:
// 0052a2c0: PUSH EBX
//   Label: core_moon.cpp_CMoon_renderJoystickCalibration_FUN_0052a2c0
// 0052a2c1: PUSH ESI
// 0052a2c2: PUSH EDI
// 0052a2c3: PUSH EBP
// 0052a2c4: SUB ESP,0x24
// 0052a2c7: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 0052a2cc: CALL wincore_windll.cpp_clearZBuffer_FUN_005b3ed4
//   XREF to: 005b3ed4 (UNCONDITIONAL_CALL)
// 0052a2d1: PUSH 0x3f87558
//   XREF to: 03f87558 (DATA)
// 0052a2d6: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0052a2dc: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 0052a2dd: CALL engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
//   XREF to: 0048c150 (UNCONDITIONAL_CALL)
// 0052a2e2: ADD ESP,0x8
// 0052a2e5: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0052a2eb: PUSH 0x42600000
// 0052a2f0: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 0052a2f1: CALL engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0048c650
//   XREF to: 0048c650 (UNCONDITIONAL_CALL)
// 0052a2f6: ADD ESP,0x8
// 0052a2f9: PUSH 0x3f87558
//   XREF to: 03f87558 (DATA)
// 0052a2fe: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0052a304: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 0052a305: MOV EBP,0x42100000
// 0052a30a: CALL engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0
//   XREF to: 0048c1d0 (UNCONDITIONAL_CALL)
// 0052a30f: ADD ESP,0x8
// 0052a312: LEA EAX,[ESP + 0x18]
//   XREF to: Stack[-0x1c] (DATA)
// 0052a316: XOR ESI,ESI
// 0052a318: PUSH EAX
// 0052a319: MOV EAX,[0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0052a31e: MOV dword ptr [ESP + 0x1c],ESI
//   XREF to: Stack[-0x1c] (WRITE)
// 0052a322: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 0052a323: MOV dword ptr [ESP + 0x24],ESI
//   XREF to: Stack[-0x18] (WRITE)
// 0052a327: MOV dword ptr [ESP + 0x28],EBP
//   XREF to: Stack[-0x14] (WRITE)
// 0052a32b: CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   XREF to: 0048c450 (UNCONDITIONAL_CALL)
// 0052a330: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
// 0052a335: MOV dword ptr [EAX + 0x15ae70],0x1
//   XREF to: 0326f0e8 (WRITE)
// 0052a33f: MOV EAX,[0x02d051f8]
//   XREF to: 02d051f8 (READ)
// 0052a344: ADD ESP,0x8
// 0052a347: ADD EAX,0xffff8000
// 0052a34c: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0052a350: MOV EAX,[0x02d051fc]
//   XREF to: 02d051fc (READ)
// 0052a355: ADD EAX,0xffff8000
// 0052a35a: LEA EDI,[ESP + 0xc]
//   XREF to: Stack[-0x28] (DATA)
// 0052a35e: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0052a362: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x28] (DATA)
// 0052a366: MOV EDX,0x8000
// 0052a36b: PUSH EAX
// 0052a36c: LEA ESI,[ESP + 0x4]
//   XREF to: Stack[-0x34] (DATA)
// 0052a370: MOV dword ptr [ESP + 0x18],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 0052a374: CALL engine_matrix.c_normalizeVector3DFloat_FUN_0050d9f0
//   XREF to: 0050d9f0 (UNCONDITIONAL_CALL)
// 0052a379: LEA ESI,[ESP + 0x4]
//   XREF to: Stack[-0x34] (DATA)
// 0052a37d: ADD ESP,0x4
// 0052a380: MOVSD ES:EDI,ESI
// 0052a381: MOVSD ES:EDI,ESI
// 0052a382: MOVSD ES:EDI,ESI
// 0052a383: MOV EDX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 0052a389: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x28] (READ)
// 0052a38d: MOV dword ptr [EDX + 0x15ae74],EAX
//   XREF to: 0326f0ec (WRITE)
// 0052a393: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x24] (READ)
// 0052a397: MOV dword ptr [EDX + 0x15ae78],EAX
//   XREF to: 0326f0f0 (WRITE)
// 0052a39d: PUSH 0x205
// 0052a3a2: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x20] (READ)
// 0052a3a6: PUSH 0x0
// 0052a3a8: MOV dword ptr [EDX + 0x15ae7c],EAX
//   XREF to: 0326f0f4 (WRITE)
// 0052a3ae: MOV EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x4] (READ)
// 0052a3b2: PUSH 0x0
// 0052a3b4: ADD EAX,0x8
// 0052a3b7: PUSH EAX
// 0052a3b8: MOV dword ptr [EDX + 0x15ae80],0x280
//   XREF to: 0326f0f8 (WRITE)
// 0052a3c2: CALL core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00477850
//   XREF to: 00477850 (UNCONDITIONAL_CALL)
// 0052a3c7: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (DATA)
//   XREF to: 006810c8 (READ)
// 0052a3cc: ADD ESP,0x10
// 0052a3cf: MOV dword ptr [EAX + 0x15ae70],0x0
//   XREF to: 0326f0e8 (WRITE)
// 0052a3d9: ADD ESP,0x24
// 0052a3dc: POP EBP
// 0052a3dd: POP EDI
// 0052a3de: POP ESI
// 0052a3df: POP EBX
// 0052a3e0: RET
