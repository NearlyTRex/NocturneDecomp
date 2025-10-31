// Name: shape_edittool.cpp_CStrList_copy_FUN_004a2a90
// Address: 004a2a90
// Address Range: [[004a2a90, 004a2aba]]
// Convention: __cdecl
// Signature: CStrList * shape_edittool.cpp_CStrList_copy_FUN_004a2a90(CStrList * this_ptr, CStrList * other)
// Globals:
//   CStrList_vtable g_CStrListVTable
// Function calls:
//   shape_edittool.cpp_CStrList_copyFrom_FUN_004a2ac0

#include "nocturne.h"

CStrList * __cdecl shape_edittool_cpp_CStrList_copy_FUN_004a2a90(CStrList *this_ptr,CStrList *other)

{
  this_ptr->vtable = &g_CStrListVTable;
  this_ptr->item_count = 0;
  this_ptr->data_array = (char **)0x0;
  shape_edittool_cpp_CStrList_copyFrom_FUN_004a2ac0(this_ptr,other);
  return this_ptr;
}


// Assembly code:
// 004a2a90: PUSH EBX
//   Label: shape_edittool.cpp_CStrList_copy_FUN_004a2a90
// 004a2a91: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004a2a95: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004a2a99: MOV dword ptr [EBX + 0xc],0x65d474
//   XREF to: 0065d474 (DATA)
// 004a2aa0: PUSH EDX
// 004a2aa1: MOV dword ptr [EBX],0x0
// 004a2aa7: PUSH EBX
// 004a2aa8: MOV dword ptr [EBX + 0x8],0x0
// 004a2aaf: CALL shape_edittool.cpp_CStrList_copyFrom_FUN_004a2ac0
//   XREF to: 004a2ac0 (UNCONDITIONAL_CALL)
// 004a2ab4: ADD ESP,0x8
// 004a2ab7: MOV EAX,EBX
// 004a2ab9: POP EBX
// 004a2aba: RET
