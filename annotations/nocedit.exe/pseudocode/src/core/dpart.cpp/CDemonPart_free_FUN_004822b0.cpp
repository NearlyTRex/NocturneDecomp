// Name: core_dpart.cpp_CDemonPart_free_FUN_004822b0
// Address: 004822b0
// Address Range: [[004822b0, 00482323]]
// Convention: __cdecl
// Signature: void core_dpart.cpp_CDemonPart_free_FUN_004822b0(CDemonPart * this_ptr)
// Cross-references:
//   core_dpart.cpp_CDemonPart_alloc_FUN_00482180 (00482180) at 00482191 [UNCONDITIONAL_CALL]
//   core_dpart.cpp_CDemonPart_dtor_FUN_00482160 (00482160) at 00482166 [UNCONDITIONAL_CALL]
//   core_dpart.cpp_CDemonPart_processAndFinalize_FUN_00482e40 (00482e40) at 00482e79 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_dpart_cpp_00621741
//   TerminatedCString s_core_dpart_cpp_00621753
//   TerminatedCString s_core_dpart_cpp_00621765
// Function calls:
//   shape_memdbg.cpp_debugFree_FUN_0050f460

#include "nocturne.h"

void __cdecl core_dpart_cpp_CDemonPart_free_FUN_004822b0(CDemonPart *this_ptr)

{
  if (this_ptr->vertex_positions != (CVector3i *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460
              (this_ptr->vertex_positions,"..\\core\\dpart.cpp",0xa9);
    this_ptr->vertex_positions = (CVector3i *)0x0;
  }
  if (this_ptr->face_data != (SSurfacePlane *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460(this_ptr->face_data,"..\\core\\dpart.cpp",0xae);
    this_ptr->face_data = (SSurfacePlane *)0x0;
  }
  if (this_ptr->vertex_normals == (CVector3i *)0x0) {
    return;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f460(this_ptr->vertex_normals,"..\\core\\dpart.cpp",0xb3);
  this_ptr->vertex_normals = (CVector3i *)0x0;
  return;
}


// Assembly code:
// 004822b0: PUSH EBX
//   Label: core_dpart.cpp_CDemonPart_free_FUN_004822b0
// 004822b1: PUSH ESI
// 004822b2: PUSH EBP
// 004822b3: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004822b7: MOV EDX,dword ptr [EBX + 0x2c]
// 004822ba: TEST EDX,EDX
// 004822bc: JNZ 0x004822ea
//   XREF to: 004822ea (CONDITIONAL_JUMP)
// 004822be: MOV ESI,dword ptr [EBX + 0x34]
//   Label: LAB_004822be
// 004822c1: TEST ESI,ESI
// 004822c3: JZ 0x004822df
//   XREF to: 004822df (CONDITIONAL_JUMP)
// 004822c5: PUSH 0xae
// 004822ca: PUSH 0x621753
//   XREF to: 00621753 (DATA)
// 004822cf: PUSH ESI
// 004822d0: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 004822d5: ADD ESP,0xc
// 004822d8: MOV dword ptr [EBX + 0x34],0x0
// 004822df: MOV EBP,dword ptr [EBX + 0x30]
//   Label: LAB_004822df
// 004822e2: TEST EBP,EBP
// 004822e4: JNZ 0x00482306
//   XREF to: 00482306 (CONDITIONAL_JUMP)
// 004822e6: POP EBP
// 004822e7: POP ESI
// 004822e8: POP EBX
// 004822e9: RET
// 004822ea: PUSH 0xa9
//   Label: LAB_004822ea
// 004822ef: PUSH 0x621741
//   XREF to: 00621741 (DATA)
// 004822f4: PUSH EDX
// 004822f5: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 004822fa: ADD ESP,0xc
// 004822fd: MOV dword ptr [EBX + 0x2c],0x0
// 00482304: JMP 0x004822be
//   XREF to: 004822be (UNCONDITIONAL_JUMP)
// 00482306: PUSH 0xb3
//   Label: LAB_00482306
// 0048230b: PUSH 0x621765
//   XREF to: 00621765 (DATA)
// 00482310: PUSH EBP
// 00482311: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 00482316: ADD ESP,0xc
// 00482319: MOV dword ptr [EBX + 0x30],0x0
// 00482320: POP EBP
// 00482321: POP ESI
// 00482322: POP EBX
// 00482323: RET
