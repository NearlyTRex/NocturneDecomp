// Name: shape_edittool.cpp_CPickList_getItemHotKey_FUN_004a5610
// Address: 004a5610
// Address Range: [[004a5610, 004a5669]]
// Convention: unknown
// Signature: undefined shape_edittool.cpp_CPickList_getItemHotKey_FUN_004a5610()
// Globals:
//   TerminatedCString s_shape_edittool_cpp_00623be4
//   TerminatedCString s_CPickList_getItemHotKey__00623bfa
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

undefined4 shape_edittool_cpp_CPickList_getItemHotKey_FUN_004a5610(void)

{
  int *in_stack_00000004;
  int in_stack_00000008;
  
  if ((in_stack_00000008 < 0) || (*in_stack_00000004 <= in_stack_00000008)) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0x1066;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CPickList::getItemHotKey - invalid index");
  }
  if (in_stack_00000004[0x67] <= in_stack_00000008) {
    return 0xffffffff;
  }
  return *(undefined4 *)(in_stack_00000004[0x68] + in_stack_00000008 * 4);
}


// Assembly code:
// 004a5610: PUSH EBX
//   Label: shape_edittool.cpp_CPickList_getItemHotKey_FUN_004a5610
// 004a5611: PUSH ESI
// 004a5612: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004a5616: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 004a561a: TEST EBX,EBX
// 004a561c: JL 0x004a5622
//   XREF to: 004a5622 (CONDITIONAL_JUMP)
// 004a561e: CMP EBX,dword ptr [ESI]
// 004a5620: JL 0x004a5647
//   XREF to: 004a5647 (CONDITIONAL_JUMP)
// 004a5622: PUSH EDI
//   Label: LAB_004a5622
// 004a5623: MOV ECX,0x623be4
//   XREF to: 00623be4 (DATA)
// 004a5628: MOV EDI,0x1066
// 004a562d: PUSH 0x623bfa
//   XREF to: 00623bfa (DATA)
// 004a5632: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 004a5638: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 004a563e: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004a5643: ADD ESP,0x4
// 004a5646: POP EDI
// 004a5647: CMP EBX,dword ptr [ESI + 0x19c]
//   Label: LAB_004a5647
// 004a564d: JL 0x004a5657
//   XREF to: 004a5657 (CONDITIONAL_JUMP)
// 004a564f: MOV EAX,0xffffffff
// 004a5654: POP ESI
// 004a5655: POP EBX
// 004a5656: RET
// 004a5657: LEA EAX,[EBX*0x4 + 0x0]
//   Label: LAB_004a5657
// 004a565e: MOV EBX,dword ptr [ESI + 0x1a0]
// 004a5664: MOV EAX,dword ptr [EBX + EAX*0x1]
// 004a5667: POP ESI
// 004a5668: POP EBX
// 004a5669: RET
