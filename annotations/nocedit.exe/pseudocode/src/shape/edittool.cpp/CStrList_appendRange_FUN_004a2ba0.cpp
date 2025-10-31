// Name: shape_edittool.cpp_CStrList_appendRange_FUN_004a2ba0
// Address: 004a2ba0
// Address Range: [[004a2ba0, 004a2bb5]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CStrList_appendRange_FUN_004a2ba0(CStrList * this_ptr, CStrList * source_list)
// Function calls:
//   shape_edittool.cpp_CStrList_insertRange_FUN_004a2d80

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CStrList_appendRange_FUN_004a2ba0(CStrList *this_ptr,CStrList *source_list)

{
  shape_edittool_cpp_CStrList_insertRange_FUN_004a2d80(this_ptr,this_ptr->item_count,source_list);
  return;
}


// Assembly code:
// 004a2ba0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: shape_edittool.cpp_CStrList_appendRange_FUN_004a2ba0
//   XREF to: Stack[0x4] (READ)
// 004a2ba4: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 004a2ba8: PUSH EDX
// 004a2ba9: MOV ECX,dword ptr [EAX]
// 004a2bab: PUSH ECX
// 004a2bac: PUSH EAX
// 004a2bad: CALL shape_edittool.cpp_CStrList_insertRange_FUN_004a2d80
//   XREF to: 004a2d80 (UNCONDITIONAL_CALL)
// 004a2bb2: ADD ESP,0xc
// 004a2bb5: RET
