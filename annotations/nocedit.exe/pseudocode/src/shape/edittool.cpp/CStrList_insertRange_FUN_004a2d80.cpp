// Name: shape_edittool.cpp_CStrList_insertRange_FUN_004a2d80
// Address: 004a2d80
// Address Range: [[004a2d80, 004a2ddb]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CStrList_insertRange_FUN_004a2d80(CStrList * this_ptr, int insertion_index, CStrList * source_list)
// Cross-references:
//   shape_edittool.cpp_CStrList_appendRange_FUN_004a2ba0 (004a2ba0) at 004a2bad [UNCONDITIONAL_CALL]
// Function calls:
//   shape_edittool.cpp_CStrList_allocate_FUN_004a2cc0
//   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CStrList_insertRange_FUN_004a2d80
          (CStrList *this_ptr,int insertion_index,CStrList *source_list)

{
  CStrList_vtable *pCVar1;
  char *string_data;
  int index;
  CStrList *in_stack_00000010;
  int *in_stack_00000030;
  
  shape_edittool_cpp_CStrList_allocate_FUN_004a2cc0
            (this_ptr,source_list->item_count + this_ptr->item_count);
  index = 0;
  if (in_stack_00000010->item_count < 1) {
    return;
  }
  do {
    pCVar1 = this_ptr->vtable;
    string_data = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(in_stack_00000010,index);
    index = index + 1;
    (*pCVar1->insert)(this_ptr,(int)source_list,string_data);
    source_list = (CStrList *)((int)&source_list->item_count + 1);
  } while (index < *in_stack_00000030);
  return;
}


// Assembly code:
// 004a2d80: PUSH EBX
//   Label: shape_edittool.cpp_CStrList_insertRange_FUN_004a2d80
// 004a2d81: PUSH ESI
// 004a2d82: PUSH EDI
// 004a2d83: PUSH EBP
// 004a2d84: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004a2d88: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004a2d8c: MOV EDX,dword ptr [EDI]
// 004a2d8e: MOV EAX,dword ptr [EAX]
// 004a2d90: ADD EAX,EDX
// 004a2d92: PUSH EAX
// 004a2d93: PUSH EDI
// 004a2d94: CALL shape_edittool.cpp_CStrList_allocate_FUN_004a2cc0
//   XREF to: 004a2cc0 (UNCONDITIONAL_CALL)
// 004a2d99: ADD ESP,0x8
// 004a2d9c: XOR EBX,EBX
// 004a2d9e: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004a2da2: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004a2da6: MOV EAX,dword ptr [EAX]
// 004a2da8: CMP EBX,EAX
// 004a2daa: JL 0x004a2db1
//   XREF to: 004a2db1 (CONDITIONAL_JUMP)
// 004a2dac: POP EBP
// 004a2dad: POP EDI
// 004a2dae: POP ESI
// 004a2daf: POP EBX
// 004a2db0: RET
// 004a2db1: PUSH EBX
//   Label: LAB_004a2db1
// 004a2db2: MOV ECX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 004a2db6: PUSH ECX
// 004a2db7: MOV EBP,dword ptr [EDI + 0xc]
// 004a2dba: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 004a2dbf: ADD ESP,0x8
// 004a2dc2: PUSH EAX
// 004a2dc3: PUSH ESI
// 004a2dc4: PUSH EDI
// 004a2dc5: INC EBX
// 004a2dc6: INC ESI
// 004a2dc7: CALL dword ptr [EBP + 0xc]
// 004a2dca: ADD ESP,0xc
// 004a2dcd: MOV EAX,dword ptr [ESP + 0x1c]
// 004a2dd1: MOV EAX,dword ptr [EAX]
// 004a2dd3: CMP EBX,EAX
// 004a2dd5: JL 0x004a2db1
//   XREF to: 004a2db1 (CONDITIONAL_JUMP)
// 004a2dd7: POP EBP
// 004a2dd8: POP EDI
// 004a2dd9: POP ESI
// 004a2dda: POP EBX
// 004a2ddb: RET
