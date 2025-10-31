// Name: core_dimage.cpp_CDemonImage_freeMemory_FUN_00471a40
// Address: 00471a40
// Address Range: [[00471a40, 00471a6c]]
// Convention: __cdecl
// Signature: void core_dimage.cpp_CDemonImage_freeMemory_FUN_00471a40(CDemonImage * this_ptr)
// Cross-references:
//   core_dimage.cpp_CDemonImage_allocMemory_FUN_004719e0 (004719e0) at 004719e6 [UNCONDITIONAL_CALL]
//   core_dimage.cpp_CDemonImage_dtor_FUN_004719c0 (004719c0) at 004719c6 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_dimage_cpp_0061ecaa
// Function calls:
//   shape_memdbg.cpp_debugFree_FUN_0050f460

#include "nocturne.h"

void __cdecl core_dimage_cpp_CDemonImage_freeMemory_FUN_00471a40(CDemonImage *this_ptr)

{
  if (this_ptr->data == (void *)0x0) {
    return;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f460(this_ptr->data,"..\\core\\dimage.cpp",0x36);
  this_ptr->data = (void *)0x0;
  return;
}


// Assembly code:
// 00471a40: PUSH EBX
//   Label: core_dimage.cpp_CDemonImage_freeMemory_FUN_00471a40
// 00471a41: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00471a45: MOV EDX,dword ptr [EBX + 0x300]
// 00471a4b: TEST EDX,EDX
// 00471a4d: JNZ 0x00471a51
//   XREF to: 00471a51 (CONDITIONAL_JUMP)
// 00471a4f: POP EBX
// 00471a50: RET
// 00471a51: PUSH 0x36
//   Label: LAB_00471a51
// 00471a53: PUSH 0x61ecaa
//   XREF to: 0061ecaa (DATA)
// 00471a58: PUSH EDX
// 00471a59: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 00471a5e: ADD ESP,0xc
// 00471a61: MOV dword ptr [EBX + 0x300],0x0
// 00471a6b: POP EBX
// 00471a6c: RET
