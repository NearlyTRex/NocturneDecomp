// Name: shape_edittool.cpp_CStrList_insert_FUN_004a2bc0
// Address: 004a2bc0
// Address Range: [[004a2bc0, 004a2cb6]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CStrList_insert_FUN_004a2bc0(CStrList * this_ptr, int insert_index, char * string_data)
// Cross-references:
//   core_script.cpp_CScript_editorAction_FUN_00564820 (00564820) at 005650b9 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_insertAndEditorPutLine_FUN_00566330 (00566330) at 0056636f [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CPickList_insert_FUN_004a5670 (004a5670) at 004a5693 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_shape_edittool_cpp_006236a2
//   TerminatedCString s_CStrList_insert_invalid__006236b8
//   TerminatedCString s_shape_edittool_cpp_006236d9
//   TerminatedCString s_shape_edittool_cpp_006236ef
//   TerminatedCString s_CStrList_insert_out_of_m_00623705
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_string.c_memmove_FUN_005fe5e0
//   shape_edittool.cpp_CStrList_allocate_FUN_004a2cc0
//   shape_memdbg.cpp_debugMalloc_FUN_0050f250

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CStrList_insert_FUN_004a2bc0
          (CStrList *this_ptr,int insert_index,char *string_data)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  char *in_stack_00000014;
  char *in_stack_0000001c;
  
  bVar6 = 0;
  if ((insert_index < 0) || (this_ptr->item_count < insert_index)) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0xb32;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CStrList::insert - invalid index");
  }
  iVar2 = this_ptr->item_count;
  iVar5 = iVar2 + 1;
  this_ptr->item_count = iVar5;
  if (this_ptr->capacity < iVar5) {
    shape_edittool_cpp_CStrList_allocate_FUN_004a2cc0(this_ptr,iVar2 + 0x15);
  }
  crt_string_c_memmove_FUN_005fe5e0
            (this_ptr->data_array + insert_index + 1,this_ptr->data_array + insert_index,
             (this_ptr->item_count - insert_index) * 4 - 4);
  uVar4 = 0xffffffff;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *in_stack_00000014;
    in_stack_00000014 = in_stack_00000014 + (uint)bVar6 * -2 + 1;
  } while (cVar1 != '\0');
  pcVar3 = (char *)shape_memdbg_cpp_debugMalloc_FUN_0050f250
                             (~uVar4,"..\\shape\\edittool.cpp",0xb3f);
  this_ptr->data_array[insert_index] = pcVar3;
  if (this_ptr->data_array[insert_index] == (char *)0x0) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0xb40;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CStrList::insert - out of memory");
  }
  pcVar3 = this_ptr->data_array[insert_index];
  do {
    cVar1 = *in_stack_0000001c;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = in_stack_0000001c[1];
    in_stack_0000001c = in_stack_0000001c + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  return;
}


