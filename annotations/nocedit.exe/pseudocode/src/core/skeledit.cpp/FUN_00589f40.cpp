// Name: core_skeledit.cpp_FUN_00589f40
// Address: 00589f40
// Address Range: [[00589f40, 00589f96]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_00589f40()
// Globals:
//   TerminatedCString s_s_s_already_exists_in_a__0064a0c6
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CDemonPod* g_CDemonPodPtr = 030e5090
//   CEditorTools g_CEditorToolsPtr
//   CDemonPod g_CDemonPodInstance
// Function calls:
//   crt_stack.c_stack_probe_FUN_005ff9f3
//   engine_pod.cpp_CPod_locateFile_FUN_005512f0
//   shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0

#include "nocturne.h"

void core_skeledit_cpp_FUN_00589f40(void)

{
  CPodFile *pCVar1;
  char *in_stack_0000000c;
  char *in_stack_00000010;
  undefined4 in_stack_00000014;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x20);
  pCVar1 = engine_pod_cpp_CPod_locateFile_FUN_005512f0
                     ((CPod *)g_CDemonPodPtr,in_stack_0000000c,in_stack_00000010,(int *)0x0);
  if (pCVar1 == (CPodFile *)0x0) {
    return;
  }
  shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
            (g_CEditorToolsPtr,"%s\\%s already exists in a mounted pod file:\n%s\nI'm still saving it to the local file,\nbut just thought you would want to know about the\none in the pod.",in_stack_00000010,
             in_stack_00000014,pCVar1->filename);
  return;
}


// Assembly code:
// 00589f40: PUSH 0x20
//   Label: core_skeledit.cpp_FUN_00589f40
// 00589f45: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 00589f4a: PUSH EBX
// 00589f4b: PUSH EBP
// 00589f4c: PUSH 0x0
// 00589f4e: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 00589f52: PUSH EDX
// 00589f53: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00589f57: PUSH ECX
// 00589f58: MOV EBX,dword ptr [0x00680cdc]
//   XREF to: 00680cdc (READ)
// 00589f5e: PUSH EBX
//   XREF to: 030e5090 (DATA)
// 00589f5f: CALL engine_pod.cpp_CPod_locateFile_FUN_005512f0
//   XREF to: 005512f0 (UNCONDITIONAL_CALL)
// 00589f64: ADD ESP,0x10
// 00589f67: TEST EAX,EAX
// 00589f69: JNZ 0x00589f6e
//   XREF to: 00589f6e (CONDITIONAL_JUMP)
// 00589f6b: POP EBP
// 00589f6c: POP EBX
// 00589f6d: RET
// 00589f6e: PUSH EDI
//   Label: LAB_00589f6e
// 00589f6f: PUSH ESI
// 00589f70: ADD EAX,0x4
// 00589f73: PUSH EAX
// 00589f74: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 00589f78: PUSH ESI
// 00589f79: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 00589f7d: PUSH EDI
// 00589f7e: PUSH 0x64a0c6
//   XREF to: 0064a0c6 (DATA)
// 00589f83: MOV EBP,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00589f89: PUSH EBP
//   XREF to: 02cf1cd4 (DATA)
// 00589f8a: CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
//   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)
// 00589f8f: ADD ESP,0x14
// 00589f92: POP ESI
// 00589f93: POP EDI
// 00589f94: POP EBP
// 00589f95: POP EBX
// 00589f96: RET
