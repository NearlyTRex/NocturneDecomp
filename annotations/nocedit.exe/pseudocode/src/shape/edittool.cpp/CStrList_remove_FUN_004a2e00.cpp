// Name: shape_edittool.cpp_CStrList_remove_FUN_004a2e00
// Address: 004a2e00
// Address Range: [[004a2e00, 004a2ebb]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CStrList_remove_FUN_004a2e00(CStrList * this_ptr, int start_index, int end_index)
// Cross-references:
//   core_script.cpp_CScript_editorAction_FUN_00564820 (00564820) at 00564d22 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CPickList_remove_FUN_004a56f0 (004a56f0) at 004a5713 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_shape_edittool_cpp_006237ee
//   TerminatedCString s_CStrList_remove_invalid__00623804
//   TerminatedCString s_shape_edittool_cpp_00623825
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_string.c_memmove_FUN_005fe5e0
//   shape_memdbg.cpp_debugFree_FUN_0050f460

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CStrList_remove_FUN_004a2e00(CStrList *this_ptr,int start_index,int end_index)

{
  void *ptr;
  int iVar1;
  int in_stack_00000010;
  
  if (((start_index < 0) || (this_ptr->item_count <= end_index)) || (end_index < start_index)) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0xb7b;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CStrList::remove - invalid range");
  }
  if (start_index <= in_stack_00000010) {
    iVar1 = start_index * 4;
    do {
      ptr = *(void **)((int)this_ptr->data_array + iVar1);
      if (ptr != (void *)0x0) {
        shape_memdbg_cpp_debugFree_FUN_0050f460(ptr,"..\\shape\\edittool.cpp",0xb80);
      }
      iVar1 = iVar1 + 4;
    } while (iVar1 == in_stack_00000010 * 4 ||
             SBORROW4(iVar1,in_stack_00000010 * 4) != iVar1 + in_stack_00000010 * -4 < 0);
  }
  iVar1 = this_ptr->item_count - ((in_stack_00000010 - start_index) + 1);
  this_ptr->item_count = iVar1;
  crt_string_c_memmove_FUN_005fe5e0
            (this_ptr->data_array + start_index,this_ptr->data_array + in_stack_00000010 + 1,
             (iVar1 - start_index) * 4);
  return;
}


// Assembly code:
// 004a2e00: PUSH EBX
//   Label: shape_edittool.cpp_CStrList_remove_FUN_004a2e00
// 004a2e01: PUSH ESI
// 004a2e02: PUSH EDI
// 004a2e03: PUSH EBP
// 004a2e04: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004a2e08: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004a2e0c: TEST EBP,EBP
// 004a2e0e: JL 0x004a2e1c
//   XREF to: 004a2e1c (CONDITIONAL_JUMP)
// 004a2e10: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004a2e14: CMP EAX,dword ptr [ESI]
// 004a2e16: JL 0x004a2eb2
//   XREF to: 004a2eb2 (CONDITIONAL_JUMP)
// 004a2e1c: MOV EBX,0x6237ee
//   Label: LAB_004a2e1c
//   XREF to: 006237ee (PARAM)
// 004a2e21: MOV EDI,0xb7b
// 004a2e26: PUSH 0x623804
//   XREF to: 00623804 (DATA)
// 004a2e2b: MOV dword ptr [0x02f0ca48],EBX
//   XREF to: 02f0ca48 (WRITE)
// 004a2e31: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 004a2e37: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004a2e3c: ADD ESP,0x4
// 004a2e3f: MOV EAX,dword ptr [ESP + 0x1c]
//   Label: LAB_004a2e3f
//   XREF to: Stack[0xc] (READ)
// 004a2e43: CMP EBP,EAX
// 004a2e45: JG 0x004a2e7a
//   XREF to: 004a2e7a (CONDITIONAL_JUMP)
// 004a2e47: LEA EDI,[EAX*0x4 + 0x0]
// 004a2e4e: LEA EBX,[EBP*0x4 + 0x0]
// 004a2e55: MOV EAX,dword ptr [ESI + 0x8]
//   Label: LAB_004a2e55
// 004a2e58: ADD EAX,EBX
// 004a2e5a: MOV EDX,dword ptr [EAX]
// 004a2e5c: TEST EDX,EDX
// 004a2e5e: JZ 0x004a2e73
//   XREF to: 004a2e73 (CONDITIONAL_JUMP)
// 004a2e60: PUSH 0xb80
// 004a2e65: PUSH 0x623825
//   XREF to: 00623825 (DATA)
// 004a2e6a: PUSH EDX
// 004a2e6b: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 004a2e70: ADD ESP,0xc
// 004a2e73: ADD EBX,0x4
//   Label: LAB_004a2e73
// 004a2e76: CMP EBX,EDI
// 004a2e78: JLE 0x004a2e55
//   XREF to: 004a2e55 (CONDITIONAL_JUMP)
// 004a2e7a: MOV EAX,dword ptr [ESP + 0x1c]
//   Label: LAB_004a2e7a
//   XREF to: Stack[0xc] (READ)
// 004a2e7e: SUB EAX,EBP
// 004a2e80: MOV EBX,dword ptr [ESI]
// 004a2e82: INC EAX
// 004a2e83: SUB EBX,EAX
// 004a2e85: MOV EAX,EBX
// 004a2e87: MOV dword ptr [ESI],EBX
// 004a2e89: SUB EAX,EBP
// 004a2e8b: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004a2e8f: SHL EAX,0x2
// 004a2e92: SHL EBX,0x2
// 004a2e95: PUSH EAX
// 004a2e96: ADD EBX,0x4
// 004a2e99: MOV EAX,dword ptr [ESI + 0x8]
// 004a2e9c: ADD EBX,EAX
// 004a2e9e: SHL EBP,0x2
// 004a2ea1: PUSH EBX
// 004a2ea2: ADD EAX,EBP
// 004a2ea4: PUSH EAX
// 004a2ea5: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 004a2eaa: ADD ESP,0xc
// 004a2ead: POP EBP
// 004a2eae: POP EDI
// 004a2eaf: POP ESI
// 004a2eb0: POP EBX
// 004a2eb1: RET
// 004a2eb2: CMP EBP,EAX
//   Label: LAB_004a2eb2
// 004a2eb4: JG 0x004a2e1c
//   XREF to: 004a2e1c (CONDITIONAL_JUMP)
// 004a2eba: JMP 0x004a2e3f
//   XREF to: 004a2e3f (UNCONDITIONAL_JUMP)
