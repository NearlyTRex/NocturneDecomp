// Name: engine_drender.cpp_CDemonRenderer_setFaceCount_FUN_0048cac0
// Address: 0048cac0
// Address Range: [[0048cac0, 0048cad0]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_setFaceCount_FUN_0048cac0(CDemonRenderer * this_ptr, int value)
// Cross-references:
//   core_dlight.cpp_CDemonLight_beginBackgroundScene_FUN_00472e40 (00472e40) at 00472ef9 [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_beginScene_FUN_00472a80 (00472a80) at 00472bf2 [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_endBackgroundScene_FUN_00472f30 (00472f30) at 00472f72 [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_endScene_FUN_00472d30 (00472d30) at 00472da3 [UNCONDITIONAL_CALL]
//   core_glass.cpp_CGlass_FUN_004e9ca0 (004e9ca0) at 004e9d07 [UNCONDITIONAL_CALL]
//   core_setdir.cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0 (005751d0) at 00575637 [UNCONDITIONAL_CALL]
//   core_setdir.cpp_CZThumb_saveZBufferTable_FUN_00574910 (00574910) at 00574ae0 [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50 (0048ab50) at 0048aba6 [UNCONDITIONAL_CALL]
// Globals:
//   int g_TexturesDisabled

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_setFaceCount_FUN_0048cac0(CDemonRenderer *this_ptr,int value)

{
  g_TexturesDisabled = value;
  this_ptr->face_count = value;
  return;
}


// Assembly code:
// 0048cac0: MOV EAX,dword ptr [ESP + 0x8]
//   Label: engine_drender.cpp_CDemonRenderer_setFaceCount_FUN_0048cac0
//   XREF to: Stack[0x8] (READ)
// 0048cac4: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 0048cac8: MOV [0x00772a74],EAX
//   XREF to: 00772a74 (WRITE)
// 0048cacd: MOV dword ptr [EDX + 0x4],EAX
// 0048cad0: RET