// Assembly code:
// 004a2bc0: PUSH EBX
//   Label: shape_edittool.cpp_CStrList_insert_FUN_004a2bc0
// 004a2bc1: PUSH ESI
// 004a2bc2: PUSH EDI
// 004a2bc3: PUSH EBP
// 004a2bc4: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004a2bc8: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004a2bcc: TEST EBP,EBP
// 004a2bce: JL 0x004a2bd4
//   XREF to: 004a2bd4 (CONDITIONAL_JUMP)
// 004a2bd0: CMP EBP,dword ptr [EBX]
// 004a2bd2: JLE 0x004a2bf7
//   XREF to: 004a2bf7 (CONDITIONAL_JUMP)
// 004a2bd4: MOV ECX,0x6236a2
//   Label: LAB_004a2bd4
//   XREF to: 006236a2 (PARAM)
// 004a2bd9: MOV ESI,0xb32
// 004a2bde: PUSH 0x6236b8
//   XREF to: 006236b8 (DATA)
// 004a2be3: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 004a2be9: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 004a2bef: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004a2bf4: ADD ESP,0x4
// 004a2bf7: MOV EDI,dword ptr [EBX]
//   Label: LAB_004a2bf7
// 004a2bf9: INC EDI
// 004a2bfa: MOV EDX,dword ptr [EBX + 0x4]
// 004a2bfd: MOV dword ptr [EBX],EDI
// 004a2bff: CMP EDI,EDX
// 004a2c01: JLE 0x004a2c10
//   XREF to: 004a2c10 (CONDITIONAL_JUMP)
// 004a2c03: LEA EAX,[EDI + 0x14]
// 004a2c06: PUSH EAX
// 004a2c07: PUSH EBX
// 004a2c08: CALL shape_edittool.cpp_CStrList_allocate_FUN_004a2cc0
//   XREF to: 004a2cc0 (UNCONDITIONAL_CALL)
// 004a2c0d: ADD ESP,0x8
// 004a2c10: MOV EAX,dword ptr [EBX]
//   Label: LAB_004a2c10
// 004a2c12: SUB EAX,EBP
// 004a2c14: SHL EAX,0x2
// 004a2c17: SUB EAX,0x4
// 004a2c1a: LEA ESI,[EBP*0x4 + 0x0]
// 004a2c21: PUSH EAX
// 004a2c22: MOV EAX,dword ptr [EBX + 0x8]
// 004a2c25: LEA ECX,[EAX + ESI*0x1]
// 004a2c28: PUSH ECX
// 004a2c29: LEA ECX,[ESI + 0x4]
// 004a2c2c: ADD EAX,ECX
// 004a2c2e: PUSH EAX
// 004a2c2f: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 004a2c34: ADD ESP,0xc
// 004a2c37: PUSH 0xb3f
// 004a2c3c: PUSH 0x6236d9
//   XREF to: 006236d9 (DATA)
// 004a2c41: MOV EDI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0xc] (READ)
// 004a2c45: SUB ECX,ECX
// 004a2c47: DEC ECX
// 004a2c48: XOR EAX,EAX
// 004a2c4a: SCASB.REPNE ES:EDI
// 004a2c4c: NOT ECX
// 004a2c4e: DEC ECX
// 004a2c4f: INC ECX
// 004a2c50: PUSH ECX
// 004a2c51: CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250
//   XREF to: 0050f250 (UNCONDITIONAL_CALL)
// 004a2c56: MOV ECX,dword ptr [EBX + 0x8]
// 004a2c59: MOV dword ptr [ECX + ESI*0x1],EAX
// 004a2c5c: MOV EAX,dword ptr [EBX + 0x8]
// 004a2c5f: MOV ECX,dword ptr [ESI + EAX*0x1]
// 004a2c62: ADD ESP,0xc
// 004a2c65: TEST ECX,ECX
// 004a2c67: JZ 0x004a2c92
//   XREF to: 004a2c92 (CONDITIONAL_JUMP)
// 004a2c69: MOV EDI,dword ptr [EBX + 0x8]
//   Label: LAB_004a2c69
// 004a2c6c: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004a2c70: MOV EDI,dword ptr [EDI + EBP*0x4]
// 004a2c73: PUSH EDI
// 004a2c74: MOV AL,byte ptr [ESI]
//   Label: LAB_004a2c74
// 004a2c76: MOV byte ptr [EDI],AL
// 004a2c78: CMP AL,0x0
// 004a2c7a: JZ 0x004a2c8c
//   XREF to: 004a2c8c (CONDITIONAL_JUMP)
// 004a2c7c: MOV AL,byte ptr [ESI + 0x1]
// 004a2c7f: ADD ESI,0x2
// 004a2c82: MOV byte ptr [EDI + 0x1],AL
// 004a2c85: ADD EDI,0x2
// 004a2c88: CMP AL,0x0
// 004a2c8a: JNZ 0x004a2c74
//   XREF to: 004a2c74 (CONDITIONAL_JUMP)
// 004a2c8c: POP EDI
//   Label: LAB_004a2c8c
// 004a2c8d: POP EBP
// 004a2c8e: POP EDI
// 004a2c8f: POP ESI
// 004a2c90: POP EBX
// 004a2c91: RET
// 004a2c92: MOV ESI,0x6236ef
//   Label: LAB_004a2c92
//   XREF to: 006236ef (DATA)
// 004a2c97: MOV EDI,0xb40
// 004a2c9c: PUSH 0x623705
//   XREF to: 00623705 (DATA)
// 004a2ca1: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 004a2ca7: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 004a2cad: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004a2cb2: ADD ESP,0x4
// 004a2cb5: JMP 0x004a2c69
//   XREF to: 004a2c69 (UNCONDITIONAL_JUMP)
