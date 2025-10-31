// Name: core_dcamera.cpp_CDemonCamera_generateFogGrid_FUN_004529a0
// Address: 004529a0
// Address Range: [[004529a0, 004529ad]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_CDemonCamera_generateFogGrid_FUN_004529a0(CDemonCamera * this_ptr)
// Cross-references:
//   core_dcamera.cpp_CDemonCamera_initLookupTable_FUN_0044c0f0 (0044c0f0) at 0044c11a [UNCONDITIONAL_CALL]
// Globals:
//   SFogGrid g_CameraFogGrid
// Function calls:
//   core_dcamera.cpp_generateFogGrid_FUN_0044bba0

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_generateFogGrid_FUN_004529a0(CDemonCamera *this_ptr)

{
  core_dcamera_cpp_generateFogGrid_FUN_0044bba0(&g_CameraFogGrid);
  return;
}


// Assembly code:
// 004529a0: PUSH 0x1519384
//   Label: core_dcamera.cpp_CDemonCamera_generateFogGrid_FUN_004529a0
//   XREF to: 01519384 (DATA)
// 004529a5: CALL core_dcamera.cpp_generateFogGrid_FUN_0044bba0
//   XREF to: 0044bba0 (UNCONDITIONAL_CALL)
// 004529aa: ADD ESP,0x4
// 004529ad: RET
