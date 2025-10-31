// Name: core_skeledit.cpp_FUN_00589bb0
// Address: 00589bb0
// Address Range: [[00589bb0, 00589c11]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_00589bb0()
// Globals:
//   TerminatedCString s_wt_00649e31
//   TerminatedCString s_core_skeledit_cpp_00649e34
//   TerminatedCString s_Can_t_create_mesh_precom_00649e49
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_skeledit.cpp_FUN_0058a0f0
//   crt_stack.c_stack_probe_FUN_005ff9f3
//   shape_meshlod.cpp_FUN_0051b770

#include "nocturne.h"

void core_skeledit_cpp_FUN_00589bb0(void)

{
  int iVar1;
  int in_stack_0000000c;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x18);
  iVar1 = shape_meshlod_cpp_FUN_0051b770();
  *(int *)(in_stack_0000000c + 0x38) = iVar1;
  if (iVar1 == 0) {
    g_CurrentFilename = "..\\core\\skeledit.cpp";
    g_CurrentLineNumber = 0x179;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't create mesh precompute file.");
  }
  core_skeledit_cpp_FUN_0058a0f0();
  return;
}


// Assembly code:
// 00589bb0: PUSH 0x18
//   Label: core_skeledit.cpp_FUN_00589bb0
// 00589bb5: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 00589bba: PUSH EBX
// 00589bbb: PUSH EDI
// 00589bbc: PUSH EBP
// 00589bbd: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00589bc1: PUSH 0x649e31
//   XREF to: 00649e31 (DATA)
// 00589bc6: PUSH EBX
// 00589bc7: CALL shape_meshlod.cpp_FUN_0051b770
//   XREF to: 0051b770 (UNCONDITIONAL_CALL)
// 00589bcc: ADD ESP,0x8
// 00589bcf: MOV dword ptr [EBX + 0x38],EAX
// 00589bd2: TEST EAX,EAX
// 00589bd4: JZ 0x00589beb
//   XREF to: 00589beb (CONDITIONAL_JUMP)
// 00589bd6: MOV EDI,dword ptr [EBX + 0x38]
//   Label: LAB_00589bd6
// 00589bd9: PUSH EDI
// 00589bda: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00589bde: PUSH EBP
// 00589bdf: CALL core_skeledit.cpp_FUN_0058a0f0
//   XREF to: 0058a0f0 (UNCONDITIONAL_CALL)
// 00589be4: ADD ESP,0x8
// 00589be7: POP EBP
// 00589be8: POP EDI
// 00589be9: POP EBX
// 00589bea: RET
// 00589beb: PUSH ESI
//   Label: LAB_00589beb
// 00589bec: MOV ECX,0x649e34
//   XREF to: 00649e34 (DATA)
// 00589bf1: MOV ESI,0x179
// 00589bf6: PUSH 0x649e49
//   XREF to: 00649e49 (DATA)
// 00589bfb: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00589c01: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 00589c07: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00589c0c: ADD ESP,0x4
// 00589c0f: POP ESI
// 00589c10: JMP 0x00589bd6
//   XREF to: 00589bd6 (UNCONDITIONAL_JUMP)
