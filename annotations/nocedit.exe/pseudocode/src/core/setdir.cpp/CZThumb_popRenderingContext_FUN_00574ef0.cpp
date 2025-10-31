// Name: core_setdir.cpp_CZThumb_popRenderingContext_FUN_00574ef0
// Address: 00574ef0
// Address Range: [[00574ef0, 00574f13]]
// Convention: __cdecl
// Signature: void core_setdir.cpp_CZThumb_popRenderingContext_FUN_00574ef0(CZThumb * this_ptr)
// Cross-references:
//   core_setdir.cpp_CZThumb_calculateActorVisibility_FUN_00574ba0 (00574ba0) at 00574e08 [UNCONDITIONAL_CALL]
//   core_setdir.cpp_CZThumb_saveZBufferTable_FUN_00574910 (00574910) at 00574a72 [UNCONDITIONAL_CALL]
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   CDemonRenderer g_CDemonRendererInstance
//   int g_SavedWindowWidth
//   int g_SavedWindowHeight
// Function calls:
//   engine_drender.cpp_CDemonRenderer_popViewport_FUN_0050e480

#include "nocturne.h"

void __cdecl core_setdir_cpp_CZThumb_popRenderingContext_FUN_00574ef0(CZThumb *this_ptr)

{
  engine_drender_cpp_CDemonRenderer_popViewport_FUN_0050e480(g_CDemonRendererPtr);
  g_WindowWidth = g_SavedWindowWidth;
  g_WindowHeight = g_SavedWindowHeight;
  return;
}


// Assembly code:
// 00574ef0: MOV EDX,dword ptr [0x006703ec]
//   Label: core_setdir.cpp_CZThumb_popRenderingContext_FUN_00574ef0
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 00574ef6: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 00574ef7: CALL engine_drender.cpp_CDemonRenderer_popViewport_FUN_0050e480
//   XREF to: 0048c8c0 (UNCONDITIONAL_CALL)
// 00574efc: MOV EAX,[0x033648ec]
//   XREF to: 033648ec (READ)
// 00574f01: MOV [0x00679394],EAX
//   XREF to: 00679394 (WRITE)
// 00574f06: MOV EAX,[0x033648f0]
//   XREF to: 033648f0 (READ)
// 00574f0b: ADD ESP,0x4
// 00574f0e: MOV [0x00679398],EAX
//   XREF to: 00679398 (WRITE)
// 00574f13: RET
