// Name: core_dlight.cpp_CDemonLight_initializeVisibilityBuffer_FUN_00475fc0
// Address: 00475fc0
// Address Range: [[00475fc0, 00475ff0]]
// Convention: __cdecl
// Signature: void core_dlight.cpp_CDemonLight_initializeVisibilityBuffer_FUN_00475fc0(CDemonLight * this_ptr)
// Cross-references:
//   core_dcamera.cpp_CDemonCamera_precomputeLight_FUN_0044de10 (0044de10) at 0044df3b [UNCONDITIONAL_CALL]
// Function calls:
//   core_event.cpp_FUN_004b19d0

#include "nocturne.h"

void __cdecl
core_dlight_cpp_CDemonLight_initializeVisibilityBuffer_FUN_00475fc0(CDemonLight *this_ptr)

{
  core_event_cpp_FUN_004b19d0();
  return;
}


// Assembly code:
// 00475fc0: PUSH EBX
//   Label: core_dlight.cpp_CDemonLight_initializeVisibilityBuffer_FUN_00475fc0
// 00475fc1: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00475fc5: MOV EDX,dword ptr [ECX + 0x1cc0]
// 00475fcb: MOV EBX,dword ptr [ECX + 0x1cc4]
// 00475fd1: IMUL EDX,EBX
// 00475fd4: MOV EAX,EDX
// 00475fd6: SAR EDX,0x1f
// 00475fd9: SHL EDX,0x3
// 00475fdc: SBB EAX,EDX
// 00475fde: SAR EAX,0x3
// 00475fe1: PUSH EAX
// 00475fe2: MOV ECX,dword ptr [ECX + 0x2fa0]
// 00475fe8: XOR EDX,EDX
// 00475fea: CALL core_event.cpp_FUN_004b19d0
//   XREF to: 004b19d0 (UNCONDITIONAL_CALL)
// 00475fef: POP EBX
// 00475ff0: RET
