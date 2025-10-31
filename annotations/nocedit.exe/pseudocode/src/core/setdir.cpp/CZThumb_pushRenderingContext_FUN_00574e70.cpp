// Name: core_setdir.cpp_CZThumb_pushRenderingContext_FUN_00574e70
// Address: 00574e70
// Address Range: [[00574e70, 00574eee]]
// Convention: __cdecl
// Signature: void core_setdir.cpp_CZThumb_pushRenderingContext_FUN_00574e70(CZThumb * this_ptr)
// Cross-references:
//   core_setdir.cpp_CZThumb_calculateActorVisibility_FUN_00574ba0 (00574ba0) at 00574bb0 [UNCONDITIONAL_CALL]
//   core_setdir.cpp_CZThumb_saveZBufferTable_FUN_00574910 (00574910) at 00574a3a [UNCONDITIONAL_CALL]
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   CDemonRenderer g_CDemonRendererInstance
//   int g_SavedWindowWidth
//   int g_SavedWindowHeight
// Function calls:
//   engine_drender.cpp_CDemonRenderer_pushViewport_FUN_0048c890
//   engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
//   engine_drender.cpp_CDemonRenderer_setProjectionScaleSimple_FUN_0048c670
//   engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0

#include "nocturne.h"

void __cdecl core_setdir_cpp_CZThumb_pushRenderingContext_FUN_00574e70(CZThumb *this_ptr)

{
  g_SavedWindowWidth = g_WindowWidth;
  g_SavedWindowHeight = g_WindowHeight;
  g_WindowWidth = this_ptr->width;
  g_WindowHeight = this_ptr->height;
  engine_drender_cpp_CDemonRenderer_pushViewport_FUN_0048c890
            (g_CDemonRendererPtr,0,0,this_ptr->width + -1,g_WindowHeight + -1);
  engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
            (g_CDemonRendererPtr,(CVector3i *)&this_ptr->camera_position);
  engine_drender_cpp_CDemonRenderer_setProjectionScaleSimple_FUN_0048c670
            (g_CDemonRendererPtr,(float)this_ptr->projection_scale);
  engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0(g_CDemonRendererPtr);
  return;
}


// Assembly code:
// 00574e70: PUSH EBX
//   Label: core_setdir.cpp_CZThumb_pushRenderingContext_FUN_00574e70
// 00574e71: PUSH ESI
// 00574e72: PUSH EDI
// 00574e73: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00574e77: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 00574e7c: MOV [0x033648ec],EAX
//   XREF to: 033648ec (WRITE)
// 00574e81: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 00574e86: MOV [0x033648f0],EAX
//   XREF to: 033648f0 (WRITE)
// 00574e8b: MOV EAX,dword ptr [EBX]
// 00574e8d: MOV [0x00679394],EAX
//   XREF to: 00679394 (WRITE)
// 00574e92: MOV EAX,dword ptr [EBX + 0x4]
// 00574e95: MOV [0x00679398],EAX
//   XREF to: 00679398 (WRITE)
// 00574e9a: DEC EAX
// 00574e9b: PUSH EAX
// 00574e9c: MOV EAX,dword ptr [EBX]
// 00574e9e: DEC EAX
// 00574e9f: PUSH EAX
// 00574ea0: PUSH 0x0
// 00574ea2: PUSH 0x0
// 00574ea4: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 00574eaa: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 00574eab: CALL engine_drender.cpp_CDemonRenderer_pushViewport_FUN_0048c890
//   XREF to: 0048c890 (UNCONDITIONAL_CALL)
// 00574eb0: ADD ESP,0x14
// 00574eb3: LEA EAX,[EBX + 0x8]
// 00574eb6: PUSH EAX
// 00574eb7: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 00574ebd: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 00574ebe: CALL engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
//   XREF to: 0048c150 (UNCONDITIONAL_CALL)
// 00574ec3: ADD ESP,0x8
// 00574ec6: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00574ecc: PUSH dword ptr [EBX + 0x20]
// 00574ecf: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 00574ed0: CALL engine_drender.cpp_CDemonRenderer_setProjectionScaleSimple_FUN_0048c670
//   XREF to: 0048c670 (UNCONDITIONAL_CALL)
// 00574ed5: ADD ESP,0x8
// 00574ed8: ADD EBX,0x14
// 00574edb: PUSH EBX
// 00574edc: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00574ee2: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 00574ee3: CALL engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0
//   XREF to: 0048c1d0 (UNCONDITIONAL_CALL)
// 00574ee8: ADD ESP,0x8
// 00574eeb: POP EDI
// 00574eec: POP ESI
// 00574eed: POP EBX
// 00574eee: RET
