// Name: shape_edittool.cpp_CEditorTools_dtor_FUN_0049dfb0
// Address: 0049dfb0
// Address Range: [[0049dfb0, 0049e010]]
// Convention: __cdecl
// Signature: CEditorTools * shape_edittool.cpp_CEditorTools_dtor_FUN_0049dfb0(CEditorTools * this_ptr)
// Globals:
//   TerminatedCString s_shape_edittool_cpp_00622f94
//   char* g_ClipboardBackupText
//   int g_WindowStackCount
// Function calls:
//   shape_edittool.cpp_CEditorTools_popWindowState_FUN_004a0ea0
//   shape_memdbg.cpp_debugFree_FUN_0050f460

#include "nocturne.h"

CEditorTools * __cdecl shape_edittool_cpp_CEditorTools_dtor_FUN_0049dfb0(CEditorTools *this_ptr)

{
  if (0 < g_WindowStackCount) {
    do {
      shape_edittool_cpp_CEditorTools_popWindowState_FUN_004a0ea0(this_ptr);
    } while (0 < g_WindowStackCount);
  }
  if (g_ClipboardBackupText != (char *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460
              (g_ClipboardBackupText,"..\\shape\\edittool.cpp",0x2bd);
    g_ClipboardBackupText = (char *)0x0;
    return this_ptr;
  }
  return this_ptr;
}


// Assembly code:
// 0049dfb0: PUSH EBX
//   Label: shape_edittool.cpp_CEditorTools_dtor_FUN_0049dfb0
// 0049dfb1: PUSH ESI
// 0049dfb2: PUSH EBP
// 0049dfb3: MOV EDX,dword ptr [0x02cf1cdc]
//   XREF to: 02cf1cdc (READ)
// 0049dfb9: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0049dfbd: TEST EDX,EDX
// 0049dfbf: JLE 0x0049dfe0
//   XREF to: 0049dfe0 (CONDITIONAL_JUMP)
// 0049dfc1: PUSH EBX
//   Label: LAB_0049dfc1
// 0049dfc2: CALL shape_edittool.cpp_CEditorTools_popWindowState_FUN_004a0ea0
//   XREF to: 004a0ea0 (UNCONDITIONAL_CALL)
// 0049dfc7: MOV ECX,dword ptr [0x02cf1cdc]
//   XREF to: 02cf1cdc (READ)
// 0049dfcd: ADD ESP,0x4
// 0049dfd0: TEST ECX,ECX
// 0049dfd2: JG 0x0049dfc1
//   XREF to: 0049dfc1 (CONDITIONAL_JUMP)
// 0049dfd4: LEA EAX,[EAX]
// 0049dfda: LEA EDX,[EDX]
// 0049dfe0: MOV ESI,dword ptr [0x02cf1cd8]
//   Label: LAB_0049dfe0
//   XREF to: 02cf1cd8 (READ)
// 0049dfe6: TEST ESI,ESI
// 0049dfe8: JNZ 0x0049dff0
//   XREF to: 0049dff0 (CONDITIONAL_JUMP)
// 0049dfea: MOV EAX,EBX
// 0049dfec: POP EBP
// 0049dfed: POP ESI
// 0049dfee: POP EBX
// 0049dfef: RET
// 0049dff0: PUSH 0x2bd
//   Label: LAB_0049dff0
// 0049dff5: PUSH 0x622f94
//   XREF to: 00622f94 (DATA)
// 0049dffa: PUSH ESI
// 0049dffb: XOR EBP,EBP
// 0049dffd: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 0049e002: ADD ESP,0xc
// 0049e005: MOV dword ptr [0x02cf1cd8],EBP
//   XREF to: 02cf1cd8 (WRITE)
// 0049e00b: MOV EAX,EBX
// 0049e00d: POP EBP
// 0049e00e: POP ESI
// 0049e00f: POP EBX
// 0049e010: RET
