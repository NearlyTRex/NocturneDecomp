// Name: shape_edittool.cpp_CStrList_clear_FUN_004a2b10
// Address: 004a2b10
// Address Range: [[004a2b10, 004a2b7e]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CStrList_clear_FUN_004a2b10(CStrList * this_ptr)
// Cross-references:
//   core_script.cpp_CScript_FreeSomething1_FUN_00559870 (00559870) at 0055987a [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CPickList_clear_FUN_004a5770 (004a5770) at 004a579f [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CStrList_dtor_FUN_004a2a40 (004a2a40) at 004a2a54 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_shape_edittool_cpp_00623676
//   TerminatedCString s_shape_edittool_cpp_0062368c
// Function calls:
//   shape_memdbg.cpp_debugFree_FUN_0050f460

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CStrList_clear_FUN_004a2b10(CStrList *this_ptr)

{
  void *ptr;
  int iVar1;
  int iVar2;
  
  if (this_ptr->data_array != (char **)0x0) {
    iVar2 = 0;
    if (0 < this_ptr->item_count) {
      iVar1 = 0;
      do {
        ptr = *(void **)((int)this_ptr->data_array + iVar1);
        if (ptr != (void *)0x0) {
          shape_memdbg_cpp_debugFree_FUN_0050f460(ptr,"..\\shape\\edittool.cpp",0xb0b);
        }
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + 4;
      } while (iVar2 < this_ptr->item_count);
    }
    shape_memdbg_cpp_debugFree_FUN_0050f460
              (this_ptr->data_array,"..\\shape\\edittool.cpp",0xb0d);
  }
  this_ptr->data_array = (char **)0x0;
  this_ptr->capacity = 0;
  this_ptr->item_count = 0;
  return;
}


// Assembly code:
// 004a2b10: PUSH EDI
//   Label: shape_edittool.cpp_CStrList_clear_FUN_004a2b10
// 004a2b11: PUSH EBP
// 004a2b12: MOV EDI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004a2b16: CMP dword ptr [EDI + 0x8],0x0
// 004a2b1a: JZ 0x004a2b68
//   XREF to: 004a2b68 (CONDITIONAL_JUMP)
// 004a2b1c: PUSH ESI
// 004a2b1d: PUSH EBX
// 004a2b1e: MOV ECX,dword ptr [EDI]
// 004a2b20: XOR ESI,ESI
// 004a2b22: TEST ECX,ECX
// 004a2b24: JLE 0x004a2b50
//   XREF to: 004a2b50 (CONDITIONAL_JUMP)
// 004a2b26: XOR EBX,EBX
// 004a2b28: MOV EAX,dword ptr [EDI + 0x8]
//   Label: LAB_004a2b28
// 004a2b2b: ADD EAX,EBX
// 004a2b2d: MOV EDX,dword ptr [EAX]
// 004a2b2f: TEST EDX,EDX
// 004a2b31: JZ 0x004a2b46
//   XREF to: 004a2b46 (CONDITIONAL_JUMP)
// 004a2b33: PUSH 0xb0b
// 004a2b38: PUSH 0x623676
//   XREF to: 00623676 (DATA)
// 004a2b3d: PUSH EDX
// 004a2b3e: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 004a2b43: ADD ESP,0xc
// 004a2b46: INC ESI
//   Label: LAB_004a2b46
// 004a2b47: MOV EBP,dword ptr [EDI]
// 004a2b49: ADD EBX,0x4
// 004a2b4c: CMP ESI,EBP
// 004a2b4e: JL 0x004a2b28
//   XREF to: 004a2b28 (CONDITIONAL_JUMP)
// 004a2b50: PUSH 0xb0d
//   Label: LAB_004a2b50
// 004a2b55: PUSH 0x62368c
//   XREF to: 0062368c (DATA)
// 004a2b5a: MOV EAX,dword ptr [EDI + 0x8]
// 004a2b5d: PUSH EAX
// 004a2b5e: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 004a2b63: ADD ESP,0xc
// 004a2b66: POP EBX
// 004a2b67: POP ESI
// 004a2b68: MOV dword ptr [EDI + 0x8],0x0
//   Label: LAB_004a2b68
// 004a2b6f: MOV dword ptr [EDI + 0x4],0x0
// 004a2b76: MOV dword ptr [EDI],0x0
// 004a2b7c: POP EBP
// 004a2b7d: POP EDI
// 004a2b7e: RET
