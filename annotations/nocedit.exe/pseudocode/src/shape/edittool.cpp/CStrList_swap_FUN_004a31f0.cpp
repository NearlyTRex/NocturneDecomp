// Name: shape_edittool.cpp_CStrList_swap_FUN_004a31f0
// Address: 004a31f0
// Address Range: [[004a31f0, 004a3263]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CStrList_swap_FUN_004a31f0(CStrList * this_ptr, int index1, int index2)
// Cross-references:
//   shape_edittool.cpp_CPickList_swap_FUN_004a5870 (004a5870) at 004a5893 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_shape_edittool_cpp_006238f1
//   TerminatedCString s_CStrList_swap_invalid_in_00623907
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CStrList_swap_FUN_004a31f0(CStrList *this_ptr,int index1,int index2)

{
  char *pcVar1;
  char **ppcVar2;
  
  if ((((index1 < 0) || (this_ptr->item_count <= index1)) || (index2 < 0)) ||
     (this_ptr->item_count <= index2)) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0xc2e;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CStrList::swap - invalid indices");
    if (index1 == index2) {
      return;
    }
  }
  else if (index1 == index2) {
    return;
  }
  ppcVar2 = this_ptr->data_array + index1;
  pcVar1 = *ppcVar2;
  *ppcVar2 = this_ptr->data_array[index2];
  this_ptr->data_array[index2] = pcVar1;
  return;
}


// Assembly code:
// 004a31f0: PUSH EBX
//   Label: shape_edittool.cpp_CStrList_swap_FUN_004a31f0
// 004a31f1: PUSH ESI
// 004a31f2: PUSH EDI
// 004a31f3: PUSH EBP
// 004a31f4: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004a31f8: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004a31fc: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004a3200: TEST EDI,EDI
// 004a3202: JL 0x004a320a
//   XREF to: 004a320a (CONDITIONAL_JUMP)
// 004a3204: MOV EDX,dword ptr [EBX]
// 004a3206: CMP EDI,EDX
// 004a3208: JL 0x004a3235
//   XREF to: 004a3235 (CONDITIONAL_JUMP)
// 004a320a: MOV EBP,0x6238f1
//   Label: LAB_004a320a
//   XREF to: 006238f1 (DATA)
// 004a320f: MOV EAX,0xc2e
// 004a3214: PUSH 0x623907
//   XREF to: 00623907 (DATA)
// 004a3219: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 004a321f: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 004a3224: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004a3229: ADD ESP,0x4
// 004a322c: CMP EDI,ESI
// 004a322e: JNZ 0x004a3246
//   XREF to: 004a3246 (CONDITIONAL_JUMP)
// 004a3230: POP EBP
// 004a3231: POP EDI
// 004a3232: POP ESI
// 004a3233: POP EBX
// 004a3234: RET
// 004a3235: TEST ESI,ESI
//   Label: LAB_004a3235
// 004a3237: JL 0x004a320a
//   XREF to: 004a320a (CONDITIONAL_JUMP)
// 004a3239: CMP ESI,EDX
// 004a323b: JGE 0x004a320a
//   XREF to: 004a320a (CONDITIONAL_JUMP)
// 004a323d: CMP EDI,ESI
// 004a323f: JNZ 0x004a3246
//   XREF to: 004a3246 (CONDITIONAL_JUMP)
// 004a3241: POP EBP
// 004a3242: POP EDI
// 004a3243: POP ESI
// 004a3244: POP EBX
// 004a3245: RET
// 004a3246: LEA EAX,[EDI*0x4 + 0x0]
//   Label: LAB_004a3246
// 004a324d: MOV ECX,dword ptr [EBX + 0x8]
// 004a3250: ADD EAX,ECX
// 004a3252: MOV ECX,dword ptr [ECX + ESI*0x4]
// 004a3255: MOV EDI,dword ptr [EAX]
// 004a3257: MOV dword ptr [EAX],ECX
// 004a3259: MOV EAX,dword ptr [EBX + 0x8]
// 004a325c: MOV dword ptr [EAX + ESI*0x4],EDI
// 004a325f: POP EBP
// 004a3260: POP EDI
// 004a3261: POP ESI
// 004a3262: POP EBX
// 004a3263: RET
