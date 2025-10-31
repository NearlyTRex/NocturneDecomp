// Name: core_dcamera.cpp_resetFogSamplingOffset_FUN_0044bb70
// Address: 0044bb70
// Address Range: [[0044bb70, 0044bb92]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_resetFogSamplingOffset_FUN_0044bb70(SFogGrid * fog)
// Cross-references:
//   core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_004529b0 (004529b0) at 004529dd [UNCONDITIONAL_CALL]
//   core_dcamera.cpp_generateFogGrid_FUN_0044bba0 (0044bba0) at 0044bdb9 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl core_dcamera_cpp_resetFogSamplingOffset_FUN_0044bb70(SFogGrid *fog)

{
  (fog->sampling_offset).y = 0;
  (fog->sampling_offset).z = 0;
  (fog->sampling_offset).x = 0;
  return;
}


// Assembly code:
// 0044bb70: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_dcamera.cpp_resetFogSamplingOffset_FUN_0044bb70
//   XREF to: Stack[0x4] (READ)
// 0044bb74: MOV dword ptr [EAX + 0x1004],0x0
// 0044bb7e: MOV dword ptr [EAX + 0x1008],0x0
// 0044bb88: MOV dword ptr [EAX + 0x1000],0x0
// 0044bb92: RET
