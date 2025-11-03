// Name: core_dcamera.cpp_CDemonCamera_restoreZBufferScanlines_FUN_004544a0
// Address: 004544a0
// Address Range: [[004544a0, 004544ef]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_CDemonCamera_restoreZBufferScanlines_FUN_004544a0(CDemonCamera * this_ptr)
// Cross-references:
//   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 (0056ae50) at 0056b406 [UNCONDITIONAL_CALL]
// Globals:
//   uint*[1024] g_ZBufferScanlineArray
//   undefined4 g_ZBufferScanlineArray[1]
// Function calls:
//   core_event.cpp_FUN_004b1a78

#include "nocturne.h"

void __cdecl
core_dcamera_cpp_CDemonCamera_restoreZBufferScanlines_FUN_004544a0(CDemonCamera *this_ptr)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < this_ptr->framebuffer_height) {
    do {
      iVar1 = iVar1 + 1;
      core_event_cpp_FUN_004b1a78();
    } while (iVar1 < this_ptr->framebuffer_height);
  }
  return;
}


// Assembly code:
// 004544a0: PUSH EBX
//   Label: core_dcamera.cpp_CDemonCamera_restoreZBufferScanlines_FUN_004544a0
// 004544a1: PUSH ESI
// 004544a2: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004544a6: MOV EDX,dword ptr [ESI + 0x148]
// 004544ac: XOR EBX,EBX
// 004544ae: TEST EDX,EDX
// 004544b0: JLE 0x004544ed
//   XREF to: 004544ed (CONDITIONAL_JUMP)
// 004544b2: PUSH EDI
// 004544b3: XOR EDI,EDI
// 004544b5: MOV EDX,dword ptr [ESI + 0x144]
//   Label: LAB_004544b5
// 004544bb: SHL EDX,0x2
// 004544be: PUSH EDX
// 004544bf: MOV EDX,dword ptr [ESI + 0x144]
// 004544c5: IMUL EDX,EBX
// 004544c8: MOV ECX,dword ptr [ESI + 0x15c]
// 004544ce: SHL EDX,0x2
// 004544d1: ADD EDX,ECX
// 004544d3: MOV ECX,dword ptr [EDI + 0x2cf7d5c]
//   XREF to: 02cf7d5c (READ)
//   XREF to: 02cf7d60 (READ)
// 004544d9: INC EBX
// 004544da: CALL core_event.cpp_FUN_004b1a78
//   XREF to: 004b1a78 (UNCONDITIONAL_CALL)
// 004544df: MOV ECX,dword ptr [ESI + 0x148]
// 004544e5: ADD EDI,0x4
// 004544e8: CMP EBX,ECX
// 004544ea: JL 0x004544b5
//   XREF to: 004544b5 (CONDITIONAL_JUMP)
// 004544ec: POP EDI
// 004544ed: POP ESI
//   Label: LAB_004544ed
// 004544ee: POP EBX
// 004544ef: RET
