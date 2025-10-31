// Name: core_dcamera.cpp_CDemonCamera_saveZBufferScanlines_FUN_00454450
// Address: 00454450
// Address Range: [[00454450, 0045449f]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_CDemonCamera_saveZBufferScanlines_FUN_00454450(CDemonCamera * this_ptr)
// Cross-references:
//   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 (0056ae50) at 0056b3c8 [UNCONDITIONAL_CALL]
// Globals:
//   uint*[1024] g_ZBufferScanlineArray
//   undefined4 g_ZBufferScanlineArray[1]
// Function calls:
//   core_event.cpp_FUN_004b1a78

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_saveZBufferScanlines_FUN_00454450(CDemonCamera *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < this_ptr->framebuffer_height) {
    iVar3 = 0;
    do {
      iVar1 = this_ptr->framebuffer_width * iVar2;
      iVar2 = iVar2 + 1;
      core_event_cpp_FUN_004b1a78
                (this_ptr->zbuffer_aligned,*(undefined4 *)((int)g_ZBufferScanlineArray + iVar3),
                 iVar2,(void *)(iVar1 * 4 + (int)this_ptr->zbuffer_aligned),
                 this_ptr->framebuffer_width << 2);
      iVar3 = iVar3 + 4;
    } while (iVar2 < this_ptr->framebuffer_height);
  }
  return;
}


// Assembly code:
// 00454450: PUSH EBX
//   Label: core_dcamera.cpp_CDemonCamera_saveZBufferScanlines_FUN_00454450
// 00454451: PUSH ESI
// 00454452: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00454456: MOV EDX,dword ptr [ESI + 0x148]
// 0045445c: XOR EBX,EBX
// 0045445e: TEST EDX,EDX
// 00454460: JLE 0x0045449d
//   XREF to: 0045449d (CONDITIONAL_JUMP)
// 00454462: PUSH EDI
// 00454463: XOR EDI,EDI
// 00454465: MOV ECX,dword ptr [ESI + 0x144]
//   Label: LAB_00454465
// 0045446b: IMUL ECX,EBX
// 0045446e: MOV EDX,dword ptr [ESI + 0x144]
// 00454474: SHL EDX,0x2
// 00454477: MOV EAX,dword ptr [ESI + 0x15c]
// 0045447d: PUSH EDX
// 0045447e: SHL ECX,0x2
// 00454481: MOV EDX,dword ptr [EDI + 0x2cf7d5c]
//   XREF to: 02cf7d5c (READ)
//   XREF to: 02cf7d60 (READ)
// 00454487: ADD ECX,EAX
// 00454489: INC EBX
// 0045448a: CALL core_event.cpp_FUN_004b1a78
//   XREF to: 004b1a78 (UNCONDITIONAL_CALL)
// 0045448f: MOV ECX,dword ptr [ESI + 0x148]
// 00454495: ADD EDI,0x4
// 00454498: CMP EBX,ECX
// 0045449a: JL 0x00454465
//   XREF to: 00454465 (CONDITIONAL_JUMP)
// 0045449c: POP EDI
// 0045449d: POP ESI
//   Label: LAB_0045449d
// 0045449e: POP EBX
// 0045449f: RET
