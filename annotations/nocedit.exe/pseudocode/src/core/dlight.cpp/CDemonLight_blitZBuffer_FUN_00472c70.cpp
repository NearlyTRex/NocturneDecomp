// Name: core_dlight.cpp_CDemonLight_blitZBuffer_FUN_00472c70
// Address: 00472c70
// Address Range: [[00472c70, 00472d2c]]
// Convention: __cdecl
// Signature: void core_dlight.cpp_CDemonLight_blitZBuffer_FUN_00472c70(CDemonLight * this_ptr, CRect * source_rect)
// Cross-references:
//   core_dlight.cpp_CDemonLight_restoreDirtyRegions_FUN_00472f80 (00472f80) at 004731b7 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_dlight_cpp_0061efc4
//   TerminatedCString s_CDemonLight_blitZBuffer__0061efd7
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_dstrender.cpp_memcpyMMX_FUN_00492001
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

void __cdecl
core_dlight_cpp_CDemonLight_blitZBuffer_FUN_00472c70(CDemonLight *this_ptr,CRect *source_rect)

{
  int iVar1;
  int iVar2;
  
  if (this_ptr->restore_memory_size == 0) {
    g_CurrentFilename = "..\\core\\dlight.cpp";
    g_CurrentLineNumber = 0x147;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonLight::blitZBuffer - No master Z buffer");
  }
  if (((((this_ptr->base).viewport_rect.left < source_rect->top) &&
       ((this_ptr->base).viewport_rect.top < source_rect->bottom)) &&
      (source_rect->left < (this_ptr->base).viewport_rect.right)) &&
     ((iVar2 = source_rect->right, iVar2 < (this_ptr->base).viewport_rect.bottom &&
      (iVar2 <= source_rect->bottom)))) {
    do {
      iVar1 = this_ptr->shadow_map_width * iVar2 + source_rect->left;
      iVar2 = iVar2 + 1;
      core_dstrender_cpp_memcpyMMX_FUN_00492001
                (this_ptr->shadow_depth_buffer + iVar1,
                 (void *)(this_ptr->restore_memory_size + iVar1 * 2),
                 (source_rect->top - source_rect->left) * 2 + 2);
    } while (iVar2 <= source_rect->bottom);
  }
  return;
}


// Assembly code:
// 00472c70: PUSH EBX
//   Label: core_dlight.cpp_CDemonLight_blitZBuffer_FUN_00472c70
// 00472c71: PUSH ESI
// 00472c72: PUSH EDI
// 00472c73: PUSH EBP
// 00472c74: MOV EBP,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00472c78: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00472c7c: CMP dword ptr [EBP + 0x2f9c],0x0
// 00472c83: JZ 0x00472d05
//   XREF to: 00472d05 (CONDITIONAL_JUMP)
// 00472c89: MOV EDI,dword ptr [EBP + 0x11d4]
//   Label: LAB_00472c89
// 00472c8f: CMP EDI,dword ptr [ESI + 0x4]
// 00472c92: JGE 0x00472d00
//   XREF to: 00472d00 (CONDITIONAL_JUMP)
// 00472c98: MOV EDX,dword ptr [EBP + 0x11d8]
// 00472c9e: CMP EDX,dword ptr [ESI + 0xc]
// 00472ca1: JGE 0x00472d00
//   XREF to: 00472d00 (CONDITIONAL_JUMP)
// 00472ca3: MOV ECX,dword ptr [EBP + 0x11dc]
// 00472ca9: CMP ECX,dword ptr [ESI]
// 00472cab: JLE 0x00472d00
//   XREF to: 00472d00 (CONDITIONAL_JUMP)
// 00472cad: MOV EBX,dword ptr [EBP + 0x11e0]
// 00472cb3: MOV EAX,dword ptr [ESI + 0x8]
// 00472cb6: CMP EAX,EBX
// 00472cb8: JGE 0x00472d00
//   XREF to: 00472d00 (CONDITIONAL_JUMP)
// 00472cba: MOV EDI,EAX
// 00472cbc: CMP EDI,dword ptr [ESI + 0xc]
// 00472cbf: JG 0x00472d00
//   XREF to: 00472d00 (CONDITIONAL_JUMP)
// 00472cc1: MOV EAX,dword ptr [EBP + 0x1cc0]
//   Label: LAB_00472cc1
// 00472cc7: IMUL EAX,EDI
// 00472cca: ADD EAX,dword ptr [ESI]
// 00472ccc: MOV EDX,dword ptr [EBP + 0x2f94]
// 00472cd2: ADD EAX,EAX
// 00472cd4: LEA ECX,[EDX + EAX*0x1]
// 00472cd7: MOV EDX,dword ptr [EBP + 0x2f9c]
// 00472cdd: MOV EBX,dword ptr [ESI]
// 00472cdf: ADD EDX,EAX
// 00472ce1: MOV EAX,dword ptr [ESI + 0x4]
// 00472ce4: SUB EAX,EBX
// 00472ce6: ADD EAX,EAX
// 00472ce8: ADD EAX,0x2
// 00472ceb: PUSH EAX
// 00472cec: PUSH EDX
// 00472ced: PUSH ECX
// 00472cee: INC EDI
// 00472cef: CALL core_dstrender.cpp_memcpyMMX_FUN_00492001
//   XREF to: 00492001 (UNCONDITIONAL_CALL)
// 00472cf4: MOV EAX,dword ptr [ESI + 0xc]
// 00472cf7: ADD ESP,0xc
// 00472cfa: CMP EDI,EAX
// 00472cfc: JLE 0x00472cc1
//   XREF to: 00472cc1 (CONDITIONAL_JUMP)
// 00472cfe: MOV EAX,EAX
// 00472d00: POP EBP
//   Label: LAB_00472d00
// 00472d01: POP EDI
// 00472d02: POP ESI
// 00472d03: POP EBX
// 00472d04: RET
// 00472d05: MOV ECX,0x61efc4
//   Label: LAB_00472d05
//   XREF to: 0061efc4 (PARAM)
// 00472d0a: MOV EBX,0x147
// 00472d0f: PUSH 0x61efd7
//   XREF to: 0061efd7 (DATA)
// 00472d14: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00472d1a: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 00472d20: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00472d25: ADD ESP,0x4
// 00472d28: JMP 0x00472c89
//   XREF to: 00472c89 (UNCONDITIONAL_JUMP)
