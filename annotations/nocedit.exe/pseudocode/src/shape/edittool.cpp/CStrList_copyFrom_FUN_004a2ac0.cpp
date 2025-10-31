// Name: shape_edittool.cpp_CStrList_copyFrom_FUN_004a2ac0
// Address: 004a2ac0
// Address Range: [[004a2ac0, 004a2b0c]]
// Convention: __cdecl
// Signature: CStrList * shape_edittool.cpp_CStrList_copyFrom_FUN_004a2ac0(CStrList * dest_ptr, CStrList * source_ptr)
// Cross-references:
//   shape_edittool.cpp_CStrList_copy_FUN_004a2a90 (004a2a90) at 004a2aaf [UNCONDITIONAL_CALL]
// Function calls:
//   shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   shape_edittool.cpp_CStrList_allocate_FUN_004a2cc0
//   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70

#include "nocturne.h"

CStrList * __cdecl
shape_edittool_cpp_CStrList_copyFrom_FUN_004a2ac0(CStrList *dest_ptr,CStrList *source_ptr)

{
  char *string_data;
  int index;
  
  (*dest_ptr->vtable->clear)(dest_ptr);
  if (source_ptr->item_count < 1) {
    return dest_ptr;
  }
  shape_edittool_cpp_CStrList_allocate_FUN_004a2cc0(dest_ptr,source_ptr->item_count);
  for (index = 0; index < source_ptr->item_count; index = index + 1) {
    string_data = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(source_ptr,index);
    shape_edittool_cpp_CStrList_add_FUN_004a2b80(dest_ptr,string_data);
  }
  return dest_ptr;
}


// Assembly code:
// 004a2ac0: PUSH ESI
//   Label: shape_edittool.cpp_CStrList_copyFrom_FUN_004a2ac0
// 004a2ac1: PUSH EDI
// 004a2ac2: MOV EDI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004a2ac6: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 004a2aca: PUSH EDI
// 004a2acb: MOV EAX,dword ptr [EDI + 0xc]
// 004a2ace: CALL dword ptr [EAX + 0x14]
// 004a2ad1: MOV EAX,dword ptr [ESI]
// 004a2ad3: ADD ESP,0x4
// 004a2ad6: CMP EAX,0x1
// 004a2ad9: JGE 0x004a2ae0
//   XREF to: 004a2ae0 (CONDITIONAL_JUMP)
// 004a2adb: MOV EAX,EDI
// 004a2add: POP EDI
// 004a2ade: POP ESI
// 004a2adf: RET
// 004a2ae0: PUSH EBX
//   Label: LAB_004a2ae0
// 004a2ae1: PUSH EAX
// 004a2ae2: PUSH EDI
// 004a2ae3: XOR EBX,EBX
// 004a2ae5: CALL shape_edittool.cpp_CStrList_allocate_FUN_004a2cc0
//   XREF to: 004a2cc0 (UNCONDITIONAL_CALL)
// 004a2aea: ADD ESP,0x8
//   Label: LAB_004a2aea
// 004a2aed: MOV EAX,dword ptr [ESI]
// 004a2aef: CMP EBX,EAX
// 004a2af1: JGE 0x004a2b07
//   XREF to: 004a2b07 (CONDITIONAL_JUMP)
// 004a2af3: PUSH EBX
// 004a2af4: PUSH ESI
// 004a2af5: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 004a2afa: ADD ESP,0x8
// 004a2afd: PUSH EAX
// 004a2afe: PUSH EDI
// 004a2aff: INC EBX
// 004a2b00: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004a2b05: JMP 0x004a2aea
//   XREF to: 004a2aea (UNCONDITIONAL_JUMP)
// 004a2b07: MOV EAX,EDI
//   Label: LAB_004a2b07
// 004a2b09: POP EBX
// 004a2b0a: POP EDI
// 004a2b0b: POP ESI
// 004a2b0c: RET
