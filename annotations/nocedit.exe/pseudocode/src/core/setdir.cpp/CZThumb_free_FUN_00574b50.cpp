// Name: core_setdir.cpp_CZThumb_free_FUN_00574b50
// Address: 00574b50
// Address Range: [[00574b50, 00574b91]]
// Convention: __cdecl
// Signature: void core_setdir.cpp_CZThumb_free_FUN_00574b50(CZThumb * this_ptr)
// Cross-references:
//   core_setdir.cpp_CDemonSet_freeThumbs_FUN_00575df0 (00575df0) at 00575e10 [UNCONDITIONAL_CALL]
//   core_setdir.cpp_CZThumb_dtor_FUN_005748f0 (005748f0) at 005748f6 [UNCONDITIONAL_CALL]
//   core_setdir.cpp_CZThumb_saveZBufferTable_FUN_00574910 (00574910) at 00574921 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_setdir_cpp_00646498
// Function calls:
//   shape_memdbg.cpp_debugFree_FUN_0050f460

#include "nocturne.h"

void __cdecl core_setdir_cpp_CZThumb_free_FUN_00574b50(CZThumb *this_ptr)

{
  if (this_ptr->zbuffer_data == (void *)0x0) {
    this_ptr->height = 0;
    this_ptr->width = this_ptr->height;
    return;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f460(this_ptr->zbuffer_data,"..\\core\\setdir.cpp",0xbb);
  this_ptr->zbuffer_data = (void *)0x0;
  this_ptr->height = 0;
  this_ptr->width = this_ptr->height;
  return;
}


// Assembly code:
// 00574b50: PUSH EBX
//   Label: core_setdir.cpp_CZThumb_free_FUN_00574b50
// 00574b51: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00574b55: MOV EDX,dword ptr [EBX + 0x24]
// 00574b58: TEST EDX,EDX
// 00574b5a: JNZ 0x00574b6a
//   XREF to: 00574b6a (CONDITIONAL_JUMP)
// 00574b5c: MOV dword ptr [EBX + 0x4],0x0
// 00574b63: MOV EAX,dword ptr [EBX + 0x4]
// 00574b66: MOV dword ptr [EBX],EAX
// 00574b68: POP EBX
// 00574b69: RET
// 00574b6a: PUSH 0xbb
//   Label: LAB_00574b6a
// 00574b6f: PUSH 0x646498
//   XREF to: 00646498 (DATA)
// 00574b74: PUSH EDX
// 00574b75: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 00574b7a: ADD ESP,0xc
// 00574b7d: MOV dword ptr [EBX + 0x24],0x0
// 00574b84: MOV dword ptr [EBX + 0x4],0x0
// 00574b8b: MOV EAX,dword ptr [EBX + 0x4]
// 00574b8e: MOV dword ptr [EBX],EAX
// 00574b90: POP EBX
// 00574b91: RET
