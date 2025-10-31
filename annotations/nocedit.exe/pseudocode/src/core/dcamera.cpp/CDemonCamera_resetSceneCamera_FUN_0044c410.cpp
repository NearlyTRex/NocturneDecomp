// Name: core_dcamera.cpp_CDemonCamera_resetSceneCamera_FUN_0044c410
// Address: 0044c410
// Address Range: [[0044c410, 0044c41e]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_CDemonCamera_resetSceneCamera_FUN_0044c410(CDemonCamera * this_ptr)
// Cross-references:
//   core_dcamera.cpp_CDemonCamera_endScene_FUN_0044cb80 (0044cb80) at 0044cc20 [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_endScene_FUN_00472d30 (00472d30) at 00472df1 [UNCONDITIONAL_CALL]
// Globals:
//   CDemonCamera* g_CurrentSceneCamera
//   CDemonCamera* g_SkipClearBuffersSceneCamera

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_resetSceneCamera_FUN_0044c410(CDemonCamera *this_ptr)

{
  g_SkipClearBuffersSceneCamera = (CDemonCamera *)0x0;
  g_CurrentSceneCamera = (CDemonCamera *)0x0;
  return;
}


// Assembly code:
// 0044c410: XOR EDX,EDX
//   Label: core_dcamera.cpp_CDemonCamera_resetSceneCamera_FUN_0044c410
// 0044c412: MOV dword ptr [0x00902f70],EDX
//   XREF to: 00902f70 (WRITE)
// 0044c418: MOV dword ptr [0x00823a74],EDX
//   XREF to: 00823a74 (WRITE)
// 0044c41e: RET
