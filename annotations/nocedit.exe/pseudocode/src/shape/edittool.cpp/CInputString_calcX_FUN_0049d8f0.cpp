// Name: shape_edittool.cpp_CInputString_calcX_FUN_0049d8f0
// Address: 0049d8f0
// Address Range: [[0049d8f0, 0049d9a7]]
// Convention: __cdecl
// Signature: int shape_edittool.cpp_CInputString_calcX_FUN_0049d8f0(CInputString * this_ptr, int char_index)
// Cross-references:
//   shape_edittool.cpp_CInputString_draw_FUN_0049d9b0 (0049d9b0) at 0049da83 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_shape_edittool_cpp_00622eec
//   TerminatedCString s_CInputString_calcX_strin_00622f02
//   CBitFont* g_EditorFont
//   char[1024] g_TempStringBuffer
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_memory.c_memset_FUN_005fde40
//   engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80

#include "nocturne.h"

int __cdecl
shape_edittool_cpp_CInputString_calcX_FUN_0049d8f0(CInputString *this_ptr,int char_index)

{
  CBitFont *this_ptr_00;
  int iVar1;
  char unaff_BP;
  
  this_ptr_00 = g_EditorFont;
  if (char_index < 0) {
    iVar1 = 0;
  }
  else {
    if (this_ptr->current_length < char_index) {
      char_index = this_ptr->current_length;
    }
    if (this_ptr->mask_mode == 0) {
      this_ptr->string_data[char_index] = '\0';
      iVar1 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(this_ptr_00,this_ptr->string_data);
      this_ptr->string_data[char_index] = unaff_BP;
      return iVar1;
    }
    if (0x3ff < (uint)char_index) {
      g_CurrentFilename = "..\\shape\\edittool.cpp";
      g_CurrentLineNumber = 0x1be;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CInputString::calcX - string too big for hidden text!");
    }
    crt_memory_c_memset_FUN_005fde40(g_TempStringBuffer,0x2a,char_index);
    g_TempStringBuffer[char_index] = '\0';
    iVar1 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(g_EditorFont,g_TempStringBuffer);
  }
  return iVar1;
}


// Assembly code:
// 0049d8f0: PUSH EBX
//   Label: shape_edittool.cpp_CInputString_calcX_FUN_0049d8f0
// 0049d8f1: PUSH EBP
// 0049d8f2: SUB ESP,0x4
// 0049d8f5: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0049d8f9: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0049d8fd: TEST EBX,EBX
// 0049d8ff: JL 0x0049d978
//   XREF to: 0049d978 (CONDITIONAL_JUMP)
// 0049d905: MOV EDX,dword ptr [EAX + 0x130]
// 0049d90b: CMP EBX,EDX
// 0049d90d: JLE 0x0049d911
//   XREF to: 0049d911 (CONDITIONAL_JUMP)
// 0049d90f: MOV EBX,EDX
// 0049d911: PUSH EDI
//   Label: LAB_0049d911
// 0049d912: CMP dword ptr [EAX + 0x13c],0x0
// 0049d919: JZ 0x0049d97c
//   XREF to: 0049d97c (CONDITIONAL_JUMP)
// 0049d91b: CMP EBX,0x400
// 0049d921: JC 0x0049d946
//   XREF to: 0049d946 (CONDITIONAL_JUMP)
// 0049d923: MOV EDI,0x622eec
//   XREF to: 00622eec (DATA)
// 0049d928: MOV EBP,0x1be
// 0049d92d: PUSH 0x622f02
//   XREF to: 00622f02 (DATA)
// 0049d932: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 0049d938: MOV dword ptr [0x02f0ca4c],EBP
//   XREF to: 02f0ca4c (WRITE)
// 0049d93e: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0049d943: ADD ESP,0x4
// 0049d946: PUSH EBX
//   Label: LAB_0049d946
// 0049d947: PUSH 0x2a
// 0049d949: PUSH 0x2cf2678
//   XREF to: 02cf2678 (DATA)
// 0049d94e: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 0049d953: ADD ESP,0xc
// 0049d956: XOR AH,AH
// 0049d958: PUSH 0x2cf2678
//   XREF to: 02cf2678 (DATA)
// 0049d95d: MOV byte ptr [EBX + 0x2cf2678],AH
//   XREF to: 02cf2678 (DATA)
// 0049d963: MOV EAX,[0x02cf1cd0]
//   XREF to: 02cf1cd0 (READ)
// 0049d968: PUSH EAX
// 0049d969: CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80
//   XREF to: 004cfe80 (UNCONDITIONAL_CALL)
// 0049d96e: ADD ESP,0x8
// 0049d971: POP EDI
// 0049d972: ADD ESP,0x4
//   Label: LAB_0049d972
// 0049d975: POP EBP
// 0049d976: POP EBX
// 0049d977: RET
// 0049d978: XOR EAX,EAX
//   Label: LAB_0049d978
// 0049d97a: JMP 0x0049d972
//   XREF to: 0049d972 (UNCONDITIONAL_JUMP)
// 0049d97c: PUSH ESI
//   Label: LAB_0049d97c
// 0049d97d: PUSH EAX
// 0049d97e: ADD EBX,EAX
// 0049d980: XOR EDX,EDX
// 0049d982: MOV ESI,dword ptr [0x02cf1cd0]
//   XREF to: 02cf1cd0 (READ)
// 0049d988: MOV DL,byte ptr [EBX]
// 0049d98a: PUSH ESI
// 0049d98b: MOV dword ptr [ESP + 0x10],EDX
//   XREF to: Stack[-0xc] (WRITE)
// 0049d98f: MOV byte ptr [EBX],0x0
// 0049d992: CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80
//   XREF to: 004cfe80 (UNCONDITIONAL_CALL)
// 0049d997: ADD ESP,0x8
// 0049d99a: MOV DL,byte ptr [ESP + 0x8]
//   XREF to: Stack[-0xc] (READ)
// 0049d99e: MOV byte ptr [EBX],DL
// 0049d9a0: POP ESI
// 0049d9a1: POP EDI
// 0049d9a2: ADD ESP,0x4
// 0049d9a5: POP EBP
// 0049d9a6: POP EBX
// 0049d9a7: RET
