// Name: shape_edittool.cpp_CStrList_sort_FUN_004a2f00
// Address: 004a2f00
// Address Range: [[004a2f00, 004a2f63]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CStrList_sort_FUN_004a2f00(CStrList * this_ptr, int sort_type, int sort_order)
// Cross-references:
//   shape_edittool.cpp_CPickList_sort_FUN_004a57f0 (004a57f0) at 004a5813 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_shape_edittool_cpp_0062383b
//   TerminatedCString s_CStrList_sort_invalid_ra_00623851
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdlib.c_qsort_FUN_005fdf38

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CStrList_sort_FUN_004a2f00(CStrList *this_ptr,int sort_type,int sort_order)

{
  if (sort_type < sort_order) {
    if ((sort_type < 0) || (this_ptr->item_count <= sort_order)) {
      g_CurrentFilename = "..\\shape\\edittool.cpp";
      g_CurrentLineNumber = 0xbaa;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CStrList::sort - invalid range!");
    }
    crt_stdlib_c_qsort_FUN_005fdf38
              ((void *)(*(int *)(sort_type + 8) + sort_type * 4),(sort_order - sort_type) + 1,4,
               shape_edittool_cpp_CStrList_qsortByString_FUN_004a2ee0);
  }
  return;
}


// Assembly code:
// 004a2f00: PUSH EBX
//   Label: shape_edittool.cpp_CStrList_sort_FUN_004a2f00
// 004a2f01: PUSH ESI
// 004a2f02: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 004a2f06: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 004a2f0a: CMP EBX,ESI
// 004a2f0c: JGE 0x004a2f61
//   XREF to: 004a2f61 (CONDITIONAL_JUMP)
// 004a2f0e: TEST EBX,EBX
// 004a2f10: JL 0x004a2f1a
//   XREF to: 004a2f1a (CONDITIONAL_JUMP)
// 004a2f12: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004a2f16: CMP ESI,dword ptr [EAX]
// 004a2f18: JL 0x004a2f3f
//   XREF to: 004a2f3f (CONDITIONAL_JUMP)
// 004a2f1a: PUSH EDI
//   Label: LAB_004a2f1a
// 004a2f1b: MOV ECX,0x62383b
//   XREF to: 0062383b (PARAM)
// 004a2f20: MOV EDI,0xbaa
// 004a2f25: PUSH 0x623851
//   XREF to: 00623851 (DATA)
// 004a2f2a: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 004a2f30: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 004a2f36: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004a2f3b: ADD ESP,0x4
// 004a2f3e: POP EDI
// 004a2f3f: MOV EAX,ESI
//   Label: LAB_004a2f3f
// 004a2f41: PUSH 0x4a2ee0
//   XREF to: 004a2ee0 (DATA)
// 004a2f46: SUB EAX,EBX
// 004a2f48: PUSH 0x4
// 004a2f4a: INC EAX
// 004a2f4b: PUSH EAX
// 004a2f4c: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 004a2f50: SHL EBX,0x2
// 004a2f53: MOV EAX,dword ptr [EAX + 0x8]
// 004a2f56: ADD EAX,EBX
// 004a2f58: PUSH EAX
// 004a2f59: CALL crt_stdlib.c_qsort_FUN_005fdf38
//   XREF to: 005fdf38 (UNCONDITIONAL_CALL)
// 004a2f5e: ADD ESP,0x10
// 004a2f61: POP ESI
//   Label: LAB_004a2f61
// 004a2f62: POP EBX
// 004a2f63: RET
